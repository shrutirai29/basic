import fs from "node:fs/promises";
import path from "node:path";
import convert from "heic-convert";

const picsDir = path.resolve("pics");
const outDir = path.join(picsDir, "converted");
await fs.mkdir(outDir, { recursive: true });

const files = await fs.readdir(picsDir);
const heicFiles = files.filter((file) => file.toLowerCase().endsWith(".heic"));

for (const file of heicFiles) {
  const inputPath = path.join(picsDir, file);
  const outputName = `${path.parse(file).name}.jpg`;
  const outputPath = path.join(outDir, outputName);
  const inputBuffer = await fs.readFile(inputPath);
  const outputBuffer = await convert({
    buffer: inputBuffer,
    format: "JPEG",
    quality: 0.86
  });
  await fs.writeFile(outputPath, Buffer.from(outputBuffer));
  console.log(`${file} -> converted/${outputName}`);
}
