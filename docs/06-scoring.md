# Scoring et Évaluation SGA

> **Confiance :** ✅ Élevée — décompilé depuis `game_scoring_sga.c` et les chaînes extraites

---

## 1. Système de Score SGA

Le **SGA** (Sim Golf Association) évalue les parcours de golf sur plusieurs critères. Chaque trou reçoit une note, et le parcours total est calculé.

### Critères d'Évaluation

```
"Basic criteria: Safety, Shot value, Fairness, Flow, Aesthetics, Tournament qualities."
```

| Critère | Description |
|---------|-------------|
| **Safety** (Sécurité) | Absence de danger injuste, dégagements |
| **Shot Value** (Valeur de tir) | Variété et intérêt des coups |
| **Fairness** (Équité) | Difficulté équilibrée |
| **Flow** (Rythme) | Enchaînement naturel des trous |
| **Aesthetics** (Esthétique) | Beauté du parcours |
| **Tournament Qualities** (Qualités tournoi) | Adapté aux compétitions |

### Affichage SGA

```
"LEADER BOARD of the [Tournament]"
"TOURNAMENT RESULTS"
"TOURNAMENT SCORES"
"Prize"
"Ranking"
"Professional Accomplishments"
```

---

## 2. Notation d'un Trou

Chaque trou peut être noté individuellement (HoleSTAT). Les critères incluent :

- **Par** (3/4/5)
- **Distance**
- **Largeur du fairway**
- **Nombre et position des bunkers**
- **Présence d'eau**
- **Forme du green**
- **Décorations** (arbres, fleurs, bancs)

---

## 3. Évaluation du Parcours

Le score SGA total est une moyenne pondérée des notes de chaque trou. Le score influence :
- Le green fee (plus d'étoiles = tarif plus élevé)
- Les tournois disponibles (Grand Slam nécessite 85+)
- Le classement mondial
- Les accomplissements

---

## 4. Classement Mondial

Calculé à partir de :
- Prestige total
- Tournois gagnés
- Gains cumulés

```c
int CalculateWorldRanking(int prestige, int wins, int totalPrize)
{
    int score = prestige * 10 + wins * 50 + totalPrize / 10000;
    int rank = 101 - (score / 100);
    if (rank < 1) rank = 1;
    if (rank > 100) rank = 100;
    return rank;
}
```

---

## 5. Historique et Statistiques

Le jeu garde l'historique des scores et parties :
- `histograph.pcx` — Graphique des performances historiques
- `lowscore.pcx` — Meilleurs scores
- `lowscore_alpha.pcx` — Masque alpha
- `top10.sve` — Top 10 des scores sauvegardés

### Score d'un Round

```
Score = Par + AjustementSkill + AjustementDifficulté + Météo + Chance
Par = 72 (18 trous) ou 36 (9 trous)
```

| Facteur | Impact |
|---------|:------:|
| Skill ±50 | ±5 coups |
| Difficulté ±50 | ±2 coups |
| Pluie | +3 coups |
| Nuageux | +1 coup |
| Chance | -3 à +3 coups |
