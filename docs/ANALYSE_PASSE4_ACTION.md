# Analyse PASSE 4 — Couche Interface & Actions de SimGolf

> Généré le 21 mai 2026 — analyse des fichiers décompilés `game_ui_system.c`, `game_ui_statemachine.h`, `game_input_handler.c`, `game_start_action.c`

---

## 1. CARTOGRAPHIE DES FONCTIONS (Adresses Mémoire)

### Fonctions UI

| Adresse | Nom | Taille (insn) | Rôle |
|---------|-----|:-------------:|------|
| `0x004a50db` | `InitGameState()` | 1 894 | Initialisation complète UI + données + menu |
| `0x004a5108` | `GameLoopCallback()` | 1 876 | Boucle callback timer : input → tick → render |
| `0x004a682f` | `WinMain()` | 164 | Point d'entrée : heap → window → init → timer |
| `0x0047e000+` | `UI_Init()` | — | Initialise l'état UI (splash → loading → title) |
| `0x00447000+` | `UI_ShowScreen()` | — | Transition d'écran : masque ancien, affiche nouveau |
| `0x00442000+` | `UI_ShowInfoScreen()` | — | Affiche un overlay info (black.pcx + _alpha.pcx) |
| `0x00442000+` | `UI_CloseInfoScreen()` | — | Ferme l'infoscreen → retour SCREEN_WORLD |
| `0x00447000+` | `UI_SetToolbar()` | — | Active un panel d'outils (0-4) |
| `0x00447000+` | `UI_SetTerrainTheme()` | — | Change le thème de terrain (0-3) |

### Fonctions de gestion d'événements

| Adresse | Nom | Taille (insn) | Rôle |
|---------|-----|:-------------:|------|
| `0x0049b7b0` | `InputHandler()` | 400 | Traite les événements utilisateur → actions jeu |
| `0x0049acf0` | `StartGolferAction()` | 2 336 | Lance l'action d'un golfeur (slot + dialogue + vtable) |
| `0x0049b690` | `HitTest()` | ~200 | Test de collision coordonnées écran → tuile |
| `0x00497d10` | `ValidateAndAdvance()` | — | Transition d'état après action |
| `0x00494f00` | `CoursEngine::Update()` | ~240 | Mise à jour du moteur de parcours |
| `0x004a4c70` | `DecodeInput()` | — | Décode un événement Windows → structure interne |
| `0x0049aa30` | `GetGolferName()` | — | Récupère le nom d'un golfeur par ID |
| `0x00494cb0` | `UpdateStatusBar()` | — | Met à jour la barre d'état UI |

### Fonctions de dialogue (popups)

| Adresse | Nom | Rôle |
|---------|-----|------|
| `0x0048e1c0` | `DialogBox_Create()` | Crée une boîte de dialogue modale |
| `0x0048e900` | `DialogBox_Show()` | Affiche la boîte de dialogue (input + rendu) |
| `0x0048e600` | `DialogBox_Close()` | Ferme la boîte de dialogue et retourne le résultat |

### Structures globales

| Adresse | Taille | Champ | Rôle |
|---------|:------:|-------|------|
| `0x008400b0` | 4 | `GameState*` | Pointeur vers l'état global du jeu |
| `0x00840aac` | 4 | `HWND` | Handle de la fenêtre principale |
| `0x00842160` | 4 | `hInstance` | Handle d'instance |
| `0x0083c340` | 256 | `statusBuf[]` | Buffer de message pour la barre d'état |
| `0x0083afcc` | 4 | `closeFlag` | Flag de fermeture du jeu |
| `0x00842040` | 0x480 | `InitPool[32]` | Pool d'initialisation (32 × 0x24) |

---

## 2. INTERFACES TYPESCRIPT

```typescript
// ─── GameScreen — Écrans du jeu ───
enum GameScreen {
    NONE = 0,
    // Séquence de démarrage
    SPLASH,              // bink64.pcx + logo.pcx (2-3s)
    LOADING,             // LoadingScreen01-12.pcx (aléatoire)
    TITLE,               // TitleBase.pcx + boutons
    // Menu titre
    SCENARIO_SELECT,     // TitleSelDiffMO/UnSel.pcx
    LOAD_GAME,           // Title_LoadGame.pcx
    PRO_SELECT,          // Title_PickAPro.pcx
    THEME_PACKS,         // Title_ThemePacks.pcx
    TOP10,               // Top10_Blank.pcx + Top10_Trophies.pcx
    CREDITS,             // creditsbckgrd.pcx
    // Jeu
    WORLD,               // WorldBase.pcx (vue isométrique + toolbars)
    PAUSE,               // PopUpIcons + TransPopups overlay
    // Info Screens (overlays)
    INFO_FINANCE,        // FINANCEreport.pcx
    INFO_COURSE,         // coursereport.pcx
    INFO_SGA,            // SGAreport.pcx + SGA.pcx
    INFO_HOLE_STATS,     // HoleSTAT.pcx
    INFO_MEMBER_ROSTER,  // memberRoster.pcx
    INFO_HIRE,           // hire.pcx
    INFO_BUY_LAND,       // buy_land.pcx
    INFO_HISTOGRAPH,     // histograph.pcx
    INFO_LOW_SCORE,      // lowscore.pcx
    INFO_SHORTCUTS,      // shortcuts.pcx
    INFO_PLAY_COMT,      // PlayComt.pcx (commentaires)
    INFO_ROUTE,          // route screens_*.pcx (5 variants)
    // Événements spéciaux
    TOURNAMENT_RESULT,   // tournament result.pcx
    END_OF_YEAR,         // endoyear.pcx
}

// ─── ToolbarPanel — 5 panels d'outils ───
enum ToolbarPanel {
    TERRAIN = 0,      // BaseTerrainPanel (surfaces)
    BUILDING = 1,     // BuildingPanel (constructions)
    ELEVATION = 2,    // ElevationPanel (dénivelés)
    AMENITIES = 3,    // AmenitiesPanel (décorations)
    EMPLOYEE = 4,     // EmployeePanel (personnel)
}

// ─── CursorType ───
enum CursorType {
    DEFAULT = 0,
    INFO = 1,          // Info Cursor (croix)
    BUILD = 2,         // Main
    ELEVATE = 3,
    PLANT = 4,
    DELETE = 5,
    PAINT = 6,
}

// ─── ButtonDef — Définition d'un bouton virtuel ───
interface ButtonDef {
    x: number;
    y: number;
    w: number;
    h: number;
    id: number;
    label: string | null;
    pcxNormal: string;      // Fichier PCX état normal
    pcxHover: string | null;    // PCX état survolé (Mouse Over)
    pcxPressed: string | null;  // PCX état enfoncé
    onClick: ((gs: GameState, btnId: number) => void) | null;
    soundId: number;         // ID son (button1.wav, button2.wav, etc.)
}

// ─── ToolbarState ───
interface ToolbarState {
    activePanel: ToolbarPanel;     // Panel actif (-1 = aucun)
    previousPanel: ToolbarPanel;   // Panel précédent
    buttonCount: number;
    terrainTheme: number;          // 0-3 (Parkland/Links/Desert/Tropical)
    selectedTool: number;          // Outil sélectionné (-1 = aucun)
    cursorType: CursorType;
}

// ─── InfoScreenState ───
interface InfoScreenState {
    screenType: GameScreen;
    isOpen: boolean;
    dataPage: number;
    maxPages: number;
    scrollPosition: number;
    selectedItem: number;
}

// ─── UIState — État complet de l'interface ───
interface UIState {
    currentScreen: GameScreen;
    previousScreen: GameScreen;
    screenTransition: boolean;

    toolbar: ToolbarState;
    infoScreen: InfoScreenState;

    // Écran titre
    titleButtonHover: number;    // -1 = aucun
    titleButtonPressed: number;
    splashTimer: number;
    splashPhase: number;         // 0=bink, 1=logo, 2=loading, 3=title
    loadingScreenIndex: number;

    // Dialogues
    dialogOpen: boolean;
    dialogType: number;          // 0=OK, 1=OK/Cancel, 2=Yes/No
    dialogText: string;

    // Pair selection
    pairSelectMode: boolean;
    selectedGolfer: [number, number];

    courseTheme: number;

    // Input
    mouseX: number;
    mouseY: number;
    mouseButtons: number;
    keyModifiers: number;
}

// ─── InputEvent — Événement d'entrée utilisateur ───
enum InputEventType {
    GOLFER_ACTIVATE = 0x03,      // Activation golfeur (démarrer tour)
    TERRAIN_CLICK = 0x05,        // Clic/Tap sur le terrain
    ESCAPE_CANCEL = 0x31,        // Échap / Annuler / Menu
    GOLFER_SELECT = 0x102,       // Sélection golfeur par ID
    UI_BUTTON = 0x103,           // Bouton d'interface
}

interface InputEvent {
    type: InputEventType;
    flags: number;               // 0x80=immediate, 0x10=multi
    param: number;               // ID golfeur, coordonnée, etc.
    subEvents: SubEvent[];       // stride 0x28 (pour multi-touch)
}

interface SubEvent {
    x: number;
    y: number;
    z: number;
}

// ─── Speed Modes ───
enum SimulationSpeed {
    FASTEST = 5000,    // 5 secondes entre tirs
    FAST = 10000,      // 10 secondes
    NORMAL = 20000,    // 20 secondes (défaut)
    SLOW = 30000,      // 30 secondes
}

// ─── DialogResult — Résultat des dialogues ───
enum DialogResult {
    CLOSE = 0,         // Fermer le jeu
    SPEED_MENU = 1,    // Menu vitesse
    IDLE = 2,          // Inactif
    RESUME = 3,        // Reprendre
}

// ─── SoundDef — Sons UI ───
interface SoundDef {
    filename: string;
    // Tous stockés dans sounds/interface/
}

const UI_SOUNDS: SoundDef[] = [
    { filename: "button1.wav" },
    { filename: "button2.wav" },
    { filename: "button3.wav" },
    { filename: "bass down 2.wav" },
    { filename: "bass up 2.wav" },
    { filename: "slide pop up.wav" },
    { filename: "check box.wav" },
    { filename: "text box.wav" },
    { filename: "building.wav" },
    { filename: "path.wav" },
    { filename: "bridge.wav" },
    { filename: "bench.wav" },
    { filename: "place rocks 1.wav" },
    { filename: "place water.wav" },
    { filename: "unavailable.wav" },
    { filename: "wrong.wav" },
    { filename: "violin down 2.wav" },
    { filename: "test 2.wav" },
    { filename: "test 7.wav" },
    { filename: "test 9.wav" },
    { filename: "test 10.wav" },
];

// ─── Dimensions UI ───
const UI_CONSTANTS = {
    SCREEN_WIDTH: 800,
    SCREEN_HEIGHT: 600,
    WORLD_VIEW_TOP: 0,
    WORLD_VIEW_HEIGHT: 460,
    TOOLBAR_TOP: 460,
    TOOLBAR_HEIGHT: 140,
    INFO_OVERLAY_TOP: 0,
    INFO_OVERLAY_WIDTH: 800,
    INFO_OVERLAY_HEIGHT: 600,
    TOOLBAR_BTN_X: 10,
    TOOLBAR_BTN_Y: 465,
    TOOLBAR_BTN_W: 48,
    TOOLBAR_BTN_H: 48,
    NUM_TOOLBAR_BUTTONS: 5,
};
```

---

## 3. LOGIQUE ALGORITHMIQUE

### 3.1 Machine d'état UI (transitions d'écrans)

```
┌──────────────────────────────────────────────────────────────┐
│                    MACHINE D'ÉTAT UI                         │
├──────────────────────────────────────────────────────────────┤
│                                                              │
│  SCREEN_SPLASH ──[timer 2s]──→ SCREEN_LOADING               │
│       │                               │                      │
│       │                               ▼                      │
│       │                        SCREEN_TITLE                  │
│       │                         │    │    │    │    │        │
│       │     ┌───────────────────┘    │    │    │    └───┐    │
│       │     ▼                       ▼    ▼    ▼        ▼    │
│       │  SCENARIO_SELECT      LOAD_GAME  PRO  TOP10  CREDITS│
│       │     │                     │       │     │       │    │
│       │     └─────────┬───────────┘       │     │       │    │
│       │               ▼                   │     │       │    │
│       │          SCREEN_LOADING ──────────┘     │       │    │
│       │               │                         │       │    │
│       │               ▼                         │       │    │
│       │          SCREEN_WORLD ◄──────────────────┘       │    │
│       │               │                                  │    │
│       │          ┌────┼────┬────┬────┬────┬────┬────┐    │    │
│       │          ▼    ▼    ▼    ▼    ▼    ▼    ▼    ▼    │    │
│       │       PAUSE INFO FIN- COURSE SGA  HOLE  MEMB  HIRE│   │
│       │        │    ANCE REPORT      STATS ROSTER       │    │
│       │        │     │     │     │     │      │      │    │    │
│       │        └─────┴─────┴─────┴─────┴──────┴──────┘    │    │
│       │               │                                  │    │
│       │               ▼                                  │    │
│       │          SCREEN_WORLD                             │    │
│       │               │                                  │    │
│       │          ┌────┴────┐                              │    │
│       │          ▼         ▼                              │    │
│       │     TOURNAMENT  END_OF_YEAR → SCREEN_WORLD       │    │
│       │     _RESULT                                       │    │
│       │          │                                        │    │
│       │          ▼                                        │    │
│       │     SCREEN_WORLD                                  │    │
│       │               │                                   │    │
│       │               ▼                                   │    │
│       │          [EXIT]                                    │    │
│                                                              │
│  PAUSE → Resume → SCREEN_WORLD                               │
│  PAUSE → Save   → (sauvegarde) → SCREEN_WORLD               │
│  PAUSE → Quit to Menu → SCREEN_TITLE                         │
│  PAUSE → Quit to Desktop → EXIT                              │
│                                                              │
└──────────────────────────────────────────────────────────────┘
```

### 3.2 Dispatcher d'événements utilisateur (InputHandler @ 0x49b7b0)

```
FONCTION InputHandler(gameState, event, forceFlag):

    SI gameState == NULL : RETOUR
    SI event == NULL : RETOUR

    // 1. Décoder l'événement Windows → structure interne
    resultat = DecodeInput(gameState.inputBuffer, event, &result)
    SI resultat == 0 : RETOUR

    // 2. Traiter selon le type
    eventType = resultat[0]

    SELON eventType :

        CAS 0x31 (ESCAPE_CANCEL) :
            // Touche Échap → annuler / menu pause
            gameState.vtable[0x14]()     // Cancel
            ValidateAndAdvance(gameState)
            TERMINER

        CAS 0x03 (GOLFER_ACTIVATE) :
            SI resultat.flags == 0x80 :
                golferId = resultat.param
                StartGolferAction(gameState, golferId, 1)  // forcé
            TERMINER

        CAS 0x05 (TERRAIN_CLICK) :
            SI result.subEvents > 0 :
                POUR CHAQUE sous-événement :
                    HitTest(gameState, coord, x, z)
            SINON SI result.flags != 0x80 :
                param = resultat.param
                code = gameState.vtable[0x54](param, 0x83ff9c, &resultatHit)
                StartGolferAction(gameState, param, 1)
            TERMINER

        CAS 0x102 (GOLFER_SELECT) :
            targetId = resultat.param
            slotIndex = 0
            POUR slotIndex < 16 :
                SI gameState.slots[slotIndex].golferId == targetId :
                    stateStr = resultat.sousParam
                    SI stateStr != null :
                        gameState.slots[slotIndex].state = stateStr[0]
                    SORTIR
                slotIndex++
            TERMINER

        CAS 0x103 (UI_BUTTON) :
            param = resultat.param
            button = resultat.data[0x18]
            gameState.vtable[0x10](param, button, 0)
            TERMINER
    FIN SELON

    // 3. Si événement forcé (multi-touch / continu)
    SI forceFlag :
        SI flags & 0x80 :  // Action immédiate
            StartGolferAction(gameState, golferId, 1)
        SINON SI flags & 0x10 :  // Multi-événements
            POUR i = 0 à count-1 :
                HitTest(gameState, subEvt + 4, subEvt.x, subEvt.z)
                subEvt += 0x28
    FIN SI
```

### 3.3 StartGolferAction — Lancement du tour d'un golfeur

```
FONCTION StartGolferAction(gameState, golferId, forceFlag) → booléen

    // 1. Trouver le slot du golfeur
    slotIndex = 0
    POUR slotIndex < 16 :
        SI gameState.slots[slotIndex].golferId == golferId :
            SORTIR
        slotIndex++

    SI slotIndex >= 16 :
        RETOUR erreur  // Slot introuvable

    // 2. Si forcé → action directe
    SI forceFlag :
        ALLER à forced_action

    // 3. Afficher dialogue "Prêt à jouer"
    currentGolfer = gameState.currentGolfer
    previousGolfer = gameState.previousGolfer

    SI currentGolfer == previousGolfer OU
       currentGolfer == gameState.slots[1].golferId :
        ALLER à simulation_loop  // Pas de dialogue

    // Afficher noms golfeurs
    nom1 = GetGolferName(gameState, gameState.slots[0].golferId)
    nom2 = GetGolferName(gameState, gameState.slots[1].golferId)
    UpdateStatusBar(0, nom1, -1, -1)
    UpdateStatusBar(1, nom2, -1, -1)

    // Boîte de dialogue "Prêt à jouer" (popup modale)
    dialogResult = DialogBox_Create(DIALOG_FORMAT, DIALOG_SIMPLE_MSG, ...)

    SELON dialogResult :
        CAS DLG_CLOSE :     closeFlag = 1 ; ALLER cleanup
        CAS DLG_SPEED :     // Menu vitesse
            speedResult = DialogBox_Create(DIALOG_FORMAT, DIALOG_SPEED_MSG, ...)
            // 0=5s, 1=10s, 2=20s(défaut), 3=30s
            SI speedResult entre 0 et 3 :
                gameState.delayBetweenShots = SPEEDS[speedResult]
        CAS DLG_IDLE :      ALLER cleanup
        CAS DLG_RESUME :    ALLER simulation_loop

    // 4. Boucle de simulation forcée
    forced_action:
        gameState.vtable[0x68](gameState, golferId)  // Dispatch simulation

    // 5. Boucle slots (comme GameTickFunction)
    simulation_loop:
        POUR CHAQUE slot actif :
            SI slot.état == READY :
                slot.état = RUNNING
                gameState.vtable[0x68](gameState, slot.golferId)
                slot.timer = timeGetTime()

    cleanup:
        NETTOYER
        RETOUR succès
```

### 3.4 Boucle de rendu UI (appelée depuis GameLoopCallback)

```
FONCTION UI_RenderFrame(uiState, gameState):

    // 1. Effacer l'écran (JGL)
    JGL_PushMatrix()
    JGL_Clear()

    // 2. Dessiner le fond selon l'écran actif
    SELON uiState.currentScreen :

        CAS SCREEN_TITLE :
            BitBlt(0, 0, 800, 600, TitleBase.surface)
            SI uiState.titleButtonHover != -1 :
                BitBlt(btn.x, btn.y, btn.w, btn.h, TitleMO.surface)
            SINON :
                BitBlt(btn.x, btn.y, btn.w, btn.h, TitleUnSel.surface)
            // Afficher les boutons

        CAS SCREEN_WORLD :
            // 1. Rendu isométrique (Terrain::render — OpenGL)
            Terrain::render(gameState.terrain, focus, zoom)
            // 2. Composition JGL overlay
            BitBlt(0, 460, 800, 140, WorldBase.surface)
            // 3. Panel d'outils actif (si ouvert)
            SI uiState.toolbar.activePanel != -1 :
                panel = uiState.toolbar.activePanel
                BitBlt(..., uiState.toolbarPanelPCX[panel].surface)
                BitBlt(..., uiState.toolbarPanelAlpha[panel].surface)  // transparence

        CAS SCREEN_PAUSE :
            // Fond monde + overlay popup
            BitBlt(0, 0, 800, 600, WorldBase.surface)
            BitBlt(..., PopUpIcons.surface)
            BitBlt(..., PopUpIcons_A.surface)  // alpha
            BitBlt(..., TransPopups.surface)

        CAS SCREEN_INFO_* :
            // Overlay semi-transparent
            BitBlt(0, 0, 800, 600, black.surface)
            BitBlt(..., screen_alpha.surface)   // transparence
            BitBlt(..., screen_base.surface)    // contenu
            // Bouton OK / Close
            BitBlt(..., okstates.surface)

    // 4. Final compositing
    JGL_PopMatrix()
    StretchBlt(hDC, 0, 0, 800, 600, hJGLDC, 0, 0, 800, 600, SRCCOPY)
    // Présentation
    GdiFlush()
```

### 3.5 Système de dialogues (Boîtes modales)

```
FONCTION DialogBox_Create(formatStr, msgStr, ...) → int:

    // Format : template de dialogue custom
    // Utilise les PCX PopUpIcons + TransPopups pour l'affichage
    // Pas de Windows dialog — tout est custom GDI paint

    // 1. Afficher la popup
    BitBlt(..., TransPopups.surface)       // Fond popup
    BitBlt(..., PopUpIcons.surface)        // Icône
    DrawText(hDC, ..., msgStr)             // Message

    // 2. Afficher les boutons
    SELON dialogueType :
        CAS 0 :  // OK simple
            BitBlt(..., Pop_upOK.surface)
        CAS 1 :  // OK / Cancel
            BitBlt(..., Pop_upOK.surface)   // repositionné
            BitBlt(..., Pop_upCancel.surface)
        CAS 2 :  // Yes / No
            BitBlt(..., YesButton.surface)
            BitBlt(..., NoButton.surface)

    // 3. Boucle d'attente (polling input)
    TANT QUE pas de résultat :
        msgs = GetAsyncKeyState()  // Pas de GetMessage !
        SI clic sur bouton OK : résultat = DLG_RESUME
        SI clic sur bouton Speed : résultat = DLG_SPEED
        SI clic sur bouton Close : résultat = DLG_CLOSE
        ...

    // 4. Nettoyage
    BitBlt(..., TransPopups.surface, DSTINVERT)  // Efface la popup
    RETOURNER résultat
```

---

## 4. INVENTAIRE DES RESSOURCES UI

### PCX d'interface (84 fichiers identifiés)

| Catégorie | Fichiers | Usage |
|-----------|----------|-------|
| Splash | `bink64.pcx`, `logo.pcx` | Écran d'accueil |
| Loading | `LoadingScreen01-12.pcx` | Écrans de chargement (×12, aléatoire) |
| Titre | `TitleBase.pcx`, `TitleMO`, `TitleUnSel`, `TitleSelDiffMO/UnSel`, `Title_LoadGame`, `Title_PickAPro`, `Title_ThemePacks` | Menu principal |
| Monde | `WorldBase.pcx`, `WorldButton.pcx` | Vue isométrique |
| Panels | `BaseTerrainPanel`, `BuildingPanel`, `ElevationPanel`, `AmenitiesPanel`, `EmployeePanel` (+ _A) | 5 barres d'outils |
| Boutons | `CGbuttons`, `InfoButtons`, `ChooseAlphaButtons` (× _A) | Boutons d'action |
| Thèmes | `TerrainButtons×4` (Parkland/Desert/Links/Tropical) | Choix thème |
| Popups | `PopUpIcons`, `Pop_upOK`, `TransPopups`, `TrophyParts` (+ _A) | Boîtes modales |
| Marqueurs | `TacksandArrow`, `tacs&tees` | Curseurs terrain |
| Infoscreens | `black.pcx`, `FINANCEreport`, `coursereport`, `SGA`, `HoleSTAT`, `memberRoster`, `hire`, `buy_land`, `histograph`, `lowscore`, `shortcuts`, `PlayComt`, `route screens_*`, `endoyear`, `tournament result` | Écrans info (overlay) |
| Personnages | `bodies/*.pcx`, `heads/*.pcx` | Golfeurs |
| Paysage | `data/{parkland,desert,links,tropical}.pcx`, `cliffs01.pcx`, `course1.pcx`, `jackal.pcx`, `gbubbles.pcx` | Textures + décors |

### Sons UI (21 fichiers)

Tous dans `sounds/interface/` : `button1-3.wav`, `bass up/down 2.wav`, `slide pop up.wav`, `check box.wav`, `text box.wav`, `building.wav`, `path.wav`, `bridge.wav`, `bench.wav`, `place rocks 1.wav`, `place water.wav`, `unavailable.wav`, `wrong.wav`, `violin down 2.wav`, `test {2,7,9,10}.wav`

---

## 5. RÉFÉRENCES CROISÉES

### Appels depuis WinMain
```
WinMain @ 0x4a682f
  ├── GetVersion()          @ 0x4a6855
  ├── HeapSetup()           @ 0x4a794d
  ├── SystemCheck()         @ 0x4a8dec
  ├── InitGameSystems()     @ 0x4a93ff
  ├── [0x4ba0bc]            @ GetModuleHandle / StartupInfo
  ├── CreateMainWindow()    @ 0x4ab240
  ├── InitSound()           @ 0x4aaff3
  ├── InitGraphics()        @ 0x4aaf3a
  ├── InitGameState()       @ 0x4a50db (← TOUTE L'UI)
  ├── SetTimer(hWnd, 1, interval, NULL)
  ├── JGL init              @ 0x45baf0
  ├── GameLoopCallback()    @ 0x4a5108 (1ère frame)
  ├── Message loop          @ 0x4aad6a
  ├── GameLoop exit         @ 0x4a5119
  ├── CleanupGraphics()     @ 0x4ab372
  └── CleanupSystems()      @ 0x4ab3ab
```

### Appels depuis GameLoopCallback
```
GameLoopCallback @ 0x4a5108
  ├── GetMessage() / DispatchMessage()    → traitement Windows
  ├── GameTickFunction @ 0x49846c        → SIMULATION
  ├── UI_Update()                        → mise à jour interface
  └── Render()
      ├── Terrain::render()              → rendu OpenGL 3D
      ├── JGL compositing                → sprites 2D
      └── BitBlt / StretchBlt            → présentation finale
```

---

## 6. NOTES SUR L'ARCHITECTURE UI

- **Pas de contrôles Windows standards** — tout est custom paint via GDI32 (BitBlt/StretchBlt)
- **Pas de WM_COMMAND** — les événements sont en polling via `GetAsyncKeyState()`
- **La machine d'état est implicite** — basée sur quelles surfaces PCX sont visibles
- **Les transitions** : masquer l'ancien écran → afficher le nouveau → mettre à jour les zones cliquables
- **Les infoscreens** sont des overlays : `black.pcx` (fond) + `*_alpha.pcx` (transparence) + PCX principal
- **Les dialogues** sont des popups modales avec boucle d'attente locale (pas de GetMessage)
- **Appels système Windows** : `CreateWindowExA`, `SetTimer`, `GetAsyncKeyState`, `BitBlt`, `ShowWindow`, `LoadCursorA`, `ClipCursor`
