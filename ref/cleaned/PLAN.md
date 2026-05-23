# Nettoyage du Code Décompilé — Plan de Travail (mis à jour)

## État d'avancement

| Phase | Module | Fichiers | Statut |
|:------|:-------|:---------|:------:|
| 1 | Structures (Tile, Terrain, TypeInfo) | `structs/tile.h` | ✅ 20+ offsets confirmés |
| 1 | Set texture + variation | `terrain/set_texture.c` | ✅ rand()%maxVariation |
| 2 | Render pipeline | `terrain/render.c` | ✅ 4 directions, PotSandBunker skip |
| 2 | Render tile | `terrain/render_tile.c` | ✅ Multi-passes OpenGL |
| 2 | Tile access | `terrain/tile_at.c` | ✅ Getters type/wall/elev |
| 2 | Élévation | `terrain/elevation.c` | ✅ FUN_1000c7b0, corner switch 1/3/5/7 |
| 3 | Caméra / Zoom | `terrain/camera.c` | ✅ Projection ortho |
| 3 | Splines / Chemins | `terrain/paths.c` | ✅ Bézier + Cardinal |
| 3 | Normales | `terrain/normals.c` | ✅ Dirty flag, propagation voisins |
| 4 | System init/shutdown | `terrain/system.c` | ✅ OpenGL context, résolutions |
| _5_ | _Audio (sound.dll)_ | — | 🔜 |
| _6_ | _UI System_ | — | 🔜 |
| _7_ | _Game State_ | — | 🔜 |
| _8_ | _IA / Golf_ | — | 🔜 |
| _9_ | _Économie_ | — | 🔜 |
| _10_ | _Physique balle_ | — | 🔜 |

## Règles de vérification (inchangées)
Avant d'écrire un nom de variable ou de structure :
1. Vérifier dans le C Ghidra original
2. Vérifier dans le désassemblage brut
3. Vérifier dans REFERENCE_GUIDE.md
4. Vérifier les constantes (0xde1=GL_TEXTURE_2D, etc.)
5. Si une info manque → `/* TODO */` — pas d'invention
