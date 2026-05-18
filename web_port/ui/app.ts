/**
 * app.ts
 *
 * Point d'entrée SimGolf Mobile — version complète avec GameManager.
 * Orchestre tous les systèmes (terrain, économie, golfeurs, scoring, tournois).
 *
 * Flux principal (équivalent WinMain → GameLoop C original) :
 * 1. Init terrain + textures + UI
 * 2. MainMenu → Nouvelle Partie
 * 3. GameManager.tickWeek() chaque semaine (timer)
 * 4. Golfeurs jouent, économie tourne, tournois proposés
 * 5. Le joueur construit et interagit via le canvas
 */

import { TerrainEngine, TileType } from '../core/TerrainTileSystem';
import { IsometricRenderer } from '../view/IsometricRenderer';
import { TextureManager, CourseTheme } from '../view/TextureManager';
import { TouchHandler, CameraController } from './TouchHandler';
import { HUD } from './HUD';
import { BuildToolbar, TERRAIN_TOOLS, BUILDING_TOOLS } from './BuildToolbar';
import { MainMenu } from './MainMenu';
import { GameManager } from '../core/GameManager';
import { ScoringSystem } from '../core/ScoringSystem';

// ============================================================
// Global error toast — capte les erreurs JS non catchées
// ============================================================
function showErrorToast(msg: string): void {
    const t = document.createElement('div');
    t.textContent = `❌ ${msg}`;
    t.style.cssText = `
        position: fixed; bottom: 80px; left: 10px; right: 10px; z-index: 9999;
        background: rgba(180,30,30,0.95); color: white; padding: 14px 18px;
        border-radius: 14px; font-size: 14px; font-family: monospace;
        box-shadow: 0 4px 20px rgba(0,0,0,0.5);
        max-height: 40vh; overflow-y: auto; white-space: pre-wrap; word-break: break-all;
    `;
    document.body.appendChild(t);
    setTimeout(() => t.remove(), 8000);
}

// Global error handler (non-catchée)
window.addEventListener('error', (e) => {
    showErrorToast(e.message || String(e));
    console.error('[Global Error]', e);
});
window.addEventListener('unhandledrejection', (e) => {
    showErrorToast(e.reason?.message || String(e.reason));
    console.error('[Unhandled Rejection]', e.reason);
});

async function init() {
    try {
        const canvas = document.getElementById('game-canvas') as HTMLCanvasElement;
        const terrain = TerrainEngine.getInstance();
        terrain.init(64, 64);
        terrain.initRandom();

        const textureManager = TextureManager.getInstance();
        try { await textureManager.init(); } catch (e) { console.warn('[App] Catalog fallback'); }

        const camera = new CameraController();
        const renderer = new IsometricRenderer(canvas, terrain, textureManager, {
            viewportWidth: canvas.width, viewportHeight: canvas.height,
            tileWidth: 64, tileHeight: 32, zoom: 1.0,
        });

        const touch = new TouchHandler(canvas);
        camera.connect(touch);

        // ============================================================
        // Game Manager — le cerveau du jeu
        // ============================================================
        const game = new GameManager(terrain);

        let mode: 'build' | 'play' = 'build';
        let weekTimer: ReturnType<typeof setInterval> | null = null;

        // ============================================================
        // Conversion écran → coordonnées tuile
        // ============================================================
        function screenToTile(cx: number, cy: number): { x: number; y: number } {
            const rect = canvas.getBoundingClientRect();
            const canvasX = (cx - rect.left) * (canvas.width / rect.width);
            const canvasY = (cy - rect.top) * (canvas.height / rect.height);
            const centerX = canvas.width / 2;
            const centerY = canvas.height / 4;
            const isoX = (canvasX - centerX) / 32 - camera.offsetX;
            const isoY = (canvasY - centerY) / 16 - camera.offsetY;
            return { x: Math.floor((isoY + isoX) / 2), y: Math.floor((isoY - isoX) / 2) };
        }

        // ============================================================
        // UI Components
        // ============================================================
        const hud = new HUD();
        hud.setState({ hole: 1, par: 4, score: 0, money: 50000 });
        hud.onMenu = () => menu.show();

        const toolbar = new BuildToolbar(
            document.getElementById('tool-scroll')!,
            document.getElementById('tool-palette')!
        );

        const menu = new MainMenu();

        // ============================================================
        // Événements jeu → UI
        // ============================================================
        game.onEvent = (event) => {
            hud.showToast(event.message);
        };

        game.onWeekComplete = (summary) => {
            console.log(`[Semaine ${game.state.week}] ${summary}`);
            hud.showToast(summary, 3000);
        };

        game.onStateChange = (state) => {
            try {
                const e = game.economy.state;
                hud.setState({
                    hole: Math.min(game.countHoles(), 18) || 1,
                    par: 4,
                    score: state.bestScore || 0,
                    money: e.cash,
                });
            } catch (err) {
                console.warn('[onStateChange]', err);
            }
        };

        // ============================================================
        // Interactions tactiles
        // ============================================================
        touch.onTap = (x, y) => {
            try {
                const tile = screenToTile(x, y);
                if (!terrain.inBounds(tile.x, tile.y)) return;

                if (mode === 'build') {
                    const tool = toolbar.getCurrentTool();
                    if (tool) {
                        if (tool.category === 'buildings') {
                            game.buildStructure(tool.id, 2000, tile.x, tile.y);
                        } else {
                            game.paintTile(tile.x, tile.y, tool.tileType);
                        }
                    }
                } else {
                    const golfers = game.state.activeGolfers;
                    if (golfers.length > 0) {
                        const g = golfers[Math.floor(Math.random() * golfers.length)];
                        hud.showToast(`💬 ${g.firstName}: "${game.personas.getComment(g.id)}"`);
                    }
                }
            } catch (err: any) {
                showErrorToast(`Tap: ${err.message}`);
            }
        };

        touch.onDoubleTap = () => camera.reset();

        touch.onLongPress = (x, y) => {
            try {
                const tile = screenToTile(x, y);
                if (mode === 'build') {
                    game.buyLand(tile.x, tile.y);
                }
            } catch (err: any) {
                showErrorToast(`LongPress: ${err.message}`);
            }
        };

        // ============================================================
        // Mode switch (Construire / Jouer)
        // ============================================================
        document.querySelectorAll('.mode-tab').forEach(tab => {
            tab.addEventListener('click', () => {
                try {
                    document.querySelectorAll('.mode-tab').forEach(t => t.classList.remove('active'));
                    tab.classList.add('active');
                    mode = (tab as HTMLElement).dataset.mode as 'build' | 'play';

                    document.getElementById('build-toolbar')!.style.display = mode === 'build' ? '' : 'none';

                    if (mode === 'play') {
                        game.scoring.startRound(game.state.courseName);
                        if (!weekTimer) {
                            weekTimer = setInterval(() => {
                                game.tickWeek();
                                hud.showToast(`📅 Semaine ${game.state.week} terminée`, 2000);
                            }, 15000);
                        }
                        hud.showToast('⛳ Simulation hebdomadaire enclenchée');
                    } else {
                        if (weekTimer) {
                            clearInterval(weekTimer);
                            weekTimer = null;
                        }
                        hud.showToast('🔨 Mode Construction');
                    }
                } catch (err: any) {
                    showErrorToast(`Mode: ${err.message}`);
                }
            });
        });

        // ============================================================
        // Main Menu callbacks (via setters MainMenu)
        // ============================================================
        menu.onNewGame = async (theme) => {
            try {
                renderer.setTheme(theme);
                if (textureManager.isReady) await textureManager.preloadTheme(theme);
                terrain.initRandom();
                camera.reset();

                const fresh = new GameManager(terrain);
                Object.assign(game, fresh);

                hud.setState({ hole: 1, par: 4, score: 0, money: 50000 });
                hud.showToast(`🌍 ${theme} — construisez votre premier trou !`);
                menu.hide();
            } catch (err: any) {
                showErrorToast(`Nouvelle Partie: ${err.message}\n${err.stack?.split('\n').slice(0, 3).join('\n') || ''}`);
            }
        };

        menu.onLoadGame = () => {
            try {
                hud.showToast('📂 Chargement — bientôt disponible');
            } catch (err: any) {
                showErrorToast(`Load: ${err.message}`);
            }
        };

        menu.onTutorial = () => {
            try {
                menu.hide();
                hud.showToast('📖 Construisez un tee + un green pour créer un trou !');
            } catch (err: any) {
                showErrorToast(`Tutorial: ${err.message}`);
            }
        };

        // ============================================================
        // Expose globally for fallback inline handler
        // ============================================================
        (window as any).__simgolfReady = true;
        (window as any).__simgolfStartGame = (theme: string = 'Parkland') => {
            const stored = (menu as any).callbacks?.onNewGame;
            if (stored) stored(theme);
            else showErrorToast('Menu: callback onNewGame non défini');
        };
        (window as any).__simgolfLoadGame = () => {
            const stored = (menu as any).callbacks?.onLoadGame;
            if (stored) stored();
            else showErrorToast('Menu: callback onLoadGame non défini');
        };
        (window as any).__simgolfStartTutorial = () => {
            const stored = (menu as any).callbacks?.onTutorial;
            if (stored) stored();
            else showErrorToast('Menu: callback onTutorial non défini');
        };

        // ============================================================
        // Build Info Panel (mini-carte, infos trou)
        // ============================================================
        function updateBuildInfo(tx: number, ty: number): void {
            try {
                document.getElementById('bi-hole')!.textContent = `Trou ${game.countHoles() || 1}`;
                document.getElementById('bi-par')!.textContent = `Par ${ScoringSystem.getParForHole(game.countHoles() || 1, 18)}`;
                const tile = terrain.tileAt(tx, ty);
                if (tile) {
                    document.getElementById('bi-length')!.textContent = `${300 + Math.abs(tile.elevation[0]) * 10} m`;
                    const typeNames: Record<number, string> = {
                        [TileType.Fairway]: 'Fairway', [TileType.Green]: 'Green', [TileType.Sand]: 'Bunker',
                        [TileType.Water]: 'Eau', [TileType.Tee]: 'Départ', [TileType.Rough]: 'Rough',
                        [TileType.Tree]: 'Arbres', [TileType.Path]: 'Chemin', [TileType.Building]: 'Bâtiment',
                    };
                    document.getElementById('bi-type')!.textContent = typeNames[tile.type] || 'Terrain';
                }
                document.getElementById('bi-sga')!.textContent = `${game.calcCourseQuality()}/100`;
            } catch (err: any) {
                console.warn('[BuildInfo]', err);
            }
        }

        // Patch tap — on stocke le handler précédent avant de le remplacer
        let prevOnTap = (x: number, y: number) => {
            const tile = screenToTile(x, y);
            if (!terrain.inBounds(tile.x, tile.y)) return;
            if (mode === 'build') {
                const tool = toolbar.getCurrentTool();
                if (tool) {
                    if (tool.category === 'buildings') game.buildStructure(tool.id, 2000, tile.x, tile.y);
                    else game.paintTile(tile.x, tile.y, tool.tileType);
                }
            }
        };

        touch.onTap = (x, y) => {
            try {
                const tile = screenToTile(x, y);
                if (terrain.inBounds(tile.x, tile.y)) updateBuildInfo(tile.x, tile.y);

                const tool = toolbar.getCurrentTool();
                if (tool && mode === 'build') {
                    prevOnTap(x, y);
                } else if (mode === 'play') {
                    const golfers = game.state.activeGolfers;
                    if (golfers.length > 0) {
                        const g = golfers[Math.floor(Math.random() * golfers.length)];
                        hud.showToast(`💬 ${g.firstName}: "${game.personas.getComment(g.id)}"`);
                    }
                }
            } catch (err: any) {
                showErrorToast(`Tap (patched): ${err.message}`);
            }
        };

        // ============================================================
        // Canvas resize
        // ============================================================
        function resize() {
            try {
                const dpr = window.devicePixelRatio || 1;
                canvas.style.width = window.innerWidth + 'px';
                canvas.style.height = window.innerHeight + 'px';
                canvas.width = window.innerWidth * dpr;
                canvas.height = window.innerHeight * dpr;
                renderer.resize(window.innerWidth, window.innerHeight);
            } catch (err: any) {
                console.warn('[Resize]', err);
            }
        }
        window.addEventListener('resize', resize);
        resize();

        // ============================================================
        // Game loop (rendu)
        // ============================================================
        function loop() {
            try {
                renderer.render(camera.zoom);
            } catch (err: any) {
                showErrorToast(`Render: ${err.message}`);
            }
            requestAnimationFrame(loop);
        }

        loop();
        console.log('[SimGolf Mobile] GameManager orchestrating all systems');

    } catch (err: any) {
        showErrorToast(`Init: ${err.message}\n${err.stack?.split('\n').slice(0, 3).join('\n') || ''}`);
    }
}

if (document.readyState === 'loading') document.addEventListener('DOMContentLoaded', init);
else init();
