# ANALYSE PASSE 1 — Format .cse (Scénarios SimGolf)

> Date : 2026-05-21
> Status : Terminée
> Confiance : ⚠️ Partielle — pas de fichiers .cse réels trouvés (section .data compressée)

---

## 1. Résumé

Les fichiers `.cse` (Course Scenario Extension) sont les fichiers de définition des scénarios/campagnes. Stockés dans `Themes\Championship\*.cse`. Le binaire golf.exe a sa section `.data` compressée (VirtualSize 0x37f834 ≈ 3.6 Mo, RawSize 0x26000 ≈ 152 Ko, ratio 24:1) — les données sont décompressées en mémoire au lancement.

---

## 2. Chaînes Identifiées

| Adresse | Chaîne | Contexte |
|:-------:|--------|----------|
| `0x004c5328` | `Themes\\Championship\\` | Construction chemin |
| `0x004c8944` | `Themes\\Championship\\*.cse` | Filtre FindFirstFile |
| `0x004e4141` | `*.cse` | Extension seule |
| `0x004c6c54` | `Sandbox Mode` | Mode libre |
| `0x004c6c64` | `Play a Championship` | Menu |

---

## 3. Adresse de parsing

La fonction à **`0x0043b997`** construit le chemin `Themes\\Championship\\*.cse` et appelle `FindFirstFileA`/`FindNextFileA`. Ceci est intégré dans InitGameState (0x4a50db).

---

## 4. Structure du format .cse (336 bytes)

```typescript
interface Scenario {
    name:        string        // +0x00: Nom (64 chars, null-terminé)
    budget:      number        // +0x40: Budget initial ($)
    targetSGA:   number        // +0x44: Objectif SGA (0-100)
    difficulty:  number        // +0x48: Difficulté (1-5)
    theme:       CourseTheme   // +0x4C: Thème (0=Parkland, 1=Links, 2=Desert, 3=Tropical)
    description: string        // +0x50: Texte description (256 chars)
}  // Taille totale: 0x150 = 336 bytes
```

### Structure enrichie (game_scenarios.c)

```typescript
interface ScenarioDef {
    id:             number      // 0-5
    name:           string      // Nom du scénario
    description:    string      // Description narrative
    budget:         number      // Budget de départ
    targetHoles:    number      // Trous à construire
    targetSGA:      number      // Note SGA cible
    targetPrestige: number      // Prestige cible
    timeLimit:      number      // Semaines (0 = illimité)
    courseType:     CourseTheme // Thème imposé
    sandbox:        boolean     // Mode libre
}
```

### Tableau des 6 scénarios embarqués (depuis game_scenarios.c)

| ID | Nom | Budget | Trous | SGA | Prestige | Semaines | Thème |
|:--:|-----|:------:|:-----:|:---:|:--------:|:--------:|-------|
| 0 | Tutorial | 10 000 $ | 3 | 0 | 0 | ∞ | Parkland |
| 1 | Pine Valley GC | 10 000 $ | 9 | 50 | 25 | 52 | Parkland |
| 2 | Carolina Links | 25 000 $ | 9 | 60 | 40 | 40 | Links |
| 3 | Paradise Tropical | 50 000 $ | 18 | 70 | 60 | 60 | Tropical |
| 4 | Desert Championship | 10 000 $ | 18 | 85 | 80 | 80 | Desert |
| 5 | Sandbox Mode | 100 000 $ | 0 | 0 | 0 | ∞ | Parkland |

### État de campagne

```typescript
interface CampaignState {
    currentScenario:    number  // Scénario actif (-1 = aucun)
    week:               number  // Semaine courante
    cash:               number  // Trésorerie
    holesBuilt:         number  // Trous construits
    sgaRating:          number  // Note SGA
    prestige:           number  // Prestige
    totalEarnings:      number  // Gains cumulés
    tournamentsWon:     number  // Tournois gagnés
    completedScenarios: number  // Scénarios finis
    bestScore:          number  // Meilleur score
}
```

---

## 5. Pipeline de chargement

```
InitGameState (0x4a50db)
  ├── FindFirstFileA("Themes\\Championship\\*.cse")  @ 0x43b997
  ├── Pour chaque .cse trouvé :
  │     CreateFileA → ReadFile → Parse 336 bytes
  └── Si aucun .cse : utilise scénarios embarqués (.data)
```

---

## 6. Section .data compressée

Découverte critique : le binaire packe sa section `.data` (VirtualSize 0x37f834, RawSize 0x26000). Toutes les chaînes des scénarios sont dans cette section. Ghidra les voit car il analyse la mémoire décompressée.

**Fichiers de référence :** `ref/decompiled/game_scenarios.c`, `ref/decompiled/game_data_types.h`, `docs/14-scenarios.md`, `ref/types/game_data_types.ts`
