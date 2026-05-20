# Pipeline Graphique

> **Confiance :** ✅ Élevée — jgld.dll décompilée (25 exports, libpng 1.0.5 intégré)
> Terrain.dll analysée (38 exports, OpenGL)

---

## 1. Dual-Moteur

SimGolf utilise **deux moteurs graphiques** qui s'empilent :

```
  ┌────────────────────────────────────────────┐
  │     jgld.dll — Moteur 2D (GDI32 pur)       │
  │  Sprites UI (PCX), polices, framebuffer,    │
  │  compositing final BitBlt                   │
  ├────────────────────────────────────────────┤
  │     Terrain.dll — Moteur 3D (OpenGL 1.x)    │
  │  Terrain isométrique, textures, éclairage,  │
  │  objets 3D (arbres, bâtiments)               │
  └────────────────────────────────────────────┘
```

### Pourquoi deux moteurs ?

- **Terrain.dll** = héritage de jeux précédents Firaxis (Sid Meier's SimGolf utilise le moteur de Sid Meier's Golf)
- **jgld.dll** = "Jackal Graphics Library" — une bibliothèque GDI32 générique utilisée pour l'interface et le 2D
- L'OpenGL gère la scène 3D, le GDI gère les overlays 2D

---

## 2. jgld.dll — Moteur 2D (Jackal Graphics Library)

### Informations Générales

| Propriété | Valeur |
|-----------|--------|
| Fichier | `jgld.dll` |
| Taille debug | 1.2 MB (MSVC++6.0 Debug) |
| Taille release | 396 Ko (packé) |
| ImageBase | `0x10000000` |
| Export unique | `get_graphsy_object_ptr` |
| Fonctions | ~1200 (debug build) |
| Technologie | GDI32 pur |

### Technologies Embarquées

| Bibliothèque | Version | Usage |
|-------------|:-------:|-------|
| **libpng** | 1.0.5 | Décodage PNG pour textures et sprites |
| **GDI32** | — | CreateDIBSection, BitBlt, StretchBlt, CreateFontIndirect, TextOut |
| **USER32** | — | CreateWindowEx, RegisterClass, GetMessage |

### Structure Principale : JackalClass (332 bytes = 0x14C)

```
JackalClass @ [0x1012870c]
├── +0x000  vtable          — méthodes virtuelles
├── +0x004  hWnd            — fenêtre de rendu
├── +0x008  hDC             — device context principal
├── +0x00c  hSpriteDC       — DC pour sprites off-screen
├── +0x010  hSpriteBMP      — DIBSection des sprites
├── +0x014  hPalette        — palette 8-bit
├── +0x018  screenWidth     — largeur écran (px)
├── +0x01c  screenHeight    — hauteur écran (px)
└── ... (autres champs)
```

### Fonctionnement

1. **Création :** `get_graphsy_object_ptr()` instancie JackalClass
2. **Framebuffer :** CreateDIBSection crée un bitmap en mémoire (palettisé 8-bit ou 16-bit)
3. **Rendu :**
   - Les sprites sont dessinés dans le DC off-screen
   - Les textes sont dessinés via TextOut GDI
   - Le compositing final se fait par BitBlt/StretchBlt dans le DC de la fenêtre
4. **Palettes :** Les PCX 8-bit ont leur propre palette, convertie en HPALETTE GDI

### Chargement PCX

Les fichiers `.pcx` sont chargés via :
```c
// Signature approximative
int LoadPCX(const char* filename, HBITMAP* surface, HPALETTE* palette)
// 1. fopen → fread → header PCX
// 2. Décompression RLE (Run-Length Encoding)
// 3. CreateDIBSection avec palette
// 4. Copie des pixels décompressés
```

---

## 3. Terrain.dll — Moteur 3D (OpenGL)

### Informations Générales

| Propriété | Valeur |
|-----------|--------|
| Fichier | `Terrain.dll` |
| Taille | 972 Ko |
| Exports | 38 (tous C++ manglés, classe Terrain) |
| Rendu | OpenGL 1.x (44 imports) |

### Imports OpenGL

```
glBegin, glEnd              — Primitives
glBindTexture               — Textures
glTexCoord2f                — Coordonnées UV
glVertex3f                  — Sommets 3D
glNormal3f                  — Normales
glLight*, glLightModel*     — Éclairage
glMatrixMode, glLoadIdentity, glPushMatrix, glPopMatrix — Transformations
glEnable, glDisable         — États
glColor3f, glColor4f        — Couleurs
glViewport                  — Viewport
glClear, glClearColor       — Effacement
```

### Résolution Minimum

Le jeu requiert **800×600** minimum (vérifié dans SystemCheck).

---

## 4. Pipeline de Rendu Complet

```
1. Terrain::initSystem(w, h, hDC, fullscreen) @ 0x10009c80
   ├── Configure le contexte OpenGL (PIXELFORMATDESCRIPTOR)
   ├── wglCreateContext, wglMakeCurrent
   └── Charge les textures du thème

2. GameLoopCallback @ 0x4a5108 (chaque frame):
   a) Terrain::render() @ 0x10005990
      ├── glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
      ├── Calcule matrice de projection + caméra
      ├── Pour chaque tuile visible :
      │   ├── bindTexture → glBegin(GL_TRIANGLE_STRIP)
      │   ├── glTexCoord2f + glVertex3f × 4
      │   └── glEnd()
      ├── Rendu des objets (arbres, bâtiments)
      ├── Rendu des chemins (splines)
      └── SwapBuffers(hDC)
   
   b) jgld::composite()
      ├── Dessine les sprites UI overlay dans le DIBSection
      ├── BitBlt(hWndDC, 0, 0, 800, 600, hSpriteDC, 0, 0, SRCCOPY)
      └── StretchBlt si résolution != 800×600

3. UI_Update()
   ├── Met à jour les boutons
   ├── Dessine les infoscreens (black.pcx + _alpha.pcx)
   └── BitBlt overlay par-dessus la vue OpenGL
```

---

## 5. Gestion des Sprites

Les sprites sont stockés dans le DIBSection de JackalClass. Chaque sprite est un `JGLSprite` :

```c
typedef struct {
    HBITMAP hBitmap;        // DIBSection
    HPALETTE hPalette;      // Palette associée
    int width, height;      // Dimensions
    int hotspotX, hotspotY; // Point d'ancrage
    int flags;              // Transparence, alpha, etc.
} JGLSprite;
```

Les sprites sont référencés par leur chemin PCX (ex: `interface\\WorldBase.pcx`).

### Transparence

Les fichiers `_alpha.pcx` contiennent un masque de transparence. Le compositing se fait par :
1. BitBlt du fond (black.pcx)
2. BitBlt du masque alpha (version _A.pcx) avec `SRCAND`
3. BitBlt de l'image principale avec `SRCPAINT`

Cette technique GDI classique crée un effet de transparence sans support alpha natif.

---

## 6. Polices

Le jeu utilise GDI `CreateFontIndirect` pour charger les polices. Les textes sont affichés via `TextOut`.

Les polices sont probablement des polices TrueType standards présentes sur le système (Arial, etc.). Quelques fichiers `.txt` de thème sont référencés (`desert.txt`, `parkland.txt`, etc.) — ce sont peut-être des descriptions de parcours.

---

## 7. JPEG Intégré

Le binaire golf.exe contient une bibliothèque JPEG complète (identifiée par les chaînes d'erreur : "Define Quantization Table", "Huffman table overflow", etc.).

**Usage probable :** sauvegarde d'images (screenshots, thumbnails de parcours).

---

## 8. Bink Video

Le jeu utilise **Bink Video** (via `binkw32.dll`) pour les cutscenes. 16 imports de Bink sont présents dans golf.exe.

Les vidéos Bink (.bik) ne sont pas dans le dump actuel — elles sont probablement sur le CD d'installation.

---

## 9. Techniques WebGL2 pour un Portage Moderne

Cette section décrit les techniques WebGL2/OpenGL ES 3.0 utilisables pour implémenter le rendu isométrique de SimGolf dans un contexte moderne. Elles sont indépendantes de tout framework (Phaser, Three.js, etc.) — chaque framework a ses propres wrappers.

### 9.1 VBO Dynamique (Dynamic VBO)

Le maillage du terrain est stocké dans un VBO avec `DYNAMIC_DRAW` pour permettre des mises à jour partielles :

```ts
// Création
const vbo = gl.createBuffer();
gl.bindBuffer(gl.ARRAY_BUFFER, vbo);
gl.bufferData(gl.ARRAY_BUFFER, new Float32Array(initialData), gl.DYNAMIC_DRAW);

// Mise à jour partielle d'une tuile
gl.bindBuffer(gl.ARRAY_BUFFER, vbo);
gl.bufferSubData(gl.ARRAY_BUFFER,
  tileIndex * 48 * Float32Array.BYTES_PER_ELEMENT,
  new Float32Array(tileVertices));
```

**Layout par sommet (8 floats = 32 bytes) :**

| Offset | Champ | Type |
|:------:|-------|:----:|
| 0-2 | `position` (x, y, z) | vec3 |
| 3-5 | `normal` (nx, ny, nz) | vec3 |
| 6-7 | `texcoord` (u, v) | vec2 |

**Par tuile :** 6 sommets × 8 floats = 48 floats = 192 bytes
**Par grille 18×18 :** 324 tuiles × 48 floats = 15 552 floats = 62 Ko

**Attributs VAO :**
```ts
const stride = 8 * Float32Array.BYTES_PER_ELEMENT;
gl.vertexAttribPointer(aPos, 3, gl.FLOAT, false, stride, 0);
gl.vertexAttribPointer(aNorm, 3, gl.FLOAT, false, stride, 3 * Float32Array.BYTES_PER_ELEMENT);
gl.vertexAttribPointer(aTex, 2, gl.FLOAT, false, stride, 6 * Float32Array.BYTES_PER_ELEMENT);
```

### 9.2 Texture 3D pour les Tuiles (WebGL2 uniquement)

Alternative au sprite sheet classique : charger toutes les tuiles dans une **texture 3D** (une tuile par couche Z).

**Initialisation :**
```ts
const texture = gl.createTexture();
gl.bindTexture(gl.TEXTURE_3D, texture);
gl.texStorage3D(gl.TEXTURE_3D, 1, gl.RGBA8, tileWidth, tileHeight, numTiles);
gl.texParameteri(gl.TEXTURE_3D, gl.TEXTURE_MAG_FILTER, gl.NEAREST);
gl.texParameteri(gl.TEXTURE_3D, gl.TEXTURE_MIN_FILTER, gl.NEAREST);
gl.texParameteri(gl.TEXTURE_3D, gl.TEXTURE_WRAP_S, gl.CLAMP_TO_EDGE);
gl.texParameteri(gl.TEXTURE_3D, gl.TEXTURE_WRAP_T, gl.CLAMP_TO_EDGE);
gl.texParameteri(gl.TEXTURE_3D, gl.TEXTURE_WRAP_R, gl.CLAMP_TO_EDGE);
```

**Chargement des couches :**
```ts
// Depuis un sprite sheet 2D découpé en regions
for (let i = 0; i < numTiles; i++) {
  const x = i % cols;
  const y = Math.floor(i / cols);
  const data = ctx.getImageData(x * tileWidth, y * tileHeight, tileWidth, tileHeight).data;
  gl.texSubImage3D(gl.TEXTURE_3D, 0, 0, 0, i, tileWidth, tileHeight, 1, gl.RGBA, gl.UNSIGNED_BYTE, data);
}
```

**Fragment shader :**
```glsl
#version 300 es
precision mediump float;
precision mediump sampler3D;

uniform sampler2D uTileMap;   // carte 2D des index de tuiles
uniform sampler3D uTileTex;   // textures 3D des tuiles
uniform vec2 uMapSize;        // dimensions de la carte

in vec2 vUv;
in vec3 vNorm;
out vec4 fragColor;

void main(void) {
  // Lire l'index de tuile depuis la carte
  float tileIndex = texture(uTileMap, vUv / uMapSize).r;

  // Coordonnées dans la sous-tuile (2×2)
  vec2 subUv = mod(vUv * 2.0, 1.0);

  // Échantillonner la texture 3D
  vec4 texel = texture(uTileTex, vec3(subUv, tileIndex));

  // Éclairage simple (lumière directionnelle verticale)
  float light = vNorm.z * vNorm.z;
  fragColor = vec4(texel.rgb * light, 1.0);
}
```

**Avantages :**
- Pas de gap entre les tuiles (problème classique des sprite sheets)
- NEAREST filtering parfait pour le pixel art
- Mise à jour partielle : `texSubImage2D` sur la tile map
- Supporte N types de terrain dans une seule texture

**Inconvénients :**
- WebGL2 uniquement (pas WebGL 1.0)
- Pas de mipmaps (CLAMP_TO_EDGE obligatoire)
- Consommation mémoire : layerDepth × tileWidth × tileHeight × 4 bytes

### 9.3 Picking par Encodage RGB

Technique pour détecter quelle tuile/vertex est sous le curseur, sans raycasting complexe.

**Principe :** Une passe de rendu séparée dessine toute la scène avec les coordonnées (x, y, z) encodées en (R, G, B). On lit un seul pixel avec `readPixels`.

**Vertex shader (pass picking) :**
```glsl
#version 300 es
in vec3 aPos;
uniform mat4 uProjMat;
uniform vec2 uTerrainSize;

out vec3 vPos;

void main(void) {
  gl_Position = uProjMat * vec4(aPos, 1.0);
  vPos = aPos / vec3(uTerrainSize, 1.0);  // normalisé dans [0,1]
}
```

**Fragment shader (pass picking) :**
```glsl
precision mediump float;
in vec3 vPos;
out vec4 fragColor;

void main(void) {
  fragColor = vec4(vPos, 1.0);
}
```

**Lecture du résultat :**
```ts
const pixel = new Uint8Array(4);
gl.readPixels(clickX, viewportHeight - clickY, 1, 1, gl.RGBA, gl.UNSIGNED_BYTE, pixel);

// Vertex précis
const vertX = Math.round((pixel[0] / 255) * terrainWidth);
const vertY = Math.round((pixel[1] / 255) * terrainHeight);

// Tuile entière
const tileX = Math.floor((pixel[0] / 255) * terrainWidth);
const tileY = Math.floor((pixel[1] / 255) * terrainHeight);

// Si pixel[2] < 255 → le clic est sur le terrain
// Si pixel[2] == 255 → le clic est sur le ciel/fond
const hitTerrain = pixel[2] < 255;
```

**Configuration :**
```ts
// FBO de picking (même taille que le viewport)
const pickerFbo = gl.createFramebuffer();
gl.bindFramebuffer(gl.FRAMEBUFFER, pickerFbo);
gl.framebufferTexture2D(gl.FRAMEBUFFER, gl.COLOR_ATTACHMENT0, gl.TEXTURE_2D, pickerTex, 0);

// Avant le readPixels, on bind le FBO et on rend la scène
gl.bindFramebuffer(gl.FRAMEBUFFER, pickerFbo);
gl.viewport(0, 0, viewportWidth, viewportHeight);
gl.clearColor(0, 0, 1, 1);  // bleu = ciel
gl.clear(gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT);
// ... rendu normal de la scène avec le shader picking ...
gl.readPixels(clickX, clickY, 1, 1, gl.RGBA, gl.UNSIGNED_BYTE, pixel);
gl.bindFramebuffer(gl.FRAMEBUFFER, null);
```

**Avantages :**
- Simple à implémenter
- Fonctionne pour n'importe quelle géométrie (terrain déformé, objets 3D)
- Pas de calcul mathématique complexe (pas d'inversion de projection)
- Résolution limitée par la précision du readPixels (8 bits par canal)

**Précision :** Avec des canaux 8 bits et une grille de 256×256 max, la précision est suffisante pour distinguer chaque vertex. Pour des grilles plus grandes, on peut utiliser 2 canaux par axe (ex: R+G pour X = 16 bits).

### 9.4 Framebuffer pour Carte Éditable

La carte des types de terrain (tile map) est stockée dans une texture 2D attachée à un FBO. Les modifications se font par `texSubImage2D`.

**Création du FBO :**
```ts
function createTileMapFBO(gl, width, height) {
  const tex = gl.createTexture();
  gl.bindTexture(gl.TEXTURE_2D, tex);
  gl.texImage2D(gl.TEXTURE_2D, 0, gl.RGBA, width, height, 0, gl.RGBA, gl.UNSIGNED_BYTE, null);
  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MIN_FILTER, gl.NEAREST);
  gl.texParameteri(gl.TEXTURE_2D, gl.TEXTURE_MAG_FILTER, gl.NEAREST);

  const depthBuffer = gl.createRenderbuffer();
  gl.bindRenderbuffer(gl.RENDERBUFFER, depthBuffer);
  gl.renderbufferStorage(gl.RENDERBUFFER, gl.DEPTH_COMPONENT16, width, height);

  const fb = gl.createFramebuffer();
  gl.bindFramebuffer(gl.FRAMEBUFFER, fb);
  gl.framebufferTexture2D(gl.FRAMEBUFFER, gl.COLOR_ATTACHMENT0, gl.TEXTURE_2D, tex, 0);
  gl.framebufferRenderbuffer(gl.FRAMEBUFFER, gl.DEPTH_ATTACHMENT, gl.RENDERBUFFER, depthBuffer);

  return { tex, fb, width, height };
}
```

**Modification d'une tuile :**
```ts
function setTile(map, tileX, tileY, tileType) {
  gl.bindTexture(gl.TEXTURE_2D, map.tex);
  const pixel = new Uint8Array([tileType * 64, 0, 0, 255]);  // R = index (0-255)
  gl.texSubImage2D(gl.TEXTURE_2D, 0, tileX, tileY, 1, 1, gl.RGBA, gl.UNSIGNED_BYTE, pixel);
  gl.bindTexture(gl.TEXTURE_2D, null);
}
```

**Note sur la résolution :** Pour une grille 18×18 avec le système de sous-tuiles (2×2), la tile map fait 36×36 pixels. Chaque pixel stocke l'index du type de terrain dans le canal R.

### 9.5 Calcul des Normales

Pour un éclairage cohérent, les normales doivent être calculées pour chaque sommet en fonction des hauteurs des coins voisins :

```ts
function calculateNormal(heightMap, x, y) {
  // Différences finies
  const hL = heightMap.get(x - 1, y) ?? heightMap.get(x, y);
  const hR = heightMap.get(x + 1, y) ?? heightMap.get(x, y);
  const hD = heightMap.get(x, y - 1) ?? heightMap.get(x, y);
  const hU = heightMap.get(x, y + 1) ?? heightMap.get(x, y);

  // Vecteurs tangents
  const dx = [2, 0, hR - hL];   // pas horizontal = 2 unités
  const dy = [0, 2, hU - hD];   // pas vertical = 2 unités

  // Normale = produit vectoriel
  return normalize(cross(dx, dy));
}
```

Pour la continuité visuelle (éviter les cassures d'éclairage), chaque tuile doit utiliser les normales calculées à partir des hauteurs des tuiles adjacentes, pas seulement les 4 coins de la tuile elle-même.

### 9.6 Comparaison : OpenGL 1.x (Original) vs WebGL2

| Aspect | SimGolf Original (OpenGL 1.x) | Portage Moderne (WebGL2) |
|--------|:-----------------------------:|:------------------------:|
| **Primitives** | `glBegin/glEnd` (immédiat) | VBO + VAO (tampon) |
| **Textures** | `glBindTexture` par passe | 3D texture + tile map |
| **Éclairage** | `glLight*` matériel | Shader manuel |
| **Picking** | `gluUnProject` + inversion matrice | Encodage RGB + FBO |
| **Tuiles** | Une texture BMP par tuile | Une texture 3D pour tout |
| **Décorations** | Sprites PCX palette 8-bit | Textures RGBA + alpha |
| **Mise à jour** | `glTexSubImage2D` (possible) | `gl.bufferSubData` + `texSubImage2D` |
| **Carte éditable** | Mémoire CPU → re-rendu | FBO GPU → `texSubImage2D` |
| **Polices UI** | GDI TextOut | Canvas 2D ou SDF
