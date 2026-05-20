# Ce Qu'on Ne Sait Pas Encore

> **Confiance :** ✅ Sûr — ce sont les lacunes identifiées de notre analyse

---

## 1. Lacunes Critiques

### vtable[0x68] — Dispatch Simulation Golfeur

**Problème :** Le point d'entrée de la simulation par golfeur (sélection de club, calcul de trajectoire, physique) est stocké dans `vtable[0x68]` du GameState. Il est initialisé **dynamiquement** dans le constructeur de GameState (0x4a6ab8), ce qui rend l'analyse statique impossible.

**Ce qu'on sait :**
- La fonction est assignée via `mov [eax+0x68], 0x4a6ab8` (vtable entry)
- Trois candidates FPU identifiées : `0x465170`, `0x464ee0`, `0x464ff0`
- `0x465170` est confirmée dans la section .text mais ABSENTE du dump de désassemblage

**Solutions possibles :**
- Exécuter le jeu dans un débogueur (Ghidra, x64dbg) avec un breakpoint sur le constructeur
- Analyser le binaire avec Ghidra (headless) si installable
- Chercher les cross-references de `0x465170` dans la table d'import/export

### Algorithme de Sélection de Club

**Problème :** Les règles exactes de sélection de club par l'IA ne sont pas décompilées.

**Ce qu'on sait :**
- Le fichier `ai_club_selection.md` décrit des heuristiques basées sur les chaînes extraites
- La distance, les obstacles, le lie de la balle et le skill sont des facteurs
- Le code est dans la vtable[0x68] (voir ci-dessus)

### Formules Physiques Exactes

**Problème :** Les équations de vol de balle ne sont pas extraites.

**Ce qu'on sait :**
- Trois fonctions FPU (floating point) identifiées
- La trajectoire inclut : distance, hauteur, vent, spin
- Le fichier `physics_formulas.md` documente les formules standard de golf

---

## 2. Lacunes Importantes

### Système de Sauvegarde Complet

**Problème :** Seul `top10.sve` a été parsé. Le format de sauvegarde complet (`.sve` ou autre) n'est pas connu.

**Ce qu'on sait :**
- `Cannot save course during a tournament.` — la sauvegarde est bloquée en tournoi
- Les saves contiennent l'état complet du parcours + économie + tournois

### Scénarios et Campagnes

**Problème :** Les fichiers `.cse` n'ont pas été analysés.

**Ce qu'on sait :**
- Ils sont dans `Themes/Championship/`
- `Select Championship Course` → écran de sélection
- `Save Course for Championship` → qualification pour championnat
- 6+ scénarios documentés (d'après les chaînes)

### Système de Météo

**Problème :** L'impact exact de la météo sur le jeu n'est pas quantifié.

**Ce qu'on sait :**
- `weather` est un paramètre des fonctions économiques et de score
- Météo possible : pluie, nuageux, beau
- Les chaînes `Rainy` et `Windy` existent
- La météo affecte les visiteurs (-50% pluie) et les scores (+3 coups)

### IA Sociale des Golfeurs

**Problème :** Les interactions sociales (amitié, recommandations, dons) ne sont pas documentées.

**Ce qu'on sait :**
- Les attributs de personnalité (charisma, friendship, generosity, humor, patience)
- Les golfeurs peuvent : faire des dons, recommander le parcours, devenir membres
- Le système de "membres" existe (memberRoster.pcx)

---

## 3. Lacunes Mineures

### Structure Tile Incomplète

**Problème :** 528 bytes sur 584 sont non-analysés.

**Contenu probable :**
- Normales pour éclairage (4 × 3 floats = 48 bytes)
- Coordonnées de texture (UV) (4 × 2 floats = 32 bytes)
- Flags d'état (chemin, construction, etc.)
- Compteur de variation cosmétique
- Données de collision

### Jouabilité Multi-joueur

**Problème :** Aucune analyse du mode multijoueur.

**Ce qu'on sait :**
- Les chaînes mentionnent des "paires" de golfeurs (PairBase.pcx)
- "SELECT THE NEXT PAIR OF GOLFERS" — sélection de paires

### Cutscenes Bink

**Problème :** Les fichiers `.bik` ne sont pas dans le dump actuel.

**Ce qu'on sait :**
- binkw32.dll importé (16 fonctions)
- `bink64.pcx` est le logo Bink Video
- Les cutscenes sont probablement sur le CD d'installation

### Fichiers .txt

**Problème :** `desert.txt`, `parkland.txt`, `links.txt`, `tropical.txt` — leur contenu exact n'est pas connu (descriptions de thème probablement).

---

## 4. Ce Qui Est Bloquant Pour une Refonte

| Priorité | Élément | Raison |
|:--------:|---------|--------|
| 🔴 | **Physique balle/club** | Sans ça, pas de gameplay golf |
| 🔴 | **IA golfeur** | Sans ça, pas d'adversaires |
| 🟡 | **Scénarios** | Sans ça, pas de campagne |
| 🟡 | **Save format** | Sans ça, pas de persistance |
| 🟢 | **Système de membres** | Important mais contournable |
| 🟢 | **Animations FLC** | Remplaçable par des sprites modernes |

### Comment Débloquer

1. **Exécuter le jeu** — indispensable pour tracer les appels dynamiques (vtable[0x68])
2. **Ghidra** — l'analyse statique avancée résoudrait la plupart des inconnues
3. **Test en jeu** — valider les formules et algorithmes déduits
4. **Débogueur** — capturer les allocations dynamiques et les dispatchs virtuels
