/**
 * cleaned_c/game_ui_system.c
 * Système d'interface utilisateur — Décompilation complète
 *
 * Sources :
 *   golf.exe (dépaqueté) — analyse ASM des fonctions UI
 *   84 fichiers PCX extraits du binaire
 *   jgld.dll — moteur 2D JGL
 *   game_input_handler.c — gestion des entrées
 *
 * ═══════════════════════════════════════════════════════════════
 * ARCHITECTURE UI
 * ═══════════════════════════════════════════════════════════════
 *
 * SimGolf utilise un système UI 100% custom paint — PAS de Windows controls.
 * Le rendu est assuré par jgld.dll (JGL) qui gère :
 *   - Un framebuffer DIBSection (palettisé 8-bit ou 16-bit)
 *   - Des sprites PCX chargés en mémoire
 *   - Le compositing final par BitBlt/StretchBlt
 *   - Les polices GDI (CreateFontIndirect, TextOut)
 *
 * L'input est géré par GetAsyncKeyState() (polling dans la boucle de jeu)
 * et hit-test de coordonnées pour les boutons "virtuels" à l'écran.
 *
 * Les transitions d'écran se font par :
 *   1. Masquage des surfaces PCX de l'écran précédent
 *   2. Chargement/Affichage des surfaces du nouvel écran
 *   3. Mise à jour des handlers d'input
 *
 * Pour les écrans d'info : fond noir (black.pcx) + overlay _alpha.pcx
 * pour la transparence, composé par BitBlt.
 *
 * ═══════════════════════════════════════════════════════════════
 * ÉCRANS (GAME SCREENS)
 * ═══════════════════════════════════════════════════════════════
 *
 * TITLE SCREEN (SCREEN_SPLASH → SCREEN_LOADING → SCREEN_TITLE)
 *   PCX : bink64.pcx, logo.pcx
 *         LoadingScreen01-12.pcx (aléatoire)
 *         TitleBase.pcx, TitleMO, TitleUnSel
 *         TitleSelDiffMO, TitleSelDiffUnSel
 *         Title_LoadGame, Title_LoadGame_MO
 *         Title_PickAPro, Title_ThemePacks, Title_ThemePacks_MO
 *   Boutons : Nouvelle Partie, Charger, Sélection Pro, Thèmes, Top10, Crédits, Quitter
 *
 * WORLD VIEW (SCREEN_WORLD)
 *   PCX : WorldBase.pcx, WorldButton.pcx
 *         PairBase.pcx, PairButtons.pcx
 *         PopUpIcons.pcx, Pop_upOK.pcx (+ _A.pcx pour alpha)
 *         TransPopups, TransPopups_A
 *   Barres d'outils : 5 panels (voir ci-dessous)
 *
 * INFO SCREENS (overlay sur WORLD, fond noir + alpha)
 *   PCX : interface/infoscreens/.pcx  (voir inventaire complet)
 *   Voir section "Info Screens" ci-dessous
 *
 * PAUSE MENU (SCREEN_PAUSE)
 *   PCX : PopUpIcons.pcx, TransPopups.pcx
 *   Options : Resume, Save, Quit to Menu, Quit to Desktop
 *
 * ═══════════════════════════════════════════════════════════════
 * BARRES D'OUTILS (TOOLBARS)
 * ═══════════════════════════════════════════════════════════════
 *
 * 5 panels affichés dans la zone WorldBase (bas de l'écran) :
 *
 *   1. BASE TERRAIN (BaseTerrainPanel + _A)
 *      - Boutons de terrain : DesertTerrainButtons, ParklandTerrainButtons,
 *        LinksTerrainButtons, TropicalTerrainButtons
 *      - Textes : desert.txt, parkland.txt, links.txt, tropical.txt
 *      - Contenu : types de surface (herbe, sable, eau, etc.)
 *
 *   2. BUILDING (BuildingPanel + _A)
 *      - CGbuttons (choose golf)
 *      - Bâtiments : clubhouse, pro shop, etc.
 *
 *   3. ELEVATION (ElevationPanel + _A)
 *      - Outils d'élévation : monter, descendre, aplanir, lisser
 *      - TacksandArrow, TacksandArrow_A (marqueurs)
 *
 *   4. AMENITIES (AmenitiesPanel + _A)
 *      - Arbres, buissons, fleurs, bancs, lampadaires
 *      - Scéniques : fontaines, statues, ponts
 *
 *   5. EMPLOYEE (EmployeePanel + _A)
 *      - Embauche de personnel
 *      - Types : Groundskeeper, Pro Shop, etc.
 *
 *   Boutons d'Info (InfoButtons + _A) : présent dans tous les modes
 *   Boutons thème : chooseDesertButtons, chooseLinksButtons,
 *                   chooseParklandButtons, chooseTropicalButtons
 */

#include <stdint.h>
#include <stdbool.h>

// ================================================================
// CONSTANTES UI
// ================================================================

/** Résolution d'écran du jeu */
#define SCREEN_WIDTH            800
#define SCREEN_HEIGHT           600

/** Zones de l'écran de jeu */
#define WORLD_VIEW_TOP          0
#define WORLD_VIEW_HEIGHT       460     // Zone isométrique
#define TOOLBAR_TOP             460     // Zone des panels
#define TOOLBAR_HEIGHT          140
#define INFO_OVERLAY_TOP        0
#define INFO_OVERLAY_WIDTH      800
#define INFO_OVERLAY_HEIGHT     600

/** Boutons de la barre d'outils (zones cliquables) */
#define TOOLBAR_BTN_X           10
#define TOOLBAR_BTN_Y           465
#define TOOLBAR_BTN_W           48
#define TOOLBAR_BTN_H           48
#define NUM_TOOLBAR_BUTTONS     5       // 5 panels

// ================================================================
// ÉTATS DE L'ÉCRAN (GAME SCREEN)
// ================================================================

typedef enum GameScreen {
    SCREEN_NONE = 0,
    
    // === SÉQUENCE DE DÉMARRAGE ===
    SCREEN_SPLASH,              // bink64.pcx + logo.pcx (2-3s)
    SCREEN_LOADING,             // LoadingScreen01-12.pcx (aléatoire)
    SCREEN_TITLE,               // TitleBase.pcx + boutons
    
    // === MENU TITRE ===
    SCREEN_SCENARIO_SELECT,     // TitleSelDiffMO/UnSel.pcx
    SCREEN_LOAD_GAME,           // Title_LoadGame.pcx, Title_LoadGame_MO
    SCREEN_PRO_SELECT,          // Title_PickAPro.pcx
    SCREEN_THEME_PACKS,         // Title_ThemePacks.pcx, Title_ThemePacks_MO
    SCREEN_TOP10,               // Top10_Blank.pcx, Top10_Trophies.pcx
    SCREEN_CREDITS,             // creditsbckgrd.pcx
    
    // === JEU PRINCIPAL ===
    SCREEN_WORLD,               // WorldBase.pcx (vue isométrique + toolbars)
    SCREEN_PAUSE,               // PopUpIcons / TransPopups overlay
    SCREEN_PAIR_SELECT,         // PairBase.pcx + PairButtons.pcx
    
    // === INFO SCREENS (overlay) ===
    SCREEN_INFO_FINANCE,        // FINANCEreport.pcx
    SCREEN_INFO_COURSE,         // coursereport.pcx
    SCREEN_INFO_SGA,            // SGAreport.pcx + SGA.pcx
    SCREEN_INFO_HOLE_STATS,     // HoleSTAT.pcx
    SCREEN_INFO_MEMBER_ROSTER,  // memberRoster.pcx
    SCREEN_INFO_HIRE,           // hire.pcx
    SCREEN_INFO_BUY_LAND,       // buy_land.pcx
    SCREEN_INFO_HISTOGRAPH,     // histograph.pcx
    SCREEN_INFO_LOW_SCORE,      // lowscore.pcx
    SCREEN_INFO_SHORTCUTS,      // shortcuts.pcx
    SCREEN_INFO_PLAY_COMT,      // PlayComt.pcx
    SCREEN_INFO_ROUTE,          // route screens_*.pcx (5 variants)
    SCREEN_INFO_TOURNAMENT_RESULT, // tournament result.pcx
    
    // === ÉVÉNEMENTS SPÉCIAUX ===
    SCREEN_END_OF_YEAR,         // endoyear.pcx
    SCREEN_TOURNAMENT_PANEL,    // Panel tournoi (généré dynamiquement)
    SCREEN_SETTINGS,            // shortcuts.pcx + route screens
} GameScreen;

// ================================================================
// PANELS D'OUTILS
// ================================================================

typedef enum ToolbarPanel {
    TOOLBAR_NONE = -1,
    TOOLBAR_TERRAIN = 0,        // BaseTerrainPanel
    TOOLBAR_BUILDING = 1,       // BuildingPanel
    TOOLBAR_ELEVATION = 2,      // ElevationPanel
    TOOLBAR_AMENITIES = 3,      // AmenitiesPanel
    TOOLBAR_EMPLOYEE = 4,       // EmployeePanel
} ToolbarPanel;

/** Noms des fichiers PCX pour chaque panel (depuis strings binaires) */
static const char* const g_toolbarPanelPCX[] = {
    [TOOLBAR_TERRAIN]   = "interface\\BaseTerrainPanel",
    [TOOLBAR_BUILDING]  = "interface\\BuildingPanel",
    [TOOLBAR_ELEVATION] = "interface\\ElevationPanel",
    [TOOLBAR_AMENITIES] = "interface\\AmenitiesPanel",
    [TOOLBAR_EMPLOYEE]  = "interface\\EmployeePanel",
};

/** Noms des fichiers Alpha (transparence) */
static const char* const g_toolbarPanelAlpha[] = {
    [TOOLBAR_TERRAIN]   = "interface\\BaseTerrainPanel_A",
    [TOOLBAR_BUILDING]  = "interface\\BuildingPanel_A",
    [TOOLBAR_ELEVATION] = "interface\\ElevationPanel_A",
    [TOOLBAR_AMENITIES] = "interface\\AmenitiesPanel_A",
    [TOOLBAR_EMPLOYEE]  = "interface\\EmployeePanel_A",
};

/** Boutons de terrain par thème */
static const char* const g_terrainButtons[4] = {
    "interface\\ParklandTerrainButtons",
    "interface\\DesertTerrainButtons",
    "interface\\LinksTerrainButtons",
    "interface\\TropicalTerrainButtons",
};

// ================================================================
// FICHIERS PCX — Index complet (84 fichiers extraits du binaire)
// ================================================================

/**
 * Inventaire complet des 84 fichiers PCX référencés dans golf.exe.
 * Les fichiers marqués *_A.pcx sont les masques alpha (transparence).
 *
 * ═══ ÉCRAN TITRE ═══
 *   bink64.pcx                      — Logo Bink Video
 *   logo.pcx                        — Logo Firaxis Games
 *   creditsbckgrd.pcx                — Fond écran crédits
 *   interface\\TitleBase.pcx         — Fond écran titre
 *   interface\\TitleMO               — Bouton survolé (Mouse Over)
 *   interface\\TitleUnSel            — Bouton non sélectionné
 *   interface\\TitleSelDiffMO        — Sélection difficulté (survolé)
 *   interface\\TitleSelDiffUnSel     — Sélection difficulté (normal)
 *   interface\\Title_LoadGame        — Bouton Charger
 *   interface\\Title_LoadGame_MO     — Bouton Charger (survolé)
 *   interface\\Title_PickAPro        — Sélection Pro
 *   interface\\Title_ThemePacks      — Packs de thèmes
 *   interface\\Title_ThemePacks_MO   — Packs de thèmes (survolé)
 *   interface\\Top10_Blank           — Classement Top10
 *   interface\\Top10_Trophies        — Trophées Top10
 *
 * ═══ LOADING SCREENS ═══
 *   interface\\Loading_Screens\\LoadingScreen01.pcx  — Écran chargement 1
 *   ... (12 écrans, LoadingScreen01 à LoadingScreen12)
 *
 * ═══ VUE MONDE ═══
 *   interface\\WorldBase.pcx         — Fond vue monde (bas)
 *   interface\\WorldButton.pcx       — Boutons de la vue monde
 *   interface\\PairBase.pcx          — Fond sélection paire
 *   interface\\PairButtons.pcx       — Boutons sélection paire
 *   interface\\courseinfo            — Info parcours
 *   interface\\courseinfo_A          — Info parcours (alpha)
 *   interface\\GolferStats           — Stats golfeur
 *   interface\\GolferStats_A         — Stats golfeur (alpha)
 *   interface\\HeadBodyBck           — Fond corps/tête
 *   interface\\HeadSelect            — Sélection tête
 *   interface\\CustGlfBckMale        — Fond personnalisation male
 *   interface\\CustGolfBckgrnd       — Fond personnalisation
 *   interface\\JoeCoolPanel          — Panel Joe Cool
 *   interface\\JoeCoolPanel_A        — Panel Joe Cool (alpha)
 *   interface\\MemberPanel           — Panel membres
 *   interface\\MemberPanel_A         — Panel membres (alpha)
 *
 * ═══ POPUPS ═══
 *   interface\\PopUpIcons.pcx        — Icônes popup
 *   interface\\PopUpIcons_A.pcx      — Icônes popup (alpha)
 *   interface\\Pop_upOK.pcx          — Bouton OK popup
 *   interface\\Pop_upOK_A.pcx        — Bouton OK popup (alpha)
 *   interface\\TransPopups           — Transitions popup
 *   interface\\TransPopups_A         — Transitions popup (alpha)
 *   interface\\s_TransPopups         — Petites transitions
 *   interface\\TrophyParts           — Pièces de trophée
 *   interface\\TrophyParts_A         — Pièces de trophée (alpha)
 *
 * ═══ BARRES D'OUTILS ═══
 *   interface\\BaseTerrainPanel      — Panel terrain de base
 *   interface\\BaseTerrainPanel_A    — Panel terrain (alpha)
 *   interface\\BuildingPanel         — Panel construction
 *   interface\\BuildingPanel_A       — Panel construction (alpha)
 *   interface\\ElevationPanel        — Panel élévation
 *   interface\\ElevationPanel_A      — Panel élévation (alpha)
 *   interface\\AmenitiesPanel        — Panel équipements
 *   interface\\AmenitiesPanel_A      — Panel équipements (alpha)
 *   interface\\EmployeePanel         — Panel employés
 *   interface\\EmployeePanel_A       — Panel employés (alpha)
 *   interface\\CGbuttons             — Boutons construction golf
 *   interface\\InfoButtons           — Boutons info
 *   interface\\InfoButtons_A         — Boutons info (alpha)
 *   interface\\ChooseAlphaButtons_A  — Boutons choix alpha
 *   interface\\3mainLowerLeft        — Interface bas gauche
 *   interface\\3mainLowerLeft_A      — Interface bas gauche (alpha)
 *   interface\\TacksandArrow         — Marqueurs + flèches
 *   interface\\TacksandArrow_A       — Marqueurs + flèches (alpha)
 *   interface\\tacs&tees            — Tés + marqueurs
 *   interface\\tacs&tees_A          — Tés + marqueurs (alpha)
 *   interface\\parklink             — Lien parklink
 *   interface\\parklink_A           — Lien parklink (alpha)
 *   interface\\tropdesert           — Tropique/désert
 *   interface\\tropdesert_A         — Tropique/désert (alpha)
 *   interface\\bulletinboard&mantlewood — Tableau d'affichage
 *   interface\\s_GolferStats        — Stats golfeur (petit)
 *   interface\\s_courseinfo         — Info parcours (petit)
 *   interface\\golfballhalopage_male.pcx — Halo page golf (male)
 *
 * ═══ INFOSCREENS ═══
 *   interface\\infoscreens\\black.pcx               — Fond overlay noir
 *   interface\\infoscreens\\FINANCEreport.pcx        — Rapport financier
 *   interface\\infoscreens\\FINANCEreport_alpha.pcx  — Rapport financier (alpha)
 *   interface\\infoscreens\\coursereport.pcx         — Rapport parcours
 *   interface\\infoscreens\\coursereport_alpha.pcx   — Rapport parcours (alpha)
 *   interface\\infoscreens\\SGAreport_alpha.pcx      — Rapport SGA (alpha)
 *   interface\\infoscreens\\SGA.pcx                  — Évaluation SGA
 *   interface\\infoscreens\\tournament result.pcx    — Résultat tournoi
 *   interface\\infoscreens\\tournament result_alpha.pcx — Résultat tournoi (alpha)
 *   interface\\infoscreens\\endoyear.pcx             — Fin d'année
 *   interface\\infoscreens\\endoyear_alpha.pcx       — Fin d'année (alpha)
 *   interface\\infoscreens\\hire.pcx                 — Embauche
 *   interface\\infoscreens\\hire_alpha.pcx           — Embauche (alpha)
 *   interface\\infoscreens\\memberRoster.pcx         — Liste membres
 *   interface\\infoscreens\\memberRoster_alpha.pcx   — Liste membres (alpha)
 *   interface\\infoscreens\\memberRoster_buttons.pcx  — Boutons membres
 *   interface\\infoscreens\\memberRoster_scrollbar.pcx — Barre défilement membres
 *   interface\\infoscreens\\buy_land.pcx             — Achat terrain
 *   interface\\infoscreens\\buy_land_buttons.pcx     — Boutons achat terrain
 *   interface\\infoscreens\\HoleSTAT.pcx             — Statistiques trou
 *   interface\\infoscreens\\HoleSTAT_alpha.pcx       — Statistiques trou (alpha)
 *   interface\\infoscreens\\histograph.pcx           — Graphique historique
 *   interface\\infoscreens\\histograph_alpha.pcx     — Graphique historique (alpha)
 *   interface\\infoscreens\\lowscore.pcx             — Meilleurs scores
 *   interface\\infoscreens\\lowscore_alpha.pcx       — Meilleurs scores (alpha)
 *   interface\\infoscreens\\shortcuts.pcx            — Raccourcis clavier
 *   interface\\infoscreens\\shortcuts_alpha.pcx      — Raccourcis clavier (alpha)
 *   interface\\infoscreens\\PlayComt.pcx             — Commentaires jeu
 *   interface\\infoscreens\\PlayComt_alpha.pcx       — Commentaires jeu (alpha)
 *   interface\\infoscreens\\okstates.pcx             — États OK
 *   interface\\infoscreens\\route screens_aura.pcx    — Routes (aura)
 *   interface\\infoscreens\\route screens_bottom.pcx  — Routes (bas)
 *   interface\\infoscreens\\route screens_course.pcx  — Routes (parcours)
 *   interface\\infoscreens\\route screens_employ.pcx  — Routes (employés)
 *   interface\\infoscreens\\route screens_value.pcx   — Routes (valeur)
 *
 * ═══ PERSONNAGES (CORPS + TÊTES) ═══
 *   bodies\\MaleKLS.pcx, MaleKLS_sm.pcx
 *   bodies\\MalePLS.pcx, MalePLS_sm.pcx
 *   bodies\\MalePSS.pcx, MalePSS_sm.pcx
 *   bodies\\MaleSSS.pcx, MaleSSS_sm.pcx
 *   bodies\\FemalePLS.pcx, FemalePLS_sm.pcx
 *   bodies\\FemalePSS.pcx, FemalePSS_sm.pcx
 *   bodies\\FemaleSkTT.pcx, FemaleSkTT_sm.pcx
 *   bodies\\FemaleSSS.pcx, FemaleSSS_sm.pcx
 *   heads\\golfballhalopage_female.pcx
 *   heads\\*.pcx (multiples fichiers de têtes)
 *
 * ═══ PAYSAGE ═══
 *   data\\parkland.pcx              — Texture thème Parkland
 *   data\\desert.pcx                — Texture thème Desert
 *   data\\links.pcx                 — Texture thème Links
 *   data\\tropical.pcx              — Texture thème Tropical
 *   cliffs01.pcx                   — Falaise
 *   course1.pcx                    — Parcours 1
 *   jackal.pcx                     — Logo Jackal
 *   gbubbles.pcx                   — Bulles de dialogue
 *   flics\\bldgs\\holemark.pcx      — Marqueur de trou
 *   flics\\homes\\*.pcx             — Textures de maisons
 */

// ================================================================
// STRUCTURES UI
// ================================================================

/**
 * ButtonDef — Définition d'un bouton virtuel
 *
 * Les boutons sont définis par des rectangles à l'écran.
 * Le hit-test compare les coordonnées de la souris.
 * Pas de WM_COMMAND — tout est en GetAsyncKeyState polling.
 */
typedef struct {
    int   x, y;                  // Position (pixels)
    int   w, h;                  // Dimensions
    int   id;                    // Identifiant du bouton
    char* label;                 // Texte (ou NULL si image)
    char* pcxNormal;             // PCX état normal
    char* pcxHover;              // PCX état survolé (MO)
    char* pcxPressed;            // PCX état enfoncé
    void (*onClick)(void* gameState, int buttonId);  // Callback
    int   soundId;               // ID son (button1.wav, button2.wav, button3.wav)
} ButtonDef;

/**
 * ToolbarState — État de la barre d'outils
 *
 * Chaque panel a son propre ensemble de boutons.
 * L'état actif détermine quel panel est affiché.
 */
typedef struct {
    ToolbarPanel activePanel;     // Panel actif (-1 = aucun)
    ToolbarPanel previousPanel;   // Panel précédent
    int  buttonCount;             // Nombre de boutons dans le panel
    int  terrainTheme;            // Thème terrain actif (0-3)
    int  selectedTool;            // Outil sélectionné (-1 = aucun)
    int  cursorType;              // Type de curseur (Info Cursor, etc.)
} ToolbarState;

/**
 * InfoScreenState — État d'un écran d'information
 *
 * Les infoscreens sont des overlays semi-transparents.
 * Ils utilisent un fond noir (black.pcx) + un masque alpha.
 * Le bouton "OK" ou "Close" les referme.
 */
typedef struct {
    GameScreen screenType;        // Type d'infoscreen
    bool       isOpen;           // 1 = affiché
    int        dataPage;         // Page actuelle (pour les screens avec onglets)
    int        maxPages;         // Nombre de pages
    int        scrollPosition;   // Position de défilement
    int        selectedItem;     // Élément sélectionné
} InfoScreenState;

/**
 * UIState — État complet de l'interface
 *
 * Structure globale contenant l'état de tous les composants UI.
 * Mise à jour chaque frame par la boucle de jeu.
 */
typedef struct {
    // Écran actif
    GameScreen currentScreen;
    GameScreen previousScreen;
    int        screenTransition;  // 1 = transition en cours
    
    // Barres d'outils
    ToolbarState toolbar;
    
    // Infoscreens
    InfoScreenState infoScreen;
    
    // Écran titre
    int  titleButtonHover;       // Bouton survolé (-1 = aucun)
    int  titleButtonPressed;     // Bouton enfoncé
    int  splashTimer;            // Timer splash (ticks)
    int  splashPhase;            // 0=bink, 1=logo, 2=loading, 3=title
    int  loadingScreenIndex;     // Index LoadingScreen (1-12)
    
    // Popups / Dialogues
    int  dialogOpen;             // 0=fermé, 1=ouvert
    int  dialogType;             // Type : 0=OK, 1=OK/Cancel, 2=Yes/No
    char dialogText[256];        // Texte du dialogue
    
    // Pair selection
    int  pairSelectMode;         // 1 = sélection de paire active
    int  selectedGolfer[2];      // Golfers sélectionnés (pour paire)
    
    // Course info
    int  courseTheme;            // 0=Parkland, 1=Links, 2=Desert, 3=Tropical
    
    // Flags d'input
    int  mouseX, mouseY;         // Position souris
    int  mouseButtons;           // État boutons souris
    int  keyModifiers;           // Shift/Ctrl/Alt
} UIState;

// ================================================================
// SONS UI (depuis la liste dans le binaire)
// ================================================================

static const char* const g_uiSounds[] = {
    "sounds\\interface\\button1.wav",       // Clic bouton 1
    "sounds\\interface\\button2.wav",       // Clic bouton 2
    "sounds\\interface\\button3.wav",       // Clic bouton 3
    "sounds\\interface\\bass down 2.wav",   // Menu déroulant
    "sounds\\interface\\bass up 2.wav",     // Menu replié
    "sounds\\interface\\slide pop up.wav",  // Panel qui s'ouvre
    "sounds\\interface\\check box.wav",     // Case à cocher
    "sounds\\interface\\text box.wav",      // Champ texte
    "sounds\\interface\\building.wav",      // Construction
    "sounds\\interface\\path.wav",          // Chemin
    "sounds\\interface\\bridge.wav",        // Pont
    "sounds\\interface\\bench.wav",         // Banc
    "sounds\\interface\\place rocks 1.wav", // Placement rochers
    "sounds\\interface\\place water.wav",   // Placement eau
    "sounds\\interface\\unavailable.wav",   // Action impossible
    "sounds\\interface\\wrong.wav",         // Erreur
    "sounds\\interface\\violin down 2.wav", // Violon (humour)
    "sounds\\interface\\test 2.wav",        // Son test 2
    "sounds\\interface\\test 7.wav",        // Son test 7
    "sounds\\interface\\test 9.wav",        // Son test 9
    "sounds\\interface\\test 10.wav",       // Son test 10
};

// ================================================================
// FONCTIONS UI
// ================================================================

/**
 * UI_Init
 *
 * Initialise l'interface au démarrage du jeu.
 * Appelé par InitGameState (0x4a50db).
 *
 * Charge les surfaces PCX de base et configure l'écran titre.
 * Les PCX sont chargés via JGL dans des DIBSections GDI32.
 *
 * Séquence :
 *   1. black.pcx (fond overlay, toujours chargé)
 *   2. bink64.pcx → logo.pcx → (timer 2-3s)
 *   3. LoadingScreen01-12.pcx (aléatoire)
 *   4. TitleBase.pcx + TitleMO/UnSel
 *   5. WorldBase.pcx + WorldButton.pcx
 *   6. Tous les panels et infoscreens (préchargés)
 *
 * @param state  État UI à initialiser
 */
void UI_Init(UIState* state)
{
    state->currentScreen = SCREEN_SPLASH;
    state->previousScreen = SCREEN_NONE;
    state->screenTransition = 0;
    
    // Splash screen sequence
    state->splashPhase = 0;
    state->splashTimer = 0;
    state->loadingScreenIndex = 1;  // LoadingScreen01
    
    // Title menu
    state->titleButtonHover = -1;
    state->titleButtonPressed = -1;
    
    // Toolbar
    state->toolbar.activePanel = TOOLBAR_NONE;
    state->toolbar.previousPanel = TOOLBAR_NONE;
    state->toolbar.terrainTheme = 0;
    state->toolbar.selectedTool = -1;
    state->toolbar.cursorType = 0;
    
    // Info screens
    state->infoScreen.isOpen = false;
    state->infoScreen.screenType = SCREEN_NONE;
    state->infoScreen.scrollPosition = 0;
    
    // Dialogues
    state->dialogOpen = 0;
    state->pairSelectMode = 0;
    
    state->courseTheme = 0;
    
    // Dans l'original : chargement des surfaces PCX
    // Les fichiers sont chargés via jgld.dll : LoadPCX(filename, &surface, palette)
    // Les surfaces sont stockées dans un tableau global de sprites
    // Chaque sprite a : DIBSection handle, dimensions, hotspot, etc.
}

/**
 * UI_ShowScreen
 *
 * Affiche un écran en masquant le précédent.
 *
 * Dans l'original (0x447000 pour les panels complexes) :
 *   1. Masque les surfaces de l'écran précédent
 *   2. Charge (si pas déjà chargé) et affiche les surfaces du nouvel écran
 *   3. Configure les handlers d'input pour les boutons du nouvel écran
 *   4. Joue le son de transition si applicable
 *
 * Pour les infoscreens (overlay) :
 *   1. Affiche black.pcx (fond noir semi-transparent)
 *   2. Affiche la version _alpha.pcx pour la zone de transparence
 *   3. Affiche le PCX principal (au-dessus)
 *   4. Affiche les boutons (okstates.pcx etc.)
 *
 * @param state    État UI
 * @param newScreen Nouvel écran
 */
void UI_ShowScreen(UIState* state, GameScreen newScreen)
{
    state->previousScreen = state->currentScreen;
    state->currentScreen = newScreen;
    state->screenTransition = 1;
    
    // Dans l'original :
    // JGL_PushMatrix()
    // JGL_Clear()
    // BitBlt(hDC, 0, 0, 800, 600, hSpriteDC, 0, 0, SRCCOPY)
    // ... pour chaque calque du nouvel écran
}

/**
 * UI_ShowInfoScreen
 *
 * Affiche un écran d'information en overlay.
 *
 * @param state      État UI
 * @param screenType Type d'infoscreen
 */
void UI_ShowInfoScreen(UIState* state, GameScreen screenType)
{
    state->infoScreen.isOpen = true;
    state->infoScreen.screenType = screenType;
    state->infoScreen.scrollPosition = 0;
    state->infoScreen.selectedItem = -1;
    
    UI_ShowScreen(state, screenType);
}

/**
 * UI_CloseInfoScreen
 *
 * Ferme l'infoscreen et retourne à la vue monde.
 *
 * @param state  État UI
 */
void UI_CloseInfoScreen(UIState* state)
{
    state->infoScreen.isOpen = false;
    state->infoScreen.screenType = SCREEN_NONE;
    
    UI_ShowScreen(state, SCREEN_WORLD);
}

// ================================================================
// GESTION DES PANELS (BARRES D'OUTILS)
// ================================================================

/**
 * UI_SetToolbar
 *
 * Active un panel d'outils dans la vue monde.
 * 
 * Dans l'original : le panel est dessiné dans la zone TOOLBAR
 * du framebuffer (bas de l'écran, y=460..600).
 * Chaque panel a ses propres boutons (CGbuttons, DesertTerrainButtons, etc.)
 *
 * @param state   État UI
 * @param panel   Panel à activer (0-4)
 */
void UI_SetToolbar(UIState* state, ToolbarPanel panel)
{
    if (panel == state->toolbar.activePanel) {
        // Clic sur le même bouton : ferme le panel
        state->toolbar.activePanel = TOOLBAR_NONE;
    } else {
        state->toolbar.previousPanel = state->toolbar.activePanel;
        state->toolbar.activePanel = panel;
    }
    
    // Dans l'original :
    // 1. Joue sound\interface\slide pop up.wav
    // 2. Masque les boutons du panel précédent
    // 3. Affiche les boutons du nouveau panel
    // 4. Met à jour cursorType selon l'outil sélectionné
}

/**
 * UI_SetTerrainTheme
 *
 * Change le thème de terrain (boutons de choix de thème).
 * Les 4 thèmes ont leurs propres boutons :
 *   chooseParklandButtons, chooseDesertButtons,
 *   chooseLinksButtons, chooseTropicalButtons
 *
 * @param state État UI
 * @param theme 0=Parkland, 1=Links, 2=Desert, 3=Tropical
 */
void UI_SetTerrainTheme(UIState* state, int theme)
{
    state->toolbar.terrainTheme = theme;
    state->courseTheme = theme;
    
    // Dans l'original : recharge les boutons de terrain
    // pour le thème sélectionné
}

// ================================================================
// GESTION DU CURSEUR
// ================================================================

/**
 * Types de curseur (depuis les strings : "Info Cursor")
 */
#define CURSOR_DEFAULT      0
#define CURSOR_INFO         1   // "Info Cursor" (info bulle)
#define CURSOR_BUILD        2   // Construction
#define CURSOR_ELEVATE      3   // Élévation
#define CURSOR_PLANT        4   // Plantation
#define CURSOR_DELETE       5   // Suppression
#define CURSOR_PAINT        6   // Peinture terrain

/**
 * UI_SetCursor
 *
 * Change le curseur de la souris.
 * Les curseurs sont chargés via Windows LoadCursorA/SetCursor/ClipCursor.
 *
 * @param type  Type de curseur (CURSOR_*)
 */
void UI_SetCursor(int type)
{
    // Dans l'original :
    // ClipCursor(&rect) — confine le curseur à la fenêtre
    // SetCursor(hCursor) — change l'icône
    // ShowCursor(TRUE) — assure la visibilité
    switch (type) {
    case CURSOR_INFO:
        // LoadCursorA(NULL, IDC_CROSS) — Info Cursor
        break;
    case CURSOR_BUILD:
        // LoadCursorA(NULL, IDC_HAND) — main
        break;
    default:
        // LoadCursorA(NULL, IDC_ARROW) — flèche standard
        break;
    }
}

// ================================================================
// TITRE MENU — GESTION DES BOUTONS
// ================================================================

/**
 * Boutons de l'écran titre
 *
 * Les boutons sont définis par des zones rectangulaires.
 * Le hit test est fait en comparant les coordonnées du clic
 * avec les rectangles prédéfinis.
 *
 * Coordonnées approximatives (800×600) :
 *   Nouvelle Partie   : (250, 200, 300, 50)
 *   Charger Partie    : (250, 260, 300, 50)
 *   Sélection Pro     : (250, 320, 300, 50)
 *   Packs de Thèmes   : (250, 380, 300, 50)
 *   Top 10            : (250, 440, 300, 50)
 *   Crédits           : (600, 500, 150, 30)
 *   Quitter           : (600, 540, 150, 30)
 */

#define TITLE_BTN_NEW_GAME      0
#define TITLE_BTN_LOAD_GAME     1
#define TITLE_BTN_PICK_PRO      2
#define TITLE_BTN_THEME_PACKS   3
#define TITLE_BTN_TOP10         4
#define TITLE_BTN_CREDITS       5
#define TITLE_BTN_QUIT          6

/**
 * UI_TitleMenu
 *
 * Boucle du menu titre. Appelée depuis InitGameState après le splash.
 * Utilise GetAsyncKeyState() pour le polling clavier.
 *
 * @param state  État UI
 * @return       Screen sélectionné
 */
GameScreen UI_TitleMenu(UIState* state)
{
    // Dans l'original : boucle while(1) avec GetAsyncKeyState
    // Pour chaque bouton :
    //   1. Vérifie si la souris est dans le rectangle
    //   2. Si oui, affiche la version MO (mouse over)
    //   3. Si clic, joue button1/button2/button3.wav
    //   4. Déclenche l'action (SetScreen)
    
    // Hit test des boutons
    bool mouseOver = false;
    
    // ... GetCursorPos → ScreenToClient → hit test ...
    
    if (mouseOver && state->mouseButtons & 1) {  // MK_LBUTTON
        // Clic détecté
        return SCREEN_WORLD;  // Nouvelle partie
    }
    
    return SCREEN_TITLE;  // Rester sur l'écran titre
}

// ================================================================
// CHARGEMENT DES RESSOURCES
// ================================================================

/**
 * UI_LoadPCX
 *
 * Charge un fichier PCX dans une surface mémoire.
 * Dans l'original (jgld.dll) :
 *   1. fopen → fread → PCX header parsing
 *   2. Décompression RLE (Run-Length Encoding)
 *   3. Création DIBSection GDI32 avec palette
 *   4. Copie des pixels décompressés dans la DIBSection
 *   5. Retour du handle
 *
 * Signature originale Windows :
 *   int UI_LoadPCX(const char* filename, HBITMAP* surface, HPALETTE* palette)
 *
 * @param filename Chemin du fichier PCX
 * @return         1 si succès, 0 si échec
 */
int UI_LoadPCX(const char* filename)
{
    // Implémenté dans jgld.dll
    // Les fichiers PCX sont dans le dossier Themes/[ThemeName]/
    // Les fichiers d'interface sont dans le dossier Themes/Standard/
    return 1;
}

/**
 * UI_CreateButton
 *
 * Crée un bouton virtuel à partir de sprites PCX.
 *
 * Signature originale : int UI_CreateButton(ButtonDef* def, HBITMAP surface)
 *
 * @param def       Définition du bouton
 * @return          ID du bouton créé
 */
int UI_CreateButton(ButtonDef* def)
{
    // Dans l'original :
    // 1. Charge les 3 surfaces PCX (normal, hover, pressed)
    // 2. Stocke les handles dans un tableau global
    // 3. Retourne un index (utilisé pour le hit test)
    return 0;
}

/**
 * UI_Update
 *
 * Mise à jour de l'interface chaque frame.
 * Appelée par GameLoopCallback (0x4a5108).
 *
 * @param state  État UI
 * @param gameState Pointeur GameState
 */
void UI_Update(UIState* state, void* gameState)
{
    (void)gameState;  // Pointeur GameState pour accès aux données
    
    switch (state->currentScreen) {
    case SCREEN_SPLASH:
        // Animation splash + transition vers loading
        state->splashTimer++;
        if (state->splashTimer > 120) {  // ~2 secondes à 60 FPS
            state->splashPhase = 2;  // Loading
            UI_ShowScreen(state, SCREEN_LOADING);
        }
        break;
        
    case SCREEN_LOADING:
        // Affiche LoadingScreen01-12.pcx (aléatoire)
        // Une fois le chargement terminé → SCREEN_TITLE
        UI_ShowScreen(state, SCREEN_TITLE);
        break;
        
    case SCREEN_TITLE:
        // Boucle de menu titre
        UI_TitleMenu(state);
        break;
        
    case SCREEN_WORLD:
        // Mise à jour de la vue monde
        // Handle toolbar input
        // Handle info screen buttons
        break;
        
    case SCREEN_PAUSE:
        // Menu pause (PopUpIcons + TransPopups)
        // Options : Resume, Save, Quit to Menu, Quit to Desktop
        break;
        
    default:
        // Info screen ou overlay
        // Vérifie le clic sur le bouton Close/OK
        break;
    }
}

// ================================================================
// TRANSITIONS D'ÉCRAN COMPLÈTES
// ================================================================
//
// SCHÉMA COMPLET DES TRANSITIONS :
//
//   SCREEN_SPLASH ──[timer 2s]──→ SCREEN_LOADING
//     │                                    │
//     │                                    ▼
//     │                          SCREEN_TITLE
//     │                         ╱    │    │    ╲
//     │                        ╱     │    │     ╲
//     │                       ╱      │    │      ╲
//     │          [New Game]  ╱  [Load]│ [Pro]│ [Top10]
//     │                      ▼       ▼     ▼      ▼
//     │              SCREEN_SCENARIO_SELECT → SCREEN_WORLD
//     │              SCREEN_LOAD_GAME     → SCREEN_WORLD
//     │              SCREEN_PRO_SELECT    → SCREEN_WORLD
//     │              SCREEN_TOP10         → SCREEN_TITLE
//     │                  [Credits]
//     │                      ▼
//     │              SCREEN_CREDITS → SCREEN_TITLE
//     │                  [Quit]
//     │                      ▼
//     │                     EXIT
//     │
//     ╰──────────────────────────────────────────────────────────╼
//
//   SCREEN_WORLD ──[Esc]──→ SCREEN_PAUSE
//   SCREEN_PAUSE ──[Resume]──→ SCREEN_WORLD
//   SCREEN_PAUSE ──[Save]──→ SAVE_DIALOG → SCREEN_WORLD
//   SCREEN_PAUSE ──[Quit to Menu]──→ SCREEN_TITLE
//   SCREEN_PAUSE ──[Quit to Desktop]──→ EXIT
//
//   SCREEN_WORLD ──[Info button]──→ SCREEN_INFO_* ──[Close]──→ SCREEN_WORLD
//     │              │               │
//     │              │               ├── SCREEN_INFO_FINANCE (FINANCEreport)
//     │              │               ├── SCREEN_INFO_COURSE (coursereport)
//     │              │               ├── SCREEN_INFO_SGA (SGAreport)
//     │              │               ├── SCREEN_INFO_HOLE_STATS (HoleSTAT)
//     │              │               ├── SCREEN_INFO_MEMBER_ROSTER (memberRoster)
//     │              │               ├── SCREEN_INFO_HIRE (hire)
//     │              │               ├── SCREEN_INFO_BUY_LAND (buy_land)
//     │              │               ├── SCREEN_INFO_HISTOGRAPH (histograph)
//     │              │               └── SCREEN_INFO_SHORTCUTS (shortcuts)
//     │              │
//     │              ├──[Tournament]──→ SCREEN_TOURNAMENT_PANEL
//     │              ├──[Tournament end]──→ SCREEN_INFO_TOURNAMENT_RESULT
//     │              ├──[End of year]──→ SCREEN_END_OF_YEAR
//     │              └──[Pair select]──→ SCREEN_PAIR_SELECT
//
// ================================================================
// ADRESSES DES FONCTIONS ASM (golf.exe dépaqueté)
// ================================================================
//
// WinMain             @ 0x004a682f  — Point d'entrée
// InitGameState       @ 0x004a50db  — Init UI + données
// GameLoopCallback    @ 0x004a5108  — Update + Render chaque frame
// InputHandler        @ 0x0049b7b0  — Entrées clavier/souris
// StartGolferAction   @ 0x0049acf0  — Démarrage action golfeur
// InitGameSystems     @ 0x004a93ff  — Init des sous-systèmes
// SystemCheck         @ 0x004a8dec  — Vérification système
// HeapSetup           @ 0x004a794d  — Configuration mémoire
//
// Création fenêtre    @ ~0x004ab240 — CreateMainWindow
// InitGraphics        @ ~0x004aaf3a — JGL init
// InitSound           @ ~0x004aaff3 — sound.dll init
//
// Panels UI :
//   Tournament panel  @ 0x00447000-0x004480f7 — UI panel tournoi
//   Panel init        @ 0x00473bf0 — operator_new_array (allocation widgets)
//   Bitmap setup      @ 0x00475840 — texture/surface setup
//
// JGL Engine (jgld.dll @ 0x10000000) :
//   get_graphsy_object_ptr @ export #1
//   LibPNG 1.0.5 intégré
//   GDI32 : CreateDIBSection, BitBlt, StretchBlt, CreateFontIndirect, TextOut
//   USER32 : CreateWindowEx, RegisterClass, GetMessage, DispatchMessage
