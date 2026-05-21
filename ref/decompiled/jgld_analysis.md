# jgld.dll / jgl.dll — Analyse du moteur graphique JGL (v2)

> Source : jgld.dll (1.2 Mo) / jgl.dll (396 Ko — version release packée ?)
> PE32, MSVC++6.0
> Export unique : `get_graphsy_object_ptr`
>
> **⚠️ CORRECTION MAJEURE v2** (Mai 2026) :
> v1 disait "renderer logiciel GDI32 pur".
> v1.5 a cru que JGL était OpenGL.
> **La vérité est plus subtile : les deux coexistent.**

---

## Architecture Réelle (prouvée par les imports)

```
golf.exe
  │
  ├──→ Terrain.dll ◄── LE VRAI MOTEUR 3D
  │     ├── OPENGL32.dll (44 imports)   ← Rendu 3D isométrique
  │     │    glBegin/glEnd, glVertex, glTexCoord, glNormal
  │     │    glPushMatrix/PopMatrix, glTranslate, glRotate
  │     │    glLightfv, glMaterialfv, glBindTexture
  │     │    wglCreateContext, wglMakeCurrent
  │     ├── GLU32.dll (2 imports)       ← Textures mipmaps
  │     │    gluBuild1DMipmaps, gluBuild2DMipmaps
  │     └── GDI32.dll (2 imports)       ← Setup fenêtre OpenGL
  │          ChoosePixelFormat, SetPixelFormat
  │
  └──→ jgld.dll ◄── JGL = 2D SPRITE/UI OVERLAY
        ├── KERNEL32.dll (87)  ← allocations, fichiers
        ├── USER32.dll (27)    ← fenêtres, messages
        └── GDI32.dll (25)     ← ★★★ SPRITES + POLICES ★★★
             BitBlt, StretchBlt, CreateDIBSection,
             CreateFontIndirect, TextOut, SelectObject,
             CreateCompatibleDC, RealizePalette...
```

### Explication

Terrain.dll fait le **rendu 3D isométrique en OpenGL** :
- Transformations matricielles (push/pop, translate, rotate, scale)
- Éclairage (glLightfv, glMaterialfv)
- Textures (glTexImage2D, glBindTexture, gluBuild2DMipmaps)
- Géométrie (glBegin/glEnd avec vertex + texcoord + normal)

jgld.dll fait le **rendu 2D overlay** en GDI32 :
- Sprites (bitmaps 8-bit et 16-bit via DIBSection)
- Polices (CreateFontIndirect, TextOut, GetTextExtentPoint32)
- Compositing final (BitBlt, StretchBlt)
- Fenêtrage (CreateWindowEx, RegisterClass, message loop)

### Pourquoi Terrain.dll a des thunks JGL ?

Les adresses citées dans terrain_render.c :
```c
#define JGL_PushMatrix()    ((void (*)(void))0x1011364c)()
```

**0x1011364c n'est PAS dans jgld.dll** — c'est dans la table d'import (.idata) de Terrain.dll, qui résout vers **OPENGL32!glPushMatrix** !

Le nom "JGL" est un leak du code source : Terrain.dll appelait JGL pendant le développement, mais les vrais appels vont directement à OpenGL via l'import table. Les macros JGL_* sont juste des wrappers de commodité.

## jgld.dll : Moteur 2D Sprite/UI

### Exports (1 seul)

| # | Nom | Rôle |
|---|-----|------|
| 1 | `get_graphsy_object_ptr` | Crée l'objet JackalClass (332 bytes) |

### Objet JackalClass (332 bytes = 0x14C)

```c
struct JackalClass {
    void** vtable;           // +0x00: méthodes virtuelles
    HWND   hWnd;             // +0x04: fenêtre de rendu
    HDC    hDC;              // +0x08: device context
    HGLRC  hGLRC;            // +0x0C: ??? (pas d'OpenGL dans les imports)
    HDC    hSpriteDC;        // +0x10: DC pour les sprites
    HBITMAP hSpriteBMP;      // +0x14: DIBSection pour les sprites
    // ... méthodes de rendu sprite, polices, palette
};
```

### Méthodes déduites (via vtable + noms .rdata)

| Méthode | Rôle |
|---------|------|
| `jglsprite.cpp` | Rendu de sprites 2D |
| `jglsprite_8_16c.cpp` | Sprites 8-bit (palettisés) et 16-bit (high color) |

### GDI32 Functions imported (25)

Les fonctions GDI32 utilisées par jgld.dll :
- **DIBSection** : CreateDIBSection, CreateCompatibleDC, SelectObject, DeleteDC
- **BitBlt** : BitBlt, StretchBlt (compositing final)
- **Palette** : RealizePalette, SelectPalette, CreatePalette
- **Polices** : CreateFontIndirect, TextOut, GetTextExtentPoint32A
- **Couleurs** : CreateSolidBrush, CreatePen, Rectangle

## jgl.dll vs jgld.dll

| DLL | Taille | .text entropie | Statut |
|-----|:------:|:--------------:|:------|
| `jgld.dll` | 1.2 Mo | 4.31 | Version debug, 1199 fonctions |
| `jgl.dll` | 396 Ko | 6.56 | Version release packée/compressée |

Mêmes imports (KERNEL32+USER32+GDI32), même export unique. jgl.dll est très probablement la version release (optimisée / strippée de symbols).

## Résumé des pipelines de rendu

```
Pipeline 3D (terrain isométrique) :
  Terrain.dll → OPENGL32.dll (44 fns) + GLU32.dll (2 fns)
  → glBegin/glEnd, textures, lumière, matrices

Pipeline 2D (sprites/UI) :
  Terrain.dll → jgld.dll::get_graphsy_object_ptr → JackalClass
  → GDI32::CreateDIBSection/BitBlt → sprites + polices

Compositing final :
  BitBlt(hDCWindow, ..., hSpriteDC, ...) superposition des couches
```

## Stats mises à jour

| Propriété | jgld.dll | Terrain.dll |
|-----------|:--------:|:-----------:|
| Taille .text | 385 KB | 385 KB |
| Fonctions | 1 199 | ~760 |
| Entropie .text | 4.31 | 4.55 |
| Moteur | **GDI32** (2D sprites) | **OpenGL** (3D terrain) |
| Imports graphiques | GDI32 (25) | OPENGL32 (44) + GLU32 (2) + GDI32 (2) |
| Exports | 1 | 38 |

## Analyse du moteur JGL

| Composant | Technologie originale | Technologies modernes équivalentes |
|:---|:---|:---|
|-----------|----------------------|-----------------|
| Rendu 3D terrain | OpenGL 1.x (immediate mode) | **WebGL** (buffer geometry) |
| Rendu 2D sprites | GDI32 DIBSection | **Canvas 2D** / PixiJS |
| Polices | GDI32 CreateFontIndirect | **CSS @font-face** |
| Palettes 8-bit | GDI32 palette | **Shaders WebGL** ou Canvas |
| Compositing | BitBlt superposition | **Canvas layering** |
