# SimGolf — Guide de Réimplémentation Complet

> Document de référence issu de la rétro-ingénierie de golf.exe + Terrain.dll + jgld.dll + sound.dll
> 1839 fonctions identifiées • 4 passes d'analyse Ghidra • 27 documents d'analyse
> **Date :** Mai 2026 | **Projet :** simgolf-re

---

## Table des matières

1. [Architecture Globale](#1-architecture-globale)
2. [Structures de Données](#2-structures-de-données)
3. [Système Isométrique & Rendu](#3-système-isométrique--rendu)
4. [Auto-Tiling & Variations de Tuiles](#4-auto-tiling--variations-de-tuiles)
5. [Physique de Balle](#5-physique-de-balle)
6. [IA des Golfeurs](#6-ia-des-golfeurs)
7. [Économie & Gestion](#7-économie--gestion)
8. [Boucle de Jeu & Simulation](#8-boucle-de-jeu--simulation)
9. [Validation des Trous & Score SGA](#9-validation-des-trous--score-sga)
10. [Système UI & Écrans](#10-système-ui--écrans)
11. [Formats de Fichiers & Sauvegarde](#11-formats-de-fichiers--sauvegarde)
12. [Scénarios (.cse) & Campagne](#12-scénarios-cse--campagne)
13. [Pathfinding](#13-pathfinding)
14. [Collisions Balle/Terrain](#14-collisions-balleterrain)
15. [Génération du Terrain Initial](#15-génération-du-terrain-initial)

---

## 1. Architecture Globale

### 1.1 Binaires

```
golf.exe (946 Ko dépaqueté)
├── .text      (754 Ko) — code exécutable, ~1900+ fonctions
├── .rdata     (288 Ko) — chaînes, tables, constantes
├── .data      (3.7 Mo) — données globales — SECTION COMPRESSÉE (VRaw 152 Ko, VSize 3.6 Mo, ratio 24:1)
├── .rsrc      (4 Ko)   — ressources Windows
└── 3 sections packer residue
```

### 1.2 Dépendances

| DLL | Rôle | Imports EXE |
|-----|------|:-----------:|
| **Terrain.dll** | Rendu 3D isométrique (OpenGL 1.x, 45 imports) | 26 exports |
| **jgld.dll** | Moteur 2D (GDI32) — sprites, polices, framebuffer | Export unique |
| **sound.dll** | Audio (WAVE/MIDI) | 12 exports |
| **binkw32.dll** | Cutscenes Bink Video | 16 imports |
| **WINMM** | Audio bas niveau | 6 imports |
| **KERNEL32** | OS Core | 77 imports |
| **USER32** | Fenêtrage | 24 imports |

### 1.3 Pipeline de rendu

```
Terrain.dll (OpenGL 1.x)         jgld.dll (GDI32)
     │                                │
     ├─ glBegin/glEnd                 ├─ CreateDIBSection (framebuffer 8/16-bit)
     ├─ glVertex3f/glTexCoord2f       ├─ BitBlt (sprites overlay)
     ├─ glPushMatrix/glPopMatrix      ├─ TextOut (polices)
     ├─ glLightfv/glMaterialfv        └─ StretchBlt (présentation)
     └─ glBindTexture/glTexImage2D
              │
              └──→ BitBlt final (compositing OpenGL + GDI)
```

**NOTE IMPORTANTE :** Les 45 imports OpenGL sont **actifs** (169+ appels dans .text), pas du code mort. Le nom "JGL" dans les sources décompilées est un artefact de compilation qui résout vers OPENGL32.dll via l'IAT. DirectDraw : 0 appels.

### 1.4 Point d'Entrée

```
WinMain @ 0x004a682f
├── HeapSetup()         @ 0x4a794d  — configure le tas
├── SystemCheck()       @ 0x4a8dec  — vérifie OS + résolution
├── InitGameSystems()   @ 0x4a93ff  — init tous les sous-systèmes
├── CreateMainWindow()  @ ~0x4ab240 — crée la fenêtre
├── InitSound()         @ ~0x4aaff3 — sound.dll
├── InitGraphics()      @ ~0x4aaf3a — jgld.dll
├── InitGameState()     @ 0x4a50db — charge données + UI
├── SetTimer()          — démarre la boucle de jeu
├── GameLoopCallback()  @ 0x4a5108 — première frame
├── Boucle messages     @ 0x4aad6a
└── CleanupAndExit()    @ 0x4a5119
```

### 1.5 Boucle de Jeu

Pas de `PeekMessage` — le jeu est **timer-driven** via `SetTimer/KillTimer` :

```
GameLoopCallback @ 0x4a5108:
├── Traite les messages Windows (GetMessage/DispatchMessage)
├── GameTickFunction @ 0x49846c  — SIMULATION (16 slots × 88 octets)
│   ├── WaitForMultipleObjects(2 slots) — timeout 20s
│   ├── SEH protégé (__try/__except)
│   └── Appelle InputHandler si événement
├── UI_Update()  — met à jour l'interface
└── Render()
    ├── Terrain::render()  — rendu OpenGL 3D isométrique
    ├── JGL compositing    — sprites 2D overlay (golfeurs, balles, UI)
    └── BitBlt/StretchBlt  — présentation finale
```

---

## 2. Structures de Données

### 2.1 GameState (structure principale)

Pointeur global : `[0x008400b0]` → GameState*

```typescript
interface GameState {
    // --- État temporel ---
    gameTime: number           // +0x00: Temps de jeu écoulé (ticks?)
    
    // --- Économie ---
    cash: number               // +0x04: Trésorerie ($)
    totalEarnings: number      // +0x08: Gains totaux
    dailyIncome: number        // +0x0c: Revenu quotidien
    maintenanceCost: number    // +0x10: Coûts d'entretien
    staffCost: number          // +0x14: Salaires employés
    greenFees: number          // +0x18: Prix green fees ($)
    membershipFees: number     // +0x1c: Revenus membres
    proShopSales: number       // +0x20: Ventes pro shop
    foodDrinks: number         // +0x24: Ventes nourriture/boissons
    
    // --- Parcours ---
    courseName: string         // +0x28: Nom du parcours (ptr)
    courseTheme: number        // +0x2c: 0=Parkland 1=Links 2=Desert 3=Tropical
    courseRating: number       // +0x30: Note SGA (0-100)
    holesCount: number         // +0x34: Nombre de trous construits
    
    // --- Golfeurs ---
    currentGolfer: number      // +0x77c: ID golfeur actif
    previousGolfer: number     // +0x780: ID golfeur précédent
    slots: TickSlot[16]        // +0x170: 16 slots × 0x58 (88 octets)
    
    // --- Timing ---
    delayBetweenShots: number  // +0xf0: Délai entre tirs (5000/10000/20000/30000ms)
    
    // --- Tournois ---
    tournament: TournamentState // État du tournoi en cours
}
```

### 2.2 TickSlot (88 octets)

```typescript
interface TickSlot {
    golferId: number           // +0x00: ID du golfeur
    timer: number              // +0x04: timeGetTime() au dernier tick
    state: number              // +0x08: État du slot (0=inactif, 1=actif, 2=terminé)
    data: Uint8Array           // +0x09..0x57: Données spécifiques
}
// Stride entre slots: 0x58 (88 octets)
// 16 slots maximum
```

### 2.3 Tile (584 octets = 0x248)

```typescript
interface Tile {
    // --- Géométrie (16 octets) ---
    elevation: [number, number, number, number]  // +0x00: Hauteurs 4 coins (0-4)
    
    // --- État (20 octets) ---
    waterLevel: number         // +0x10: Niveau d'eau
    flags: number              // +0x14: Flags généraux
    gridX: number              // +0x18: Position X grille
    renderCategory: number     // +0x1c: Catégorie rendu (0,1,2)
    renderWidth: number        // +0x20: Largeur rendu px
    
    // --- Type & Position (12 octets) ---
    type: TileType             // +0x24: Type de terrain (enum 0-15)
    renderHeight: number       // +0x28: Hauteur rendu px
    screenY: number            // +0x2c: Coordonnée Y écran précalculée
    screenX: number            // +0x30: Coordonnée X écran précalculée
    
    // --- Objets rendus (16 octets) — POINTEURS C++ ---
    renderObjectPtr0: any      // +0x34: Objet rendu #0
    renderObjectPtr1: any      // +0x38: Objet rendu #1
    renderObjectPtr2: any      // +0x3c: Objet rendu #2
    renderObjectPtr3: any      // +0x40: Objet rendu #3
    
    // --- Rendu (8 octets) ---
    renderPassCount: number    // +0x44: Nombre de passes de rendu
    
    // --- Normales (12 octets) ---
    normalX: number            // +0x50: Normale X (float)
    normalY: number            // +0x54: Normale Y (float)
    normalZ: number            // +0x58: Normale Z (float)
    
    // --- Passes de rendu (224 octets) ---
    renderPasses: RenderPass[] // +0x6c: Tableau de passes (×4 max, stride 0x38)
    
    // --- Textures (8 octets) ---
    textureSlotA: number       // +0x158: Index texture A (×12 → table globale)
    textureSlotB: number       // +0x190: Index texture B (×12 → table globale)
    
    // --- Sous-objets (44 octets) ---
    subObjectA: SubObjectA     // +0x208: 8 octets (constructeur 0x1000f6e0)
    subObjectB: SubObjectB     // +0x210: 36 octets (constructeur 0x1000f7a0)
    
    // --- Murs (4 octets) ---
    walls: [boolean, boolean, boolean, boolean]  // +0x234: N/E/S/O (byte par côté)
    
    // --- Dirty (1 octet) ---
    dirtyFlag: number          // +0x244: Flag de modification
    
    // +0x245-0x247: padding
}
// Taille totale: 0x248 = 584 octets
```

#### RenderPass (56 octets = 0x38)

```typescript
interface RenderPass {
    textureID: any             // +0x00: ID texture OpenGL
    texCoord: number           // +0x04: Coordonnée texture
    field_08: number           // +0x08: (copié depuis passe précédente)
    field_0c: number           // +0x0c: (copié vers passe suivante)
    field_10: number           // +0x10: Données rendu
    field_14: number           // +0x14: (copié depuis passe précédente)
    field_18: number           // +0x18: (copié depuis passe précédente)
    field_1c: number           // +0x1c: (copié vers passe suivante)
    field_20: number           // +0x20: Coordonnée rendu
    field_24: number           // +0x24: Coordonnée rendu
    field_28: number           // +0x28: Données rendu
    field_2c: number           // +0x2c: (depuis passe suivante)
    field_30: number           // +0x30: = 0 (init)
    field_34: number           // +0x34: = 1.0 (init, float)
}
```

### 2.4 TileType (enum)

```typescript
enum TileType {
    Rough = 0,          // Herbe haute (naturelle)
    Fairway = 1,        // Fairway (herbe tondue)
    Green = 2,          // Green (putting surface)
    SandBunker = 3,     // Bunker de sable
    WaterShallow = 4,   // Eau peu profonde
    WaterMiddle = 5,    // Eau moyenne
    WaterDeep = 6,      // Eau profonde
    DeepRough = 7,      // Herbe très haute (hors-limites)
    GrassySand = 8,     // Transition sable→herbe
    GrassBunker = 9,    // Transition herbe→sable
    Tee = 10,           // Départ (Tee)
    Cliff = 11,         // Falaise
    Path = 12,          // Chemin
    Building = 13,      // Bâtiment
    Tree = 14,          // Arbre
    Flower = 15,        // Fleurs / décorations
}
```

### 2.5 CourseTheme (enum)

```typescript
enum CourseTheme {
    Parkland = 0,    // Thème classique verdoyant
    Links = 1,       // Thème côtier/links
    Desert = 2,      // Thème désertique
    Tropical = 3,    // Thème tropical
}
```

### 2.6 Golfer

```typescript
interface Golfer {
    id: number                 // Identifiant unique
    name: string               // Nom du golfeur
    isPro: boolean             // Pro ou célébrité ?
    
    // Skills (0-10)
    skills: GolferSkills
    
    // État
    money: number              // Argent gagné
    morale: number             // Moral (0-100)
    stamina: number            // Endurance
    fatigue: number            // Fatigue
    tournamentsWon: number     // Tournois gagnés
    bestScore: number          // Meilleur score
}

interface GolferSkills {
    putting: number       // 0-10: Précision putting
    power: number         // 0-10: Puissance drive
    accuracy: number      // 0-10: Précision générale
    imagination: number   // 0-10: Créativité (/coups difficiles)
    timing: number        // 0-10: Timing/Tempérament
    luck: number          // 0-10: Chance (effet aléatoire)
}
```

### 2.7 Tournament

```typescript
interface TournamentDef {
    id: number                 // 0-13
    name: string               // Nom (ex: "SGA Amateur Championship")
    prizePool: number          // Dotation ($)
    entryFee: number           // Frais d'inscription
    minHoles: number           // Trous minimum requis
    prestigeReq: number        // Prestige requis
    prestigeGain: number       // Prestige gagné
    fieldSize: number          // Taille du field
    courseTheme: number        // -1 = tous
    sgaRequired: number        // Score SGA minimum
    tier: number               // Niveau (1-10)
    // Taille: 0x6c (108 octets), 22 entrées max
}
```

### 2.8 BallState

```typescript
interface BallState {
    x: number      // Position terrain X (tuiles)
    y: number      // Position terrain Y (tuiles)
    z: number      // Hauteur
    vx: number     // Vitesse X
    vy: number     // Vitesse Y
    vz: number     // Vitesse Z
    spin: number   // Effet (spin)
    inWater: boolean  // Balle dans l'eau ?
    stopped: boolean  // Balle arrêtée ?
    lie: TileType     // Type de terrain sous la balle
}
```

### 2.9 EconomyState

```typescript
interface EconomyState {
    cash: number               // Trésorerie
    dailyIncome: number        // Revenu quotidien total
    greenFees: number          // Revenus green fees
    membershipFees: number     // Revenus abonnements
    proShopSales: number       // Ventes pro shop
    foodDrinks: number         // Restauration
    maintenanceCost: number    // Coûts entretien
    staffCost: number          // Salaires
    totalProfit: number        // Profit total (cumulé)
    prestige: number           // Prestige (0-1000)
    courseClass: number        // Classe parcours (1-5 étoiles)
}
```

---

## 3. Système Isométrique & Rendu

### 3.1 Projection dimétrique (2:1)

```
TILE_W = 128 pixels
TILE_H = 64 pixels
Angle α ≈ 26.565° (arctan(0.5))
```

### 3.2 World → Screen

```typescript
function worldToScreen(mapX: number, mapY: number, elevation: number): ScreenPoint {
    const screenX = (mapX - mapY) * (TILE_W / 2);  // = (mapX - mapY) * 64
    const screenY = (mapX + mapY) * (TILE_H / 2)   // = (mapX + mapY) * 32
                  - (elevation * ELEVATION_OFFSET);
    return { x: screenX, y: screenY };
}
```

### 3.3 Screen → World (picking)

```typescript
function screenToWorld(screenX: number, screenY: number, camera: Camera): WorldPoint {
    const relX = screenX - camera.offsetX;
    const relY = screenY - camera.offsetY;
    const mapX = (relX / 64 + relY / 32) / 2;
    const mapY = (relY / 32 - relX / 64) / 2;
    return { x: Math.floor(mapX), y: Math.floor(mapY) };
}
```

### 3.4 Interpolation de hauteur (barycentrique)

```typescript
function interpolateHeight(tile: Tile, localX: number, localY: number): number {
    // localX, localY ∈ [0, 1) à l'intérieur de la tuile
    const el = tile.elevation;  // [TL, TR, BR, BL]
    
    // Choix de la diagonale (B0)
    // B0=0 → TL-BR,  B0=1 → TR-BL
    const b0 = Math.abs(el[0] - el[2]) < Math.abs(el[1] - el[3]) ? 0 : 1;
    
    let wTL, wTR, wBR, wBL;
    if (b0 === 0) {
        // Diagonale TL-BR
        if (localX + localY > 1) {
            // Triangle BR
            wTL = 0; wTR = 1 - localY;
            wBR = localX + localY - 1; wBL = 1 - localX;
        } else {
            // Triangle TL
            wTL = 1 - localX - localY; wTR = localX;
            wBR = 0; wBL = localY;
        }
    } else {
        // Diagonale TR-BL
        const lx_ = localY;
        const ly_ = 1 - localX;
        if (lx_ + ly_ > 1) {
            wTL = 0; wTR = 1 - ly_;
            wBR = lx_ + ly_ - 1; wBL = 1 - lx_;
        } else {
            wTL = 1 - lx_ - ly_; wTR = lx_;
            wBR = 0; wBL = ly_;
        }
    }
    
    return wTL * el[0] + wTR * el[1] + wBR * el[2] + wBL * el[3];
}
```

### 3.5 Algorithme du Peintre (ordre de rendu)

```typescript
function renderTerrain(terrain: Terrain, focusTile: Tile | null, zoom: number) {
    // Setup matrice OpenGL
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 800, 600, 0, -1, 1);
    glTranslatef(0, 1.0, zoom);
    
    // Centrage sur la tuile focus
    if (focusTile) {
        const offsetX = (25 - focusTile.screenY) * 0.5;
        const offsetY = (25 - focusTile.screenX) * 0.5;
        glTranslatef(offsetX, 0, offsetY);
    }
    
    // Mode 1: Rendu complet (31×31 tuiles)
    if (!focusTile) {
        for (let row = 10; row < 40; row++) {
            for (let col = 39; col >= 10; col--) {
                const tile = tileAt(col, row);
                if (tile) renderSingleTile(tile, zoom);
            }
        }
    }
    // Mode 2: Rendu focalisé (~50 tuiles)
    else {
        // Fenêtre dynamique autour du focus
        const minX = Math.min(focusTile.screenX, 50 - focusTile.screenX);
        const maxY = Math.min(focusTile.screenY, 50 - focusTile.screenY);
        const startRow = focusTile.screenY - minX;
        const endRow = focusTile.screenY + maxY;
        const startCol = focusTile.screenX + maxY;
        const endCol = focusTile.screenX - minX;
        
        for (let row = startRow; row < endRow; row++) {
            for (let col = startCol; col >= endCol; col--) {
                const tile = tileAt(col, row);
                if (tile && tile.renderCategory !== 0 && !isCulled(tile, focusTile, zoom)) {
                    renderSingleTile(tile, zoom);
                }
            }
        }
    }
}
```

### 3.6 Calcul des normales

```typescript
function calcTileNormal(tile: Tile): Vec3 {
    const el = tile.elevation;
    // Vecteurs des arêtes de la tuile (les 4 coins)
    // Deux triangles: (TL, TR, BR) et (TL, BR, BL)
    const v1 = { x: 1, y: 0, z: el[1] - el[0] };  // TL → TR
    const v2 = { x: 1, y: 1, z: el[2] - el[0] };  // TL → BR
    const v3 = { x: 0, y: 1, z: el[3] - el[0] };  // TL → BL
    
    // Normale = cross(v1, v2) + cross(v2, v3) ... normalisée
    const n1 = cross(v1, v2);
    const n2 = cross(v2, v3);
    const n = normalize(add(n1, n2));
    return n;
}
```

---

## 4. Auto-Tiling & Variations de Tuiles

### 4.1 Les 5 groupes géométriques (A–E)

Déterminés par les 4 hauteurs des coins :

| Groupe | Condition | Nb formes |
|:------:|-----------|:---------:|
| **A** | Plat : `el[0]==el[1]==el[2]==el[3]` | 1 |
| **B** | Pente simple : `el[0]==el[1] && el[2]==el[3]` ou `el[0]==el[3] && el[1]==el[2]` | 4 |
| **C** | Coin : 1 coin différent des 3 autres | 8 |
| **D** | Diagonale : `el[0]==el[2] && el[1]==el[3]` | 2 |
| **E** | Raide : différence entre coins adjacent > 1 | 4+ |

### 4.2 Masque de voisinage (orientation A–D)

```typescript
function computeNeighborMask(tile: Tile, grid: TileMap): number {
    let mask = 0;
    const type = tile.type;
    
    // Pour chaque voisin cardinal : N(1), E(2), S(4), O(8)
    const neighbors = getNeighbors(tile, grid);
    for (const [dir, neighbor] of [['N', neighbors.n], ['E', neighbors.e], ['S', neighbors.s], ['W', neighbors.w]]) {
        if (neighbor && neighbor.type !== type && !sameFamily(type, neighbor.type)) {
            const bit = { N: 1, E: 2, S: 4, W: 8 }[dir];
            mask |= bit;
        }
    }
    
    // Si le masque n'est pas nul, on choisit l'orientation prioritaire
    // Priorité : N(1) > E(2) > S(4) > W(8) — la première direction active détermine le suffixe A-D
    return mask;
}
```

### 4.3 Familles de voisinage

Les types de terrain sont regroupés en **familles** pour éviter les bordures entre types similaires :

```typescript
const FAMILIES: Record<string, TileType[]> = {
    grass: [TileType.Rough, TileType.Tree, TileType.Flower, TileType.GrassySand],
    sand:  [TileType.SandBunker],
    water: [TileType.WaterShallow, TileType.WaterMiddle, TileType.WaterDeep],
    play:  [TileType.Fairway, TileType.Green, TileType.Tee],
};

function sameFamily(a: TileType, b: TileType): boolean {
    for (const family of Object.values(FAMILIES)) {
        if (family.includes(a) && family.includes(b)) return true;
    }
    return false;
}
```

### 4.4 Variation cosmétique (0001–0009)

```typescript
// Compteur global par type de terrain
const globalCounters: number[] = new Array(16).fill(0);

function selectCosmeticVariation(type: TileType): number {
    const maxVariation = typeInfo[type].maxVariation;  // 9 pour Rough, 5 pour Fairway/Green
    if (maxVariation <= 0) return 0;
    const counter = globalCounters[type];
    globalCounters[type] = (counter + 1) % maxVariation;
    return counter;
}
```

### 4.5 Convention de nommage des fichiers textures

```
{TypeTerrain}{Orientation}{Variation}.bmp

Exemples:
RoughA0001.bmp    — Herbe, forme A (plate), variation 1
RoughC0004.bmp    — Herbe, forme C (coin), variation 4
GrassySandB0002.bmp — Bordure sable/herbe côté Est, variation 2
WaterShallowD0003.bmp — Eau peu profonde côté Ouest, variation 3
```

### 4.6 Nombre de textures par thème

| Type | Desert | Parkland | Links | Tropical |
|------|:------:|:--------:|:-----:|:--------:|
| Rough A-E | 45 | 25 | 25 | 20 |
| Eau (3 niveaux) | 113 | ~92 | ~92 | ~92 |
| Bunkers | 97 | ~80 | ~80 | ~80 |
| Fairway | 5 | 5 | 5 | 5 |
| Green | 5 | 5 | 5 | 5 |
| Tee | 25 | 25 | 25 | 25 |
| **Total** | **732** | **602** | **644** | **547** |

---

## 5. Physique de Balle

### 5.1 Formule de distance

```
distanceFloat = propertyByte × 0.05

distanceFinale = distanceFloat × clubFactor × windFactor × terrainFactor × skillFactor
```

### 5.2 Club Factors (14 clubs)

| ID | Club | Facteur distance |
|:--:|------|:----------------:|
| 0 | Driver | 1.00 |
| 1 | 3-Wood | 0.90 |
| 2 | 5-Wood | 0.82 |
| 3 | 3-Iron | 0.72 |
| 4 | 4-Iron | 0.67 |
| 5 | 5-Iron | 0.62 |
| 6 | 6-Iron | 0.57 |
| 7 | 7-Iron | 0.52 |
| 8 | 8-Iron | 0.47 |
| 9 | 9-Iron | 0.42 |
| 10 | Pitching Wedge | 0.35 |
| 11 | Sand Wedge | 0.25 |
| 12 | Lob Wedge | 0.20 |
| 13 | Putter | 0.10 (roulage) |

### 5.3 Facteurs multiplicatifs

```typescript
// Vent : cos(angle) × forceVent
const windFactor = Math.cos(windAngle) * windStrength;  // -1.0 à +1.0

// Terrain : selon le lie
const terrainFactor: Record<TileType, number> = {
    [TileType.Tee]: 1.0,
    [TileType.Fairway]: 0.98,
    [TileType.Green]: 1.0,
    [TileType.Rough]: 0.85,
    [TileType.DeepRough]: 0.60,
    [TileType.SandBunker]: 0.40,
    [TileType.GrassySand]: 0.80,
    [TileType.GrassBunker]: 0.50,
    // Eau: balle perdue
};

// Skill : basé sur puissance et précision du golfeur
const powerFactor = golfer.skills.power / 10;  // 0.0 - 1.0
const accuracyFactor = golfer.skills.accuracy / 10;  // 0.0 - 1.0

// Déviation aléatoire
const deviation = (100 - accuracy) * (Math.random() * 30 + 5) / 100;
```

### 5.4 Trajectoire simplifiée

```typescript
function calculateShot(context: ShotContext): ShotResult {
    // 1. Distance de base
    let distance = context.club.baseDistance * context.power / 100;
    
    // 2. Ajustements
    distance *= context.windFactor;
    distance *= terrainFactor[context.lie];
    distance *= context.golfer.skills.power / 10;
    
    // 3. Déviation
    const deviation = ((100 - context.golfer.skills.accuracy) / 100)
                    * (Math.random() * 30 + 5);
    const angle = context.targetAngle + (Math.random() - 0.5) * deviation;
    
    // 4. Résultat
    return {
        distance,
        angle,
        newX: context.ball.x + Math.cos(angle) * distance,
        newY: context.ball.y + Math.sin(angle) * distance,
        newTerrain: determineLandingTerrain(newX, newY),
    };
}
```

### 5.5 Putting (Green uniquement)

```typescript
function calculatePutt(context: ShotContext): ShotResult {
    // Le putting utilise une physique différente (roulage)
    const distance = context.distanceToHole;
    const greenSpeed = context.greenSpeed;  // Facteur green (0.8-1.2)
    
    // Facteur d'élévation (dénivelé)
    const elevDelta = context.holeElevation - context.ballElevation;
    const elevFactor = 1 + elevDelta * 0.05;  // Chaque mètre de dénivelé = 5%
    
    // Précision
    const accuracy = context.golfer.skills.putting / 10;
    const deviation = (1 - accuracy) * (Math.random() * 5 + 1);  // ± degrés
    
    // Force
    const power = (distance / 30) * elevFactor;  // Normalisé pour 30 unités max
    const clampedPower = Math.min(1, Math.max(0.1, power));
    
    return { distance, angle: context.targetAngle + deviation, power: clampedPower };
}
```

### 5.6 Constantes FPU vérifiées

| Adresse | Valeur | Usage |
|:------:|:------:|-------|
| 0x004ba818 | 0.05 | distanceFloat = propertyByte × 0.05 |
| 0x004ba81c | 0.2 | Coefficient secondaire |
| 0x004ba820 | 0.04 | Coefficient tertiaire |
| 0x004ba824 | 0.01 | Coefficient de précision |
| 0x004b9a30 | 0.017453 | Degrés → radians |

---

## 6. IA des Golfeurs

### 6.1 Arbre de décision (4 sous-arbres)

```
IA_ProcessTick(golfer, context)
│
├── 1. ÉVALUER LA SITUATION
│   ├── Distance au trou ?
│   ├── Lie actuel (type de terrain sous la balle)
│   ├── Obstacles entre balle et trou ? (eau, bunkers, arbres)
│   └── Skills du golfeur
│
├── 2. CHOISIR LE CLUB
│   ├── SI distance > 200 ET lie == Tee/Fairway : Driver/3-Wood
│   ├── SI distance 150-200 : 3-5 Iron
│   ├── SI distance 100-150 : 5-8 Iron
│   ├── SI distance 50-100 : 9-Iron / PW
│   ├── SI distance < 50 ET lie != Green : SW / LW
│   ├── SI lie == Green : Putter
│   └── SI bunker : Sand Wedge
│
├── 3. CALCULER LE TIR
│   ├── Puissance (80-100% selon situation)
│   ├── Angle (viser le centre du fairway/green)
│   ├── Type de tir (DRAW/FADE selon imagination)
│   └── Déviation (basée sur accuracy)
│
└── 4. ÉVALUER LE RÉSULTAT
    ├── Commentaire si réussi/raté
    └── Mise à jour moral
```

### 6.2 Type de tir

```typescript
function selectShotType(golfer: Golfer, context: ShotContext): ShotType {
    const rng = Math.random() * 100;
    
    // Golfeurs avec haute imagination tentent des coups risqués
    if (golfer.skills.imagination > 7 && rng < 25) {
        return rng < 15 ? ShotType.DRAW : ShotType.FADE;
    }
    
    // Golfeurs prudents
    if (golfer.skills.timing > 7) {
        return ShotType.STRAIGHT;
    }
    
    // Par défaut
    return rng < 70 ? ShotType.STRAIGHT : (rng < 85 ? ShotType.DRAW : ShotType.FADE);
}
```

### 6.3 Commentaires (AI_GenerateComment)

```typescript
const COMMENTS = {
    GREAT_SHOT: "Magnifique coup !",
    GOOD_SHOT: "Bon coup.",
    OK_SHOT: "Pas mal.",
    BAD_SHOT: "Raté.",
    IN_WATER: "Dans l'eau !",
    IN_BUNKER: "Dans le bunker.",
    ON_GREEN: "Sur le green.",
    NEAR_PIN: "Près du drapeau !",
    HOLE_IN_ONE: "TROU D'UN COUP !",
};
```

---

## 7. Économie & Gestion

### 7.1 Formule de profit quotidien

```typescript
function calculateDailyProfit(state: GameState): number {
    const dailyIncome =
        state.greenFees * state.holesCount +        // Green fees × trous
        state.membershipFees +                       // Abonnements
        state.proShopSales +                         // Pro shop
        state.foodDrinks;                            // Restauration
    
    const dailyCosts =
        state.maintenanceCost +                      // Entretien terrain
        state.staffCost;                             // Salaires
    
    return dailyIncome - dailyCosts;
}
```

### 7.2 Calcul du prestige

```typescript
function calculatePrestige(state: GameState): number {
    let prestige = 0;
    prestige += state.courseRating * 2;        // Note SGA × 2
    prestige += state.holesCount * 5;          // 5 pts par trou
    prestige += state.tournamentsWon * 50;     // 50 pts par tournoi gagné
    prestige += Math.floor(state.totalEarnings / 1000);  // 1 pt par 1000$
    prestige -= Math.max(0, state.maintenanceCost - 100); // Pénalité si entretien cher
    return Math.max(0, Math.min(1000, prestige));
}
```

### 7.3 Classes de parcours

```typescript
function determineCourseClass(prestige: number): number {
    if (prestige >= 800) return 5;  // ★★★★★
    if (prestige >= 600) return 4;  // ★★★★
    if (prestige >= 400) return 3;  // ★★★
    if (prestige >= 200) return 2;  // ★★
    return 1;                        // ★
}
```

---

## 8. Boucle de Jeu & Simulation

### 8.1 GameTickFunction (0x49846c)

```typescript
function gameTickFunction(gameState: GameState) {
    // 16 slots de simulation, stride 0x58
    const slots = gameState.slots;  // 16 éléments
    
    // Attente sur 2 slots (WaitForMultipleObjects, timeout 20s)
    const readySlots = waitForSlots(slots, 2, 20000);
    
    // Pour chaque slot prêt
    for (const slot of readySlots) {
        if (slot.state === SlotState.READY) {
            slot.state = SlotState.RUNNING;
            // Appel vtable[0x68] — simulation golfeur
            simulateGolfer(gameState, slot.golferId);
            slot.timer = getTickCount();
        }
    }
    
    // Protection SEH
    try {
        // Traitement des événements utilisateur
        if (hasPendingEvents()) {
            processInputEvents(gameState);
        }
    } catch (e) {
        // SEH handler — ignore l'exception
    }
}
```

### 8.2 Vitesses de simulation

```typescript
const SPEED_MODES = {
    FASTEST: 5000,   // 5 secondes entre tirs
    FAST: 10000,     // 10 secondes
    NORMAL: 20000,   // 20 secondes (défaut)
    SLOW: 30000,     // 30 secondes
};
```

### 8.3 Événements utilisateur (InputHandler @ 0x49b7b0)

```typescript
enum InputEventType {
    GOLFER_ACTIVATE = 0x03,      // Activation golfeur
    TERRAIN_CLICK = 0x05,        // Clic sur le terrain
    ESCAPE_CANCEL = 0x31,        // Échap / Annuler
    GOLFER_SELECT = 0x102,       // Sélection golfeur par ID
    UI_BUTTON = 0x103,           // Bouton interface
}

function inputHandler(gameState: GameState, event: InputEvent, forceFlag: boolean) {
    switch (event.type) {
        case InputEventType.ESCAPE_CANCEL:
            cancelAction(gameState);
            validateAndAdvance(gameState);
            break;
            
        case InputEventType.GOLFER_ACTIVATE:
            if (event.flags & 0x80) {
                startGolferAction(gameState, event.param, true);
            }
            break;
            
        case InputEventType.TERRAIN_CLICK:
            if (event.subEvents > 0) {
                for (const sub of event.subEvents) {
                    hitTest(gameState, sub.x, sub.z);
                }
            } else {
                const result = terrainHit(gameState, event.param);
                startGolferAction(gameState, event.param, true);
            }
            break;
            
        case InputEventType.UI_BUTTON:
            // Action interface (vtable[0x10])
            break;
    }
}
```

---

## 9. Validation des Trous & Score SGA

### 9.1 Règles de validation Tee → Fairway → Green

```typescript
function validateHole(tee: TilePos, green: TilePos, grid: TileMap): ValidationResult {
    const errors: string[] = [];
    const warnings: string[] = [];
    
    // 1. Vérifier les types
    if (grid.tileAt(tee.x, tee.y)?.type !== TileType.Tee) {
        errors.push("Le départ doit être de type Tee");
    }
    if (grid.tileAt(green.x, green.y)?.type !== TileType.Green) {
        errors.push("Le green doit être de type Green");
    }
    
    // 2. Déterminer le Par (basé sur la distance)
    const distance = distanceBetween(tee, green);
    let par: 3 | 4 | 5;
    if (distance < 100) par = 3;
    else if (distance < 250) par = 4;
    else par = 5;
    
    // 3. Vérifier la connexité du fairway
    const path = findPath(tee, green, grid);
    if (!path || path.length === 0) {
        errors.push("Aucun chemin praticable entre Tee et Green");
    } else {
        for (const p of path) {
            const tile = grid.tileAt(p.x, p.y);
            if (!tile) continue;
            if (tile.type === TileType.WaterDeep || tile.type === TileType.Building) {
                errors.push("Obstacle infranchissable au milieu du trou");
            } else if (tile.type !== TileType.Fairway && tile.type !== TileType.Green && tile.type !== TileType.Tee) {
                warnings.push(`Le fairway est interrompu par du ${tile.type}`);
            }
        }
    }
    
    // 4. Vérifier la déclivité max
    for (const p of path) {
        const tile = grid.tileAt(p.x, p.y);
        if (!tile) continue;
        const el = tile.elevation;
        if (Math.abs(el[0]-el[1]) > 1 || Math.abs(el[1]-el[2]) > 1 ||
            Math.abs(el[2]-el[3]) > 1 || Math.abs(el[3]-el[0]) > 1) {
            errors.push(`Déclivité excessive sur la tuile (${p.x}, ${p.y})`);
        }
    }
    
    // 5. Type de trou (pour SGA)
    const holeType = classifyHoleType(tee, green, grid, distance);
    
    return { valid: errors.length === 0, errors, warnings, par, distance, holeType };
}
```

### 9.2 Types de trous SGA

```typescript
enum HoleType {
    PRECISE = 0,    // Fairway étroit, 3+ obstacles → récompense Accuracy
    FREEWAY = 1,    // Distance > 250, large fairway → récompense Length
    CHALLENGE = 2,  // Obstacles + largeur moyenne → Accuracy + Length
    CREATIVE = 3,   // Dogleg → récompense Imagination
    STRATEGIC = 4,  // Obstacles + dogleg → Accuracy + Imagination
    HEROIC = 5,     // Distance > 200 + dogleg → Length + Imagination
    CLASSIC = 6,    // Équilibré → tous les skills
}
```

### 9.3 Calcul du score SGA

```typescript
function calculateSGAScore(holes: HoleValidation[]): number {
    let totalScore = 0;
    for (const hole of holes) {
        // Score basé sur le type de trou et la qualité de construction
        const baseScore = 50;  // Score de base
        const distanceBonus = Math.min(20, hole.distance / 10);
        const hazardPenalty = hole.hazards * 5;  // Obstacles bien placés = bonus
        const widthPenalty = hole.averageWidth < 3 ? 10 : 0;  // Fairway trop étroit
        totalScore += baseScore + distanceBonus + hazardPenalty - widthPenalty;
    }
    return Math.floor(totalScore / holes.length);  // Moyenne sur tous les trous
}
```

---

## 10. Système UI & Écrans

### 10.1 États de l'écran (25 valeurs)

```typescript
enum GameScreen {
    NONE = 0,
    // Démarrage
    SPLASH,             // bink64.pcx + logo.pcx
    LOADING,            // LoadingScreen01-12.pcx (aléatoire)
    TITLE,              // TitleBase.pcx + boutons
    // Menu
    SCENARIO_SELECT,
    LOAD_GAME,
    PRO_SELECT,
    THEME_PACKS,
    TOP10,
    CREDITS,
    // Jeu
    WORLD,              // Vue isométrique + toolbars
    PAUSE,
    // Info Screens (overlays)
    INFO_FINANCE,
    INFO_COURSE,
    INFO_SGA,
    INFO_HOLE_STATS,
    INFO_MEMBER_ROSTER,
    INFO_HIRE,
    INFO_BUY_LAND,
    INFO_HISTOGRAPH,
    INFO_LOW_SCORE,
    INFO_SHORTCUTS,
    INFO_PLAY_COMT,
    INFO_ROUTE,
    // Événements spéciaux
    TOURNAMENT_RESULT,
    END_OF_YEAR,
}
```

### 10.2 Transitions

```
SPLASH → LOADING → TITLE
TITLE → SCENARIO_SELECT → LOADING → WORLD
TITLE → LOAD_GAME → LOADING → WORLD
TITLE → PRO_SELECT / TOP10 / CREDITS → TITLE
TITLE → Quit → EXIT

WORLD ↔ PAUSE
WORLD → INFO_* → WORLD
WORLD → TOURNAMENT_RESULT → WORLD
WORLD → END_OF_YEAR → WORLD

PAUSE → Resume → WORLD
PAUSE → Save → WORLD
PAUSE → Quit to Menu → TITLE
PAUSE → Quit to Desktop → EXIT
```

### 10.3 Barres d'outils (5 panels)

```typescript
enum ToolbarPanel {
    TERRAIN = 0,     // BaseTerrainPanel: types de surface
    BUILDING = 1,    // BuildingPanel: constructions
    ELEVATION = 2,   // ElevationPanel: dénivelés
    AMENITIES = 3,   // AmenitiesPanel: décorations
    EMPLOYEE = 4,    // EmployeePanel: personnel
}
```

### 10.4 Dimensions

```typescript
const UI = {
    SCREEN_WIDTH: 800,
    SCREEN_HEIGHT: 600,
    WORLD_VIEW_HEIGHT: 460,   // Zone isométrique
    TOOLBAR_TOP: 460,         // Début zone panels
    TOOLBAR_HEIGHT: 140,
    TOOLBAR_BTN_W: 48,
    TOOLBAR_BTN_H: 48,
};
```

---

## 11. Formats de Fichiers & Sauvegarde

### 11.1 .sve (Sauvegarde complète)

```
[HEADER]
  Magic: 4 octets (vérification)
  Version: 4 octets
  [GameState sérialisé] — état complet du jeu
  [Grille de tuiles] — toutes les tuiles (width * height * 584 octets)
  [Inventaire] — objets placés, bâtiments
  [Tournois] — résultats des tournois
  [Top scores] — 10 × 156 octets (nom, score, date)
```

### 11.2 .dta (Données golfeurs)

Format CSV commenté. Exemple :
```
# progolfers.dta — Liste des golfeurs professionnels
Name,Nationality,Putting,Power,Accuracy,Imagination,Timing
Tiger Woods,USA,9,10,9,8,9
...
```

### 11.3 .pro / .glf (Profil golfeur)

```
Taille estimée: 1008+ octets
  [nom: 64 chars]
  [nationalité: 32 chars]
  [skills: 5 × int32]  // putting, power, accuracy, imagination, timing
  [apparence: ...]      // tête, corps, palette
  [stats carrière: ...] // gains, tournois, scores
```

### 11.4 .chr (Personnages célébrités)

Similaire à .pro mais avec dialogues supplémentaires (quêtes Sid Meier).

### 11.5 .cse (Scénario — Course Scenario Extension)

```
Taille: 336 octets (0x150)
  [+0x00] name: char[64]        — Nom du scénario
  [+0x40] budget: int32         — Budget de départ ($)
  [+0x44] targetSGA: int32      — Objectif note SGA (0-100)
  [+0x48] difficulty: int32     — Difficulté (1-5)
  [+0x4C] theme: int32          — Thème (0=Parkland...3=Tropical)
  [+0x50] description: char[256] — Description texte
```

Chargé depuis `Themes\Championship\*.cse` via `FindFirstFileA` (réf @ 0x43b997). Si aucun fichier trouvé, utilise les 6 scénarios embarqués.

---

## 12. Scénarios (.cse) & Campagne

### 12.1 Les 6 scénarios embarqués

```typescript
interface ScenarioDef {
    id: number              // 0-5
    name: string            // Nom
    description: string     // Description narrative
    budget: number          // Budget de départ ($)
    targetHoles: number     // Trous à construire
    targetSGA: number       // Note SGA cible
    targetPrestige: number  // Prestige cible
    timeLimit: number       // Semaines (0=illimité)
    courseType: CourseTheme // Thème imposé
    sandbox: boolean        // Mode libre (pas d'objectifs)
}

const SCENARIOS: ScenarioDef[] = [
    { id: 0, name: "Tutorial",            budget: 10000, targetHoles: 3,  targetSGA: 0,   targetPrestige: 0,   timeLimit: 0,  courseType: CourseTheme.Parkland, sandbox: false },
    { id: 1, name: "Pine Valley GC",      budget: 10000, targetHoles: 9,  targetSGA: 50,  targetPrestige: 25,  timeLimit: 52, courseType: CourseTheme.Parkland, sandbox: false },
    { id: 2, name: "Carolina Links",      budget: 25000, targetHoles: 9,  targetSGA: 60,  targetPrestige: 40,  timeLimit: 40, courseType: CourseTheme.Links,    sandbox: false },
    { id: 3, name: "Paradise Tropical",   budget: 50000, targetHoles: 18, targetSGA: 70,  targetPrestige: 60,  timeLimit: 60, courseType: CourseTheme.Tropical, sandbox: false },
    { id: 4, name: "Desert Championship", budget: 10000, targetHoles: 18, targetSGA: 85,  targetPrestige: 80,  timeLimit: 80, courseType: CourseTheme.Desert,   sandbox: false },
    { id: 5, name: "Sandbox Mode",        budget: 100000,targetHoles: 0,  targetSGA: 0,   targetPrestige: 0,   timeLimit: 0,  courseType: CourseTheme.Parkland, sandbox: true  },
];
```

---

## 13. Pathfinding

### 13.1 A* sur grille de tuiles

```typescript
function findPath(start: TilePos, end: TilePos, grid: TileMap, golfer?: Golfer): TilePos[] | null {
    // 1. Calculer les coûts par type de terrain
    function tileCost(tile: Tile): number {
        switch (tile.type) {
            case TileType.Tee:
            case TileType.Fairway:
                return 1;       // Idéal
            case TileType.Green:
                return 1;
            case TileType.Rough:
                return 4;       // Herbe haute
            case TileType.DeepRough:
            case TileType.Tree:
                return 10;      // Hors-limites
            case TileType.SandBunker:
                return 6;
            case TileType.WaterShallow:
                return 15;      // Eau peu profonde
            case TileType.WaterMiddle:
            case TileType.WaterDeep:
                return 20;      // Eau
            case TileType.Building:
            case TileType.Cliff:
                return Infinity; // Infranchissable
            default:
                return 5;
        }
    }
    
    // 2. A* classique
    const openSet: PathNode[] = [{ x: start.x, y: start.y, g: 0, h: heuristic(start, end), f: 0, parent: null }];
    const closedSet = new Set<string>();
    
    // Bonus imagination
    const imaginationBonus = golfer?.skills.imagination > 8 ? -1 : 0;
    
    while (openSet.length > 0) {
        // Trouver le nœud avec le plus petit f
        openSet.sort((a, b) => a.f - b.f);
        const current = openSet.shift()!;
        const key = `${current.x},${current.y}`;
        
        if (current.x === end.x && current.y === end.y) {
            return reconstructPath(current);
        }
        
        closedSet.add(key);
        
        // Explorer les 4 voisins cardinaux
        for (const [dx, dy] of [[0,-1],[1,0],[0,1],[-1,0]]) {
            const nx = current.x + dx;
            const ny = current.y + dy;
            const nkey = `${nx},${ny}`;
            
            if (!grid.isInBounds(nx, ny) || closedSet.has(nkey)) continue;
            
            const tile = grid.tileAt(nx, ny);
            if (!tile || tileCost(tile) === Infinity) continue;
            if (tile.walls && tileHasWallTowards(tile, dx, dy)) continue;
            
            const cost = tileCost(tile) + imaginationBonus;
            const g = current.g + cost;
            
            const existing = openSet.find(n => n.x === nx && n.y === ny);
            if (existing) {
                if (g < existing.g) {
                    existing.g = g;
                    existing.f = g + heuristic({ x: nx, y: ny }, end);
                    existing.parent = current;
                }
            } else {
                openSet.push({
                    x: nx, y: ny,
                    g: g,
                    h: heuristic({ x: nx, y: ny }, end),
                    f: g + heuristic({ x: nx, y: ny }, end),
                    parent: current,
                });
            }
        }
    }
    
    return null;  // Aucun chemin trouvé
}

function heuristic(a: TilePos, b: TilePos): number {
    return Math.abs(a.x - b.x) + Math.abs(a.y - b.y);  // Manhattan
}
```

---

## 14. Collisions Balle/Terrain

### 14.1 Facteurs de rebond et friction par type de terrain

```typescript
const TERRAIN_PHYSICS: Record<TileType, { bounce: number; friction: number }> = {
    [TileType.Tee]:         { bounce: 0.10, friction: 0.02 },
    [TileType.Fairway]:     { bounce: 0.08, friction: 0.03 },
    [TileType.Green]:       { bounce: 0.05, friction: 0.01 },  // Roule bien
    [TileType.Rough]:       { bounce: 0.15, friction: 0.10 },
    [TileType.DeepRough]:   { bounce: 0.20, friction: 0.20 },
    [TileType.SandBunker]:  { bounce: 0.01, friction: 0.30 },  // S'arrête vite
    [TileType.GrassySand]:  { bounce: 0.05, friction: 0.15 },
    [TileType.GrassBunker]: { bounce: 0.05, friction: 0.15 },
    [TileType.WaterShallow]:{ bounce: 0.01, friction: 0.50 },  // Ralentit fort
    [TileType.WaterMiddle]: { bounce: 0,    friction: 1.0  },  // Balle perdue
    [TileType.WaterDeep]:   { bounce: 0,    friction: 1.0  },  // Balle perdue
    [TileType.Tree]:        { bounce: 0.40, friction: 0.05 },  // Rebond arbre
    [TileType.Building]:    { bounce: 0.60, friction: 0.01 },  // Mur
    [TileType.Cliff]:       { bounce: 0.30, friction: 0.05 },
    [TileType.Path]:        { bounce: 0.10, friction: 0.05 },
    [TileType.Flower]:      { bounce: 0.10, friction: 0.05 },
};
```

### 14.2 Détection et résolution de collision

```typescript
function resolveBallTerrainCollision(ball: BallState, terrain: TileMap, dt: number): BallState {
    // 1. Mise à jour position
    ball.x += ball.vx * dt;
    ball.y += ball.vy * dt;
    ball.z += ball.vz * dt;
    
    // 2. Gravité
    ball.vz -= GRAVITY * dt;  // GRAVITY ≈ 9.81 ou valeur ajustée
    
    // 3. Trouver la tuile sous la balle
    const tileX = Math.floor(ball.x);
    const tileY = Math.floor(ball.y);
    const tile = terrain.tileAt(tileX, tileY);
    if (!tile) return ball;  // Hors limites
    
    // 4. Hauteur du terrain à cette position
    const localX = ball.x - tileX;
    const localY = ball.y - tileY;
    const terrainHeight = interpolateHeight(tile, localX, localY);
    
    // 5. Collision avec le sol
    if (ball.z <= terrainHeight) {
        ball.z = terrainHeight;
        
        const physics = TERRAIN_PHYSICS[tile.type] || { bounce: 0.1, friction: 0.05 };
        ball.lie = tile.type;
        
        // Rebond
        ball.vz = -ball.vz * physics.bounce;
        
        // Friction
        ball.vx *= (1 - physics.friction);
        ball.vy *= (1 - physics.friction);
        
        // Arrêt si très lent
        const speed = Math.sqrt(ball.vx * ball.vx + ball.vy * ball.vy);
        if (speed < 0.01) {
            ball.vx = 0;
            ball.vy = 0;
            ball.vz = 0;
            ball.stopped = true;
        }
        
        // Balle perdue dans l'eau
        if (tile.type === TileType.WaterMiddle || tile.type === TileType.WaterDeep) {
            ball.inWater = true;
            ball.stopped = true;
        }
    }
    
    return ball;
}
```

---

## 15. Génération du Terrain Initial

### 15.1 Algorithme exact (resetTerrain @ 0x1000aa10)

```typescript
function generateInitialTerrain(terrain: Terrain, theme: CourseTheme) {
    // 1. Réinitialiser toutes les tuiles
    for (let y = 0; y < terrain.height; y++) {
        for (let x = 0; x < terrain.width; x++) {
            const tile = terrain.tiles[y * terrain.width + x];
            
            // Le type de base est déterminé par la ligne Y
            // Les premières lignes = Rough, les lignes centrales = Fairway, etc.
            const initialType = determineInitialType(x, y, terrain.width, terrain.height);
            
            // Variation cosmétique (anti-répétition)
            const variation = selectCosmeticVariation(initialType);
            
            setTileType(tile, initialType, variation);
            
            // Hauteurs à 0 (terrain plat)
            tile.elevation = [0, 0, 0, 0];
        }
    }
    
    // 2. Recalculer les normales
    recalcAllNormals(terrain);
    
    // 3. Appliquer le thème visuel
    loadCourseType(terrain, theme);
}

function determineInitialType(x: number, y: number, width: number, height: number): TileType {
    // Distribution basée sur la position Y
    // Les lignes 0-3 sont du Rough, 4-8 du Fairway, etc.
    // Cette fonction est une approximation
    const row = y;
    if (row < 3) return TileType.Rough;
    if (row < 8) return TileType.Fairway;
    if (row < 12) return TileType.Green;
    if (row < 16) return TileType.Rough;
    return TileType.DeepRough;
}
```

### 15.2 Ce qui est aléatoire vs ce qui ne l'est pas

| Élément | Aléatoire ? | Mécanisme |
|---------|:-----------:|-----------|
| Hauteurs (elevations) | ❌ | Toutes à 0 (plat) |
| Types de terrain | ❌ | Basé sur la ligne Y |
| Variation cosmétique texture | ✅ | `rand() % maxVariation` |
| Thème visuel | ❌ | Choix du joueur (4 thèmes) |
| Arbres / bâtiments | ❌ | Placés manuellement |
| Position des trous | ❌ | Construite par le joueur |
| Météo / vent | ✅ | Généré aléatoirement |
| Comportement IA | ✅ | rand() dans les limites des skills |

---

## Références des adresses clés

### Terrain.dll (base 0x10000000)

| Fonction | Adresse | Taille | Rôle |
|----------|:-------:|:------:|------|
| `resetTerrain()` | 0x1000aa10 | ~200 | Réinitialise toutes les tuiles |
| `loadNewCourseType(int)` | 0x10001af0 | ~90 | Change le thème |
| `setType(Tile*,int,int)` | 0x100032f0 | ~200 | Assigne type + variation |
| `tileAt(x,y)` | 0x10001d50 | ~50 | Accès tuile row-major |
| `tileHit(x,y)` | 0x1000ab30 | ~300 | Picking écran → tuile |
| `render()` | 0x10005990 | ~2500 | Rendu isométrique principal |
| `renderSingleTile()` | 0x1000e6c0 | ~400 | Rendu OpenGL d'une tuile |
| `initSystem()` | 0x10009c80 | ~600 | Init moteur + alloc tuiles |
| `elevateCorner()` | 0x1000a5c0 | ~80 | Élève un coin |
| `lowerCorner()` | 0x1000a620 | ~80 | Abaisse un coin |
| `calcNormals()` | 0x1000a6f0 | ~200 | Normale d'une tuile |
| `calcAllNormals()` | 0x1000a740 | ~400 | Recalcul toutes normales |
| `setWall()` | 0x1000a560 | ~60 | Pose un mur |
| `hasConnectedPath()` | 0x1000a450 | ~100 | Test connexion chemin |
| `drawLine()` | 0x100048a0 | ~600 | Bresenham isométrique |
| `drawCircle()` | 0x100042a0 | ~500 | Cercle isométrique |
| `drawBezierSpline()` | 0x10005230 | ~500 | Bézier cubique |
| `getInstance()` | 0x100031a0 | ~180 | Singleton |

### golf.exe (base 0x00400000)

| Fonction | Adresse | Taille | Rôle |
|----------|:-------:|:------:|------|
| `GameTickFunction()` | 0x49846c | ~800 | Boucle simulation 16 slots |
| `InputHandler()` | 0x49b7b0 | ~400 | Événements utilisateur |
| `StartGolferAction()` | 0x49acf0 | 2336 | Lance tour golfeur |
| `IA_ProcessTick()` | 0x49f370 | 1577 | Tick IA golfeur |
| `IA_ChooseClub()` | 0x49bec0 | 166 | Choix du club |
| `IA_CalculateShot()` | 0x49f9a0 | 236 | Calcul du tir |
| `Ball_MainFunction()` | 0x460cf0 | ~? | Trajectoire 3D balle |
| `Economy_CalculateProfit()` | 0x49d820 | ~? | Calcul profit |
| `Economy_TickDaily()` | 0x49e450 | 95 | Tick économique quotidien |
| `Economy_TickYearly()` | 0x49dab0 | 1907 | Tick annuel |
| `IO_OpenFile()` | 0x4a5d5f | 719 | CreateFileA |
| `IO_ReadFile()` | 0x4a589f | 473 | ReadFile |
| `IO_WriteFile()` | 0x4a5bbd | 395 | WriteFile |
| `InitGameState()` | 0x4a50db | 1894 | Init tout l'état |
| `WinMain()` | 0x4a682f | 164 | Point d'entrée |

---

## Constantes globales

| Adresse | Valeur | Usage |
|:-------:|:------:|-------|
| 0x008400b0 | GameState* | Pointeur vers l'état global |
| 0x00840aac | HWND | Handle fenêtre principale |
| 0x00842160 | HINSTANCE | Handle d'instance |
| 0x0083c340 | char[256] | Buffer barre d'état |
| 0x0083afcc | int | Flag fermeture |
| 0x0080d840 | TournamentObj[22] | Tableau des tournois |
| 0x004ba818 | 0.05f | Facteur distance physique |
| 0x10070a0c | int | Type de parcours actif |
| 0x100613cc | void* | Données course (nom/desc) |
| 0x1005f2f4 | string | Texte thème parcours |
| 0x100687f8 | texture[] | Table globale textures |

---

## Notes importantes pour l'implémentation

1. **Le terrain commence plat** — il n'y a PAS de génération procédurale de heightmap dans le jeu original
2. **OpenGL est vivant** — les 45 imports sont utilisés, pas de code mort
3. **Rendu hybride** : OpenGL pour le terrain 3D, GDI32 pour les sprites 2D
4. **Pas de Windows controls** — UI 100% custom paint via BitBlt
5. **Timer-driven** — pas de boucle PeekMessage, tout est déclenché par SetTimer
6. **Section .data compressée** — VirtualSize 3.6 Mo, RawSize 152 Ko (ratio 24:1)
7. **Aléatoire minimal** — rand() utilisé uniquement pour variations textures et déviation des tirs
8. **SEH partout** — les fonctions critiques sont protégées par Structured Exception Handling
