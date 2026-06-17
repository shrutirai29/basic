# Mumma Mother's Day website

Mobile-first static website for Mother's Day.

## Preview

Local preview URL in this Codex session:

`http://127.0.0.1:4173`

You can also open `index.html` directly, but local preview is better for testing.

## Sections

- Full-screen hero opening message
- Dreamy 3D memories gallery using photos from `pics`
- Games: Sudoku, 2048, Candy Match, Memory Match
- Password-protected letter section

## Letter

Letter section is in `index.html` inside:

`<article class="letter-paper locked" id="letterPaper" hidden>`

Password is set in `script.js`:

`29092005`

Hint shown on page:

`the day you become a mother`

## Deploy Fast: Netlify Drop

1. Open https://app.netlify.com/drop
2. Drag the full `D:\projects\Mumma` folder into the page.
3. Make sure `index.html`, `styles.css`, `script.js`, and the `pics` folder are included.
4. Netlify will give a public link. Send that link to Mumma.

## Deploy: GitHub Pages

1. Create a new GitHub repository.
2. Upload `index.html`, `styles.css`, `script.js`, `README.md`, and the full `pics` folder.
3. Go to Settings > Pages.
4. Select source branch `main`.
5. Wait a few minutes for the public link.
