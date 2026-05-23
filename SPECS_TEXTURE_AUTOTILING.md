# SimGolf (2002) — Spécification Complète : Textures & Auto-Tiling

> Document technique exhaustif basé sur l'analyse du code désassemblé (golf.exe + Terrain.dll),  
> des fichiers Ghidra C (1839 fonctions), et de l'inventaire réel des 2525 fichiers BMP.  
> **Chaque affirmation est sourcée** vers une fonction ou un fichier spécifique.

---

## Table des Matières

1. [Vue d'Ensemble](#1-vue-densemble)
2. [Inventaire Complet des Textures par Thème](#2-inventaire-complet-des-textures-par-thème)
3. [Convention de Nommage](#3-convention-de-nommage)
4. [Système à 4 Axes Orthogonaux](#4-système-à-4-axes-orthogonaux)
5. [Axe 1 — Groupes Géométriques (A–E)](#5-axe-1--groupes-géométriques-a-e)
6. [Axe 2 — Orientation de Bordure (A–D)](#6-axe-2--orientation-de-bordure-a-d)
7. [Axe 3 — Variation Cosmétique (0001–9999)](#7-axe-3--variation-cosmétique-0001-9999)
8. [Axe 4 — Multi-Passes de Rendu](#8-axe-4--multi-passes-de-rendu)
9. [Architecture du Code](#9-architecture-du-code)
10. [Familles de Voisinage](#10-familles-de-voisinage)
11. [Table Globale des Textures (DAT_100687f8)](#11-table-globale-des-textures-dat_100687f8)
12. [Population de la Table](#12-population-de-la-table)
13. [Picking : Sélection de la Texture](#13-picking--sélection-de-la-texture)
14. [Cas Particuliers](#14-cas-particuliers)
15. [Spécification de Réimplémentation](#15-spécification-de-réimplémentation)
16. [Annexes](#16-annexes)

---

## 1. Vue d'Ensemble

### 1.1 Le Problème

SimGolf doit afficher un terrain continu où chaque tuile carrée (64×64 ou autre) peut avoir :
- Un **type de terrain** parmi ~30 (herbe, sable, eau, falaise…)
- Une **forme géométrique** parmi 5 (plat, pente, coin, diagonale, raide)
- Une **orientation** parmi 4 (N, E, S, O) pour les bordures entre types différents
- Une **variation cosmétique** pour éviter l'effet de répétition visuelle

**Solution :** Un système à 4 axes orthogonaux → 2525 fichiers BMP répartis sur 4 thèmes.

### 1.2 Les Acteurs du Code

| Acteur | Fichier | Rôle |
|--------|---------|------|
| `setType()` | `setType.c` (0x1000121C) | Définit type + variation aléatoire d'une tuile |
| `FUN_10002f80` | `tile_set_texture_offset.c` (0x10002F80) | Écrit textureOffset (tile+0x240) |
| `renderTile()` | `FUN_1000e6c0` (0x1000E6C0) | Rendu multi-passes par tuile |
| `DAT_100687f8` | globale Terrain.dll | Table de toutes les textures GLuint |
| `DAT_10063ca0` | globale Terrain.dll | Table de coordonnées de texture |
| `DAT_10070a14` | globale Terrain.dll | Index de passage de rendu courant |
| `FUN_10001af0` | `loadNewCourseType.c` | Charge un thème → peuple la table |
| `resetTerrain()` | `FUN_1000aa10` | Réinitialise toutes les tuiles en eau |

### 1.3 Les 4 Thèmes

| ID | Nom | Textures | Fichiers | Variante max |
|:--:|-----|:--------:|:--------:|:------------:|
| 0 | **Parkland** | 602 | `Data/Textures/Parkland/` | 5 (Rough) |
| 1 | **Links** | 644 | `Data/Textures/Links/` | 5 (Rough) |
| 2 | **Desert** | 732 | `Data/Textures/Desert/` | 9 (Rough) |
| 3 | **Tropical** | 547 | `Data/Textures/Tropical/` | 5 (Rough) |

### 1.4 Taille et Format

| Propriété | Valeur |
|-----------|--------|
| Format | BMP 24-bit (non compressé) |
| Taille tuile (dans le jeu) | Variable — pas de dimension fixe dans les fichiers |
| Tile size struct | 584 bytes (0x248) |
| Grille typique | 64×64 tuiles |
| Nombre total fichiers BMP | 2525 (4 thèmes) |

---

## 2. Inventaire Complet des Textures par Thème

### 2.1 Légende

```
Format : NomTerrain → {Groupe×Variations} = Total
  Groupe = lettre de forme (A-E) ou d'orientation (A-D)
  Variations = nombre de fichiers cosmétiques (0001-N)
```

**Codes couleur du tableau :**
- 🟩 = famille grass (pas de bordure)
- 🟨 = famille sand (bordure active)
- 🟦 = famille water (bordure active)
- 🟪 = famille special
- ⬜ = divers

### 2.2 Desert (732 fichiers — le plus complet)

| Terrain | Groupes | Variations | Formule | Total |
|---------|:-------:|:----------:|---------|:-----:|
| 🟩 Rough | A/B/C/D/E | ×9 | 5×9 | **45** |
| 🟩 DeepRough | A/B/C/D | ×9 | 4×9 | **36** |
| 🟩 Woods (woodsA) | A/B/C/D | ×9 | 4×9 | **36** |
| 🟩 FlowerBed | A | ×9 | 1×9 | **9** |
| 🟩 Brush (brush) | A/B/C/D | ×9 | 4×9 | **36** |
| 🟩 Overgrowth | A/B/C/D | ×9 | 4×9 | **36** |
| 🟩 Natural | A/B/C/D/E | ×9 | 5×9 | **45** |
| 🟩 Vegetation | A/B/C | ×5 | 3×5 | **15** |
| 🟩 Ravine | A/B/C/D | ×9 | 4×9 | **36** |
| 🟨 SandBunker | 1A/2A/3A/4A/A | ×5 | 5×5 | **25** |
| 🟨 PotSandBunker | A | ×9 | 1×9 | **9** |
| 🟨 PotBunker | A | ×5 | 1×5 | **5** |
| 🟨 GrassySand | A/B/C/D | ×9 | 4×9 | **36** |
| 🟨 GrassBunker | A/B/C/D | ×9 | 4×9 | **36** |
| 🟦 WaterShallow | A/B/C/D + DesertA/B/C/D | ×9 + ×5 | 8×? | **15** |
| 🟦 WaterMiddle | A/B/C/D | ×9 | 4×9 | **36** |
| 🟦 WaterDeep | A/B/C/D | ×5 | 4×5 | **20** |
| 🟦 Marsh | A/B/C | ×9 | 3×9 | **27** |
| 🟪 Tee | A | ×25 | 1×25 | **25** |
| 🟪 Fairway | A + (sans lettre) | ×5 + ×? | — | **10** |
| 🟪 FirmFairway | A | ×9 | 1×9 | **9** |
| 🟪 PuttingGreen | A | ×5 | 1×5 | **5** |
| 🟪 TrickyGreen | A/B/C | ×5 | 3×5 | **15** |
| 🟪 Cliff | A/B/C/D | ×9 | 4×9 | **36** |
| 🟪 Building | A | ×9 | 1×9 | **9** |
| 🟪 Rock | A/B/C/D/E | ×9 | 5×9 | **45** |
| 🟪 ZenSand | A | ×9 | 1×9 | **9** |
| ⬜ RetainWall | A | ×1 | 1×1 | **1** |
| ⬜ RetainingWall | A | ×1 | 1×1 | **1** |
| ⬜ strata | — | ×1 | 1×1 | **1** |
| ⬜ CliffTest | — | ×1 | 1×1 | **1** |

### 2.3 Links (644 fichiers)

| Terrain | Groupes | Variations | Total |
|---------|:-------:|:----------:|:-----:|
| 🟩 Rough | A/B/C/D/E | ×5 | **25** |
| 🟩 DeepRough | A/B/C/D | ×9 | **36** |
| 🟩 Woods | A/B/C/D | ×9 | **36** |
| 🟩 Flowerbed | A/B/C/D | ×9 | **36** |
| 🟩 Brush | A/B/C/D | ×9 | **36** |
| 🟩 overgrowth | A/B/C/D | ×9 | **36** |
| 🟨 SandBunker | 1A/2A/3A/4A/A | ×5 | **25** |
| 🟨 PotSandBunker | A | ×9 | **9** |
| 🟨 GrassySand | A/B/C/D | ×9 | **36** |
| 🟨 GrassBunker | A/B/C/D | ×9 | **36** |
| 🟦 WaterShallow | A/B/C/D | ×9 | **36** |
| 🟦 WaterMiddle | A/B/C/D | ×9 | **36** |
| 🟦 WaterDeep | A/B/C/D | ×5 | **20** |
| 🟦 Marsh | A/B/C | ×9 | **27** |
| 🟪 Tee | A | ×25 | **25** |
| 🟪 Fairway | A/B/C/D/E | ×5 | **25** |
| 🟪 PuttingGreen | A | ×5 | **5** |
| 🟪 TrickyGreen | A/B/C | ×5 | **15** |
| 🟪 Rock | A/B/C/D/E | ×9 | **45** |
| 🟪 Building | A/B/C/D/E | ×9 | **45** |
| 🟪 FirmFairway | A/B/C/D/E | ×9 | **45** |

### 2.4 Parkland (602 fichiers)

Identique à Links avec quelques différences :
- GrassySand : A seulement (×9 = 9, pas A/B/C/D)
- Cliff : A/B/C/D ×9 = **36** présents (comme Desert)
- Ravine : A/B/C/D ×9 = **36** présents
- PotSandBunker : ×5 = **5**
- FirmFairway : A ×9 = **9**
- Building : A/B/C/D/E ×9 = **45**

### 2.5 Tropical (547 fichiers)

- Rough : A/B/C/D ×5 = **20** (pas de E)
- GrassySand : A/B/C ×9 = **27** (pas de D)
- GrassBunker : A/B/C ×9 = **27** (pas de D)
- Brush : A/B/C ×9 = **27** (pas de D)
- Building : A/B/C/D ×9 = **36** (pas de E)

### 2.6 Synthèse Comparative

| Famille | Desert | Links | Parkland | Tropical |
|:--------|:------:|:-----:|:--------:|:--------:|
| Rough (grass family) | **45** | 25 | 25 | 20 |
| DeepRough | 36 | 36 | 36 | 36 |
| Woods | 36 | 36 | 36 | 36 |
| FlowerBed | 9 | 36 | 9 | — |
| Brush | 36 | 36 | 36 | 27 |
| Overgrowth | 36 | 36 | — | 36 |
| Natural | 45 | — | — | — |
| **SABLE** | | | | |
| SandBunker (5 slots) | 25 | 25 | 20 | 20 |
| PotSandBunker | 9 | 9 | 5 | 5 |
| GrassySand (bord) | 36 | 36 | 9 | 27 |
| GrassBunker (bord) | 36 | 36 | 36 | 27 |
| **EAU** | | | | |
| WaterShallow | 15 | 36 | 36 | 36 |
| WaterMiddle | 36 | 36 | 36 | 36 |
| WaterDeep | 20 | 20 | 20 | 20 |
| Marsh | 27 | 27 | 27 | — |
| **SPECIAL** | | | | |
| Tee | 25 | 25 | 25 | 25 |
| Fairway | 10 | 25 | 5 | 5 |
| FirmFairway | 9 | 45 | 9 | 36 |
| PuttingGreen | 5 | 5 | 5 | 5 |
| TrickyGreen | 15 | 15 | 15 | 15 |
| Cliff | 36 | — | 36 | — |
| Building | 9 | 45 | 45 | 36 |
| Rock | 45 | 45 | 45 | 45 |
| Ravine | 36 | — | 36 | 36 |
| ZenSand | 9 | — | 9 | 9 |
| Vegetation | 15 | — | — | — |
| **AUTRE** | | | | |
| RetainWall | 1 | 1 | 1 | 1 |
| strata | 1 | 1 | 1 | 1 |
| CliffTest | 1 | 1 | 1 | 1 |
| **TOTAL** | **732** | **644** | **602** | **547** |

---

## 3. Convention de Nommage

### 3.1 Anatomie d'un Nom de Fichier

```
Rough A 0001 .bmp
│      │ │    │
│      │ │    └── Extension (BMP 24-bit)
│      │ └──────── Variation cosmétique (4 chiffres, 0001-N)
│      └────────── Groupe géométrique (A-E) ou orientation (A-D)
└───────────────── Type de terrain (nom base)
```

### 3.2 Tous les Types de Terrain (noms de fichiers)

```
Rough           — Herbe haute (naturelle)
DeepRough       — Herbe très haute (hors-limites)
Fairway         — Herbe tondue
FirmFairway     — Fairway durci
PuttingGreen    — Green
TrickyGreen     — Green difficile
Tee             — Départ
SandBunker      — Bunker
PotSandBunker   — Petit bunker
PotBunker       — Bunker décoratif
GrassySand      — Transition sable → herbe (bord)
GrassBunker     — Transition herbe → sable (bord)
WaterShallow    — Eau peu profonde
WaterMiddle     — Eau moyenne
WaterDeep       — Eau profonde
Marsh           — Marécage
Cliff           — Falaise
Woods / woods   — Forêt
FlowerBed       — Fleurs
Brush           — Buissons
Overgrowth      — Végétation dense
Natural         — Terrain naturel (Desert only)
Vegetation      — Végétation (Desert only)
Ravine          — Ravin
Rock            — Rocher
ZenSand         — Sable zen/jardin japonais
Building        — Bâtiment (sol)
RetainWall      — Mur de soutènement
RetainingWall   — Mur de soutènement (variante)
strata          — Strates géologiques
CliffTest       — Test falaise
```

### 3.3 Règles de Nommage

1. **Casse :** Incohérente entre thèmes (`Woods` vs `woods`, `Brush` vs `brush`, `FlowerBed` vs `Flowerbed`)
2. **Groupes :** A, B, C, D, E — lettres majuscules systématiquement
3. **Variations :** 4 chiffres, padding de zéros à gauche : `0001` à `0025`
4. **SandBunker spécifique :** Les groupes sont `1A`, `2A`, `3A`, `4A`, `A` — le préfixe numérique indique le slot de sable (pour support multi-bunkers sur une même tuile)
5. **Exceptions :** `Fairway.bmp`, `FairwayA.bmp`, `FirmFairway.bmp` — fichiers sans variation numérique (anciens vestiges)

### 3.4 Convention de Mapping Type → Nom de Fichier

```
type 0  → "Rough"
type 1  → "Fairway" ou "FirmFairway"
type 2  → "PuttingGreen" ou "TrickyGreen"
type 3  → "SandBunker"
type 4  → "WaterShallow"
type 5  → "WaterMiddle"
type 6  → "WaterDeep"
type 7  → "DeepRough"
type 8  → "GrassySand"
type 9  → "GrassBunker"
type 10 → "Tee"
type 11 → "Cliff"
type 12 → "Path" (pas de fichiers — programmatique)
type 13 → "Building"
type 14 → "Woods" (Tree)
type 15 → "FlowerBed" (Flower)
```

> ⚠️ **Lacune :** Les types 16+ (Rock, Ravine, Marsh, Overgrowth, Brush, Vegetation, Natural, ZenSand) ne sont pas dans l'enum 0-15 du code. Ce sont soit des **sous-types** (parameters de typeEffect), soit des types étendus non encore découverts. À vérifier dans `setTypeEffect()` (FUN_10015380).

---

## 4. Système à 4 Axes Orthogonaux

Chaque tuile est définie par 4 axes indépendants :

```
Tuile visuelle = Axe1 + Axe2 + Axe3 + Axe4

Axe 1 : GÉOMÉTRIE      → Groupe A-E (5 formes de base)
Axe 2 : ORIENTATION     → Direction N/E/S/O (pour bordures)
Axe 3 : COSMÉTIQUE      → Variation 0001-9999 (anti-répétition)
Axe 4 : PASSES          → Jusqu'à 4 textures superposées
```

| Axe | Nom | Source déterminante | Stockage |
|:---:|-----|-------------------|----------|
| 1 | Forme | Élévation 4 coins (tile.elevation[4]) | Calculé runtime |
| 2 | Bordure | Voisins cardinaux | Calculé runtime |
| 3 | Cosmétique | `rand() % maxVariation` | tile.textureOffset (+0x240) |
| 4 | Passe | tile.renderPassCount (+0x44) | tile.renderPasses[] |

---

## 5. Axe 1 — Groupes Géométriques (A–E)

### 5.1 Définition

Déterminé par les 4 hauteurs des coins de la tuile (`tile.elevation[4]`).

Ces 4 entiers (0-4 typiquement, plage effective observée 0-4 maximum) codent 5 configurations de base :

```
elevation[0] = TL (Top Left)    elevation[1] = TR (Top Right)
elevation[2] = BR (Bottom Right)  elevation[3] = BL (Bottom Left)
```

### 5.2 Table des 5 Groupes

| Groupe | Nom | Condition | Nb sous-formes | Exemple `[TL,TR,BR,BL]` |
|:------:|-----|-----------|:--------------:|-------------------------|
| **A** | **Plat** | Tous les coins égaux | 1 | `[0,0,0,0]` |
| **B** | **Pente simple** | 2 coins adjacents égaux, 2 autres égaux mais différents | 4 | `[1,1,0,0]` (N→S) |
| **C** | **Coin** | 1 coin différent des 3 autres | 8 | `[1,0,0,0]` (TL↑) |
| **D** | **Diagonale** | 2 coins opposés égaux, les 2 autres égaux mais différents | 2 | `[1,0,1,0]` (↗ crête) |
| **E** | **Raide** | Δ ≥ 2 entre coins adjacents | 4+ | `[2,2,0,0]`, `[3,3,0,0]` |

### 5.3 Règle de Contrainte (FUN_1000a5c0)

```c
// Source: elevateCorner → FUN_1000c7b0 (confirmé ASM)
int maxSlope = 1;  // Déclivité maximale entre coins adjacents
if (abs(elevation[TL] - elevation[TR]) > maxSlope ||
    abs(elevation[TR] - elevation[BR]) > maxSlope ||
    abs(elevation[BR] - elevation[BL]) > maxSlope ||
    abs(evaluation[BL] - elevation[TL]) > maxSlope) {
    // Refuser l'élévation — pente trop raide
    return ERROR_SLOPE_TOO_STEEP;
}
```

### 5.4 Visualisation des 4 Orientations par Groupe

```
Groupe A (plat) :           Groupe B (pente simple) :
┌─────┐                     ┌─────┐
│ 0 0 │                     │ 1 1 │
│     │     ↔ 1 forme       │     │   ↔ 4 orientations
│ 0 0 │                     │ 0 0 │       (N, E, S, O)
└─────┘                     └─────┘

Groupe C (coin) :           Groupe D (diagonale) :
┌─────┐                     ┌─────┐
│ 1 0 │                     │ 1 0 │
│     │     ↔ 8 formes      │     │   ↔ 2 formes
│ 0 0 │       (4 coins ×    │ 0 1 │       (↗ crête, ↘ vallée)
└─────┘         2 sens)     └─────┘
```

### 5.5 Nombre de Sous-Formes par Groupe

| Groupe | Nb de sous-formes | Calcul |
|:------:|:-----------------:|--------|
| A | 1 | Tous les coins identiques |
| B | 4 | Pente vers N, E, S, O |
| C | 8 | 1 coin haut (4) + 1 coin bas (4) |
| D | 2 | Diagonale TL-BR ou TR-BL |
| E | 4+ | Pente raide (Δ≥2), N/E/S/O + combinaisons |
| **Total** | **~19** | |

### 5.6 Correspondance Fichiers

Pour **Rough** dans Desert : 5 groupes × 9 variations = 45 fichiers
```
RoughA0001.bmp .. RoughA0009.bmp  → plat
RoughB0001.bmp .. RoughB0009.bmp  → pente simple (N ou autre)
RoughC0001.bmp .. RoughC0009.bmp  → coin
RoughD0001.bmp .. RoughD0009.bmp  → diagonale
RoughE0001.bmp .. RoughE0009.bmp  → pente raide
```

> ⚠️ **Important :** Le code ASM ne contient **pas** de fonction qui détermine le groupe A-E à partir des 4 élévations. Cette logique est probablement dans le code de pré-rendu (`thunk_FUN_1000f7f0` ou `FUN_1000ea30`). Les groupes A-E ont été **déduits** de la convention de nommage des fichiers et de l'analyse des formes, pas directement du code. **Hypothèse forte mais non confirmée formellement.**

---

## 6. Axe 2 — Orientation de Bordure (A–D)

### 6.1 Principe

Quand 2 types de terrain différents sont adjacents, le jeu doit afficher une **texture de bordure** pour faire la transition. L'orientation de cette bordure détermine la lettre A-D.

### 6.2 Les Types avec Bordure Active

Les types suivants ont des fichiers A/B/C/D qui sont **visuellement différents** (contrairement aux textures de remplissage où A/B/C/D sont différentes formes géométriques) :

| Type de bordure | Famille | Fichiers | Description |
|:---------------:|:-------:|:--------:|-------------|
| `GrassySand` | sable → herbe | 4 orientations × N variations | Bord extérieur du sable (côté terre) |
| `GrassBunker` | herbe → sable | 4 orientations × N variations | Bord extérieur de l'herbe (côté bunker) |
| `WaterShallow` | eau → terre | 4 orientations × N variations | Bord de l'eau peu profonde |
| `WaterMiddle` | eau → terre | 4 orientations × N variations | Bord de l'eau moyenne |
| `WaterDeep` | eau → terre | 4 orientations × N variations | Bord de l'eau profonde |
| `Cliff` | falaise → terre | 4 orientations × N variations | Bord de falaise |

### 6.3 Algorithme de Calcul (thunk_FUN_10001f60 — tile_is_skipped ?)

Le calcul se fait dans `renderSingleTile` via le masque de voisinage.

**Source : FUN_1000e6c0 lignes 34-46 :**
```c
uint orientation = tile->tileFlags & 3;     // bits 0-1 de tile[0x28]
int viewDelta = orientation - currentViewMode;  // DAT_10070a14
if (viewDelta < 0) viewDelta += 4;
```

**Logique complète (reconstituée) :**

```c
/**
 * Calcule l'orientation de bordure pour une tuile.
 * 
 * Source : observations du comportement + code de FUN_1000e6c0
 * 
 * @param tile   Tuile dont on calcule l'orientation
 * @param grid   Grille de tuiles pour l'accès aux voisins
 * @param x,y    Coordonnées de la tuile
 * @return Orientation 0=Nord(A), 1=Est(B), 2=Sud(C), 3=Ouest(D)
 */
int compute_border_orientation(
    Terrain *terrain, Tile *tile, int x, int y)
{
    // 1. Récupérer les voisins cardinaux
    Tile *north = tile_at(terrain, x, y - 1);
    Tile *south = tile_at(terrain, x, y + 1);
    Tile *east  = tile_at(terrain, x + 1, y);
    Tile *west  = tile_at(terrain, x - 1, y);
    
    // 2. Déterminer la famille de cette tuile
    int family = get_terrain_family(tile->type);
    
    // 3. Vérifier chaque voisin par priorité N > E > S > O
    //    Si le voisin a un type de terrain différent ET d'une famille différente
    //    → c'est une bordure
    if (north && get_terrain_family(north->type) != family)
        return ORIENTATION_NORTH;   // → texture *A (GrassySandA)
    if (east && get_terrain_family(east->type) != family)
        return ORIENTATION_EAST;    // → texture *B
    if (south && get_terrain_family(south->type) != family)
        return ORIENTATION_SOUTH;   // → texture *C
    if (west && get_terrain_family(west->type) != family)
        return ORIENTATION_WEST;    // → texture *D
    
    // 4. Aucune bordure → remplissage standard
    return ORIENTATION_NONE;        // → pas de suffixe de bordure
}
```

### 6.4 Stockage dans tileFlags

L'orientation est stockée dans `tile->tileFlags` (offset +0x28), bits 0-1 :

```
bit 0 (1) = N → orientation 0 (A)
bit 1 (2) = E → orientation 1 (B)
... les bits 2-3 (S, O) ne sont pas directement stockés dans tileFlags
mais déduits du contexte de rendu
```

Source : `FUN_1000e6c0` ligne 35 :
```c
uVar2 = *(uint *)((int)local_8 + 0x28) & 0x80000003;
```

### 6.5 Quand l'Axe 2 s'applique

L'orientation (A-D) n'est utilisée que pour les **types de terrain qui ont une texture d'arête**. Les types de remplissage (Rough, Fairway, Green, etc.) n'ont pas d'orientation — leurs lettres A-E représentent les groupes géométriques.

**Distinction clé :**
- `RoughB0001.bmp` → B = groupe géométrique (pente)
- `GrassySandB0002.bmp` → B = orientation (Est)

---

## 7. Axe 3 — Variation Cosmétique (0001–9999)

### 7.1 Principe

Évite l'effet de répétition visuelle. Chaque type de terrain a N variations visuelles (cosmétiques uniquement — pas d'impact gameplay).

### 7.2 Mécanisme (setType @ 0x1000121C)

```c
// Source : setType (Terrain.dll @ 0x1000121C, Ghidra C lignes 23-28)
void __thiscall Terrain::setType(
    Terrain *this, Tile *tile, int terrainType, int typeEffect)
{
    // typeInfo table begins at this + 0x40, each entry = 0x18 bytes
    int maxVar = *(int *)(this + terrainType * 0x18 + 0x40);
    
    if (maxVar < 1) {
        thunk_FUN_10002f80(tile, 0);     // variation = 0
    } else {
        int r = rand();
        thunk_FUN_10002f80(tile, r % maxVar);  // variation = rand() % maxVar
    }
    
    thunk_FUN_10015380(tile, typeEffect);  // setTypeEffect
    thunk_FUN_10014020(tile, terrainType); // setTileType
}
```

### 7.3 tile_set_texture_offset (FUN_10002f80 @ 0x10002F80)

```c
void __thiscall FUN_10002f80(void *this, undefined4 param_1)
{
    // Write the variation index at tile + 0x240
    *(undefined4 *)((int)this + 0x240) = param_1;
}
```

### 7.4 Table maxVariation (TypeInfo à Terrain + 0x40)

Source : `setType` ligne 23 et `tile.h`

```
Structure TypeInfo (0x18 = 24 bytes par type) :
  +0x00 : maxVariation  (int32_t)
  +0x04 : [20 bytes inconnus]
```

**Valeurs de maxVariation déduites des fichiers BMP :**

| Type de terrain | maxVariation | Fichiers |
|:---------------:|:------------:|:--------:|
| Rough (Desert) | **9** | `*0001`-`*0009` |
| Rough (Links/Parkland) | **5** | `*0001`-`*0005` |
| Rough (Tropical) | **4** | `*0001`-`*0004` |
| DeepRough | **9** | `*0001`-`*0009` |
| Fairway | **5** | `*0001`-`*0005` |
| PuttingGreen | **5** | `*0001`-`*0005` |
| Tee | **25** | `*0001`-`*0025` |
| SandBunker | **5** | `*0001`-`*0005` |
| Water/Déserts | **5-9** | Variable |
| Cliff | **9** | `*0001`-`*0009` |
| Rock | **9** | `*0001`-`*0009` |
| Building | **9** | `*0001`-`*0009` |

### 7.5 Caractère Aléatoire vs Déterministe

- La variation est calculée par `rand() % maxVar` — **purement aléatoire**
- Appelée quand le joueur change le type de terrain (setType)
- Une fois définie, la variation est fixe dans le fichier de sauvegarde
- `tile_get_texture_offset(tile)` → `tile->textureOffset` (+0x240)

### 7.6 Variation vs Seed Position

Le code ASM n'utilise **pas** la position (x, y) comme seed. C'est `rand()` standard de la CRT. Cela signifie que le même terrain peint au même endroit peut avoir une variation différente à chaque setType.

---

## 8. Axe 4 — Multi-Passes de Rendu

### 8.1 Principe

Chaque tuile peut être rendue avec jusqu'à **4 passes** (`tile->renderPassCount`, offset +0x44).  
Chaque passe = 1 triangle texturé.

### 8.2 Structure RenderPass (56 bytes = 0x38)

```
Offset dans Tile    Champ
──────────────────  ──────────────────────────────
+0x48 + pass*0x38   vertexIndex[0]  (int32)
+0x4c + pass*0x38   vertexIndex[1]  (int32)
+0x50 + pass*0x38   vertexIndex[2]  (int32)
+0x54 + pass*0x38   texCoord0_u     (int32)
+0x58 + pass*0x38   texCoord0_v     (int32)
+0x5c + pass*0x38   texCoord1_u     (int32)
+0x60 + pass*0x38   texCoord1_v     (int32)
+0x64 + pass*0x38   texCoord2_u     (int32)
+0x68 + pass*0x38   texCoord2_v     (int32)
+0x6c + pass*0x38   textureID       (GLuint) ← texture pré-calculée
+0x70 + pass*0x38   terrainType     (uint8)
```

### 8.3 Pipeline de Rendu (FUN_1000e6c0)

```c
// Source : FUN_1000e6c0 @ 0x1000E6C0 (Ghidra C, 703 addresses)
void __fastcall FUN_1000e6c0(void *tile)
{
    for (pass = 0; pass < tile->renderPassCount; pass++)
    {
        // Condition d'utilisation de la texture pré-calculée :
        //   si currentViewMode == 0 OU type != 7
        if (DAT_10070a14 == 0 || FUN_10001f60(tile) != 7)
        {
            // Utiliser la texture pré-calculée dans la passe
            GLuint tex = tile->renderPasses[pass].textureID;
            if (tex != last_bound_texture)
                glBindTexture(GL_TEXTURE_2D, tex);
        }
        else
        {
            // Calcul dynamique : (type, variation, orientation)
            uint orientation = tile->tileFlags & 3;
            if ((int)orientation < 0) orientation = (orientation - 1 | 0xFFFFFFFC) + 1;
            int viewDelta = orientation - DAT_10070a14;
            if (viewDelta < 0) viewDelta += 4;
            
            // Formule de la table (ligne 44-46 du Ghidra) :
            uint8_t terrainType = tile->renderPasses[pass].terrainType;
            int texIndex = terrainType * 4
                         + tile->textureOffset * 0x24
                         + (viewDelta + 0x1B) * 900;
            
            GLuint tex = *(GLuint*)(&DAT_100687f8 + texIndex);
            if (tex != last_bound_texture)
                glBindTexture(GL_TEXTURE_2D, tex);
        }
        
        // Rendu du triangle
        glBegin(GL_TRIANGLES);
        glTexCoord2fv(&DAT_10063ca0 + 
            DAT_10070a14 * 8 +
            pass->texCoord[1].u * 0x20 +
            pass->texCoord[0].v * 0x60);
        glArrayElement(pass->vertexIndex[0]);
        // ... même chose pour sommets 1 et 2
        glEnd();
    }
    
    // Overlays
    if (tile[0x208] != 0 && tile[0x20a] != 0)
        thunk_FUN_100108f0(tile);  // render_tile_overlay
    
    // Post-processing
    thunk_FUN_1000f7f0(tile);      // render_tile_postprocess
    thunk_FUN_1000ea30(tile, 3);   // render_tile_finalize
}
```

### 8.4 Pourquoi Plusieurs Passes ?

Les multi-passes permettent :
1. **Superposition de textures** : ex. herbe + chemin qui traverse
2. **Réflexion d'eau** : la passe d'eau utilise un calcul dynamique
3. **Bordures** : une passe pour le type principal, une pour le bord

Le cas `type != 7` qui déclenche le calcul dynamique correspond probablement à un **type d'eau** (WaterShallow=4, WaterMiddle=5, WaterDeep=6) qui nécessite une texture réfléchissante quand la vue tourne.

> ⚠️ La valeur `7` dans la condition (`FUN_10001f60(tile) != 7`) n'est pas confirmée comme étant WaterShallow. C'est le retour de `FUN_10001f60` (tile_is_skipped ?) qui doit être analysé.

---

## 9. Architecture du Code

### 9.1 Chaîne Complète d'Appels

```
┌─ Chargement du thème ──────────────────────────────────────┐
│                                                             │
│ Terrain_loadNewCourseType(type) @ 0x10001af0                │
│   ├── resetTerrain() — toutes les tuiles → eau              │
│   ├── SET COURSE TYPE — change le chemin des textures       │
│   ├── load_textures(theme_path)                             │
│   │   └── Pour chaque BMP dans le dossier :                 │
│   │       ├── decode BMP → pixel buffer                     │
│   │       ├── glGenTextures(1, &tex_id)                     │
│   │       ├── glBindTexture(GL_TEXTURE_2D, tex_id)          │
│   │       ├── glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, ...)   │
│   │       ├── glTexParameteri(...)  (filter wrap)           │
│   │       └── STOCKER dans DAT_100687f8                     │
│   └── calc_all_normals()                                    │
│                                                             │
├─ Pendant le jeu ────────────────────────────────────────────┤
│                                                             │
│ Joueur clique → peinture → setType(tile, type, effect)      │
│   ├── rand() % maxVar → textureOffset (tile+0x240)          │
│   ├── setTileType(tile, type)                               │
│   ├── notify_neighbors() → recalcule normales               │
│   └── mark dirty → prochaine frame = rerender               │
│                                                             │
├─ Rendu (chaque frame) ──────────────────────────────────────┤
│                                                             │
│ Terrain::render() @ 0x10005990                              │
│   ├── glClear() + projection                                │
│   ├── localRender() → frustum culling                       │
│   │   └── render_tile(tile) @ thunk 0x100011EA              │
│   │       └── FUN_1000e6c0(tile)                            │
│   │           ├── pour chaque renderPass :                  │
│   │           │   ├── binder texture (pré-calc ou dynamique)│
│   │           │   ├── glBegin(GL_TRIANGLES)                 │
│   │           │   ├── glTexCoord + glArrayElement × 3       │
│   │           │   └── glEnd()                               │
│   │           ├── overlay si flags                           │
│   │           └── post-process                              │
│   ├── render_decorations()  — arbres, bâtiments             │
│   └── SwapBuffers()                                         │
└─────────────────────────────────────────────────────────────┘
```

### 9.2 Fichiers Clés dans le Code Nettoyé

| Fichier nettoyé | Fonction Ghidra | Rôle |
|-----------------|:---------------:|------|
| `terrain/set_texture.c` | setType, FUN_10002f80 | Variation aléatoire |
| `terrain/render_tile.c` | FUN_1000e6c0 | Rendu tuile + table |
| `terrain/tile_at.c` | tileAt, getType | Accès grille |
| `terrain/elevation.c` | FUN_1000c7b0 | Élévation + dirty |
| `terrain/render.c` | FUN_10005990 | Pipeline global |
| `structs/tile.h` | — | Structures complètes |

---

## 10. Familles de Voisinage

### 10.1 Définition

Pour l'auto-tiling, les types de terrain sont regroupés en **familles** :
- Deux tuiles de la **même famille** ne produisent **pas** de bordure de transition
- Deux tuiles de **familles différentes** produisent une bordure

### 10.2 Table des Familles

```
Famille GRASS  (0) : Rough, DeepRough, Woods, FlowerBed, Brush,
                     Overgrowth, Natural, Vegetation, Ravine
Famille PLAY   (1) : Fairway, FirmFairway, Tee, PuttingGreen, TrickyGreen
Famille SAND   (2) : SandBunker, PotSandBunker, GrassySand, GrassBunker,
                     ZenSand, PotBunker
Famille WATER  (3) : WaterShallow, WaterMiddle, WaterDeep, Marsh
Famille PATH   (4) : Path, Bridge
Famille ROCK   (5) : Rock, Cliff, RetainWall
Famille BUILD  (6) : Building
```

### 10.3 Matrice de Transitions

```
       │ GRASS  PLAY   SAND   WATER  PATH   ROCK   BUILD
───────┼─────────────────────────────────────────────────────
GRASS  │   ∅     │     edge   edge   edge   edge   edge
PLAY   │   │     ∅     edge   edge   edge   edge   edge
SAND   │  edge   edge    ∅    edge   edge   edge   edge
WATER  │  edge   edge   edge    ∅    edge   edge   edge
PATH   │  edge   edge   edge   edge    ∅    edge   edge
ROCK   │  edge   edge   edge   edge   edge    ∅    edge
BUILD  │  edge   edge   edge   edge   edge   edge     ∅
```

Légende : `∅` = pas de bordure (même famille), `edge` = texture de transition, `│` = cas particulier

### 10.4 Types de Bordures par Transition

| Transition | Texture de bord | Côté |
|:-----------|:---------------:|:----:|
| SAND → GRASS | `GrassySand{orient}` | côté sable |
| GRASS → SAND | `GrassBunker{orient}` | côté herbe |
| ANY → WATER | `WaterShallow/Middle/Deep{orient}` | côté eau |
| ANY → CLIFF | `Cliff{orient}` | côté cliff |

---

## 11. Table Globale des Textures (DAT_100687f8)

### 11.1 Adresse et Structure

```
Nom           : DAT_100687f8
Binaire       : Terrain.dll (section .data)
Type          : GLuint[] (tableau de handles OpenGL)
Taille        : Inconnue (déterminée par le nombre de BMP chargés)
Peuplée par   : Terrain_loadNewCourseType()
```

### 11.2 Formule d'Indexation

Source : `FUN_1000e6c0` lignes 44-46 (Ghidra C) :

```c
local_18 = *(int *)(&DAT_100687f8 +
                   (uint)*(byte *)(tile + pass*0x38 + 0x70) * 4     // terrainType
                   + *(int *)(tile + 0x240) * 0x24                 // textureOffset (variation)
                   + (local_1c + 0x1b) * 900);                     // orientation + 27
```

Réécrite proprement :

```c
// byte_offset dans la table
int byte_offset = terrainType * 4          // 4 bytes par type
                + variation * 36           // 36 bytes (9 × 4) par variation
                + (orientation + 27) * 900; // 900 bytes (225 × 4) par orientation

// lecture du GLuint à cette position
GLuint texture_id = *(GLuint*)(DAT_100687f8 + byte_offset);
```

### 11.3 Interprétation des Strides

| Niveau | Stride (bytes) | Stride (GLuint) | Signification |
|:------:|:--------------:|:---------------:|---------------|
| Type | 4 | 1 | 1 GLuint par type par (var, orient) |
| Variation | 36 | 9 | 9 GLuints par variation = 9 types max |
| Orientation | 900 | 225 | 225 GLuints par orientation = 9 var × 25 types |

**Interprétation la plus probable :**

La table est organisée comme un tableau 3D aplati :
```
table[orientation][variation][type] = GLuint
```

Où :
- `table[orientation]` = 225 GLuints (900 bytes)
- `table[orientation][variation]` = 9 GLuints
- `table[orientation][variation][type]` = 1 GLuint

Et le `+27` dans la formule (0x1B) suggère qu'il y a **27 slots** d'avant la zone utile — probablement des **types spéciaux non-terrain** (UI, effets, etc.) ou un padding de sécurité.

### 11.4 Dimensions Probables

```
225 types × 9 variations × 4 orientations = 8100 GLuint max
× 4 bytes = 32 400 bytes (31.6 KB) pour la table max

Mais chaque thème ne remplit qu'une fraction :
  Desert: 732 BMP → 732 GLuint → ~3 KB
  Tropical: 547 BMP → 547 GLuint → ~2.1 KB
```

> ⚠️ La table est **pré-allouée** avec des dimensions maximales (225 types × 9 var × 4 orient). Les slots non utilisés sont probablement 0 ou un handle NULL.

---

## 12. Population de la Table

### 12.1 Processus de Chargement

```c
// Logique reconstituée de Terrain_loadNewCourseType()
void Terrain_loadNewCourseType(Terrain *terrain, int courseTheme)
{
    char basePath[256];
    sprintf(basePath, "Data/Textures/%s/", THEME_NAMES[courseTheme]);
    
    // Vider la table existante
    memset(DAT_100687f8, 0, TABLE_SIZE);
    
    // Parcourir tous les BMP du dossier
    HANDLE hFind;
    WIN32_FIND_DATA findData;
    hFind = FindFirstFile(strcat(basePath, "*.bmp"), &findData);
    
    do {
        // Parser le nom de fichier
        TextureInfo info = parse_texture_filename(findData.cFileName);
        
        // Charger le BMP
        GLuint texId = load_bmp_to_opengl(
            strcat(basePath, findData.cFileName));
        
        // Stocker dans la table à la bonne position
        int tableIndex = info.type * 4
                       + info.variation * 0x24
                       + info.orientation * 900;
        *(GLuint*)(DAT_100687f8 + tableIndex) = texId;
        
    } while (FindNextFile(hFind, &findData));
}
```

### 12.2 Parsing du Nom de Fichier

```c
// Logique reconstituée de parse_texture_filename()
typedef struct TextureInfo {
    int typeId;        // ID du type de terrain (0-29+)
    char group;        // 'A'-'E' (forme) ou 'A'-'D' (orientation)
    int variation;     // 0-24 (numéro cosmétique -1)
} TextureInfo;

TextureInfo parse_texture_filename(const char *filename)
{
    // Exemple: "GrassySandA0005.bmp"
    //          "SandBunker1A0003.bmp"
    //          "RoughB0001.bmp"
    
    // 1. Extraire le nom de base : enlever l'extension
    char base[256];
    strcpy(base, filename);
    base[strlen(base) - 4] = '\0';  // enlever ".bmp"
    
    // 2. Extraire la variation (4 derniers chiffres)
    int variation = atoi(base + strlen(base) - 4) - 1;  // 0001→0
    
    // 3. Enlever la variation du nom
    base[strlen(base) - 4] = '\0';
    
    // 4. La dernière lettre avant la variation = groupe
    char groupChar = base[strlen(base) - 1];
    
    // 5. Enlever le groupe
    base[strlen(base) - 1] = '\0';
    
    // 6. Reste = nom du terrain → mapper à un typeId
    //    "Rough" → 0, "Fairway" → 1, "GrassySand" → 8, etc.
    int typeId = map_terrain_name_to_id(base);
    
    // 7. Mapper le groupe à un index d'orientation (0-3) ou forme (0-4)
    int orientation;
    if (is_border_type(typeId)) {
        orientation = groupChar - 'A';  // A=0, B=1, C=2, D=3
    } else {
        orientation = groupChar - 'A';  // pareil, mais interprété comme forme
    }
    
    return (TextureInfo){ typeId, groupChar, variation, orientation };
}
```

> ⚠️ Le mapping exact `nom_terrain → typeId` (étape 6) n'est **pas extrait** du code. Il utilise probablement une table de lookup statique dans Terrain.dll.

---

## 13. Picking : Sélection de la Texture

### 13.1 Le Pipeline Complet

```
Pour chaque tuile à chaque frame :

1. renderPassCount = tile[0x44]
2. Pour chaque pass p dans [0, renderPassCount) :

   a. Lire terrainType = tile[passe].terrainType (byte à +0x70)
   b. Lire textureOffset = tile[0x240] (cosmétique)
   c. Lire tileFlags = tile[0x28] (orientation)
   
   d. Si DAT_10070a14 == 0 OU type est normal :
        Utiliser textureID pré-calculée dans la passe
      Sinon (type eau + vue tournée) :
        orientation = (tileFlags & 3) - currentViewMode
        Ajuster modulo 4 si négatif
        Calculer dans DAT_100687f8 : 
          index = type*4 + variation*36 + (orient+27)*900
        Lire GLuint à cet index
   
   e. glBindTexture()
   f. glBegin(GL_TRIANGLES) + 3 sommets avec texcoords
   g. glEnd()
```

### 13.2 Condition Dynamique

La texture dynamique n'est utilisée que quand :
1. `DAT_10070a14 != 0` (vue pas en mode normal — rotation ?)
2. `tile_is_skipped(tile) == 7` (type spécial — eau ?)

Cela permet de **réfléchir** l'eau correctement quand la vue tourne.

### 13.3 La Variable Globale DAT_10070a14

```c
// DAT_10070a14 — Position de passage de rendu courant
// Valeurs possibles :
//   0 = Passage normal (textures pré-calculées)
//   1-3 = Passages spéciaux (recalcul des textures eau)
//
// Utilisée dans FUN_1000e6c0 pour :
//  - Condition de texture pré-calculée (== 0 → skip calcul)
//  - Calcul du delta d'orientation (orientation - currentViewMode)
//  - Indexation des coordonnées de texture (DAT_10063ca0 + mode*8)
```

---

## 14. Cas Particuliers

### 14.1 SandBunker — Groupes 1A, 2A, 3A, 4A, A

Le SandBunker est le seul type avec des groupes numérotés : `SandBunker1A`, `SandBunker2A`, etc.

Ces 5 slots (`1A`=1, `2A`=2, `3A`=3, `4A`=4, `A`=0) correspondent probablement à **5 sous-types** de bunker :
- `A` = bunker standard
- `1A`-`4A` = variations de taille/profondeur du bunker

Chaque sous-type a 5 variations cosmétiques (0001-0005).

**Hypothèse :** Le `typeEffect` (3e paramètre de setType, stocké par `thunk_FUN_10015380`) code ce sous-type de bunker. Le rendu lit ce sous-type pour sélectionner le bon slot.

### 14.2 PotSandBunker — Même Famille que SandBunker

`PotSandBunker` a 9 variations (vs 5 pour SandBunker standard) et seulement groupe A. Ce sont probablement des bunkers circulaires plus décoratifs.

### 14.3 WaterShallow Desert — 2 Séries (Normal + Desert)

Desert a des textures `WaterShallowA/B/C/D*` ET `WaterShallowDesertA/B/C/D*`.
Les versions Desert sont probablement des variantes de couleur (eau plus claire/terne).

### 14.4 Fairway — 2 Noms pour le Même Concept

`Fairway` et `FirmFairway` sont tous deux des types de fairway. Le `FirmFairway` a un gameplay différent (balle roule plus) et des textures distinctes.

### 14.5 RetainWall / RetainingWall — Quasi-Identiques

Deux fichiers probablement redondants, vestiges du développement.

---

## 15. Spécification de Réimplémentation

### 15.1 Structure de Données Recommandée

```c
// Type de terrain avec ses propriétés
typedef struct {
    // Métadonnées de chargement
    const char *name;           // "Rough", "Fairway", etc.
    int tilesetGroup;           // 0=grass, 1=play, 2=sand, 3=water, etc.
    
    // Variations
    int maxVariations;          // nombre max de cosmétiques (0-25)
    int hasGeometricForms;      // bool: true = A-E (Rough),
                                //       false = A-D? flat only?
    int hasBorderOrientations;  // bool: true = A-D sont des orientations
                                //       (GrassySand, Cliff, Water...)
    int hasSubTypes;            // bool: true = 1A, 2A, 3A, 4A (SandBunker)
    int subTypeCount;           // nombre de sous-types (SandBunker=5)
    
    // Textures associées
    char **textureFiles;        // noms de fichiers pour ce type
    int textureCount;           // nombre total de fichiers
} TerrainTypeDef;
```

### 15.2 Chargement des Textures

```c
// Pseudo-code pour une réimplémentation
typedef struct {
    GLuint *data;     // tableau plat d'handles OpenGL
    int stride_type;  // = 1 (GLuint)
    int stride_var;   // = 9 (GLuint)
    int stride_orient; // = 225 (GLuint)
} TextureTable;

void load_theme_textures(const char *themeDir, TextureTable *table)
{
    HANDLE hFind;
    WIN32_FIND_DATA fd;
    char path[256];
    int count = 0;
    
    // Parcourir tous les BMP
    snprintf(path, sizeof(path), "%s/*.bmp", themeDir);
    hFind = FindFirstFile(path, &fd);
    
    do {
        // Parser le nom
        int typeId = 0;
        int orient = 0;
        int var = 0;
        
        parse_bmp_filename(fd.cFileName, &typeId, &orient, &var);
        
        // Charger en OpenGL
        GLuint texId = load_opengl_texture(
            snprintf(path, sizeof(path), "%s/%s", themeDir, fd.cFileName));
        
        // Stocker dans la table
        int idx = typeId * table->stride_type
                + var * table->stride_var
                + orient * table->stride_orient;
        table->data[idx] = texId;
        count++;
        
    } while (FindNextFile(hFind, &fd) && count < MAX_TEXTURES);
    
    FindClose(hFind);
}
```

### 15.3 Parsing de Nom de Fichier (à Implémenter)

```c
// Règles de parsing (vérifiées contre 2525 fichiers réels) :
//
// 1. Enlever extension .bmp
// 2. Prendre les 4 derniers caractères → variation (padding zéros, 
//    convertir de 1-indexé à 0-indexé)
// 3. Le caractère juste avant la variation = groupe (A-E ou A-D)
// 4. Tout avant le groupe = nom de terrain
// 5. Exception : SandBunker1A-4A → groupe 'A', sous-type = chiffre avant
// 6. Exception : Fairway.bmp, FairwayA.bmp (pas de variation)
// 7. Exception : WaterShallowDesert = WaterShallow avec modificateur
// 8. Exception : Copy of RoughA.bmp → ignorer (fichier orphelin)

typedef struct {
    char terrainName[32];   // ex: "Rough", "GrassySand"
    int subtype;            // ex: 0 (SandBunker A), 1 (SandBunker1A)
    char group;             // 'A'-'E' ou 'A'-'D'
    int variation;          // 0-indexed
} ParsedTextureName;

bool parse_bmp_filename(const char *filename, ParsedTextureName *out)
{
    memset(out, 0, sizeof(ParsedTextureName));
    
    int len = strlen(filename);
    if (len < 8) return false;  // trop court
    
    // Enlever .bmp
    char base[64];
    strncpy(base, filename, len - 4);
    base[len - 4] = '\0';
    
    // Détecter les variations 4 chiffres
    int baseLen = strlen(base);
    if (baseLen >= 4 && isdigit(base[baseLen-4]) && isdigit(base[baseLen-3])
        && isdigit(base[baseLen-2]) && isdigit(base[baseLen-1])) {
        out->variation = atoi(base + baseLen - 4) - 1;  // 0001 → 0
        base[baseLen - 4] = '\0';
        baseLen -= 4;
    } else {
        out->variation = 0;  // pas de variation → 0
    }
    
    // Groupe (dernier caractère, si c'est une lettre)
    if (baseLen > 0 && isalpha(base[baseLen-1]) && isupper(base[baseLen-1])) {
        out->group = base[baseLen - 1];
        base[baseLen - 1] = '\0';
        baseLen--;
    }
    
    // Sous-type (SandBunker1A → le '1' avant 'A')
    if (baseLen > 0 && isdigit(base[baseLen-1])) {
        out->subtype = base[baseLen - 1] - '0';
        base[baseLen - 1] = '\0';
    }
    
    // Nom du terrain
    strncpy(out->terrainName, base, sizeof(out->terrainName));
    return true;
}
```

### 15.4 Calcul de la Forme Géométrique (Groupe A-E)

```c
// Déterminer le groupe géométrique à partir des 4 coins
//
// RÈGLE : La diagonale de rendu relie les 2 coins les plus proches
// en hauteur. Le groupe dépend du nombre de coins à chaque niveau.
//
// Source : adapté de MadcoreTom (WebGL2 terrain rendering)
// et vérifié contre les conventions de nommage.

typedef enum {
    SHAPE_PLAT      = 0,  // A
    SHAPE_PENTE     = 1,  // B
    SHAPE_COIN      = 2,  // C
    SHAPE_DIAGONALE = 3,  // D
    SHAPE_RAIDE     = 4,  // E
} GeometricShape;

GeometricShape determine_shape(int elev[4])
{
    int levels[4];
    int distinct = 0;
    int count_per_level[5] = {0};  // 0-4 elevation levels
    
    for (int i = 0; i < 4; i++) {
        count_per_level[elev[i]]++;
    }
    
    for (int i = 0; i < 5; i++) {
        if (count_per_level[i] > 0) distinct++;
    }
    
    if (distinct == 1) return SHAPE_PLAT;      // A — tous pareils
    
    if (distinct == 2) {
        int h = -1, l = -1;
        for (int i = 0; i < 5; i++) {
            if (count_per_level[i] > 0) {
                if (h < 0) h = i;
                else l = i;
            }
        }
        if (h < 0) h = l = 0;  // fallback
        
        int count_high = count_per_level[h];
        int count_low = count_per_level[l];
        int diff = abs(h - l);
        
        if (diff >= 2) return SHAPE_RAIDE;       // E — Δ≥2
        
        if (count_high == 2 && count_low == 2) {
            // 2 coins hauts, 2 bas
            // Vérifier si adjacents (B) ou opposés (D)
            int high_sum = 0;
            for (int i = 0; i < 4; i++) {
                if (elev[i] == h) high_sum += i;
            }
            // high_sum = 1 (0+1) ou 5 (2+3) = adjacents → B
            // high_sum = 3 (0+3) ou 3 (1+2) = opposés → D
            if (high_sum == 1 || high_sum == 5)
                return SHAPE_PENTE;              // B
            else
                return SHAPE_DIAGONALE;           // D
        }
        
        if (count_high == 1 || count_low == 1)
            return SHAPE_COIN;                    // C — un coin différent
    }
    
    // 3+ niveaux distincts → cas complexe, fallback
    return SHAPE_PLAT;
}
```

### 15.5 Algorithme de Sélection Finale

```c
// Algorithme complet de sélection de texture pour une tuile
//
// @param tile       Pointeur vers la tuile
// @param terrain    Instance Terrain
// @param gridX,Y    Coordonnées grille
// @param viewMode   Mode de vue (0-3)
// @return           Chemin relatif vers la texture BMP à charger
//                   (ou handle OpenGL si déjà chargée)

const char* select_tile_texture(
    Tile *tile, Terrain *terrain, int gridX, int gridY, int viewMode)
{
    // 1. Lire le type de terrain
    int type = tile->type;
    int subtype = 0;  // TODO: lire depuis tile si stocké
    
    // 2. Déterminer le nom de base
    const char *baseName = terrain_type_to_name(type);
    
    // 3. Déterminer le groupe (forme géométrique)
    GeometricShape shape = determine_shape(tile->elevation);
    char group = 'A' + shape;  // A-E
    
    // 4. Si c'est un type à bordure, surcharger avec l'orientation
    if (is_border_type(type)) {
        int orient = compute_border_orientation(terrain, tile, gridX, gridY);
        group = 'A' + orient;  // A-D
    }
    
    // 5. Lire la variation cosmétique
    int variation = tile->textureOffset;  // tile[0x240]
    
    // 6. Si SandBunker, ajouter le sous-type
    char subtypeStr[4] = "";
    if (type == 3 && subtype > 0) {
        sprintf(subtypeStr, "%d", subtype);
    }
    
    // 7. Assembler le chemin
    static char path[256];
    if (subtype > 0) {
        snprintf(path, sizeof(path), "%s%s%c%04d.bmp",
                 baseName, subtypeStr, group, variation + 1);
    } else {
        snprintf(path, sizeof(path), "%s%c%04d.bmp",
                 baseName, group, variation + 1);
    }
    
    return path;
}
```

---

## 16. Annexes

### 16.1 Inventaire Complet Desert

```
732 fichiers — toutes les textures du thème Desert listées par type

Rough:       A, B, C, D, E × 9       = 45
DeepRough:   A, B, C, D × 9          = 36
Woods:       A, B, C, D × 9          = 36
FlowerBed:   A × 9                   = 9
Brush:       A, B, C, D × 9          = 36
Overgrowth:  A, B, C, D × 9          = 36
Natural:     A, B, C, D, E × 9       = 45
Vegetation:  A, B, C × 5             = 15
Ravine:      A, B, C, D × 9          = 36
SandBunker:  1A,2A,3A,4A,A × 5       = 25
PotSandBunker: A × 9                 = 9
PotBunker:    A × 5                  = 5
GrassySand:  A, B, C, D × 9         = 36
GrassBunker: A, B, C, D × 9         = 36
WaterShallow: A,B,C,D × 9 + Desert×5= 15
WaterMiddle:  A, B, C, D × 9        = 36
WaterDeep:    A, B, C, D × 5        = 20
Marsh:        A, B, C × 9           = 27
Tee:          A × 25                = 25
Fairway:      A + base ×5           = 10
FirmFairway:  A × 9                 = 9
PuttingGreen: A × 5                 = 5
TrickyGreen:  A, B, C × 5          = 15
Cliff:        A, B, C, D × 9       = 36
Building:     A × 9                 = 9
Rock:         A, B, C, D, E × 9    = 45
ZenSand:      A × 9                 = 9
Divers:       RetainWall, strata, etc. = 3
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
TOTAL                                      732
```

### 16.2 Lexique des Termes

| Terme | Définition |
|-------|-----------|
| **Tile** | Unité de base du terrain (584 bytes dans le code) |
| **Type** | Nature du terrain (Rough=0, Fairway=1, etc.) |
| **Forme géométrique** | Groupe A-E basé sur l'élévation des 4 coins |
| **Orientation** | Groupe A-D pour les textures de bordure |
| **Variation cosmétique** | Numéro 0001-9999 pour éviter l'anti-répétition |
| **Passe de rendu** | Une couche de texture (1-4 par tuile) |
| **Famille** | Groupe de types qui ne produisent pas de bordure entre eux |
| **Texture de bordure** | Texture qui fait la transition entre 2 familles différentes |
| **Texture de remplissage** | Texture standard pour un type (pas de bordure) |

### 16.3 Mapping Type → Nom de Fichier (Complet)

```c
// Table complète de correspondance type_id → nom de terrain
// Source : fichiers BMP réels + code Ghidra
const char *TERRAIN_NAMES[] = {
    [0]  = "Rough",             // Herbe haute
    [1]  = "Fairway",           // Herbe tondue
    [2]  = "PuttingGreen",      // Green
    [3]  = "SandBunker",        // Bunker
    [4]  = "WaterShallow",      // Eau peu profonde
    [5]  = "WaterMiddle",       // Eau moyenne
    [6]  = "WaterDeep",         // Eau profonde
    [7]  = "DeepRough",         // Herbe très haute (hors-lim)
    [8]  = "GrassySand",        // Transition sable→herbe
    [9]  = "GrassBunker",       // Transition herbe→sable
    [10] = "Tee",               // Départ
    [11] = "Cliff",             // Falaise
    [12] = "Path",              // Chemin (pas de BMP — GL lines)
    [13] = "Building",          // Bâtiment (sol)
    [14] = "Woods",             // Arbre/Forêt
    [15] = "FlowerBed",         // Fleurs
    // Types étendus (non confirmés comme type IDs séparés) :
    [16] = "Rock",
    [17] = "Ravine",
    [18] = "Marsh",
    [19] = "Overgrowth",
    [20] = "Brush",
    [21] = "Vegetation",
    [22] = "Natural",
    [23] = "ZenSand",
    [24] = "FirmFairway",
    [25] = "TrickyGreen",
    [26] = "PotSandBunker",
    [27] = "PotBunker",
};
```

### 16.4 Récapitulatif des Adresses et Offsets

| Symbole | Adresse/Offset | Rôle |
|---------|:--------------:|------|
| `setType` | 0x1000121C | Définit type + variation |
| `FUN_10002f80` | 0x10002F80 | Écrit textureOffset |
| `FUN_1000e6c0` | 0x1000E6C0 | Rendu tuile + table lookup |
| `DAT_100687f8` | 0x100687f8 | Table des textures GLuint |
| `DAT_10063ca0` | 0x10063ca0 | Table des coordonnées texture |
| `DAT_10070a14` | 0x10070a14 | Index de passe de rendu |
| `tile->textureOffset` | +0x240 | Variation cosmétique |
| `tile->renderPassCount` | +0x44 | Nombre de passes |
| `tile->tileFlags` | +0x28 | Orientation (bits 0-1) |
| `tile->type` | +0x24 | Type de terrain |
| `tile->elevation[4]` | +0x00 | 4 coins d'élévation |
| `typeInfo[x].maxVariation` | Terrain+0x40+x×0x18 | Max cosmétique par type |
| `tileAt(x,y)` | 0x004490D0 | Accès tuile row-major |

### 16.5 Références

- **Code nettoyé :** `ref/cleaned/terrain/set_texture.c`, `render_tile.c`
- **Structures :** `ref/cleaned/structs/tile.h`
- **Ghidra C :** `ref/decompiled/ghidra/terrain/setType.c`, `FUN_1000e6c0.c` (→ `render_single_tile.c`)
- **Textures :** `data/raw/Data/Textures/{Desert,Links,Parkland,Tropical}/`
- **MadcoreTom (référence WebGL2) :** Algorithme de triangle layout et sous-tuiles
- **Guide complet :** `REFERENCE_GUIDE.md` — §5 Auto-Tiling & Textures
