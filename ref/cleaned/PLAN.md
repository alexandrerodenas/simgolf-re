# Nettoyage du Code Décompilé — Plan de Travail

## Principe
- Un sous-dossier par module système (terrain, rendu, audio, ui, etc.)
- Chaque fichier `.c` nettoyé = le C Ghidra original + structures typées + noms
- Chaque décision sourcée : « d'après l'ASM à 0xXXXX, le guide §5.8.6, la texture WaterShallowB0003.bmp »
- Rien n'est deviné ou « guessé »

## Modules (ordre de priorité)

### Phase 1 — Terrain (le mieux compris)
1. `structs/tile.h` — Structure Tile complète (recoupée Ghidra + ASM + guide)
2. `structs/terrain.h` — Structure Terrain (classe C++ complète)
3. `terrain/set_type.c` — setType + FUN_10002f80 (variation)
4. `terrain/render_tile.c` — renderTile + FUN_1000e6c0 (renderSingleTile)
5. `terrain/render.c` — FUN_10005990 (Terrain_render)
6. `terrain/elevation.c` — elevateCorner / lowerCorner
7. `terrain/auto_tile.c` — neighbour mask + sélection orientation
8. `terrain/paths.c` — chemins + splines
9. `terrain/normals.c` — calcul normales

### Phase 2 — Rendu / JGLD
...

### Phase 3 — Audio / Sound
...

### Phase 4 — UI
...

### Phase 5 — IA / Golf
...

## Règles de vérification
Avant d'écrire un nom de variable ou de structure :
1. Vérifier dans le Ghidra C original — les offsets sont-ils cohérents ?
2. Vérifier dans le désassemblage brut (`ref/raw_disasm/`) — est-ce que l'ASM confirme ?
3. Vérifier dans `REFERENCE_GUIDE.md` — y a-t-il une analyse antérieure ?
4. Vérifier les constantes — `0xde1` = GL_TEXTURE_2D, `0x3f800000` = 1.0f
5. Si une info manque, la marquer `/* TODO: vérifier */` — pas d'invention
