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
