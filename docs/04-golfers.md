# Système des Golfeurs

> **Confiance :** ⚠️ Partielle — les données des pros et célébrités sont extraites,
> mais l'IA de jeu n'est que partiellement décompilée.

---

## 1. Types de Golfeurs

| Type | Source | Nombre | Exemple |
|------|--------|:------:|---------|
| **Pros** | `progolfers.dta` | ~80 | "Gary Golf", "Joe Pro" |
| **Célébrités** | `celebrities.dta` | ~50 | "Bill", "Carmen", "Gus" |
| **Personnalisés** | Créés par le joueur | — | — |

---

## 2. Données d'un Golfeur (fichier .pro)

Les golfeurs pros sont stockés dans des fichiers `.pro` (binaires). Le nom du fichier est le nom du golfeur.

**Structure (taille totale : 1008 bytes = 0x3F0) :**

| Offset | Taille | Champ | Description |
|--------|:------:|-------|-------------|
| 0x000 | 64 | name | Nom (32 wide chars) |
| 0x040 | 64 | firstName | Prénom (32 wide chars) |
| 0x080 | 4 | age | Âge |
| 0x084 | 4 | skill | Skill global (0-100) |
| 0x088 | 4 | power | Puissance |
| 0x08c | 4 | accuracy | Précision |
| 0x090 | 4 | putting | Putting |
| 0x094 | 4 | shortGame | Petit jeu |
| 0x098 | 4 | consistency | Constance |
| 0x09c | 4 | charisma | Charisme |
| 0x0a0 | 4 | ambition | Ambition |
| 0x0a4 | 4 | friendship | Amitié |
| 0x0a8 | 4 | humor | Humour |
| 0x0ac | 4 | patience | Patience |
| 0x0b0 | 4 | luck | Chance |
| 0x0b4 | 4 | generosity | Générosité |
| 0x0b8 | 4 | gamerSkill | Skill au jeu vidéo |
| 0x0bc | 4 | unknown | Inconnu |
| 0x0c0 | 4 | appearanceType | Type d'apparence (corps + tête) |
| 0x0c4 | 4 | handedness | Droitier/Gaucher |
| 0x0c8 | 4 | bodyType | Type de corps (0-3) |
| 0x0cc | 4 | headType | Type de tête |
| 0x0d0 | 256 | comment | Commentaire/description |
| 0x1d0 | 256 | career | Palmarès |
| 0x2d0 | 256 | voicePool | Pool de voix (index des WAV) |
| 0x3d0 | 4 | portraitWidth | Largeur portrait |
| 0x3d4 | 4 | portraitHeight | Hauteur portrait |
| 0x3d8 | 4 | portraitSize | Taille données portrait |
| 0x3dc | — | portraitData | Données PCX du portrait |
| 0x3f0 | — | — | FIN |

> ⚠️ Les offsets exacts sont estimés — la structure complète n'a pas été 100% vérifiée.

### Fichier .glf

Le format `.glf` est identique au `.pro`, utilisé pour les golfeurs locaux du joueur (fichiers "Joe Pro.glf", "I.M.Picky.glf", etc.).

---

## 3. Données des Célébrités

Les célébrités sont stockées dans `celebrities.dta` (format CSV), puis exportées en `.chr`.

**Fichiers .chr :** ~21 fichiers trouvés :
- `Bonus.chr` — Personnage bonus
- `Gus.chr` — Gus
- `Bill.chr` — Bill
- `Carmen.chr` — Carmen
- etc.

**Structure .chr :** similaire au .pro mais avec des données supplémentaires : dialogues, archétype.

---

## 4. Attributs des Golfeurs

Les attributs sont divisés en **skills** (performance) et **personnalité** (IA sociale) :

### Skills (performance)

| Attribut | Effet sur le jeu |
|----------|-----------------|
| **Skill** | Score global (0-100) — base de tous les calculs |
| **Power** | Distance de frappe (drive, bois) |
| **Accuracy** | Précision (chance de rester dans le fairway) |
| **Putting** | Compétence sur le green |
| **Short Game** | Approches, chips, bunkers |
| **Consistency** | Variabilité des scores (haut = stable) |

### Personnalité (IA sociale)

| Attribut | Effet probable |
|----------|---------------|
| **Charisma** | Popularité, attrait des foules |
| **Ambition** | Volonté de progresser, participer aux tournois |
| **Friendship** | Probabilité de devenir ami avec le joueur |
| **Humor** | Qualité des dialogues |
| **Patience** | Tolérance aux parcours difficiles |
| **Luck** | Chance sur les coups (effet aléatoire) |
| **Generosity** | Dons, pourboires, investissements |

> ⚠️ L'effet exact de chaque attribut n'est pas confirmé — seuls les noms sont extraits des données.

---

## 5. Fichier .dta (Golfeurs Pros)

Format CSV avec :
- Lignes commençant par `//` = commentaires
- Champs séparés par `|`
- Champs : `Nom|Prénom|Age|Skill|Power|...`

**Exemple de structure (déduite) :**
```
// progolfers.dta — 80 pros
Gary Golf|Gary|32|85|90|80|75|80|85|70|65|80|75|60|55|50|0|0|0|"A natural talent..."|"Won the 1998 Open"|...
Joe Pro|Joe|28|75|75|75|75|75|75|50|50|50|50|50|50|50|0|0|0|"Solid all-around"|...
```

---

## 6. Équipement

Chaque golfeur a un **ensemble de clubs** (fichier `.glf` ou profil `.pro`). Le jeu référence des clubs comme :
- Driver
- Bois 3, 5
- Fers 3-9
- Wedges (PW, SW, LW)
- Putter

Les clubs ont des statistiques (distance, précision, loft) qui affectent les tirs.

> ⚠️ L'implémentation exacte de l'équipement n'est pas décompilée.

---

## 7. IA des Golfeurs

L'IA des golfeurs est partiellement décompilée (voir `game_ai_logic.h` et `ai_club_selection.md`).

### Sélection de Club

Basée sur (déduit du code ASM) :
1. Distance jusqu'au trou
2. Obstacles entre la balle et le trou
3. Lieu de la balle (fairway, rough, bunker)
4. Skill du golfeur
5. Conditions météo (vent)

### Logique de Tir (StartGolferAction @ 0x49acf0)

```
StartGolferAction(state, golferId, param):
├── Vérifie si le golfeur est actif
├── Calcule la trajectoire (vtable[0x68])
├── Applique le skill du golfeur
├── Ajoute la variance aléatoire
└── Programme l'animation + timer
```

### Vtable[0x68] — Point d'entrée simulation

La fonction à `vtable[0x68]` (adresse 0x4a6ab8 dans le constructeur GameState) est le point d'entrée de la simulation par golfeur. Elle est dispatchée dynamiquement — impossible à suivre statiquement. Elle contient probablement :
- La sélection de club
- Le calcul de trajectoire
- La physique de vol de balle

> ❌ **STATUT : INACCESSIBLE STATIQUEMENT** — Cette fonction est résolue dynamiquement dans le constructeur de GameState. Trois candidates FPU (floating-point) ont été identifiées à 0x465170, 0x464ee0, 0x464ff0 mais leur rôle exact n'est pas confirmé.

---

## 8. Apparences

### Corps

Huit types de corps disponibles (fichiers PCX) :

| Fichier | Genre | Style |
|---------|:-----:|-------|
| `MaleKLS.pcx` | M | Habit classique |
| `MalePLS.pcx` | M | Habit pro |
| `MalePSS.pcx` | M | Habit sport |
| `MaleSSS.pcx` | M | Habit très sport |
| `FemalePLS.pcx` | F | Habit pro |
| `FemalePSS.pcx` | F | Habit sport |
| `FemaleSkTT.pcx` | F | Jupe/Tee |
| `FemaleSSS.pcx` | F | Habit très sport |

Chaque corps a une version `_sm.pcx` pour le portrait (small).

### Têtes

Les fichiers de têtes sont dans `heads/` :
- `golfballhalopage_female.pcx`
- `golfballhalopage_male.pcx`
- Fichiers `*.pcx` pour chaque visage

Le jeu référence aussi des fichiers pour les expressions (`sim_female_all_expressionsflat`, `sim_male_all_expressionsflat`).

---

## 9. Personnalisation

Le joueur peut créer des golfeurs personnalisés via une interface dédiée :
- `interface\\CustGlfBckMale` — Fond personnalisation homme
- `interface\\CustGolfBckgrnd` — Fond personnalisation
- `interface\\HeadSelect` — Sélection de tête
- `interface\\HeadBodyBck` — Fond corps/tête
- `interface\\GolferStats` — Statistiques du golfeur
- `interface\\GolferStats_A` — Alpha pour stats

Le golfeur Joe Cool est un personnage préconstruit avec son propre panel :
- `interface\\JoeCoolPanel` + `_A`
