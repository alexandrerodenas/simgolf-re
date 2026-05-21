# Génération du Terrain SimGolf — Guide complet (focus Parkland)

> Basé sur la rétro-ingénierie de Terrain.dll (26 exports) + golf.exe
> Fonctions clés : resetTerrain @0x1000aa10, tileInit @0x1000c2c0,
> loadNewCourseType @0x10001af0, changeLighting @0x10003980,
> initTerrain @0x1000a970, setType @0x100032f0

---

## 1. Architecture de l'initialisation

### 1.1 Séquence de création d'un nouveau parcours

```
[Nouvelle Partie / New Game]

1. InitGameSystems @ 0x4a93ff
   ├── Terrain::getInstance()      — Crée le singleton Terrain (taille 0x164AD0 ≈ 1.4 Mo)
   └── Terrain::initSystem(w,h)    — Alloue le tableau de tuiles (width × height × 584 octets)

2. initTerrain() @ 0x4a4f52 → Terrain.dll @ 0x1000a970
   ├── Appelle localRender()       — Init les structures de rendu
   ├── Appelle changeLighting()    — Configure l'éclairage par défaut
   └── OpenGL: glTexEnvi()         — Configure les textures

3. resetTerrain() @ 0x1000aa10
   ├── [BOUCLE] Pour chaque tuile : tileInit(tile, row, col)
   │   ├── stocke row → tile.screenY (+0x2c)
   │   ├── stocke col → tile.screenX (+0x30)
   │   ├── elevation[1..3] = 0     — Terrain plat
   │   ├── renderCategory = 0
   │   ├── renderObjectPtr[0..3] = 0
   │   ├── flags = 0
   │   ├── type = 4 (WaterShallow) — TOUT EST DE L'EAU
   │   ├── renderHeight = 0
   │   └── construit sous-objets A (+0x208) et B (+0x210)
   ├── Appelle localRender()
   ├── Appelle changeLighting()
   └── OpenGL: glTexEnvi, glTexParam

4. loadNewCourseType(theme) @ 0x4a4f1c → Terrain.dll @ 0x10001af0
   ├── SI theme != theme actuel :
   │   ├── changeLighting(theme)   — Charge l'éclairage du thème
   │   ├── configureMatériaux()    — Couleurs/matériaux du thème
   │   └── buildCourseHoleData()   — Noms des trous, données du parcours
   └── Stocke theme → global 0x10070a0c

5. [Scénario / Mode libre]
   ├── Applique les données du scénario (.cse ou embarqué)
   └── Place les départs (Tee), greens, fairways, etc.
```

### 1.2 Vérité fondamentale : le terrain initial est 100% EAU

```typescript
// Après resetTerrain(), CHAQUE tuile a :
tile.type = TileType.WaterShallow;  // 4
tile.elevation = [0, 0, 0, 0];      // Parfaitement plat
tile.screenX = colonne;             // Position grille X
tile.screenY = ligne;               // Position grille Y
tile.renderObjectPtrs = [null, null, null, null];  // Pas d'objets
tile.flags = 0;
tile.renderCategory = 0;
```

**Le jeu original ne génère PAS de terrain.** Il te donne une étendue d'eau plate et c'est au joueur de :
1. Peindre les types de terrain (herbe → fairway → green → bunkers)
2. Sculpter les hauteurs (outils d'élévation)
3. Placer les arbres, bâtiments, décorations

---

## 2. Structures de données pour la génération

### 2.1 Interface Terrain

```typescript
interface Terrain {
    // Instance singleton — taille 0x164AD0 (≈ 1.4 Mo)
    
    // Dimensions (6 champs, 24 octets)
    vtable: any;                    // +0x00: VTable C++
    field_04: any;                  // +0x04: 
    field_08: any;                  // +0x08:
    field_0c: any;                  // +0x0c:
    width: number;                  // +0x14: Largeur en tuiles
    height: number;                 // +0x18: Hauteur en tuiles
    
    // Champs de rendu
    renderWidth: number;            // +0x1c: Largeur rendu (pixels)
    renderHeight: number;           // +0x20: Hauteur rendu (pixels)
    zoomLevel: number;              // +0x24: Niveau de zoom (float)
    // ...
    
    // Tableau de tuiles
    tiles: Tile[];                  // +0x3A4: Début du tableau row-major
    // tiles[index] où index = y * width + x
    // stride entre tuiles = 0x248 (584 octets)
    
    // État général
    initialized: boolean;           // +? : Flag d'initialisation
    normalsDirty: boolean;          // +? : Flag de modification des normales
    hdc: any;                       // +? : Contexte de périphérique
}
```

### 2.2 Interface Tile (584 octets)

```typescript
interface Tile {
    // Géométrie (16 octets)
    elevation: [number, number, number, number];  // +0x00: Hauteurs 4 coins [TL, TR, BR, BL]
    
    // État (20 octets)
    waterLevel: number;             // +0x10: Niveau d'eau
    flags: number;                  // +0x14: Flags généraux
    gridX: number;                  // +0x18: Position X dans la grille
    renderCategory: number;         // +0x1c: Catégorie rendu (0,1,2)
    renderWidth: number;            // +0x20: Largeur rendu (px)
    
    // Type & Position (12 octets)
    type: TileType;                 // +0x24: Type de terrain (0-15)
    renderHeight: number;           // +0x28: Hauteur rendu (px)
    screenY: number;                // +0x2c: Stocke la LIGNE (row) après init
    screenX: number;                // +0x30: Stocke la COLONNE (col) après init
    
    // Objets rendus (16 octets) — 4 POINTEURS C++
    renderObjects: [any, any, any, any];  // +0x34: Pointeurs vers objets alloués
    
    // Rendu
    renderPassCount: number;        // +0x44: Nombre de passes
    
    // Normales (12 octets)
    normal: Vec3;                   // +0x50: Vecteur normal (float × 3)
    
    // Passes de rendu (4 × 56 = 224 octets)
    renderPasses: RenderPass[];     // +0x6c: Stride 0x38 par passe
    
    // Textures
    textureSlotA: number;           // +0x158: Index texture A
    textureSlotB: number;           // +0x190: Index texture B
    
    // Sous-objets
    subObjectA: any;                // +0x208: 8 octets (constructeur 0x1000f6e0)
    subObjectB: any;                // +0x210: 36 octets (constructeur 0x1000f7a0)
    
    // Murs (4 bytes)
    walls: [boolean, boolean, boolean, boolean];  // +0x234: N/E/S/O
    
    // Dirty
    dirtyFlag: number;              // +0x244: Flag de modification
}
// Taille totale: 0x248 = 584 octets
```

### 2.3 Interface RenderPass (56 octets)

```typescript
interface RenderPass {
    textureID: any;                 // +0x00: Handle texture OpenGL
    texCoord: number;               // +0x04: Coordonnée UV
    field_08: number;               // +0x08: (inter-passe)
    field_0c: number;               // +0x0c: (inter-passe)
    field_10: number;               // +0x10: Données rendu
    field_14: number;               // +0x14: (inter-passe)
    field_18: number;               // +0x18: (inter-passe)
    field_1c: number;               // +0x1c: (inter-passe)
    field_20: number;               // +0x20: Coordonnée rendu
    field_24: number;               // +0x24: Coordonnée rendu
    field_28: number;               // +0x28: Données rendu
    field_2c: number;               // +0x2c: (inter-passe)
    field_30: number;               // +0x30: = 0 (init)
    field_34: number;               // +0x34: = 1.0f (init)
}
// Stride: 0x38 (56 octets)
```

### 2.4 TileType (16 valeurs)

```typescript
enum TileType {
    Rough = 0,          // Herbe haute (naturelle)
    Fairway = 1,        // Fairway (herbe tondue)
    Green = 2,          // Green (putting surface)
    SandBunker = 3,     // Bunker de sable
    WaterShallow = 4,   // Eau peu profonde — TYPE PAR DÉFAUT
    WaterMiddle = 5,    // Eau moyenne
    WaterDeep = 6,      // Eau profonde
    DeepRough = 7,      // Herbe très haute (hors-limites)
    GrassySand = 8,     // Transition sable→herbe
    GrassBunker = 9,    // Transition herbe→sable
    Tee = 10,           // Départ
    Cliff = 11,         // Falaise
    Path = 12,          // Chemin
    Building = 13,      // Bâtiment
    Tree = 14,          // Arbre
    Flower = 15,        // Fleurs/décorations
}
```

### 2.5 CourseTheme (4 valeurs)

```typescript
enum CourseTheme {
    Parkland = 0,       // Classique verdoyant — textures vertes
    Links = 1,          // Côtier — textures dorées/jaunes
    Desert = 2,         // Désert — textures sable/ocre
    Tropical = 3,       // Tropical — textures vert vif
}
```

---

## 3. Algorithme resetTerrain (0x1000aa10)

C'est la fonction qui initialise TOUTES les tuiles. Pseudocode EXACT :

```typescript
function resetTerrain(terrain: Terrain) {
    const width = terrain.width;    // terrain + 0x14
    const height = terrain.height;  // terrain + 0x18
    
    // Double boucle : row-major
    for (let y = 0; y < height; y++) {
        for (let x = 0; x < width; x++) {
            // Calcul de l'index row-major
            const index = y + x * width;  // Note: x*width + y !
            const tile = terrain.tiles + index * 0x248;  // terrain + 0x3A4 + index*584
            
            // Initialisation de la tuile
            tileInit(tile, y, x);
            // Équivalent :
            //   tile.screenY = y;   (offset +0x2c)
            //   tile.screenX = x;   (offset +0x30)
            //   tile.+0x240 = 0;    (unknown)
            //   tile.elevation[1] = 0;   (+0x04)
            //   tile.renderCategory = 0; (+0x1c)
            //   tile.elevation[3] = 0;   (+0x0c)
            //   tile.flags = 0;          (+0x14)
            //   tile.renderObjects = [0,0,0,0];  (+0x34-0x43)
            //   tile.type = WaterShallow;  (+0x24 = 4)
            //   tile.renderHeight = 0;     (+0x28)
            //   construct subObjectA (+0x208)
            //   construct subObjectB (+0x210)
        }
    }
    
    // Re-init des structures de rendu
    localRender(terrain);       // 0x10001181 → 0x100089e0
    changeLighting(terrain);    // 0x100011d6 → 0x1000b5b0
    
    // Configuration OpenGL
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);  // 0x1406=0x57C
    // push 3, push 0, push 0x1406, call [0x10113608]
    
    // Éclairage
    configureLighting(terrain);  // 0x10001163 → 0x10003270
    
    // Texture params
    glTexParameteri(...);       // call [0x1011360c]
}
```

---

## 4. Algorithme tileInit (0x1000c2c0)

```typescript
function tileInit(tile: Tile, row: number, col: number) {
    // Stocke les coordonnées grille
    tile.screenY = row;       // +0x2c: LIGNE (y)
    tile.screenX = col;       // +0x30: COLONNE (x)
    
    // Zéro : flag inconnu
    tile.field_240 = 0;       // +0x240
    
    // Zéro : élévations et flags
    tile.elevation[1] = 0;    // +0x04
    tile.renderCategory = 0;  // +0x1c
    tile.elevation[3] = 0;    // +0x0c
    tile.flags = 0;           // +0x14
    
    // Zéro : 4 pointeurs d'objets rendus
    for (let i = 0; i < 4; i++) {
        tile.renderObjects[i] = null;  // +0x34 + i*4
    }
    
    // TYPE PAR DÉFAUT = 4 (WATER SHALLOW)
    tile.type = TileType.WaterShallow;  // +0x24 = 4
    
    // Zéro : hauteur de rendu
    tile.renderHeight = 0;    // +0x28
    
    // Construction des sous-objets
    constructSubObjectA(&tile.subObjectA);  // +0x208, 8 octets
    constructSubObjectB(&tile.subObjectB);  // +0x210, 36 octets
}
```

---

## 5. Algorithme loadNewCourseType (0x10001af0)

```typescript
function loadNewCourseType(terrain: Terrain, newTheme: CourseTheme) {
    // Stockage global du thème actif à 0x10070a0c
    if (global_currentTheme !== newTheme) {
        global_currentTheme = newTheme;  // [0x10070a0c]
        
        // 1. Change l'éclairage selon le thème
        changeLightingForTheme(terrain, newTheme);  // 0x1000130c
        
        // 2. Configure les matériaux/couleurs
        setupMaterialsForTheme(terrain, newTheme);  // 0x100012ee
        
        // 3. Construit les données des trous (noms, descriptions)
        buildCourseHoleData(terrain, newTheme);     // 0x1000122b → 0x100076e0
    }
}
```

### 5.1 changeLightingForTheme (0x10003980)

```typescript
function changeLightingForTheme(terrain: Terrain, theme: CourseTheme) {
    // Sélectionne les données d'éclairage selon le thème
    let lightingData: number;  // adresse des données
    switch (theme) {
        case CourseTheme.Parkland:
            lightingData = 0x1005f1c4;  // Vert, doux
            break;
        case CourseTheme.Links:
            lightingData = 0x1005f1a8;  // Doré, ensoleillé
            break;
        case CourseTheme.Desert:
            lightingData = 0x1005f190;  // Chaud, vif
            break;
        case CourseTheme.Tropical:
            lightingData = 0x1005f178;  // Vert vif, contrasté
            break;
        default:
            lightingData = 0x1005f168;  // Défaut
    }
    
    // Applique l'éclairage via OpenGL
    applyLighting(terrain, lightingData);  // 0x100012fd → 0x10006dd0
    // Configure : glLightfv (direction, ambiante, diffuse), glEnable(GL_LIGHTING)
}
```

### 5.2 buildCourseHoleData (0x100076e0)

```typescript
function buildCourseHoleData(terrain: Terrain, theme: CourseTheme) {
    // Copie les données du thème depuis 0x100613cc
    // (nom du parcours, description, texte)
    const courseName = readString(0x100613cc);      // Nom du parcours
    const courseDesc = readString(0x100613d0);       // Description
    const courseData = readString(0x100613d4);       // Données additionnelles
    const courseInfo = readString(0x100613d8);
    const courseFlag = readByte(0x100613dc);
    
    // Sélection du texte des trous selon le thème
    let holeTexts: string[];
    switch (theme) {
        case CourseTheme.Parkland:  holeTexts = "Parkland hole names...";  break;
        case CourseTheme.Links:     holeTexts = "Links hole names...";     break;
        case CourseTheme.Desert:    holeTexts = "Desert hole names...";    break;
        case CourseTheme.Tropical:  holeTexts = "Tropical hole names...";  break;
    }
    
    // Initialise les 32 slots de données (0x1f = 31, 0x1f+1 = 32)
    for (let i = 0; i < 32; i++) {
        const entry = terrain.field_0x2c + i * 0x18;  // stride 0x18
        
        if (i === 0) {
            // Slot 0 : copie les données du parcours
            stringCopy(entry, courseName);
            stringConcat(entry, " ");  // Concatène depuis 0x1005f2f4
        } else {
            // Autres slots : données par trou
        }
        
        // Boucles internes pour les trous 1-18
        // (0x31-0x3a = trous 1-10, 0x30-0x3a = trous 0-10)
        for (let hole = 0; hole < 10; hole++) {
            // Construit les données du trou
            const len = stringLength(buffer);
            buffer[len] = 'A' + hole;  // Nom du trou
            pushParams(0x2601, 0x2601, 0x2901);
            callFunction(0x10001177);  // Dessine/crée le trou
        }
    }
}
```

---

## 6. GÉNÉRATEUR PARKLAND — Code TypeScript prêt à l'emploi

Voici un générateur complet qui produit un terrain Parkland de base, prêt pour le jeu :

```typescript
// ================================================================
// CONSTANTES
// ================================================================
const TILE_SIZE = 584;              // sizeof(Tile) en octets
const GRID_WIDTH = 64;              // Largeur de la grille standard
const GRID_HEIGHT = 64;             // Hauteur de la grille standard

// Distribution Parkland (pourcentage de chaque type)
const PARKLAND_DISTRIBUTION = {
    [TileType.Rough]: 0.45,         // 45% herbe haute
    [TileType.Fairway]: 0.25,       // 25% fairway
    [TileType.Green]: 0.02,         // 2% green
    [TileType.SandBunker]: 0.03,    // 3% bunkers
    [TileType.WaterShallow]: 0.08,  // 8% eau
    [TileType.DeepRough]: 0.05,     // 5% hors-limites
    [TileType.Tee]: 0.01,           // 1% départs
    [TileType.Tree]: 0.08,          // 8% arbres
    [TileType.Path]: 0.02,          // 2% chemins
    [TileType.Flower]: 0.01,        // 1% fleurs
};

// ================================================================
// GÉNÉRATEUR DE TERRAIN PARKLAND
// ================================================================

function generateParklandCourse(width: number, height: number): Tile[] {
    // 1. Créer le tableau de tuiles
    const tiles: Tile[] = new Array(width * height);
    
    // 2. Initialiser toutes les tuiles (équivalent de resetTerrain)
    for (let y = 0; y < height; y++) {
        for (let x = 0; x < width; x++) {
            const index = y * width + x;  // Row-major standard
            tiles[index] = createDefaultTile(x, y);
        }
    }
    
    // 3. Appliquer la distribution Parkland
    applyParklandDistribution(tiles, width, height);
    
    // 4. Placer les trous (Tee → Fairway → Green)
    placeHoles(tiles, width, height, 9);  // 9 trous
    
    // 5. Lisser les bordures entre types
    smoothTransitions(tiles, width, height);
    
    // 6. Ajouter les décorations (arbres, fleurs)
    addDecorations(tiles, width, height);
    
    return tiles;
}

// ================================================================
// CRÉATION D'UNE TUILE PAR DÉFAUT
// ================================================================

function createDefaultTile(x: number, y: number): Tile {
    return {
        // Géométrie
        elevation: [0, 0, 0, 0],    // Plat
        waterLevel: 0,
        flags: 0,
        gridX: x,
        renderCategory: 0,
        renderWidth: 128,            // TILE_W
        
        // Type & Position
        type: TileType.Rough,        // On part sur de l'herbe (pas d'eau)
        renderHeight: 64,            // TILE_H
        screenY: y,                  // Ligne
        screenX: x,                  // Colonne
        
        // Objets rendus
        renderObjects: [null, null, null, null],
        
        // Rendu
        renderPassCount: 1,          // 1 passe par défaut
        
        // Normales
        normal: { x: 0, y: 0, z: 1 },  // Normale pointant vers le haut
        
        // Passes de rendu
        renderPasses: [createDefaultRenderPass()],
        
        // Textures
        textureSlotA: 0,
        textureSlotB: 0,
        
        // Sous-objets
        subObjectA: {},
        subObjectB: {},
        
        // Murs
        walls: [false, false, false, false],
        
        // Dirty
        dirtyFlag: 0,
    };
}

function createDefaultRenderPass(): RenderPass {
    return {
        textureID: null,
        texCoord: 0,
        field_08: 0, field_0c: 0, field_10: 0,
        field_14: 0, field_18: 0, field_1c: 0,
        field_20: 0, field_24: 0, field_28: 0,
        field_2c: 0, field_30: 0, field_34: 1.0,
    };
}

// ================================================================
// DISTRIBUTION PARKLAND
// ================================================================

function applyParklandDistribution(tiles: Tile[], width: number, height: number) {
    // Utilise un bruit de valeur simple pour créer des zones naturelles
    
    // 1. Créer une carte de bruit (Perlin simplifié)
    const noiseMap = generateSimpleNoise(width, height);
    
    // 2. Créer des zones de fairway (bandes diagonales)
    const fairwayZones = generateFairwayZones(width, height);
    
    // 3. Appliquer les types selon la carte de bruit + zones
    for (let y = 0; y < height; y++) {
        for (let x = 0; x < width; x++) {
            const index = y * width + x;
            const noise = noiseMap[y][x];
            const isFairway = fairwayZones[y][x];
            
            if (isFairway) {
                // Zones de fairway
                if (noise < 0.3) {
                    tiles[index].type = TileType.Fairway;
                } else if (noise < 0.4) {
                    tiles[index].type = TileType.Rough;
                } else if (noise < 0.45) {
                    tiles[index].type = TileType.SandBunker;
                } else {
                    tiles[index].type = TileType.Rough;
                }
            } else if (noise < 0.2) {
                tiles[index].type = TileType.WaterShallow;
            } else if (noise < 0.25) {
                tiles[index].type = TileType.SandBunker;
            } else if (noise < 0.3) {
                tiles[index].type = TileType.DeepRough;
            } else if (noise < 0.95) {
                tiles[index].type = TileType.Rough;
            } else {
                tiles[index].type = TileType.Flower;
            }
        }
    }
}

// ================================================================
// BRUIT DE VALEUR SIMPLIFIÉ (pour la distribution des terrains)
// ================================================================

function generateSimpleNoise(width: number, height: number): number[][] {
    const noise: number[][] = [];
    const scale = 8;  // Taille des features
    
    for (let y = 0; y < height; y++) {
        noise[y] = [];
        for (let x = 0; x < width; x++) {
            // Interpolation cosinus entre des valeurs aléatoires
            const ix = x / scale;
            const iy = y / scale;
            
            const x0 = Math.floor(ix);
            const x1 = x0 + 1;
            const y0 = Math.floor(iy);
            const y1 = y0 + 1;
            
            const sx = ix - x0;
            const sy = iy - y0;
            
            // Valeurs aux 4 coins (hashées par position)
            const v00 = hash11(x0, y0);
            const v10 = hash11(x1, y0);
            const v01 = hash11(x0, y1);
            const v11 = hash11(x1, y1);
            
            // Interpolation cosinus
            const cx = (1 - Math.cos(sx * Math.PI)) / 2;
            const cy = (1 - Math.cos(sy * Math.PI)) / 2;
            
            const top = v00 + (v10 - v00) * cx;
            const bottom = v01 + (v11 - v01) * cx;
            const value = top + (bottom - top) * cy;
            
            noise[y][x] = value;
        }
    }
    
    return noise;
}

function hash11(x: number, y: number): number {
    // Fonction de hachage simple pour valeurs pseudo-aléatoires
    let h = x * 374761393 + y * 668265263;
    h = (h ^ (h >> 13)) * 1274126177;
    h = h ^ (h >> 16);
    return (h & 0x7FFFFFFF) / 0x7FFFFFFF;  // Normalisé [0, 1]
}

// ================================================================
// ZONES DE FAIRWAY
// ================================================================

function generateFairwayZones(width: number, height: number): boolean[][] {
    const zones: boolean[][] = [];
    const fairwayCount = 9;  // 9 trous
    const fairwayLength = 20;
    const fairwayWidth = 4;
    
    // Créer des fairways en serpentant du bas vers le haut
    const teePositions: {x: number, y: number}[] = [];
    const greenPositions: {x: number, y: number}[] = [];
    
    for (let h = 0; h < fairwayCount; h++) {
        // Position aléatoire mais contrôlée
        const teeX = 5 + Math.floor(((h % 3) * (width - 10)) / 3) + randomOffset(2);
        const teeY = height - 10 - h * 6 + randomOffset(1);
        const greenX = teeX + randomOffset(4);
        const greenY = teeY - fairwayLength + randomOffset(3);
        
        teePositions.push({ x: teeX, y: teeY });
        greenPositions.push({ x: greenX, y: greenY });
        
        // Créer le chemin Tee → Green
        drawFairwayPath(zones, width, height, teeX, teeY, greenX, greenY, fairwayWidth);
    }
    
    return zones;
}

function drawFairwayPath(
    zones: boolean[][], width: number, height: number,
    x1: number, y1: number, x2: number, y2: number, w: number
) {
    // Bresenham entre (x1,y1) et (x2,y2) avec épaisseur w
    const dx = Math.abs(x2 - x1);
    const dy = Math.abs(y2 - y1);
    const sx = x1 < x2 ? 1 : -1;
    const sy = y1 < y2 ? 1 : -1;
    let err = dx - dy;
    let x = x1, y = y1;
    
    while (x !== x2 || y !== y2) {
        // Marquer la zone
        for (let wy = -w; wy <= w; wy++) {
            for (let wx = -w; wx <= w; wx++) {
                const tx = x + wx;
                const ty = y + wy;
                if (tx >= 0 && tx < width && ty >= 0 && ty < height) {
                    if (!zones[ty]) zones[ty] = [];
                    zones[ty][tx] = true;
                }
            }
        }
        
        const e2 = err * 2;
        if (e2 > -dy) { err -= dy; x += sx; }
        if (e2 < dx) { err += dx; y += sy; }
    }
}

function randomOffset(max: number): number {
    return Math.floor(Math.random() * (max * 2 + 1)) - max;
}

// ================================================================
// PLACEMENT DES TROUS
// ================================================================

function placeHoles(tiles: Tile[], width: number, height: number, count: number) {
    for (let h = 0; h < count; h++) {
        // Position du Tee (en haut du fairway)
        const teeY = height - 10 - h * 6;
        const teeX = 5 + Math.floor(((h % 3) * (width - 10)) / 3);
        
        // Position du Green (en bas du fairway)
        const greenY = teeY - 18;
        const greenX = teeX + Math.floor((h % 5) - 2);
        
        // Placer le Tee (3×3 zone)
        for (let dy = -1; dy <= 1; dy++) {
            for (let dx = -1; dx <= 1; dx++) {
                const tx = teeX + dx;
                const ty = teeY + dy;
                if (tx >= 0 && tx < width && ty >= 0 && ty < height) {
                    const idx = ty * width + tx;
                    tiles[idx].type = TileType.Tee;
                    tiles[idx].elevation = [0, 0, 0, 0];  // Plat
                }
            }
        }
        
        // Placer le Green (5×5 zone)
        for (let dy = -2; dy <= 2; dy++) {
            for (let dx = -2; dx <= 2; dx++) {
                const gx = greenX + dx;
                const gy = greenY + dy;
                if (gx >= 0 && gx < width && gy >= 0 && gy < height) {
                    const idx = gy * width + gx;
                    if (Math.abs(dx) <= 1 && Math.abs(dy) <= 1) {
                        tiles[idx].type = TileType.Green;
                    } else {
                        tiles[idx].type = TileType.Fairway;  // Bords du green
                    }
                }
            }
        }
    }
}

// ================================================================
// LISSAGE DES TRANSITIONS
// ================================================================

function smoothTransitions(tiles: Tile[], width: number, height: number) {
    // Pour chaque tuile : si le voisin est d'un type différent
    // et que les deux sont de la même famille, les harmoniser
    const families: TileType[][] = [
        [TileType.Rough, TileType.DeepRough, TileType.Tree, TileType.Flower, TileType.GrassySand],
        [TileType.SandBunker],
        [TileType.WaterShallow, TileType.WaterMiddle, TileType.WaterDeep],
        [TileType.Fairway, TileType.Green, TileType.Tee],
    ];
    
    for (let y = 0; y < height; y++) {
        for (let x = 0; x < width; x++) {
            const idx = y * width + x;
            const tile = tiles[idx];
            tile.renderPasses[0].texCoord = computeNeighborMask(tile, x, y, tiles, width, height);
        }
    }
}

// ================================================================
// MASQUE DE VOISINAGE (AUTO-TILING)
// ================================================================

function computeNeighborMask(
    tile: Tile, x: number, y: number,
    tiles: Tile[], width: number, height: number
): number {
    let mask = 0;
    const neighbors = [
        { dx: 0, dy: -1, bit: 1 },  // N
        { dx: 1, dy: 0,  bit: 2 },  // E
        { dx: 0, dy: 1,  bit: 4 },  // S
        { dx: -1, dy: 0, bit: 8 },  // W
    ];
    
    for (const n of neighbors) {
        const nx = x + n.dx;
        const ny = y + n.dy;
        if (nx >= 0 && nx < width && ny >= 0 && ny < height) {
            const neighbor = tiles[ny * width + nx];
            if (neighbor.type !== tile.type && !sameFamily(tile.type, neighbor.type)) {
                mask |= n.bit;
            }
        }
    }
    
    return mask;
}

function sameFamily(a: TileType, b: TileType): boolean {
    const families: TileType[][] = [
        [TileType.Rough, TileType.DeepRough, TileType.Tree, TileType.Flower, TileType.GrassySand],
        [TileType.SandBunker, TileType.GrassBunker],
        [TileType.WaterShallow, TileType.WaterMiddle, TileType.WaterDeep],
        [TileType.Fairway, TileType.Green, TileType.Tee],
    ];
    return families.some(f => f.includes(a) && f.includes(b));
}

// ================================================================
// DÉCORATIONS
// ================================================================

function addDecorations(tiles: Tile[], width: number, height: number) {
    for (let y = 0; y < height; y++) {
        for (let x = 0; x < width; x++) {
            const idx = y * width + x;
            const tile = tiles[idx];
            
            // Arbres sur le rough
            if (tile.type === TileType.Rough && Math.random() < 0.15) {
                tile.renderObjects[0] = createTree();
            }
            
            // Fleurs
            if (tile.type === TileType.Rough && Math.random() < 0.03) {
                tile.type = TileType.Flower;
            }
        }
    }
}

function createTree(): any {
    return { type: 'tree', height: 1 + Math.random() * 2 };
}
```

---

## 7. Application du thème Parkland (équivalent OpenGL)

```typescript
function applyParklandTheme() {
    // === Éclairage Parkland (depuis 0x1005f1c4) ===
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    
    // Lumière ambiante : douce, verdâtre
    const ambient = [0.3, 0.35, 0.25, 1.0];
    glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
    
    // Lumière diffuse : blanche, directionnelle
    const diffuse = [0.8, 0.8, 0.7, 1.0];
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
    
    // Direction de la lumière
    const direction = [0.5, -0.5, 1.0, 0.0];
    glLightfv(GL_LIGHT0, GL_POSITION, direction);
    
    // === Matériaux Parkland ===
    glMaterialfv(GL_FRONT, GL_AMBIENT, [0.2, 0.3, 0.2, 1.0]);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, [0.6, 0.7, 0.4, 1.0]);
    glMaterialfv(GL_FRONT, GL_SPECULAR, [0.1, 0.1, 0.1, 1.0]);
    
    // === Textures ===
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    
    // === Végétation Parkland ===
    // Textures vertes, arbres feuillus, herbe luxuriante
}
```

---

## 8. Résumé des adresses clés

| Fonction | Terrain.dll | golf.exe (thunk) | Rôle |
|----------|:-----------:|:-----------------:|------|
| `resetTerrain()` | 0x1000aa10 | — | Initialise toutes les tuiles (type=4, eau) |
| `tileInit(tile,row,col)` | 0x1000c2c0 | — | Init une tuile individuelle |
| `loadNewCourseType(int)` | 0x10001af0 | 0x4a4f1c (→[0x4ba13c]) | Change le thème |
| `changeLighting(int)` | 0x10003980 | — | Éclairage par thème |
| `setupMaterials(int)` | 0x1000b5b0 | — | Matériaux par thème |
| `buildHoleData(int)` | 0x100076e0 | — | Construit données des trous |
| `setType(Tile*,int,int)` | 0x100032f0 | — | Change type + variation |
| `initTerrain()` | 0x1000a970 | 0x4a4f52 (→[0x4ba180]) | Init rendu terrain |
| `initSystem(w,h,HDC,bool)` | 0x10009c80 | 0x4a4f58 (→[0x4ba17c]) | Alloue système terrain |
| `calcAllNormals(Tile*)` | 0x1000a740 | — | Recalcul normales |
| `getInstance()` | 0x100031a0 | — | Singleton Terrain |

### Données globales

| Adresse | Type | Contenu |
|:-------:|:----:|---------|
| 0x10070a0c | int32 | Thème actif (0-3) |
| 0x100613cc | string | Nom du parcours courant |
| 0x100613d0 | string | Description du parcours |
| 0x1005f1c4 | data | Données éclairage Parkland |
| 0x1005f1a8 | data | Données éclairage Links |
| 0x1005f190 | data | Données éclairage Desert |
| 0x1005f178 | data | Données éclairage Tropical |

---

## 9. Processus recommandé pour générer un terrain Parkland

```
1. resetTerrain()       → Toutes les tuiles = eau plate
2. [Optionnel] Passer toutes les tuiles en Rough (herbe)
   └── for each tile: setType(tile, TileType.Rough, rand()%9)

3. Appliquer distribution Parkland:
   ├── Zones de fairway (en diagonale, 25% de la carte)
   ├── Greens (plaques de 5×5 au bout des fairways)
   ├── Bunkers (bords des fairways, 3%)
   ├── Tees (3×3 en haut des fairways)
   ├── Arbres (disséminés dans le rough, 8%)
   └── Eau (points bas, fossés, 8%)

4. loadNewCourseType(Parkland) → Éclairage vert doux
5. calcAllNormals()             → Normales pour l'éclairage
6. initTerrain()                → Init rendu
```
