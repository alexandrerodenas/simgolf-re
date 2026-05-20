# Formats de Données

> **Confiance :** ✅ Élevée — parseur C fonctionnel, tous les formats supportés

---

## 1. Formats Binaires Supportés

Le parseur (`game_data_parser.h`) supporte les formats suivants :

| Extension | Contenu | Fichiers | Structure |
|:---------:|---------|:--------:|-----------|
| `.dta` | Golfeurs pros/célébrités | 2 | CSV avec `//` commentaires |
| `.pro` | Profil golfeur pro | ~80 | Binaire 1008 bytes + portrait PCX |
| `.chr` | Personnage célébrité | ~21 | Binaire avec dialogues |
| `.glf` | Profil golfeur joueur | ~8 | Binaire (même format que .pro) |
| `.sve` | Top scores | 1 | Binaire avec ScoreEntry |

---

## 2. Format .dta (Données Golfeurs)

Fichier texte avec :
- Lignes `//` = commentaires ignorés
- Champs séparés par `|`
- Retour à la ligne = nouvel enregistrement

**Structure d'un enregistrement :**
```
Nom|Prénom|Age|Skill|Power|Accuracy|Putting|ShortGame|Consistency|
Charisma|Ambition|Friendship|Humor|Patience|Luck|Generosity|GamerSkill|
unknown|AppearanceType|Handedness|BodyType|HeadType|
"commentaire texte"|"carrière texte"|"voix"
```

### Fichiers trouvés

| Fichier | Enregistrements | Type |
|---------|:---------------:|------|
| `progolfers.dta` | ~80 | Golfeurs pros |
| `celebrities.dta` | ~50 | Célébrités |

Les commentaires incluent les noms des golfeurs célèbres : "Tiger Woods", "Jesper Parnevik", "John Daly", "Laura Baugh", etc.

---

## 3. Format .pro (Pro Golfeur)

Taille fixe : **1008 bytes** (0x3F0)

```c
typedef struct {
    // Identité
    wchar_t name[32];          // +0x000: Nom complet (64 bytes)
    wchar_t firstName[32];     // +0x040: Prénom (64 bytes)
    
    // Stats
    int age;                   // +0x080: Âge
    int skill;                 // +0x084: Skill global (0-100)
    int power;                 // +0x088: Puissance
    int accuracy;              // +0x08c: Précision
    int putting;               // +0x090: Putting
    int shortGame;             // +0x094: Petit jeu
    int consistency;           // +0x098: Constance
    int charisma;              // +0x09c: Charisme
    int ambition;              // +0x0a0: Ambition
    int friendship;            // +0x0a4: Amitié
    int humor;                 // +0x0a8: Humour
    int patience;              // +0x0ac: Patience
    int luck;                  // +0x0b0: Chance
    int generosity;            // +0x0b4: Générosité
    int gamerSkill;            // +0x0b8: Skill jeu vidéo
    int unknown;               // +0x0bc: Inconnu
    int appearanceType;        // +0x0c0: Type d'apparence
    int handedness;            // +0x0c4: Droitier(0)/Gaucher(1)
    int bodyType;              // +0x0c8: Type de corps
    int headType;              // +0x0cc: Type de tête
    
    // Textes
    char comment[256];         // +0x0d0: Description
    char career[256];          // +0x1d0: Palmarès
    char voicePool[256];       // +0x2d0: Index des voix
    
    // Portrait PCX
    int portraitWidth;         // +0x3d0: Largeur
    int portraitHeight;        // +0x3d4: Hauteur
    int portraitSize;          // +0x3d8: Taille données
    // portraitData[]         // +0x3dc: Données PCX du portrait
} GolferProfile;
// Taille totale : 0x3F0 = 1008 bytes + portraitData
```

### Fichiers .pro trouvés

Environ 80 fichiers dans `Themes/Standard/` et `Themes/Championship/` :
- `Gary Golf.pro`, `Joe Pro.pro`, `I.M.Picky.pro`, etc.
- Les pros célèbres (inspirés de vrais golfeurs)

---

## 4. Format .chr (Célébrité)

Structure similaire au .pro avec des champs supplémentaires :

```c
typedef struct {
    // Mêmes champs que GolferProfile
    wchar_t name[32];
    wchar_t firstName[32];
    int age;
    int skill;
    // ... tous les attributs ...
    
    // Suppléments célébrité
    int archetype;             // Archétype de personnalité
    char dialogues[1024];      // Dialogues spécifiques
    // + portrait PCX
} Character;
```

### Fichiers .chr trouvés (~21)

`Bonus.chr`, `Gus.chr`, `Bill.chr`, `Carmen.chr`, `Cash.chr`, `Dexter.chr`,
`Dick.chr`, `Dino.chr`, `Earl.chr`, `FlightAttendant.chr`, `Golfergal.chr`,
`Groucho.chr`, `Jenny.chr`, `Kurt.chr`, `Lance.chr`, `Lionel.chr`,
`Mona.chr`, `Mortimer.chr`, `Nova.chr`, `Pam.chr`, `Sarge.chr`

---

## 5. Format .glf (Golfeur Joueur)

**Même format que .pro** (1008 bytes + portrait). Fichiers dans le dossier du parcours :

`Joe Pro.glf`, `I.M.Picky.glf`, `Putter.glf`, `Ranger Rick.glf`,
`Santa.glf`, `Sherlock.glf`, `Sir Links.glf`, `The Artist.glf`

---

## 6. Format .sve (Top Scores)

Fichier `top10.sve` contenant les meilleurs scores.

```c
typedef struct {
    char name[16];             // Nom du joueur (8 wide chars)
    int score;                 // Score
    int date;                  // Date (timestamp ou semaine)
} ScoreEntry;

// Le fichier contient 10 entrées
```

> ⚠️ Le format exact des dates n'est pas confirmé.

---

## 7. Fichiers de Scénario

Les scénarios sont stockés dans `Themes/Championship/` :
- Fichiers `.cse` (Course Scenario ?)
- Fichiers `.pro` pour les golfeurs du scénario

> ❌ **Format non analysé** — les fichiers `.cse` n'ont pas été étudiés.

---

## 8. Autres Formats dans le Jeu

| Format | Extension | Usage |
|--------|:---------:|-------|
| **PCX** | `.pcx` | Textures interface + personnages |
| **FLC** | `.flc` | Animations sprite (1892 fichiers) |
| **PNG** | `.png` | Textures (via libpng 1.0.5) |
| **BMP** | `.bmp` | Textures de terrain (par thème) |
| **WAV** | `.wav` | Sons (interface + voix) |
| **BIK** | `.bik` | Cutscenes Bink Video |
| **TXT** | `.txt` | Descriptions de thèmes (desert.txt, etc.) |
