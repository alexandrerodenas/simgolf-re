# SimGolf (2002) — Guide de Référence Complet

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
| [18-trees.md](../docs/18-trees.md) | Système des arbres : tuiles Woods (ID 14) + sprites FLC animés | ✅ Élevée |
| [reference-opengolf-tycoon.md](../docs/reference-opengolf-tycoon.md) | Leçons du projet OpenGolfTycoon (loopmachine) | 🧠 Source externe |
| [reference-madcoretom-heightmap.md](../docs/reference-madcoretom-heightmap.md) | Techniques WebGL2 : heightmap, auto-tiling, sous-tuiles, picking (MadcoreTom) | 🧠 Source externe |
| [ui_analysis.md](../ref/decompiled/ui_analysis.md) | Analyse RE de l'interface UI : structures, machine d'état, écrans | ✅ Élevée |

### Analyses Systématiques (Ghidra 12.1)

| Fichier | Contenu | Confiance |
|---------|---------|:---------:|
| [ANALYSE_PASSE1_PERSISTANCE.md](ANALYSE_PASSE1_PERSISTANCE.md) | Données & Persistance : GameState, formats .sve/.dta/.pro, sérialisation | ✅ Élevée |
| [ANALYSE_PASSE2_SYSTEMIQUE.md](ANALYSE_PASSE2_SYSTEMIQUE.md) | Simulation & IA : boucle jeux, physique balle, IA golfeurs, économie | ✅ Élevée |
| [ANALYSE_PASSE4_ACTION.md](ANALYSE_PASSE4_ACTION.md) | Interface & Actions : machine d'état UI, événements, dialogues | ✅ Élevée |
| [SYNTHESE_GLOBALE.md](SYNTHESE_GLOBALE.md) | Carte complète golf.exe, index interfaces TS, index algorithmes | ✅ Élevée |
| [ANALYSE_TILE_528.md](ANALYSE_TILE_528.md) | Cartographie complète des 584 octets d'une tuile (offsets + auto-tiling + flags) | ✅ Élevée |
| [ANALYSE_PASSE1_SCENARIOS.md](ANALYSE_PASSE1_SCENARIOS.md) | Format .cse, 6 scénarios, parsing FindFirstFile, section .data compressée | ✅ Élevée |
| [ANALYSE_OPENGL_DEADCODE.md](ANALYSE_OPENGL_DEADCODE.md) | Preuve : OpenGL actif (169+ appels), pas de code mort, vrai rendu 3D isométrique | ✅ Élevée |
| [GUIDE_REIMPLANTATION.md](GUIDE_REIMPLANTATION.md) | Guide complet clé-en-main : toutes les structures, algorithmes, mécaniques | ✅ Synthèse |

---

## 🎯 Objectif du Guide

Ce document sert de **cahier des charges technique** pour :

1. **Comprendre le fonctionnement interne** du jeu SimGolf original
2. **Réimplémenter** des systèmes spécifiques (rendu, IA, économie)
3. **Documenter** chaque structure de données, format de fichier, et algorithme

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

## 🔍 Méthodologie de Rétro-Ingénierie

- **Analyse statique (objdump + Capstone) :** désassemblage complet du .text (1,1M lignes)
- **Analyse dynamique (Ghidra 12.1 + ghidra-cli) :** décompilation C, fonctions identifiées (1839), structures reconstituées
- **Analyse de chaînes :** extraction des strings, tables de constantes, et références aux assets
- **Parsing binaire :** formats de fichiers (PCX, FLC, .dta, .pro, .glf, .chr, .sve)
- **Validation :** croisement ASM ↔ chaînes ↔ données ↔ comportement observé

> **Ressources converties :** Tous les assets (PCX, BMP, FLC) sont disponibles en **WebP** dans `data/converted/` (images fixes + animated WebP). Voir [15-asset-inventory.md](15-asset-inventory.md).

> **Plan de suivi :** cf. [PLAN_DE_SUIVI.md](./PLAN_DE_SUIVI.md) pour l'état d'avancement global du projet.
