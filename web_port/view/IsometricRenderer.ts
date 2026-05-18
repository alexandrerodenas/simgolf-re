/**
 * web_port/view/IsometricRenderer.ts
 *
 * Moteur de rendu isométrique — portage de Terrain::render().
 *
 * Transition de paradigme :
 * - JGL (OpenGL-like) → Canvas 2D / PixiJS
 * - Boucles de rendu synchrones → requestAnimationFrame
 * - Appels de matrices JGL → transformations Canvas/PixiJS
 * - Tuiles en mémoire contiguë → itération sur TerrainEngine
 * - Culling frustum → viewport-based culling
 */

import { TerrainEngine, TileData, TileType } from '../core/TerrainTileSystem';

/**
 * Options de configuration du rendu.
 */
export interface RenderOptions {
    /** Largeur du viewport en pixels */
    viewportWidth: number;
    /** Hauteur du viewport en pixels */
    viewportHeight: number;
    /** Taille d'une tuile en pixels (isométrique : largeur totale) */
    tileWidth: number;
    /** Taille d'une tuile en pixels (hauteur) */
    tileHeight: number;
    /** Zoom initial */
    zoom: number;
}

/**
 * Options par défaut.
 */
const DEFAULT_OPTIONS: RenderOptions = {
    viewportWidth: 800,
    viewportHeight: 600,
    tileWidth: 64,
    tileHeight: 32,
    zoom: 1.0,
};

/**
 * Générateur de couleurs par type de terrain.
 * À remplacer par des sprites/textures plus tard.
 */
function getTileColor(type: TileType): string {
    switch (type) {
        case TileType.Grass:    return '#4a7c3f';  // Vert herbe
        case TileType.Fairway:  return '#5a9e4f';  // Vert fairway
        case TileType.Green:    return '#7bc96f';  // Vert green
        case TileType.Sand:     return '#dbc49a';  // Beige sable
        case TileType.Water:    return '#3b82f6';  // Bleu eau
        case TileType.Path:     return '#8b7355';  // Marron chemin
        case TileType.Tee:      return '#f0f0f0';  // Blanc départ
        case TileType.Building: return '#666666';  // Gris bâtiment
        case TileType.Tree:     return '#2d5a27';  // Vert foncé arbre
        case TileType.Rough:    return '#6b8e5a';  // Vert rough
        default:                return '#888888';  // Gris inconnu
    }
}

/**
 * Renderer isométrique — portage de Terrain::render().
 *
 * Dans l'original C++ :
 *   - Pipeline JGL (pushMatrix → loadIdentity → ortho → translate → draw)
 *   - Deux modes : full render (carte entière, grille 31×31 fixe)
 *                  focus render (autour d'une tuile, avec culling)
 *   - Algorithme du peintre (tri back-to-front par boucles imbriquées)
 *
 * En TypeScript :
 *   - Canvas 2D avec transformations isométriques
 *   - RequestAnimationFrame pour le loop
 *   - Même logique de tri (painter's algorithm)
 */
export class IsometricRenderer {
    private ctx: CanvasRenderingContext2D;
    private options: RenderOptions;
    private terrain: TerrainEngine;

    /** Tuile focale courante (ou null = rendu complet) */
    private focusX: number | null = null;
    private focusY: number | null = null;

    constructor(
        canvas: HTMLCanvasElement,
        terrain: TerrainEngine,
        options?: Partial<RenderOptions>
    ) {
        this.ctx = canvas.getContext('2d')!;
        this.terrain = terrain;
        this.options = { ...DEFAULT_OPTIONS, ...options };
    }

    /**
     * Définit la tuile focale (centrage de la caméra).
     * Passez null pour le rendu complet de la carte.
     */
    setFocus(x: number | null, y: number | null): void {
        this.focusX = x;
        this.focusY = y;
    }

    /**
     * Point d'entrée du rendu — appelé à chaque frame.
     * Équivalent de Terrain::render() en C++.
     */
    render(zoom: number = this.options.zoom): void {
        const ctx = this.ctx;
        const w = this.options.viewportWidth;
        const h = this.options.viewportHeight;
        const tileW = this.options.tileWidth;
        const tileH = this.options.tileHeight;

        // Clear
        ctx.clearRect(0, 0, w, h);

        // Sauvegarde du contexte de transformation
        ctx.save();

        // Centrage isométrique : décale l'origine au centre du canvas
        ctx.translate(w / 2, h / 4);
        ctx.scale(zoom, zoom);

        // ---- MODE RENDU COMPLET ----
        if (this.focusX === null || this.focusY === null) {
            this.renderFullGrid(tileW, tileH);
        }
        // ---- MODE RENDU FOCALISÉ ----
        else {
            this.renderFocused(tileW, tileH);
        }

        ctx.restore();
    }

    /**
     * Rendu complet — grille fixe autour du centre.
     * Équivalent du premier bloc de Terrain::render() (quand focusTile == NULL).
     * 
     * Boucles : row de 10 à 40, col de 40 à 10.
     * L'ordre d'itération garantit le tri par profondeur (painter's algorithm).
     */
    private renderFullGrid(tileW: number, tileH: number): void {
        const terrain = this.terrain;
        const centerX = Math.floor(terrain.width / 2);
        const centerY = Math.floor(terrain.height / 2);
        const viewRadius = 31; // 31×31 tuiles visibles

        for (let row = -viewRadius; row < viewRadius; row++) {
            for (let col = viewRadius - 1; col >= -viewRadius; col--) {
                const wx = centerX + col;
                const wy = centerY + row;

                if (!terrain.inBounds(wx, wy)) continue;

                const tile = terrain.tileAt(wx, wy);
                if (!tile) continue;

                this.drawTile(tile, wx, wy, tileW, tileH);
            }
        }
    }

    /**
     * Rendu focalisé — centré sur une tuile spécifique avec culling.
     * Équivalent du second bloc de Terrain::render() (focusTile != NULL).
     * 
     * Calcule un viewport dynamique autour de la tuile focale
     * et applique un culling (visibilité + frustum).
     */
    private renderFocused(tileW: number, tileH: number): void {
        const terrain = this.terrain;
        const fx = this.focusX!;
        const fy = this.focusY!;
        const viewSize = 25; // Rayon de vue autour du focus

        // Bornes de l'écran en coordonnées tuiles
        const boundsMinX = Math.max(0, fx - viewSize);
        const boundsMaxX = Math.min(terrain.width - 1, fx + viewSize);
        const boundsMinY = Math.max(0, fy - viewSize);
        const boundsMaxY = Math.min(terrain.height - 1, fy + viewSize);

        // ---- Passe 1 : rendu rangée par rangée (haut→bas, droite→gauche) ----
        // Équivalent du « zoom < 90 » path
        for (let row = boundsMinY; row <= boundsMaxY; row++) {
            for (let col = boundsMaxX; col >= boundsMinX; col--) {
                const tile = terrain.tileAt(col, row);
                if (!tile) continue;

                // Culling : ne rendre que si dans le viewport
                if (!this.isInViewport(col, row, tileW, tileH)) continue;

                this.drawTile(tile, col, row, tileW, tileH);
            }
        }
    }

    /**
     * Vérifie si une tuile est dans le viewport (culling frustum simplifié).
     * Équivalent de Tile_isVisible() + Tile_isCulled() dans l'original.
     */
    private isInViewport(wx: number, wy: number, tileW: number, tileH: number): boolean {
        // Conversion coordonnées tuile → écran isométrique
        const screenX = (wx - wy) * (tileW / 2);
        const screenY = (wx + wy) * (tileH / 2);

        const margin = tileW * 2; // Marge de sécurité
        const halfW = this.options.viewportWidth / 2 + margin;
        const halfH = this.options.viewportHeight / 2 + margin;

        return (
            screenX >= -halfW &&
            screenX <= halfW &&
            screenY >= -halfH &&
            screenY <= halfH
        );
    }

    /**
     * Dessine une tuile unique en isométrique.
     * Équivalent de Terrain_renderSingleTile().
     *
     * L'élévation est utilisée pour décaler verticalement la tuile.
     */
    private drawTile(
        tile: TileData,
        worldX: number,
        worldY: number,
        tileW: number,
        tileH: number
    ): void {
        const ctx = this.ctx;

        // Conversion coordonnées monde → isométrique
        const screenX = (worldX - worldY) * (tileW / 2);
        const screenY = (worldX + worldY) * (tileH / 2);

        // Élévation : la hauteur moyenne des 4 coins
        const avgElevation = (
            tile.elevation[0] +
            tile.elevation[1] +
            tile.elevation[2] +
            tile.elevation[3]
        ) / 4;

        // Applique l'élévation
        const elevOffset = -avgElevation * 2;

        // Dessin du losange isométrique
        ctx.save();
        ctx.translate(screenX, screenY + elevOffset);

        // Couleur selon le type
        ctx.fillStyle = getTileColor(tile.type);
        ctx.strokeStyle = 'rgba(0,0,0,0.2)';
        ctx.lineWidth = 1;

        // Losange isométrique
        ctx.beginPath();
        ctx.moveTo(0, -tileH / 2);           // Top
        ctx.lineTo(tileW / 2, 0);             // Right
        ctx.lineTo(0, tileH / 2);             // Bottom
        ctx.lineTo(-tileW / 2, 0);            // Left
        ctx.closePath();
        ctx.fill();
        ctx.stroke();

        // Effet de hauteur : dessine les faces latérales si élevé
        if (avgElevation > 0) {
            // Face droite
            ctx.fillStyle = 'rgba(0,0,0,0.3)';
            ctx.beginPath();
            ctx.moveTo(tileW / 2, 0);
            ctx.lineTo(tileW / 2, -avgElevation * 2);
            ctx.lineTo(0, tileH / 2 - avgElevation * 2);
            ctx.lineTo(0, tileH / 2);
            ctx.closePath();
            ctx.fill();

            // Face gauche
            ctx.fillStyle = 'rgba(0,0,0,0.15)';
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

    /**
     * Redimensionne le viewport.
     */
    resize(width: number, height: number): void {
        this.options.viewportWidth = width;
        this.options.viewportHeight = height;
    }
}
