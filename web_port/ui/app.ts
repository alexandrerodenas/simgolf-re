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

async function init() {
    const canvas = document.getElementById('game-canvas') as HTMLCanvasElement;
    const terrain = new TerrainEngine(64, 64);
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
        const e = game.economy.state;
        hud.setState({
            hole: Math.min(game.countHoles(), 18) || 1,
            par: 4,
            score: state.bestScore || 0,
            money: e.cash,
        });
    };

    // ============================================================
    // Interactions tactiles
    // ============================================================
    touch.onTap = (x, y) => {
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
            // Mode jeu : montre les infos du golfeur à cet endroit
            const golfers = game.state.activeGolfers;
            if (golfers.length > 0) {
                const g = golfers[Math.floor(Math.random() * golfers.length)];
                hud.showToast(`💬 ${g.firstName}: "${game.personas.getComment(g.id)}"`);
            }
        }
    };

    touch.onDoubleTap = () => camera.reset();

    touch.onLongPress = (x, y) => {
        const tile = screenToTile(x, y);
        if (mode === 'build') {
            // Vente de terrain résidentiel
            game.buyLand(tile.x, tile.y);
        }
    };

    // ============================================================
    // Mode switch (Construire / Jouer)
    // ============================================================
    document.querySelectorAll('.mode-tab').forEach(tab => {
        tab.addEventListener('click', () => {
            document.querySelectorAll('.mode-tab').forEach(t => t.classList.remove('active'));
            tab.classList.add('active');
            mode = (tab as HTMLElement).dataset.mode as 'build' | 'play';

            document.getElementById('build-toolbar')!.style.display = mode === 'build' ? '' : 'none';

            if (mode === 'play') {
                // Démarre la simulation hebdomadaire
                game.scoring.startRound(game.state.courseName);
                if (!weekTimer) {
                    weekTimer = setInterval(() => {
                        game.tickWeek();
                        hud.showToast(`📅 Semaine ${game.state.week} terminée`, 2000);
                    }, 15000); // 15s = 1 semaine (ajustable)
                }
                hud.showToast('⛳ Simulation hebdomadaire enclenchée');
            } else {
                // Pause la simulation
                if (weekTimer) {
                    clearInterval(weekTimer);
                    weekTimer = null;
                }
                hud.showToast('🔨 Mode Construction');
            }
        });
    });

    // ============================================================
    // Main Menu
    // ============================================================
    menu.onNewGame = async (theme) => {
        renderer.setTheme(theme);
        if (textureManager.isReady) await textureManager.preloadTheme(theme);
        terrain.initRandom();
        camera.reset();

        // Reset game state
        const fresh = new GameManager(terrain);
        Object.assign(game, fresh);

        hud.setState({ hole: 1, par: 4, score: 0, money: 50000 });
        hud.showToast(`🌍 ${theme} — construisez votre premier trou !`);
        menu.hide();
    };

    menu.onLoadGame = () => hud.showToast('📂 Chargement — bientôt disponible');
    menu.onTutorial = () => {
        menu.hide();
        hud.showToast('📖 Construisez un tee + un green pour créer un trou !');
    };

    // ============================================================
    // Build Info Panel (mini-carte, infos trou)
    // ============================================================
    function updateBuildInfo(tx: number, ty: number): void {
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
    }

    // Patch tap to also update build info
    const originalTap = touch.onTap;
    touch.onTap = (x, y) => {
        const tile = screenToTile(x, y);
        if (terrain.inBounds(tile.x, tile.y)) updateBuildInfo(tile.x, tile.y);

        const tool = toolbar.getCurrentTool();
        if (tool && mode === 'build') {
            originalTap(x, y);
        } else if (mode === 'play') {
            // Show golfer info
            const golfers = game.state.activeGolfers;
            if (golfers.length > 0) {
                const g = golfers[Math.floor(Math.random() * golfers.length)];
                hud.showToast(`💬 ${g.firstName}: "${game.personas.getComment(g.id)}"`);
            }
        }
    };

    // ============================================================
    // Canvas resize
    // ============================================================
    function resize() {
        const dpr = window.devicePixelRatio || 1;
        canvas.style.width = window.innerWidth + 'px';
        canvas.style.height = window.innerHeight + 'px';
        canvas.width = window.innerWidth * dpr;
        canvas.height = window.innerHeight * dpr;
        renderer.resize(window.innerWidth, window.innerHeight);
    }
    window.addEventListener('resize', resize);
    resize();

    // ============================================================
    // Game loop (rendu)
    // ============================================================
    function loop() {
        // Met à jour les animations
        const now = performance.now();

        // Rendu
        renderer.render(camera.zoom);

        requestAnimationFrame(loop);
    }

    // ============================================================
    // Tournament buttons (from scorecard UI)
    // ============================================================
    // + could add tournament entry button in the HUD

    loop();
    console.log('[SimGolf Mobile] GameManager orchestrating all systems');
}

if (document.readyState === 'loading') document.addEventListener('DOMContentLoaded', init);
else init();
