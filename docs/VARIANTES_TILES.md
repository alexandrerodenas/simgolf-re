# SimGolf RE — Système de Variantes de Textures

## 1. Nomenclature des fichiers BMP

```
{TypeDeTerrain}{Groupe}{Variation}.bmp
```

| Composant | Description | Exemple |
|-----------|-------------|---------|
| `TypeDeTerrain` | Terrain type (ex: `Rough`, `WaterShallow`) | `RoughA0001.bmp` |
| `Groupe` | Lettre A-E (signification variable) | `A`, `B`, `C`, `D`, `E` |
| `Variation` | Numéro à 4 chiffres (cosmétique) | `0001` - `0009` |

**Pattern regex :** `^([a-z0-9]+)([A-E])([0-9]{4})\.bmp$`

---

## 2. Les deux catégories de Groupe (lettre A-E)

### 2.1 Groupe = ÉLÉVATION (types à topology)

Types concernés : `Rough`, `Fairway`, `DeepRough`, `Rock`, `Natural`, `Building`, `Brush`

```
  A = Plat        [h,h,h,h]  coins tous égaux           (1 forme)
  B = Pente       [h,h,l,l]  2 coins adjacents hauts    (4 formes)
  C = Coin        [h,l,l,l]  ou [l,l,l,h] (1 ou 3 hauts) (8 formes)
  D = Diagonale   [h,l,h,l]  ou [l,h,l,h] (crête/valée) (2 formes)
  E = Raide       [2,2,0,0]  Δ hauteur ≥ 2              (4+ formes)
```

**Total :** 1 + 4 + 8 + 2 + 4 = **19 configurations géométriques** par type

Les fichiers physiques montrent uniquement A-D pour certains types (ex: `Woods`, `DeepRough`), mais le code d'allocation mémoire (stride 0x384) supporte 5×9 = 45 slots par type.

### 2.2 Groupe = ORIENTATION DE BORDE (types à transition)

Types concernés : `WaterShallow`, `WaterMiddle`, `WaterDeep`, `Cliff`, `GrassySand`, `GrassBunker`, `Brush`

```
  A = Bordure Nord (side 2, y-1)
  B = Bordure Est  (side 1, x+1)
  C = Bordure Sud  (side 3, y+1)
  D = Bordure Ouest (side 0, x-1)
```

Les fichiers `WaterShallowA0001` - `WaterShallowD0001` montrent visuellement une bordure colorée sur un seul côté de la tuile.

**Pas de groupe E** pour ces types — 4 orientations × 9 variations = 36 textures par type.

---

## 3. Origine des variations

### 3.1 Variation косметическая (cosmétique, 0001-0009)

Stockée dans `Tile.textureOffset` (offset 0x240, 4 bytes).

**Mécanisme ASM (setType @ 0x1000330d) :**
```c
// Dans terrain_setType.c:
// - La table typeInfo (this+0x40, stride 24) contient maxVariation
// - Un compteur global est incrémenté à chaque placement
// - variation = globalCounter % maxVariation
// - tile->textureOffset = variation
```

**Valeurs par type (table typeInfo) :**
| Type | maxVariation | Variations réelles |
|------|:-----------:|:-----------------:|
| Rough(0), GrassySand(8), GrassBunker(9) | 9 | 0001-0009 |
| Fairway(1), Green(2), Tee(10) | 5 | 0001-0005 |
| WaterShallow(4) | 9 | 0001-0009 |
| WaterMiddle(5) | 9 | 0001-0009 |
| WaterDeep(6) | 5 | 0001-0005 |
| Cliff(11) | 9 | 0001-0009 |

### 3.2 Variation Géométrique (A-E)

Déterminée par les hauteurs des 4 coins de la tuile.

Les coins sont stockés dans `Tile.elevationCorners` (offset 0x280+).

```c
// Dans renderSingleTile:
// - Les 4 bits inférieurs de tileFlags encode le type de topology
// - switch(tileFlags & 0xF) → cas 0=A, 1=B, 2=C, 3=D, 4=E
// - Lookup texture dans g_textureTable[type*0x384 + topology*0x24 + variation*4]
```

**Tableau de topology par coin (rough) :**
| Groupe | TL | TR | BR | BL | Σ(Δ) | Description |
|:------:|:--:|:--:|:--:|:--:|:----:|:-------------|
| A | 0 | 0 | 0 | 0 | 0 | Plat |
| B | 1 | 1 | 0 | 0 | 2 | Pente N |
| B | 0 | 1 | 1 | 0 | 2 | Pente E |
| B | 0 | 0 | 1 | 1 | 2 | Pente S |
| B | 1 | 0 | 0 | 1 | 2 | Pente O |
| C | 1 | 0 | 0 | 0 | 1 | Coin SE |
| C | 0 | 1 | 0 | 0 | 1 | Coin SO |
| C | 0 | 0 | 1 | 0 | 1 | Coin NO |
| C | 0 | 0 | 0 | 1 | 1 | Coin NE |
| C | 0 | 1 | 1 | 1 | 3 | Coin inverse |
| C | 1 | 1 | 1 | 0 | 3 | Coin inverse |
| C | 1 | 1 | 0 | 1 | 3 | Coin inverse |
| C | 1 | 0 | 1 | 1 | 3 | Coin inverse |
| D | 1 | 0 | 1 | 0 | 4 | Diagonale NO-SE |
| D | 0 | 1 | 0 | 1 | 4 | Diagonale NE-SO |
| E | 2 | 2 | 0 | 0 | 4 | Raide N |
| E | 0 | 2 | 2 | 0 | 4 | Raide E |
| E | 0 | 0 | 2 | 2 | 4 | Raide S |
| E | 2 | 0 | 0 | 2 | 4 | Raide O |
| E | 1 | 1 | 1 | 1 | 0 | Plat (limite basse E) |
| E | 2 | 1 | 1 | 1 | 2 | Plat (limite) |
| E | 1 | 2 | 2 | 1 | 2 | Plat (limite) |

### 3.3 Variation d'orientation (A-D pour bordures)

Pour les types à bordure (eau, falaise, sable de transition), le groupe A-D représente la **direction du côté adjacent** qui n'est pas du même type.

**Mécanisme ASM (populateRenderPasses @ 0x10012ec0) :**
```asm
; @ 0x10012f7b: extraction de l'orientation depuis tileFlags
  mov  eax, [edx + 0x28]      ; edx = tilePtr, lit tileFlags
  and  eax, 0x80000003        ; masque bits + signe
  jns  loc_10012f8d           ; si positif skip déc
  dec  eax
  or   eax, 0xfffffffc
  inc  eax                    ; arithmetic shift right
loc_10012f8d:
  mov  [ebp - 0x0c], eax      ; orientation (0-3)
  cmp  dword ptr [ebp - 0x0c], 3
  ja   loc_10012fc2           ; si >3: pas de bordure (type plat)
```

L'orientation est extraite des **bits 0-1** de `tileFlags` (avec extension de signe) → valeurs 0, 1, 2, 3.

Les 4 writes dans renderPasses :
```asm
  ; renderPass[0] → Tile+0x6c  (side 0 = Ouest)
  ; renderPass[1] → Tile+0xa4  (side 1 = Est)
  ; renderPass[2] → Tile+0xdc  (side 2 = Nord)
  ; renderPass[3] → Tile+0x114 (side 3 = Sud)
  mov  dword ptr [eax + 0xa4], edx  ; texture handle pour side 1
  mov  byte ptr [eax + 0xa8], cl    ; orientation stockée
```

---

## 4. Nombre de variantes par type (fichiers réels)

### 4.1 Types à élévation (Rough, Fairway, etc.)

| Type | Groupes | Variations | Total |
|------|:-------:|:----------:|:-----:|
| Rough | A, B, C, D, E | 9 | **45** |
| DeepRough | A, B, C, D | 9 | **36** |
| Fairway (Desert) | A | 5 | **5** |
| Fairway (Links) | A, B, C, D, E | 5 | **25** |
| Rock | A, B, C, D, E | 9 | **45** |
| Natural | A, B, C, D, E | 9 | **45** |
| Building | A (Desert) / A-E (Links) | 9 | **9-45** |

### 4.2 Types à bordure (orientation)

| Type | Groupes | Variations | Total |
|------|:-------:|:----------:|:-----:|
| WaterShallow | A, B, C, D | 9 | **36** |
| WaterMiddle | A, B, C, D | 9 | **36** |
| WaterDeep | A, B, C, D | 5 | **20** |
| Cliff | A, B, C, D | 9 | **36** |
| GrassySand | A, B, C, D | 9 | **36** |
| GrassBunker | A, B, C, D | 9 | **36** |

### 4.3 Par thème (total textures)

| Thème | Total |
|-------|------:|
| Desert | 717 |
| Links | 640 |
| Parkland | 597 |
| Tropical | 543 |

---

## 5. g_textureTable — Structure mémoire

```
g_textureTable @ 0x100687f8

Stride par type : 0x384 = 900 bytes
Stride par orientation : 0x24 = 36 bytes (9 × 4 bytes)
Stride par variation : 4 bytes

Adresse d'une texture :
  addr = 0x100687f8 + type × 0x384 + orientation × 0x24 + variation × 4
```

**Organisation interne d'un type (900 bytes) :**
```
  Offset +0x000 à +0x020 : orientations 0 (A) × 9 variations
  Offset +0x024 à +0x044 : orientations 1 (B) × 9 variations
  Offset +0x048 à +0x068 : orientations 2 (C) × 9 variations
  Offset +0x06C à +0x08C : orientations 3 (D) × 9 variations
  Offset +0x090 à +0x128 : orientations 4 (E) × 9 variations  ← UNUSED dans les fichiers
  Offset +0x12C à +0x384 : 162 bytes réservés (autres cas)
```

**Pour un type à bordure (ex: WaterShallow) :**
- Les orientations 0-3 (A-D) sont utilisées → 4 × 9 = 36 handles OpenGL
- L'orientation 4 (E) n'est jamais chargée (pas de fichier `WaterShallowE0001`)

**Pour un type à élévation (ex: Rough) :**
- Les orientations 0-4 (A-E) sont toutes potentiellement utilisées
- Si un fichier `RoughE0001` existe → le jeu le charge, sinon le slot reste 0

---

## 6. Matrice des transitions (quand apparaît une bordure ?)

### Règle fondamentale

> **Une bordure apparaît uniquement quand le type adjacent a une texture de bordure dans son set de fichiers BMP (groupes A–D).** La bordure est monodirectionnelle — portée par le type qui a une texture de bordure, pas par celui qui ne l'a pas.
>
> **3 comportements possibles :**
> - 🟡 **Même famille** → pas de bordure, les types se fondent visuellement
> - ❌ **Seam** → familles différentes mais aucun type n'a de texture de bordure, jonction nette
> - ✅ **Bordure** → le type qui a une texture A–D génère la bordure sur le côté adjacent

### Types avec textures de bordure (A–D)

`WaterShallow`, `WaterMiddle`, `WaterDeep`, `Cliff`, `GrassySand`, `GrassBunker`

### Types sans bordure (A–E ou A)

Tous les autres : `Rough`, `Fairway`, `Green`, `Tee`, `SandBunker`, `Path`, `Building`, `Woods`, `DeepRough`, `Brush`, `Flower`, `Natural`, `Rock`, `Marsh`, `Vegetation`, `Overgrowth`, `Flowerbed`, `FirmFairway`, `PotBunker`, `ZenSand`, `PotSandBunker`, `Bridge`, `Ravine`, `RetainingWall`

### Matrice complète par type de terrain (30 types × 29 voisins = 435 transitions uniques)

---

#### 6.1 Types les plus connectifs

| Type | Bordures | Même famille | Seam | Qui porte la bordure |
|:----|:--------:|:------------:|:----:|:---------------------|
| **Cliff** | **29** | 0 | 0 | Toujours Cliff (le type cliff lui-même) |
| **Water (les 3)** | **27** | 2 | 0 | Toujours l'eau (Shallow/Middle/Deep) |
| **GrassySand / GrassBunker** | **24** | 5 | 0 | Toujours le type de transition sable |

#### 6.2 Types moyennement connectifs

| Type | Bordures | Même famille | Seam | Qui porte la bordure |
|:----|:--------:|:------------:|:----:|:---------------------|
| **Rough / Woods / DeepRough / Brush / Flower / Natural / Rock / Marsh / Vegetation / Overgrowth / Flowerbed** | **6** | 10 | 13 | Eau, Cliff, ou GrassySand/GrassBunker |
| **Fairway / Green / Tee / FirmFairway** | **6** | 3 | 20 | Eau, Cliff, ou GrassySand/GrassBunker |
| **SandBunker / PotBunker / ZenSand / PotSandBunker** | **4** | 5 | 20 | Eau ou Cliff |
| **Path / Bridge / Ravine** | **6** | 2 | 21 | Eau, Cliff, ou GrassySand/GrassBunker |
| **Building / RetainingWall** | **6** | 0 | 23 | Eau, Cliff, ou GrassySand/GrassBunker |

---

### Les transitions critiques

#### Fairway ↔ Rough
❌ **Seam** — pas de bordure. Le fairway (famille play) et le rough (famille grass) sont dans des familles différentes, mais **aucun** des deux n'a de texture de bordure. Résultat : une limite visuelle **nette** entre le gazon tondu et l'herbe haute, sans过渡 texture.

#### Woods ↔ Rough
🟡 **Pas de bordure** — même famille (grass). Woods et Rough se fondent visuellement. La distinction vient uniquement du motif de texture différent (`WoodsA0001` vs `RoughA0001`).

#### Fairway ↔ SandBunker
✅ **Double bordure** — `GrassBunker{A-D}` côté fairway + `GrassySand{A-D}` côté bunker. Les deux types de transition sable sont générés simultanément sur les deux tuiles.

#### SandBunker ↔ Rough
❌ **Seam** — le sable du bunker et le rough se rencontrent directement. La bordure n'apparaît que du côté rough si on utilise GrassBunker, mais si on utilise SandBunker comme type de base, pas de bordure du tout.

#### WaterShallow ↔ WaterMiddle / WaterDeep
🟡 **Pas de bordure** — même famille (water). Les deux eaux se rencontrent sans transition visible. La profondeur variable est gérée par les shaders, pas par les textures.

#### Cliff ↔ Tout
✅ **Bordure vers 29 types** — Cliff est le type le plus connectif. La falaise génère une bordure vers tous les autres types sans exception.

---

### Résumé : 435 transitions uniques documentées

| Comportement | Nombre | Exemples |
|:------------:|:------:|:---------|
| 🟡 Même famille | 82 | Rough↔Woods, Fairway↔Green, SandBunker↔PotBunker |
| ✅ Bordure | 147 | Water→Rough, Cliff→Fairway, GrassySand→Path |
| ❌ Seam | 206 | Fairway↔Rough, Building↔Woods, SandBunker↔Brush |

> **Note :** Le jeu original ne génère jamais de bordure entre deux types qui n'ont pas de texture de bordure. La matrice montre que 206 transitions sur 435 (47%) sont des seams — c'est normal et attendu pour un jeu de golf où les jonctions nettes (fairway/rough) sont une caractéristique de gameplay, pas un bug.

---

## 7. Résumé

| Source de variation | Axe | Groupe | Variations | Déterminé par |
|---------------------|-----|:------:|:----------:|--------------|
| Topologie des coins | Géométrie | A-E | 9 ou 5 | Hauteur des 4 coins de la tuile |
| Direction du voisin | Bordure | A-D | 9 ou 5 | Bits 0-1 de tileFlags (voisin différent) |
| Anti-répétition | Cosmétique | 0001-0009 | — | Compteur global % maxVariation |
| Multi-pass rendering | Composing | — | — | renderPassCount, plusieurs textures superposées |

**Combinaison :**
- Type à élévation (Rough) : jusqu'à 5 × 9 = **45 textures** (groupe A-E, variations 0001-0009)
- Type à bordure (Water) : jusqu'à 4 × 9 = **36 textures** (groupe A-D, variations 0001-0009)
- Type spécial (Fairway Desert) : 1 × 5 = **5 textures**