# Sid Meier's SimGolf — Reverse Engineering & Analyse Complète

Projet de rétro-ingénierie complète du binaire **golf.exe** et de ses DLLs associées (**Terrain.dll**, **jgld.dll**, **sound.dll**) du jeu *SimGolf* (Firaxis/Maxis, 2002). L'objectif est de documenter intégralement l'architecture, les formats de données, les algorithmes et les mécaniques du jeu original par analyse statique et désassemblage.

## Documentation

Le guide de référence complet se trouve dans [`docs/REFERENCE_GUIDE.md`](docs/REFERENCE_GUIDE.md) — 4000+ lignes couvrant :

- **§1-2** : Architecture technique, boucle de jeu, mémoire
- **§3** : Système de terrain (tuiles, élévation, types, familles, auto-tiling)
- **§4** : Rendu isométrique (caméra, projection dimétrique 2:1, TileGrid, culling)
- **§5** : Textures & Auto-Tiling exhaustif (5.1→5.17) :
  - 5.2 : Groupes géométriques A-E (élévation)
  - 5.3 : Masque de voisinage N/E/S/O
  - 5.4-5.10 : Inventaire complet des textures par type et thème
  - 5.8 : Matrice exhaustive des transitions entre types
  - 5.11 : borderOverride et border textures (Fairway→GrassBunker, SandBunker→GrassySand)
  - 5.17 : Rendu multi-passes — architecture complète de `populateRenderPasses` @ 0x10012ec0
- **§6-18** : Simulation, physique, IA golfeurs, économie, UI, audio, animations FLC, formats de données, sauvegardes, scénarios

Le spec d'auto-tiling des textures est également disponible dans [`SPECS_TEXTURE_AUTOTILING.md`](SPECS_TEXTURE_AUTOTILING.md).

## Projet Web

Le port web du moteur de rendu est dans un dépôt séparé :

- **[simgolf-web](https://github.com/alexandrerodenas/simgolf-web)** — Rendu Canvas 2D avec système multi-passes fidèle à l'original, textures Parkland converties en WebP, auto-tiling bitmask + overlays directionnels A-D.

## Structure du Projet

```
simgolf-re/
├── docs/                          ← Documentation
│   ├── REFERENCE_GUIDE.md         ← Guide de référence complet (tout le jeu)
│   └── index.md                   ← Table des matières
│
├── ref/                           ← Références rétro-ingénierie
│   ├── cleaned/                   ← Code C reconstitué et nettoyé
│   │   ├── ai/                    ←   IA des golfeurs
│   │   ├── audio/                 ←   Système audio
│   │   ├── game/                  ←   Moteur de jeu (physique, économie, scoring)
│   │   ├── physics/               ←   Physique de balle
│   │   ├── structs/               ←   Structures de données
│   │   ├── terrain/               ←   Moteur de terrain (render, tiles, elevation)
│   │   └── ui/                    ←   Interface utilisateur
│   │
│   ├── decompiled/                ← Décompilations Ghidra + manuelles
│   │   ├── *.c                    ←   Anciennes décompilations manuelles
│   │   └── ghidra/                ←   Décompilations Ghidra par module
│   │       ├── crt/               ←   Fonctions runtime C
│   │       ├── golf/              ←   golf.exe (UI, simulation, jeu)
│   │       ├── jgl/               ←   jgl.dll (moteur OpenGL software)
│   │       ├── jgld/              ←   jgld.dll (wrapper GDI/OpenGL)
│   │       ├── sound/             ←   sound.dll (Wave/MIDI)
│   │       └── terrain/           ←   Terrain.dll (rendu isométrique)
│   │
│   ├── raw_disasm/                ← Désassemblage brut (1.1M+ lignes)
│   │   ├── golf_exe_full_disasm.txt
│   │   ├── Terrain_dll_disasm.txt
│   │   ├── jgld_dll_disasm.txt
│   │   ├── sound_dll_disasm.txt
│   │   └── scripts/               ← 17+ scripts Python d'analyse ASM
│   │
│   └── types/                     ← Définitions TypeScript des structures C
│       └── game_data_types.ts
│
├── data/                          ← Données du jeu
│   ├── raw/                       ← Assets originaux extraits du CD
│   │   ├── Bodies/                ←   Sprites golfeurs
│   │   ├── Data/                  ←   Textures, données de jeu
│   │   ├── Flics/                 ←   Animations FLC
│   │   ├── Heads/                 ←   Portraits golfeurs
│   │   ├── Interface/             ←   UI sprites
│   │   ├── SimsFX/                ←   Effets visuels
│   │   ├── Sounds/                ←   Audio WAV
│   │   └── Themes/                ←   Thèmes visuels (Parkland, Links, Desert, Tropical)
│   │
│   ├── converted/                 ← Assets convertis
│   │   ├── webp/                  ←   Images fixes (PCX/BMP → WebP lossless)
│   │   ├── animations/            ←   Animations (FLC → Animated WebP)
│   │   └── tiles/                 ←   Tuiles 64×64 extraites des atlas de terrain
│   │
│   ├── exe/                       ← Binaires packés (version CD)
│   ├── exe_patched/               ← .exe patché
│   └── exe_unpacked/              ← .exe dépaqueté DEViANCE (946 Ko)
│
├── tools/                         ← Scripts Python organisés par thème
│   ├── analyze/                   ← Analyse binaire et formats
│   │   ├── analyze_data_formats.py
│   │   ├── analyze_flc.py
│   │   └── check_flc.py
│   ├── convert/                   ← Conversion d'assets
│   │   ├── convert_all_textures.py
│   │   ├── convert_all_to_webp.py
│   │   ├── convert_flc.py
│   │   ├── convert_pcx.py
│   │   ├── convert_textures.py
│   │   └── decode_flc.py
│   ├── parse/                     ← Parsing des fichiers de données
│   │   └── parse_game_data.py
│   ├── shell/                     ← Scripts shell d'analyse
│   └── types/                     ← Définitions de types (partagé avec ref/types)
│       └── game_data_types.ts
│
├── README.md
├── SPECS_TEXTURE_AUTOTILING.md
└── .gitignore
```

## Méthodologie

Le projet suit 4 passes d'analyse :

| Passe | Couche | Contenu | Statut |
|:-----:|:-------|:--------|:------:|
| **P1** | Data Layer | I/O, formats de fichiers, sérialisation, GameState | ✅ |
| **P2** | Simulation Layer | Physique, IA golfeurs, économie, scoring, tournois | ✅ |
| **P3** | Engine Layer | Terrain, tuiles, auto-tiling, rendu isométrique, multi-passes | ✅ |
| **P4** | Action Layer | UI, événements, dialogues, machine à états | ✅ |

### Découvertes clés (P3 — Moteur de terrain)

- **Tile** : 584 bytes (`0x248`), tableau row-major dans `Terrain` à offset `+0x3a4`
- **Voisins** : stockés comme pointeurs dans `tile->renderObjects[4]` (offset `+0x034`)
- **Familles** : table `typeInfo` à `Terrain+0x40`, stride 24 bytes — 7 familles (grass, play, sand, water, path, building, cliff)
- **Multi-passes** : `renderPassCount` à `+0x05c`, `renderPasses[]` à `+0x06c`, stride `0x38` (56 bytes)
- **`populateRenderPasses` @ 0x10012ec0** : détermine les textures de chaque passe selon le type, le borderOverride et les voisins
- **`renderSingleTile` @ 0x1000e6c0** : boucle OpenGL sur les passes, un triangle par passe, avec cache de texture
- **borderOverride** : Fairway→GrassBunker, SandBunker→GrassySand — un type emprunte les textures de bordure d'un autre
- **Auto-tiling** : les textures A-D directionnelles sont superposées en passes d'overlay alpha, pas encodées dans la variation

## Outils utilisés

| Outil | Usage |
|:------|:------|
| **objdump** (GNU binutils) | Désassemblage brut, extraction de chaînes, analyse PE |
| **Ghidra 12.1** | Analyse statique avancée, décompilation C, graphiques de flux |
| **ghidra-cli** (Rust) | Automatisation headless des analyses Ghidra |
| **Python / Capstone** | Désassemblage programmatique, scripts d'analyse, parsing binaire |
| **ImageMagick / cwebp** | Conversion et optimisation des textures (BMP/PCX → WebP) |

## Statistiques

- **4 binaires** analysés (golf.exe, Terrain.dll, jgld.dll, sound.dll)
- **3961 lignes** de documentation dans le REFERENCE_GUIDE
- **~40 fonctions** de Terrain.dll décompilées en C
- **600+ textures** Parkland converties en WebP
- **200+ animations** FLC converties en WebP animé
