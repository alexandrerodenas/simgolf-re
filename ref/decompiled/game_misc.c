/**
 * cleaned_c/game_misc.c
 * Fonctions auxiliaires du pipeline WinMain.
 *
 * Sources : golf.exe dépaqueté
 *   CreateMainWindow  @ 0x4ab240 (1 083 insn)
 *   InitInstance      @ 0x4aaee2 (1 442 insn)
 *   CleanupAndExit    @ 0x4aad6a (1 569 insn)
 *
 * CreateMainWindow : enregistre la classe de fenêtre SimGolf
 * InitInstance     : crée et affiche la fenêtre principale
 * CleanupAndExit   : arrêt propre du jeu (KillTimer → ExitProcess)
 */

#include <windows.h>

// ================================================================
// Constantes de la fenêtre
// ================================================================

/** Titre de la fenêtre */
#define WINDOW_TITLE    "Sid Meier's SimGolf"

/** Dimensions par défaut (800×600) */
#define WINDOW_WIDTH     800
#define WINDOW_HEIGHT    600

/** Identifiant de la classe de fenêtre */
#define WINDOW_CLASS     "SimGolf"

/** Identifiant du timer de jeu */
#define GAME_TIMER_ID    1

// ================================================================
// Variables globales
// ================================================================

extern HINSTANCE g_hInstance;
extern HWND g_hWnd;

// ================================================================
// CreateMainWindow (0x4ab240)
// ================================================================

/**
 * Enregistre la classe de fenêtre principale.
 *
 * Configure :
 *   - Style : CS_HREDRAW | CS_VREDRAW (redessine au resize)
 *   - WndProc : gestionnaire de messages du jeu
 *   - Icône : ID 102 (depuis les ressources .rsrc)
 *   - Curseur : IDC_ARROW
 *   - Fond : BLACK_BRUSH (noir, pour éviter le flash blanc)
 *   - Nom de classe : "SimGolf"
 *
 * @param hInstance Handle de l'instance de l'application
 * @return 1 si la classe a été enregistrée, 0 sinon
 */
int CreateMainWindow(HINSTANCE hInstance)
{
    WNDCLASSEX wc;
    wc.cbSize        = sizeof(WNDCLASSEX);
    wc.style         = CS_HREDRAW | CS_VREDRAW | CS_DBLCLKS;
    wc.lpfnWndProc   = WndProc;  // Fonction définie dans game_winmain.c
    wc.cbClsExtra    = 0;
    wc.cbWndExtra    = 0;
    wc.hInstance     = hInstance;
    wc.hIcon         = LoadIcon(hInstance, MAKEINTRESOURCE(102));
    wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wc.lpszMenuName  = NULL;
    wc.lpszClassName = WINDOW_CLASS;
    wc.hIconSm       = NULL;

    return RegisterClassEx(&wc);
}

// ================================================================
// InitInstance (0x4aaee2)
// ================================================================

/**
 * Crée et affiche la fenêtre principale.
 *
 * La fenêtre utilise WS_OVERLAPPEDWINDOW avec WS_CLIPCHILDREN
 * pour éviter les problèmes de clipping avec les contrôles enfants.
 *
 * La fenêtre est créée centrée (CW_USEDEFAULT) avec une taille
 * de 800×600 pixels.
 *
 * @param hInstance Handle de l'instance
 * @param nCmdShow  Commande d'affichage (SW_SHOW, SW_SHOWMAXIMIZED...)
 * @return          Handle de la fenêtre, ou NULL
 */
HWND InitInstance(HINSTANCE hInstance, int nCmdShow)
{
    HWND hWnd = CreateWindowEx(
        0,                          // Style étendu
        WINDOW_CLASS,               // Classe enregistrée
        WINDOW_TITLE,               // Titre
        WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN,
        CW_USEDEFAULT, CW_USEDEFAULT,
        WINDOW_WIDTH, WINDOW_HEIGHT,
        NULL,                       // Pas de fenêtre parente
        NULL,                       // Pas de menu
        hInstance,                  // Handle de l'instance
        NULL                        // Pas de paramètres
    );

    if (hWnd != NULL) {
        // Stocke le handle dans le global
        g_hWnd = hWnd;
        g_hInstance = hInstance;

        // Affiche et met à jour la fenêtre
        ShowWindow(hWnd, nCmdShow);
        UpdateWindow(hWnd);

        // Démarre le timer de jeu
        SetTimer(hWnd, GAME_TIMER_ID, 33, NULL);  // ~30 FPS
    }

    return hWnd;
}

// ================================================================
// CleanupAndExit (0x4aad6a)
// ================================================================

/**
 * Arrête proprement le jeu et libère les ressources.
 *
 * Appelé lorsque la fenêtre est détruite (WM_DESTROY).
 *
 * Séquence d'arrêt :
 *   1. KillTimer — arrête le timer de jeu
 *   2. sound_release() — libère le système audio
 *   3. Terrain_closeSystem() — libère le moteur terrain
 *   4. JGL cleanup — libère les surfaces de rendu
 *   5. Libère les allocations globales
 *   6. ExitProcess() / PostQuitMessage()
 */
void CleanupAndExit(void)
{
    // 1. Arrête le timer de jeu
    if (g_hWnd) {
        KillTimer(g_hWnd, GAME_TIMER_ID);
    }

    // 2. Fermeture du son
    // sound_release() — libère SoundManager + 3 devices

    // 3. Fermeture du terrain
    // Terrain_closeSystem(terrainInstance)

    // 4. Libération JGL
    // Destruction des surfaces et objets graphiques

    // 5. Libération des allocations globales
    // (pool d'init, state, etc.)

    // 6. Quitte le processus
    // PostQuitMessage(0);
    // ExitProcess(0);
}

// ================================================================
// TABLE DE CORRESPONDANCE
// ================================================================
//
// CreateMainWindow
//   Adresse : 0x004ab240
//   1 083 instructions
//   Enregistre la classe "SimGolf" avec icône ID 102
//
// InitInstance
//   Adresse : 0x004aaee2
//   1 442 instructions
//   CreateWindowEx → ShowWindow → SetTimer
//   Taille fenêtre : 800×600
//
// CleanupAndExit
//   Adresse : 0x004aad6a
//   1 569 instructions
//   KillTimer → sound_release → Terrain_close → ExitProcess
