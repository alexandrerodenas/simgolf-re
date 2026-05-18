/**
 * web_port/core/TerrainTileSystem.ts
 * 
 * Portage Web de Terrain::tileAt().
 * 
 * Transition de paradigme :
 * - C procédural → TypeScript orienté objet
 * - Pointeurs bruts → Map/Array typés
 * - sizeof(Tile) = 584 → structure allégée (seulement les données utiles)
 * - __thiscall → méthode de classe standard
 * - Tuiles contiguës en mémoire → Tableau 1D avec getters
 */

/**
 * Types de terrain dans SimGolf.
 * À compléter avec l'analyse de getType().
 */
export enum TileType {
    Unknown = 0,
    Grass = 1,
    Fairway = 2,
    Green = 3,
    Rough = 4,
    Sand = 5,       // Bunker
    Water = 6,      // Hazard
    Path = 7,
    Building = 8,
    Tree = 9,
    OutOfBounds = 10,
    Tee = 11,
    // …
}

/**
 * Coin d'une tuile (pour les élévations).
 */
export enum Corner {
    TopLeft = 0,
    TopRight = 1,
    BottomRight = 2,
    BottomLeft = 3,
}

/**
 * Représentation allégée d'une tuile.
 * 
 * Dans le jeu original, Tile fait 584 octets.
 * Ici on ne stocke que les données utiles pour la simulation.
 * Les données de rendu (normales, ombres, etc.) sont dans la couche View.
 */
/**
 * Interface TileData — Représentation allégée d'une tuile.
 *
 * Correspond à la structure C Tile (584 octets).
 * Dans l'original :
 *   elevation[4] @ offset 0x000  (int × 4)
 *   waterLevel   @ offset 0x010  (int)
 *   type         @ offset 0x024  (int)
 *   walls[4]     @ offset 0x234  (byte × 4, booléens)
 */
export interface TileData {
    type: TileType;

    /** Élévation des 4 coins (TopLeft, TopRight, BottomRight, BottomLeft) */
    elevation: [number, number, number, number];

    /** Mur/barrière sur chaque côté de la tuile */
    walls: [boolean, boolean, boolean, boolean];

    /** Présence d'un chemin sur la tuile */
    hasPath: boolean;

    /** Variation visuelle (texture) */
    variation: number;
}

/**
 * Moteur de terrain — accès aux tuiles en mémoire.
 * 
 * Design pattern : Singleton (comme l'original C++ qui a un getInstance()).
 * Complètement découplé du rendu (web_port/core).
 */
export class TerrainEngine {
    private static instance: TerrainEngine | null = null;
    
    private _width: number = 0;
    private _height: number = 0;
    private tiles: TileData[] = [];
    
    private constructor() {}
    
    /**
     * Singleton access (comme Terrain::getInstance() dans l'original).
     */
    static getInstance(): TerrainEngine {
        if (!TerrainEngine.instance) {
            TerrainEngine.instance = new TerrainEngine();
        }
        return TerrainEngine.instance;
    }
    
    /**
     * Initialise un nouveau terrain.
     */
    init(width: number, height: number): void {
        this._width = width;
        this._height = height;
        this.tiles = new Array(width * height);
        
        for (let i = 0; i < this.tiles.length; i++) {
            this.tiles[i] = {
                type: TileType.Grass,
                elevation: [0, 0, 0, 0],
                walls: [false, false, false, false],
                hasPath: false,
                variation: 0,
            };
        }
    }
    
    get width(): number { return this._width; }
    get height(): number { return this._height; }
    
    /**
     * tileAt(x, y) — Portage direct de Terrain::tileAt().
     * 
     * Complexité : O(1).
     * Retourne null si les coordonnées sont hors limites.
     */
    tileAt(x: number, y: number): TileData | null {
        // Bounds checking (identique à l'original)
        if (x < 0 || x >= this._width || y < 0 || y >= this._height) {
            return null;
        }
        
        // Index row-major : y * width + x
        const index = y * this._width + x;
        return this.tiles[index] ?? null;
    }
    
    /**
     * Raccourci type-safe qui lève une erreur si hors limites.
     * Utile quand on sait que les coordonnées sont valides.
     */
    /** Change le type d'une tuile aux coordonnées données */
    setTileType(x: number, y: number, type: TileType): void {
        const tile = this.tileAt(x, y);
        if (tile) tile.type = type;
    }

    tileAtOrThrow(x: number, y: number): TileData {
        const tile = this.tileAt(x, y);
        if (!tile) {
            throw new Error(`TerrainEngine: tile (${x}, ${y}) is out of bounds [0-${this._width-1}, 0-${this._height-1}]`);
        }
        return tile;
    }
    
    /**
     * Vérifie si des coordonnées sont dans les limites.
     */
    inBounds(x: number, y: number): boolean {
        return x >= 0 && x < this._width && y >= 0 && y < this._height;
    }
    
    /**
     * Itère sur toutes les tuiles.
     */
    /** Initialise un terrain aléatoire (pour le prototypage) */
    initRandom(): void {
        for (let y = 0; y < this._height; y++) {
            for (let x = 0; x < this._width; x++) {
                const idx = y * this._width + x;
                const types = [TileType.Grass, TileType.Fairway, TileType.Rough, TileType.Tree, TileType.Sand];
                this.tiles[idx] = {
                    type: types[Math.floor(Math.random() * types.length)],
                    elevation: [Math.floor(Math.random() * 5), Math.floor(Math.random() * 5),
                                Math.floor(Math.random() * 5), Math.floor(Math.random() * 5)],
                    walls: [false, false, false, false],
                    hasPath: false,
                    variation: Math.floor(Math.random() * 8),
                };
            }
        }
    }

    forEachTile(callback: (tile: TileData, x: number, y: number) => void): void {
        for (let y = 0; y < this._height; y++) {
            for (let x = 0; x < this._width; x++) {
                const tile = this.tiles[y * this._width + x];
                callback(tile, x, y);
            }
        }
    }
    
    /**
     * Sauvegarde/Restauration (sérialisation JSON).
     */
    toJSON(): object {
        return {
            width: this._width,
            height: this._height,
            tiles: this.tiles,
        };
    }
    
    static fromJSON(data: any): TerrainEngine {
        const engine = TerrainEngine.getInstance();
        engine._width = data.width;
        engine._height = data.height;
        engine.tiles = data.tiles;
        return engine;
    }
}
