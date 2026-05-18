/**
 * app.ts
 *
 * Point d'entrée SimGolf Mobile — version complète avec modes
 * Construction et Jeu, panneaux d'info, et adaptatif.
 */

import { TerrainEngine } from '../core/TerrainTileSystem.js';
import { IsometricRenderer } from '../view/IsometricRenderer.js';
import { TextureManager, CourseTheme } from '../view/TextureManager.js';
import { TouchHandler, CameraController } from './TouchHandler.js';
import { HUD } from './HUD.js';
import { BuildToolbar, TERRAIN_TOOLS } from './BuildToolbar.js';
import { MainMenu } from './MainMenu.js';

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

    // Etat du jeu
    let mode: 'build' | 'play' = 'build';

    // --- Conversion écran → tuile ---
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

    // --- Toolbar ---
    const toolbar = new BuildToolbar(
        document.getElementById('tool-scroll')!,
        document.getElementById('tool-palette')!
    );

    // --- HUD ---
    const hud = new HUD();
    hud.setState({ hole: 1, par: 4, score: 0, money: 50000 });

    hud.onMenu = () => menu.show();

    // --- Tap handler ---
    touch.onTap = (x, y) => {
        const tile = screenToTile(x, y);
        if (!terrain.inBounds(tile.x, tile.y)) return;

        if (mode === 'build') {
            const tool = toolbar.getCurrentTool();
            if (tool) {
                terrain.setTileType(tile.x, tile.y, tool.tileType);
                updateBuildInfo(tile.x, tile.y);
            }
        } else {
            // Mode jeu: sélectionne un golfeur si présent
            hud.showToast(`📍 Trou #? (${tile.x},${tile.y})`);
        }
    };

    touch.onDoubleTap = () => camera.reset();
    touch.onLongPress = (x, y) => showGolferCard(x, y);

    // --- Mode switch ---
    document.querySelectorAll('.mode-tab').forEach(tab => {
        tab.addEventListener('click', () => {
            document.querySelectorAll('.mode-tab').forEach(t => t.classList.remove('active'));
            tab.classList.add('active');
            mode = (tab as HTMLElement).dataset.mode as 'build' | 'play';

            document.getElementById('build-toolbar')!.style.display = mode === 'build' ? '' : 'none';
            document.getElementById('build-info')!.classList.toggle('visible', mode === 'build');
            document.getElementById('play-mode')!.classList.toggle('visible', mode === 'play');

            hud.showToast(mode === 'build' ? '🔨 Mode Construction' : '⛳ Mode Jeu');
        });
    });

    // --- Build Info ---
    const biHole = document.getElementById('bi-hole')!;
    const biPar = document.getElementById('bi-par')!;
    const biLength = document.getElementById('bi-length')!;
    const biType = document.getElementById('bi-type')!;
    const biSga = document.getElementById('bi-sga')!;
    const minimapCanvas = document.getElementById('minimap-canvas') as HTMLCanvasElement;

    function updateBuildInfo(tx: number, ty: number): void {
        biHole.textContent = `Trou 1`;
        biPar.textContent = `Par 4`;
        // Simple length estimation based on distance from tee to green
        const tile = terrain.tileAt(tx, ty);
        if (tile) {
            biLength.textContent = `${Math.round(Math.abs(tile.elevation[0]) * 10 + 300)} m`;
            biType.textContent = tile.type === TileType.Fairway ? 'Fairway' :
                                 tile.type === TileType.Green ? 'Green' :
                                 tile.type === TileType.Sand ? 'Bunker' : 'Standard';
        }
        biSga.textContent = `${Math.floor(Math.random() * 10 + 7)}/10`;

        // Mini-map: draw a tiny representation
        const ctx = minimapCanvas.getContext('2d')!;
        const mw = minimapCanvas.width = minimapCanvas.clientWidth;
        const mh = minimapCanvas.height = minimapCanvas.clientHeight;
        ctx.fillStyle = '#0a1a0a';
        ctx.fillRect(0, 0, mw, mh);
        const px = Math.floor(tx * mw / terrain.width);
        const py = Math.floor(ty * mh / terrain.height);
        ctx.fillStyle = '#7bc96f';
        ctx.beginPath();
        ctx.arc(px, py, 3, 0, Math.PI * 2);
        ctx.fill();
    }
    
    // Initial build info
    updateBuildInfo(32, 32);

    // --- Golfer card (long press) ---
    const golferCard = document.getElementById('golfer-card')!;
    let cardTimeout: ReturnType<typeof setTimeout> | null = null;

    function showGolferCard(x: number, y: number): void {
        const tile = screenToTile(x, y);
        golferCard.style.left = Math.min(x, window.innerWidth - 280) + 'px';
        golferCard.style.top = Math.min(y - 200, window.innerHeight - 300) + 'px';
        // Demo data
        document.getElementById('gc-name')!.textContent = 'Bruce Springstone';
        document.getElementById('gc-title')!.textContent = '⭐ Rock Star Pro';
        document.getElementById('gc-mood-icon')!.textContent = '😊';
        document.getElementById('gc-mood-text')!.textContent = 'Heureux — aime ce parcours';
        golferCard.classList.add('visible');

        if (cardTimeout) clearTimeout(cardTimeout);
        cardTimeout = setTimeout(() => golferCard.classList.remove('visible'), 5000);
    }

    // Hide card on tap outside
    touch.onTap = ((original) => (x: number, y: number) => {
        golferCard.classList.remove('visible');
        original(x, y);
    })(touch.onTap);

    // --- Main Menu ---
    const menu = new MainMenu();
    menu.onNewGame = async (theme) => {
        renderer.setTheme(theme);
        if (textureManager.isReady) await textureManager.preloadTheme(theme);
        terrain.initRandom();
        camera.reset();
        hud.setState({ hole: 1, par: 4, score: 0, money: 50000 });
        hud.showToast(`🌍 ${theme} — nouveau parcours !`);
        menu.hide();
    };
    menu.onLoadGame = () => hud.showToast('📂 Chargement — bientôt disponible');
    menu.onTutorial = () => { menu.hide(); hud.showToast('📖 Bienvenue dans SimGolf !'); };

    // --- Resize ---
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

    // --- Game loop ---
    function loop() {
        // Camera offset: touch handler already modified camera.offsetX/Y via onPan
        renderer.render(camera.zoom);
        requestAnimationFrame(loop);
    }
    loop();

    console.log('[SimGolf Mobile] Ready — modes Build & Play');
}

// Bootstrap
if (document.readyState === 'loading') document.addEventListener('DOMContentLoaded', init);
else init();
