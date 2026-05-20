# SimGolf — Machine d'États UI

> Analyse basée sur les 646 PCX d'interface + code désassemblé
> Mai 2026

## 1. Diagramme des États

```
                    ┌─────────────────────────┐
                    │     SPLASH/INTRO         │
                    │  bink64.pcx (Bink logo)  │
                    │  logo.pcx (Firaxis)      │
                    │  LoadingScreen01-12.pcx  │
                    └──────────┬──────────────┘
                               │ auto
                               ▼
                    ┌─────────────────────────┐
                    │      TITLE SCREEN        │
                    │  TitleBASE.pcx (fond)    │
                    │  TitleMO.pcx (selected)  │
                    │  TitleUnSel.pcx (normal) │
                    │  ┌─────────────────────┐ │
                    │  │ New Game            │─┼──→ Scenario Select
                    │  │ Load Game           │─┼──→ Load Game
                    │  │ Pick a Pro          │─┼──→ Pro Selection
                    │  │ Theme Packs         │─┼──→ Theme Packs
                    │  │ Top 10 Scores       │─┼──→ Top 10
                    │  │ Credits             │─┼──→ Credits
                    │  │ Quit                │─┼──→ Exit
                    │  └─────────────────────┘ │
                    └──────────┬──────────────┘
                               │
            ┌──────────────────┼──────────────────┐
            ▼                  ▼                  ▼
  ┌──────────────────┐  ┌──────────────────┐  ┌──────────────────┐
  │  SCENARIO SELECT  │  │   LOAD GAME      │  │  PRO SELECTION   │
  │  TitleSelDiffMO   │  │  Title_LoadGame  │  │  Title_Pickapro  │
  │  TitleSelDiffUnSel│  │  Title_LoadGame_ │  │  CustGolfBckgrnd │
  │  (difficulty sel) │  │  MO              │  │  HeadSelect      │
  └──────────┬───────┘  └────────┬─────────┘  └────────┬─────────┘
             │                   │                      │
             └───────────────────┼──────────────────────┘
                                 │
                                 ▼
                    ┌─────────────────────────┐
                    │   LOADING SCREEN         │
                    │  LoadingScreen01-12.pcx  │
                    │  (aléatoire selon thème) │
                    └──────────┬──────────────┘
                               │
                               ▼
                    ┌─────────────────────────┐
                    │      WORLD VIEW          │◄────┐
                    │  WorldBase.pcx           │     │
                    │  WorldButton.pcx         │     │
                    │  ┌─────────────────────┐ │     │
                    │  │ Toolbars (bas)     │ │     │
                    │  │  BaseTerrainPanel  │ │     │
                    │  │  BuildingPanel     │ │     │
                    │  │  ElevationPanel    │ │     │
                    │  │  AmenitiesPanel    │ │     │
                    │  │  EmployeePanel     │ │     │
                    │  │  MemberPanel       │ │     │
                    │  │  InfoButtons       │ │     │
                    │  └─────────────────────┘ │     │
                    │  ┌─────────────────────┐ │     │
                    │  │ Left Panel          │ │     │
                    │  │  PairBase/PairButts │ │     │
                    │  │  courseinfo         │ │     │
                    │  │  GolferStats        │ │     │
                    │  └─────────────────────┘ │     │
                    └──────┬───┬───┬───┬──────┘     │
                           │   │   │   │            │
        ┌──────────────────┘   │   │   └────┐       │
        ▼                      ▼   ▼        ▼       │
  ┌──────────┐          ┌────────────┐  ┌────────┐  │
  │ INFO     │          │  TOURNAMENT │  │ TOP 10 │  │
  │ SCREENS  │          │  RESULT     │  │ Scores │  │
  │ ──────── │          │ ─────────── │  │ ────── │  │
  │ financel │          │ tourn. res. │  │ Top10_ │  │
  │ courserep│          └────────────┘  │ Blank  │  │
  │ SGA      │                          │ Troph  │  │
  │ hire     │                          └────────┘  │
  │ memberRs │                                       │
  │ lowscore │                                       │
  │ HoleSTAT │                                       │
  │ buy_land │                                       │
  │ shortcuts│                                       │
  │ histo    │                                       │
  │ PlayComt │                                       │
  │ ENDoYEAR │                                       │
  └──────────┘                                       │
                                                     │
  ┌──────────────────────────────────────────────────┘
  │  (Échap → retour au menu principal)
  ▼
┌────────────────────────────┐
│       PAUSE MENU           │
│  (PopUpIcons / TransPopups)│
│  ┌──────────────────────┐  │
│  │ Resume               │──┼──→ World View
│  │ Save Game            │──┼──→ Save
│  │ Load Game            │──┼──→ Load
│  │ Options              │──┼──→ Settings
│  │ Quit to Menu         │──┼──→ Title Screen
│  │ Quit to Desktop      │──┼──→ Exit
│  └──────────────────────┘  │
└────────────────────────────┘
```

## 2. Catalogue des Écrans

### Écran Titre (6 PCX)
| Fichier | Rôle |
|---------|------|
| `TitleBASE.pcx` | Fond de l'écran titre |
| `TitleMO.pcx` | Bouton survolé (Mouse Over) |
| `TitleUnSel.pcx` | Bouton normal |
| `Title_LoadGame.pcx` | Écran chargement partie |
| `Title_LoadGame_MO.pcx` | Chargement survolé |
| `Title_Pickapro.pcx` | Sélection du golfeur pro |
| `TitleSelDiffMO.pcx` | Sélection difficulté (hover) |
| `TitleSelDiffUnSel.pcx` | Sélection difficulté (normal) |
| `Title_ThemePacks.pcx` | Packs de thèmes |
| `Title_ThemePacks_MO.pcx` | Packs de thèmes (hover) |

### Monde Principal (8+ PCX)
| Fichier | Rôle |
|---------|------|
| `WorldBase.pcx` | Fond de la vue monde |
| `WorldButton.pcx` | Boutons d'action monde |
| `PairBase.pcx` | Panneau latéral gauche |
| `PairButtons.pcx` | Boutons du panneau gauche |
| `courseinfo.pcx` | Infos du parcours |
| `s_courseinfo.pcx` | Infos parcours (petit) |
| `GolferStats.pcx` | Statistiques golfeur |
| `s_GolferStats.pcx` | Stats golfeur (petit) |
| `StarsHeartsETC.pcx` | Étoiles/cœurs (notation) |

### Barres d'Outils (11 panels)
| Fichier | Rôle |
|---------|------|
| `BaseTerrainPanel.pcx` | Terrain de base |
| `BuildingPanel.pcx` | Construction |
| `ElevationPanel.pcx` | Élévation |
| `AmenitiesPanel.pcx` | Aménagements |
| `EmployeePanel.pcx` | Employés |
| `MemberPanel.pcx` | Membres |
| `JoeCoolPanel.pcx` | Style "Joe Cool" |
| `InfoButtons.pcx` | Boutons d'info |
| `TacksandArrow.pcx` | Punaises/flèches |
| `tacs&tees.pcx` | Tees |
| `PopUpIcons.pcx` | Icônes pop-up |
| `Pop_UpOk.pcx` | Bouton OK pop-up |

### Écrans d'Information (17+ écrans)
| Fichier | Rôle |
|---------|------|
| `FINANCEreport.pcx` | Rapport financier |
| `coursereport.pcx` | Rapport parcours |
| `SGAreport.pcx` | Rapport SGA |
| `SGA.pcx` | Écran SGA |
| `hire.pcx` | Embauche employés |
| `memberRoster.pcx` | Liste des membres |
| `tournament result.pcx` | Résultat tournoi |
| `ENDoYEAR.pcx` | Fin d'année |
| `lowscore.pcx` | Meilleurs scores |
| `HoleSTAT.pcx` | Statistiques trou |
| `buy_land.pcx` | Achat terrain |
| `shortcuts.pcx` | Raccourcis clavier |
| `PlayComt.pcx` | Comité de jeu |
| `histograph.pcx` | Graphique historique |
| `general_selectionBOX.pcx` | Boîte de sélection |
| `OkStates.pcx` | États OK/validation |
| `black.pcx` | Fond noir (overlay/fondu) |

### Thèmes de Terrain (4 × 2)
| Fichier | Rôle |
|---------|------|
| `ChooseDesertButtons.pcx` | Boutons terrain Désert |
| `ChooseLinksButtons.pcx` | Boutons terrain Links |
| `ChooseParklandButtons.pcx` | Boutons terrain Parkland |
| `ChooseTropicalButtons.pcx` | Boutons terrain Tropical |
| `DesertTerrainButtons.pcx` | Types terrain Désert |
| `LinksTerrainButtons.pcx` | Types terrain Links |
| `ParkLandTerrainButtons.pcx` | Types terrain Parkland |
| `TropicalTerrainButtons.pcx` | Types terrain Tropical |

### Layouts Théoriques (4)
| Fichier | Rôle |
|---------|------|
| `desert layout.pcx` | Disposition terrain Désert |
| `links layout.pcx` | Disposition terrain Links |
| `parklands layout.pcx` | Disposition terrain Parkland |
| `trop layout.pcx` | Disposition terrain Tropical |

### Mises en Page (4)
| Fichier | Rôle |
|---------|------|
| `3mainLowerLeft.pcx` | Layout 3 colonnes bas gauche |
| `parklink.pcx` | Layout lien parc |
| `tropdesert.pcx` | Layout tropical/désert |
| `course1.pcx` | Layout parcours principal |

### Animations Introduction (12)
| Fichier | Rôle |
|---------|------|
| `LoadingScreen01.pcx` ~ `12.pcx` | Écrans de chargement thématiques |

### Autres
| Fichier | Rôle |
|---------|------|
| `bink64.pcx` | Logo Bink Video (cutscene) |
| `logo.pcx` | Logo Firaxis |
| `creditsbckgrd.pcx` | Fond des crédits |
| `Radiobut.pcx` | Boutons radio |
| `Jackal.pcx` | Logo Jackal (mascotte JGL) |
| `GBUBBLES.pcx` | Bulles dialogue |
| `cliffs01.pcx` | Texture falaises |
| `Splash.pcx` | Écran de démarrage |

## 3. Transitions d'État

```
SPLASH/INTRO
  │ [2-3 secondes auto]
  ▼
TITLE_SCREEN
  │ New Game → SCENARIO_SELECT → LOADING → WORLD
  │ Load Game → LOAD_GAME_BROWSE → LOADING → WORLD
  │ Pick Pro → PRO_SELECT → TITLE_SCREEN (back)
  │ Theme Packs → THEME_PACKS → TITLE_SCREEN (back)
  │ Top 10 → TOP10_VIEW → TITLE_SCREEN (back)
  │ Credits → CREDITS → TITLE_SCREEN (back)
  │ Quit → EXIT
  │
WORLD
  │ [Esc] → PAUSE_MENU
  │ [Info buttons] → INFO_SCREEN → WORLD
  │ [Tournament complete] → TOURNAMENT_RESULT → WORLD
  │ [End of Year] → END_OF_YEAR → WORLD
  │ [Buy Land] → LAND_PURCHASE → WORLD
  │ [Hire] → HIRE_SCREEN → WORLD
  │ [Top 10 trigger] → TOP10 → WORLD
  │
PAUSE_MENU
  │ Resume → WORLD
  │ Save Game → SAVE_DIALOG → WORLD
  │ Load Game → LOAD_DIALOG → WORLD (or LOADING)
  │ Options → OPTIONS → PAUSE_MENU
  │ Quit to Menu → TITLE_SCREEN
  │ Quit to Desktop → EXIT
```

## 4. Notes pour le Portage Web

### Structure HTML/CSS suggérée
```html
<div id="game-container">
  <!-- Layers de rendu empilés -->
  <canvas id="terrain-layer">    <!-- Rendu isométrique (WebGL) -->
  <canvas id="sprite-layer">     <!-- Sprites animés FLC -->
  <div id="ui-layer">            <!-- Interface HTML/CSS -->
    <div id="toolbar-bottom">    <!-- Panels d'outils -->
    <div id="sidebar-left">      <!-- PairBase / infos -->
    <div id="modal-overlay">     <!-- Écrans modaux -->
  </div>
</div>
```

### États Écran Titre (React)
```typescript
type GameScreen =
  | 'splash'
  | 'title'
  | 'scenario-select'
  | 'load-game'
  | 'pro-select'
  | 'world'
  | 'info-screen'  // + type: 'finance'|'course'|'sga'|...
  | 'pause'
  | 'tournament-result'
  | 'end-of-year'
  | 'top10'
  | 'credits';

interface UIState {
  screen: GameScreen;
  infoScreenType?: string;
  toolbar: 'terrain' | 'building' | 'elevation' | 'amenities' | 'employees' | 'members' | 'info';
  theme: CourseTheme;
  dialogOpen: boolean;
  dialogType?: 'save' | 'load' | 'confirm' | 'buy-land' | 'hire';
}
```

### Transitions
- Toutes les transitions sont déclenchées par **boutons HTML** ou **clics canvas**
- Pas de polling GetAsyncKeyState — événements DOM natifs
- Les écrans d'info sont des composants React conditionnels
- Le monde principal est un canvas WebGL avec overlay HTML
