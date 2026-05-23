# SimGolf (2002) — Projet de Rétro-Ingénierie

**Guide de référence unique :** [REFERENCE_GUIDE.md](REFERENCE_GUIDE.md)

> Document fusionné à partir de 33 fichiers d'analyse (Mai 2026)
> **2900+ fonctions identifiées**, 42 fichiers décompilés (C reconstruit), 5 736 assets documentés
> **31 pages** — tout le code ASM, les matrices de transitions, les structures mémoire

## Structure du projet

```
simgolf-re/
├── docs/
│   ├── REFERENCE_GUIDE.md   ← LE guide complet (tout est ici)
│   ├── REFERENCE_GUIDE.pdf   ← Version PDF exportée
│   └── index.md              ← Cette page
├── ref/                      ← Références rétro-ingénierie
│   ├── cleaned/              ← Code C reconstitué par module
│   ├── decompiled/           ← Décompilations Ghidra + manuelles
│   ├── raw_disasm/           ← Désassemblage brut
│   └── types/                ← Définitions TypeScript
├── data/
│   ├── raw/                  ← Assets extraits (BMP originaux)
│   └── converted/            ← Assets convertis (WebP)
├── tools/
│   ├── convert/              ← Outils de conversion d'assets
│   ├── types/                ← TypeScript types (game_data_types.ts)
│   └── shell/                ← Scripts shell d'analyse
├── README.md                 ← Présentation du projet
└── SPECS_TEXTURE_AUTOTILING.md ← Spécification auto-tiling
```

## Contenu du guide

| Chapitre | Sujet |
|:---------|:------|
| [§1 — Architecture](REFERENCE_GUIDE.md#1-architecture-du-jeu) | EXE + DLLs, mémoire, boucle de jeu, mécanismes systèmes |
| [§2 — Données](REFERENCE_GUIDE.md#2-données) | Types, structures, formats de fichiers |
| [§3 — Terrain](REFERENCE_GUIDE.md#3-système-de-terrain) | Tuiles, élévation, types, TileGrid, variation |
| [§4 — Rendu](REFERENCE_GUIDE.md#4-rendu-isométrique) | Caméra, projection dimétrique 2:1, TileGrid, culling |
| [§5 — Auto-Tiling & Textures](REFERENCE_GUIDE.md#5-auto-tiling--textures) | 5.1→5.17 — géométrie AE, orientation AD, bordures, eau, overgrowth, multi-passes |
| [§6 — Simulation](REFERENCE_GUIDE.md#6-simulation) | Météo, chronologie, cycles jour/nuit |
| [§7 — IA Golfeurs](REFERENCE_GUIDE.md#7-ia-golfeurs) | Pros, célébrités, stats, décisions |
| [§8 — Physique](REFERENCE_GUIDE.md#8-physique) | Balle, clubs, trajectoires, collisions |
| [§9 — Scoring SGA](REFERENCE_GUIDE.md#9-scoring-sga) | Points, évaluation, classement |
| [§10 — Tournois](REFERENCE_GUIDE.md#10-tournois) | Types, scheduling, prize money, sponsors |
| [§11 — Économie](REFERENCE_GUIDE.md#11-économie) | Green fees, revenus, coûts, valeur club |
| [§12 — Interface](REFERENCE_GUIDE.md#12-interface) | Écrans, panels, input, dialogues |
| [§13 — Audio](REFERENCE_GUIDE.md#13-audio) | Sound DLL, Wave/MIDI, sons contextuels |
| [§14 — Animations FLC](REFERENCE_GUIDE.md#14-animations-flc) | Sprites animés, formats, conversion |
| [§15 — Formats de données](REFERENCE_GUIDE.md#15-formats-de-données) | .dta, .pro, .chr, .glf, .sve, .shp |
| [§16 — Sauvegardes](REFERENCE_GUIDE.md#16-sauvegardes) | top10.sve, save games |
| [§17 — Scénarios](REFERENCE_GUIDE.md#17-scénarios) | Campagnes, objectifs, déblocages |
| [§18 — Arbres](REFERENCE_GUIDE.md#18-arbres) | Système Woods (ID 14) + sprites FLC |

## Projet Web

Le port web du moteur de rendu est sur **[alexandrerodenas/simgolf-web](https://github.com/alexandrerodenas/simgolf-web)**.
