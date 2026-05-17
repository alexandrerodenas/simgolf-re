# Correspondance des exports Terrain.dll
# Généré par Hermes-RE — Phase 2
# Source : Terrain.dll (PE32, MSVC++6.0 debug)

## Export → Nom nettoyé → Adresse brute

| Export (C++ manglé) | Nom nettoyé | Adresse brute | Statut |
|---|---|---|---|
| `?tileAt@Terrain@@QAEPAVTile@@HH@Z` | Terrain::tileAt(int x, int y) | 0x10001d50 | ✅ Nettoyé |
| `?getElevation@Terrain@@QAEHPAVTile@@H@Z` | Terrain::getElevation(Tile* t, int corner) | 0x10001de0 | ✅ Nettoyé |
| `?getType@Terrain@@QAEHPAVTile@@@Z` | Terrain::getType(Tile* t) | 0x10001f10 | ✅ Nettoyé |
| `?getWall@Terrain@@QAE_NPAVTile@@H@Z` | Terrain::getWall(Tile* t, int side) | 0x10001e80 | ✅ Nettoyé |
| `?setWall@Terrain@@QAEXPAVTile@@HH_N@Z` | Terrain::setWall(Tile* t, int a, int b, bool) | 0x1000a560 | 🔄 À nettoyer |
| `?hasPath@Terrain@@QAE_NPAVTile@@@Z` | Terrain::hasPath(Tile* t) | 0x1000a510 | 🔄 À nettoyer |
| `?hasConnectedPath@Terrain@@QAE_NHH@Z` | Terrain::hasConnectedPath(int, int) | 0x10001023 | ❌ Non traité |
| `?getInstance@Terrain@@SAPAV1@XZ` | Terrain::getInstance() | 0x100031a0 | ❌ Non traité |
| `?render@Terrain@@QAE_NPAVTile@@M@Z` | Terrain::render(Tile* t, float) | 0x1000104b | ❌ Non traité |
| `?localRender@Terrain@@QAEXPAVTile@@0M@Z` | Terrain::localRender(...) | 0x1000117c | ❌ Non traité |
| `?renderTile@Terrain@@QAEXHHHHH@Z` | Terrain::renderTile(...) | 0x100011ea | ❌ Non traité |
| `?drawLine@Terrain@@QAEXHHHHHHH@Z` | Terrain::drawLine(...) | 0x100011b3 | ❌ Non traité |
| `?drawCircle@Terrain@@QAEXPAVTile@@M@Z` | Terrain::drawCircle(Tile*, float) | 0x10001186 | ❌ Non traité |
| `?drawBezierSpline@Terrain@@QAEXHHHHHHHHH@Z` | Terrain::drawBezierSpline(...) | 0x10005230 | ❌ Non traité |
| `?drawCardinalSpline@Terrain@@QAEXHHHHHHHHHHH@Z` | Terrain::drawCardinalSpline(...) | 0x10001244 | ❌ Non traité |
| `?initSystem@Terrain@@QAEXHHPAUHDC__@@_N@Z` | Terrain::initSystem(int,int,HDC,bool) | 0x100012e4 | ❌ Non traité |
| `?closeSystem@Terrain@@QAEXXZ` | Terrain::closeSystem() | 0x10001217 | ❌ Non traité |
| `?initTerrain@Terrain@@QAEXXZ` | Terrain::initTerrain() | 0x100012cb | ❌ Non traité |
| `?resize@Terrain@@QAEXHH@Z` | Terrain::resize(int w, int h) | 0x100012f8 | ❌ Non traité |
| `?loadNewCourseType@Terrain@@QAEXH@Z` | Terrain::loadNewCourseType(int) | 0x10001032 | ❌ Non traité |
| `?resetTerrain@Terrain@@QAEXXZ` | Terrain::resetTerrain() | 0x1000aa10 | ❌ Non traité |
| `?calcAllNormals@Terrain@@QAEXPAVTile@@@Z` | Terrain::calcAllNormals(Tile*) | 0x1000a740 | ❌ Non traité |
| `?calcNormals@Terrain@@QAEXPAVTile@@@Z` | Terrain::calcNormals(Tile*) | 0x10001307 | ❌ Non traité |
| `?setZoomLevel@Terrain@@QAEXH@Z` | Terrain::setZoomLevel(int) | 0x10001294 | ❌ Non traité |
| `?changeLighting@Terrain@@QAEXH@Z` | Terrain::changeLighting(int) | 0x100011c2 | ❌ Non traité |
| `?getVariation@Terrain@@QAEHPAVTile@@@Z` | Terrain::getVariation(Tile*) | 0x1000105a | ❌ Non traité |
| `?elevateCorner@Terrain@@QAEXPAVTile@@H@Z` | Terrain::elevateCorner(Tile*,int) | 0x1000133e | ❌ Non traité |
| `?lowerCorner@Terrain@@QAEXPAVTile@@H@Z` | Terrain::lowerCorner(Tile*,int) | 0x1000a620 | ❌ Non traité |
| `?lowerEdgeCorner@Terrain@@QAEXPAVTile@@H0M@Z` | Terrain::lowerEdgeCorner(...) | 0x10001154 | ❌ Non traité |
| `?setSplineHeight@Terrain@@QAEXM@Z` | Terrain::setSplineHeight(float) | 0x10001339 | ❌ Non traité |
| `?setType@Terrain@@QAEXPAVTile@@HH@Z` | Terrain::setType(Tile*,int,int) | 0x1000121c | ❌ Non traité |
| `?updatePath@Terrain@@QAEXHHH@Z` | Terrain::updatePath(int,int,int) | 0x1000125d | ❌ Non traité |
| `?layPath@Terrain@@QAEXPAVTile@@HH@Z` | Terrain::layPath(Tile*,int,int) | 0x100012c1 | ❌ Non traité |
| `?pathUpdateRender@Terrain@@QAEXPAVTile@@M@Z` | Terrain::pathUpdateRender(...) | 0x100011e0 | ❌ Non traité |
| `?stripRender@Terrain@@QAEXPAVTile@@HM@Z` | Terrain::stripRender(Tile*,int,float) | 0x10001299 | ❌ Non traité |
| `?tileHit@Terrain@@QAEPAVTile@@HH@Z` | Terrain::tileHit(int x, int y) | 0x1000ab30 | ❌ Non traité |
| `?passCollarInfo@Terrain@@QAEXQAHH@Z` | Terrain::passCollarInfo(int*,int) | 0x1000a880 | ❌ Non traité |
| `??1Terrain@@QAE@XZ` | Terrain::~Terrain() | 0x10001302 | ❌ Non traité |

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
