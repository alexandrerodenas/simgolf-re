# Système des Arbres

> **Confiance :** ✅ Élevée — textures BMP confirmées par analyse des fichiers,
> animations FLC confirmées par l'inventaire des assets
> ⚠️ L'articulation exacte entre les deux systèmes (tuile Woods vs sprite FLC) n'est pas 100% décompilée

---

## 1. Dualité du Système

SimGolf a **deux systèmes d'arbres** qui coexistent. Ils ne sont pas interchangeables — ils servent des usages différents :

| Aspect | Tuile Woods (ID 14) | Sprite FLC animé |
|--------|:-------------------:|:-----------------:|
| **Nature** | Texture de sol (terrain type) | Objet décoratif 3D overlay |
| **Rendu** | Dans le tile grid (avec le terrain) | Par-dessus le terrain (renderObjects) |
| **Collision balle** | La balle atterrit dans le rough | La balle rebondit (obstacle solide) |
| **Pathfinding** | Coût élevé (contournable) | Infranchissable |
| **Animé** | Non (texture statique) | Oui (FLC, ~200 fichiers) |
| **Directions** | N/A | 8 directions (billboard) |
| **Usage** | Grandes zones boisées | Arbres individuels, décoration |

---

## 2. Système Tuile : Woods (ID 14)

### 2.1 Identité

Le type de terrain **Tree** (ID 14) correspond aux textures **Woods** dans le système de fichiers. C'est une tuile pleine qui remplit entièrement une cellule de la grille.

### 2.2 Textures

| Propriété | Valeur |
|-----------|--------|
| Nom technique | `Woods` |
| Groupes géométriques | 4 (A–D) |
| Cosmétiques par groupe | 9 (0001–0009) |
| **Total par thème** | **36 textures** |
| Orientation | — (pas de bordure directionnelle) |
| Famille de voisinage | `grass family` (GRASS, TREE, BUSH, ROUGH) |

**Convention de nommage :**
```
WoodsA0001.bmp  → Groupe A, variante 1
WoodsC0005.bmp  → Groupe C, variante 5
```

> ⚠️ Les groupes A–D de Woods ne correspondent **pas** à la géométrie d'élévation standard (A=plat, B=pente…). Ce sont probablement des variantes décoratives : WoodsA=gazon arboré clairsemé, WoodsB=forêt dense, WoodsC=sous-bois, WoodsD=fourré. Hypothèse à valider.

### 2.3 Comportement

- **Pathfinding :** coût élevé (l'IA contourne sauf si la ligne droite est significativement plus courte)
- **Balle :** atterrit comme dans du Rough (facteur d'atténuation)
- **Famille de voisinage :** appartient à la famille `grass` avec GRASS, BUSH, ROUGH — donc pas de bordure de transition entre ces types

### 2.4 Par thème

Les textures Woods existent dans les 4 thèmes avec les mêmes 36 variations.

---

## 3. Système Sprite : Arbres FLC Animés (~200 fichiers)

### 3.1 Organisation

Les arbres FLC sont stockés dans `Trees/<Theme>/` avec 4 dossiers par thème :

```
Trees/
├── Desert/       → Palmiers, cactus, buissons secs
├── Links/        → Pins, bruyère, genêts
├── Parkland/     → Chênes, érables, buissons feuillus
└── Tropical/     → Palmiers tropicaux, bananiers, fougères
```

### 3.2 Format

Ce sont des **animations FLC** (Autodesk Animator) :
- Palette 8-bit indexée (256 couleurs)
- Compression delta inter-frame
- Environ 200 fichiers au total
- Chaque arbre a probablement 8 directions (angles de caméra)

### 3.3 Rendu

Les arbres FLC sont rendus via `renderObjects()` dans le pipeline :
```
Terrain::render()
├── renderTile() × N (terrain)
├── renderObjects()     ← ici : arbres, bâtiments, drapeaux
│   ├── glBindTexture(textureID)
│   ├── glBegin(GL_TRIANGLE_STRIP)
│   ├── glTexCoord2f + glVertex3f × 4
│   └── glEnd()
├── renderPaths() (chemins)
└── SwapBuffers()
```

Ils sont **billboardés** (toujours face à la caméra) — typique des sprites 3D d'époque.

### 3.4 Interaction avec la balle

Les arbres FLC sont des **obstacles solides** :
- La balle peut **rebondir** sur un tronc d'arbre
- L'IA peut choisir un **Low Shot** (trajectoire roulée sous les branches) si des arbres obstruent le chemin aérien
- L'attribut **Imagination** du golfeur influence la capacité à contourner les arbres

---

## 4. Comparaison avec les Autres Éléments Végétaux

### 4.1 Fleurs / Buissons (terrain ID 15)

| Propriété | Fleurs (ID 15) | Arbres (ID 14) |
|-----------|:--------------:|:--------------:|
| Textures | `FlowerBed` | `Woods` |
| Nombre | ~50 FLC + textures | 36 tuiles + ~200 FLC |
| Pathfinding | Traversable | Contourné |
| Balle | Traversé | Rebondit ou ralentit |

### 4.2 Brush (type décoratif)

`Brush` est un terrain décoratif avec 4 groupes (A–D) et 9 variations (36 textures). C'est probablement un **précurseur** des Woods ou un **buisson bas** qui ne bloque pas la vue.

---

## 5. Pour le Portage

### 5.1 Stratégie de rendu recommandée

| Approche | Description |
|----------|-------------|
| **Woods (tuile)** | Texture statique sur le tile mesh. Une seule image par tuile (pas de tilemap animé). |
| **Arbres FLC** | Décoder les FLC → spritesheet PNG en pré-compilation. Rendu en tant que sprites billboardés dans une passe séparée. |

### 5.2 Collisions

Deux types de collisions à implémenter :
1. **Woods (tuile)** : test de collision grille (coût pathfinding + facteur d'atténuation balle)
2. **Arbres FLC (sprite)** : bounding box / circle autour de l'objet pour les rebonds

### 5.3 Audio

Les arbres n'ont pas de son dédié. Le bruit de la balle dans les feuilles est probablement géré par le système audio générique (WAV de type `tree_hit`, `branch`, etc. — à vérifier dans sound.dll).

---

## 6. Références croisées

| Document | Contenu |
|----------|---------|
| [02-terrain.md](../docs/02-terrain.md) | Types de terrain (Tree = ID 14) |
| [04-golfers.md](../docs/04-golfers.md) | IA : low shot sous les arbres |
| [05-physics.md](../docs/05-physics.md) | Collision balle/arbres |
| [11-animations.md](../docs/11-animations.md) | Inventaire FLC complet (~200 arbres) |
| [15-asset-inventory.md](../docs/15-asset-inventory.md) | Liste des assets |
