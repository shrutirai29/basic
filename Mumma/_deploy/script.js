const $ = (selector) => document.querySelector(selector);
const $$ = (selector) => Array.from(document.querySelectorAll(selector));

const photoFiles = [
  "20240522_153229.jpg",
  "20240522_161132.jpg",
  "20240522_172000.jpg",
  "20240522_172002.jpg",
  "20240523_193055.jpg",
  "20240523_193100.jpg",
  "20240624_151336.jpg",
  "20240624_151518.jpg",
  "20240624_151644.jpg",
  "20240624_151817.jpg",
  "20240624_152012.jpg",
  "20240624_152307.jpg",
  "20240624_152709.jpg",
  "20240702_174532.heic",
  "20240702_175422.heic",
  "20240702_175517.heic",
  "20240804_125320 - Copy.heic",
  "20240804_125320.heic",
  "20240804_125428 - Copy.heic",
  "20240804_125428.heic",
  "20240805_174834.heic",
  "20240805_174906.heic",
  "20240805_174930.heic",
  "20240805_175023.heic",
  "20240805_175038.heic",
  "20240805_175222.heic",
  "20240805_175424.heic",
  "20240805_175641.heic",
  "20240819_185356.jpg",
  "20240819_185401.jpg",
  "20240819_190313.heic",
  "20240819_190527.heic",
  "20241031_201002.heic",
  "20241031_201054.heic",
  "20241031_201114.heic",
  "20241102_120146.jpg",
  "20241102_120156.jpg",
  "20241102_152206.heic",
  "20241102_152218.heic",
  "20241102_154645.heic",
  "20241102_154649.heic",
  "20241107_163101.heic",
  "20241107_163102.heic",
  "20241107_170029.heic",
  "20241107_170302.heic",
  "20241107_170305.heic",
  "20241107_170313.heic",
  "20241107_171812.jpg",
  "20241107_171816.jpg",
  "20241107_171820.jpg",
  "20241107_171845.jpg",
  "20241107_171916.jpg",
  "20241107_171917.jpg",
  "20241107_172248.jpg",
  "20241107_172251.jpg",
  "20250101_170554.heic",
  "IMG-20240611-WA0000.jpg",
  "Scan19.jpg",
  "Scan26.jpg"
];

const captions = [
  "A memory that feels like home",
  "Mumma wali smile",
  "This belongs in the heart museum",
  "A tiny moment, a huge feeling",
  "Proof that love looks beautiful",
  "The softest corner of my life"
];

const galleryPhotos = photoFiles.map((file) => {
  if (!file.toLowerCase().endsWith(".heic")) return `pics/${file}`;
  const jpgName = file.replace(/\.heic$/i, ".jpg");
  return `pics/converted/${jpgName}`;
});

const languageToggle = $("#languageToggle");
let currentLang = "en";

const letterEnglish = $("#letterPaper").innerHTML;
const letterHindi = `
  <p>हेलो मम्मा,</p>
  <p>सबसे पहले, हैप्पी मदर्स डे।</p>
  <p>AAhhh मैं पहले ही बता दूँ, मुझे letters लिखना नहीं आता, तो पढ़कर हँसना तो बिल्कुल भी नहीं, नहीं तो मैं बात नहीं करूँगी बिल्कुल भी। So, कहाँ से start करूँ। यार मुझे इतना कुछ बोलना था, पर अभी ये लिखने बैठी हूँ तो कुछ भी याद नहीं आ रहा है।</p>
  <p>तो चलो मुझसे शुरू करते हैं। Mumma, I miss you soo much yaar. मैं बता नहीं सकती तुम्हें कि यहाँ इतनी दूर रहकर मुझे तुम्हारी कितनी कमी feel होती है। मुझे पता है मैं call नहीं करती, तुम करती हो तो उठाती नहीं हूँ, but I miss you. हमेशा। हर moment पर।</p>
  <p>याद है 1st sem में मुझे जब वो गंदा वाला बुखार हुआ था, वो पहली बार था जब मैं तुम्हारे बिना इतनी weak थी, और मैंने तुम्हें बहुत feel किया। जितना सिर मेरे बुखार की वजह से नहीं दुखता था, उससे ज़्यादा तुम्हें याद करके दुखता था। और मेरा 1st birthday यहाँ पर, तुम call पर थी और सारे दोस्त मेरे वहाँ थे, फिर भी I was feeling so lonely. बस इसलिए क्योंकि तुम मेरे पास नहीं थी। My first birthday without you.</p>
  <p>और मैंने ये तुम्हें नहीं बताया, और ना ही बताना चाहती थी, कि जब last sem मुझे वो anxiety और वो सब दोबारा हो रहा था, तो मैंने तुम्हें कितना miss किया। उस moment पर मुझे realize हुआ कि मैंने JEE वाला time सिर्फ तुम्हारी वजह से survive किया था।</p>
  <p>Mumma, मुझे पता है I am not good at anything. हर काम पता नहीं कैसे मैं बिगाड़ ही देती हूँ, but I wanna promise you this thing कि मैं तुम्हारे सारे सपने पूरे करूँगी, चाहे वो कितने भी छोटे या कितने भी बड़े क्यों ना हों। I will complete them all. और हाँ, तुम्हारे बूढ़े होने से पहले कर दूँगी, you don’t worry.</p>
  <p>You know, you are really my best best friend. आज तक मुझे कोई भी उतना नहीं समझ पाया जितना तुम समझ लेती हो, not even papa. हाँ, कभी-कभी वो ज्ञान देना थोड़ा overdose हो जाता है, but I love that also.</p>
  <p>I love everything about you. I love you, I love you, I love you soooooooooo much, जितना तुम सोच भी नहीं सकती उतना।</p>
  <p>I love you mumma</p>
  <p class="signature">From,<br />Your favorite person<br />( जो कि मेरे अलावा और कोई होना भी नहीं चाहिए )</p>
`;

const translations = {
  en: {
    brand: "For Mumma",
    nav: ["Home", "Memories", "Enjoy", "Letter"],
    langButton: "हिंदी",
    homeEyebrow: "Mother's Day special",
    homeTitle: "Hello Mumma",
    heroMessage: "finally tumhari beti badi ho gai hai, chup chup ke cards banane ke bajaye ab ye sab bana ke bhej rahi hai.",
    heroNote: "Explore everything on this website. I am sure you will love it.",
    enterMemories: "Enter memories",
    playGames: "Play games",
    galleryEyebrow: "3D memory walk",
    galleryTitle: "Mumma ki walking art gallery",
    walkButtons: ["Turn left", "Walk", "Turn right", "Back"],
    controlNote: "Use buttons, touchpad, drag, or tap a frame to go there.",
    frame: "Frame",
    gamesEyebrow: "Mumma's favourite games",
    gamesTitle: "You should also play them",
    gamesCopy: "I picked polished online games instead of boring half-made copies, so you can actually enjoy them with proper features, levels, hints, and smooth mobile play.",
    gameTitles: ["Sudoku", "2048", "Jigsaw Puzzle"],
    gameCopy: ["Calm brain game with proper difficulty levels and mobile support.", "Swipe, merge, and reach 2048. Simple but very addictive.", "Turn photos into puzzles, or play ready-made relaxing puzzles."],
    gameLinks: ["Play Sudoku", "Play 2048", "Play Jigsaw"],
    missions: ["Mission: solve one puzzle and get ek tight kiss.", "Mission: reach 512 and I will make chai or coffee.", "Mission: finish a puzzle and get one long hug."],
    letterEyebrow: "Secret letter",
    letterTitle: "Meri taraf se ek locked letter",
    letterCopy: "Password lagaya hai, kyunki ye part thoda extra special hai.",
    passwordLabel: "Password",
    unlock: "Unlock",
    hint: "Hint: the day you become a mother",
    wrongPassword: "Wrong password. Hint dekho aur phir try karo.",
    toast: "ye please aakle me padhan",
    captions
  },
  hi: {
    brand: "मम्मा के लिए",
    nav: ["होम", "यादें", "मज़ा", "लेटर"],
    langButton: "English",
    homeEyebrow: "मदर्स डे स्पेशल",
    homeTitle: "हेलो मम्मा",
    heroMessage: "finally तुम्हारी बेटी बड़ी हो गई है, चुप-चुप के cards बनाने के बजाय अब ये सब बना के भेज रही है।",
    heroNote: "इस website की हर चीज़ explore करना। मुझे पूरा यकीन है आपको बहुत पसंद आएगी।",
    enterMemories: "यादों में चलिए",
    playGames: "गेम खेलिए",
    galleryEyebrow: "3D यादों की सैर",
    galleryTitle: "मम्मा की walking art gallery",
    walkButtons: ["बाएँ मुड़ें", "आगे चलें", "दाएँ मुड़ें", "पीछे जाएँ"],
    controlNote: "Buttons, touchpad, drag, या किसी frame पर tap करके वहाँ पहुँचिए।",
    frame: "फ्रेम",
    gamesEyebrow: "मम्मा के favourite games",
    gamesTitle: "आपको ये भी खेलने चाहिए",
    gamesCopy: "मैंने अच्छे online games चुने हैं ताकि आपको proper features, levels और smooth mobile play मिल सके।",
    gameTitles: ["सुडोकू", "2048", "जिगसॉ पज़ल"],
    gameCopy: ["शांत दिमाग वाला puzzle game, difficulty levels और mobile support के साथ।", "Swipe करो, numbers merge करो, और 2048 तक पहुँचो।", "Photos को puzzle बनाओ या ready-made relaxing puzzles खेलो।"],
    gameLinks: ["सुडोकू खेलें", "2048 खेलें", "जिगसॉ खेलें"],
    missions: ["Mission: एक puzzle solve करो और ek tight kiss reward.", "Mission: 512 तक पहुँचो और मैं chai/coffee बनाऊँगी।", "Mission: एक puzzle finish करो और one long hug."],
    letterEyebrow: "Secret letter",
    letterTitle: "मेरी तरफ से एक locked letter",
    letterCopy: "Password लगाया है, क्योंकि ये part थोड़ा extra special है।",
    passwordLabel: "Password",
    unlock: "खोलिए",
    hint: "Hint: the day you become a mother",
    wrongPassword: "Password गलत है। Hint देखो और फिर try करो।",
    toast: "ये please अकेले में पढ़ना",
    captions: ["एक याद जो घर जैसी लगती है", "मम्मा वाली smile", "ये दिल के museum में रखनी चाहिए", "छोटा सा पल, बहुत बड़ी feeling", "प्यार सच में ऐसा दिखता है", "मेरी life का सबसे soft corner"]
  }
};

function setText(selector, text) {
  const element = $(selector);
  if (element) element.textContent = text;
}

function applyLanguage() {
  const t = translations[currentLang];
  document.documentElement.lang = currentLang === "hi" ? "hi" : "en";
  setText(".brand", t.brand);
  $$(".nav-link").forEach((button, index) => {
    button.textContent = t.nav[index];
  });
  languageToggle.textContent = t.langButton;
  languageToggle.setAttribute("aria-pressed", String(currentLang === "hi"));
  setText(".home-screen .eyebrow", t.homeEyebrow);
  setText("#home-title", t.homeTitle);
  setText(".hero-message", t.heroMessage);
  setText(".hero-note", t.heroNote);
  setText(".hero-actions .primary-action", t.enterMemories);
  setText(".hero-actions .secondary-action", t.playGames);
  setText(".gallery-hud .eyebrow", t.galleryEyebrow);
  setText("#memories-title", t.galleryTitle);
  $$(".walk-controls button").forEach((button, index) => {
    button.textContent = t.walkButtons[index];
  });
  setText(".control-note", t.controlNote);
  setText(".enjoy-screen .eyebrow", t.gamesEyebrow);
  setText("#enjoy-title", t.gamesTitle);
  setText(".enjoy-screen .section-head p:not(.eyebrow)", t.gamesCopy);
  $$(".game-launch").forEach((card, index) => {
    card.querySelector("h3").textContent = t.gameTitles[index];
    card.querySelector("p").textContent = t.gameCopy[index];
    card.querySelector("a").textContent = t.gameLinks[index];
    card.querySelector("small").textContent = t.missions[index];
  });
  setText(".letter-screen .eyebrow", t.letterEyebrow);
  setText("#letter-title", t.letterTitle);
  setText(".letter-screen .section-head p:not(.eyebrow)", t.letterCopy);
  setText(".letter-lock label", t.passwordLabel);
  setText("#unlockLetter", t.unlock);
  setText(".hint", t.hint);
  setText("#letterToast", t.toast);
  $("#letterPaper").innerHTML = currentLang === "hi" ? letterHindi : letterEnglish;
  $$(".frame-caption").forEach((caption, index) => {
    caption.textContent = `${index + 1}. ${t.captions[index % t.captions.length]}`;
  });
  updateGallery();
}

languageToggle.addEventListener("click", () => {
  currentLang = currentLang === "hi" ? "en" : "hi";
  applyLanguage();
});

function showView(viewId) {
  $$(".screen").forEach((screen) => screen.classList.toggle("active", screen.id === viewId));
  $$(".nav-link").forEach((button) => button.classList.toggle("active", button.dataset.view === viewId));
}

$$("[data-view]").forEach((item) => {
  item.addEventListener("click", (event) => {
    event.preventDefault();
    showView(item.dataset.view);
  });
});

const gallery = {
  x: 0,
  z: 0,
  angle: 0,
  focused: 0
};

function frameTransform(index) {
  const room = Math.floor(index / 8);
  const slot = index % 8;
  const side = slot % 2 === 0 ? -1 : 1;
  const depth = room * -1880;
  const z = depth - Math.floor(slot / 2) * 420;
  const x = side * (slot > 5 ? 760 : 640);
  const y = slot === 0 || slot === 1 ? -70 : slot % 3 === 0 ? 14 : -32;
  const rotate = side === -1 ? 86 : -86;
  return { x, y, z, rotate };
}

function buildGallery() {
  const world = $("#galleryWorld");
  world.innerHTML = "";

  photoFiles.forEach((file, index) => {
    const frame = document.createElement("button");
    frame.type = "button";
    frame.className = `photo-frame ${index % 9 === 0 ? "featured" : ""}`;
    frame.dataset.index = index;

    const img = document.createElement("img");
    img.src = galleryPhotos[index];
    img.alt = `Mumma memory ${index + 1}`;
    frame.appendChild(img);

    const caption = document.createElement("span");
    caption.className = "frame-caption";
    caption.textContent = `${index + 1}. ${captions[index % captions.length]}`;
    frame.appendChild(caption);

    const pos = frameTransform(index);
    frame.style.transform = `translate3d(${pos.x}px, ${pos.y}px, ${pos.z}px) rotateY(${pos.rotate}deg)`;
    frame.title = "Tap to walk to this memory";
    frame.addEventListener("click", () => focusFrame(index));
    world.appendChild(frame);
  });

  updateGallery();
}

function updateGallery() {
  const world = $("#galleryWorld");
  world.style.transform = `rotateY(${-gallery.angle}deg) translate3d(${-gallery.x}px, 8px, ${-gallery.z}px)`;
  $("#galleryCounter").textContent = `${translations[currentLang].frame} ${gallery.focused + 1} / ${photoFiles.length}`;
}

function focusFrame(index) {
  const pos = frameTransform(index);
  gallery.focused = index;
  gallery.x = pos.x > 0 ? 260 : -260;
  gallery.z = pos.z + 560;
  gallery.angle = pos.x > 0 ? -18 : 18;
  updateGallery();
}

function walk(direction) {
  const radians = (gallery.angle * Math.PI) / 180;
  const step = 340;
  if (direction === "forward") {
    gallery.x += Math.sin(radians) * step;
    gallery.z -= Math.cos(radians) * step;
    gallery.focused = Math.min(photoFiles.length - 1, gallery.focused + 1);
  }
  if (direction === "back") {
    gallery.x -= Math.sin(radians) * step;
    gallery.z += Math.cos(radians) * step;
    gallery.focused = Math.max(0, gallery.focused - 1);
  }
  if (direction === "left") gallery.angle -= 18;
  if (direction === "right") gallery.angle += 18;

  gallery.x = Math.max(-420, Math.min(420, gallery.x));
  gallery.z = Math.max(-13200, Math.min(140, gallery.z));
  updateGallery();
}

$$("[data-walk]").forEach((button) => {
  button.addEventListener("click", () => walk(button.dataset.walk));
});

window.addEventListener("keydown", (event) => {
  const keyMap = {
    ArrowUp: "forward",
    ArrowDown: "back",
    ArrowLeft: "left",
    ArrowRight: "right"
  };
  if (keyMap[event.key] && $("#memories").classList.contains("active")) {
    event.preventDefault();
    walk(keyMap[event.key]);
  }
});

let pointerDown = false;
let lastPointer = { x: 0, y: 0 };

$("#galleryViewport").addEventListener("pointerdown", (event) => {
  pointerDown = true;
  lastPointer = { x: event.clientX, y: event.clientY };
  $("#galleryViewport").setPointerCapture(event.pointerId);
});

$("#galleryViewport").addEventListener("pointermove", (event) => {
  if (!pointerDown || !$("#memories").classList.contains("active")) return;
  const dx = event.clientX - lastPointer.x;
  const dy = event.clientY - lastPointer.y;
  gallery.angle += dx * 0.08;
  gallery.z += dy * 1.45;
  gallery.z = Math.max(-13200, Math.min(140, gallery.z));
  lastPointer = { x: event.clientX, y: event.clientY };
  updateGallery();
});

$("#galleryViewport").addEventListener("pointerup", () => {
  pointerDown = false;
});

$("#galleryViewport").addEventListener("wheel", (event) => {
  if (!$("#memories").classList.contains("active")) return;
  event.preventDefault();
  gallery.z -= event.deltaY * 0.65;
  gallery.angle += event.deltaX * 0.05;
  gallery.z = Math.max(-13200, Math.min(140, gallery.z));
  updateGallery();
}, { passive: false });

$("#unlockLetter").addEventListener("click", () => {
  const password = $("#letterPassword").value.trim();
  if (password === "29092005") {
    $("#letterLock").hidden = true;
    const toast = $("#letterToast");
    toast.hidden = false;
    toast.classList.remove("fade-away");
    void toast.offsetWidth;
    toast.classList.add("fade-away");
    window.setTimeout(() => {
      toast.hidden = true;
      $("#letterPaper").hidden = false;
      $("#letterPaper").scrollTop = 0;
    }, 2600);
  } else {
    $("#letterStatus").textContent = translations[currentLang].wrongPassword;
  }
});

let audioContext;
let masterGain;
let musicTimer;
let musicOn = false;
let musicConnected = false;

function playSoftChord(time, notes) {
  notes.forEach((frequency, index) => {
    const oscillator = audioContext.createOscillator();
    const gain = audioContext.createGain();
    const filter = audioContext.createBiquadFilter();
    oscillator.type = index === 0 ? "triangle" : "sine";
    oscillator.frequency.setValueAtTime(frequency, time);
    oscillator.detune.setValueAtTime(index * 2, time);
    filter.type = "lowpass";
    filter.frequency.setValueAtTime(1100, time);
    gain.gain.setValueAtTime(0, time);
    gain.gain.linearRampToValueAtTime(0.028, time + 1.2);
    gain.gain.linearRampToValueAtTime(0.018, time + 4.2);
    gain.gain.linearRampToValueAtTime(0, time + 7.5);
    oscillator.connect(filter);
    filter.connect(gain);
    gain.connect(masterGain);
    oscillator.start(time);
    oscillator.stop(time + 8);
  });
}

function playBell(time, frequency) {
  const oscillator = audioContext.createOscillator();
  const gain = audioContext.createGain();
  oscillator.type = "sine";
  oscillator.frequency.setValueAtTime(frequency, time);
  gain.gain.setValueAtTime(0, time);
  gain.gain.linearRampToValueAtTime(0.05, time + 0.03);
  gain.gain.exponentialRampToValueAtTime(0.001, time + 2.2);
  oscillator.connect(gain);
  gain.connect(masterGain);
  oscillator.start(time);
  oscillator.stop(time + 2.3);
}

function scheduleMusic() {
  if (!musicOn || !audioContext) return;
  const now = audioContext.currentTime;
  const chords = [
    [174.61, 261.63, 329.63],
    [196.0, 293.66, 392.0],
    [164.81, 246.94, 329.63],
    [146.83, 220.0, 293.66]
  ];
  chords.forEach((chord, index) => {
    const start = now + index * 6;
    playSoftChord(start, chord);
    playBell(start + 0.25, chord[1] * 2);
    playBell(start + 1.8, chord[2] * 2);
    playBell(start + 3.4, chord[1] * 2);
  });
  musicTimer = window.setTimeout(scheduleMusic, 23000);
}

function startMusic() {
  if (musicOn) return;
  const AudioCtor = window.AudioContext || window.webkitAudioContext;
  if (!AudioCtor) return;
  audioContext ||= new AudioCtor();
  masterGain ||= audioContext.createGain();
  if (!musicConnected) {
    masterGain.connect(audioContext.destination);
    musicConnected = true;
  }
  masterGain.gain.setTargetAtTime(0.16, audioContext.currentTime, 0.8);
  audioContext.resume();
  musicOn = true;
  scheduleMusic();
}

function stopMusic() {
  if (!audioContext || !musicOn) return;
  musicOn = false;
  window.clearTimeout(musicTimer);
  masterGain.gain.setTargetAtTime(0, audioContext.currentTime, 0.25);
}

document.addEventListener("visibilitychange", () => {
  if (document.hidden) stopMusic();
  else if (audioContext) startMusic();
});

window.addEventListener("pagehide", stopMusic);
window.addEventListener("beforeunload", stopMusic);

document.addEventListener("pointerdown", () => startMusic(), { once: true });
document.addEventListener("keydown", () => startMusic(), { once: true });

buildGallery();
applyLanguage();
