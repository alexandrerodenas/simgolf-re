# SimGolf (2002) — Guide de Référence Complet pour Refonte

> Document généré par rétro-ingénierie du binaire original (golf.exe + DLLs)
> Mai 2026 — Projet `simgolf-re`
> **Statut :** Recherche active — les sections marquées ⚠️ sont des hypothèses à valider

---

## 📚 Structure du Guide

Ce guide est organisé en fichiers indépendants par domaine. Chaque fichier peut être lu séparément.

### Noyau du jeu

| Fichier | Contenu | Confiance |
|---------|---------|:---------:|
| [01-architecture.md](../docs/01-architecture.md) | Architecture technique : EXE, DLLs, mémoire, pipeline | ✅ Élevée |
| [02-terrain.md](../docs/02-terrain.md) | Système de terrain : tuiles, élévation, rendu isométrique | ✅ Élevée |
| [03-graphics.md](../docs/03-graphics.md) | Pipeline graphique : JGL (2D) + Terrain.dll (OpenGL) | ✅ Élevée |

### Systèmes de jeu

| Fichier | Contenu | Confiance |
|---------|---------|:---------:|
| [04-golfers.md](../docs/04-golfers.md) | Golfeurs : pros, célébrités, stats, IA | ⚠️ Partielle |
| [05-physics.md](../docs/05-physics.md) | Physique de balle, sélection de club, trajectoires | ⚠️ Partielle |
| [06-scoring.md](../docs/06-scoring.md) | Score SGA, évaluation des trous, classement | ✅ Élevée |
| [07-tournaments.md](../docs/07-tournaments.md) | Tournois SGA : types, scheduling, prize money | ✅ Élevée |
| [08-economy.md](../docs/08-economy.md) | Économie : green fees, revenus, coûts, valeur | ✅ Élevée |

### Interface et Média

| Fichier | Contenu | Confiance |
|---------|---------|:---------:|
| [09-ui.md](../docs/09-ui.md) | Interface utilisateur : écrans, panels, input | ✅ Élevée |
| [10-audio.md](../docs/10-audio.md) | Audio : sound.dll, WAVE/MIDI, sons UI | ✅ Élevée |
| [11-animations.md](../docs/11-animations.md) | Animations FLC : sprites, formats, conversion | ✅ Élevée |

### Données et Formats

| Fichier | Contenu | Confiance |
|---------|---------|:---------:|
| [12-data-formats.md](../docs/12-data-formats.md) | Formats de données : .dta, .pro, .chr, .glf, .sve | ✅ Élevée |
| [13-save-system.md](../docs/13-save-system.md) | Système de sauvegarde : top10.sve, save games | ⚠️ Partielle |
| [14-scenarios.md](../docs/14-scenarios.md) | Scénarios et campagnes | ❌ Faible |

### Annexes

| Fichier | Contenu | Confiance |
|---------|---------|:---------:|
| [15-asset-inventory.md](../docs/15-asset-inventory.md) | Inventaire complet des assets (PCX, FLC, sons) | ✅ Élevée |
| [16-function-map.md](../docs/16-function-map.md) | Carte des fonctions ASM et adresses | ✅ Élevée |
| [17-known-unknowns.md](../docs/17-known-unknowns.md) | Ce qu'on ne sait pas encore | ✅ Sûr |
| [reference-opengolf-tycoon.md](../docs/reference-opengolf-tycoon.md) | Leçons du projet OpenGolfTycoon (loopmachine) | 🧠 Source externe |
| [reference-madcoretom-heightmap.md](../docs/reference-madcoretom-heightmap.md) | Techniques WebGL2 : heightmap, auto-tiling, sous-tuiles, picking (MadcoreTom) | 🧠 Source externe |

---

## 🎯 Objectif du Guide

Ce document sert de **cahier des charges technique** pour quiconque voudrait :

1. **Comprendre le fonctionnement interne** du jeu SimGolf original
2. **Porter le jeu** vers une plateforme moderne (web, mobile, native)
3. **Réimplémenter** des systèmes spécifiques (rendu, IA, économie)
4. **Créer un clone** ou un successeur spirituel

**Principe :** Chaque information est annotée avec son niveau de confiance.
- ✅ **Confirmé** — issu du désassemblage direct ou des données binaires
- ⚠️ **Hypothèse** — déduit du comportement, à valider par test en jeu
- ❌ **Inconnu** — pas encore analysé, mentionné pour mémoire

---

## 🏗️ Aperçu du Jeu

**SimGolf** (Firaxis, 2002) est un jeu de gestion/golf où le joueur :
1. **Construit** un parcours de golf (terrain, trous, obstacles, bâtiments)
2. **Joue** au golf avec des pros et célébrités sur son parcours
3. **Gère** l'économie (green fees, membres, entretien)
4. **Participe** à des tournois SGA pour gagner prestige et argent
5. **Débloque** des accomplissements et améliore son classement mondial

### Particularités techniques

- **Moteur 3D isométrique** via OpenGL (Terrain.dll) pour le terrain
- **Moteur 2D GDI** (jgld.dll) pour l'interface et les sprites overlay
- **Animations bitmap** au format FLC (Autodesk Animator)
- **Cutscenes** au format Bink Video
- **Aucun Windows control** — UI 100% custom paint
- **Architecture DLL** : EXE + Terrain.dll + jgld.dll + sound.dll + binkw32.dll

---

## 🔍 Méthodologie de Rétro-Ingénierrie

- **Désassemblage :** objdump + Capstone (Python), balayage linéaire et par fonction
- **Analyse statique :** recherche de chaînes, de références croisées, de patterns d'accès mémoire
- **Pas de Ghidra/IDA** — outils CLI uniquement
- **Pas de débogueur** — l'EXE ne peut pas être exécuté sur l'environnement actuel
- **Validation :** croisement entre le code ASM, les chaînes extraites, et les fichiers de données
