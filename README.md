# SimGolf Reverse Engineering

**simgolf-re** is a curated repository of original SimGolf (2002, Maxis/Firaxis) game files and their complete rizin-based disassembly.

## Structure

```
simgolf-re/
├── data/               original game files (345 MB)
│   ├── exe/            packed executables & DLLs
│   ├── exe_patched/    patched golf.exe
│   ├── exe_unpacked/   unpacked golf.exe (1 464 functions)
│   └── raw/            all game assets: textures, audio, animations, fonts, …
│
├── rizin_out/           rizin disassembly output (650+ MB, factual only)
│   ├── exe/            PE binaries: full linear disassembly, sections, strings
│   ├── pcx/            PCX image headers (128-byte hex dump) + strings
│   ├── raw/            BMP, FLC, WAV, TGA, … header dumps + strings
│   └── txt/            plain text file contents (raw dump via rizin)
│
└── README.md           this file
```

## Disassembled Binaries

| File | Source | Disasm Lines | Functions | Notes |
|---|---|---|---|---|
| `golf.exe` | `data/exe/golf.exe` | 755 368 | 54 | packed original |
| `golf.exe` | `data/exe_patched/golf.exe` | 759 440 | 58 | patched (still packed) |
| `golf.exe` | `data/exe_unpacked/golf.exe` | 759 098 | **1 464** | main target for analysis |
| `Terrain.dll` | `data/exe/Terrain.dll` | 385 588 | **995** | terrain engine |
| `sound.dll` | `data/exe/sound.dll` | 369 084 | **885** | audio system |
| `jgld.dll` | `data/exe/jgld.dll` | 1 165 369 | **1 519** | OpenGL debug lib |
| `jgl.dll` | `data/exe/jgl.dll` | 337 267 | 503 | OpenGL wrapper |
| `binkw32.dll` | `data/exe/binkw32.dll` | 203 616 | 354 | Bink video playback |

Each binary output includes:
- `headers.txt` — PE header dump
- `sections.txt` — section table
- `imports.txt` / `exports.txt` — symbol tables
- `libraries.txt` — linked libraries
- `strings_all.txt` — all embedded strings
- `functions_full.txt` — detected functions (`rizin -c aaaa; afl`)
- `full_disasm.txt` — linear disassembly of `.text` section (`rizin pd`)

## Asset Analysis

| Type | Files | Analysis |
|---|---|---|
| `.pcx` | 649 | 128-byte header hex dump, strings |
| `.bmp` | 2 631 | 54-byte BMP header dump, strings |
| `.flc` | 1 893 | 128-byte FLC header dump, strings |
| `.wav` | 320 | 44-byte RIFF header dump, strings |
| `.tga` | 36 | 18-byte TGA header dump, strings |
| `.txt` | 52 | plain text content dump |
| `.chr`/`.glf`/`.dta`/`.pro`/`.pal`/`.bik` | ~37 | header dump + strings |
| `.TTF`/`.fot` | 4 | raw font data dump |
| `.bat`/`.png`/other | ~8 | raw dump |

## Method

- **Only tool**: `rizin 0.8.2` (CLI)
- **No interpretation**: raw dumps only — hex, strings, linear disassembly
- **No hypotheses**: every output is factual rizin output
- **Code**: `pd` (linear disassembly), not `pdr` (recursive) — covers the full `.text` section including thunk tables

## Notes

- The original `golf.exe` is packed (UPX or equivalent). Only 54 functions are identifiable.
- The unpacked version (`data/exe_unpacked/golf.exe`) reveals 1 464 functions and is the primary analysis target.
- All DLLs (Terrain, sound, OpenGL, Bink) are unpacked and fully analyzable.
- Game assets total 11 385 files across multiple formats; each has been processed through rizin for header/metadata extraction.
