# Analyse Physique SimGolf — Formules exactes

> Sources : désassemblage golf.exe, chaînes extraites du binaire
> Analyse ASM Hermes-RE, Mai 2026

## État des lieux

### ✅ Connu (vérifié par strings + ASM)

#### Clubs et distances (depuis les strings)
```
Driver  → distance > 200 yards (utilisé depuis Tee/Fairway long)
Wood    → distance > 150 yards
Long Iron → distance > 100 yards
Medium Iron → distance > 50-100 yards
Wedge   → distance < 50 yards (approche)
Chip/Pitch → distance < 50 yards, Lie ≠ Green (roulé ou lobé)
Putter  → distance < 30 yards, Lie = Green (roulage)
```

#### Skills impactant la distance
```
Length       → modifie distance base de tous les clubs
Long Driver  → modifie distance du Driver uniquement
Accurate Driver → affecte précision du Driver seulement
```

#### Lie penalties (depuis les noms de fichiers sons)
```
Tee      → lie parfait (meilleur)
Fairway  → bon lie
Rough    → lie réduit
Sand     → lie sévère (bunker)
Green    → putting uniquement
```

#### Types de tirs
```
Normal (straight)  → pas d'effet
Draw               → courbe D→G (imagination)
Fade               → courbe G→D (imagination)
High (backspin)    → lobe avec backspin pour arrêt sur green
Low (under trees)  → roulé sous les obstacles aériens
```

### ⚠️ Partiellement connu

#### Effet du vent (déduit des noms)
```
Head wind  → réduit la distance (vent de face)
Tail wind  → augmente la distance (vent arrière)
Cross wind → déviation latérale (vent de côté)
```
**Formule exacte inconnue** — facteurs multiplicatifs vs additifs non vérifiés

#### Influence des skills sur la distance (logique métier)
```
Distance = BaseDistance(club) 
         × SkillFactor(Length, LongDriver) 
         × LieMultiplier(lie) 
         × WindEffect(wind)
```
Les facteurs multiplicatifs exacts ne sont **pas** dans les strings et nécessitent une analyse ASM ciblée.

### ❌ Inconnu (nécessite analyse ASM poussée)

1. **BaseDistance(club)** : tableau de distances de base exactes
   - Exemples suspects (non vérifiés) : Driver ~250y, Wood ~210y, Long Iron ~180y
   
2. **SkillFactor** : comment Length (1-15) se traduit en yards additionnels
   - 1 point de Length = ? yards
   - 1 point de LongDriver = ? yards (bonus distinct)
   
3. **LieMultiplier** : pénalités exactes par type de sol
   - Tee = 100%, Fairway = ?%, Rough = ?%, Sand = ?%

4. **WindEffect** : vitesse max vent, mph → yards
   - -2 yards/mph headwind, +1 yards/mph tailwind ? (valeurs de la réimplantation)
   - Crosswind = ? yards de déviation par mph

5. **Déviation aléatoire** : formule du spread
   - Accuracy skill influence le rayon du cône de dispersion
   - Distribution uniforme ? Normale ? Tronquée ?

6. **Dégradation du coup** (fatigue/moral)

## Recommandation pour le portage

Les formules exactes de physique ont un **impact direct sur le gameplay ressenti**. Les puristes qui ont joué à SimGolf en 2002 remarqueront si la physique est différente.

**Approche recommandée :**
1. Copier les valeurs de la réimplémentation actuelle (`game_physics.c`)
2. Les ajuster par test de jeu
3. Documenter les valeurs comme "Sibylle" (approximation basée sur le comportement observé)

Pour obtenir les valeurs exactes, il faudrait :
- Extraire le tableau des distances de base clubs depuis le binaire
- Analyser la fonction `GolferProcessFunction` (via vtable[0x68] du golfeur)
- Chercher les constantes flottantes dans les fonctions appelées par `GameTickFunction`
