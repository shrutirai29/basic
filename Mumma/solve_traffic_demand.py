from __future__ import annotations

import argparse
from pathlib import Path

import numpy as np
import pandas as pd


TARGET = "demand"
ID_COL = "Index"


def r2_score(y_true: np.ndarray, y_pred: np.ndarray) -> float:
    denom = np.sum((y_true - y_true.mean()) ** 2)
    if denom == 0:
        return 0.0
    return 1.0 - np.sum((y_true - y_pred) ** 2) / denom


def add_time_features(df: pd.DataFrame) -> pd.DataFrame:
    out = df.copy()

    ts = pd.to_datetime(out["timestamp"], errors="coerce")
    hour = ts.dt.hour
    minute = ts.dt.minute
    valid_ts = ts.notna()

    # Some challenge datasets store timestamp as HH:MM:SS; recover that shape if
    # pandas could not infer a full datetime.
    if valid_ts.mean() < 0.8:
        parts = out["timestamp"].astype(str).str.extract(
            r"(?P<hour>\d{1,2}):(?P<minute>\d{1,2})"
        )
        hour = pd.to_numeric(parts["hour"], errors="coerce")
        minute = pd.to_numeric(parts["minute"], errors="coerce")

    hour = hour.fillna(hour.mode().iloc[0] if not hour.mode().empty else 0).astype(float)
    minute = minute.fillna(0).astype(float)
    total_minutes = hour * 60.0 + minute

    out["hour"] = hour
    out["minute"] = minute
    out["total_minutes"] = total_minutes
    out["hour_sin"] = np.sin(2 * np.pi * total_minutes / 1440.0)
    out["hour_cos"] = np.cos(2 * np.pi * total_minutes / 1440.0)

    if "day" in out.columns:
        day = pd.to_numeric(out["day"], errors="coerce")
        day = day.fillna(day.median() if day.notna().any() else 0).astype(float)
        out["day_num"] = day
        out["day_sin"] = np.sin(2 * np.pi * day / 7.0)
        out["day_cos"] = np.cos(2 * np.pi * day / 7.0)

    return out


def smoothed_mean_map(
    train: pd.DataFrame,
    keys: list[str],
    target: str,
    global_mean: float,
    min_samples: int,
) -> pd.Series:
    grouped = train.groupby(keys, dropna=False)[target].agg(["mean", "count"])
    values = (grouped["mean"] * grouped["count"] + global_mean * min_samples) / (
        grouped["count"] + min_samples
    )
    return values


def apply_group_mean(
    df: pd.DataFrame,
    keys: list[str],
    values: pd.Series,
    fallback: float,
    name: str,
) -> pd.Series:
    if len(keys) == 1:
        mapped = df[keys[0]].map(values)
    else:
        key_frame = df[keys].copy()
        mapped = key_frame.merge(
            values.rename(name),
            how="left",
            left_on=keys,
            right_index=True,
        )[name]
    return mapped.fillna(fallback).astype(float)


def add_encoded_features(
    train_part: pd.DataFrame,
    apply_part: pd.DataFrame,
    global_mean: float,
) -> pd.DataFrame:
    out = apply_part.copy()
    groups = [
        (["geohash"], 8),
        (["geohash", "hour"], 15),
        (["geohash", "day"], 15),
        (["geohash", "RoadType"], 20),
        (["RoadType"], 8),
        (["Weather"], 8),
        (["RoadType", "Weather", "hour"], 25),
        (["NumberOfLanes", "RoadType"], 12),
    ]

    for keys, min_samples in groups:
        missing = [key for key in keys if key not in out.columns or key not in train_part.columns]
        if missing:
            continue
        values = smoothed_mean_map(train_part, keys, TARGET, global_mean, min_samples)
        name = "mean_" + "_".join(keys)
        out[name] = apply_group_mean(out, keys, values, global_mean, name)

    return out


def build_matrix(train: pd.DataFrame, test: pd.DataFrame) -> tuple[np.ndarray, np.ndarray, list[str]]:
    all_rows = pd.concat([train.drop(columns=[TARGET], errors="ignore"), test], axis=0, ignore_index=True)
    features: list[str] = []
    numeric_candidates = [
        "day_num",
        "hour",
        "minute",
        "total_minutes",
        "hour_sin",
        "hour_cos",
        "day_sin",
        "day_cos",
        "NumberOfLanes",
        "Temperature",
        "LargeVehicles",
        "Landmarks",
    ]
    numeric_candidates += [col for col in train.columns if col.startswith("mean_")]

    matrices = []
    for col in numeric_candidates:
        if col not in train.columns:
            continue
        combined = pd.to_numeric(all_rows[col], errors="coerce")
        fill = combined.median() if combined.notna().any() else 0.0
        values = combined.fillna(fill).astype(float).to_numpy()
        mean = values[: len(train)].mean()
        std = values[: len(train)].std()
        if std == 0:
            std = 1.0
        matrices.append(((values - mean) / std).reshape(-1, 1))
        features.append(col)

    for col in ["RoadType", "Weather"]:
        if col not in train.columns:
            continue
        dummies = pd.get_dummies(all_rows[col].astype("string").fillna("__missing__"), prefix=col)
        matrices.append(dummies.astype(float).to_numpy())
        features.extend(dummies.columns.tolist())

    x_all = np.hstack(matrices) if matrices else np.ones((len(all_rows), 1))
    intercept = np.ones((len(all_rows), 1))
    x_all = np.hstack([intercept, x_all])
    features = ["intercept"] + features
    return x_all[: len(train)], x_all[len(train) :], features


def fit_ridge(x: np.ndarray, y: np.ndarray, alpha: float = 8.0) -> np.ndarray:
    reg = np.eye(x.shape[1]) * alpha
    reg[0, 0] = 0.0
    return np.linalg.solve(x.T @ x + reg, x.T @ y)


def prepare(train: pd.DataFrame, test: pd.DataFrame) -> tuple[pd.DataFrame, pd.DataFrame, float]:
    train = add_time_features(train)
    test = add_time_features(test)
    global_mean = float(train[TARGET].mean())
    train = add_encoded_features(train, train, global_mean)
    test = add_encoded_features(train, test, global_mean)
    return train, test, global_mean


def validation_split(train: pd.DataFrame) -> tuple[np.ndarray, np.ndarray]:
    if "day" in train.columns and train["day"].nunique(dropna=True) > 2:
        day = pd.to_numeric(train["day"], errors="coerce")
        cutoff = day.quantile(0.8)
        valid = day >= cutoff
        if valid.mean() < 0.1 or valid.mean() > 0.5:
            valid = pd.Series(False, index=train.index)
            valid.iloc[int(len(train) * 0.8) :] = True
    else:
        valid = pd.Series(False, index=train.index)
        valid.iloc[int(len(train) * 0.8) :] = True
    return (~valid).to_numpy(), valid.to_numpy()


def blend_predictions(y_true: np.ndarray, candidates: dict[str, np.ndarray]) -> tuple[np.ndarray, dict[str, float]]:
    names = list(candidates)
    best_score = -np.inf
    best_weights: dict[str, float] = {}
    best_pred = candidates[names[0]]

    grid = np.linspace(0.0, 1.0, 11)
    if len(names) == 1:
        return best_pred, {names[0]: 1.0}

    for w0 in grid:
        for w1 in grid:
            if len(names) == 2:
                weights = np.array([w0, 1.0 - w0])
            else:
                w2 = 1.0 - w0 - w1
                if w2 < 0:
                    continue
                weights = np.array([w0, w1, w2])
            pred = sum(weights[i] * candidates[names[i]] for i in range(len(weights)))
            score = r2_score(y_true, pred)
            if score > best_score:
                best_score = score
                best_pred = pred
                best_weights = {names[i]: float(weights[i]) for i in range(len(weights))}

    return best_pred, best_weights


def make_submission(dataset_dir: Path, output_path: Path) -> None:
    train_path = dataset_dir / "train.csv"
    test_path = dataset_dir / "test.csv"
    sample_path = dataset_dir / "sample_submission.csv"

    for path in [train_path, test_path, sample_path]:
        if not path.exists():
            raise FileNotFoundError(f"Missing required file: {path}")

    train_raw = pd.read_csv(train_path)
    test_raw = pd.read_csv(test_path)
    sample = pd.read_csv(sample_path)

    fit_mask, valid_mask = validation_split(train_raw)
    train_fit_raw = train_raw.loc[fit_mask].copy()
    valid_raw = train_raw.loc[valid_mask].copy()

    train_fit, valid, global_mean = prepare(train_fit_raw, valid_raw.drop(columns=[TARGET], errors="ignore"))
    y_fit = train_fit[TARGET].astype(float).to_numpy()
    y_valid = valid_raw[TARGET].astype(float).to_numpy()
    x_fit, x_valid, _ = build_matrix(train_fit, valid)
    coef = fit_ridge(x_fit, y_fit)
    ridge_valid = x_valid @ coef

    candidates = {"ridge": ridge_valid}
    for col in ["mean_geohash_hour", "mean_geohash", "mean_RoadType_Weather_hour"]:
        if col in valid.columns:
            candidates[col] = valid[col].to_numpy()

    blended_valid, weights = blend_predictions(y_valid, candidates)
    score = max(0.0, 100.0 * r2_score(y_valid, blended_valid))
    print(f"Holdout score estimate: {score:.4f}")
    print("Blend weights:", weights)

    train_full, test_full, global_mean = prepare(train_raw, test_raw)
    x_train, x_test, _ = build_matrix(train_full, test_full)
    coef = fit_ridge(x_train, train_full[TARGET].astype(float).to_numpy())
    ridge_test = x_test @ coef

    test_candidates = {"ridge": ridge_test}
    for col in ["mean_geohash_hour", "mean_geohash", "mean_RoadType_Weather_hour"]:
        if col in test_full.columns and col in weights:
            test_candidates[col] = test_full[col].to_numpy()

    if weights:
        pred = np.zeros(len(test_full))
        for name, weight in weights.items():
            if name in test_candidates:
                pred += weight * test_candidates[name]
    else:
        pred = ridge_test

    pred = np.maximum(pred, 0.0)
    id_col = ID_COL if ID_COL in sample.columns else sample.columns[0]
    target_col = TARGET if TARGET in sample.columns else sample.columns[-1]
    submission = pd.DataFrame({id_col: test_raw[ID_COL].to_numpy(), target_col: pred})
    output_path.parent.mkdir(parents=True, exist_ok=True)
    submission.to_csv(output_path, index=False)
    print(f"Wrote {len(submission)} rows to {output_path}")


def main() -> None:
    parser = argparse.ArgumentParser(description="Train a traffic demand model and create submission.csv")
    parser.add_argument(
        "--data",
        type=Path,
        default=Path("dataset"),
        help="Folder containing train.csv, test.csv, sample_submission.csv",
    )
    parser.add_argument("--output", type=Path, default=Path("submission.csv"))
    args = parser.parse_args()
    make_submission(args.data, args.output)


if __name__ == "__main__":
    main()
