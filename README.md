# Sid Meier's SimGolf — Reverse Engineering & Analyse Complète

Projet de rétro-ingénierie complète du binaire **golf.exe** et de ses DLLs associées (**Terrain.dll**, **jgld.dll**, **sound.dll**) du jeu *SimGolf* (Firaxis/Maxis, 2002). L'objectif est de documenter intégralement l'architecture, les formats de données, les algorithmes et les mécaniques du jeu original par analyse statique et désassemblage.

## Documentation Complète

Le dossier [`docs/`](docs/index.md) contient un guide de référence complet couvrant tous les systèmes du jeu :

### Analyses détaillées par passe

| Document | Contenu |
|----------|---------|
| [ANALYSE_PASSE1_PERSISTANCE.md](docs/ANALYSE_PASSE1_PERSISTANCE.md) | P1 — Data Layer : I/O, sérialisation, formats de fichiers, GameState |
| [analyse_passe2_couche_systemique.md](docs/analyse_passe2_couche_systemique.md) | P2 — Simulation Layer : physique, IA golfeurs, économie, tournois |
| [ANALYSE_PASSE4_ACTION.md](docs/ANALYSE_PASSE4_ACTION.md) | P4 — Action Layer : UI, événements, dialogues, machine à états |
| [SYNTHESE_GLOBALE.md](docs/SYNTHESE_GLOBALE.md) | Synthèse transverse : bilans, dépendances, schémas globaux |

### Index du guide complet

| Document | Contenu |
|----------|---------|
| [Index](docs/index.md) | Structure du guide, aperçu du jeu, méthodologie |
| [01-architecture.md](docs/01-architecture.md) | Architecture technique : EXE + DLLs, mémoire, boucle de jeu |
| [02-terrain.md](docs/02-terrain.md) | Système de terrain : tuiles, élévation, rendu isométrique |
| [03-graphics.md](docs/03-graphics.md) | Pipeline graphique : JGL (2D) + Terrain.dll (OpenGL) |
| [04-golfers.md](docs/04-golfers.md) | Golfeurs : pros, célébrités, stats, IA |
| [05-physics.md](docs/05-physics.md) | Physique de balle, sélection de club, trajectoires |
| [06-scoring.md](docs/06-scoring.md) | Score SGA, évaluation des trous, classement |
| [07-tournaments.md](docs/07-tournaments.md) | Tournois SGA : types, scheduling, prize money |
| [08-economy.md](docs/08-economy.md) | Économie : green fees, revenus, coûts, valeur |
| [09-ui.md](docs/09-ui.md) | Interface utilisateur : écrans, panels, input |
| [10-audio.md](docs/10-audio.md) | Audio : sound.dll, WAVE/MIDI, sons UI |
| [11-animations.md](docs/11-animations.md) | Animations FLC : sprites, formats, conversion |
| [12-data-formats.md](docs/12-data-formats.md) | Formats de données : .dta, .pro, .chr, .glf, .sve |
| [13-save-system.md](docs/13-save-system.md) | Système de sauvegarde : top10.sve, save games |
| [14-scenarios.md](docs/14-scenarios.md) | Scénarios et campagnes |
| [15-asset-inventory.md](docs/15-asset-inventory.md) | Inventaire complet des assets (PCX, FLC, sons) |
| [16-function-map.md](docs/16-function-map.md) | Carte des fonctions ASM et adresses |
| [17-known-unknowns.md](docs/17-known-unknowns.md) | Ce qu'on ne sait pas encore |
| [18-trees.md](docs/18-trees.md) | Système des arbres : tuiles Woods (ID 14) + sprites FLC animés |
| [Analyse Variantes Tuiles](docs/analyse_variantes_tuiles.md) | Variations de textures par type de terrain |
| [DataFormatAnalysis.md](docs/DataFormatAnalysis.md) | Analyse complémentaire des formats binaires |
| [PLAN_DE_SUIVI.md](docs/PLAN_DE_SUIVI.md) | État d'avancement global du projet |

## Structure du Projet

```
simgolf-re/
├── docs/                ← Documentation complète (20+ docs + analyses par passe)
│
├── tools/               ← Scripts Python organisés par thème
│   ├── analyze/         ← Analyse binaire et formats (3 scripts)
│   ├── convert/         ← Conversion d'assets (6 scripts, dont decode_flc.py)
│   ├── parse/           ← Parsing des fichiers de données (.chr, .glf, .pro, .dta)
│   └── shell/           ← Scripts shell d'analyse et batch
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
│   ├── decompiled/      ← Code C reconstitué, nettoyé et documenté
│   ├── raw_disasm/      ← Désassemblage brut (1.1M+ lignes)
│   │   ├── golf_exe_full_disasm.txt
│   │   ├── Terrain_dll_disasm.txt
│   │   ├── jgld_dll_disasm.txt
│   │   ├── sound_dll_disasm.txt
│   │   └── scripts/     17+ scripts Python d'analyse
│   └── ...
│
├── src/
│   └── types/           ← Types de référence (définitions C/C++ transcrites)
│       └── game_data_types.ts
│
├── README.md
└── .gitignore
```

> **Note :** Le dossier `src/types/` contient les définitions de types (structures, énumérations) transcrites depuis le code C reconstitué, servant de documentation des structures de données — pas de code exécutable.

## Méthodologie de Reverse Engineering

Le projet suit une approche systématique en **4 passes** d'analyse, chacune ciblant une couche spécifique du jeu :

### P1 — Data Layer (I/O, GameState)
Analyse des formats de fichiers, de la sérialisation, du chargement/sauvegarde de l'état du jeu, et de la gestion des assets. Cette passe établit la **couche de persistance** : comment le jeu lit et écrit ses données.

- Désassemblage des fonctions de `LoadGame` / `SaveGame`
- Analyse des formats binaires (.dta, .pro, .chr, .glf, .sve)
- Extraction et conversion des assets (textures, animations, sons)
- Cartographie des structures de GameState en mémoire

### P2 — Simulation Layer (physique, IA, économie)
Analyse des systèmes de simulation : physique de la balle, comportement des golfeurs (IA), économie du club, scoring SGA, tournois. Cette passe décode les **règles du jeu** elles-mêmes.

- Désassemblage des algorithmes de trajectoire et de collision
- Analyse des tables de décision de l'IA des golfeurs
- Reconstruction du modèle économique (green fees, salaires, prestige)
- Logique de déroulement des tournois et calcul des scores

### P3 — Engine Layer (terrain, tuiles, collisions)
Analyse du moteur de rendu et de la géométrie du terrain : système de tuiles, élévation, rendu isométrique OpenGL, culling, collisions spatiales.

- Désassemblage de Terrain.dll (38 exports, pipeline OpenGL immediate mode)
- Système de grille de tuiles (TileGrid) : types, variations, connectivité
- Calcul des normales, lissage d'élévation, génération de terrain
- Rendu isométrique 3D : caméra, zoom, clipping

### P4 — Action Layer (UI, événements, dialogues)
Analyse de la couche interactive : machine à états de l'UI, gestion des entrées, dialogues, notifications, boucle d'événements.

- Désassemblage du système UI custom (jgld.dll : sprites 2D, polices, overlay GDI)
- Machine à états des écrans (menu principal, éditeur, jeu, options)
- Gestion des clics, sélection, drag & drop sur le terrain
- Dialogues, popups, messages système

**Validation croisée :** Chaque découverte est vérifiée par confrontation entre le code ASM, les chaînes extraites, les fichiers de données originaux et les observations de comportement in-game.

## Outils utilisés

| Outil | Usage |
|-------|-------|
| **objdump** (GNU binutils) | Désassemblage brut par sections, extraction de chaînes, analyse d'en-têtes PE |
| **Ghidra 12.1** | Analyse statique avancée : décompilation en C, graphiques de flux, référencement croisé |
| **ghidra-cli** | Automatisation des analyses Ghidra en mode headless pour traitement par lots |
| **Python / Capstone** | Désassemblage programmatique, scripts d'analyse personnalisés, parsing des formats binaires |
| **analyseHeadless** (Ghidra) | Exécution de scripts d'analyse Ghidra sans interface graphique, production de rapports |

## Pipeline de rendu (découvert)

- **Terrain.dll** → OpenGL (44 imports) : rendu isométrique 3D du terrain
- **jgld.dll** → GDI32 (25 imports) : sprites 2D + polices overlay
- **sound.dll** → WINMM : Wave/MIDI/WaveIn

> *Correction majeure v2* : Terrain.dll NE passe PAS par GDI32 — c'est de l'OpenGL immediate mode (glBegin/glEnd, lumière, textures). JGL était un wrapper interne renommé, pas un moteur séparé.

## Statut

| Étape | Statut |
|-------|:------:|
| Reverse engineering binaires PE32 (4 DLLs + EXE) | ✅ |
| Nettoyage C — Terrain.dll (38/38 exports) | ✅ |
| Nettoyage C — golf.exe (pipeline complet) | ✅ |
| Nettoyage C — Systèmes de jeu (éco, scoring, etc.) | ✅ |
| P1 — Data Layer (I/O, GameState, formats) | ✅ |
| P2 — Simulation Layer (physique, IA, économie) | ✅ |
| P3 — Engine Layer (terrain, tuiles, collisions) | 🔜 |
| P4 — Action Layer (UI, événements, dialogues) | ✅ |
| Conversion textures (BMP, PCX → WebP) | ✅ |
| Conversion animations (FLC → Animated WebP) | ✅ |
| Parseur données (.chr, .glf, .pro, .dta) | ✅ (Python) |
| Synthèse globale et analyse transverse | ✅ |

## Dernières stats

```bash
python3 tools/convert/convert_all_to_webp.py --stats
```
