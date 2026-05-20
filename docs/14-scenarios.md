# Scénarios et Championnats

> **Confiance :** ⚠️ Partielle — les structures de base sont identifiées,
> le format .cse n'a pas été analysé

---

## 1. Architecture des Scénarios

Les scénarios dans SimGolf sont appelés **"Championships"**. Ils sont stockés dans le dossier `Themes\Championship\` avec deux types de fichiers :

| Extension | Contenu | Exemple |
|:---------:|---------|---------|
| `.cse` | Définition du scénario | `championship01.cse` |
| `.pro` | Golfeurs du scénario | `Themes\Championship\*.pro` |

### Chargement

```
Select Championship Course   → Interface de sélection
Play a Championship          → Bouton de lancement
Save Course for Championship → Qualification d'un parcours
```

---

## 2. Chaînes Clés (Binaire)

| Adresse | Chaîne |
|:-------:|--------|
| `0x4c3128` | `Themes\\Championship\\` |
| `0x4c6614` | `Themes\\Championship\\*.pro` |
| `0x4c6744` | `Themes\\Championship\\*.cse` |
| `0x4c6760` | `Select Championship Course` |
| `0x4c5a48` | `for Championship` |
| `0x4c5ad9` | `Save Course for Championship` |
| `0x4c3d18` | `saved for championship play.` |
| `0x4c3d38` | `.cse` |
| `0x4c1a5c` | `Championship` |
| `0x4c1a34` | `Challenge` |
| `0x4c38b0` | `After an exciting championship…` |
| `0x4c4a64` | `Play a Championship` |

---

## 3. Structure des Fichiers .cse

Le format `.cse` est un fichier binaire référencé via le pattern `*.cse`.

### Contenu probable

D'après les similarités avec d'autres jeux Firaxis de l'époque (Sid Meier's Golf) :

```c
typedef struct {
    char  name[64];              // Nom du scénario
    char  description[256];      // Description
    int   scenarioType;          // Type (voir ci-dessous)
    int   targetValue;           // Objectif à atteindre
    int   timeLimit;             // Limite de temps (semaines)
    int   courseTheme;           // Thème requis (-1=tous)
    int   minHoles;              // Trous minimum
    int   startCash;             // Capital de départ
    int   startPrestige;         // Prestige initial
    int   difficulty;            // Difficulté (0-3)
    // ... autres paramètres
} ScenarioDef;
```

> ❌ Non vérifié — le format exact nécessite l'analyse des fichiers .cse.

---

## 4. Types de Scénarios (Hypothèses)

Basé sur les mécaniques du jeu, les types probables sont :

### A. Construction de parcours

| Type | Objectif | Exemple |
|------|----------|---------|
| **Trous** | Construire N trous | "Build 18 holes" |
| **Qualité** | Atteindre un score SGA | "Reach 80 SGA rating" |
| **Thème** | Construire un parcours d'un thème | "Parkland course" |
| **Championnat** | Qualifier pour un tournoi | "Grand Slam eligible" |

### B. Économique

| Type | Objectif | Exemple |
|------|----------|---------|
| **Revenu** | Atteindre un revenu journalier | "$500/day revenue" |
| **Valeur** | Atteindre une valeur de parcours | "$1M course value" |
| **Profit** | Faire un profit total | "$100k total profit" |

### C. Tournois

| Type | Objectif | Exemple |
|------|----------|---------|
| **Victoire** | Gagner un tournoi spécifique | "Win SGA Championship" |
| **Prestige** | Atteindre un niveau de prestige | "Become a Legend" |
| **Slam** | Gagner le Grand Slam | "Win the Grand Slam" |

---

## 5. Scénarios Identifiés

### Par les chaînes du binaire

| Chaîne | Probable |
|--------|----------|
| `"prestigious U.S Amateur Championship"` | Scénario amateur |
| `"SGA Qualifying School"` | Scénario débutant |
| `"Jr. Qualifying School"` | Variante junior |
| `"'CHALLENGE' type hole…"` | Défi de construction |

### Par les dialogues .txt

Les fichiers de dialogues `.txt` contiennent des scénarios narratifs :
- `Opening Day` — Premier jour du parcours
- Dialogues entre golfeurs (amitié, compétition)

### Par les thèmes

Chaque thème a un fichier `.txt` de description :
```
desert.txt    — Descriptions pour le thème Desert
parkland.txt  — Descriptions pour le thème Parkland  
links.txt     — Descriptions pour le thème Links
tropical.txt  — Descriptions pour le thème Tropical
```

---

## 6. Qualification pour Championnat

Un parcours doit être **qualifié** pour participer aux tournois Championship.

```
Save Course for Championship:
  1. Vérifie que le parcours a assez de trous (18)
  2. Vérifie le score SGA (≥ 70 pour Mini Slam, ≥ 85 pour Grand Slam)
  3. Sauvegarde le parcours dans un format spécial
  4. Débloque le tournoi correspondant
```

---

## 7. Dialogues Scénarisés (.txt)

**Format :** UTF-16LE
**Nombre :** 90+ fichiers
**Usage :** Dialogues déclenchés pendant le jeu

### Convention de nommage

```
Gxxxx — Deux personnages masculins
LxMx — Homme + femme (romance?)
CMMx — Deux hommes (comedy?)
```

Les noms des personnages dans les dialogues :
```
PARTNER — Le joueur (toujours appelé "PARTNER")
Gary Golf — Exemple de pro
Bill — Célébrité
```

---

## 8. Sauvegarde de la Progression

La progression des scénarios est sauvegardée dans les fichiers `.sve`. Quand le joueur charge une partie, le scénario actif et ses objectifs sont restaurés.

Les accomplissements débloqués pendant un scénario sont persistés indépendamment (dans le système d'accomplissements global).
