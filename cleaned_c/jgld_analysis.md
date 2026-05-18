# jgld.dll — Analyse du moteur graphique JGL

> Source : jgld.dll (1.1 Mo PE32, MSVC++6.0)
> Rôle : Renderer logiciel pur utilisant GDI32 (pas OpenGL)
> Export unique : `get_graphsy_object_ptr`

---

## Architecture

jgld.dll est un **moteur de rendu 2D logiciel** qui :

1. **Crée une fenêtre** (USER32 : CreateWindowEx, RegisterClass)
2. **Dessine en mémoire** via des DIBSections (GDI32 : CreateDIBSection, BitBlt)
3. **Expose une API JGL** via un objet à vtables (332 bytes, class name "JackalClass")
4. **Gère le texte** (GDI32 : CreateFontIndirect, TextOut, GetTextExtentPoint32)

## API JGL utilisée par Terrain.dll

Les appels JGL sont faits via des pointeurs de fonction stockés dans la section `.idata` de Terrain.dll :

| Addr Terrain | Nom déduit | Rôle | Équivalent Canvas |
|---|---|---|---|
| `0x1011364c` | `JGL_PushMatrix()` | Sauvegarde matrice courante | `ctx.save()` |
| `0x10113648` | `JGL_LoadIdentity()` | Réinitialise la matrice | `ctx.setTransform(1,0,0,1,0,0)` |
| `0x10113634` | `JGL_Ortho()` | Projection orthographique | `ctx.scale()` |
| `0x10113638` | `JGL_Translate(x,y,z)` | Translation 3D → 2D | `ctx.translate(x, y)` |
| `0x1011363c` | `JGL_Translate2(x,y,z)` | Translation variante | `ctx.translate(x, y)` |
| `0x10113624` | `JGL_BindTexture(GL_TEXTURE_2D, id)` | Sélection texture | Sélection image/sprite |

## Fonction principale

```c
void* get_graphsy_object_ptr() {
    // Alloue un objet Graphsy de 332 bytes (0x14C)
    void* obj = HeapAlloc(0x14C);  // 0x1007f0f0
    
    if (obj != NULL) {
        // Appelle le constructeur JackalClass
        JackalClass_Constructor(obj);  // 0x100013f7
    }
    
    // Stocke dans les globaux
    g_graphsyObj = obj;           // 0x1012870c
    g_graphsyObjCopy = obj;       // 0x10128420
    
    return obj;
}
```

## Classe JackalClass (332 bytes)

Le constructeur à `0x100013f7` initialise un objet avec une vtable. Les noms de fichiers sources trouvés dans `.rdata` :
- `jglsprite.cpp` — gestion des sprites
- `jglsprite_8_16c.cpp` — sprites 8/16 bits

Cela suggère que JGL possède un **système de sprites** qui gère :
- Des sprites 8 bits (palettisés) et 16 bits (high color)
- Rendu via DIBSection GDI
- Transformation matricielle

## Structure de l'objet Graphsy (hypothèse, 332 bytes)

```
Offset  Taille  Champ
------  ------  -----------
  0x00    4     vtable*
  0x04    ?     Données internes
  ...
  0x14C   -     Fin (332 bytes)
```

La vtable contient probablement les pointeurs vers :
- pushMatrix / popMatrix
- loadIdentity
- ortho / frustum
- translate / rotate / scale
- bindTexture / createTexture / deleteTexture
- beginScene / endScene
- clear
- drawSprite

## Stratégie de portage Web

Puisque JGL est un **renderer logiciel 2D**, on peut le remplacer directement par :

| JGL | Web (Canvas/PixiJS) |
|---|---|
| PushMatrix / PopMatrix | `ctx.save()` / `ctx.restore()` |
| LoadIdentity | `ctx.setTransform(1,0,0,1,0,0)` |
| Translate(x, y, z) | `ctx.translate(x, y)` |
| Ortho(...) | N/A (Canvas gère ça) |
| BindTexture | Sélection d'image (Image / Sprite) |
| GDI BitBlt | `ctx.drawImage()` |
| DIBSection | Canvas pixel manipulation |

**Pas besoin de rétro-ingénierer jgld.dll en détail** — l'API JGL est suffisamment petite (6 fonctions utilisées par Terrain.dll) pour être recréée directement.

## Stats

| Propriété | Valeur |
|---|---|
| Taille .text | 1 163 264 bytes |
| Fonctions détectées | 1 199 |
| Entropie .text | 4.31 (code clair) |
| Imports | KERNEL32 (87), USER32 (27), GDI32 (25) |
| Exports | 1 (`get_graphsy_object_ptr`) |
| Classes suggérées | `JackalClass`, `Object` |
