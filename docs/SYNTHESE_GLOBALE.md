# Synthèse Globale — Analyse Complète SimGolf (4 Passes)

> Généré le 21 mai 2026 — compilation des passes 1-4

---

## Carte Globale de golf.exe

```
┌────────────────────────────────────────────────────────────────────┐
│                        golf.exe (946 KB)                          │
├────────────────────────────────────────────────────────────────────┤
│  .text   (754 KB)  — ~1839 fonctions, base 0x00400000            │
│      0x00401xxx  : Import thunks + wrapper KERNEL32/USER32/GDI32 │
│      0x00404xxx  : Jump table + petit dispatch                   │
│      0x00408xxx  : Pool d'initialisation + divers               │
│      0x00409xxx  : Initialisation systèmes                       │
│      0x0040a000  : WinMain + création fenêtre                   │
│      0x0040c000+ : Rendu + graphiques                          │
│      0x0041xxxx  : Jeu principal + GameState                   │
│                    (FUN_0040f5c0 = 59KB = plus grande fonction) │
│      0x0042xxxx  : Game tick + simulation 16 slots              │
│      0x0043xxxx  : UI + écrans + dialogues                     │
│      0x0044xxxx  : Gestion des panels + overlays               │
│      0x0048xxxx  : Input handler + actions golfeur              │
│      0x0049xxxx  : I/O fichiers + économie + physique + IA      │
│      0x004a5xxx  : Sérialisation (Save/Load)                    │
│      0x004bxxxx  : Thunks additionnels + fin .text              │
│  .rdata  (288 KB) — chaînes, vtable, tables de constantes      │
│  .data   (3.7 MB) — données globales + objets jeu              │
│      0x0080xxxx  : tableaux de constantes (tournois)           │
│      0x008400b0  : [GameState*] → structure maîtresse          │
│      0x00840aac  : [HWND] fenêtre                              │
│      0x0083c340  : buffer status bar                           │
│      0x0083afcc  : flag fermeture                              │
│      0x00842040  : InitPool (32 slots × 0x24)                 │
│      0x0080d840  : TournamentObj array (22 × 0x6c)            │
│  .rsrc   (4 KB)                                                │
│  3 sections packer residue                                     │
└────────────────────────────────────────────────────────────────────┘
```

---

## Tableau de correspondance des adresses par couche

### PASSE 1 — Données & Persistance

| Adresse | Fonction | Taille | Rôle |
|---------|----------|:------:|------|
| `0x004a5d5f` | `IO_OpenFile()` | 719 oct. | CreateFileA → ouvre fichier en lecture/écriture |
| `0x004a589f` | `IO_ReadFile()` | 473 oct. | ReadFile → charge fichier dans buffer |
| `0x004a5bbd` | `IO_WriteFile()` | 395 oct. | WriteFile → écrit buffer dans fichier |
| `0x004a5a78` | `IO_CloseFile()` | 93 oct. | CloseHandle → ferme fichier |
| `0x00492dd0` | `IO_MemoryMapped()` | — | CreateFileMappingA + MapViewOfFile |
| `0x004a50db` | `InitGameState()` | 1894 insn | Parse .dta + charge PCX + init UI |
| `0x004a93ff` | `InitGameSystems()` | — | Initialise tous les sous-systèmes |

**Formats de fichier :**
| Format | Extension | Taille estimée | Stockage |
|--------|-----------|:--------------:|----------|
| Sauvegarde | `.sve` | variable | Header + GameState sérialisé + grille tuiles + inventaire + tournois |
| Top scores | `top10.sve` | 1560 oct. | 10 × 156 oct. (nom, score, date) |
| Data golfeurs | `.dta` | variable | CSV commenté (progolfers, celebrities) |
| Profil golfeur | `.pro` / `.glf` | 1008+ oct. | Stats, skills, apparence |
| Scénarios | `.scn` | variable | 6 scénarios intégrés |
| Parcours perso | `.cse` | estimation | Grille + état personnalisé |

### PASSE 2 — Systémique & IA

| Adresse | Fonction | Taille | Rôle |
|---------|----------|:------:|------|
| `0x0049846c` | `GameTickFunction()` | ~800 insn | Boucle simulation : 16 slots × 0x58 oct. |
| `0x00460cf0` | `Ball_MainFunction()` | — | Trajectoire 3D complète de la balle (40+ refs) |
| `0x0049d820` | `Economy_CalculateProfit()` | — | Calcul profit parcours (offsets exacts : +0x50, +0x54, +0x5c) |
| `0x0049e450` | `Economy_TickDaily()` | 95 oct. | Tick économique quotidien |
| `0x0049dab0` | `Economy_TickYearly()` | 1907 oct. | Tick économique annuel (résultats, membres, tournois) |
| `0x0049d770` | `Economy_Update()` | 826 oct. | Mise à jour finance |
| `0x0049bec0` | `AI_ChooseClub()` | 196 oct. | Choix du club (parcours arbre décision) |
| `0x0049f370` | `AI_ProcessTick()` | 1577 oct. | Tick IA golfeur (vtable[0x68]) |
| `0x0049f9a0` | `AI_CalculateShot()` | 236 oct. | Calcul du tir optimal |
| `0x004a3be0` | `AI_EvaluateShot()` | 808 oct. | Évaluation du tir par score |

**Constantes FPU vérifiées :**
| Adresse | Valeur | Usage |
|---------|:------:|-------|
| `0x004ba818` | `0.05` | Facteur distance = propertyByte × 0.05 |
| `0x004ba81c` | `0.2` | Coefficient secondaire |
| `0x004ba820` | `0.04` | Coefficient tertiaire |
| `0x004ba824` | `0.01` | Coefficient de précision |
| `0x004b9a30` | `0.017453` | Degrés → radians |

### PASSE 3 — Collision & Topographie

| Adresse | Fonction | Taille | Rôle |
|---------|----------|:------:|------|
| `0x10003090` | `Terrain::~Terrain()` | ~70 oct. | Destructeur terrain |
| `0x100031a0` | `Terrain::getInstance()` | ~180 oct. | Singleton (instance: 1.4 Mo) |
| `0x100032f0` | `Terrain::setType()` | ~200 oct. | Définit type + variation tuile |
| `0x10005990` | `Terrain::render()` | ~2500 oct. | Rendu principal, 2 modes, 4 zooms |
| `0x10001d50` | `Terrain::tileAt(x,y)` | ~50 oct. | Accès tuile (row-major, offset 0x3A4 + index × 584) |
| `0x1000ab30` | `Terrain::tileHit()` | ~300 oct. | Picking : écran → tuile |
| `0x1000a6f0` | `Terrain::calcNormals()` | ~200 oct. | Normale d'une tuile (2 triangles) |
| `0x1000a740` | `Terrain::calcAllNormals()` | ~400 oct. | Recalcul toutes normales |
| `0x1000a560` | `Terrain::setWall()` | ~60 oct. | Pose murs N/E/S/O |
| `0x1000a450` | `Terrain::hasConnectedPath()` | ~100 oct. | Test connexion chemin (4 voisins) |
| `0x1000e6c0` | `Terrain::renderSingleTile()` | ~400 oct. | Rendu OpenGL d'une tuile |
| `0x100048a0` | `Terrain::drawLine()` | ~600 oct. | Bresenham isométrique |
| `0x100042a0` | `Terrain::drawCircle()` | ~500 oct. | Cercle → ellipse isométrique |
| `0x10005230` | `Terrain::drawBezierSpline()` | ~500 oct. | Bézier cubique pour chemins |
| `0x10008fc0` | `Terrain::setZoomLevel()` | ~400 oct. | Zoom ×0.5/×1/×2 |
| `0x10009c80` | `Terrain::initSystem()` | ~600 oct. | Init moteur + alloc tuiles |
| `0x00485e80` | `TileGrid::Dispatch()` | ~130 insn | Dispatch buffer byte (stride×2) |
| `0x00494f00` | `CoursEngine::Update()` | ~240 insn | Dispatch buffer word (stride×4) |
| `0x004969e0` | `SmoothInterpolator` | ~300 insn | Animation fluide caméra/zoom |

### PASSE 4 — Interface & Actions

| Adresse | Fonction | Taille | Rôle |
|---------|----------|:------:|------|
| `0x004a682f` | `WinMain()` | 164 insn | Point d'entrée |
| `0x004a50db` | `InitGameState()` | 1894 insn | Initialisation UI + données |
| `0x004a5108` | `GameLoopCallback()` | 1876 insn | Boucle callback timer |
| `0x0049b7b0` | `InputHandler()` | ~400 insn | Traite événements utilisateur |
| `0x0049acf0` | `StartGolferAction()` | 2336 oct. | Lance action golfeur |
| `0x0049b690` | `HitTest()` | ~200 insn | Collision écran→tuile |
| `0x00497d10` | `ValidateAndAdvance()` | ~200 insn | Transition d'état |
| `0x0048e1c0` | `DialogBox_Create()` | ~200 insn | Création popup modale |
| `0x0048e900` | `DialogBox_Show()` | ~500 insn | Affichage + boucle popup |
| `0x004a4c70` | `DecodeInput()` | ~200 insn | Décodage événement Windows |

**IDs d'événements utilisateur :**
| ID | Nom | Déclencheur | Action |
|:--:|-----|:-----------:|--------|
| `0x03` | `GOLFER_ACTIVATE` | Clic golfeur | Démarre le tour du golfeur |
| `0x05` | `TERRAIN_CLICK` | Clic terrain | Hit test + sélection cible |
| `0x31` | `ESCAPE_CANCEL` | Touche Échap | Annule action / menu pause |
| `0x102` | `GOLFER_SELECT` | Sélection menu | Trouve golfeur par ID |
| `0x103` | `UI_BUTTON` | Clic bouton panel | Action terrain/construction |

**Transitions d'écran :**
```
SPLASH → LOADING → TITLE → {SCENARIO_SELECT, LOAD_GAME, PRO_SELECT, TOP10, CREDITS}
TITLE → SCENARIO_SELECT → LOADING → WORLD
TITLE → LOAD_GAME → LOADING → WORLD
TITLE → (PRO_SELECT / TOP10 / CREDITS) → TITLE
TITLE → Quit → EXIT
WORLD → PAUSE → {Resume→WORLD, Save→WORLD, QuitMenu→TITLE, QuitDesktop→EXIT}
WORLD → (INFO_*) → WORLD
WORLD → TOURNAMENT_RESULT → WORLD
WORLD → END_OF_YEAR → WORLD
```

---

## Interfaces TypeScript — Index

### Dans `docs/ANALYSE_PASSE1_PERSISTANCE.md`

| Interface | Rôle | Taille/Champs clés |
|-----------|------|:------------------:|
| `GameState` | Structure maîtresse | 30+ champs (gameTime, courseName, money, currentGolfer, slots[16], etc.) |
| `Golfer` | Golfeur individuel | GolferSkills, money, morale, stamina, fatigue |
| `GolferSkills` | Compétences | putting(0-10), power(0-10), accuracy(0-10), imagination(0-10), timing(0-10) |
| `Tile` | Tuile de terrain | 584 octets : elevation[4], type(16), variation, walls, path, normal |
| `Tournament` | Tournoi | 14 types, 108 oct. : name, prizePool, entryFee, minHoles, prestigeReq, fieldSize |
| `PlayerEconomy` | Finances | dailyIncome, maintenanceCost, staffCost, profit, prestige, rating |
| `CourseFinance` | Finance parcours | greenFees, membershipFees, proShopSales, foodDrinks, staffCosts |
| `ScenarioDef` | Scénario | 6 scénarios prêts : conditions gagnantes, durée, difficulté |
| `ProGolferProfile` | Profil pro | nom, nationalité, traits, skills, stats carrière |

### Dans `analyse_passe2_couche_systemique.md`

| Interface | Rôle | Détails |
|-----------|------|---------|
| `BallState` | État balle | x, y, z, vx, vy, vz, spin, dansEau, arretee |
| `GolferAI` | Décision IA | contexteTir, clubChoisi, puissance, angle, évaluation |
| `EconomyState` | Économie | dailyIncome, maintenance, staff, profit, prestige, class |
| `TickSlot` | Slot simulation | 88 oct. : golferId, timer, state, data |
| `PhysicsConfig` | Constantes physiques | gravité, frottement par terrain, rebond |
| `ClubSelection` | Arbre clubs | 14 clubs (driver→putter) + contextFactors |
| `ShotContext` | Contexte de tir | vent, altitude, lie, distance, skill |
| `ShotResult` | Résultat de tir | newPos, newTerrainType, distanceParcourue |

### Dans Passe 3 (inline sub-agent)

| Interface | Rôle | Détails |
|-----------|------|---------|
| `TileMap` | Grille de tuiles | width, height, tiles[] row-major |
| `TileNeighbors` | Voisins | n/s/e/w/nw/ne/sw/se |
| `CourseValidator` | Validation trou | validateHole, checkGolfPath, countTerrainTypes |
| `ValidationResult` | Résultat validation | valid, errors, warnings, par(3/4/5), distance, holeType |
| `GolfPathResult` | Résultat path | reachable, path[], totalCost |
| `PathNode` | Nœud A* | x, y, g, h, f, parent |
| `CollisionSystem` | Collisions | screenToTile, interpolateHeight, checkBallCollision, raycast |
| `AutoTileRule` | Auto-tiling | computeNeighborMask, selectGeometryGroup, selectCosmeticVariation |
| `IsometricMath` | Projection | worldToScreen, screenToWorld, TILE_W(128), TILE_H(64) |

### Dans `docs/ANALYSE_PASSE4_ACTION.md`

| Interface | Rôle | Détails |
|-----------|------|---------|
| `UIState` | État UI complet | currentScreen, toolbar, infoScreen, dialog, input |
| `ButtonDef` | Bouton virtuel | x, y, w, h, id, label, pcx* , onClick callback |
| `ToolbarState` | Barre d'outils | activePanel, previousPanel, selectedTool, cursorType |
| `InfoScreenState` | Écran info | screenType, isOpen, dataPage, scrollPosition |
| `InputEvent` | Événement input | type(5 valeurs), flags, param, subEvents |
| `GameScreen` | Écran (enum) | 25 valeurs : SPLASH→TITLE→WORLD→PAUSE→INFO_* |

---

## Pseudo-code des algorithmes clés — Index

| Algorithme | Passe | Fichier |
|-----------|:-----:|---------|
| SaveGame — Sérialisation complète | P1 | `ANALYSE_PASSE1_PERSISTANCE.md` |
| LoadGame — Désérialisation + validation header | P1 | `ANALYSE_PASSE1_PERSISTANCE.md` |
| Parse progolfers.dta / celebrities.dta | P1 | `ANALYSE_PASSE1_PERSISTANCE.md` |
| GameTickFunction — Boucle simulation 16 slots | P2 | `analyse_passe2_couche_systemique.md` |
| Formule distance balle (FPU x * 0.05) | P2 | `analyse_passe2_couche_systemique.md` |
| Arbre décision IA golfeur (4 sous-arbres : club, angle, puissance, évaluation) | P2 | `analyse_passe2_couche_systemique.md` |
| Formule économie (profit = dailyIncome - maintenance) | P2 | `analyse_passe2_couche_systemique.md` |
| A* Pathfinding sur grille de tuiles | P3 | (inline sub-agent) |
| Validation d'un trou (Tee→Fairway→Green) | P3 | (inline sub-agent) |
| Collision balle/terrain (interpolation barycentrique) | P3 | (inline sub-agent) |
| Auto-tiling (masque 4 bits N/E/S/O + familles) | P3 | (inline sub-agent) |
| Culling visibilité (algorithme du peintre) | P3 | (inline sub-agent) |
| Machine d'état UI (transitions d'écran) | P4 | `ANALYSE_PASSE4_ACTION.md` |
| InputHandler (dispatch événements utilisateur) | P4 | `ANALYSE_PASSE4_ACTION.md` |
| StartGolferAction (dialogue + boucle simulation) | P4 | `ANALYSE_PASSE4_ACTION.md` |
| DialogBox (popup modale custom paint) | P4 | `ANALYSE_PASSE4_ACTION.md` |

---

## Architecture de communication entre couches

```
                          ┌─────────────────┐
                          ┌──   Utilisateur  ──┐
                          │   (clavier/souris)  │
                          └────────┬────────────┘
                                   │
                          ┌────────▼────────────┐
                          │  PASSE 4: ACTION     │
                          │  InputHandler        │
                          │  DialogBox           │
                          │  UI_SetToolbar       │
                          │  UI_ShowScreen       │
                          └──┬────┬──────┬────┬──┘
                             │    │      │    │
                    ┌────────┘    │      │    └────────┐
                    ▼             ▼      ▼             ▼
           ┌────────────┐  ┌──────────┐ ┌────────────┐  ┌──────────┐
           │ PASSE 1    │  │ PASSE 2  │ │ PASSE 1    │  │ PASSE 3  │
           │ PERSIST    │  │ GAME TICK│ │ ECONOMY    │  │ TERRAIN  │
           │ Save/Load  │  │ Simulation│ │ Tick daily │  │ Render   │
           │ InitGame   │  │ 16 slots │ │ Calculate  │  │ TileGrid │
           └────────────┘  │ Physique │ │ Profit     │  │ Path     │
                           │ IA Golfeur│ └────────────┘  └──────────┘
                           └──────────┘
                                │
                                ▼
                      ┌──────────────────┐
                      │    Bibliothèques   │
                      │   Terrain.dll      │
                      │   jgld.dll         │
                      │   sound.dll        │
                      │   binkw32.dll      │
                      └──────────────────┘
```

---

## Statistiques de l'analyse

| Métrique | Valeur |
|----------|:------:|
| Fonctions golf.exe | 1839 |
| Lignes ASM analysées | ~1.1 million |
| Fichiers C décompilés | 60 |
| Fichiers docs produit | 4 (ANALYSE_PASSE[1-4]_*.md) |
| Interfaces TypeScript | ~30 |
| Algorithmes documentés | 16 |
| Formats de fichier | 8 |
| Écrans UI | 25 |
| IDs événements utilisateur | 5 |
| Adresses mémoire documentées | 2 globales + 40+ fonctions |
| Thèmes Terrain | 4 (Desert, Links, Parkland, Tropical) |
| Types de terrain | 16 (0=Rough → 15=Flower) |
| Vitesses simulation | 4 (5000/10000/20000/30000 ms) |
| Clubs identifiés | 14 (Driver→Putter) |
| Skills golfeur | 5 (putting, power, accuracy, imagination, timing) |
