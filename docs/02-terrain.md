# Système de Terrain

> **Confiance :** ✅ Élevée — 38 exports de Terrain.dll décompilés, 25 fichiers C

---

## 1. Architecture du Terrain

Le terrain est géré par **Terrain.dll** — une DLL séparée de 972 Ko qui fait tout le rendu 3D via OpenGL. Le `golf.exe` appelle Terrain.dll via 26 exports pour manipuler le terrain.

### Classe Terrain

```
Terrain (singleton, getInstance @ 0x100031a0)
├── TileGrid (grille de tuiles) — dispatch hub @ 0x485e80
├── Textures — 4 thèmes × textures BMP
├── Élévation — 4 coins par tuile
└── Chemins — splines, routes
```

### Grille de Tuiles

- **Dimensions :** configurable (resize @ 0x10009ed0), par défaut 64×64
- **Type :** tableau 2D de `Tile` (584 bytes chacun)
- **Accès :** `tileAt(x, y)` @ 0x10001d50

---

## 2. Structure Tile (584 bytes)

| Offset | Taille | Champ | Description | Confirmé par |
|--------|:------:|-------|-------------|:------------:|
| 0x000 | 16 | elevation[4] | Hauteurs des 4 coins (int32) | `getElevation()` |
| 0x010 | 4 | waterLevel | Niveau d'eau (int32) | ⚠️ Hypothèse |
| 0x024 | 4 | type | Type de terrain | `getType()` |
| 0x234 | 4 | walls[4] | Murs N/E/S/O (uint8×4) | `getWall()` |

Les 528 octets restants (0x028-0x233 et 0x238-0x247) n'ont pas été analysés — ils contiennent probablement :
- Les normales pour l'éclairage
- Les ID de texture par passe de rendu
- Les flags de chemin/construction
- Le compteur de variation cosmétique

### Types de Terrain

| ID | Nom | Description |
|:--:|-----|-------------|
| 0 | **Rough** | Herbe haute (terrain naturel) |
| 1 | **Fairway** | Herbe tondue (zone de jeu) |
| 2 | **PuttingGreen** | Green |
| 3 | **SandBunker** | Bunker de sable |
| 4 | **WaterShallow** | Eau peu profonde |
| 5 | **WaterMiddle** | Eau moyenne |
| 6 | **WaterDeep** | Eau profonde |
| 7 | **DeepRough** | Herbe très haute (hors-limites) |
| 8 | **GrassySand** | Transition sable→herbe |
| 9 | **GrassBunker** | Transition herbe→sable |
| 10 | **Tee** | Départ |
| 11 | **Cliff** | Falaise |
| 12 | **Path** | Chemin |
| 13 | **Building** | Bâtiment |
| 14 | **Tree** | Arbre |
| 15 | **Flower** | Fleur/Buisson |

> ⚠️ Les IDs exacts sont déduits des noms de fichiers BMP. À valider avec un hex dump du binaire.

### Élévation

Chaque tuile a **4 coins** (TL, TR, BR, BL — TopLeft, TopRight, BottomRight, BottomLeft).

**Plage de valeurs :** 0-4 (unités de hauteur)
**Déclivité maximale :** 1 niveau de différence entre coins adjacents (contrainte vérifiée par `setType()`)

#### Modèle 5 Niveaux (Confirmé par ASM)

Notre analyse ASM confirme 5 niveaux de hauteur distincts (0-4) par coin :

| Niveau | Hauteur | Usage |
|:------:|:-------:|-------|
| 0 | Base | Terrain plat |
| 1 | Faible | Petite bosse |
| 2 | Moyen | Colline |
| 3 | Haut | Haute colline |
| 4 | Max | Point culminant |

**Fonctions d'élévation :**
- `getElevation(tile, corner)` @ 0x10001de0 — lire hauteur d'un coin
- `elevateCorner(tile, corner)` @ 0x1000a5c0 — monter un coin
- `lowerCorner(tile, corner)` @ 0x1000a620 — descendre un coin
- `lowerEdgeCorner(tile, corner, ...)` @ 0x10001154 — bord de terrain

#### Propagation Récursive de l'Élévation

Quand un coin d'une tuile est surélevé ou abaissé, les coins partagés des tuiles adjacentes doivent être mis à jour pour éviter des déchirures visuelles entre les tuiles.

**Algorithme de propagation :**

```
raiseTile(x, y):
  1. Modifier le(s) coin(s) de la tuile (x, y)
  2. Pour chaque tuile adjacente (x-1, y-1), (x, y-1), (x+1, y), etc. :
     - Vérifier si un coin partagé existe
     - Si oui, appliquer la même modification
  3. Redessiner toutes les tuiles affectées
```

> 🧠 **Note de recherche :** Une discussion technique (Gemini) décrit un modèle alternatif où chaque coin est binaire (0/1, surélevé ou pas) avec un masque 4 bits (N=1, E=2, S=4, W=8) donnant 16 états (0-15) par tuile. Ce modèle n'est **pas** confirmé par notre analyse ASM qui montre 5 niveaux de hauteur (0-4). Il est possible que ce soit une approximation utilisée pour le calcul des textures de transition (auto-tiling) plutôt que pour l'élévation elle-même. À valider.

**Géométries d'élévation (A-E) :**

```
Type A (plat)    : [0,0,0,0] — 1 combinaison
Type B (pente)   : [1,1,0,0] [0,1,1,0] [0,0,1,1] [1,0,0,1] — 4 combinaisons
Type C (coin)    : [1,0,0,0] [0,1,0,0] [0,0,1,0] [0,0,0,1] — 4+4 = 8 combinaisons
Type D (diago)   : [1,0,1,0] [0,1,0,1] — 2 combinaisons
Type E (raide)   : [2,2,0,0] [2,0,0,2] etc. — 4+ combinaisons
```

### Murs

Chaque tuile peut avoir jusqu'à **4 murs** (N/E/S/O). Un mur est un booléen (0/1) qui indique si le côté est infranchissable.
- `getWall(tile, side)` @ 0x10001e80
- `setWall(tile, type, side, bool)` @ 0x1000a560

Les murs sont utilisés pour :
- Les falaises (cliff)
- Les bâtiments
- Les bords d'eau
- Les limites du terrain

---

## 3. Rendu Isométrique

### Pipeline de Rendu

```
Terrain::render() @ 0x10005990
├── Calcule la matrice de projection (OpenGL)
├── Pour chaque tuile visible (frustum culling):
│   ├── renderTile() @ 0x100011ea
│   │   ├── Calcule les 4 sommets 3D (diamant)
│   │   ├── Pour chaque passe de rendu (1-3):
│   │   │   ├── glBindTexture(textureID)
│   │   │   ├── glBegin(GL_TRIANGLE_STRIP)
│   │   │   ├── glTexCoord2f + glVertex3f × 4
│   │   │   └── glEnd()
│   │   └── Applique auto-tiling (voisinage)
│   ├── renderObjects() — arbres, bâtiments, drapeaux
│   └── renderPaths() — chemins, routes
└── Composite final (jgld.dll: sprites UI overlay)
```

### Culling (0x448308)

```
render @ 0x448308
├── Vérifie les bords gauche/droit/haut/bas de l'écran
├── Calcule tileMinX, tileMaxX, tileMinY, tileMaxY
├── Pour each(x, y) dans la zone visible:
│   ├── tileAt(x, y)
│   └── renderSingleTile()
└── Optimisation : skip les tuiles hors champ
```

### Passes de Rendu

Chaque tuile peut avoir `renderPassCount` passes (1-3) :

| Passe | Usage |
|:-----:|-------|
| 1 | Texture de base (ex: herbe) |
| 2 | Overlay décoratif (bordure de bunker) |
| 3 | Chemin ou ligne de fairway |

Les passes sont rendues par `renderSingleTile` qui boucle sur `renderPassCount` et appelle `glBindTexture()` pour chaque passe.

### Auto-Tiling (Transition entre types)

Le système d'auto-tiling détermine quelle texture afficher pour chaque tuile en fonction de ses voisines. Deux approches complémentaires existent :

#### Approche Originale SimGolf (RE)

Quand 2 terrains de types différents sont adjacents, le jeu sélectionne une texture de bordure via `AutoTiler` :

```
AutoTiler.computeNeighborMask():
  1. Lit les 4 voisins cardinaux (N/E/S/W)
  2. Compare le type de chaque voisin avec le type courant
  3. Calcule un mask binaire (1 bit par direction)
  4. Sélectionne la texture de bordure correspondante

Priorité : N > E > S > W (bit 0 = N, bit 1 = E, etc.)
```

**Par rapport aux textures :** Ce système à 4 bits (N/E/S/W) correspond aux suffixes A-D dans les noms de fichiers BMP (`RoughA0001` = côté N, `RoughB0001` = côté E, etc.). La priorisation fait qu'une seule orientation est choisie par tuile.

#### Approche Généralisée par Sous-Tuiles (MadcoreTom / WebGL2)

Une approche plus flexible (supportant N types de terrain simultanément) divise chaque tuile en **4 sous-tuiles** (2×2) et examine 3 voisins locaux pour chaque sous-tuile :

```
Pour chaque sous-tuile (sx, sy) ∈ [0,1]×[0,1] :
  1. Lire le type de la tuile centrale
  2. Lire les 3 voisins locaux :
     - sameH : voisin horizontal (même ligne, colonne adjacente)
     - sameV : voisin vertical (même colonne, ligne adjacente)
     - sameD : voisin diagonal
  3. Sélectionner selon le pattern :
     ┌──────────────────────────────────┬──────────┐
     │ Pattern                          │ Résultat │
     ├──────────────────────────────────┼──────────┤
     │ sameV && sameH && sameD          │ Full (F) │
     │ sameV && sameH                   │ Side (S) │
     │ sameH                            │ Outer In │
     │ sameV                            │ Inner In │
     │ aucun                            │ Full Alt │
     └──────────────────────────────────┴──────────┘
```

**Avantage :** Fonctionne avec un nombre arbitraire de types de terrain dans une seule texture 3D. La texture source (8×8 sous-tuiles) contient tous les cas pour tous les types.

---

### Triangle Layout (Choix de la Diagonale)

Chaque tuile carrée est divisée en **2 triangles**. Le choix de la diagonale de division est critique pour un rendu correct des reliefs :

**Règle :** La diagonale relie les **2 coins ayant la plus petite différence de hauteur**.

```
B0(tile) = |height(TL) - height(BR)| < |height(TR) - height(BL)| ? 0 : 1

0 → diagonale TL↔BR (les deux coins les plus proches)
1 → diagonale TR↔BL
```

**Pourquoi c'est important :**
- Un pic (pyramide) n'est correctement rendu qu'avec la bonne diagonale
- Sans ce choix, un pic serait rendu comme une pente directionnelle
- SimCity 2000 utilise la règle inverse (diagonale entre les plus éloignés), ce qui donne des artefacts sur les sommets

**Layout des sommets (B0=0, diagonale TL-BR) :**
```
Triangle 1 : [TL, TR, BL]
Triangle 2 : [TR, BR, BL]
```

**Layout des sommets (B0=1, diagonale TR-BL) :**
```
Triangle 1 : [TL, TR, BR]
Triangle 2 : [TR, BR, BL] → alternatif
```

**Layout mémoire (6 sommets × 8 floats) :**
```
position (3) : x, y, z
normale   (3) : nx, ny, nz
texcoord  (2) : u, v
```

Chaque tuile génère 6 sommets (2 triangles × 3 sommets), soit 48 floats par tuile.

---

### Interpolation de Hauteur (Barycentrique)

Pour positionner un objet (golfeur, arbre, drapeau) sur le terrain à des coordonnées flottantes (x, y), on interpole la hauteur en utilisant le **triangle layout** de la tuile :

```
interpolateHeight(tile, fx, fy) :
  1. Déterminer le layout B0 de la tuile
  2. Coordonnées locales : lx = fx % 1, ly = fy % 1
  3. Si B0 = 0 (diagonale TL-BR):
     Si lx + ly > 1 → triangle BR : 
       h = (lx+ly-1)×h_BR + (1-lx)×h_BL + (1-ly)×h_TR
     Sinon → triangle TL :
       h = (1-lx-ly)×h_TL + lx×h_TR + ly×h_BL
  4. Si B0 = 1 (diagonale TR-BL):
     Idem après rotation 90° des coordonnées (lx'=ly, ly'=1-lx)
```

C'est une interpolation **barycentrique** sur le bon triangle. Cette méthode garantit une hauteur cohérente avec le rendu visuel.

---

### Normales et Éclairage

Terrain.dll importe `glLight*` d'OpenGL. Le jeu a :
- `changeLighting(level)` @ 0x100011c2 — change les paramètres d'éclairage
- Une lumière directionnelle principale (soleil)
- Une lumière ambiante

---

## 4. Textures

### Système de Thèmes

Le jeu a **4 thèmes** sélectionnés par `Terrain->courseType` (0-3) :

| ID | Thème | Dossier textures | Richesse |
|:--:|-------|:----------------:|:--------:|
| 0 | **Parkland** | `Themes/Parkland/` | 602 textures |
| 1 | **Links** | `Themes/Links/` | 644 textures |
| 2 | **Desert** | `Themes/Desert/` | 732 textures |
| 3 | **Tropical** | `Themes/Tropical/` | 547 textures |

### Nommage des Textures

Format : `<TerrainType><Groupe><Orientation><Variation>.bmp`

Exemple : `GrassySandA0001.bmp`
- `GrassySand` = type de terrain
- `A` = groupe géométrique (plat)
- `0001` = variation cosmétique (1-9)

### Variantes par Axe

| Axe | Description | Nb valeurs |
|:---:|-------------|:----------:|
| **Géométrie** | A (plat), B (pente), C (coin), D (diagonale), E (raide) | 1-8 formes |
| **Orientation** | Direction de la transition (N/E/S/W) | 1-4 |
| **Cosmétique** | Anti-répétition (compteur global par type) | 5-9 |
| **Passe** | Calque de rendu (base, overlay, chemin) | 1-3 |

**Formule :** `variantes totales = formes × orientations × cosmétiques × passes`

**Anti-répétition :** Le champ `tile->textureOffset` (calculé dans `setType` @ 0x100032f0) stocke une variation 0-8 basée sur un compteur global par type de terrain. `variation = compteurGlobal % maxVariation`. Ce compteur est incrémental — les tuiles adjacentes reçoivent des variations différentes, évitant l'effet de "tuilage" visible.

---

## 5. Chemins (Paths)

Terrain.dll gère des **splines** pour les chemins :
- `drawBezierSpline()` @ 0x10005230 — courbes de Bézier cubiques
- `drawCardinalSpline()` @ 0x10001244 — splines cardinales
- `layPath(tile, type, dir)` @ 0x100012c1 — poser un chemin
- `updatePath(x, y, dir)` @ 0x1000125d — mise à jour
- `stripRender(tile, type, height)` @ 0x10001299 — rendu d'une bande

Les chemins peuvent être :
- **Chemins piétons** (entre bâtiments)
- **Allées de golf** (fairway)
- **Routes** (pour les voiturettes)

---

## 6. Primitives de Dessin

- `drawLine(x1, y1, x2, y2, color, width)` @ 0x100048a0
- `drawCircle(tile, radius)` @ 0x100042a0
- `drawBezierSpline` @ 0x10005230
- `drawCardinalSpline` @ 0x10001244

Utilisées pour l'éditeur de terrain (surbrillance de sélection, placement d'objets).

---

## 7. Collisions et Hit-Test

- `tileHit(x, y)` @ 0x1000ab30 — retourne la tuile sous le curseur
- `hasPath(tile)` @ 0x1000a510 — vérifie si une tuile a un chemin
- `hasConnectedPath(x, y)` @ 0x1000a450 — vérifie la connectivité des chemins

Le hit-test convertit les coordonnées écran (x, y) en coordonnées tuile (tx, ty) via une transformation inverse de la projection isométrique.

### Mathématiques de la Projection Isométrique

La projection utilisée par SimGolf est **dimétrique** (rapport 2:1), pas une vraie isométrique (120°). Les formules sont :

**World → Screen (projection) :**
```
screenX = (mapX - mapY) × TILE_W/2
screenY = (mapX + mapY) × TILE_H/2
```

Avec les valeurs typiques : `TILE_W = 128` px, `TILE_H = 64` px.

**Screen → World (picking) :**
```
mapX = (screenX / (TILE_W/2) + screenY / (TILE_H/2)) / 2
mapY = (screenY / (TILE_H/2) - screenX / (TILE_W/2)) / 2
```

**Avec décalage de caméra (pan) :**
```
relX = screenX - cameraOffsetX
relY = screenY - cameraOffsetY
mapX = (relX / (TILE_W/2) + relY / (TILE_H/2)) / 2
mapY = (relY / (TILE_H/2) - relX / (TILE_W/2)) / 2
tileX = floor(mapX)
tileY = floor(mapY)
```

**⚠️ Problème des hauteurs (Z) :** En isométrique, une tuile surélevée est décalée visuellement vers le haut. Le picking 2D pur donne un tile incorrect si la hauteur n'est pas prise en compte. La solution robuste utilise un **tampon de profondeur** (Z-buffer) ou un **raycasting** qui intersecte la géométrie 3D réelle.

---

## 8. Normales et Éclairage

```
calcNormals(tile) @ 0x1000a6f0
├── Calcule la normale pour une tuile
└── Stocke dans la structure tile

calcAllNormals(tile) @ 0x1000a740
├── Calcule les normales pour une tuile et ses voisines
└── Garantit la continuité de l'éclairage
```

Les normales sont calculées à partir des élévations des 4 coins, permettant un éclairage cohérent sur les pentes.
