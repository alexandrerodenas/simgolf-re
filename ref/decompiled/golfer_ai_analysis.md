# SimGolf — IA des Golfeurs (Analyse)

> État des lieux : ce qu'on sait et ce qui manque
> Mai 2026

## 1. Ce qu'on SAIT

### Compétences (8 skills, valeurs 1-15)
```
Length      — Distance de frappe
Accuracy    — Précision de direction  
Imagination — Capacité à courber la balle
Recovery    — Sortir des situations difficiles
Backspin    — Backspin shot
Putter      — Précision au putting
Driver      — Précision au drive
Long Driver — Distance au drive
```

### Scoring (basé sur chaînes)
```
Triple Eagle (-4) → Double Eagle (-3) → Eagle (-2) → Birdie (-1)
→ Par (0) → Bogey (+1) → Double Bogey (+2) → Triple Bogey (+3)
```

### Types de trous (7, basé sur gameplay_architecture.md)
```
PRECISE   → récompense Accuracy
FREEWAY   → récompense Length
CHALLENGE → Accuracy + Length
CREATIVE  → Imagination
STRATEGIC → Accuracy + Imagination
HEROIC    → Length + Imagination
CLASSIC   → Toutes les compétences
```

### Physique (game_physics.c, réimplémentée)
```
- Calcul distance base par club + skills
- Déviation selon Accuracy, Lie, Vent
- Ajustements sol (Fairway=100%, Rough=80%, Sand=60%, Tee=110%)
- Putting selon Putter skill + pente
```

### Golfeurs (80 pros + hackers/amateurs dans progolfers.dta)
```
- Niveaux : Amateur (skill 1) → Hacker (5) → Pro (7-15) → Legend (10-15)
- 96 golfeurs avec skills uniques parsés
```

## 2. Logique d'IA Déduite (non vérifiée par asm)

### Sélection de club
```
Si distance > 200 yards → Driver
Si distance > 150 yards → Wood/Iron 3-5
Si distance > 100 yards → Iron 6-9
Si distance > 50 yards  → Wedge
Si distance < 30 yards et sol = Green → Putter
```

### Décision d'attaque
```
Si golfeur a Accuracy > 7 ET Hole_TYPE = PRECISE → attaque le pin
Si golfeur a Length > 10 ET Hole_TYPE = FREEWAY → drive max
Si golfeur a RoundsPerHole < 0.5 × Par → jouer safe
Si golfeur est en tête du tournoi → jouer safe
Si golfeur est derrière → attaquer
```

### Gestion de l'humeur
```
Humeur affectée par : score récent, météo, foule, équipement
Bonne humeur → bonus aux skills
Mauvaise humeur → malus
```

### Commentaires (basé sur dialogues)
```
Les golfeurs commentent leur coup :
- Succès : "Nice shot!", "Perfect!", "That's my game!"
- Échec : "Oh no!", "I can't believe it!", "That's rough"
- Selon personnalité (archetypes: Pro, Showoff, Grumpy, etc.)
```

## 3. Ce qui MANQUE (dans les fonctions dispatch non tracées)

### Logique de visée
```
- Comment le golfeur choisit SA cible (pin, centre green, layup)
- Calcul de la zone d'atterrissage idéale
- Prise en compte des obstacles (eau, bunker, rough)
```

### Algorithme de décision
```
- Arbre de décision ou système de score ?
- Pondération des facteurs (distance restante, vent, pression)
- Gestion des risques (reward vs penalty)
```

### Gestion du groupe
```
- Ordre de jeu (loin du trou joue en premier)
- Attente entre les coups
- Déplacement entre les trous
```

### Stratégie de parcours
```
- Quel trou attaquer, lequel jouer safe ?
- Gestion de l'énergie sur 18 trous
- Adaptation au type de trou
```

### Personnalité avancée
```
- Les célébrités (50) ont des comportements uniques ?
- Les "hackers" (9 types) jouent différemment des pros
- Les commentaires et réactions diffèrent par archetype
```

## 4. Architecture d'IA pour le Portage

```typescript
interface GolferAI {
  // Données du golfeur
  skills: GolferSkills;
  personality: 'aggressive' | 'conservative' | 'balanced';
  mood: number;  // 0-100

  // Décisions
  selectClub(params: ShotContext): ClubType;
  selectTarget(params: ShotContext): Target;
  selectShotType(params: ShotContext): ShotStyle;
  
  // Simulation
  simulateShot(params: ShotParams): ShotResult;
  
  // Émotions
  generateComment(result: ShotResult): string;
  updateMood(result: ShotResult): void;
}

interface ShotContext {
  distanceToHole: number;
  lie: LieType;
  wind: WindState;
  holePar: number;
  strokes: number;
  holeType: HoleType;
  roundScore: number;
  tournamentPressure: number;
}

type ClubType = 'driver' | 'wood' | 'iron' | 'wedge' | 'putter';
type ShotStyle = 'power' | 'normal' | 'finesse' | 'draw' | 'fade' | 'high' | 'low';
type Target = 'pin' | 'center' | 'layup' | 'safe';
```

## 5. Recommandation

Pour un portage web crédible, l'IA des golfeurs peut être **réimplémentée proprement**
plutôt que décompilée. Ce qu'il faut :

1. Un système de sélection de club basé sur distance + skills (facile)
2. Un système de précision basé sur skills + difficulté (facile)
3. Une logique d'attaque/defense basée sur personnalité + contexte (moyen)
4. Des commentaires basés sur le résultat + personnalité (moyen)
5. Une IA de groupe (ordre de jeu, déplacements) (moyen)

La physique est déjà codée dans game_physics.c. L'IA de décision
peut être écrite sans avoir à décompiler les 182 fonctions du jeu original.

La priorité est de définir le "ShotContext" et les poids décisionnels
(how much to attack vs play safe) qui rendent chaque golfeur unique.
