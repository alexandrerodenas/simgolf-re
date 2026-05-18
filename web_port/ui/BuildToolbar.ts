/**
 * BuildToolbar.ts
 *
 * Barre d'outils de construction mobile — version complète.
 * Deux modes : Terrain (9 outils) et Bâtiments (8 outils)
 *
 * @package simgolf.ui
 */

import { TileType } from '../core/TerrainTileSystem';

/** Catégorie d'outils */
export type ToolCategory = 'terrain' | 'buildings';

/** Définition d'un outil */
export interface ToolDef {
    id: string;
    label: string;
    icon: string;
    tileType: TileType;
    category: ToolCategory;
    palette?: string[];  // Couleurs de sous-variantes
}

export const TERRAIN_TOOLS: ToolDef[] = [
    { id: 'fairway',  label: 'Fairway', icon: '🌱', tileType: TileType.Fairway,  category: 'terrain', palette: ['#5a9e4f','#4a8e3f','#6aae5f'] },
    { id: 'rough',    label: 'Rough',   icon: '🌿', tileType: TileType.Rough,    category: 'terrain', palette: ['#6b8e5a','#5b7e4a','#7b9e6a'] },
    { id: 'deeprough',label: 'Herbes',  icon: '🌾', tileType: TileType.OutOfBounds, category: 'terrain', palette: ['#5a7a4a','#4a6a3a','#6a8a5a'] },
    { id: 'sand',     label: 'Sable',   icon: '⛱️', tileType: TileType.Sand,     category: 'terrain', palette: ['#dbc49a','#cbb48a','#ebd4aa'] },
    { id: 'tee',      label: 'Départ',  icon: '🏌️', tileType: TileType.Tee,      category: 'terrain', palette: ['#f0f0f0','#e0e0e0','#ffffff'] },
    { id: 'green',    label: 'Green',   icon: '🎯', tileType: TileType.Green,    category: 'terrain', palette: ['#7bc96f','#6bb95f','#8bd97f'] },
    { id: 'water',    label: 'Eau',     icon: '💧', tileType: TileType.Water,    category: 'terrain', palette: ['#3b82f6','#2b72e6','#4b92ff'] },
    { id: 'trees',    label: 'Arbres',  icon: '🌲', tileType: TileType.Tree,     category: 'terrain', palette: ['#2d5a27','#1d4a17','#3d6a37'] },
    { id: 'path',     label: 'Chemin',  icon: '🛤️', tileType: TileType.Path,     category: 'terrain', palette: ['#8b7355','#7b6345','#9b8365'] },
];

export const BUILDING_TOOLS: ToolDef[] = [
    { id: 'clubhouse',  label: 'Club',     icon: '🏰', tileType: TileType.Building, category: 'buildings' },
    { id: 'proshop',    label: 'ProShop',  icon: '🏪', tileType: TileType.Building, category: 'buildings' },
    { id: 'driving',    label: 'Practice', icon: '🏌️‍♂️', tileType: TileType.Building, category: 'buildings' },
    { id: 'cart',       label: 'Voitures', icon: '🚗', tileType: TileType.Building, category: 'buildings' },
    { id: 'snack',      label: 'Snack',    icon: '🌭', tileType: TileType.Building, category: 'buildings' },
    { id: 'pool',       label: 'Piscine',  icon: '🏊', tileType: TileType.Building, category: 'buildings' },
    { id: 'home',       label: 'Villa',    icon: '🏠', tileType: TileType.Building, category: 'buildings' },
    { id: 'bench',      label: 'Banc',     icon: '🪑', tileType: TileType.Building, category: 'buildings' },
];

export interface BuildToolbarCallbacks {
    onToolSelect?: (toolId: string, tileType: TileType) => void;
    onPaletteSelect?: (color: string) => void;
    onCategorySwitch?: (cat: ToolCategory) => void;
}

export class BuildToolbar {
    private scrollEl: HTMLElement;
    private paletteEl: HTMLElement;
    private currentTool: string | null = null;
    private currentCategory: ToolCategory = 'terrain';
    private callbacks: BuildToolbarCallbacks = {};
    private buttons: Map<string, HTMLElement> = new Map();

    constructor(scrollEl: HTMLElement, paletteEl: HTMLElement) {
        this.scrollEl = scrollEl;
        this.paletteEl = paletteEl;
        this.render();
    }

    set onToolSelect(fn: ((toolId: string, tileType: TileType) => void) | undefined) { this.callbacks.onToolSelect = fn; }
    set onPaletteSelect(fn: ((color: string) => void) | undefined) { this.callbacks.onPaletteSelect = fn; }
    set onCategorySwitch(fn: ((cat: ToolCategory) => void) | undefined) { this.callbacks.onCategorySwitch = fn; }

    get currentCategoryKey(): ToolCategory { return this.currentCategory; }

    /** Change de catégorie (terrain / bâtiments) */
    setCategory(cat: ToolCategory): void {
        this.currentCategory = cat;
        this.render();
        this.callbacks.onCategorySwitch?.(cat);
    }

    toggleCategory(): void {
        this.setCategory(this.currentCategory === 'terrain' ? 'buildings' : 'terrain');
    }

    private render(): void {
        this.scrollEl.innerHTML = '';
        this.buttons.clear();

        const tools = this.currentCategory === 'terrain' ? TERRAIN_TOOLS : BUILDING_TOOLS;

        for (const tool of tools) {
            const btn = document.createElement('button');
            btn.className = 'tool-btn';
            btn.dataset.tool = tool.id;
            btn.innerHTML = `<span class="tool-icon">${tool.icon}</span><span>${tool.label}</span>`;
            btn.addEventListener('click', (e) => { e.stopPropagation(); this.selectTool(tool.id); });
            this.scrollEl.appendChild(btn);
            this.buttons.set(tool.id, btn);
        }

        // Select first tool by default
        if (tools.length > 0 && !this.currentTool) {
            this.selectTool(tools[0].id);
        }
    }

    selectTool(toolId: string): void {
        this.currentTool = toolId;
        for (const [id, btn] of this.buttons) btn.classList.toggle('active', id === toolId);

        const allTools = [...TERRAIN_TOOLS, ...BUILDING_TOOLS];
        const tool = allTools.find(t => t.id === toolId);
        if (tool?.palette) this.renderPalette(tool.palette);
        else this.hidePalette();

        if (tool) this.callbacks.onToolSelect?.(tool.id, tool.tileType);
    }

    private renderPalette(colors: string[]): void {
        this.paletteEl.style.display = 'flex';
        this.paletteEl.innerHTML = '';
        colors.forEach((color, i) => {
            const btn = document.createElement('button');
            btn.className = 'palette-btn';
            btn.style.background = color;
            if (i === 0) btn.classList.add('active');
            btn.addEventListener('click', (e) => {
                e.stopPropagation();
                this.paletteEl.querySelectorAll('.palette-btn').forEach(b => b.classList.remove('active'));
                btn.classList.add('active');
                this.callbacks.onPaletteSelect?.(color);
            });
            this.paletteEl.appendChild(btn);
        });
    }

    getCurrentTool(): ToolDef | undefined {
        const allTools = [...TERRAIN_TOOLS, ...BUILDING_TOOLS];
        return allTools.find(t => t.id === this.currentTool);
    }

    hidePalette(): void { this.paletteEl.style.display = 'none'; }
}
