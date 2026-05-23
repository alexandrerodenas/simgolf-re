# Nettoyage du Code Décompilé — Plan de Travail (v3)

## État d'avancement

| Module | Fichiers | Statut |
|:-------|:---------|:------:|
| **Terrain** (10 fichiers) | structs/tile.h, set_texture, render_tile, render, elevation, tile_at, camera, paths, normals, system | ✅ Complet |
| **Audio** (1 fichier) | audio/sound.c | ✅ Structure + 3 devices |
| **Game State** (1 fichier) | structs/game_state.h | ✅ Golfeur, Tournoi, Économie, Ball |
| **Physique** (1 fichier) | physics/ball.c | ✅ Shot simulation |
| UI System | — | 🔜 |
| IA Golfeur | — | 🔜 |
| Tournois / Scoring | — | 🔜 |
| Init / Boucle | — | 🔜 |

## Statistiques
- **13 fichiers nettoyés** dans `ref/cleaned/`
- **~7 600 lignes** de code C documenté
- **25+ offsets de structures vérifiés** contre le C Ghidra
