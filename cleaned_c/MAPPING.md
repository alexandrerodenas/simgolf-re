# Correspondance des exports Terrain.dll
# Généré par Hermes-RE — Phase 2
# Source : Terrain.dll (PE32, MSVC++6.0 debug)

## Export → Nom nettoyé → Adresse brute

| Export (C++ manglé) | Nom nettoyé | Adresse brute | Statut | Fichier |
|:---|---|---|---|---|
| `?tileAt@Terrain@@QAEPAVTile@@HH@Z` | Terrain::tileAt(int x, int y) | 0x10001d50 | ✅ Nettoyé | terrain_tileAt.c |
| `?getElevation@Terrain@@QAEHPAVTile@@H@Z` | Terrain::getElevation(Tile* t, int corner) | 0x10001de0 | ✅ Nettoyé | tile_getters.c |
| `?getType@Terrain@@QAEHPAVTile@@@Z` | Terrain::getType(Tile* t) | 0x10001f10 | ✅ Nettoyé | tile_getters.c |
| `?getWall@Terrain@@QAE_NPAVTile@@H@Z` | Terrain::getWall(Tile* t, int side) | 0x10001e80 | ✅ Nettoyé | tile_getters.c |
| `?setWall@Terrain@@QAEXPAVTile@@HH_N@Z` | Terrain::setWall(Tile*, int, int, bool) | 0x1000a560 | ✅ Nettoyé | terrain_normals.c |
| `?hasPath@Terrain@@QAE_NPAVTile@@@Z` | Terrain::hasPath(Tile*) | 0x1000a510 | ✅ Nettoyé | terrain_normals.c |
| `?hasConnectedPath@Terrain@@QAE_NHH@Z` | Terrain::hasConnectedPath(int, int) | 0x1000a450 | ✅ Nettoyé | terrain_normals.c |
| `?getInstance@Terrain@@SAPAV1@XZ` | Terrain::getInstance() | 0x100031a0 | ✅ Nettoyé | terrain_setType.c |
| `?render@Terrain@@QAE_NPAVTile@@M@Z` | Terrain::render(Tile*, float) | 0x10005990 | ✅ Nettoyé | terrain_render.c |
| `?localRender@Terrain@@QAEXPAVTile@@0M@Z` | Terrain::localRender(...) | 0x1000117c | ✅ Nettoyé | terrain_paths.c |
| `?renderTile@Terrain@@QAEXHHHHH@Z` | Terrain::renderTile(...) | 0x100011ea | ✅ Nettoyé | terrain_paths.c |
| `?drawLine@Terrain@@QAEXHHHHHHH@Z` | Terrain::drawLine(...) | 0x100048a0 | ✅ Nettoyé | terrain_drawing.c |
| `?drawCircle@Terrain@@QAEXPAVTile@@M@Z` | Terrain::drawCircle(Tile*, float) | 0x100042a0 | ✅ Nettoyé | terrain_drawing.c |
| `?drawBezierSpline@Terrain@@QAEXHHHHHHHHH@Z` | Terrain::drawBezierSpline(...) | 0x10005230 | ✅ Nettoyé | terrain_drawing.c |
| `?drawCardinalSpline@Terrain@@QAEXHHHHHHHHHHH@Z` | Terrain::drawCardinalSpline(...) | 0x10001244 | ✅ Nettoyé | terrain_drawing.c |
| `?initSystem@Terrain@@QAEXHHPAUHDC__@@_N@Z` | Terrain::initSystem(int,int,HDC*,bool) | 0x10009c80 | ✅ Nettoyé | terrain_initSystem.c |
| `?closeSystem@Terrain@@QAEXXZ` | Terrain::closeSystem() | 0x10009ba0 | ✅ Nettoyé | terrain_initSystem.c |
| `?initTerrain@Terrain@@QAEXXZ` | Terrain::initTerrain() | 0x100012cb | ✅ Nettoyé | terrain_initSystem.c |
| `?resize@Terrain@@QAEXHH@Z` | Terrain::resize(int w, int h) | 0x10009ed0 | ✅ Nettoyé | terrain_initSystem.c |
| `?loadNewCourseType@Terrain@@QAEXH@Z` | Terrain::loadNewCourseType(int) | 0x10001af0 | ✅ Nettoyé | terrain_zoom.c |
| `?resetTerrain@Terrain@@QAEXXZ` | Terrain::resetTerrain() | 0x1000aa10 | ✅ Nettoyé | terrain_zoom.c |
| `?calcAllNormals@Terrain@@QAEXPAVTile@@@Z` | Terrain::calcAllNormals(Tile*) | 0x1000a740 | ✅ Nettoyé | terrain_normals.c |
| `?calcNormals@Terrain@@QAEXPAVTile@@@Z` | Terrain::calcNormals(Tile*) | 0x1000a6f0 | ✅ Nettoyé | terrain_normals.c |
| `?setZoomLevel@Terrain@@QAEXH@Z` | Terrain::setZoomLevel(int) | 0x10008fc0 | ✅ Nettoyé | terrain_zoom.c |
| `?changeLighting@Terrain@@QAEXH@Z` | Terrain::changeLighting(int) | 0x100011c2 | ✅ Nettoyé | terrain_zoom.c |
| `?getVariation@Terrain@@QAEHPAVTile@@@Z` | Terrain::getVariation(Tile*) | 0x10003390 | ✅ Nettoyé | terrain_zoom.c |
| `?elevateCorner@Terrain@@QAEXPAVTile@@H@Z` | Terrain::elevateCorner(Tile*,int) | 0x1000a5c0 | ✅ Nettoyé | terrain_elevation.c |
| `?lowerCorner@Terrain@@QAEXPAVTile@@H@Z` | Terrain::lowerCorner(Tile*,int) | 0x1000a620 | ✅ Nettoyé | terrain_elevation.c |
| `?lowerEdgeCorner@Terrain@@QAEXPAVTile@@H0M@Z` | Terrain::lowerEdgeCorner(...) | 0x10001154 | ✅ Nettoyé | terrain_elevation.c |
| `?setSplineHeight@Terrain@@QAEXM@Z` | Terrain::setSplineHeight(float) | 0x1000a840 | ✅ Nettoyé | terrain_elevation.c |
| `?setType@Terrain@@QAEXPAVTile@@HH@Z` | Terrain::setType(Tile*,int,int) | 0x100032f0 | ✅ Nettoyé | terrain_setType.c |
| `?updatePath@Terrain@@QAEXHHH@Z` | Terrain::updatePath(int,int,int) | 0x1000125d | ✅ Nettoyé | terrain_paths.c |
| `?layPath@Terrain@@QAEXPAVTile@@HH@Z` | Terrain::layPath(Tile*,int,int) | 0x100012c1 | ✅ Nettoyé | terrain_paths.c |
| `?pathUpdateRender@Terrain@@QAEXPAVTile@@M@Z` | Terrain::pathUpdateRender(...) | 0x100011e0 | ✅ Nettoyé | terrain_paths.c |
| `?stripRender@Terrain@@QAEXPAVTile@@HM@Z` | Terrain::stripRender(Tile*,int,float) | 0x10001299 | ✅ Nettoyé | terrain_paths.c |
| `?tileHit@Terrain@@QAEPAVTile@@HH@Z` | Terrain::tileHit(int x, int y) | 0x1000ab30 | ✅ Nettoyé | terrain_setType.c |
| `?passCollarInfo@Terrain@@QAEXQAHH@Z` | Terrain::passCollarInfo(int*,int) | 0x1000a880 | ✅ Nettoyé | terrain_paths.c |
| `??1Terrain@@QAE@XZ` | Terrain::~Terrain() | 0x10003090 | ✅ Nettoyé | terrain_setType.c |

## Structure Tile (584 bytes) — État des lieux

```
[0x000] elevation[4] : int32 × 4         ✅ getElevation()
[0x010] waterLevel   : int32             ⚠️ Hypothèse
[0x014-0x023]        : int32 × 4         ❌ Inconnu
[0x024] type         : int32             ✅ getType()
[0x028-0x233]        : uint8[524]        ❌ Non analysé
[0x234] walls[4]     : uint8 × 4         ✅ getWall()
[0x238-0x247]        : uint8[16]         ❌ Inconnu
```

## Prochaines étapes recommandées

1. Analyser `render()` et `renderTile()` — cœur du rendu isométrique
2. Analyser `drawLine()` et `drawCircle()` — primitives de dessin
3. Analyser `initSystem()` — initialisation DirectX
4. Analyser sound.dll — moteur audio
5. Dépaqueter le golf.exe principal pour accéder aux fonctions de jeu

|## Compléments récents (Mai 2026)
|
|- ✅ **38/38 exports nettoyés** (MAPPING complet ci-dessus)
|- ✅ **Architecture corrigée v2** : Terrain.dll = OpenGL 3D, jgld.dll = GDI32 sprites
|- ✅ **1 892 animations FLC converties** en PNG (cf. `game_data/converted/flc_catalog.json`)
|- ✅ **Parseur Python** pour 80 golfeurs pros + 50 célébrités (fichiers .dta)
|- ✅ **Décompilation GameTickFunction** (0x49846c) — boucle 16 slots, SEH, timeout (game_tick_v2.c)
|- ✅ **Décompilation AdvanceSimulation** (0x49ab40) — avancement timer (game_advance_sim.c)
|- ✅ **Décompilation InputHandler** (0x49b7b0) — événements clavier/souris (game_input_handler.c)
|- ✅ **Analyse variantes tuiles** — 4 axes de variation, comptages par thème (analyse_variantes_tuiles.md)
|- 🔜 Per-golfer simulation (vtable[0x68]) — dispatchée dynamiquement, nécessite traceur
|- 🔜 Parseur C pour les données (.dta/.pro/.chr)
