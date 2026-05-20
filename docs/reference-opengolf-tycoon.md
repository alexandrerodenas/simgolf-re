# Référence Open Golf Tycoon (Kenny Johnson)

> Source : [Article blog](https://kennyatx.com/vibecoding-a-golf-course-builder-on-parental-leave-lessons-learned-and-an-open-beta/)
> Repo : https://github.com/sneeosh/opengolf-tycoon
> Février 2026 — Godot 4.6 + GDScript + Claude Code
> **Licence : MIT**

---

## 1. Pourquoi c'est Pertinent pour SimGolf

Kenny Johnson a construit **Open Golf Tycoon**, un successeur spirituel de SimGolf, en ~35-40h avec Claude Code. C'est une preuve de concept que notre documentation est viable pour une réimplémentation. Son expérience valide plusieurs de nos choix et apporte des leçons concrètes.

**Coût total :** ~$140 (Claude Max $100/mois + $40 compute)
**Stack :** Godot 4.6, GDScript, hébergé sur Cloudflare Workers/R2/KV
**Taille du code :** ~25,000+ lignes de GDScript, 150+ fichiers

---

## 2. Architecture Générale

### Design Patterns Clés

| Pattern | Usage | Description |
|---------|-------|-------------|
| **EventBus Singleton** | Communication entre systèmes | ~60 signaux, découplage total. Passé pour événements, présent pour état |
| **Manager pattern** | Un manager par type d'entité | GolferManager, BallManager, HoleManager, PlacementManager, BuildingRegistry, TournamentManager |
| **State machine** | Entités + systèmes | États explicites pour golfer, balle, modes de jeu |
| **RefCounted systems** | Calculs stateless | ShotAI, CourseRatingSystem, WindSystem, WeatherSystem — pas de scène, pas de nœud |
| **Overlay pattern** | Rendu du terrain | 10+ overlays indépendants (eau, bunker, herbe, arbres, etc.) |
| **Data-driven JSON** | Configuration | Types de terrain, bâtiments, traits des golfeurs chargés depuis des fichiers JSON |
| **Batch signal mode** | Performance | Diffère les signaux pendant les opérations groupées pour éviter les cascades de redraw |
| **Sub-linear cost scaling** | Économie | `sqrt(raw) × 20` pour la maintenance — leçon critique apprise en playtest |
| **Viewport culling** | Performance | Overlays redessinés seulement quand la caméra bouge |
| **Procedural tileset** | Art | Pas d'assets externes. Perlin noise, mowing stripes, stipple, shimmer |

### Dépendances Entre Systèmes

```
Difficulty Calculator → Course Rating (Design + Condition)
Course Rating → Star Rating (5 weighted categories)
Star Rating → Spawn Rate (power curve: pow(rating/3.0, 2.0))
Reputation → Fair Price (×2.0) → Value Rating → Course Rating (feedback loop)
Weather + Season → Spawn Modifier + Maintenance Modifier + Fee Tolerance
ShotAI → Shot Accuracy → Ball Physics → Rollout → Score per hole
Score per hole → Pace Rating + Feedback Triggers → Satisfaction → Reputation
Golfer Needs ← Buildings (proximity-based) → Mood → Reputation
Tournament → Revenue + Flat Rep → Expansion capability
```

### Scene Tree (Godot)

```
Main (Node2D) ← main.gd
├── TerrainGrid (Node2D) ← terrain_grid.gd
│   └── TileMapLayer
├── Entities (Node2D)
│   ├── Golfers, Balls, Buildings (Node2D containers)
├── GolferManager, BallManager, HoleManager (Node)
├── Holes (Node2D)
├── IsometricCamera (Camera2D)
└── UI (CanvasLayer)
    └── HUD (Control) → TopBar, HoleInfoPanel, ToolPanel, BottomBar
```

---

## 3. Shot AI — Le Système le Plus Abouti

### Pipeline de Décision (12 étapes, stateless)

1. **Lie Assessment** — Qualité du sol (0.0–1.0). Si < 0.4 → mode recovery
2. **Multi-Shot Planning** — Planification à rebours du trou. Distance idéale pour approche ≈ 3.5 tiles (77 yards)
3. **Candidate Evaluation** — Scan en éventail (~15 angles × 7 distances × clubs). Score combinant : qualité terrain (+180 green, -1000 water), avancement vers trou, positionnement prochain coup
4. **Monte Carlo Risk Analysis** — 8 échantillons déterministes (-2σ à +2σ) pour estimer le risque
5. **Wind Compensation** — Facteur skill-dépendant (pro: 80%, débutant: 20%)
6. **Green Center Bias** — Moins bons viseurs visent plus le centre (pro: 95% pin, débutant: 58%)

### Dispersion Angulaire

```python
total_accuracy = base_accuracy × skill_accuracy × lie_modifier
max_spread_deg = (1.0 - total_accuracy) × 12.0  # 12° max débutant, ~0.6° pro
spread_std_dev = max_spread_deg / 2.5
base_angle = gaussian() × spread_std_dev
miss_angle = base_angle + miss_tendency × (1.0 - total_accuracy) × 6.0
# 95% des coups dans max_spread_deg
# Shank chance = (1.0 - accuracy) × 0.04 (rares: 0.2-2.8%)
```

### Clubs (5 types)

| Club | Usage |
|------|-------|
| DRIVER | Maximise distance, base_accuracy ∈ [0.65, 0.92] |
| FAIRWAY_WOOD | Long mais contrôle réduit |
| IRON | Milieu de gamme, meilleure précision |
| WEDGE | Approche, haute précision, backspin |
| PUTTER | Green uniquement, modèle probabiliste exponentiel |

### Putting

```python
make_rate = exp(-distance_feet × decay)
decay = 0.053 × (1.0 + (1.0 - putting_skill) × 2.5)
# Tap-in automatique si < 0.045 tiles (~3 pieds)
# Green reading: compensation = slope × distance × read_ability × 0.5, cap 30%
```

---

## 4. Course Rating (1–5★)

```python
overall = condition×0.25 + design×0.15 + value×0.30 + pace×0.20 + aesthetics×0.10

condition   = 1.0 + (premium_ratio / 0.15)      # 60%+ premium = 5★
design      = 1.5 + par_variety + hole_count_bonus  # 18 trous mixtes = 5★
value       = 5.0 - (price_ratio - 0.5) × 2.67   # 0.5x fair = 5★, 2.0x = 1★
pace        = 5.0 - (bogey_ratio × 6.0)          # floor à 2.0
aesthetics  = 1.0 + decoration_score × 2.0       # cap 4.0 pts/trou
```

### Slope Rating (55–155)

```python
slope = 113 + (avg_difficulty - 5.0) × 8.0
course_rating = total_par + (avg_difficulty - 5.0) × 0.15 × open_hole_count
```

### Difficulté des Trous (1–10)

```python
total = base_par + hazard_corridor + elevation + dogleg + green + landing_zone
base      = par - 2.0            # Par 3 = 1.0, Par 5 = 3.0
hazard    = water×0.30 + bunker×0.15 + OB×0.20 + trees×0.10  # corridor 10 tiles
elevation = clamp(total_elevation_change × 0.15, 0, 1.5)
dogleg    = 0.8 (si par 4+, distance > 8 tiles, fairway d'un seul côté)
green_size: < 2 tiles = +0.8, > 6 tiles = -0.2
```

---

## 5. Économie

### Boucle Principale

```
Green Fee Revenue → Daily Profit → Bankruptcy Check
                                        ↓
Tournament Revenue ←── Entry Cost
                                        ↓
Building Revenue ←─── Maintenance Costs + Staff + Upkeep
```

### Spawn Rate des Golfeurs

```python
base_modifier = pow(overall_rating / 3.0, 2.0)  # Power curve
# 1★=0.11x, 3★=1.0x, 5★=2.78x
modifier = base_mod × weather × marketing × seasonal × difficulty
cooldown = 15.0 / modifier  # secondes entre spawns
max_golfers = max(4, hole_count × 4)
```

### Tarification

```python
effective_max = max(10, min(holes × 10, 200))  # Fee cap = $10 × trous, max $200
fair_price = max(reputation × 2.0, 20.0) × (hole_count / 18.0, clamp 0.15-1.0)
```

### Golfer Tiers (4 niveaux)

| Tier | Skill | Fréquence |
|------|-------|:---------:|
| BEGINNER | 0.2–0.4 | Base |
| CASUAL | 0.4–0.6 | Modifiée par rating |
| SERIOUS | 0.6–0.8 | Modifiée par rating |
| PRO | 0.8–1.0 | Rare, seulement aux ratings élevés |

---

## 6. Système de Tournois

| Tier | Trous | Rating | Coût | Revenu | Réputation |
|------|:-----:|:------:|:----:|:------:|:----------:|
| Local | 4+ | 2★ | $500 | $1,300 | +15 |
| Regional | 9+ | 3★ | $2,000 | $7,000 | +40 |
| National | 18+ | 4★ | $10,000 | $35,000 | +100 |
| Championship | 18+ | 4.5★ | $50,000 | $140,000 | +300 |

Simulation simplifiée (non connectée à la physique réelle) :
```python
expected = par + (1 - skill) × 2.0 - 0.5 + difficulty × 0.1
strokes = round(gaussian(expected, (1-skill)×1.5))
```

---

## 7. Leçons Apprises (Critiques pour Notre Portage)

### ✅ Ce qui a Bien Marché

1. **Dispersion angulaire > dispersion circulaire** — Les misses s'amplifient naturellement avec la distance. Les golfeurs ont un hook/slice persistant qui crée des personnalités.
2. **Architecture événementielle** — ~60 signaux EventBus. Découplage quasi-total.
3. **Overlay pattern pour terrain** — Chaque effet visuel indépendant, facile d'activer/désactiver.
4. **Données pilotées par JSON** — Terrain types, buildings, golfer traits modifiables sans code.
5. **Procedural tileset** — Zéro asset externe requis. Perlin noise pour motifs naturels.

### ❌ Ce Qui a Mal Marché

1. **🔴 Coûts de maintenance linéaires** — Bug critique découvert en playtest : un parcours 9 trous coûtait $5,225/jour, rendant le jeu impossible. **Fix :** passage à `sqrt(raw_cost) × 20`. **Leçon :** toujours utiliser sub-linear scaling pour l'économie.
2. **Tournois factices** — Utilisent un RNG simple, pas la simulation de coups réelle. Scores impossibles.
3. **Économie sans pression** — Pas de compétiteurs. Les milestones cachent les pertes. Prêts 5%/7 jours → spirale d'endettement trop rapide.
4. **Audio : ZÉRO** — Aucun son de swing, d'impact, d'ambiance. Plus gros manque du jeu.
5. **Branches problématiques** — 3 branches suppriment 3500 lignes au lieu d'ajouter par-dessus.
6. **Pas de vue spectateur** — Impossible de suivre un golfeur AI spécifique.

### 💡 Recommandations pour SimGolf

1. **Commencer par le spec, pas par le prompt** — Kenny a perdu une semaine à coder par prompts conversationnels. Dès qu'il est passé aux specs markdown + milestones, tout s'est accéléré.
2. **Feature unique avant d'empiler** — Golfer AI et buildings se cassaient mutuellement. Faire un système à fond, le tester, le commiter, puis passer au suivant.
3. **Dossier de feedback markdown** — Au lieu de corriger un bug à la fois, batch de feedback dans des fichiers markdown.
4. **Compréhension de Git** — 5-6 PRs ouvertes, features perdues entre branches. CLAUDE.md avec instruction de vérifier rebase/merge.
5. **Tests unitaires Godot (GUT) incompatibles** — Les tests prenaient 5-10 min à Claude alors qu'ils sont instantanés manuellement. Solution : dire à Claude de skip les tests.
