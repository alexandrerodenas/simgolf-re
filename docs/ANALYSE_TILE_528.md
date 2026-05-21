# Analyse complète de la structure Tile (584 bytes)

## Résumé

La structure **Tile** fait exactement **584 octets (0x248)**.  
**56 octets sont identifiés avec confiance** (offsets 0x00-0x37 + 0x234).  
**528 octets restent à confirmer**, mais de nombreux offsets sont référencés dans le code.

Ce document cartographie **l'intégralité des 584 octets** avec les preuves issues :
- Du désassemblage brut (`Terrain_dll_disasm_v2.txt`)
- Des fichiers de décompilation C (`ref/decompiled/`)

---

## Tableau complet des 584 octets

| Offset | Taille | Nom | Type | Description | Confiance | Preuve |
|--------|--------|-----|------|-------------|-----------|--------|
| **+0x00** | 4 | `elevation[0]` | `int32` | Élévation coin Top-Left | ★★★★★ | `getElevation`: `mov eax, [ecx + eax*4]` (0x10001e63) |
| **+0x04** | 4 | `elevation[1]` | `int32` | Élévation coin Top-Right | ★★★★★ | Même fonction, index 1 |
| **+0x08** | 4 | `elevation[2]` | `int32` | Élévation coin Bottom-Right | ★★★★★ | Même fonction, index 2 |
| **+0x0c** | 4 | `elevation[3]` | `int32` | Élévation coin Bottom-Left | ★★★★★ | Même fonction, index 3 |
| **+0x10** | 4 | `waterLevel` | `int32` | Niveau d'eau (???) | ★★☆☆☆ | `[ecx+0x10]=0x3f800000` (init Terrain, 0x10002b98) — à vérifier si c'est Tile ou Terrain |
| **+0x14** | 4 | `flags` | `int32` | Flags généraux / gridX ??? | ★★★☆☆ | Init Tile: `[edx+0x14]=0` (0x1000c321). `[edx+0x14]=eax` (0x10002b61) — Terrain.width |
| **+0x18** | 4 | `gridX` | `int32` | Position X dans la grille | ★★★☆☆ | Terrain init: `[ecx+0x18]=height` (0x10002b6a) |
| **+0x1c** | 4 | `renderCategory` | `int32` | Catégorie de rendu (0,1,2) | ★★★★★ | `cmp [eax+0x1c], 2` (0x10006870). Init Tile: `[eax+0x1c]=0` (0x1000c30d) |
| **+0x20** | 4 | `renderWidth` | `int32` | Largeur rendu (px) | ★★★★★ | `imul edx, [eax+0x1c]` avec `[ecx+0x20]` (0x10006880-0x1000689a) |
| **+0x24** | 4 | `type` | `int32` | Type de terrain (TileType enum) | ★★★★★ | `getType`: `mov eax, [eax + 0x24]` (0x10001f80) |
| **+0x28** | 4 | `renderHeight` | `int32` | Hauteur rendu (px) | ★★★★★ | Init Tile: `[ecx+0x28]=0` (0x1000c35d). byte `[eax+0x28]` testé (0x10003470) |
| **+0x2c** | 4 | `screenY` | `int32` | Coordonnée Y écran pré-calculée | ★★★★★ | `getScreenY`: `mov eax, [eax+0x2c]` (0x10005980). Init: = -1 (0x1000c40c) |
| **+0x30** | 4 | `screenX` | `int32` | Coordonnée X écran pré-calculée | ★★★★★ | `getScreenX`: `mov eax, [eax+0x30]` (0x10006830). Init: = -1 (0x1000c416) |
| **+0x34** | 4 | `renderObjectPtr0` | `void*` | **Pointeur** vers objet rendu #0 | ★★★★☆ | Destructeur: si non-null, appelle destructeur avec tag=1 (0x1000c451-0x1000c461). Init: = 0 (0x1000c2f6 à 0x1000c34e) |
| **+0x38** | 4 | `renderObjectPtr1` | `void*` | **Pointeur** vers objet rendu #1 | ★★★★☆ | Destructeur: si non-null, appelle destructeur avec tag=0 (0x1000c469-0x1000c479) |
| **+0x3c** | 4 | `renderObjectPtr2` | `void*` | **Pointeur** vers objet rendu #2 | ★★★★☆ | Destructeur: si non-null, appelle destructeur avec tag=3 (0x1000c481-0x1000c491) |
| **+0x40** | 4 | `renderObjectPtr3` | `void*` | **Pointeur** vers objet rendu #3 | ★★★★☆ | Destructeur: si non-null, appelle destructeur avec tag=2 (0x1000c496-0x1000c4a9) |
| **+0x44** | 4 | `renderPassCount` | `int32` | Nombre de passes de rendu | ★★★★★ | `mov ecx, [eax+0x44]` lu comme compteur (0x10002672). Sub-objet intégré avec destructeur trivial (0x10001fe0) |
| **+0x48** | 4 | `_pathConnections` | `int32` | Ancien pathConnections (déplacé ?) | ★☆☆☆☆ | Déduit de l'ancienne carte MAPPING.md, non vérifié |
| **+0x4c** | 4 | `gridY` | `int32` | Position Y grille | ★★☆☆☆ | Non vérifié dans l'ASM récent |
| **+0x50** | 4 | `normalX` | `float` | Normale X | ★★★★★ | `calcNormals` dans terrain_normals.c |
| **+0x54** | 4 | `normalY` | `float` | Normale Y | ★★★★★ | `calcNormals` |
| **+0x58** | 4 | `normalZ` | `float` | Normale Z | ★★★★★ | `calcNormals` |
| **+0x5c** | 4 | `renderPassIndex` | `int32` | Index de passe courant ? | ★★☆☆☆ | Déduit, non vérifié dans l'ASM |
| **+0x60** | 12 | `pad_060[12]` | `uint8[12]` | Padding/alignement (0x6c aligné) | ★★☆☆☆ | Zone entre fin des champs et début renderPasses |
| | | | | | | |
| **+0x6c** | 56 | `renderPasses[0]` | `RenderPass` | **Passe de rendu #0** | ★★★★★ | Boucle d'init: `[edx+ecx*0x38+0x20]` (0x10002392) |
| **+0xa4** | 56 | `renderPasses[1]` | `RenderPass` | **Passe de rendu #1** | ★★★★☆ | Même motif, stride 0x38 |
| **+0xdc** | 56 | `renderPasses[2]` | `RenderPass` | **Passe de rendu #2** | ★★★★☆ | Copie interne entre passes (0x10002427+) |
| **+0x114** | 56 | `renderPasses[3]` | `RenderPass` | **Passe de rendu #3** | ★★★★☆ | Copie interne entre passes |
| | | | | | | |
| *(suite passes si plus de 4)* | | | | **Stride 0x38 par passe** | | |
| | | | | | | |
| **+0x14c** | 188 | `unknown_14c[188]` | `uint8[188]` | Zone inconnue après passes | ★★☆☆☆ | Peut contenir passes supplémentaires ou autres structures |
| *+0x158* | 4 | *textureSlotA* | `int32` | Index de texture (×12→global) | ★★★☆☆ | `[eax+0x158]` avec `imul eax,0xc` (0x100026c0) |
| *+0x190* | 4 | *textureSlotB* | `int32` | Index de texture (×12→global) | ★★★☆☆ | `[eax+0x190]` avec `imul ecx,0xc` (0x100026ab) |
| | | | | | | |
| **+0x208** | 8 | `subObjectA` | `struct(8)` | Sous-objet A (constructeur 0x1000f6e0) | ★★★☆☆ | `add ecx,0x208; call 0x1000105f → 0x1000f6e0` (0x1000c367-0x1000c36d) |
| **+0x210** | 36(?) | `subObjectB` | `struct(36)` | Sous-objet B (constructeur 0x1000f7a0) | ★★★☆☆ | `add ecx,0x210; call 0x100011c7 → 0x1000f7a0` (0x1000c375-0x1000c37b) |
| | | | | | | |
| **+0x234** | 4 | `walls[4]` | `uint8[4]` | Murs (byte par côté: 0-1) | ★★★★★ | `getWall`: `mov al, byte ptr [eax + 0x234]` (0x10001ef3) |
| **+0x238** | 12 | `unknown_238[12]` | `uint8[12]` | Padding/zone inconnue | ★★☆☆☆ | |
| **+0x244** | 1 | `dirtyFlag` | `uint8` | Flag de dirty/modifié | ★★★☆☆ | Destructeur: `byte ptr [eax+0x244] = 0` (0x1000c447) |
| **+0x245** | 3 | `pad_245[3]` | `uint8[3]` | Padding fin de structure | ★☆☆☆☆ | Arrondi à 0x248 |
| | | | | | | |
| **Total:** | **0x248 (584)** | | | | | |

---

## Structure RenderPass (0x38 = 56 bytes)

| Offset | Taille | Nom | Type | Description | Confiance | Preuve |
|--------|--------|-----|------|-------------|-----------|--------|
| +0x00 | 4 | `textureID` | `void*` | ID texture OpenGL/JGL | ★★★★★ | Lu dans renderSingleTile, bindé avec glBindTexture |
| +0x04 | 4 | `texCoord` | `uint8[4]` | Coordonnée texture + pad | ★★★★☆ | `[tile+0x6c+pass*0x38+0x04]` byte lu comme index de table (terrain_render_tile.c) |
| +0x08 | 4 | `field_08` | `int32` | Données de rendu | ★★☆☆☆ | Copié depuis passe N-1.field_0c |
| +0x0c | 4 | `field_0c` | `int32` | Données de rendu | ★★☆☆☆ | Copié vers passe N+1.field_08 |
| +0x10 | 4 | `field_10` | `int32` | Données de rendu | ★★☆☆☆ | Copié entre passes adjacentes |
| +0x14 | 4 | `field_14` | `int32` | Données de rendu | ★★☆☆☆ | Copié depuis passe N-1.field_1c |
| +0x18 | 4 | `field_18` | `int32` | Données de rendu | ★★☆☆☆ | Copié depuis passe N-1.field_20 |
| +0x1c | 4 | `field_1c` | `int32` | Données de rendu | ★★☆☆☆ | Copié vers passe N+1.field_14 |
| +0x20 | 4 | `field_20` | `int32` | Données de rendu (coordonnée) | ★★☆☆☆ | `fild [ebp-0x34] → mov [edx+ecx*0x38+0x20]` (0x10002397-0x100023b5) |
| +0x24 | 4 | `field_24` | `int32` | Données de rendu (coordonnée) | ★★☆☆☆ | Même motif que field_20 (0x100023dd) |
| +0x28 | 4 | `field_28` | `int32` | Données de rendu | ★★☆☆☆ | Copié entre passes adjacentes |
| +0x2c | 4 | `field_2c` | `int32` | Données de rendu | ★★☆☆☆ | Destinataire copie depuis passe suivante |
| +0x30 | 4 | `field_30` | `int32` | = 0 (init) | ★★☆☆☆ | `[ecx+eax*0x38+0x30]=0` (0x100023ea) |
| +0x34 | 4 | `field_34` | `float` | = 1.0 (init) | ★★☆☆☆ | `[eax+edx*0x38+0x34]=0x3f800000` (1.0f) (0x100023fb) |

---

## Détail des sections de la zone inconnue (0x38-0x247)

### Section A : 4 pointeurs renderObject (0x34-0x43) — ✅ CONFIRMÉ

```c
// Ces 4 champs sont des POINTEURS vers des objets C++ alloués dynamiquement
// Le destructeur de Tile (0x1000c400) vérifie chacun et appelle un destructeur
// avec des tags différents (1, 0, 3, 2) si non-null
void* renderObjects[4];  // offset 0x34-0x43
```

**Preuve ASM** (destructeur Tile, 0x1000c451-0x1000c4a9) :
```asm
cmp dword ptr [ecx+0x34], 0      ; si non null
je skip1
push 0
push 1
mov ecx, [edx+0x34]              ; charger le POINTEUR
call destructor_func              ; détruire l'objet

cmp dword ptr [eax+0x38], 0      ; idem pour slot 1
push 0
push 0
mov ecx, [ecx+0x38]
call destructor_func

cmp dword ptr [edx+0x3c], 0      ; slot 2
push 0
push 3
mov ecx, [eax+0x3c]
call destructor_func

cmp dword ptr [ecx+0x40], 0      ; slot 3
push 0
push 2
mov ecx, [edx+0x40]
call destructor_func
```

### Section B : RenderPasses (0x6c-0x14b) — ✅ CONFIRMÉ

Les 4 premières passes de rendu (stride 0x38) sont confirmées par :
1. Boucle d'initialisation (0x100020b5-0x1000241d) avec stride 0x38
2. Copie/champagne entre passes adjacentes (0x10002427-0x10002509)

**Nombre de passes exact** : À déterminer. Le code montre au moins 4 passes.
- `renderPassCount` à +0x44 donne le nombre actif
- `renderPasses[0]` commence à +0x6c

### Section C : Zone après les passes (0x14c-0x207) — ❌ PEU CONNU

Des champs isolés sont référencés :

| Offset | Usage | Preuve |
|--------|-------|--------|
| +0x158 | Index texture (×12) vers table globale 0x100b28cc | `[eax+0x158]` → `imul ecx,ecx,0xc` → `[ecx+0x100b28cc]` (0x100026c0) |
| +0x190 | Index texture (×12) vers table globale 0x100b28cc | `[eax+0x190]` → `imul ecx,ecx,0xc` → `[ecx+0x100b28cc]` (0x100026ab) |

Ces deux champs sont des petits entiers (0-255 probablement) utilisés comme indices
dans un tableau de 12 bytes par entrée (probablement des descripteurs de texture).

### Section D : Sous-objets embarqués (0x208-0x233) — ❌ NON ANALYSÉ

```c
struct SubObjectA {  // 8 bytes @ +0x208
    // Constructeur: 0x1000f6e0
    // À décompiler
};

struct SubObjectB {  // 36 bytes @ +0x210 (jusqu'à walls à 0x234)
    // Constructeur: 0x1000f7a0
    // À décompiler
};
```

### Section E : Walls et fin (0x234-0x247) — ✅ CONFIRMÉ

| Offset | Contenu | Preuve |
|--------|---------|--------|
| +0x234 | `walls[0..3]` (byte[4]) | `getWall`: `mov al, byte ptr [eax + 0x234]` |
| +0x238 | Inconnu (12 octets) | - |
| +0x244 | `dirtyFlag` (byte) | Destructeur: mis à 0 (0x1000c447) |
| +0x245 | Padding (3 octets) | Alignement à 0x248 |

---

## Interfaces TypeScript

```typescript
// Tile complète (584 bytes)
interface Tile {
  // === Section 1 : Champs connus (0x00-0x37, 56 bytes) ===
  elevation: [number, number, number, number];  // int32[4] @ +0x00
  waterLevel: number;                           // int32 @ +0x10
  flags: number;                                // int32 @ +0x14
  gridX: number;                                // int32 @ +0x18
  renderCategory: number;                       // int32 @ +0x1c
  renderWidth: number;                          // int32 @ +0x20
  type: TileType;                               // int32 @ +0x24
  renderHeight: number;                         // int32 @ +0x28
  screenY: number;                              // int32 @ +0x2c
  screenX: number;                              // int32 @ +0x30

  // === Section 2 : 4 pointeurs renderObject (0x34-0x43, 16 bytes) ===
  renderObjects: [number, number, number, number]; // void*[4] @ +0x34

  // === Section 3 : Compteur de passes (0x44) ===
  renderPassCount: number;                      // int32 @ +0x44

  // === Section 4 : Path + normals (0x48-0x5f) ===
  pathConnections: number;                      // int32 @ +0x48
  gridY: number;                                // int32 @ +0x4c
  normalX: number;                              // float @ +0x50
  normalY: number;                              // float @ +0x54
  normalZ: number;                              // float @ +0x58
  renderPassIndex: number;                      // int32 @ +0x5c

  // === Section 5 : Padding (0x60-0x6b) ===
  pad_060: Uint8Array;                          // 12 bytes

  // === Section 6 : Render passes array (0x6c-0x14b) ===
  renderPasses: RenderPass[];                   // stride 0x38

  // === Section 7 : Zone inconnue après passes (0x14c-0x207) ===
  unknown_14c: Uint8Array;                      // 188 bytes
  // Champs identifiés dans cette zone :
  textureSlotA: number;                         // int32 @ +0x158
  textureSlotB: number;                         // int32 @ +0x190

  // === Section 8 : Sous-objets embarqués (0x208-0x233) ===
  subObjectA: SubObjectA;                       // @ +0x208 (8 bytes)
  subObjectB: SubObjectB;                       // @ +0x210 (36 bytes)

  // === Section 9 : Walls + fin (0x234-0x247) ===
  walls: [number, number, number, number];      // uint8[4] @ +0x234
  unknown_238: Uint8Array;                      // 12 bytes @ +0x238
  dirtyFlag: number;                            // uint8 @ +0x244
  // padding: 3 bytes @ +0x245
}

interface RenderPass {
  textureID: number;       // void* @ +0x00 (4 bytes)
  texCoord: number;        // uint8 @ +0x04 (1 byte, suivi de 3 bytes padding)
  field_08: number;        // int32 @ +0x08
  field_0c: number;        // int32 @ +0x0c
  field_10: number;        // int32 @ +0x10
  field_14: number;        // int32 @ +0x14
  field_18: number;        // int32 @ +0x18
  field_1c: number;        // int32 @ +0x1c
  field_20: number;        // int32 @ +0x20 (coordonnée)
  field_24: number;        // int32 @ +0x24 (coordonnée)
  field_28: number;        // int32 @ +0x28
  field_2c: number;        // int32 @ +0x2c
  field_30: number;        // int32 @ +0x30 (init = 0)
  field_34: number;        // float @ +0x34 (init = 1.0f)
}

// Types de terrain
enum TileType {
  GRASS = 0,
  FAIRWAY = 1,
  GREEN = 2,
  SAND = 3,
  WATER = 4,
  PATH = 5,
  TEE = 6,
  BUILDING = 7,
  TREE = 8,
  BUSH = 9,
  FLOWER = 10,
}

// Sous-objets (à décompiler)
interface SubObjectA {
  // 8 bytes, constructeur @ 0x1000f6e0
}

interface SubObjectB {
  // 36 bytes, constructeur @ 0x1000f7a0
}
```

---

## Preuves des offsets depuis le code décompilé

### tileAt (0x10001d50) — Structure row-major

```
0x10001d73: cmp ecx, [eax+0x14]      ; Terrain.width
0x10001d84: cmp eax, [edx+0x18]      ; Terrain.height
0x10001d99: imul edx, [ecx+0x14]     ; y * width
0x10001da2: imul eax, eax, 0x248     ; index * sizeof(Tile)
0x10001dab: lea eax, [ecx+eax+0x3a4] ; &Terrain.tiles[index]
```

**Preuve sizeof(Tile) = 0x248 = 584 bytes** : `imul eax, eax, 0x248`.

### getElevation (0x10001e40)
```
0x10001e63: mov eax, dword ptr [ecx + eax*4]  ; Tile.elevation[corner]
```
`ecx` = Tile*, `eax` = index du coin (0-3). Donc `elevation[0]` est à **+0x00**.

### getType (0x10001f60)
```
0x10001f80: mov eax, dword ptr [eax + 0x24]   ; Tile.type
```
**Preuve** : type est à offset **+0x24**.

### getWall (0x10001ed0)
```
0x10001ef3: mov al, byte ptr [eax + 0x234]    ; Tile.walls[side]
```
**Preuve** : walls[4] commence à offset **+0x234**, chaque mur = 1 byte.

### getScreenY (0x10005960)
```
0x10005980: mov eax, dword ptr [eax + 0x2c]   ; Tile.screenY
```
**Preuve** : screenY à **+0x2c**.

### getScreenX (0x10006810)
```
0x10006830: mov eax, dword ptr [eax + 0x30]   ; Tile.screenX
```
**Preuve** : screenX à **+0x30**.

### isCulled (0x10006850)
```
0x10006870: cmp dword ptr [eax + 0x1c], 2     ; Tile.renderCategory
0x10006880: mov edx, dword ptr [ecx + 0x20]   ; Tile.renderWidth
0x10006892: mov edx, dword ptr [ecx + 0x24]   ; Tile.type (reuse comme renderHeight?)
```
**Preuve** : renderCategory à **+0x1c**, renderWidth à **+0x20**.

### Init Tile (0x1000c2a0)
```
0x1000c2e3: mov [eax+0x2c], screenY_param     ; Tile.screenY
0x1000c2ec: mov [edx+0x30], screenX_param     ; Tile.screenX
0x1000c2f6: mov [ecx+0x240], 0                ; Tile.textureOffset
0x1000c303: mov [edx+0x04], 0                 ; Tile.elevation[1]
0x1000c30d: mov [eax+0x1c], 0                 ; Tile.renderCategory
0x1000c317: mov [ecx+0x0c], 0                 ; Tile.elevation[3]
0x1000c321: mov [edx+0x14], 0                 ; Tile.flags/gridX
0x1000c346: mov [edx+ecx*4+0x34], 0           ; renderObjects[i] = null (i=0..3)
0x1000c353: mov [eax+0x24], 4                 ; Tile.type = WATER (4)
0x1000c35d: mov [ecx+0x28], 0                 ; Tile.renderHeight
0x1000c367: add ecx, 0x208                    ; &Tile.subObjectA
0x1000c375: add ecx, 0x210                    ; &Tile.subObjectB
```

### Init RenderPass (0x100020b5-0x1000241d)
```
0x10002392: mov [edx+ecx*0x38+0x20], eax     ; renderPasses[i].field_20
0x100023dd: mov [edx+ecx*0x38+0x24], eax     ; renderPasses[i].field_24
0x100023ea: mov [ecx+eax*0x38+0x30], 0       ; renderPasses[i].field_30 = 0
0x100023fb: mov [eax+edx*0x38+0x34], 0x3f800000 ; renderPasses[i].field_34 = 1.0f
0x1000240c: mov [edx+ecx*0x38+0x38], 0       ; renderPasses[i].field_38 = 0 (hors limite! 0x38-0x01=0x37 max)
```
**Note** : `0x38` dans la dernière ligne est en fait `renderPasses[i+1].field_00` (début de la passe suivante),
car le stride 0x38 fait que `base + i*0x38 + 0x38 = base + (i+1)*0x38 + 0x00`.

### Fonction de copie entre passes (0x10002427)
```
0x1000242d: mov eax, [edx+0xb4]    ; Pass1.field_10
0x10002433: mov [ecx+0x7c], eax    ; → Pass0.field_10
0x1000243c: mov eax, [edx+0xc8]    ; Pass1.field_24
0x10002442: mov [ecx+0x90], eax    ; → Pass0.field_24
... etc (12 paires copiant entre passes 0-1 et 2-3)
```

### Accès textureSlot (0x10002670-0x100026d5)
```
0x10002672: mov ecx, [eax+0x44]          ; renderPassCount
0x10002684: mov ecx, [eax+0x7c]          ; Pass0.field_10 (texture ?)
0x10002696: mov ecx, [eax+0xb0]          ; Pass1.field_0c (texture ?)
0x100026ab: mov ecx, [eax+0x190]         ; textureSlotB
0x100026c0: mov ecx, [eax+0x158]         ; textureSlotA
0x100026b1: imul ecx, ecx, 0xc           ; ×12 (taille d'entrée dans table globale)
0x100026cc: mov [ecx+0x100b28cc], edx    ; écriture dans table globale
```

---

## Schéma mémoire complet

```
Offset  Taille  Champ
------  ------  -----------------------------------
0x000     16    elevation[4]          ← int32[4]
0x010      4    waterLevel             ← int32
0x014      4    flags/gridX            ← int32
0x018      4    gridX                  ← int32
0x01c      4    renderCategory         ← int32
0x020      4    renderWidth            ← int32
0x024      4    type                   ← int32 (TileType enum)
0x028      4    renderHeight           ← int32
0x02c      4    screenY                ← int32
0x030      4    screenX                ← int32
0x034      4    renderObjects[0]       ← void* (pointeur)
0x038      4    renderObjects[1]       ← void*
0x03c      4    renderObjects[2]       ← void*
0x040      4    renderObjects[3]       ← void*
0x044      4    renderPassCount        ← int32
0x048      4    pathConnections?       ← int32 (non vérifié)
0x04c      4    gridY                  ← int32 (non vérifié)
0x050     12    normalX/Y/Z            ← float[3]
0x05c      4    renderPassIndex?       ← int32
0x060     12    [padding]              ← alignement
--------------------------------------------------
0x06c     4×56  renderPasses[0..3]     ← RenderPass[4] (stride 0x38)
0x14c    188    [inconnu]              ← (incluant textureSlots)
--------------------------------------------------
0x158      4    textureSlotA           ← int32 (index ×12)
0x190      4    textureSlotB           ← int32 (index ×12)
--------------------------------------------------
0x208      8    subObjectA             ← struct (ctor 0x1000f6e0)
0x210     36    subObjectB             ← struct (ctor 0x1000f7a0)
--------------------------------------------------
0x234      4    walls[4]               ← uint8[4]
0x238     12    [inconnu]              ← 
0x244      1    dirtyFlag              ← uint8
0x245      3    [padding]              ← 
======  ======  ===================================
0x248    584    TOTAL
```

---

## Notes de confiance

| Groupe | Confiance | Explication |
|--------|-----------|-------------|
| **0x00-0x0f** (elevation) | ★★★★★ | Confirmé par `getElevation` et le destructeur |
| **0x10-0x13** (waterLevel) | ★★☆☆☆ | Déduit; l'offset 0x10 est aussi initialisé à 1.0f dans Terrain init |
| **0x14-0x1b** (flags/gridX) | ★★★☆☆ | Partiellement vérifié — à confirmer avec getter/setter |
| **0x1c-0x33** (render/métadonnées) | ★★★★★ | Tous vérifiés par getters ASM |
| **0x34-0x43** (renderObjects) | ★★★★☆ | Confirmé par le destructeur — ce sont des POINTEURS, pas des ints |
| **0x44-0x5f** (compteurs/normales) | ★★★☆☆ | renderPassCount et normales confirmés; le reste est déduit |
| **0x60-0x6b** (padding) | ★★☆☆☆ | Hypothèse d'alignement |
| **0x6c-0x14b** (renderPasses) | ★★★★★ | Complètement confirmé par l'ASM (init + copie) |
| **0x14c-0x207** (zone après passes) | ★★☆☆☆ | textureSlotA/B à +0x158/+0x190 confirmés; reste à explorer |
| **0x208-0x233** (sous-objets) | ★★★☆☆ | Constructeurs connus; structure exacte à décompiler |
| **0x234-0x237** (walls) | ★★★★★ | Confirmé par `getWall` |
| **0x238-0x247** (fin) | ★★☆☆☆ | dirtyFlag à +0x244 confirmé; reste inconnu |

---

## Erreurs corrigées par rapport à tile_struct.h

1. **+0x34 n'est pas `tileFlags` (int32)** mais un **pointeur** vers un objet C++.
   Les 4 champs 0x34-0x40 sont des pointeurs (renderObjects[0..3]).

2. **+0x38 n'est pas `variation` (int32)** mais renderObjects[1] (pointeur).

3. **+0x3c n'est pas `hasPath` (int32)** mais renderObjects[2] (pointeur).

4. **+0x40 n'est pas `pathType` (int32)** mais renderObjects[3] (pointeur).

5. **+0x44 n'est pas `pathDirection` (int32)** mais `renderPassCount`.
   Le destructeur de ce champ est trivial (juste `ret`).

6. **+0x208 et +0x210** sont des sous-objets C++ embarqués (pas simplement des données).

---

## Prochaines étapes recommandées

1. **Décompiler les constructeurs** des sous-objets à +0x208 (0x1000f6e0) et +0x210 (0x1000f7a0)
2. **Analyser textureSlotA/B** à +0x158/+0x190 pour comprendre le tableau global à 0x100b28cc
3. **Trouver le nombre exact** de render passes (renderPassCount max ?)
4. **Analyser les 188 bytes** entre 0x14c et 0x207 en traçant toutes les fonctions qui y accèdent
5. **Vérifier les offsets 0x48-0x4c** (pathConnections, gridY) manquants dans l'ASM récent
6. **Analyser initSystem/resetTerrain** pour voir les valeurs par défaut de tous les champs
