/**
 * game_ui_statemachine.h
 * Machine d'états UI — Décompilée depuis golf.exe
 *
 * Sources :
 *   WinMain         @ 0x4a682f (164 insn)
 *   InitGameState   @ 0x4a50db (1894 insn)
 *   GameLoopCallback @ 0x4a5108 (1876 insn)
 *   646 PCX fichiers d'interface
 *
 * ═══════════════════════════════════════════════════════════
 *  WINMAIN — TOP-LEVEL STATE MACHINE
 * ═══════════════════════════════════════════════════════════
 *
 *   WinMain :
 *     1. GetVersion() → stocke version OS (0x840a6c..0x840a78)
 *     2. HeapSetup() → initialise le heap
 *     3. SystemCheck() → vérifie OS + résolution
 *     4. InitGameSystems() → pool d'init, parsing cmdline
 *     5. [0x4ba0bc]() → GetStartupInfo / GetModuleHandle
 *     6. Stocke hInstance @ 0x842160
 *     7. CreateMainWindow() → HWND @ 0x840aac
 *     8. InitSound() → sound.dll setup
 *     9. InitGraphics() → JGL setup
 *    10. InitGameState() → CHARGE TOUT : données, UI, titre
 *    11. SetTimer(hWnd, 1, interval, NULL) → départ boucle
 *    12. GameLoopCallback() → première frame
 *    13. Boucle message Windows (0x4aad6a)
 *    14. À la sortie : CleanupAndExit() → ExitProcess()
 *
 *   États WinMain :
 *     SPLASH → INIT → GAME_LOOP → SHUTDOWN → EXIT
 *
 * ═══════════════════════════════════════════════════════════
 *  INITGAMESTATE — CHARGEMENT UI + MENU
 * ═══════════════════════════════════════════════════════════
 *
 *   InitGameState (1 894 insn) :
 *     1. Parse .dta (progolfers + celebrities)
 *     2. Crée objets golfeurs en mémoire
 *     3. Charge PCX d'interface :
 *        - bink64.pcx (logo Bink)
 *        - logo.pcx (logo Firaxis)
 *        - LoadingScreen01-12.pcx (12 écrans)
 *        - TitleBASE.pcx + TitleMO + TitleUnSel
 *        - WorldBase.pcx + WorldButton.pcx
 *     4. Affiche écran titre (BitBlt timer 2-3s)
 *     5. Boucle menu principal (GetAsyncKeyState)
 *     6. Au clic : New Game / Load / Pro Select / Quit
 *
 * ═══════════════════════════════════════════════════════════
 *  ÉTATS UI COMPLETS (déduits de l'asm + PCX)
 * ═══════════════════════════════════════════════════════════
 */

#include <stdint.h>
#include <stdbool.h>

// ================================================================
// ÉTATS DE L'UI
// ================================================================

typedef enum GameScreen {
    SCREEN_NONE = 0,
    SCREEN_SPLASH,           // bink64.pcx + logo.pcx (2-3s)
    SCREEN_LOADING,          // LoadingScreen01-12.pcx (aléatoire)
    SCREEN_TITLE,            // TitleBASE.pcx + boutons
    SCREEN_SCENARIO_SELECT,  // TitleSelDiffMO/UnSel.pcx
    SCREEN_LOAD_GAME,        // Title_LoadGame.pcx
    SCREEN_PRO_SELECT,       // Title_Pickapro.pcx
    SCREEN_THEME_PACKS,      // Title_ThemePacks.pcx
    SCREEN_TOP10,            // Top10_Trophies.pcx
    SCREEN_CREDITS,          // creditsbckgrd.pcx
    SCREEN_WORLD,            // WorldBase.pcx (jeu principal)
    SCREEN_INFO,             // FINANCEreport / SGAreport / coursereport...
    SCREEN_PAUSE,            // PopUpIcons / TransPopups
    SCREEN_TOURNAMENT_RESULT,// tournament result.pcx
    SCREEN_END_OF_YEAR,      // ENDoYEAR.pcx
    SCREEN_HIRE,             // hire.pcx
    SCREEN_MEMBER_ROSTER,    // memberRoster.pcx
    SCREEN_BUY_LAND,         // buy_land.pcx
    SCREEN_HOLE_STATS,       // HoleSTAT.pcx
    SCREEN_SETTINGS,         // shortcuts.pcx + route screens
} GameScreen;

// ================================================================
// STRUCTURE D'ÉTAT UI
// ================================================================

typedef struct UIState {
    GameScreen currentScreen;    // Écran actif
    GameScreen previousScreen;   // Écran précédent (pour back)
    
    int toolbarActive;           // Barre d'outils active
    int courseTheme;             // Thème courant (0=park..3=tropic)
    
    // Sous-état info screen
    int infoScreenType;          // 0=finance, 1=course report, 2=SGA, 3=...
    
    // Dialogues
    int dialogOpen;              // 0=fermé, 1=ouvert
    int dialogType;              // Type de dialogue
    
    // Toolbars
    int activeToolbar;           // 0=terrain, 1=building, 2=elevation, 3=amenities, 4=employees
} UIState;

// ================================================================
// TRANSITIONS D'ÉTAT (depuis asm)
// ================================================================

/**
 * Machine d'états UI.
 * Basée sur l'analyse de WinMain + InitGameState + GameLoop + strings PCX.
 *
 * TRANSITIONS :
 *
 *   SCREEN_SPLASH ──[timer 2s]──→ SCREEN_LOADING ──[init done]──→ SCREEN_TITLE
 *   SCREEN_TITLE ──[New Game]──→ SCREEN_SCENARIO_SELECT ──→ SCREEN_LOADING ──→ SCREEN_WORLD
 *   SCREEN_TITLE ──[Load Game]──→ SCREEN_LOAD_GAME ──→ SCREEN_LOADING ──→ SCREEN_WORLD
 *   SCREEN_TITLE ──[Pick Pro]──→ SCREEN_PRO_SELECT ──[back]──→ SCREEN_TITLE
 *   SCREEN_TITLE ──[Top 10]──→ SCREEN_TOP10 ──[back]──→ SCREEN_TITLE
 *   SCREEN_TITLE ──[Credits]──→ SCREEN_CREDITS ──[ok]──→ SCREEN_TITLE
 *   SCREEN_TITLE ──[Quit]──→ EXIT
 *
 *   SCREEN_WORLD ──[Esc]──→ SCREEN_PAUSE
 *   SCREEN_PAUSE ──[Resume]──→ SCREEN_WORLD
 *   SCREEN_PAUSE ──[Save]──→ SAVE_DIALOG ──→ SCREEN_WORLD
 *   SCREEN_PAUSE ──[Quit to Menu]──→ SCREEN_TITLE
 *   SCREEN_PAUSE ──[Quit to Desktop]──→ EXIT
 *
 *   SCREEN_WORLD ──[info button]──→ SCREEN_INFO ──[close]──→ SCREEN_WORLD
 *   SCREEN_WORLD ──[tournament end]──→ SCREEN_TOURNAMENT_RESULT ──→ SCREEN_WORLD
 *   SCREEN_WORLD ──[end of year]──→ SCREEN_END_OF_YEAR ──→ SCREEN_WORLD
 *   SCREEN_WORLD ──[hire]──→ SCREEN_HIRE ──→ SCREEN_WORLD
 *   SCREEN_WORLD ──[buy land]──→ SCREEN_BUY_LAND ──→ SCREEN_WORLD
 *   SCREEN_WORLD ──[member roster]──→ SCREEN_MEMBER_ROSTER ──→ SCREEN_WORLD
 *   SCREEN_WORLD ──[hole stats]──→ SCREEN_HOLE_STATS ──→ SCREEN_WORLD
 *
 *   Toutes les infoscreens ont :
 *     - Fond noir (black.pcx) en overlay
 *     - Version _alpha.pcx pour transparence
 *     - Bouton "OK" ou "Close" pour retour
 */

// ================================================================
// ÉTATS INITIALISÉS PAR INITGAMESTATE
// ================================================================

/**
 * Simule l'initialisation de l'UI par InitGameState.
 * 
 * Dans l'original @ 0x4a50db (1894 insn) :
 *   1. Parse progolfers.dta + celebrities.dta
 *   2. Crée les objets Persona pour chaque golfeur
 *   3. Charge les surfaces PCX via JGL/JGLSprite
 *   4. Configure les boutons du menu titre
 *   5. Affiche l'écran titre avec timer
 *
 * Les PCX sont chargés via une fonction de type :
 *   LoadPCX(filename, &surface, palette)
 *   → Crée DIBSection, décompresse PCX (RLE), applique palette
 *
 * @param state  État UI à initialiser
 */
void UI_InitState(UIState* state)
{
    state->currentScreen = SCREEN_SPLASH;
    state->previousScreen = SCREEN_NONE;
    state->toolbarActive = 0;
    state->courseTheme = 0;
    state->dialogOpen = 0;
}

/**
 * Fonction de mise à jour du menu titre.
 * Appelée depuis InitGameState après le splash.
 * Boucle GetAsyncKeyState / input pour les boutons.
 *
 * @return  Screen sélectionné
 */
GameScreen UI_TitleMenu(void)
{
    // Dans l'original : boucle de polling
    // GetAsyncKeyState pour les touches de raccourci
    // Hit test clavier pour les boutons (coordonnées écran)
    // Retourne le screen choisi
    
    return SCREEN_WORLD;  // Simplifié
}

/**
 * Change l'écran actif.
 * 
 * Dans l'original :
 *   - Cache les surfaces PCX de l'écran précédent
 *   - Charge/affiche les surfaces du nouvel écran
 *   - Met à jour les handlers d'input
 *
 * @param state  État UI
 * @param newScreen Nouvel écran
 */
void UI_SetScreen(UIState* state, GameScreen newScreen)
{
    state->previousScreen = state->currentScreen;
    state->currentScreen = newScreen;
    
    // Dans l'original : JGL_PushMatrix → Clear → BitBlt nouvelle surface
    // Les PCX sont des DIBSections GDI32, pas du Canvas HTML
    // Certains écrans sont overlay (black.pcx + _alpha.pcx)
}

/**
 * Active une barre d'outils dans la vue monde.
 * Les panels sont : BaseTerrain, Building, Elevation, Amenities, Employee
 * 
 * Dans l'original : click sur bouton → affiche masque le panel
 * Le panel est dessiné dans la zone WorldBase (bas de l'écran)
 *
 * @param state  État UI
 * @param toolbar Index de la barre (0-4)
 */
void UI_SetToolbar(UIState* state, int toolbar)
{
    state->activeToolbar = toolbar;
    // Affiche/masque surfaces PCX correspondantes
}

// ================================================================
// RÉFÉRENCES DANS LE CODE ORIGINAL
// ================================================================
//
// WinMain @ 0x4a682f (164 insn):
//   0x4a6855: call [0x4ba130]  → GetVersion()
//   0x4a6888: call 0x4a794d    → HeapSetup()
//   0x4a689a: call 0x4a8dec    → SystemCheck()
//   0x4a68b0: call 0x4a93ff    → InitGameSystems()
//   0x4a68b5: call [0x4ba0bc]  → GetModuleHandle/StartupInfo?
//   0x4a68c0: call 0x4ab240    → CreateMainWindow()
//   0x4a68ca: call 0x4aaff3    → InitSound()
//   0x4a68cf: call 0x4aaf3a    → InitGraphics()
//   0x4a68d4: call 0x4a50db    → InitGameState() ← UI + MENU + TOUT
//   0x4a6903: call [0x4ba088]  → SetTimer(hWnd, 1, interval, 0)
//   0x4a690a: call 0x45baf0    → JGL init?
//   0x4a6913: call 0x4a5108    → GameLoopCallback() (première frame)
//   0x4a6924: call 0x4aad6a    → Boucle messages Windows
//   0x4a6932: call 0x4a5119    → GameLoop exit handler
//   0x4a6940: call 0x4ab372    → Cleanup graphics
//   0x4a6949: call 0x4ab3ab    → Cleanup systems
//
// Chargement PCX (depuis InitGameState + strings) :
//   Chaque PCX est chargé via une fonction dédiée dans jgld.dll
//   Les surfaces sont stockées dans des DIBSections GDI32
//   Les écrans sont composés par BitBlt overlay
//
// Note : le jeu n'a PAS de state machine UI explicite.
// Les transitions sont gérées par :
//   - GetAsyncKeyState() pour les touches clavier
//   - Hit test clavier pour les boutons virtuels à l'écran
//   - Pas de WM_COMMAND ou de Windows controls ! 
//   - Tout est custom paint en GDI32
//   - Le "state" est implicite via quelles surfaces sont visibles
