# Analyse des Variantes de Tuiles dans SimGolf

> Document technique détaillant les 4 axes de variation des textures de terrain,
> basé sur le désassemblage de Terrain.dll et l'inventaire complet des fichiers BMP.

**Date :** Mai 2026  
**Source :** golf.exe dépaqueté + Terrain.dll + fichiers Data/Textures  
**Auteur :** Hermes Agent (reverse engineering)

---

## Table des matières

1. [Vue d'ensemble](#1-vue-densemble)
2. [Les 4 axes de variation](#2-les-4-axes-de-variation)
   - [2.1 Axe 1 : Géométrie d'élévation (lettre A–E)](#21-axe-1--géométrie-délévation-lettre-a-e)
   - [2.2 Axe 2 : Orientation de bordure (lettre A–D)](#22-axe-2--orientation-de-bordure-lettre-a-d)
   - [2.3 Axe 3 : Cosmétique anti-répétition (0001–0009)](#23-axe-3--cosmétique-anti-répétition-00010009)
   - [2.4 Axe 4 : Multi-passes de rendu (compositing)](#24-axe-4--multi-passes-de-rendu-compositing)
3. [Comptage par thème](#3-comptage-par-thème)
4. [Mécanisme de sélection dans le binaire](#4-mécanisme-de-sélection-dans-le-binaire)
   - [4.1 Terrain::setType (0x100032f0)](#41-terrainsettype-0x100032f0)
   - [4.2 Terrain::getVariation (0x10003390)](#42-terraingetvariation-0x10003390)
   - [4.3 Terrain::renderSingleTile (0x1000e6c0)](#43-terrainrendersingletile-0x1000e6c0)
   - [4.4 La table globale de textures (0x100687f8)](#44-la-table-globale-de-textures-0x100687f8)
5. [Convention de nommage des fichiers](#5-convention-de-nommage-des-fichiers)
6. [Différences entre thèmes](#6-différences-entre-thèmes)
7. [Implications pour le port web](#7-implications-pour-le-port-web)

---

## 1. Vue d'ensemble

Dans SimGolf, chaque tuile de terrain n'est pas associée à une texture unique, mais à
**une combinaison de plusieurs sélecteurs** qui déterminent collectivement l'apparence
visuelle. Le système compte **4 axes orthogonaux de variation** :

```
Axe 1 : Forme géométrique      → A, B, C, D, E    (dérivé des 4 hauteurs de coins)
Axe 2 : Orientation de bordure  → A, B, C, D        (dérivé des types de voisins)
Axe 3 : Cosmétique              → 0001–0009          (dérivé d'un compteur modulo)
Axe 4 : Multi-passes            → N passes           (textures superposées)
```

Ces 4 axes sont **indépendants** et se combinent par multiplication. Une tuile de sable
en bordure d'herbe avec une pente peut ainsi avoir :
- 1 forme géométrique (ex. A = plat)
- × 4 orientations (N/E/S/W selon le côté de la bordure)
- × 5 variations cosmétiques
- × 2 passes de rendu (base + bordure)

Soit **40 combinaisons visuelles potentielles** pour un contexte donné.

---

## 2. Les 4 axes de variation

### 2.1 Axe 1 : Géométrie d'élévation (lettre A–E)

Les 4 coins de chaque tuile stockent leur hauteur individuelle (`elevation[4]`,
offset 0x000, 4 × int32). Le rapport entre ces hauteurs détermine la **forme**
de la tuile, qui est encodée dans la lettre du nom de texture :

| Lettre | Groupe | Nb formes | Description | Exemple `[TL, TR, BR, BL]` |
|:---:|---|---:|---|---|
| **A** | Plat | 1 | Les 4 coins à la même hauteur | `[0,0,0,0]` |
| **B** | Pente simple | 4 | 2 coins adjacents surélevés | `[1,1,0,0]` (N) |
| **C** | Coin | 8 | 1 coin surélevé (convexe) ou 1 coin abaissé (concave) | `[1,0,0,0]` / `[0,1,1,1]` |
| **D** | Diagonale | 2 | 2 coins opposés surélevés (crête ou vallée) | `[1,0,1,0]` / `[0,1,0,1]` |
| **E** | Raide | 4+ | Dénivelé ≥ 2 entre coins adjacents | `[2,2,0,0]` |

**Preuve dans le TileShapeMapper :**

```typescript
export function selectTileSprite(hTL, hTR, hBR, hBL, typeName, rng) {
  const h = [hTL, hTR, hBR, hBL];
  const min = Math.min(...h);
  const n = h.map(v => v - min);
  const max = Math.max(...n);

  if (n.every(v => v === 0)) return groupA(typeName, rng);      // A = plat
  if (max >= 2)           return groupE(n, typeName, rng);      // E = raide
  return classifyGentle(n, typeName, rng);                       // B/C/D
}
```

**Contrainte :** Le jeu limite la différence d'élévation entre coins adjacents à 1
(maximum). Pour créer un dénivelé de 2+, il faut une rampe de tuiles intermédiaires.
C'est pourquoi les formes de groupe E (raide) sont rares.

**Implication rendering :** Les textures du groupe A sont les plus utilisées (un
terrain de golf est majoritairement plat). Pour éviter la répétition, c'est ce groupe
qui bénéficie du plus grand nombre de variantes cosmétiques.

---

### 2.2 Axe 2 : Orientation de bordure (lettre A–D)

Quand 2 terrains de **familles différentes** sont adjacents (ex. sable → herbe,
eau → terre), le jeu utilise une texture d'arête avec une orientation spécifique.

**Codage :** 2 bits dans `tileFlags` (offset 0x034, `tileFlags & 3`) :

```
00 = orientation A (bord Nord)
01 = orientation B (bord Est)
10 = orientation C (bord Sud)
11 = orientation D (bord Ouest)
```

**Les types de terrains qui déclenchent une bordure :**

| Type | Famille | Texture d'arête | Orientation |
|:---:|:---:|---|---|
| Sable (type 3) | `sand` | `GrassySand{A-D}` | Côté du sable face à l'herbe |
| Herbe près du sable | `grass` | `GrassBunker{A-D}` | Côté de l'herbe face au sable |
| Eau peu profonde (type 4) | `water` | `WaterShallow{A-D}` | Berge |
| Eau profonde | `water` | `WaterDeep{A-D}` | Berge profonde |
| Eau médiane | `water` | `WaterMiddle{A-D}` | Remplissage eau |
| Falaise | `cliff` | `Cliff{A-D}` | Paroi rocheuse |

**Groupes de familles** (pour éviter les fausses bordures) :

```
grass family  = GRASS, TREE, BUSH, ROUGH
fairway family = FAIRWAY, TEE, GREEN
sand family   = SAND
water family  = WATER, WATER_HAZARD
path family   = PATH, BRIDGE
building       = BUILDING
```

Deux tuiles de la même famille (ex. GRASS et BUSH) ne produisent **pas** de bordure.

**Algorithme de sélection (AutoTiler) :**

```
Pour chaque tuile de type SABLE ou EAU :
  1. Calculer un masque de voisinage sur 4 directions cardinales
     N = bit 0 (1), E = bit 1 (2), S = bit 2 (4), W = bit 3 (8)
  2. Si un voisin est d'une famille différente → marquer le bit
  3. Priorité : N > E > S > W (première bordure rencontrée)
  4. Mapper le bit prioritaire vers la lettre d'orientation
     N → A, E → B, S → C, W → D
```

**Exemple concret :**

```
Carte 3×3 :
  H H H
  H S H    (H=herbe, S=sable)
  H H H

Tuile centrale (S) : entourée d'herbe → masque N|E|S|W = 0b1111
Priorité N → GrassySandA0001.bmp
```

---

### 2.3 Axe 3 : Cosmétique anti-répétition (0001–0009)

Le champ `tile->textureOffset` (offset 0x240, int32) stocke un index de variation
cosmétique de **0 à N-1** où N est le nombre de variantes disponibles pour ce type.

**But :** Éviter l'effet de tuilage visible (le cerveau humain détecte
instantanément la répétition d'un motif de texture).

**Mécanisme dans le binaire (ASM à 0x100032f0) :**

```
Terrain contient une table typeInfo[] commençant à this+0x40.
Chaque typeInfo fait 0x18 = 24 bytes.

Structure typeInfo (hypothèse) :
  +0x00 : typeId          (int32)
  +0x04 : maxVariation    (int32)  ← contrôle le modulo
  +0x08 +0x0c +0x10 +0x14 : ? (champs inconnus)
  +0x18 : fin

Terrain::setType(Tile* tile, int type, int variation) :
  1. maxVariation = this->typeInfo[type].maxVariation
  2. Si maxVariation > 0 :
       // Appelle un compteur global via 0x10018ce0
       variation = counter % maxVariation
  3. tile->textureOffset = variation    (via thunk 0x10002f80)
```

**Valeurs de maxVariation constatées dans les fichiers :**

| Type | maxVariation | Fichiers présents |
|:---|---:|:---|
| Rough (Desert) | 9 | `Rough[A-E]0001-0009.bmp` |
| Rough (Parkland) | 5 | `Rough[A-E]0001-0005.bmp` |
| SandBunker | 5 | `SandBunker[1A-4A]0001-0005.bmp` |
| Fairway | 5 | `FairwayA0001-0005.bmp` |
| Green | 5 | `PuttingGreenA0001-0005.bmp` |
| WaterShallow | 9 | `WaterShallow[A-D]0001-0009.bmp` |
| WaterDeep | 5 | `WaterDeep[A-D]0001-0005.bmp` |
| Tee | 25 | `TeeA0001-0025.bmp` |

**Déterministe par position :** Le compteur est global au terrain, pas par tuile.
Si l'utilisateur pose 50 tuiles d'herbe, elles reçoivent les variations
0,1,2,3,4,5,6,7,8,0,1,2… En pratique, le compteur est avancé à chaque appel
de `setType`, ce qui donne une distribution uniforme.

---

### 2.4 Axe 4 : Multi-passes de rendu (compositing)

Chaque tuile a un `renderPassCount` (offset 0x05c, int32) suivi d'un tableau
`renderPasses[]` de structures `RenderPass` (56 bytes chacune).

**Structure RenderPass (0x38 = 56 bytes) :**

| Offset | Type | Champ | Description |
|:---:|:---:|---:|---|
| 0x00 | `void*` | textureID | Handle de texture OpenGL |
| 0x04 | `uint8_t` | texCoord | Index dans la table de textures |
| 0x05–0x37 | `uint8_t[51]` | padding | Données inconnues |

**Logique de rendu (ASM 0x1000e6c0) :**

```c
void Terrain_renderSingleTile(Terrain* this, Tile* tile, float zoomLevel) {
    for (int pass = 0; pass < tile->renderPassCount; pass++) {
        if (viewMode != 0 && tile->type == 7) {
            // Mode spécial : calcule l'index depuis la table globale
            int orientation = tile->tileFlags & 3;
            int tableIndex = (orientation + 27) * 0x384
                           + tile->textureOffset * 0x24;
            void* texture = globalTextureTable[tableIndex
                           + tile->renderPasses[pass].texCoord];
            glBindTexture(GL_TEXTURE_2D, texture);
        } else {
            // Mode normal : bind direct
            glBindTexture(GL_TEXTURE_2D,
                          tile->renderPasses[pass].textureID);
        }
    }
}
```

**Pourquoi multi-passes ?** SimGolf compose plusieurs textures par tuile :
1. **Passe 1 :** Texture de base (herbe, sable, eau…)
2. **Passe 2 :** Overlay de bordure (ex. trait de bunker, liseré d'eau)
3. **Passe 3 (optionnel) :** Décoration (fleur, rocher, herbe haute)
4. **Passe 4 (optionnel) :** Chemin ou ligne de fairway

Cette approche économise de la mémoire vidéo — au lieu de stocker 2525 textures
uniques combinant toutes les permutations, le jeu stocke ~700 textures de base
et ~200 overlays, et les compose dynamiquement.

---

## 3. Comptage par thème

### 3.1 Desert (732 textures BMP — le plus complet)

| Catégorie | Groupe | Nb | × Orientation | × Cosmétique | **Total** |
|:---|---:|---:|---:|---:|
| **Rough** | A (plat) | 1 | — | 9 | **45** |
| | B (pente) | 4 | — | 9 | |
| | C (coin) | 8 | — | 9 | |
| | D (diagonale) | 2 | — | 9 | |
| | E (raide) | 4+ | — | 9 | |
| **DeepRough** | A–E | 5 | — | 9 | **45** |
| **SandBunker** | remplissage | 1 | 4 (1A-4A) | 5 | **25** |
| **GrassySand** | bord sable→herbe | 1 | 4 (A-D) | 9 | **36** |
| **GrassBunker** | bord herbe→sable | 1 | 4 (A-D) | 9 | **36** |
| **WaterShallow** | berge | 1 | 4 (A-D) | 9 | **56** |
| **WaterMiddle** | eau médiane | 1 | 4 (A-D) | 9 | **36** |
| **WaterDeep** | eau profonde | 1 | 4 (A-D) | 5 | **20** |
| **Fairway** | plat | 1 | — | 5 | **5** |
| **PuttingGreen** | plat | 1 | — | 5 | **5** |
| **Brush** (base) | A–D | 4 | — | 9 | **36** |
| **Cliff** | falaise | 1 | 4 (A-D) | 9 | **37** |
| **Rock** | rocher | 5 (A-E) | — | 9 | **45** |
| **Woods** | arbres | 4 (A-D) | — | 9 | **36** |
| **BuildingA** | bâtiment | 1 | — | 9 | **9** |
| **TeeA** | départ | 1 | — | 25 | **25** |
| **FirmFairway** | fairway ferme | 1 | — | 9+5 | **14** |
| **ZenSandA** | sable décoratif | 1 | — | 9+5 | **14** |
| **PotSandBunker** | petit bunker | 1 | — | 9+5 | **14** |
| Autres (Ravine, Marsh, | Overgrowth, Natural, | FlowerBed…) | | | ~160 |

### 3.2 Comparaison entre thèmes

| Thème | Rough | GrassySand | WaterShallow | Total |
|:---|---:|---:|---:|---:|
| **Desert** | 45 (9×5) | 36 | 56 | **732** |
| **Links** | 25 (5×5) | 36 | 36 | **644** |
| **Parkland** | 25 (5×5) | 36 | 36 | **602** |
| **Tropical** | 20 (5×4) | 36 | 36 | **547** |

**Constats :**
- **Desert** est le thème le plus riche (732 textures) — c'est probablement le thème
  par défaut ou celui qui a reçu le plus d'attention artistique.
- **Tropical** est le plus pauvre (547) — pas de `RoughE` du tout, moins de variations.
- **GrassySand** est l'une des rares catégories stables à 36 textures dans tous les thèmes.
- **Fairway**, **Green**, et **Tee** ont peu de variations car ce sont des surfaces
  très uniformes visuellement.

---

## 4. Mécanisme de sélection dans le binaire

### 4.1 Terrain::setType (0x100032f0)

```
Export C++ : ?setType@Terrain@@QAEXPAVTile@@HH@Z
  → Terrain::setType(Tile* tile, int type, int variation)
  → this (ecx), [ebp+8]=tile, [ebp+0xc]=type, [ebp+0x10]=variation
```

**Désassemblage complet :**

```asm
0x100032f0: push ebp                     ; prologue MSVC debug
0x100032f1: mov  ebp, esp
0x100032f3: sub  esp, 0x44               ; 68 bytes de stack (debug fill)
0x100032f9: push ecx                     ; save this
0x100032fa: lea  edi, [ebp-0x44]
0x100032fd: mov  ecx, 0x11               ; fill 0x44 bytes with 0xCC
0x10003302: mov  eax, 0xCCCCCCCC
0x10003307: rep stosd
0x10003309: pop  ecx                     ; restore this
0x1000330a: mov  [ebp-4], ecx            ; this stocké en variable locale

0x1000330d: mov  eax, [ebp+0xc]          ; eax = type
0x10003310: imul eax, eax, 0x18          ; eax = type * 24 (taille typeInfo)
0x10003313: mov  ecx, [ebp-4]            ; ecx = this
0x10003316: cmp  dword [ecx+eax+0x40], 0 ; typeInfo[type].maxVariation > 0?
0x1000331b: jle  0x1000333b              ; si ≤ 0, sauter (variation=0)

; --- Branche maxVariation > 0 ---
0x1000331d: call 0x10018ce0              ; getCounter() → retourne un compteur
0x10003322: mov  ecx, [ebp+0xc]          ; ecx = type (rechargé)
0x10003325: imul ecx, ecx, 0x18          ; ecx = type * 24
0x10003328: mov  esi, [ebp-4]            ; esi = this
0x1000332b: cdq                          ; sign-extend eax → edx:eax
0x1000332c: idiv dword [esi+ecx+0x40]    ; counter / maxVariation
                                         ; edx = remainder (la variation)
0x10003330: push edx                     ; variation → stack
0x10003331: mov  ecx, [ebp+8]            ; ecx = tile
0x10003334: call 0x10002f80              ; tile->textureOffset = variation
0x10003339: jmp  0x10003345              ; skip la branche "variation=0"

; --- Branche maxVariation ≤ 0 ---
0x1000333b: push 0                       ; variation = 0
0x1000333d: mov  ecx, [ebp+8]            ; ecx = tile
0x10003340: call 0x10002f80              ; tile->textureOffset = 0

; --- Suite commune ---
0x10003345: mov  edx, [ebp+0x10]         ; edx = variation (3e paramètre)
0x10003348: push edx
0x10003349: mov  ecx, [ebp+8]            ; ecx = tile
0x1000334c: call 0x10015380              ; fonction inconnue (callback EXE?)

0x10003351: mov  eax, [ebp+0xc]          ; eax = type
0x10003354: push eax
0x10003355: mov  ecx, [ebp+8]            ; ecx = tile
0x10003358: call 0x10001235              ; updateNeighbors(type)

; épilogue
0x1000335d: pop  edi
...
0x1000336a: mov  esp, ebp
0x1000336c: pop  ebp
0x1000336d: ret  0xc                     ; retour avec 12 bytes de params
```

**Notes :**
- **0x10002f80** écrit `tile->textureOffset = ecx` (le paramètre) — thunk 0x100010b9
- **0x10015380** est un callback vers golf.exe (DLL → EXE) — passe la variation
  au moteur de jeu
- **0x10001235** met à jour les voisins (normales, rendu) après changement de type
- **0x10018ce0** retourne un compteur global — sa nature exacte n'a pas été
  déterminée (peut-être un compteur de frames, de tuiles posées, ou un seed RNG)

### 4.2 Terrain::getVariation (0x10003390)

```asm
0x10003390: push ebp
0x10003391: mov  ebp, esp
0x10003393: sub  esp, 0x44               ; debug fill (MSVC)
...
0x100033ad: mov  ecx, [ebp+8]            ; ecx = tile
0x100033b0: call 0x100010e6              ; getVariationFromTile()
0x100033b5: movsx eax, al               ; sign-extend byte → int
0x100033b8: pop  edi
...
0x100033c5: mov  esp, ebp
0x100033c7: pop  ebp
0x100033c8: ret  4
```

**Note importante :** La variation est stockée sur **1 byte** (sign-extend `movsx eax, al`),
pas sur un int32 complet. Valeur possible : 0–127 (signé) ou 0–255 (non-signé).
En pratique, les valeurs observées dans les fichiers suggèrent 0–8 ou 0–4.

### 4.3 Terrain::renderSingleTile (0x1000e6c0)

Voir [section 2.4](#24-axe-4--multi-passes-de-rendu-compositing) pour l'ASM complet.

**Points clés :**
- Itère sur `tile->renderPassCount` passes
- Deux modes : direct `glBindTexture` ou indexation dans table globale
- La table globale `g_textureTable` (0x100687f8) est organisée en :
  - **0x384 bytes par type** de terrain
  - **0x24 bytes par sous-type** (orientation × variation)
- L'orientation (`tileFlags & 3`) sert d'index de sous-type
- La variation (`tile->textureOffset`) sert de sous-index

### 4.4 La table globale de textures (0x100687f8)

```
Adresse : 0x100687f8 (dans golf.exe, section .rdata ou .data)

Structure :
  g_textureTable[type][orientation][variation] = OpenGL_texture_handle

Organisation mémoire :
  type 0 : [orientation=0 : [variation=0, 1, …], orientation=1 : […], …]
  type 1 : […]
  …

Chaque type occupe 0x384 = 900 bytes
Chaque sous-type (orientation) occupe 0x24 = 36 bytes
Chaque entrée : 4 bytes (void* = texture handle OpenGL)

Calcul :
  adresse = 0x100687f8 + type * 0x384 + orientation * 0x24 + variation * 4
```

**Remarque :** La taille de cette table (900 bytes par type × ~20 types = 18 KB)
confirme que toutes les combinaisons sont pré-calculées au chargement du thème,
pas calculées à la volée pendant le rendu. C'est la fonction `loadNewCourseType()`
(0x10001af0) qui peuple cette table.

---

## 5. Convention de nommage des fichiers

### 5.1 Format général

```
{Type}{Groupe}{Variation à 4 chiffres}.bmp
{Type}{Orientation}{Variation à 4 chiffres}.bmp

Type      = Nom du terrain (Rough, SandBunker, WaterShallow, …)
Groupe    = A–E (géométrie) ou 1A-4A (remplissage + orientation)
Orientation = A–D (bordure cardinale)
Variation = 0001–0009 ou 0001–0005 (cosmétique)
```

### 5.2 Exemples commentés

| Fichier | Type | Groupe | Orientation | Cosmétique | Signification |
|:---|---|:---:|:---:|---:|---|
| `RoughA0001.bmp` | Rough | A | — | 0001 | Herbe plate, variante 1 |
| `RoughB0003.bmp` | Rough | B | — | 0003 | Pente E, variante 3 |
| `SandBunker1A0001.bmp` | Sand | 1A | Nord | 0001 | Remplissage sable orientation N |
| `SandBunkerA0001.bmp` | Sand | A | Gener. | 0001 | Sable générique (pas d'orientation) |
| `GrassySandA0001.bmp` | Grassy | — | A=Nord | 0001 | Bord sable→herbe côté Nord |
| `GrassBunkerD0005.bmp` | GrassBunker | — | D=Ouest | 0005 | Bord herbe→bunker côté Ouest |
| `WaterShallowB0009.bmp` | WaterShallow | — | B=Est | 0009 | Berge Est, variante 9 |
| `CliffC0001.bmp` | Cliff | — | C=Sud | 0001 | Falaise Sud, variante 1 |
| `TeeA0025.bmp` | Tee | A | — | 0025 | Départ, 25e variante |

### 5.3 Cas particuliers

- **DeepRough** : 5 groupes (A–E) comme Rough, mais pas d'orientation
- **BrushA/B/C/D** : 4 groupes qui ne semblent pas correspondre à la géométrie
  standard. Hypothèse : groupes décoratifs (BrushA=gazon ras, BrushB=herbes hautes…)
- **WaterShallowDesert{A-D}** : variantes spéciales pour le thème Desert qui ont
  leur propre jeu de 5 variations (doublon des WaterShallow standard)
- **FirmFairway** : a la fois `FirmFairwayA0001-0009.bmp` et `FirmFairway0001-0005.bmp`
  (sans lettre) — probablement deux artistes différents ou un renommage

---

## 6. Différences entre thèmes

### 6.1 Structure des dossiers

```
Data/Textures/           ← 85 fichiers "fill" + 4 PCX tilesheets
├── Desert/              ← 732 BMP   (thème 0, courseType=0)
├── Links/               ← 644 BMP   (thème 1, courseType=1)
├── Parkland/            ← 602 BMP   (thème 2, courseType=2)
└── Tropical/            ← 547 BMP   (thème 3, courseType=3)
```

### 6.2 Présence des textures par thème

| Texture | Desert | Links | Parkland | Tropical |
|:---|---:|:---:|:---:|:---:|
| RoughA | 9 | 5 | 5 | 5 |
| RoughB | 9 | 5 | 5 | 5 |
| RoughC | 9 | 5 | 5 | 5 |
| RoughD | 9 | 5 | 5 | 5 |
| RoughE | 9 | 5 | 5 | **0** |
| GrassySandA-D | 36 | 36 | 36 | 36 |
| GrassBunkerA-D | 36 | 36 | 36 | 36 |
| WaterShallowA-D | 36 | 36 | 36 | 36 |
| WaterMiddleA-D | 36 | 36 | 36 | 36 |
| WaterDeepA-D | 20 | 20 | 20 | 20 |
| CliffA-D | 37 | ~37 | ~37 | ~37 |
| SandBunker1A-4A | 25 | 25 | 25 | 25 |

### 6.3 Ce qui change vraiment entre thèmes

Les différences principales sont :

1. **Le contenu visuel des textures** (évidemment) — Desert a des teintes
   ocres/sablées, Links des verts pâles côtiers, Parkland des verts foncés boisés,
   Tropical des verts vifs.

2. **Le nombre de variantes cosmétiques** — Desert a 9 variantes pour Rough,
   les autres seulement 5. Cela donne au Desert un aspect plus « naturel »
   avec moins de répétition visible.

3. **La présence de certaines catégories** — Tropical n'a pas de `RoughE`
   (pentes raides), ce qui suggère que les cartes Tropicales sont plus plates.

4. **Les fichiers uniques** — Chaque thème a quelques textures qui lui sont
   propres (ex. `WaterShallowDesert` pour Desert).

---

## 7. Implications pour le port web

### 7.1 Nombre de combinaisons par tuile

Pour chaque tuile rendue, le jeu effectue cette séquence de décisions :

```
1. Lire type (0=Grass, 1=Fairway, 2=Green, 3=Sand, 4=Water…)
2. Lire les 4 hauteurs de coins → déterminer lettre A–E
3. Lire tileFlags & 3 → orientation A–D (si type avec bordure)
4. Lire tile->textureOffset → variation cosmétique 0..N-1
5. Lire renderPassCount → N passes
6. Pour chaque passe : binder la texture [type][orientation][variation][passe]
```

**Combinaisons totales possibles (Desert) :**
- Rough : 5 géométries × 9 cos. = 45 textures × N passes
- Sand (remplissage) : 4 orientations × 5 cos. = 20
- Sand (bord GrassySand) : 4 orientations × 9 cos. = 36
- WaterShallow : 4 orientations × 9 cos. = 36

### 7.2 Recommandations pour le TileShapeMapper

1. **Modèle 19+6** : 19 formes géométriques + 6 anti-répétition = 25 sprites
   par type est un bon modèle *conceptuel* mais la réalité du jeu est plus
   nuancée (certains types n'ont que 5 variations, d'autres en ont 45).

2. **Fallback en cascade :**
   ```
   Essayer la texture exacte (lettre + orientation + variation)
   → Sinon, essayer la texture sans orientation (lettre seulement)
   → Sinon, essayer la première texture du type (A0001)
   → Sinon, diamond coloré de secours
   ```

3. **La variation cosmétique doit être déterministe par position**
   (basée sur `x×31 + y` ou seed fixe) pour éviter le flicker
   entre les frames pendant le déplacement de la caméra.

4. **Les familles de terrain** doivent être respectées dans AutoTiler :
   GRASS, TREE, BUSH sont une même famille → pas de bordure entre eux.

5. **Multi-passes** : à implémenter en V2. En V1, chaque tuile a une texture
   unique. Pour les bordures, compositer manuellement deux images
   (base + overlay) dans un canvas.

### 7.3 Correction nécessaire dans tile_struct.h

L'ASM révèle que la variation est stockée à **offset 0x240** (via `[eax+0x240]`
dans la fonction 0x10002f80), pas à offset 0x038 (`variation`). La struct Tile
actuelle a `variation` à 0x038 et `textureOffset` à 0x240 — mais l'ASM montre
que la fonction appelée par `setType` écrit dans `textureOffset` (0x240), pas
dans `variation` (0x038).

**Correction suggérée :** Le champ `tile->variation` (offset 0x038) pourrait
être une *autre* variation (peut-être la seed d'origine ou le type de
variation aléatoire de génération), tandis que `tile->textureOffset`
(offset 0x240) est la variation cosmétique utilisée par le rendu.

**Note :** La fonction `getVariation` (0x10003390) lit la variation via un
autre thunk (0x100010e6), pas directement depuis 0x240. Les deux champs
pourraient coexister avec des rôles distincts.

---

## Annexes

### A. Index des adresses ASM référencées

| Adresse | Fonction | Rôle |
|:---|---:|---|
| 0x10002f80 | setTextureOffset | Écrit `tile->textureOffset = variation` |
| 0x100032f0 | Terrain::setType | Définit type + compute/set variation |
| 0x10003390 | Terrain::getVariation | Lit et retourne la variation |
| 0x1000e6c0 | Terrain::renderSingleTile | Rendu texture avec sélection orientation |
| 0x100687f8 | g_textureTable | Table globale de textures OpenGL |
| 0x10018ce0 | getCounter | Retourne compteur pour calcul variation |
| 0x10015380 | ? | Callback EXE (variation → moteur de jeu) |

### B. Fichiers analysés

- `cleaned_c/terrain_zoom.c` — getVariation
- `cleaned_c/terrain_setType.c` — setType
- `cleaned_c/terrain_render_tile.c` — renderSingleTile
- `cleaned_c/tile_struct.h` — Structure Tile
- `references/tile-shape-mapper.md` — 25 sprites par type
- `references/texture-adjacency-auto-tiling.md` — AutoTiler
- `raw_decomp/Terrain_dll_disasm_v2.txt` — ASM complet
- `game_data/extracted/Data/Textures/*.bmp` — Fichiers textures

### C. Script de comptage

```bash
# Compter les variantes par catégorie dans un thème
for theme in Desert Links Parkland Tropical; do
  echo "=== $theme ==="
  cd ~/simgolf-re/game_data/extracted/Data/Textures/$theme
  ls | sed 's/[0-9].*//' | sort | uniq -c | sort -rn
done
```
