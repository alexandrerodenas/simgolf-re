# Sid Meier's SimGolf — Reverse Engineering & Web Port

Repo de rétro-ingénierie complète de **SimGolf** (Firaxis/Maxis 2002) vers un remake web mobile-first (Canvas 2D + WebGL).

## Documentation Complète

Le dossier [`docs/`](docs/index.md) contient un guide de référence complet pour toute refonte :

| Document | Contenu |
|----------|---------|
| [Index](docs/index.md) | Structure du guide, aperçu du jeu |
| [Architecture](docs/01-architecture.md) | EXE + DLLs, mémoire, boucle de jeu |
| [Terrain](docs/02-terrain.md) | Tuiles, élévation, rendu isométrique |
| [Graphismes](docs/03-graphics.md) | JGL (2D) + Terrain.dll (OpenGL) |
| [Golfeurs](docs/04-golfers.md) | Pros, célébrités, stats, IA |
| [Physique](docs/05-physics.md) | ⚠️ À compléter |
| [Scoring](docs/06-scoring.md) | Score SGA, évaluation |
| [Tournois](docs/07-tournaments.md) | Types, scheduling, prize money |
| [Économie](docs/08-economy.md) | Green fees, revenus, coûts |
| [UI](docs/09-ui.md) | Écrans, panels, input |
| [Audio](docs/10-audio.md) | sound.dll, WAVE/MIDI |
| [Animations](docs/11-animations.md) | FLC, sprites, format |
| [Data Formats](docs/12-data-formats.md) | .dta, .pro, .chr, .glf, .sve |
| [Save System](docs/13-save-system.md) | ⚠️ À compléter |
| [Scenarios](docs/14-scenarios.md) | ⚠️ À compléter |
| [Asset Inventory](docs/15-asset-inventory.md) | PCX, FLC, WAV, textures BMP |
| [Function Map](docs/16-function-map.md) | Adresses ASM de toutes les fonctions |
| [Known Unknowns](docs/17-known-unknowns.md) | Ce qui reste à découvrir |
| [Analyse Variantes Tuiles](docs/analyse_variantes_tuiles.md) | Variations de textures par type de terrain |

## Structure du Projet

```
simgolf-re/
├── docs/                ← Documentation complète (18 docs + analyses)
│
├── tools/               ← Scripts Python organisés par thème
│   ├── analyze/         ← Analyse binaire et formats (3 scripts)
│   ├── convert/         ← Conversion d'assets (6 scripts, dont decode_flc.py)
│   ├── parse/           ← Parsing des fichiers de données (.chr, .glf, .pro, .dta)
│   └── shell/           ← Scripts shell (vide — à venir)
│
├── data/                ← Données du jeu
│   ├── raw/             ← Assets originaux extraits du CD (PCX, BMP, FLC, WAV, DLL)
│   ├── converted/       ← Convertis en WebP
│   │   ├── webp/        ←   → Images fixes (PCX/BMP → WebP lossless)
│   │   ├── animations/  ←   → Animations (FLC → Animated WebP)
│   │   └── tiles/       ←   → Tuiles 64×64 extraites des atlas de terrain
│   ├── exe/             ← Binaires .exe et DLL packés (version CD)
│   ├── exe_patched/     ← .exe patché
│   └── exe_unpacked/    ← .exe dépaqueté DEViANCE (946 Ko)
│
├── ref/                 ← Références rétro-ingénierie
│   ├── decompiled/      ← Code C nettoyé et documenté
│   ├── raw_disasm/      ← Désassemblage brut (1.1M lignes)
│   │   ├── golf_exe_full_disasm.txt
│   │   ├── Terrain_dll_disasm.txt
│   │   ├── jgld_dll_disasm.txt
│   │   ├── sound_dll_disasm.txt
│   │   └── scripts/     17 scripts Python d'analyse
│   └── ...
│
├── src/                 ← Code source du projet (simgolf-web)
│   └── types/           ← Définitions TypeScript des structures
│       └── game_data_types.ts
│
├── README.md
└── .gitignore
```

## Statut

| Étape | Statut |
|-------|:------:|
| Reverse engineering binaires PE32 (4 DLLs + EXE) | ✅ |
| Nettoyage C — Terrain.dll (38/38 exports) | ✅ |
| Nettoyage C — golf.exe (pipeline complet) | ✅ |
| Nettoyage C — Systèmes de jeu (éco, scoring, etc.) | ✅ |
| Conversion textures (BMP, PCX → WebP) | ✅ |
| Conversion animations (FLC → Animated WebP) | ✅ |
| Parseur données (.chr, .glf, .pro, .dta) | ✅ (Python) |
| Portage Web TypeScript | 🔜 |

## Pipeline de rendu (découvert)

- **Terrain.dll** → OpenGL (44 imports) : rendu isométrique 3D du terrain
- **jgld.dll** → GDI32 (25 imports) : sprites 2D + polices overlay
- **sound.dll** → WINMM : Wave/MIDI/WaveIn

> *Correction majeure v2* : Terrain.dll NE passe PAS par GDI32 — c'est de l'OpenGL immediate mode (glBegin/glEnd, lumière, textures). JGL était un wrapper interne renommé, pas un moteur séparé.

## Dernières stats

```bash
python3 tools/convert/convert_all_to_webp.py --stats
```
