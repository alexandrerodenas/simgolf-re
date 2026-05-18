/**
 * BuildToolbar.ts
 *
 * Barre d'outils de construction mobile.
 * Adaptée du panneau "Build Course" du jeu original.
 *
 * Layout :
 * - Scroll horizontal d'outils
 * - Palette de sous-options (variations de l'outil)
 * - Mode édition : tap sur le canvas pour placer/appliquer
 *
 * @package simgolf.ui
 */

import { TileType } from '../core/TerrainTileSystem';

/** Définition d'un outil de construction */
interface ToolDef {
    id: string;
    label: string;
    icon: string;
    tileType: TileType;
    /** Couleur de la palette associée (variations) */
    palette?: string[];
}

/** Outils disponibles */
const TOOLS: ToolDef[] = [
    { id: 'fairway',  label: 'Fairway', icon: '🌱', tileType: TileType.Fairway,  palette: ['#5a9e4f', '#4a8e3f', '#6aae5f'] },
    { id: 'rough',    label: 'Rough',   icon: '🌿', tileType: TileType.Rough,    palette: ['#6b8e5a', '#5b7e4a', '#7b9e6a'] },
    { id: 'sand',     label: 'Sable',   icon: '⛱️', tileType: TileType.Sand,     palette: ['#dbc49a', '#cbb48a', '#ebd4aa'] },
    { id: 'tee',      label: 'Départ',  icon: '🏌️', tileType: TileType.Tee,      palette: ['#f0f0f0', '#e0e0e0', '#ffffff'] },
    { id: 'green',    label: 'Green',   icon: '🎯', tileType: TileType.Green,    palette: ['#7bc96f', '#6bb95f', '#8bd97f'] },
    { id: 'water',    label: 'Eau',     icon: '💧', tileType: TileType.Water,    palette: ['#3b82f6', '#2b72e6', '#4b92ff'] },
    { id: 'trees',    label: 'Arbres',  icon: '🌲', tileType: TileType.Tree,     palette: ['#2d5a27', '#1d4a17', '#3d6a37'] },
    { id: 'path',     label: 'Chemin',  icon: '🛤️', tileType: TileType.Path,     palette: ['#8b7355', '#7b6345', '#9b8365'] },
    { id: 'build',    label: 'Bâtiment',icon: '🏠', tileType: TileType.Building,  palette: ['#666666', '#777777', '#555555'] },
];

export interface BuildToolbarCallbacks {
    onToolSelect?: (toolId: string, tileType: TileType) => void;
    onPaletteSelect?: (color: string) => void;
}

/**
 * BuildToolbar — Barre d'outils de construction.
 *
 * Génère les boutons d'outils dans le DOM.
 * Gère l'état actif et la palette de couleurs.
 */
export class BuildToolbar {
    private scrollEl: HTMLElement;
    private paletteEl: HTMLElement;
    private currentTool: string | null = null;
    private callbacks: BuildToolbarCallbacks = {};
    private buttons: Map<string, HTMLElement> = new Map();

    constructor(scrollEl: HTMLElement, paletteEl: HTMLElement) {
        this.scrollEl = scrollEl;
        this.paletteEl = paletteEl;
        this.render();
    }

    set onToolSelect(fn: ((toolId: string, tileType: TileType) => void) | undefined) {
        this.callbacks.onToolSelect = fn;
    }
    set onPaletteSelect(fn: ((color: string) => void) | undefined) {
        this.callbacks.onPaletteSelect = fn;
    }

    /** Rend la barre d'outils */
    private render(): void {
        this.scrollEl.innerHTML = '';

        for (const tool of TOOLS) {
            const btn = document.createElement('button');
            btn.className = 'tool-btn';
            btn.dataset.tool = tool.id;
            btn.innerHTML = `
                <span class="tool-icon">${tool.icon}</span>
                <span>${tool.label}</span>
            `;

            btn.addEventListener('click', (e) => {
                e.stopPropagation();
                this.selectTool(tool.id);
            });

            this.scrollEl.appendChild(btn);
            this.buttons.set(tool.id, btn);
        }

        // Outil par défaut
        this.selectTool(TOOLS[0].id);
    }

    /** Sélectionne un outil */
    selectTool(toolId: string): void {
        this.currentTool = toolId;

        // Met à jour les classes actives
        for (const [id, btn] of this.buttons) {
            btn.classList.toggle('active', id === toolId);
        }

        // Affiche la palette
        const tool = TOOLS.find(t => t.id === toolId);
        if (tool?.palette) {
            this.renderPalette(tool.palette);
        }

        // Callback
        if (tool) {
            this.callbacks.onToolSelect?.(tool.id, tool.tileType);
        }
    }

    /** Rend la palette de couleurs/variations */
    private renderPalette(colors: string[]): void {
        this.paletteEl.style.display = 'flex';
        this.paletteEl.innerHTML = '';

        for (const color of colors) {
            const btn = document.createElement('button');
            btn.className = 'palette-btn';
            btn.style.background = color;
            btn.addEventListener('click', (e) => {
                e.stopPropagation();
                this.paletteEl.querySelectorAll('.palette-btn').forEach(b => b.classList.remove('active'));
                btn.classList.add('active');
                this.callbacks.onPaletteSelect?.(color);
            });
            this.paletteEl.appendChild(btn);
        }

        // Premier actif
        const first = this.paletteEl.querySelector('.palette-btn') as HTMLElement;
        if (first) first.classList.add('active');
    }

    /** Obtient l'outil courant */
    getCurrentTool(): ToolDef | undefined {
        return TOOLS.find(t => t.id === this.currentTool);
    }

    /** Cache la palette */
    hidePalette(): void {
        this.paletteEl.style.display = 'none';
    }

    /** Tous les outils disponibles */
    static getTools(): ToolDef[] {
        return TOOLS;
    }
}
