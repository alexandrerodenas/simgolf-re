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
├── data/
│   ├── raw/                  ← Assets extraits (BMP originaux)
│   └── converted/            ← Assets convertis (WebP)
├── tools/
│   ├── convert/              ← Outils de conversion d'assets
│   ├── types/                ← TypeScript types (game_data_types.ts)
│   └── shell/                ← Scripts shell d'analyse
├── cleaned_c/                ← Code C reconstruit depuis Ghidra
└── README.md                 ← Présentation du projet
```

## Contenu du guide

| Chapitre | Sujet |
|----------|-------|
| 1 | Architecture Globale |
| 2 | Structures de Données |
| 3 | Système de Terrain |
| 4 | Rendu Isométrique & Culling |
| 5 | Auto-Tiling & Textures (variantes, matrices 435 transitions, ASM) |
| 6 | Élévation du Terrain |
| 7 | Chemins (Paths) |
| 8 | Murs (Walls) |
| 9 | Éclairage (Lighting) |
| 10 | Guide de Port Phaser 4 / WebGL |
| 11 | Physique de Balle |
| 12 | IA des Golfeurs |
| 13 | Économie & Gestion |
| 14 | Scoring & Tournois |
| 15 | Interface Utilisateur |
| 16 | Audio & Animations |
| 17 | Sauvegarde & Formats de Fichier |
| 18 | Scénarios & Campagne |
| 19 | Arbres & Décorations |
| 20 | Guide de Réimplémentation |
| 21 | Lacunes & Travaux Futurs |
| 22 | Annexes (adresses ASM, vtables, références) |
| 23 | Pipeline d'Assets |
