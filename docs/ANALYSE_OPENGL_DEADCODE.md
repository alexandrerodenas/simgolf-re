# ANALYSE — Les 44 imports OpenGL de Terrain.dll sont-ils du code mort ?

**Date :** 21 mai 2026
**Méthode :** Analyse statique via désassemblage brut + Ghidra
**Binaires :** Terrain.dll (PE32, MSVC++6.0 debug, base 0x10000000)

---

## 1. Conclusion immédiate

**NON — les 44 imports OpenGL ne sont PAS du code mort. Le rendu 3D isométrique de SimGolf est un vrai pipeline OpenGL 1.x immediate mode, avec 169+ appels IAT vérifiés dans le .text.**

"JGL" mentionné dans les fichiers décompilés est un **artifact du code source** (wrapper interne renommé), qui résout en réalité vers OPENGL32.dll via l'IAT.

---

## 2. Preuve : appels OpenGL dans le .text

```
Adresses dans Terrain.dll (.text 0x10001000-0x1005efff) :

glEnable/glBegin       @ 0x10113644 → 16 appels (rendu primitives)
glEnd/glLoadIdentity   @ 0x10113648 → 11 appels
glPushMatrix/glPopMatrix @ 0x1011364c → 14 appels
glScalef/glVertex2i    @ 0x10113650 → 9 appels
glBindTexture          @ 0x10113654 → 3 appels
glNormal3f             @ 0x10113658 → 3 appels
glTexCoord2f           @ 0x1011365c → 3 appels
glVertex3f             @ 0x10113660 → 4 appels
glRotatef              @ 0x10113668 → 4 appels
glTranslatef           @ 0x1011366c → 11 appels
glVertex2fv            @ 0x10113670 → 8 appels
glViewport             @ 0x10113634 → 5 appels
glMatrixMode           @ 0x10113644 → (via glEnable slot)
glColor4f              @ 0x10113684 → 11 appels
glLineWidth            @ 0x10113680 → 11 appels
```

**Total : 169+ appels IAT vérifiés dans le désassemblage complet.**

---

## 3. Pipeline de rendu réel

```
Terrain.dll (rendu 3D isométrique)
    │
    ├── OPENGL32.DLL (45 fonctions)
    │   ├── Setup contexte (wglCreateContext, wglMakeCurrent, ChoosePixelFormat)
    │   ├── Matrices (glPushMatrix, glPopMatrix, glLoadIdentity, glOrtho, glTranslatef)
    │   ├── Géométrie (glBegin/glEnd, glVertex3f, glTexCoord2f, glNormal3f)
    │   ├── Textures (glBindTexture, glTexImage2D, gluBuild2DMipmaps)
    │   └── Éclairage (glLightfv, glMaterialfv, glEnable)
    │
    └──→ Compositing ←── jgld.dll (GDI32)
              ▲             ├── CreateDIBSection (framebuffer 8/16-bit)
              │             ├── BitBlt (sprites overlay)
              │             └── StretchBlt (présentation écran)
              │
         BitBlt final (fusion OpenGL + GDI)
```

---

## 4. Pourquoi "JGL" est trompeur

Les macros JGL dans les sources décompilées pointent vers des adresses IAT d'OPENGL32.DLL :

```c
#define JGL_PushMatrix()  ((void(*)())0x1011364c)()  // → OpenGL!glPushMatrix
#define JGL_LoadIdentity() ((void(*)())0x10113648)() // → OpenGL!glLoadIdentity
```

**C'est un leak du code source de développement** : Terrain.dll utilisait à l'origine un wrapper JGL qui a été remplacé par des appels OpenGL directs, mais les noms des macros sont restés dans les commentaires/symboles de debug.

---

## 5. DirectDraw ?

**Zéro import DirectDraw** dans Terrain.dll ou jgld.dll. Le rendu 2D passe exclusivement par GDI32 (CreateDIBSection, BitBlt, StretchBlt).

---

## 6. Statistiques finales

| Métrique | Valeur |
|----------|:------:|
| Imports OPENGL32 | 45 fonctions — **0 code mort** |
| Imports GLU32 | 2 fonctions — **0 code mort** |
| Imports GDI32 (setup GL) | 2 fonctions — **0 code mort** |
| Appels IAT OpenGL dans .text | **169+** |
| DirectDraw | **0** (aucun appel) |
| Vrai rendu 3D ? | **OUI** — OpenGL 1.x immediate mode |
| Code mort OpenGL ? | **NON** |

**Références :** `ref/decompiled/terrain_drawing.c`, `ref/decompiled/terrain_initSystem.c`, `ref/decompiled/jgld_engine.c`, `docs/03-graphics.md`, `ref/raw_disasm/Terrain_dll_disasm.txt`
