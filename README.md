# Sid Meier's SimGolf — Reverse Engineering & Web Port

Repo de rétro-ingénierie complète de **SimGolf** (Firaxis/Maxis 2002) vers un remake web mobile-first (Canvas 2D + WebGL).

## Structure

```
simgolf-re/
├── raw_decomp/          ← Désassemblage brut (1.1M lignes)
│   ├── golf_exe/         golf.exe dépaqueté (131K → 1.1M lignes)
│   ├── Terrain_dll/      Terrain.dll — 38 exports, moteur 3D OpenGL
│   ├── jgld_dll/         jgld.dll — 1 199 fonctions, sprites GDI32
│   ├── sound_dll/        sound.dll — 12 exports, Wave/MIDI/WaveIn
│   └── scripts/          17 scripts Python d'analyse
│
├── cleaned_c/           ← Code C nettoyé et documenté
│   ├── terrain_*.c       12 fichiers (38/38 exports Terrain.dll)
│   ├── game_*.c          13 fichiers (pipeline complet golf.exe)
│   └── *.md              architecture, mapping, analyses
│
├── game_data/           ← Binaires et données originales
│   ├── exe/              DLLs + golf.exe packé
│   ├── exe_unpacked/     golf.exe dépaqueté DEViANCE (946 Ko)
│   ├── extracted/        Textures (2 671 BMP→PNG), UI (649 PCX→PNG)
│   ├── converted/        Animations FLC → PNG (1 892/1 893)
│   └── scripts/          9 scripts Python extraction/conversion
│
└── PLAN_DE_SUIVI.md
```

## Statut

| Étape | Statut |
|-------|:------:|
| Reverse engineering binaires PE32 (4 DLLs + EXE) | ✅ |
| Nettoyage C — Terrain.dll (38/38 exports) | ✅ |
| Nettoyage C — golf.exe (pipeline complet) | ✅ |
| Nettoyage C — Systèmes de jeu (éco, scoring, etc.) | ✅ |
| Conversion textures (BMP→PNG, PCX→PNG) | ✅ |
| Décodeur animations FLC (1 892/1 893) | ✅ |
| Parseur données (.chr, .glf, .pro, .dta) | ✅ (Python) |
| Portage Web TypeScript | 🔜 |

## Pipeline de rendu (découvert)

- **Terrain.dll** → OpenGL (44 imports) : rendu isométrique 3D du terrain
- **jgld.dll** → GDI32 (25 imports) : sprites 2D + polices overlay
- **sound.dll** → WINMM : Wave/MIDI/WaveIn

> *Correction majeure v2* : Terrain.dll NE passe PAS par GDI32 — c'est de l'OpenGL immediate mode (glBegin/glEnd, lumière, textures). JGL était un wrapper interne renommé, pas un moteur séparé.
