# Référence : MadcoreTom — Heightmaps and Golf

> **Source :** https://www.madcoretom.com/p/heightmaps/index.html
> **Post complémentaire :** https://www.madcoretom.com/p/3d-texture-for-tiles/index.html
> **Code source complet :** Embedded JS (ESBuild bundle), WebGL2 + TypeScript
> **Date :** 2024

---

## Résumé pour notre projet SimGolf

Ce blog décrit la **création d'un éditeur de terrain isométrique type SimGolf/SimCity 2000 en WebGL2**. L'auteur a reproduit exactement le rendu par tuiles et le système de transition de terrain. **C'est la référence la plus proche du rendu original.**

---

## 1. 🏔️ Algorithme de tuilage — Triangle Layout

### Le problème

Un quad (4 sommets) doit être divisé en 2 triangles. La direction de cette division affecte le rendu des reliefs.

### Mauvaise approche (SimCity 2000)

Tous les quads sont divisés dans la **même direction**. Cela signifie qu'un pic (pyramide) sera rendu comme une pente directionnelle — pas un vrai pic.

### Bonne approche (celle de MadcoreTom)

L'arête de division est placée **entre les deux coins les plus proches en hauteur** :

```ts
function B0(e, r) {
  // Compare les deux diagonales du quad
  // r = [col, row] sur la heightmap
  return Math.abs(
    e.heightMap.get(r[0],     r[1])     // TL
    - e.heightMap.get(r[0]+1, r[1]+1)   // BR
  ) < Math.abs(
    e.heightMap.get(r[0]+1, r[1])       // TR
    - e.heightMap.get(r[0],   r[1]+1)   // BL
  ) ? 0 : 1;
}
```

- **Retourne 0** : diagonale TL↔BR (les deux sommets les plus proches en Z)
- **Retourne 1** : diagonale TR↔BL

### Implémentation dans le VBO

Deux tableaux de 48 offsets (6 sommets × 8 float = position 3 + normal 3 + texcoord 2) :

```ts
// Layout pour B0=0 (TL-BR)
const Mr = [0,0,0, 1,0,1, 0,1,0,  ... 0,0,0, 1,0,0, 0,0,0];

// Layout pour B0=1 (TR-BL)
const Er = [0,0,0, 1,0,0, 0,0,0,  ... 0,0,0, 1,0,0, 0,0,0];
```

Chaque sommet : `[x, y, z, nx, ny, nz, u, v]` = **8 floats**.

### 🔥 Pour notre analyse

C'est exactement ce qu'on voit dans SimGolf RE. La fonction ASM `renderSingleTile` fait le même calcul avec les `tileHeight` des coins. On peut implémenter ça directement :

```ts
function getTriangleLayout(heightTL, heightTR, heightBR, heightBL): 0 | 1 {
  return Math.abs(heightTL - heightBR) < Math.abs(heightTR - heightBL) ? 0 : 1;
}
```

---

## 2. 🧩 Système de Sous-Tuiles (Autotiling)

### Le concept

Chaque tuile de la texture source est divisée en **4 sous-tuiles** (2×2). L'assemblage dépend des voisins.

### Texture source

```
┌────────┬────────┬────────┬────────┐
│ Full 1 │ Full 2 │ Full 3 │ Full 4 │  → 4 "pleines" (tous voisins identiques)
├────────┼────────┼────────┼────────┤
│ Side 1 │ Side 2 │ Side 3 │ Side 4 │  → 4 "côtés" (1 voisin différent)
├────────┼────────┼────────┼────────┤
│ In 1   │ In 2   │ Out 1  │ Out 2  │  → coins intérieurs / extérieurs
├────────┼────────┼────────┼────────┤
│ ...    │ ...    │ ...    │ ...    │  → 2e type de terrain
└────────┴────────┴────────┴────────┘
```

La texture fait **8×8 tuiles** (8×8 sous-tuiles = 64×64 sous-tuiles au total).

### Logique de sélection (fonction `xr`)

```ts
function getSubTile(tileMap, col, row, numTypes) {
  const tileType = tileMap.get(col/2, row/2);  // /2 car on est en sous-tuiles
  const subX = col % 2;
  const subY = row % 2;

  if (tileType == 0) {
    // Terrain spécial (type 0) : sous-tuiles fixes
    return (subX + 2) + (subY + 2) * numTypes;
  }

  // Voisinage : regarder les 3 voisins cardinaux + diagonal
  const sameH = (tileMap.get(col/2 + (subX*2-1), row/2) == tileType);
  const sameV = (tileMap.get(col/2, row/2 + (subY*2-1)) == tileType);
  const sameD = (tileMap.get(col/2 + (subX*2-1), row/2 + (subY*2-1)) == tileType);

  if (sameV && sameH && sameD) { /* Full  */  return subX + subY * numTypes; }
  if (sameV && sameH)          { /* Side  */  return (subX+2) + subY * numTypes; }
  if (sameH)                   { /* autre  */  return (subX+6) + subY * numTypes; }
  if (sameV)                   { /* autre  */  return subX + (subY+2) * numTypes; }
                               { /* Corner */  return (subX+4) + subY * numTypes; }
}
```

### Les 4 cas

| Pattern | Nom | Description |
|---------|-----|-------------|
| `sameV && sameH && sameD` | **Full** (F) | Tous voisins identiques → texture pleine |
| `sameV && sameH` | **Side** (S) | Même horizontal ET vertical, mais diagonal différent → bord |
| `sameH` | **Outer corner** (out) | Seul l'horizontal est pareil → coin extérieur |
| `sameV` | **Inner corner** (in) | Seul le vertical est pareil → coin intérieur |
| Aucun | **Full alt** | Aucun voisin pareil → autre texture pleine |

### 🔥 Pour notre analyse

C'est **exactement** le même système que les textures A–D de SimGolf RE, mais généralisé à N types de terrain. Notre `AutoTiler.computeNeighborMask()` fait la même chose. On peut remplacer notre système à 4 orientations (N/E/S/W) par ce système à 4 sous-tuiles × 4 configurations, ce qui est plus générique et supporte N types de terrain.

---

## 3. 🎨 3D Textures pour le rendu des tuiles

### Le principe (post complémentaire)

Au lieu d'utiliser un sprite sheet 2D, l'auteur charge toutes les tuiles dans une **texture 3D WebGL2** :

```
Texture 3D : [layerWidth × layerHeight × nLayers]
  Layer 0 : tuile 0
  Layer 1 : tuile 1
  ...
  Layer N : tuile N
```

### Initialisation

```ts
const texture = gl.createTexture();
gl.bindTexture(gl.TEXTURE_3D, texture);
gl.texStorage3D(gl.TEXTURE_3D, 1, gl.RGBA8, layerWidth, layerHeight, layerDepth);
gl.texParameteri(gl.TEXTURE_3D, gl.TEXTURE_MAG_FILTER, gl.NEAREST);
gl.texParameteri(gl.TEXTURE_3D, gl.TEXTURE_MIN_FILTER, gl.NEAREST);
```

### Chargement

```ts
for (let i = 0; i < layerDepth; i++) {
  const x = i % cols;
  const y = Math.floor(i / rows);
  const data = ctx.getImageData(x * layerWidth, y * layerHeight, layerWidth, layerHeight).data;
  gl.texSubImage3D(gl.TEXTURE_3D, 0, 0, 0, i, layerWidth, layerHeight, 1, gl.RGBA, gl.UNSIGNED_BYTE, data);
}
```

### Shader d'affichage

**Vertex shader :**
```glsl
#version 300 es
in vec3 aPos;
in vec3 aNorm;
in vec2 aTex;
uniform mat4 uCameraMat;
uniform mat4 uWorldMat;
void main(void) {
    gl_Position = uCameraMat * (uWorldMat * vec4(aPos, 1.0));
}
```

**Fragment shader :**
```glsl
#version 300 es
precision mediump float;
precision mediump sampler3D;

uniform sampler2D uTex;      // carte des tuiles (2D)
uniform sampler3D uTex2;     // textures des tuiles (3D)
uniform vec2 uScale;

in vec2 uv;
in vec3 norm;
out vec4 o_color;

void main(void) {
  float t = texture(uTex, uv / uScale).r;    // index de tuile (0-1)
  vec4 rgba = texture(uTex2, vec3(mod(uv * 2.0, 1.0), t));  // lookup 3D
  float light = norm.z * norm.z;
  o_color = vec4(rgba.rgb * light, 1.0);
}
```

### Framebuffer pour la carte éditable

La carte des tuiles est rendue dans un FBO. Au clic :

```ts
gl.bindTexture(gl.TEXTURE_2D, map.tex);
const pix = mousePosToTile(mousePos);
const pixels = new Uint8Array([255 * Math.random(), 0, 0, 255]);
gl.texSubImage2D(gl.TEXTURE_2D, 0, pix[0], pix[1], 1, 1, gl.RGBA, gl.UNSIGNED_BYTE, pixels);
gl.bindTexture(gl.TEXTURE_2D, null);
```

### 🔥 Pour notre analyse

En WebGL2 (Phaser 4 utilise WebGL2), on peut utiliser cette technique pour remplacer le sprite batching classique. Avantage : support natif du `NEAREST` filtering, pas de gap entre les tuiles, mise à jour partielle avec `texSubImage2D`. **Inconvénient** : pas de support dans Phaser 4 directement (faudrait un custom pipeline ou un render texture).

**Alternative plus simple pour Phaser 4** : utiliser un `RenderTexture` et `RenderTexture.draw()` avec des sous-textures, ou un tilemap dynamique.

---

## 4. 🖱️ Système de Picking (sélection au clic)

### Principe

Deux passes de rendu :

1. **Passe de picking** : rend toute la scène avec la position (x,y,z) encodée dans (R,G,B)
2. **Passe normale** : rend avec l'éclairage et les textures

### Vertex shader "picker"

```glsl
precision mediump float;
varying vec3 vPos;

void main(void) {
    gl_FragColor = vec4(vPos, 1.0);
}
```

### Lecture du pixel

```ts
gl.readPixels(clickX, viewportH - clickY, 1, 1, gl.RGBA, gl.UNSIGNED_BYTE, sampleBuffer);
const vertX = Math.round(red / 255 * width);   // vertex précis
const tileX = Math.floor(red / 255 * width);    // tuile entière
```

### 🔥 Pour notre analyse

Dans SimGolf, le picking est géré par la fenêtre de jeu (messages Windows `WM_LBUTTONDOWN` → conversion en tuile via la matrice de projection). En Web, on peut utiliser cette technique ou bien un raycast plus classique. La technique RGB-position est **ultra simple** et fonctionne pour n'importe quel terrain déformé.

---

## 5. 🏗️ Structure du Mesh (VBO Dynamique)

### Création

```ts
const vbo = gl.createBuffer();
gl.bindBuffer(gl.ARRAY_BUFFER, vbo);
gl.bufferData(gl.ARRAY_BUFFER, new Float32Array(data), gl.DYNAMIC_DRAW);
```

### Mise à jour partielle

```ts
gl.bindBuffer(gl.ARRAY_BUFFER, vbo);
gl.bufferSubData(gl.ARRAY_BUFFER, offset * Float32Array.BYTES_PER_ELEMENT, new Float32Array(newData));
```

### Layout par sommet

```
Position (3) + Normal (3) + TexCoord (2) = 8 floats × 4 bytes = 32 bytes/sommet
```

### 🔥 Pour notre analyse

En Phaser 4, on peut utiliser `Mesh` ou `Rope` pour un VBO dynamique. Mais pour SimGolf, le nombre de tuiles est fixe (12×12 à 18×18) — on peut aussi pré-générer tout le mesh en statique et ne modifier que les hauteurs avec `mesh.updateVertices()`.

---

## 6. 🏔️ Interpolation de hauteur pour le curseur

```ts
function interpolateHeight(heightMap, pos) {
  const layout = getTriangleLayout(heightMap, corner);
  const [x, y] = [pos.x % 1, pos.y % 1];
  
  if (layout == 0) {
    // Diagonale TL-BR
    if (x + y > 1) {
      // Triangle BR
      return (x+y-1)*h[2] + (1-x)*h[3] + (1-y)*h[1];
    } else {
      // Triangle TL
      return (1-x-y)*h[0] + x*h[1] + y*h[3];
    }
  } else {
    // Diagonale TR-BL
    [x, y] = [y, 1-x]; // Rotation 90° pour réutiliser la même logique
    // idem
  }
}
```

C'est une **interpolation barycentrique** sur le bon triangle — parfait pour positionner les objets (arbres, golfeurs) sur le terrain.

---

## 7. 🎮 Architecture de l'Éditeur

```
terrainState = {
  width: 12, height: 12,
  heightMap: Grid<number>(13×13),    // height at each vertex
  tileMap: Grid<number>(12×12),      // tile type for each cell
  mode: 0|1|2|3,                     // TERRAIN | TILES | ITEMS | PLAY
  terrainTool: RAISE|LOWER|FLATTEN,
  tileTool: TOGGLE|ROUGH|FAIRWAY|GREEN,
  cameraAngle: float,
  marker: { type:'vert'|'tile', pos:[x,y] }
}
```

### Modes

| Mode | Action |
|------|--------|
| **TERRAIN** | RAISE/LOWER : modifie un vertex (+0.1/-0.1). FLATTEN : moyenne des 4 coins |
| **TILES** | Change le type de terrain de la tuile (0=gazon, 1=green, 2=rough) |
| **ITEMS** | Placement d'objets (pas encore implémenté) |
| **PLAY** | Mode jeu (pas encore implémenté) |

---

## 8. 🔧 Leçons et Limitations

### Ce qui est bien fait
- **Séparation des passes** : picking + rendu normal avec FBO partagé
- **Rafraîchissement partiel** : seul le VBO des tuiles modifiées est mis à jour (pas tout le mesh)
- **Sous-tuiles + 3D textures** : approche scalable pour N types de terrain

### Ce qui manque (pour notre projet)
- **Pas de décorations** (arbres, bâtiments, drapeaux)
- **Pas de golf jouable** (le mode PLAY est un placeholder)
- **Pas d'audio**
- **Gestion mémoire** : tout le mesh est en Float32Array → 96 floats par tuile (6 sommets × 8 floats × 2 triangles) → pour 18×18 = 324 tuiles × 48 = 15 552 floats. Acceptable.
- **Pas de multi-texture** (tous les terrains sont dans une seule tilesheet)
- **Éclairage simpliste** : `norm.z * norm.z` — juste une lumière directionnelle verticale

### Ce qu'on peut reprendre tel quel
- ✅ Algorithme de **triangle layout** (split selon diagonale la plus plate)
- ✅ Logique de **sous-tuiles par voisinage** (S/in/out/full)
- ✅ **Interpolation barycentrique** pour positionnement
- ✅ Architecture **mode édition ↔ mode jeu**

---

## 9. 📐 Formats et Chiffres Clés

| Élément | Valeur |
|---------|--------|
| Taille grille | 12×12 (256×256 max possible) |
| Sommets heightmap | (W+1)×(H+1) = 13×13 |
| Sous-tuiles par tuile | 2×2 = 4 |
| Nb de types de terrain | 3 (gazon, green, rough) |
| Nb de sous-tuiles dans tilesheet | 8 colonnes × 8 lignes = 64 |
| Bytes par sommet VBO | 32 (pos:3 + normal:3 + uv:2) × 4 bytes |
| Triangles par tuile | 2 (6 sommets) |
| Pixels par sous-tuile | 32×32 |
| FBO picking | Même taille que viewport |
| Interpolation | Barycentrique bilinéaire adaptée au triangle layout |
