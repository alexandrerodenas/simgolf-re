/**
 * app.ts
 *
 * Point d'entrée de l'application SimGolf Mobile.
 *
 * Initialise et connecte tous les composants :
 * - TerrainEngine (moteur de simulation terrain)
 * - IsometricRenderer (rendu isométrique texturé)
 * - TextureManager (gestionnaire de textures)
 * - TouchHandler (interactions tactiles)
 * - CameraController (déplacement/zoom)
 * - HUD (bandeau supérieur)
 * - BuildToolbar (outils de construction)
 * - MainMenu (écran d'accueil)
 *
 * Architecture mobile-first :
 * - Toucher 1 doigt → panoramique / tap
 * - Pincer → zoom
 * - Appui long → menu contextuel (équivalent clic droit)
 * - Barre d'outils en bas → pouce accessible
 *
 * @package simgolf
 */

import { TerrainEngine } from './core/TerrainTileSystem.js';
import { IsometricRenderer, RenderOptions } from './view/IsometricRenderer.js';
import { TextureManager, CourseTheme } from './view/TextureManager.js';
import { TouchHandler, CameraController } from './ui/TouchHandler.js';
import { HUD } from './ui/HUD.js';
import { BuildToolbar } from './ui/BuildToolbar.js';
import { MainMenu } from './ui/MainMenu.js';

// ============================================================
// Initialisation
// ============================================================

async function init() {
    // --- Canvas ---
    const canvas = document.getElementById('game-canvas') as HTMLCanvasElement;
    const ctx = canvas.getContext('2d')!;

    // --- Terrain ---
    const terrain = new TerrainEngine(64, 64);
    terrain.initRandom();  // Terrain de démonstration

    // --- Texture Manager ---
    const textureManager = TextureManager.getInstance();
    try {
        await textureManager.init();
        console.log('[App] Texture catalog loaded:', textureManager.getStats());
    } catch (err) {
        console.warn('[App] Texture catalog failed, using fallback colors:', err);
    }

    // --- Caméra ---
    const camera = new CameraController();

    // --- Renderer ---
    const renderer = new IsometricRenderer(canvas, terrain, textureManager, {
        viewportWidth: canvas.width,
        viewportHeight: canvas.height,
        tileWidth: 64,
        tileHeight: 32,
        zoom: 1.0,
    });

    // --- Touch Handler ---
    const touch = new TouchHandler(canvas);
    camera.connect(touch);

    touch.onTap = (x, y) => {
        // Convertit la position écran → coordonnées terrain
        const rect = canvas.getBoundingClientRect();
        const canvasX = (x - rect.left) * (canvas.width / rect.width);
        const canvasY = (y - rect.top) * (canvas.height / rect.height);

        // Coordonnées dans l'espace isométrique
        const centerX = canvas.width / 2;
        const centerY = canvas.height / 4;

        const isoX = (canvasX - centerX) / (64 / 2) - camera.offsetX;
        const isoY = (canvasY - centerY) / (32 / 2) - camera.offsetY;

        // Conversion iso → grille
        const tileX = Math.floor((isoY + isoX) / 2);
        const tileY = Math.floor((isoY - isoX) / 2);

        // Applique l'outil courant
        const tool = toolbar.getCurrentTool();
        if (tool && terrain.inBounds(tileX, tileY)) {
            terrain.setTileType(tileX, tileY, tool.tileType);
            hud.showToast(`${tool.label} placé (${tileX},${tileY})`);
        }
    };

    touch.onDoubleTap = () => {
        camera.reset();
    };

    // --- HUD ---
    const hud = new HUD();
    hud.setState({
        hole: 1,
        par: 4,
        score: 0,
        money: 50000,
    });
    hud.onMenu = () => {
        menu.show();
    };

    // --- Build Toolbar ---
    const toolbar = new BuildToolbar(
        document.getElementById('tool-scroll')!,
        document.getElementById('tool-palette')!
    );
    toolbar.onToolSelect = (toolId, tileType) => {
        hud.showToast(`${toolId} sélectionné`);
    };

    // --- Main Menu ---
    const menu = new MainMenu();
    menu.onNewGame = async (theme) => {
        // Change le thème
        renderer.setTheme(theme);

        // Précharge les textures du thème
        if (textureManager.isReady) {
            await textureManager.preloadTheme(theme);
        }

        // Génère un nouveau terrain
        terrain.initRandom();
        camera.reset();
        hud.setState({ hole: 1, par: 4, score: 0, money: 50000 });
        hud.showToast(`Nouveau parcours ${theme} !`);

        menu.hide();
    };
    menu.onLoadGame = () => {
        // TODO: chargement de sauvegarde
        hud.showToast('Chargement pas encore implémenté');
    };
    menu.onTutorial = () => {
        menu.hide();
        hud.showToast('Mode tutoriel — construisez votre premier trou !');
    };

    // --- Redimensionnement ---
    function resize() {
        const dpr = window.devicePixelRatio || 1;
        const w = window.innerWidth;
        const h = window.innerHeight;

        canvas.style.width = w + 'px';
        canvas.style.height = h + 'px';
        canvas.width = w * dpr;
        canvas.height = h * dpr;

        ctx.scale(dpr, dpr);
        renderer.resize(w, h);
    }

    window.addEventListener('resize', resize);
    resize();

    // --- Boucle de rendu ---
    const prevPos = { x: 0, y: 0 };

    function gameLoop() {
        // Met à jour la caméra dans le rendu
        // Pour le moment, le pan/zoom modifie uniquement
        // les coordonnées de la caméra via TouchHandler

        // Rend la scène
        renderer.render(camera.zoom);

        requestAnimationFrame(gameLoop);
    }

    // --- Démarrage ---
    console.log('[SimGolf Mobile] Initialized');
    console.log(`  Canvas: ${canvas.width}x${canvas.height}`);
    console.log(`  Terrain: ${terrain.width}x${terrain.height}`);
    console.log(`  Theme: ${renderer.theme}`);

    gameLoop();
}

// Attends le chargement du DOM
if (document.readyState === 'loading') {
    document.addEventListener('DOMContentLoaded', init);
} else {
    init();
}
