/**
 * web_port/view/IsometricRenderer.ts
 *
 * Moteur de rendu isométrique — portage de Terrain::render().
 * Version avec textures réelles du jeu via TextureManager.
 *
 * Transition de paradigme :
 * - JGL (OpenGL-like) → Canvas 2D / PixiJS
 * - Boucles de rendu synchrones → requestAnimationFrame
 * - Tuiles en mémoire contiguë → itération sur TerrainEngine
 * - Couleurs unies → Textures 64×64 avec variation procédurale
 * - Culling frustum → viewport-based culling
 */

import { TerrainEngine, TileData, TileType } from '../core/TerrainTileSystem';
import { TextureManager, CourseTheme, TerrainType } from './TextureManager';

/**
 * Mapping TileType → TerrainType (catégorie de texture)
 *
 * Chaque type de terrain du jeu correspond à une ou plusieurs
 * catégories de textures dans le catalogue.
 */
const TILE_TEXTURE_MAP: Record<TileType, TerrainType | TerrainType[]> = {
    [TileType.Unknown]:   TerrainType.FAIRWAY,
    [TileType.Grass]:     TerrainType.FAIRWAY,
    [TileType.Fairway]:   TerrainType.FAIRWAY,
    [TileType.Green]:     TerrainType.GREEN,
    [TileType.Rough]:     TerrainType.ROUGH,
    [TileType.Sand]:      TerrainType.SAND_BUNKER,
    [TileType.Water]:     TerrainType.WATER_SHALLOW,
    [TileType.Path]:      TerrainType.PATH,
    [TileType.Building]:  TerrainType.BUILDING,
    [TileType.Tree]:      TerrainType.WOODS,
    [TileType.OutOfBounds]: TerrainType.DEEP_ROUGH,
    [TileType.Tee]:       TerrainType.TEE,
};

/**
 * Underlay — texture de fond utilisée quand la texture principale
 * n'est pas encore chargée. Donne un rendu visuel même sans cache.
 */
const TILE_COLORS: Record<TileType, string> = {
    [TileType.Unknown]:   '#888888',
    [TileType.Grass]:     '#4a7c3f',
    [TileType.Fairway]:   '#5a9e4f',
    [TileType.Green]:     '#7bc96f',
    [TileType.Rough]:     '#6b8e5a',
    [TileType.Sand]:      '#dbc49a',
    [TileType.Water]:     '#3b82f6',
    [TileType.Path]:      '#8b7355',
    [TileType.Building]:  '#666666',
    [TileType.Tree]:      '#2d5a27',
    [TileType.OutOfBounds]: '#555555',
    [TileType.Tee]:       '#d4d4d4',
};

/**
 * Options du rendu.
 */
export interface RenderOptions {
    viewportWidth: number;
    viewportHeight: number;
    tileWidth: number;
    tileHeight: number;
    zoom: number;
    /** Thème du parcours (définit la palette de textures) */
    theme: CourseTheme;
}

const DEFAULT_OPTIONS: RenderOptions = {
    viewportWidth: 800,
    viewportHeight: 600,
    tileWidth: 64,
    tileHeight: 32,
    zoom: 1.0,
    theme: CourseTheme.PARKLAND,
};

/**
 * IsometricRenderer — Rendu isométrique avec textures SimGolf.
 *
 * Utilise le TextureManager pour charger et afficher les vraies
 * textures du jeu (BMP 64×64 converties en PNG).
 *
 * Chaque tuile reçoit une variation de texture déterministe
 * basée sur sa position (seed = x * 31 + y).
 */
export class IsometricRenderer {
    private ctx: CanvasRenderingContext2D;
    private options: RenderOptions;
    private terrain: TerrainEngine;
    private textureManager: TextureManager;

    private focusX: number | null = null;
    private focusY: number | null = null;

    /** Cache local des images pré-chargées pour les tiles visibles */
    private textureCache: Map<string, HTMLImageElement | null> = new Map();

    /** Callback de fin de render (pour stats FPS) */
    onRenderComplete?: (stats: { tiles: number; textures: number }) => void;

    constructor(
        canvas: HTMLCanvasElement,
        terrain: TerrainEngine,
        textureManager: TextureManager,
        options?: Partial<RenderOptions>
    ) {
        this.ctx = canvas.getContext('2d')!;
        this.terrain = terrain;
        this.textureManager = textureManager;
        this.options = { ...DEFAULT_OPTIONS, ...options };
    }

    setFocus(x: number | null, y: number | null): void {
        this.focusX = x;
        this.focusY = y;
    }

    setTheme(theme: CourseTheme): void {
        this.options.theme = theme;
    }

    get theme(): CourseTheme {
        return this.options.theme;
    }

    // ============================================================
    // Rendu principal
    // ============================================================

    render(zoom: number = this.options.zoom): void {
        const ctx = this.ctx;
        const w = this.options.viewportWidth;
        const h = this.options.viewportHeight;

        // Clear
        ctx.clearRect(0, 0, w, h);

        // Fond de ciel (dégradé)
        const skyGrad = ctx.createLinearGradient(0, 0, 0, h);
        skyGrad.addColorStop(0, '#87CEEB');  // Bleu ciel
        skyGrad.addColorStop(1, '#E0F0FF');
        ctx.fillStyle = skyGrad;
        ctx.fillRect(0, 0, w, h);

        ctx.save();
        ctx.translate(w / 2, h / 4);
        ctx.scale(zoom, zoom);

        let tilesRendered = 0;
        let texturesLoaded = 0;

        if (this.focusX === null || this.focusY === null) {
            tilesRendered = this.renderFullGrid();
        } else {
            tilesRendered = this.renderFocused();
        }

        ctx.restore();

        // Stats
        this.onRenderComplete?.({
            tiles: tilesRendered,
            textures: this.textureCache.size,
        });
    }

    // ============================================================
    // Modes de rendu
    // ============================================================

    private renderFullGrid(): number {
        const terrain = this.terrain;
        const centerX = Math.floor(terrain.width / 2);
        const centerY = Math.floor(terrain.height / 2);
        const viewRadius = 31;
        let count = 0;

        for (let row = -viewRadius; row < viewRadius; row++) {
            for (let col = viewRadius - 1; col >= -viewRadius; col--) {
                const wx = centerX + col;
                const wy = centerY + row;
                if (!terrain.inBounds(wx, wy)) continue;
                const tile = terrain.tileAt(wx, wy);
                if (!tile) continue;

                this.drawTile(tile, wx, wy);
                count++;
            }
        }
        return count;
    }

    private renderFocused(): number {
        const terrain = this.terrain;
        const fx = this.focusX!;
        const fy = this.focusY!;
        const viewSize = 25;
        let count = 0;

        const boundsMinX = Math.max(0, fx - viewSize);
        const boundsMaxX = Math.min(terrain.width - 1, fx + viewSize);
        const boundsMinY = Math.max(0, fy - viewSize);
        const boundsMaxY = Math.min(terrain.height - 1, fy + viewSize);

        for (let row = boundsMinY; row <= boundsMaxY; row++) {
            for (let col = boundsMaxX; col >= boundsMinX; col--) {
                const tile = terrain.tileAt(col, row);
                if (!tile) continue;
                if (!this.isInViewport(col, row)) continue;

                this.drawTile(tile, col, row);
                count++;
            }
        }
        return count;
    }

    // ============================================================
    // Culling
    // ============================================================

    private isInViewport(wx: number, wy: number): boolean {
        const tileW = this.options.tileWidth;
        const tileH = this.options.tileHeight;
        const screenX = (wx - wy) * (tileW / 2);
        const screenY = (wx + wy) * (tileH / 2);
        const margin = tileW * 2;
        const halfW = this.options.viewportWidth / 2 + margin;
        const halfH = this.options.viewportHeight / 2 + margin;

        return (
            screenX >= -halfW && screenX <= halfW &&
            screenY >= -halfH && screenY <= halfH
        );
    }

    // ============================================================
    // Dessin d'une tuile avec texture
    // ============================================================

    private drawTile(tile: TileData, worldX: number, worldY: number): void {
        const ctx = this.ctx;
        const tileW = this.options.tileWidth;
        const tileH = this.options.tileHeight;
        const theme = this.options.theme;

        // Coordonnées isométriques
        const screenX = (worldX - worldY) * (tileW / 2);
        const screenY = (worldX + worldY) * (tileH / 2);

        // Élévation moyenne
        const avgElevation = (
            tile.elevation[0] + tile.elevation[1] +
            tile.elevation[2] + tile.elevation[3]
        ) / 4;
        const elevOffset = -avgElevation * 2;

        ctx.save();
        ctx.translate(screenX, screenY + elevOffset);

        // --- Face du dessus (top) — texturée ---
        // Seed déterministe pour la variation
        const textureSeed = worldX * 31 + worldY;

        // Récupère le chemin de la texture depuis le TextureManager
        const terrainType = this.tileTypeToTexture(tile.type);
        const textureUrl = this.textureManager.getTileTexture(theme, terrainType, textureSeed);

        // Dessine le losange isométrique avec la texture
        ctx.save();

        // Clip au losange
        ctx.beginPath();
        ctx.moveTo(0, -tileH / 2);       // Top
        ctx.lineTo(tileW / 2, 0);        // Right
        ctx.lineTo(0, tileH / 2);        // Bottom
        ctx.lineTo(-tileW / 2, 0);       // Left
        ctx.closePath();
        ctx.clip();

        // Dessine la texture (si disponible en cache)
        const img = this.textureCache.get(textureUrl);
        if (img) {
            // La texture 64×64 est redimensionnée dans le diamond
            ctx.drawImage(img, -tileW / 2, -tileH / 2, tileW, tileW);
        } else {
            // Fallback : couleur unie
            ctx.fillStyle = TILE_COLORS[tile.type] || '#888';
            ctx.fillRect(-tileW / 2, -tileH / 2, tileW, tileW);

            // Lance le chargement asynchrone (pour les frames futures)
            this.loadTextureAsync(textureUrl);
        }

        ctx.restore();

        // Bordure subtile pour lisibilité
        ctx.strokeStyle = 'rgba(0,0,0,0.15)';
        ctx.lineWidth = 0.5;
        ctx.beginPath();
        ctx.moveTo(0, -tileH / 2);
        ctx.lineTo(tileW / 2, 0);
        ctx.lineTo(0, tileH / 2);
        ctx.lineTo(-tileW / 2, 0);
        ctx.closePath();
        ctx.stroke();

        // --- Faces latérales (élévations) ---
        if (avgElevation > 1) {
            // Face droite
            ctx.fillStyle = 'rgba(0,0,0,0.25)';
            ctx.beginPath();
            ctx.moveTo(tileW / 2, 0);
            ctx.lineTo(tileW / 2, -avgElevation * 2);
            ctx.lineTo(0, tileH / 2 - avgElevation * 2);
            ctx.lineTo(0, tileH / 2);
            ctx.closePath();
            ctx.fill();

            // Face gauche
            ctx.fillStyle = 'rgba(0,0,0,0.12)';
            ctx.beginPath();
            ctx.moveTo(-tileW / 2, 0);
            ctx.lineTo(-tileW / 2, -avgElevation * 2);
            ctx.lineTo(0, tileH / 2 - avgElevation * 2);
            ctx.lineTo(0, tileH / 2);
            ctx.closePath();
            ctx.fill();
        }

        ctx.restore();
    }

    // ============================================================
    // Gestion des textures
    // ============================================================

    /**
     * Mappe un TileType vers une catégorie de texture.
     * Certains types peuvent avoir plusieurs sous-types (ex: eau peu profonde/profonde).
     */
    private tileTypeToTexture(type: TileType): TerrainType {
        const mapped = TILE_TEXTURE_MAP[type];
        if (Array.isArray(mapped)) {
            return mapped[Math.floor(Math.random() * mapped.length)];
        }
        return mapped;
    }

    /**
     * Charge une texture de manière asynchrone et la met en cache.
     */
    private async loadTextureAsync(url: string): Promise<void> {
        if (this.textureCache.has(url)) return;

        // Marque comme "en chargement" pour éviter les requêtes en double
        this.textureCache.set(url, null);

        try {
            const img = await this.textureManager.loadTexture(
                this.options.theme,
                'auto',
                url.split('/').pop() || ''
            );
            this.textureCache.set(url, img);
        } catch {
            // Keep null in cache — fallback color will be used
        }
    }

    /**
     * Précharge toutes les textures d'un thème dans le cache local.
     * Appelé une fois au démarrage ou au changement de thème.
     */
    async preloadTheme(theme: CourseTheme): Promise<void> {
        await this.textureManager.preloadTheme(theme);

        // Remplit le cache local avec le catalogue
        const tileTypes = Object.values(TileType).filter(v => typeof v === 'number') as TileType[];
        for (const type of tileTypes) {
            for (let i = 0; i < 9; i++) { // 9 variations max
                const terrainType = this.tileTypeToTexture(type);
                const url = this.textureManager.getTileTexture(theme, terrainType, i * 100);
                if (!this.textureCache.has(url)) {
                    this.textureCache.set(url, null);
                }
            }
        }
    }

    /**
     * Vide le cache de textures (utile au changement de thème).
     */
    clearCache(): void {
        this.textureCache.clear();
    }

    resize(width: number, height: number): void {
        this.options.viewportWidth = width;
        this.options.viewportHeight = height;
    }

    /**
     * Stats de rendu.
     */
    getStats(): { tilesPerFrame: number; cacheSize: number; theme: CourseTheme } {
        return {
            tilesPerFrame: 0,
            cacheSize: this.textureCache.size,
            theme: this.options.theme,
        };
    }
}
