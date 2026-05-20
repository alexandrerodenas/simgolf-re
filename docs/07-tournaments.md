# Système de Tournois

> **Confiance :** ✅ Élevée — décompilé depuis l'ASM, structures validées par le binaire

---

## 1. Vue d'Ensemble

Le **SGA** (Sim Golf Association) organise des tournois périodiquement. Le joueur reçoit des offres et peut y participer pour gagner argent et prestige.

**Workflow :**
```
[Weekly] → CheckAvailability → ScheduleNextOffer
                                   ↓
[Offer] → "The SGA would like to hold..."
                                   ↓
[Accept] → Tournament_Begin (panier UI de sélection)
                                   ↓
[Play] → SimulateRound × N (N = 2 ou 4 rounds)
                                   ↓
[Finish] → CalculateLeaderboard → DistributePrizes → SaveResult
                                   ↓
[Post] → CheckAchievements → WorldRanking
```

---

## 2. Types de Tournois (14 types)

| # | Nom | Tier | Prize Pool | Entry Fee | Min Holes |
|:-:|-----|:---:|:----------:|:---------:|:---------:|
| 0 | SGA Qualifying School | 1 | $5,000 | $50 | 3 |
| 1 | Jr. Tour Event | 2 | $10,000 | $100 | 3 |
| 2 | Jr. Tour Championship! | 3 | $25,000 | $250 | 6 |
| 3 | SGA Amateur Championship | 4 | $50,000 | $500 | 9 |
| 4 | Senior SGA Tour Event | 5 | $75,000 | $750 | 9 |
| 5 | Senior SGA Championship | 6 | $150,000 | $1,500 | 12 |
| 6 | SGA Tour Event | 5 | $100,000 | $1,000 | 9 |
| 7 | SGA Players Championship | 7 | $200,000 | $2,000 | 12 |
| 8 | SGA Championship! | 8 | $350,000 | $3,000 | 18 |
| 9 | Mini Slam Championship! | 9 | $500,000 | $5,000 | 18 |
| 10 | Grand Slam Championship! | 10 | $1,000,000 | $10,000 | 18 |
| 11 | SGA Open Championship | 7 | $250,000 | $2,500 | 12 |
| 12 | SGA Tour Championship | 9 | $400,000 | $4,000 | 18 |
| 13 | SGA Jr. Championship | 2 | $15,000 | $150 | 6 |

### Conditions d'Éligibilité

| Condition | Appliqué à |
|-----------|------------|
| `holesBuilt >= minHoles` | Tous |
| `prestige >= prestigeReq` | Tournois avancés |
| `sgaRating >= sgaRequired` | Grand Slam (85+) |
| `courseTheme match` | Si spécifié |

### Prestige Requis

| Niveau | Seuil |
|--------|:-----:|
| Débutant | 0 |
| Amateur | 5 |
| Semi-Pro | 15 |
| Pro | 25 |
| Star | 50 |
| Légende | 100 |

---

## 3. Structures de Données

### TournamentObj (0x6c = 108 bytes)

Tableau à l'adresse `0x80d840`, stride 0x6c.

```c
typedef struct {
    char* name;          // +0x00: nom (pointeur .rdata)
    int   prizePool;     // +0x04: cagnotte ($)
    int   entryFee;      // +0x08: frais d'inscription
    int   minHoles;      // +0x0c: trous minimum
    int   prestigeReq;   // +0x10: prestige requis
    int   prestigeGain;  // +0x14: prestige gagné
    int   fieldSize;     // +0x18: participants max
    int   courseTheme;   // +0x1c: thème requis (-1=tous)
    int   sgaRequired;   // +0x20: score SGA min (0-100)
    int   tier;          // +0x24: niveau (1-10)
    // +0x28-0x6b: résultat / état
} TournamentObj;
```

### TournamentSession (état d'un tournoi en cours)

```c
typedef struct {
    int tournamentId;             // Type
    int numRounds;                // 2 ou 4 rounds
    int currentRound;             // Round actuel
    int playerId;                 // ID joueur
    int numParticipants;          // Nb participants
    LeaderboardEntry entries[32]; // Participants
    int prizePool;                // Cagnotte
    int entryFee;                 // Frais
    int courseRating;             // Score SGA parcours
    int courseTheme;              // Thème
    int holesPlayed;              // Trous joués
    bool roundInProgress;
    bool roundCompleted;
    bool tournamentCompleted;
    bool cancelled;
} TournamentSession;
```

---

## 4. Scheduling et Offres

Les offres de tournoi arrivent périodiquement. Le mécanisme est basé sur les chaînes :
- "The SGA is interested in holding a tournament at your course..."
- "We'd like to schedule the [tournament] here as soon as possible."
- "The SGA offers to hold the [tournament]..."

### Algorithme (déduit)

```
Tournaments_ScheduleNext:
  delay = 8 - (prestige / 20)  // 2-8 semaines
  if weeksUntilNextOffer <= 0:
    weeksUntilNextOffer = delay

Tournaments_GenerateOffer:
  if weeksUntilNextOffer > 0:
    weeksUntilNextOffer--
    return -1  // pas d'offre cette semaine
  else:
    // Propose le plus haut tournoi disponible
    reset weeksUntilNextOffer = 6
    return bestAvailableTourney
```

---

## 5. Scoring et Classement

### Score par Round

Le score est calculé pour chaque participant à chaque round :

```c
int CalculateRoundScore(int skill, int courseRating, int weather, int holes)
{
    int par = (holes == 18) ? 72 : 36;
    
    int skillAdj = (skill - 50) / 10;          // -5 à +5
    int diffAdj = (courseRating - 50) / 20;     // -2 à +2
    int weatherAdj = (weather < 0) ? 3 : (weather == 0) ? 1 : 0;
    int luck = rand() % 7 - 3;                  // -3 à +3
    
    return par + skillAdj + diffAdj + weatherAdj + luck;
}
```

### Nombre de Rounds

| Tier | Rounds |
|:----:|:------:|
| 1-3 | 2 rounds |
| 4-6 | 2 rounds |
| 7-9 | 4 rounds |
| 10 | 4 rounds |

### Classement

Le leaderboard trie les participants par score croissant (meilleur score = position 1). En cas d'égalité, le skill le plus élevé départage.

```c
void CalculateLeaderboard(LeaderboardEntry* entries, int count, int* skillMap)
{
    // Tri bulles (comme dans l'original MSVC)
    for (int i = 0; i < count - 1; i++)
        for (int j = i + 1; j < count; j++)
            if (entries[j].totalScore < entries[i].totalScore
                || (entries[j].totalScore == entries[i].totalScore
                    && skillMap[entries[j].golferId] > skillMap[entries[i].golferId]))
                swap(entries[i], entries[j]);
    
    // Positions (gère les égalités)
    for (int i = 0; i < count; i++)
        entries[i].position = (i > 0 && entries[i].totalScore == entries[i-1].totalScore)
            ? entries[i-1].position : i + 1;
}
```

---

## 6. Distribution des Prix

| Position | Part du prize pool |
|:--------:|:------------------:|
| 1er | 25% |
| 2e | 15% |
| 3e | 10% |
| 4e | 7.5% |
| 5e | 5% |
| 6-10 | 3% chacun |
| 11+ | 1% chacun |

Le prestige est calculé par : `tier × 10 × (participants - position + 1) / participants`

---

## 7. Accomplissements (14)

| # | Nom | Déclencheur |
|:-:|-----|-------------|
| 0 | 1st Challenge hole | Construire un trou |
| 1 | 1st Tournament | Participer à un tournoi |
| 2 | First 9+ hole course | Construire 9 trous |
| 3 | 1st Top 100 hole | Avoir un trou Top 100 |
| 4 | First tournament victory (9+) | Gagner sur 9 trous |
| 5 | First 18 hole course | Construire 18 trous |
| 6 | 1st $500,000 Tournament | Gagner un tournoi à $500k |
| 7 | 1st $1,000,000 Tournament | Gagner un tournoi à $1M |
| 8 | Grand Slam course (9+ holes) | Parcours GS 9 trous |
| 9 | Grand Slam course (18 hole) | Parcours GS 18 trous |
| 10 | Grand Slam Victory (Parkland) | Victoire GS (Parkland) |
| 11 | Grand Slam Victory (Desert) | Victoire GS (Desert) |
| 12 | Grand Slam Victory (Tropical) | Victoire GS (Tropical) |
| 13 | Grand Slam Victory (Links) | Victoire GS (Links) |

---

## 8. Chaînes et Adresses (Binaire)

```
Noms tournois   @ 0x4d0c88-0x4d0d80
                 0x4d15d8-0x4d1618
UI Boutons      @ 0x4c6144 "Begin Tournament"
                 0x4c616c "Practice Round"
                 0x4c5b00 "SGA Evaluation"
Résultats       @ 0x4d1584 "TOURNAMENT RESULTS"
                 0x4d1598 "TOURNAMENT SCORES"
                 0x4d1570 "Prize"
                 0x4d157c "Ranking"
                 0x4d15c4 "LEADER BOARD of"
Accomplissements @ 0x4d0aac "Professional Accomplishments"
                 0x4bf378 "1st Challenge hole"
                 0x4bf408 "1st Tournament"
                 0x4bf5bc "Grand Slam course (9+ holes)"
                 0x4bf67c "Grand Slam course (18 hole)"
                 0x4bf6a8 "Grand Slam Victory (Parkland)"
                 0x4bf6d8 "Grand Slam Victory (Desert)"
                 0x4bf708 "Grand Slam Victory (Tropical)"
                 0x4bf738 "Grand Slam Victory (Links)"
```

### Adresses ASM

| Fonction | Adresse | Rôle |
|----------|:-------:|------|
| TournamentObj array | `0x80d840` | Tableau stride 0x6c |
| InitTourneyObj | `0x484e30` | Charge configs |
| Tourney_Setup | `0x4481b0` | Configure avant tournoi |
| Tourney_UICreate | `0x447000-0x4480f7` | Panel UI (4300 insn) |
| Tourney_ResultCalc | `~0x4650ee` | Calcul scores |
| Tourney_Leaderboard | `~0x471b72` | Classement |
| Tourney_InitAll | `0x448220` | Initialise tous les objets |
