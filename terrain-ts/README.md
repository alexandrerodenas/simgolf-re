# terrain-ts

Port TypeScript de **Terrain.dll** (SimGolf, Maxis/Firaxis 2001).

## Origine

**Terrain.dll** (444 KB, PE32/x86) est la DLL de rendu de terrain de SimGolf.
Analysée avec **rizin 6.1.4** — désassemblage complet de ses 38 exports.

## API

| Méthode | Original | Description |
|:--------|:---------|:------------|
| `getInstance()` | Singleton | Récupère l'instance unique |
| `initSystem(w, h, ctx, debug)` | ✓ | Initialise le système de terrain |
| `closeSystem()` | ✓ | Ferme et libère les ressources |
| `resetTerrain()` | ✓ | Remet tout en eau plate |
| `tileAt(x, y)` | ✓ | Accès à une tuile par coordonnées |
| `tileHit(x, y)` | ✓ | Alias de tileAt |
| `setType(tile, type, effect)` | ✓ | Change le type de terrain |
| `getType(tile)` | ✓ | Retourne le type |
| `getVariation(tile)` | ✓ | Retourne la variation cosmétique |
| `getElevation(tile, corner)` | ✓ | Élévation d'un coin |
| `elevateCorner(tile, corner)` | ✓ | Monte un coin |
| `lowerCorner(tile, corner)` | ✓ | Descend un coin |
| `lowerEdgeCorner(tile, c, nei, f)` | ✓ | Descente avec lissage |
| `setWall(tile, dir, val, bool)` | ✓ | Pose/enlève un mur |
| `getWall(tile, dir)` | ✓ | Vérifie présence mur |
| `hasPath(tile)` | ✓ | Vérifie présence chemin |
| `hasConnectedPath(x, y)` | ✓ | Chemin connecté au réseau |
| `layPath(tile, from, to)` | ✓ | Pose un chemin |
| `updatePath(x, y, range)` | ✓ | Met à jour le réseau |
| `loadNewCourseType(type)` | ✓ | Change le type de parcours |
| `changeLighting(index)` | ✓ | Change l'éclairage |
| `setZoomLevel(level)` | ✓ | Zoom |
| `resize(w, h)` | ✓ | Redimensionne la grille |
| `setSplineHeight(h)` | ✓ | Hauteur de spline |
| `passCollarInfo(data, len)` | ✓ | Données de collars |
| `calcAllNormals(tile)` | ✓ | Normales toutes les tuiles |
| `calcNormals(tile)` | ✓ | Normales une tuile |
| `render(tile, t)` | ✓ | Rendu d'une tuile |
| `localRender(t1, t2, r)` | ✓ | Rendu zone locale |
| `renderTile(x, y, w, tex, h)` | ✓ | Rendu par coordonnées |
| `stripRender(tile, n, t)` | ✓ | Rendu par bande |
| `pathUpdateRender(tile, t)` | ✓ | Rendu chemin |
| `drawBezierSpline(...)` | ✓ | Spline de Bézier |
| `drawCardinalSpline(...)` | ✓ | Spline cardinale |
| `drawCircle(center, r)` | ✓ | Points d'un cercle |
| `drawLine(...)` | ✓ | Points d'une ligne |
| `initTerrain()` | ✓ | Post-init |
| `computeAllRenderPasses()` | ✓ | Calcule toutes les passes |

## Architecture

```
terrain-ts/
├── src/
│   ├── index.ts         # Exports
│   ├── types.ts         # ITile, TileType, interfaces
│   ├── terrain.ts       # Terrain class (38 méthodes)
│   ├── gl-renderer.ts   # WebGL2 multi-pass renderer
│   ├── lighting.ts      # Parseur de lighting.txt
│   └── splines.ts       # Splines + helpers
├── package.json
└── tsconfig.json
```

## Utilisation

```ts
import { Terrain, GLTileRenderer, TileType, CourseTheme } from 'terrain-ts';

// Instance singleton
const t = Terrain.getInstance();

// Initialisation
const canvas = document.getElementById('gl') as HTMLCanvasElement;
const gl = canvas.getContext('webgl2');
const renderer = new GLTileRenderer(gl);
t.initSystem(16, 16, gl, false);

// Éditer le terrain
const tile = t.tileAt(5, 5);
t.setType(tile, TileType.Fairway, 0);

// Rendu
t.render(tile, 1.0);
```

## Rendu

Le renderer WebGL2 émule le pipeline OpenGL 1.x de Terrain.dll :

- **Immédiat mode** → VAO + buffers dynamiques
- **glLightfv/glMaterialfv** → uniforms lambertien
- **glBegin/glEnd** → drawArrays TRIANGLES
- **Multi-pass avec blending** → bordures superposées
- **gluBuild2DMipmaps** → generateMipmap
