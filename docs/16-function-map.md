# Carte des Fonctions ASM

> **Confiance :** ✅ Élevée — toutes les adresses sont vérifiées dans le binaire
> Format : `Adresse` — `Nom` — `Rôle` — `Source`

---

## 1. golf.exe (dépaqueté)

### Point d'Entrée et Initialisation

| Adresse | Nom | Rôle | Source |
|:-------:|-----|------|:------:|
| `0x4a682f` | WinMain | Point d'entrée CRT | EP |
| `0x4a794d` | HeapSetup | Configuration mémoire | Désasm |
| `0x4a8dec` | SystemCheck | Vérification OS + résolution | Désasm |
| `0x4a93ff` | InitGameSystems | Init tous sous-systèmes (1927 insn) | Désasm |
| `0x4a50db` | InitGameState | Chargement données + UI (1894 insn) | Désasm |
| `0x4a5108` | GameLoopCallback | Update + Render chaque frame | Désasm |
| `0x4a5119` | GameLoopExit | Handler de sortie | Désasm |
| `0x4aad6a` | CleanupAndExit | Nettoyage et sortie | Désasm |

### Simulation et Boucle de Jeu

| Adresse | Nom | Rôle | Source |
|:-------:|-----|------|:------:|
| `0x49846c` | GameTickFunction | Boucle simulation 16 slots × 0x58 | Désasm + C |
| `0x49ab40` | AdvanceSimulation | Avancement timer | Désasm + C |
| `0x49acf0` | StartGolferAction | Démarrage tour golfeur | Désasm |
| `0x49b7b0` | InputHandler | Gestion des entrées (6 types) | Désasm + C |
| `0x49b690` | HitTest | Collision coordonnées → tuile | Réf |
| `0x497d10` | ValidateAndAdvance | Transition d'état | Réf |

### Économie

| Adresse | Nom | Rôle | Source |
|:-------:|-----|------|:------:|
| `0x49d820` | Economy_calc | Calcul profit journalier | Désasm + C |
| `0x49d8b9` | Economy_defaultProfit | Profit par défaut | Désasm |

### Système de Tournois

| Adresse | Nom | Rôle | Source |
|:-------:|-----|------|:------:|
| `0x484e30` | Tourney_InitObj | Initialise un objet tournoi | Désasm |
| `0x4481b0` | Tourney_Setup | Configure avant tournoi | Désasm |
| `0x448220` | Tourney_InitAll | Init tous les objets (22+ appels) | Désasm |
| `0x447000-0x4480f7` | Tourney_UICreate | Panel UI tournoi (4300 insn) | Désasm |
| `~0x4650ee` | Tourney_Score | Calcul scores | Réf |
| `~0x471b72` | Tourney_Leaderboard | Classement | Réf |

### UI

| Adresse | Nom | Rôle | Source |
|:-------:|-----|------|:------:|
| `0x4a682f` | WinMain | Pipeline complet UI | Désasm |
| `0x4a50db` | InitGameState | Chargement PCX + écran titre | Désasm |
| `0x473bf0` | operator_new_array | Allocation widgets (266 appels) | Désasm |
| `0x475840` | Bitmap_setup | Configuration surface/bitmap | Désasm |

### Utilitaires

| Adresse | Nom | Rôle | Source |
|:-------:|-----|------|:------:|
| `0x43d740` | operator_new | Allocation mémoire (496 appels) | Désasm |
| `0x43d6f0` | operator_delete | Libération mémoire (160 appels) | Désasm |
| `0x45c1e0` | String_method | Méthodes chaîne (130 appels) | Désasm |
| `0x4a5007` | SEH_handler | Handler exceptions (107 appels) | Désasm |
| `0x476dd0` | StringParser | Parseur chaîne (296 appels) | Désasm |
| `0x4762d0` | Container_method | Méthodes conteneur (80 appels) | Désasm |

### Allocations et Objets

| Adresse | Objet | Taille |
|:-------:|-------|:------:|
| `0x008400b0` | GameState pointer | 4 |
| `0x00842160` | hInstance | 4 |
| `0x00840aac` | HWND | 4 |
| `0x0080d840` | TournamentObj array | ~0x960 |
| `0x00842040` | InitPool | 0x480 |
| `0x00840aa4` | gameFlags | 4 |

---

## 2. Terrain.dll (ImageBase: 0x10000000)

### Exports Complets (38/38)

| Adresse brute | Export (manglé) | Nom nettoyé |
|:------------:|-----------------|-------------|
| `0x10001d50` | `?tileAt@Terrain@@QAEPAVTile@@HH@Z` | Terrain::tileAt(x, y) |
| `0x10001de0` | `?getElevation@Terrain@@QAEHPAVTile@@H@Z` | Terrain::getElevation(tile, corner) |
| `0x10001f10` | `?getType@Terrain@@QAEHPAVTile@@@Z` | Terrain::getType(tile) |
| `0x10001e80` | `?getWall@Terrain@@QAE_NPAVTile@@H@Z` | Terrain::getWall(tile, side) |
| `0x1000a560` | `?setWall@Terrain@@QAEXPAVTile@@HH_N@Z` | Terrain::setWall(tile, type, side, bool) |
| `0x1000a510` | `?hasPath@Terrain@@QAE_NPAVTile@@@Z` | Terrain::hasPath(tile) |
| `0x1000a450` | `?hasConnectedPath@Terrain@@QAE_NHH@Z` | Terrain::hasConnectedPath(x, y) |
| `0x100031a0` | `?getInstance@Terrain@@SAPAV1@XZ` | Terrain::getInstance() |
| `0x10005990` | `?render@Terrain@@QAE_NPAVTile@@M@Z` | Terrain::render(tile, height) |
| `0x1000117c` | `?localRender@Terrain@@QAEXPAVTile@@0M@Z` | Terrain::localRender(...) |
| `0x100011ea` | `?renderTile@Terrain@@QAEXHHHHH@Z` | Terrain::renderTile(x, y, w, h, flags) |
| `0x100048a0` | `?drawLine@Terrain@@QAEXHHHHHHH@Z` | Terrain::drawLine(x1,y1,x2,y2,color,w) |
| `0x100042a0` | `?drawCircle@Terrain@@QAEXPAVTile@@M@Z` | Terrain::drawCircle(tile, radius) |
| `0x10005230` | `?drawBezierSpline@Terrain@@QAEXHHHHHHHHH@Z` | Terrain::drawBezierSpline(...) |
| `0x10001244` | `?drawCardinalSpline@Terrain@@QAEXHHHHHHHHHHH@Z` | Terrain::drawCardinalSpline(...) |
| `0x10009c80` | `?initSystem@Terrain@@QAEXHHPAUHDC__@@_N@Z` | Terrain::initSystem(w, h, hDC, fs) |
| `0x10009ba0` | `?closeSystem@Terrain@@QAEXXZ` | Terrain::closeSystem() |
| `0x100012cb` | `?initTerrain@Terrain@@QAEXXZ` | Terrain::initTerrain() |
| `0x10009ed0` | `?resize@Terrain@@QAEXHH@Z` | Terrain::resize(w, h) |
| `0x10001af0` | `?loadNewCourseType@Terrain@@QAEXH@Z` | Terrain::loadNewCourseType(type) |
| `0x1000aa10` | `?resetTerrain@Terrain@@QAEXXZ` | Terrain::resetTerrain() |
| `0x1000a740` | `?calcAllNormals@Terrain@@QAEXPAVTile@@@Z` | Terrain::calcAllNormals(tile) |
| `0x1000a6f0` | `?calcNormals@Terrain@@QAEXPAVTile@@@Z` | Terrain::calcNormals(tile) |
| `0x10008fc0` | `?setZoomLevel@Terrain@@QAEXH@Z` | Terrain::setZoomLevel(level) |
| `0x100011c2` | `?changeLighting@Terrain@@QAEXH@Z` | Terrain::changeLighting(level) |
| `0x10003390` | `?getVariation@Terrain@@QAEHPAVTile@@@Z` | Terrain::getVariation(tile) |
| `0x1000a5c0` | `?elevateCorner@Terrain@@QAEXPAVTile@@H@Z` | Terrain::elevateCorner(tile, corner) |
| `0x1000a620` | `?lowerCorner@Terrain@@QAEXPAVTile@@H@Z` | Terrain::lowerCorner(tile, corner) |
| `0x10001154` | `?lowerEdgeCorner@Terrain@@QAEXPAVTile@@H0M@Z` | Terrain::lowerEdgeCorner(...) |
| `0x1000a840` | `?setSplineHeight@Terrain@@QAEXM@Z` | Terrain::setSplineHeight(height) |
| `0x100032f0` | `?setType@Terrain@@QAEXPAVTile@@HH@Z` | Terrain::setType(tile, type, variation) |
| `0x1000125d` | `?updatePath@Terrain@@QAEXHHH@Z` | Terrain::updatePath(x, y, type) |
| `0x100012c1` | `?layPath@Terrain@@QAEXPAVTile@@HH@Z` | Terrain::layPath(tile, type, dir) |
| `0x100011e0` | `?pathUpdateRender@Terrain@@QAEXPAVTile@@M@Z` | Terrain::pathUpdateRender(tile, h) |
| `0x10001299` | `?stripRender@Terrain@@QAEXPAVTile@@HM@Z` | Terrain::stripRender(tile, type, h) |
| `0x1000ab30` | `?tileHit@Terrain@@QAEPAVTile@@HH@Z` | Terrain::tileHit(x, y) |
| `0x1000a880` | `?passCollarInfo@Terrain@@QAEXQAHH@Z` | Terrain::passCollarInfo(data, count) |
| `0x10003090` | `??1Terrain@@QAE@XZ` | Terrain::~Terrain() |

### Hubs Internes

| Adresse | Nom | Rôle |
|:-------:|-----|------|
| `0x10001154` | Culling | Calcul zone visible |
| `0x100011ea` | renderTile | Rendu d'une tuile (multi-passes) |
| `0x1000a6f0` | calcNormals | Calcul des normales |

---

## 3. sound.dll (ImageBase: 0x10000000)

| Export | Rôle |
|--------|------|
| `init_sound_timer` (1) | Initialisation timer audio |
| `close_sound` (2) | Fermeture audio |
| `update_sound` (3) | Mise à jour sons |
| `play_wave` (4) | Joue un son WAV |
| `play_midi` (5) | Joue un fichier MIDI |
| `stop_all` (6) | Arrête tous les sons |
| `set_volume` (7) | Volume |
| `set_mute` (8) | Muet |
| `get_position` (9) | Position de lecture |
| `is_playing` (10) | Vérifie si un son joue |
| `load_wave` (11) | Charge un fichier WAV |
| `load_midi` (12) | Charge un fichier MIDI |

Version : 5.0.3147 (constante `0x5000C01`)

## 4. jgld.dll (ImageBase: 0x10000000)

| Export | Rôle |
|--------|------|
| `get_graphsy_object_ptr` (unique) | Retourne le singleton JackalClass |

La DLL contient ~1200 fonctions internes (debug build), incluant libpng 1.0.5 intégré.

---

## 5. Références Croisées

### Chaînes Importantes

| Adresse | Chaîne |
|:-------:|--------|
| `0x4d0c88` | "SGA Qualifying School" |
| `0x4d0cc8` | "SGA Amateur Championship" |
| `0x4d0d40` | "SGA Championship!" |
| `0x4d0d6c` | "Grand Slam Championship!" |
| `0x4c6144` | "Begin Tournament" |
| `0x4c616c` | "Practice Round" |
| `0x4c5b00` | "SGA Evaluation" |
| `0x4c3cf0` | "Cannot save course during a tournament." |
| `0x4c455c` | "I'm ready to play a tournament." |
| `0x4cff90` | "TOURNAMENT RESULTS" |
| `0x4cffa8` | "TOURNAMENT SCORES" |
| `0x4d15c4` | "LEADER BOARD of" |
| `0x4bf408` | "1st Tournament" |
| `0x4bf588` | "First tournament victory (9+ holes)" |
| `0x4bf5e8` | "1st $1,000,000 Tournament" |

### Variables Globales

| Adresse | Variable | Type |
|:-------:|----------|:----:|
| `0x008400b0` | g_pGameObject | Pointer |
| `0x00842160` | g_hInstance | HANDLE |
| `0x00840aac` | g_hWnd | HWND |
| `0x00842040` | g_initPool | InitSlot[32] |
| `0x0080d840` | g_tournaments | TournamentObj[22] |
| `0x00840aa4` | g_gameFlags | int32 |
| `0x00840aa0` | g_gameState_byte | byte |
