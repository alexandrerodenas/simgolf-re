# SimGolf — Architecture Gameplay (Reverse Engineering)

> Analyse du `golf.exe` dépaqueté (DEViANCE, SafeDisc 2 retiré)
> Février 2026 — Hermes-RE

---

## 1. Structure Générale de golf.exe

```
Fichier : game_data/exe_unpacked/golf.exe
Taille   : 946 Ko (vs 1.9 Mo packé)
EP       : 0x004a682f → WinMain (CRT → 15 appels d'init)
Sections : .text (754 Ko), .rdata, .data, .rsrc
Imports  : KERNEL32(77), TERRAIN.DLL(26), USER32(24), WINMM(6), BINKW32(16)
```

**Architecture du jeu :**
- **Pas de boucle de message classique** : pas d'appel à `PeekMessage`. Le jeu utilise `SetTimer` / `KillTimer` pour l'animation (timer-driven, pas d'idle loop).
- **Rendu via Terrain.dll** : l'EXE appelle Terrain.dll pour tout le rendu, qui utilise JGL (Jackal Graphics Layer → GDI32 software renderer)
- **Bink Video** : cutscenes via Bink decoder
- **Son** : WINMM (waveOut/MIDI) via sound.dll
- **UI custom** : pas de Windows standard controls — tout est dessiné en PCX custom
- **JPEG intégré** : bibliothèque JPEG lib incluse dans l'EXE (pour screenshots/thumbnails ?)

---

## 2. Fonctions Clés Identifiées

### Hubs Principaux (détectés par nombre d'appels internes)

| Adresse | Appels | Rôle Présumé |
|---------|--------|-------------|
| `0x00476dd0` | 296 | **Parsing/string** (vérifie { } [ ] $ = ^) — petit helper, pas le game loop |
| `0x00494f00` | 285 | **CoursEngine/Simulation** — thiscall, accès vtable 0xCC/0xE4/0x1C/0x18 |
| `0x00485e80` | 218 | **TileGrid/Dispatching** — thiscall, gère grille et coordonnées |
| `0x004a682f` | 15 | **WinMain** — EP du programme |

⚠️ **Note** : la plupart des fonctions du jeu utilisent `__thiscall` (this dans ECX) avec prologue `push ecx; push ebx; push esi; mov esi, ecx; push edi`. Leur détection automatique dépasse les 45 fonctions standard identifiées.

### Fonctions Utilitaires les Plus Appelées

| Adresse | Appels | Rôle Présumé |
|---------|--------|-------------|
| `0x43d740` | 496 | Allocateur mémoire / `operator new` |
| `0x473bf0` | 266 | `operator new[]` |
| `0x475840` | 195 | Helper générique |
| `0x43d6f0` | 160 | `operator delete` |
| `0x45c1e0` | 130 | Méthode de string class |
| `0x4a5007` | 107 | Gestionnaire SEH (`__except_handler3`) |
| `0x4ad425` | 90 | Helper de fonction virtuelle |
| `0x4762d0` | 80 | Méthode de conteneur |

---

## 3. Systèmes de Jeu Identifiés (via chaînes)

### 3.1 Types de Trous (Hole Categories)

```
PRECISE   → récompense la précision (Accuracy)
FREEWAY   → récompense la longueur (Length)
CHALLENGE → précision + longueur
CREATIVE  → imagination (curved shots)
STRATEGIC → précision + imagination
HEROIC    → longueur + imagination
CLASSIC   → toutes les 3 compétences (Length + Accuracy + Imagination)
```

### 3.2 Compétences des Golfeurs (Skills)

| Skill | Effet |
|-------|-------|
| Length | Distance de frappe |
| Accuracy | Précision de la direction |
| Imagination | Capacité à courber/travailler la balle |
| Recovery Skills | Sortir des situations difficiles |
| High Backspin Shot | Faire reculer la balle sur le green |
| Accurate Putter | Précision au putting |
| Accurate Driver | Précision au drive |
| Long Driver | Distance au drive |

### 3.3 Scoring

```
Triple Eagle (-4) ← Double Eagle (-3) ← Eagle (-2) ← Birdie (-1) ← Par (0)
→ Bogey (+1) → Double Bogey (+2) → Triple Bogey (+3)
```

### 3.4 Économie du Club

- **Revenue** : greens fees, membreships, vacation homes, tournaments
- **Expenses** : employees (Groundskeeper, Ranger, Club Pro), maintenance, upgrades
- **Profit** : Revenue - Expenses
- **Cash Reserve** : fonds disponibles
- **Budget initial** : $10k-$50k selon scénario
- **Membreship levels** : Daily Fee → Country Club → Championship

### 3.5 Évaluation SGA (Sim Golf Association)

Criteria d'évaluation d'un parcours :
- Nombre de Holes
- Length of Course
- Time to Play
- Scenic Holes
- Holes with Variety
- Imagination Holes
- Accuracy Holes
- Length Holes
- Stroke average
- Average Putts
- Greens in Regulation
- Fairways hit
- Satisfied customers
- Players cheered / greeted / rushed

### 3.6 Types de Golfeurs (Celebrities/Pro)

```
Bruce Springstone  (parodie Bruce Springsteen)
Tree Levino        (parodie Lee Trevino)
Gary Golf          (parodie ???)
Abner
Jan
Sandy
Lefty
Beast
...
```

### 3.7 Bâtiments et Installations

| Bâtiment | Effet |
|----------|-------|
| Clubhouse | Base du club |
| Pro Shop | Améliore l'équipement / putting |
| Putting Green | Pratique du putting |
| Driving Range | Pratique du drive |
| Cart Garage | Voiturettes |
| Swim Club | Loisirs |
| Groundskeeper | Entretien (enlève mauvaises herbes) |
| Ranger/Marshall | Accélère le jeu |
| Ball Washer | Précision + humeur |
| Benches | Repos + énergie |
| Flower Bed | Humeur |
| Scenic Bridge | Esthétique |
| Water Tower | Utilité (?...) |

### 3.8 Événements et Aléas

```
- Super Bowl parties
- Valentine's Day
- shopping
- gardening (golfeur aime le jardinage)
- fast cars
- Rainy weather
- Wind
```

### 3.9 Accomplissements (Milestones)

```
1st Challenge hole
1st Heroic hole
1st Strategic hole
1st Classic hole
1st skill upgrade
1st Tournament
1st Top 100 hole
1st Top 18 hole
First 9+ hole course
First 18 hole course
First tournament victory (9+ holes)
First tournament victory (18 hole)
1st $500,000 Tournament
1st $1,000,000 Tournament
1st Grand Slam course (9+ holes)
1st Grand Slam course (18 hole)
Grand Slam Victory (Parkland/Desert/Tropical/Links)
```

### 3.10 Tournois

```
Jr. Tour Event
Jr. Tour Championship
SGA Amateur Championship
Senior SGA Tour Event
SGA Tour Event
Senior SGA Championship
SGA Players Championship
SGA Championship
Mini Slam Championship
Grand Slam Championship
```

### 3.11 Scénarios (Campagne)

Basé sur les chaînes de texte, le jeu a 5+ scénarios de campagne :
1. **Tutorial** — apprendre les bases
2. **Pine Valley Golf Club** — $10k, parcours en décomposition
3. **Carolina Golf Links** — $25k, parcours historique
4. **Paradise Tropical Resort** — $50k, destination touristique
5. **Desert Championship** — construction from scratch
6. Et potentiellement Ocean Grove, Windy Point, etc.

---

## 4. Pipeline d'Exécution (estimé)

```
WinMain (0x4a682f)
├── GetVersion()
├── InitGameSystems() (0x4a93ff)
│   ├── GetCommandLineA()
│   ├── ParseCommandLine()
│   └── InitTerrain()
├── GetStartupInfoA()
├── InitSound()
├── InitGameState()
├── ShowTitleScreen()
│   └── Load interface\\TitleBase.pcx
├── MainMenu()
│   ├── NewGame() → ScenarioSelect()
│   ├── ContinueGame() → LoadGame()
│   └── PlayChampionship()
│
├── GameLoop (timer-driven via SetTimer)
│   ├── ProcessInput()      ← GetKeyState, GetAsyncKeyState, MapVirtualKey
│   ├── UpdateSimulation()  ← IA golfeurs, économie, physique
│   ├── RenderFrame()       ← Terrain.dll (render, drawLine, etc.)
│   └── ProcessMessages()   ← DispatchMessageA, TranslateMessage
│
└── Shutdown()
    ├── KillTimer()
    ├── CloseSound()
    ├── CloseTerrain()
    └── ExitProcess()
```

---

## 5. Pistes pour l'Analyse Approfondie

### Fonctions Critiques à Analyser (prochaine étape)

1. **0x00494f00** — `CoursEngine::Update()` ? (285 appels internes)
   - Chercher des références aux chaînes trouvées dans cette zone
   - Regarder les appels aux fonctions économiques

2. **0x00485e80** — `TerrainGrid::Dispatch()` ? (218 appels)
   - Gestion des coordonnées tuiles
   - Mapping écran ↔ terrain

3. **Recherche des chaînes dans le code**
   - Les chaînes identifiées sont dans la section .data (offset 0xb97cf+)
   - Dans le désassemblage, chercher `push 0x4bxxxx` ou `push 0x4cxxxx`

4. **Fonctions de scoring et physique**
   - Chercher les constantes de par (3, 4, 5)
   - Chercher les formules de trajectoire

---

## 6. Fichiers Data Référencés

### Formats Graphiques
- **.pcx** : Textures, sprites, UI (PCX = format standard, facile à lire)
- **.jpg** : Photos/cutscenes (JPEG library intégrée dans l'EXE)

### Fichiers d'Interface
```
interface\\TitleBase.pcx
interface\\WorldBase.pcx
interface\\WorldButton.pcx
interface\\Loading_Screens\\LoadingScreen01-12.pcx
interface\\infoscreens\\hire.pcx
interface\\infoscreens\\FINANCEreport.pcx
interface\\infoscreens\\coursereport.pcx
interface\\infoscreens\\SGAreport.pcx
interface\\infoscreens\\memberRoster.pcx
interface\\infoscreens\\tournament result.pcx
interface\\infoscreens\\endoyear.pcx
interface\\infoscreens\\shortcuts.pcx
interface\\PairBase.pcx, PairButtons.pcx
interface\\Pictbckgrnd1.pcx
bink64.pcx (logo Bink)
logo.pcx (logo Firaxis)
creditsbckgrd.pcx
```

### Fichiers de Profils
```
.pro : Profils de golfeur
.dta : Données de golfeurs pro (Themes\\Standard\\progolfers.dta)
.sve : Sauvegardes (saved games\\)
.chr, .glf : Personnages
.fot : Polices bitmap
```

### Sons
```
sounds\\Golf sfx\\*.wav      (swing, putt, balle, etc.)
sounds\\effects\\*.wav       (ambiance : vent, eau, oiseaux, etc.)
sounds\\interface\\*.wav     (UI : clics, beeps)
sounds\\Celebs\\*.wav        (célébrités Sim-ish)
simsfx\\Male\\*.wav          (voix masculine Sims)
simsfx\\Female\\*.wav        (voix féminine Sims)
```

---

## Annexe : Correspondance Adresses Chaînes

Les chaînes de jeu sont dans la section .data (RVA ~0xBA000+). Pour retrouver
qui les utilise dans le désassemblage, chercher `push 0x4XXXXX` où l'adresse
correspond au string offset dans le fichier EXE (base 0x400000).

Exemple : chaîne "Profit: " à 0x4c3f5c
→ Chercher `push 0x4c3f5c` dans golf_unpacked_disasm.txt
