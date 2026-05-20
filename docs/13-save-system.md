# Système de Sauvegarde

> **Confiance :** ⚠️ Partielle — le format de `top10.sve` est établi,
> les saves complets de parcours n'ont pas été analysés

---

## 1. Types de Fichiers de Sauvegarde

| Fichier | Format | Contenu | Fréquence |
|---------|:------:|---------|:---------:|
| `saved games\AutoSave1.sve` | Binaire | Sauvegarde automatique 1 | Périodique |
| `saved games\AutoSave2.sve` | Binaire | Sauvegarde automatique 2 | Périodique |
| `*.sve` (manuel) | Binaire | Save manuel du joueur | Sur demande |
| `Tutorial Save.sve` | Binaire | Save du tutoriel | Au chargement |
| `While_Browsing.sve` | Binaire | Save temporaire (navigateur de fichiers) | Temporaire |
| `top10.sve` | Binaire | Top 10 meilleurs scores | À chaque sauvegarde |
| `Themes\Championship\*.pro` | Binaire | Profils pros du championnat | Lecture seule |

### Contraintes

```
"Game Saved."                    — Confirmation de sauvegarde
"Cannot save course during a tournament."  — Sauvegarde bloquée en tournoi
"Save Course for Championship"   — Qualification pour championnat
"saved for championship play."   — Parcours qualifié
```

---

## 2. Format top10.sve

**Taille :** 1560 bytes
**Structure :** 10 × 156 bytes par entrée (ScoreEntry)

### ScoreEntry (156 bytes = 0x9c)

```c
typedef struct {
    // Identité (64 bytes)
    char  name[32];               // +0x00: Nom du golfeur (ASCII, null-terminé)
    uint8_t padding1[32];         // +0x20: Zéros (padding)
    
    // Parcours (64 bytes)
    char  courseName[64];         // +0x40: Nom du parcours (ASCII, null-terminé)
    
    // Scores (28 bytes)
    int   score;                  // +0x80: Score total (coups?)
    int   score2;                 // +0x84: Second score (?)
    int   score3;                 // +0x88: Troisième valeur (prize money?)
    int   field_8c;              // +0x8c: Zéro
    int   field_90;              // +0x90: Zéro
    int16 field_94;              // +0x94: 0
    int16 rank;                  // +0x96: Position (1-10)
    int   terminator;            // +0x98: 0xFFFFFFFF (-1 = fin)
} ScoreEntry;
```

### Exemple parsé

```
Pos 1: "b.l. dye" / "Harbour Lights GC" / score=949 / prize=$877/7459
Pos 2: "h.x. dye" / "Harbour Lights GC" / score=835 / prize=$722/6683
Pos 3: "l.f. dye" / "Harbour Lights GC" / score=790 / prize=$639/6043
Pos 4: "o.g. dye" / "Harbour Lights GC" / score=758 / prize=$639/6043
Pos 5: "l.e. dye" / "Harbour Lights GC" / score=628 / prize=$580/5387
Pos 6: "i.j. dye" / "Harbour Lights GC" / score=533 / prize=$505/4023
...
Pos 10: "u.g. dye" / "Harbour Lights GC" / score=197 / prize=$112/909
```

> ⚠️ Les champs score/prize sont déduits des valeurs. `score3` pourrait être le prize money total ou le profit cumulé.

---

## 3. Format des Saves de Parcours complets (.sve)

Les fichiers `.sve` (AutoSave1.sve, etc.) contiennent l'état complet du jeu. Basé sur les chaînes extraites :

### Données persistées probables

| Catégorie | Données |
|-----------|---------|
| **Parcours** | Grille de tuiles complète (64×64), élévations, types, objets placés |
| **Économie** | Trésorerie, green fee, membres, dépenses, revenus |
| **Tournois** | Historique des résultats, prestige, accomplissements |
| **Golfeurs** | Golfeurs rencontrés, amitiés, stats |
| **Scénario** | Scénario actif, progression, objectifs |
| **Météo** | Saison, météo courante |

> ❌ **Le format exact n'a pas été analysé.** Les fichiers `.sve` complets n'ont pas été trouvés dans le dump.

### Fonctions de sauvegarde

D'après les chaînes du binaire :

```
Load Game           → Écran Title_LoadGame
Continue Saved Game → Reprendre la partie
Save Game           → Sauvegarde manuelle
autosave            → Sauvegarde automatique (AutoSave1/2)
QuitSave            → Sauvegarde avant quitter
Save character      → Sauvegarde du profil golfeur
```

Les fonctions Windows utilisées pour la persistence :
- `LoadLibraryA` — chargement DLL
- `LoadImageA` — chargement image
- `LoadCursorA` — chargement curseur
- `LoadStringA` — chargement chaîne (via ressource?)

---

## 4. Sauvegarde des Golfeurs

Les golfeurs personnalisés sont sauvegardés via :
- Fichiers `.glf` — profil complet du golfeur joueur
- Même format que `.pro` (1008 bytes + portrait PCX)

### Fichiers .glf connus

```
Joe Pro.glf       I.M.Picky.glf      Putter.glf
Ranger Rick.glf   Santa.glf          Sherlock.glf
Sir Links.glf     The Artist.glf
```

---

## 5. Sauvegarde des Scénarios

Les fichiers `.cse` dans `Themes\Championship\` sont les scénarios pré-définis (lecture seule). La progression du joueur dans les scénarios est stockée dans les `.sve`.

---

## 6. Emplacement des Saves

D'après les chaînes :
```
saved games\*.sve         → Dossier des sauvegardes
Themes\Standard\          → Données de base (pros, célébrités)
Themes\Championship\      → Données des championnats
Themes\[ThemeName]\       → Textures du thème
```

Le chemin exact dépend du répertoire d'installation. Les saves sont probablement dans :
```
[InstallDir]\saved games\AutoSave1.sve
[InstallDir]\saved games\AutoSave2.sve
[InstallDir]\top10.sve
```
