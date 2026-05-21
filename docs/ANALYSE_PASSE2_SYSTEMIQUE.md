# Analyse PASSE 2 — Couche Systémique & IA de SimGolf

> Généré le 2026-05-21 depuis les fichiers C décompilés, docs et ASM
> Sources : `ref/decompiled/` + `docs/05-physics.md` + `docs/08-economy.md`

---

## 1. TABLEAU des fonctions clés

| Adresse | Nom | Taille | Rôle |
|---------|-----|:------:|------|
| `0x004a5108` | `GameLoopCallback` | 1 876 insn | Callback timer Windows (WM_TIMER). Pipeline : Input → Simulation → Rendu. ~33ms (30 FPS). |
| `0x0049846c` | `GameTickFunction` | 0xAD4 (2 772) bytes | Boucle simulation principale. 16 slots × 0x58 bytes. Dispatch via vtable[0x68]. Timeout 20s. |
| `0x00498632+` | `vtable[0x68]` → `Golfer_ProcessTick` | — | Dispatch dynamique. Traite 1 golfeur : sélection club → calcul distance → déviation → score → commentaire. |
| `0x0049d820` | `Economy_calculateDefaultProfit` | ~100 insn | Calcul profit ASM : `field_5c = min(d0, 54) ; profit = min(30, d0/50) - 44×2 - 38`. |
| `0x0049d884` | `Economy_updateCashFlow` | — | Mise à jour flux trésorerie après chaque tick quotidien. |
| `0x00464EE0` | `CalcDistance_FPU` | 3 insn FPU | `distance = property_byte × 0.05` via `fmul [0x4ba818]`. |
| `0x00464FF0` | `CalcDistance_Alt` | — | Variante avec null-check sur ecx avant FPU. |
| `0x00465170` | `UI_ClubSelection` | — | Switch 5 branches via table `0x46554c`. UI sélection club. Pas de FPU. |
| `0x00474440` | `sub_474440` (BallInit) | — | Initialise structure balle (88 bytes) avec distance calculée. |
| `0x00460CF0` | `Ball_MainFunction` | 40+ refs à `0x81ca10` | Fonction principale de la balle. Trajectoire, collisions, mise à jour position. |
| `0x00494cb0` | `UI_UpdateStatus` | — | Met à jour l'affichage texte (SetWindowText). Messages "Playing...", "Par:...". |
| `0x0048e900` | `ProcessMessageLoop` | — | Boucle messages Windows. Retour : 0=continue, 1=transition, 2=fermeture. |
| `0x00497d10` | `State_Transition` | — | Transition d'état (tournoi terminé, nouveau trou, etc.). |
| `0x0049b7b0` | `ProcessEvent` | — | Traite un événement de simulation (fin de slot, coup joué). |
| `0x0049aa30` | `GetGolferName` | — | Récupère le nom du golfeur par ID. |

### Structures globales

| Adresse | Nom | Taille | Contenu |
|---------|-----|:------:|---------|
| `0x8400b0` | `GameState*` | 4 ptr | Singleton du jeu. Contient tous les sous-systèmes. |
| `0x81ca10` | `BallData[]` | 88×N bytes | Tableau de structures balle. Position X/Y/Z, vélocité X/Y/Z, spin X/Y/Z, clubId, lieType, flags. |
| `0x83c340` | `StatusBuffer` | 256+ chars | Buffer message statut (affiché dans UI). |
| `0x83afcc` | `CloseFlag` | 1 byte | Flag de fermeture du jeu. |
| `0x83ff6c` | `SlotPointer` | 4 ptr | Pointeur vers le tableau des 16 slots de simulation. |
| `0x4ba21c` | `IAT_timeGetTime` | 4 ptr | Import winmm.dll → `timeGetTime()` pour timings haute résolution. |
| `0x4ba818` | `CONST_0.05` | 8 double | Facteur d'échelle distance club : `distance = property_byte × 0.05`. |
| `0x4ba478` | `CONST_0.2` | 8 double | Facteur secondaire (usage exact inconnu). |
| `0x4ba480` | `CONST_0.04` | 8 double | Facteur secondaire. |
| `0x4ba488` | `CONST_0.01` | 8 double | Facteur secondaire. |

---

## 2. INTERFACES TypeScript

```typescript
// ==============================================================
// BallState — État de la balle (@ 0x81ca10, 88 bytes/entrée)
// ==============================================================
interface BallState {
  positionX: number;       // +0x00: Position X terrain
  positionY: number;       // +0x04: Position Y terrain
  positionZ: number;       // +0x08: Hauteur Z
  velocityX: number;       // +0x0c: Vélocité X
  velocityY: number;       // +0x10: Vélocité Y
  velocityZ: number;       // +0x14: Vélocité Z
  spinX: number;           // +0x18: Effet Magnus X
  spinY: number;           // +0x1c: Effet Magnus Y
  spinZ: number;           // +0x20: Effet Magnus Z
  clubId: number;          // +0x24: ID du club utilisé (0-13)
  lieType: LieType;        // +0x28: Type de sol
  // +0x2c-0x57: flags, timer, padding
  state: BallStateFlag;    // flight / run / roll / rest
}

type LieType = 0  // Tee
            | 1  // Fairway
            | 2  // Rough
            | 3  // Sand
            | 4  // Green
            | 5  // Water

type BallStateFlag = 'flight' | 'run' | 'roll' | 'rest'

// ==============================================================
// GolferAI — IA d'un golfeur (8 skills, 1-15)
// ==============================================================
interface GolferSkills {
  length: number;          // 1-15: Distance frappe
  accuracy: number;        // 1-15: Précision direction
  imagination: number;     // 1-15: Courbe/effet (draw/fade)
  recovery: number;        // 1-15: Sortie situations difficiles
  backspin: number;        // 1-15: Backspin shot
  putter: number;          // 1-15: Précision putting
  driver: number;          // 1-15: Précision driver
  longDriver: number;      // 1-15: Distance driver
}

type Personality = 'aggressive' | 'conservative' | 'balanced'
type Mood = number  // 0-100

interface GolferAI {
  // Identité
  id: number;
  name: string;
  skills: GolferSkills;
  personality: Personality;
  mood: Mood;

  // Décisions
  selectClub(params: ShotContext): ClubType;
  selectTarget(params: ShotContext): TargetType;
  selectShotType(params: ShotContext): ShotStyle;

  // Simulation
  simulateShot(params: ShotParams): ShotResult;

  // Émotions
  generateComment(result: ShotResult): string;
  updateMood(result: ShotResult): void;
}

type ClubType = 'driver' | 'wood' | 'long_iron' | 'medium_iron'
             | 'short_iron' | 'wedge' | 'sand_wedge' | 'lob_wedge'
             | 'putter' | 'chip'

type ShotStyle = 'normal' | 'draw' | 'fade' | 'high' | 'low' | 'punch'

type TargetType = 'pin' | 'center_green' | 'layup' | 'safe'

interface ShotContext {
  distanceToHole: number;  // yards
  lie: LieType;
  wind: WindState;
  holePar: number;         // 3, 4, ou 5
  strokes: number;
  holeType: HoleType;
  roundScore: number;      // score cumulé relatif au par
  tournamentPressure: number; // 0-100
}

type HoleType = 'PRECISE' | 'FREEWAY' | 'CHALLENGE' | 'CREATIVE'
              | 'STRATEGIC' | 'HEROIC' | 'CLASSIC'

interface WindState {
  direction: 0  // none
            | 1 // head
            | 2 // tail
            | 3 // cross_left
            | 4 // cross_right
  speed: number;     // 0-30 mph
  gusting: boolean;  // rafales ?
}

interface ShotParams {
  club: number;          // 0-13 (index club)
  shotType: ShotStyle;
  power: number;         // 0-100%
  aim: number;           // degrés (-45 à +45)
  spin: number;          // 0=none, 1=draw, 2=fade, 3=backspin
  lie: LieType;
  distanceToHole: number;
  skills: GolferSkills;
}

interface ShotResult {
  distance: number;      // yards parcourus
  offline: number;       // déviation latérale (yards, 0=parfait)
  fairwayHit: boolean;
  success: boolean;
  resultQuality: 0 | 1 | 2;  // 0=miss, 1=good, 2=perfect
  description: string;
}

// ==============================================================
// EconomyState — État financier du parcours
// ==============================================================
interface EconomyState {
  cash: number;              // Trésorerie ($)
  dailyRevenue: number;      // Revenu journalier ($)
  dailyCost: number;         // Coût journalier ($)
  dailyProfit: number;       // Profit journalier ($)
  greensFee: number;         // Tarif green fee ($/trou)
  courseValue: number;       // Valeur estimée parcours ($)
  maintenanceCost: number;   // Coût entretien ($/jour)
  visitorsToday: number;     // Nb golfeurs aujourd'hui
  totalRevenue: number;      // Revenu cumulé
  totalProfit: number;       // Profit cumulé
  totalRounds: number;       // Parties jouées cumulé
  loanInterest: number;      // Intérêts d'emprunt/jour
  difficulty: 0|1|2|3;       // 0=easy, 1=normal, 2=hard, 3=expert
  stars: number;             // Évaluation SGA (0-100)
  isWeekend: boolean;
  isRaining: boolean;
  nbHoles: number;           // 9 ou 18
  staffLevel: number;        // 0-5
  investments: number;       // Investissements cumulés ($)
}

// ==============================================================
// TickSlot — Slot de simulation (0x58 bytes, ×16)
// ==============================================================
interface TickSlot {
  active: boolean;         // +0x00: Flag actif
  golferId: number;        // +0x04: ID du golfeur
  holeIndex: number;       // +0x08: Index du trou joué
  strokes: number;         // +0x0c: Nombre de coups
  state: number;           // +0x10: 0=playing, 1=waiting, 2=done
  timerNext: number;       // +0x14: Prochain tick (ms)
  posX: number;            // +0x18: Position X
  posY: number;            // +0x1c: Position Y
  distanceToPin: number;   // +0x20: Distance restante (yards)
  lieType: LieType;        // +0x24: Type de sol
  clubUsed: number;        // +0x28: Club utilisé (0-13)
  shotType: number;        // +0x2c: Type de coup
  shotResult: number;      // +0x30: 0=miss, 1=hit, 2=perfect
  // ... padding jusqu'à 0x58
  startTime: number;       // offset: Timestamp début
  timeoutMs: number;       // offset: Timeout assigné
}

// ==============================================================
// PhysicsConfig — Configuration physique (constantes FPU)
// ==============================================================
interface PhysicsConfig {
  scaleClubDistance: number;  // 0.05 (const @ 0x4ba818)
  factorSecondary1: number;   // 0.2  (const @ 0x4ba478)
  factorSecondary2: number;   // 0.04 (const @ 0x4ba480)
  factorSecondary3: number;   // 0.01 (const @ 0x4ba488)

  // Lie multipliers
  lieMultiplier: Record<LieType, number>;
  // { tee: 1.10, fairway: 1.00, rough: 0.80, sand: 0.60, green: 1.00 }

  // Club base distances (yards)
  clubBaseDistances: Record<number, { min: number, max: number, label: string }>;
  // 0: {min:200, max:320, label:'Driver'}
  // 1: {min:180, max:250, label:'Wood'}
  // ...etc

  // Wind effects
  headwindPenalty: number;    // -2 yards/mph
  tailwindBonus: number;      // +1 yard/mph
  crosswindFactor: number;    // ±0.5 yards/mph

  // Accuracy spread
  accuracyBaseSpread: number; // 30 yards max
  puttDifficultyScale: number; // 0.5 / 30 yards
  slopeDifficultyFactor: number; // 0.05 per deg
}

// ==============================================================
// ClubSelection — Résultat sélection club
// ==============================================================
interface ClubSelection {
  club: ClubType;
  clubIndex: number;       // 0-13
  power: number;           // 0-100%
  adjustedDistance: number; // distance attendue après skills + lie + vent
  displayName: string;     // ex: "Driver", "PW", "Putter"
  canReachPin: boolean;
  riskLevel: 'low' | 'medium' | 'high';
}
```

---

## 3. PSEUDO-CODES

### 3.1 Boucle de tick `GameTickFunction()` @ `0x49846c`

```
GameTickFunction(gameState, gameMode, tickDelta):
    // Stack frame 0x2208 bytes avec destructeurs taggés

    IF gameMode != 0:
        GOTO inactive_branch    // mode menu/pause

    // --- Boucle principale ---
    LOOP:
        currentTime = timeGetTime()
        ENREGISTRER timestamp dans 16 slots

        // Appel simulation globale via vtable[0x68]
        result = gameState.vtable[0x68](
            this=gameState,
            activeGolferId=gameState.activeGolfer,
            tickDelta,
            unk=0,
            mode
        )

        IF result == 0:    // Tous slots inactifs
            tickStart = timeGetTime()
            IF timeGetTime() - tickStart > 20000:
                // Timeout global
                statusBuffer = "Playing..."
                AFFICHER status + score
                CALL UI_UpdateStatus()
                CALL ProcessMessageLoop()
                IF message == 0: CONTINUE  // jeu en cours
                IF message == 1: GOTO state_transition
                IF message == 2: GOTO close
            ELSE:
                // Attente active : WaitForMultipleObjects
                WAIT sur handles événements (timeout configurable)
                SI signal reçu: CALL ProcessEvent()

        // --- Boucle sur 16 slots ---
        FOR i = 0 TO 15:
            slot = &gameState.slots[i]
            IF NOT slot.active: CONTINUE

            IF slot.timeoutMs == 0:   // Nouveau slot
                newTimeout = (timeGetTime() + (slot.startTime - slot.startTime)) / 2
                slot.startTime = newTimeout
                slot.active = FALSE
                CONTINUE

            elapsed = currentTime - slot.startTime
            IF elapsed > slot.timeoutMs:   // Timeout dépassé
                slot.timeoutMs = slot.timeoutMs * 3 / 2    // ×150%
                slot.startTime = timeGetTime()
                // Relance simulation pour ce slot
                CALL gameState.vtable[0x68](gameState, activeGolfer, slot.param1, 0, tickDelta)
                IF result != 0: GOTO error

        IF anyActive:
            IF timeGetTime() - loopStart > 20000:
                AFFICHER status + timeout
            ELSE:
                GOTO wait_loop
        ELSE:
            GOTO LOOP

    // --- Branche inactive ---
    inactive_branch:
        Construit objets légers
        Attend messages utilisateur
        Boucle avec moins de surcharge

    // --- Cleanup ---
    error:
        ShowErrorMessage()
    cleanup:
        DestroyLocalObjects()  // destructeurs taggés en ordre inverse
    return
```

### 3.2 Formule de distance de balle (décompilée ASM)

```
// Fonction @ 0x464EE0 — distance club
CalcDistance_FPU(propertyByte):
    eax = propertyByte                 // propriété du club (0-255)
    fild [esp+0x60]                     // charge en entier → ST(0)
    fmul [0x4ba818]                     // × 0.05 (constante double)
    fstp [esp]                          // stocke comme float sur stack
    CALL sub_474440(ecx, edx, distFloat)

// Formule ASM vérifiée :
//   distanceFloat = propertyByte × 0.05

// Fonction complète (déduite des skills + lie + wind) :
CalcShotDistance(club, power, skills, lie, windDir, windSpd):
    // 1. Distance de base par club
    SWITCH club:
        CASE Driver:    baseDist = 200 + skills.length × 0.5 + skills.longDriver × 0.5
        CASE Wood:      baseDist = 180 + skills.length × 0.3
        CASE Iron:      baseDist = 100 + skills.length × 0.3
        CASE Wedge:     baseDist =  50 + skills.length × 0.2
        CASE Putter:    baseDist =   5 + skills.putter × 0.2

    // Variante AI (game_ai_logic.h) :
    //   Driver:  baseDist = 220 + skills.length + skills.longDriver
    //   Wood:    baseDist = 190 + skills.length / 2
    //   Iron:    baseDist = 150 + skills.length / 3
    //   Wedge:   baseDist =  80 + skills.length / 4
    //   Putter:  baseDist =  15 + skills.putter
    //   Chip:    baseDist =  40 + skills.recovery

    // 2. Application de la puissance
    baseDist = baseDist × (power / 100)

    // 3. Ajustement Lie (facteurs multiplicatifs)
    SWITCH lie:
        CASE Tee:       baseDist = baseDist × 1.10     // +10%
        CASE Fairway:   baseDist = baseDist × 1.00     // 100% (réf)
        CASE Rough:     baseDist = baseDist × 0.80     // -20%
        CASE Sand:      baseDist = baseDist × 0.60     // -40%

    // 4. Ajustement Vent (additif)
    IF windDir == HEAD:
        baseDist -= windSpd × 2         // -2 yards/mph
    IF windDir == TAIL:
        baseDist += windSpd × 1         // +1 yard/mph

    // 5. Anti-dépassement (sauf putter)
    IF club != Putter AND baseDist > distanceToPin:
        overshoot = baseDist - distanceToPin
        baseDist = distanceToPin - overshoot / 2
        IF baseDist < 0: baseDist = 0

    RETURN baseDist


CalcShotDeviation(skills, lie, windDir, windSpd, shotType):
    // 1. Base : inverse de la précision
    accuracyFactor = (100 - skills.accuracy) / 100
    deviation = (RAND(0, 30)) × accuracyFactor

    // 2. Lie penalty (multiplicatif)
    SWITCH lie:
        CASE Fairway: deviation = deviation × 0.8   // meilleur
        CASE Rough:   deviation = deviation × 1.3   // pire
        CASE Sand:    deviation = deviation × 2.0   // ×2 !

    // 3. Vent latéral (additif)
    IF windDir == CROSS_LEFT:
        deviation += windSpd × 0.5
    IF windDir == CROSS_RIGHT:
        deviation -= windSpd × 0.5

    // 4. Draw/Fade volontaire (imagination)
    IF shotType == DRAW:
        deviation += skills.imagination × 0.3   // courbe D→G
    IF shotType == FADE:
        deviation -= skills.imagination × 0.3   // courbe G→D

    RETURN deviation


Physics_SimulatePutt(putterSkill, distance, slope):
    // Difficulté basée sur distance
    difficulty = (distance / 30.0) × 0.5     // 0 à 0.5

    // Pente du green
    difficulty += ABS(slope) × 0.05

    // Chance = skill - difficulté
    chance = (putterSkill / 100.0) - difficulty

    RETURN RAND(0, 100) < (chance × 100)
```

### 3.3 Arbre de décision IA complet

```
// ==============================================================
// 1. SÉLECTION DE CLUB
// ==============================================================
AI_SelectClub(distanceToPin, lie, skills):
    // Cas spéciaux
    IF lie == GREEN AND distanceToPin <= 30:
        RETURN Putter

    IF lie == SAND:
        RETURN Sand Wedge

    // Distance → club
    IF distanceToPin > 200:
        IF lie == TEE OR lie == FAIRWAY:
            RETURN Driver        // force max
        ELSE:
            RETURN Wood          // plus sûr depuis rough
    IF distanceToPin > 150:
        IF skills.accuracy >= 7:
            RETURN Long Iron     // plus précis
        ELSE:
            RETURN Wood          // plus facile à contrôler
    IF distanceToPin > 100:
        RETURN Medium Iron
    IF distanceToPin > 50:
        RETURN Wedge
    IF distanceToPin < 50:
        IF lie == GREEN:
            RETURN Putter
        ELSE:
            RETURN Chip/Pitch
    RETURN Wedge (fallback)

// ==============================================================
// 2. SÉLECTION DE LA CIBLE
// ==============================================================
AI_SelectTarget(context: ShotContext, skills):
    // Analyse risque/récompense
    riskScore = 0
    IF context.roundScore > 0:           // en sur-par → attaquer
        riskScore += 20
    IF context.tournamentPressure > 70:   // pression du tournoi
        riskScore -= 30                  // jouer safe
    IF context.strokes == 1:             // premier coup du trou
        riskScore += skills.length > 10 ? 10 : -10

    // Type de trou influence
    SWITCH context.holeType:
        CASE PRECISE:   riskScore -= 20  // précision > distance
        CASE FREEWAY:   riskScore += 20  // on peut bomber
        CASE CREATIVE:  riskScore += 10  // imagination encouragée
        CASE HEROIC:    riskScore += 30  // risqué mais récompensé
        CASE CLASSIC:   riskScore += 0   // balanced

    // Personnalité
    SWITCH context.personality:
        CASE aggressive:    riskScore += 25
        CASE conservative:  riskScore -= 25
        CASE balanced:      riskScore += 0

    // Décision finale
    IF riskScore > 30:
        RETURN 'pin'           // attaque le drapeau
    ELSE IF riskScore > 0:
        RETURN 'center_green'  // centre du green
    ELSE:
        RETURN 'layup'         // zone de sécurité

// ==============================================================
// 3. SÉLECTION DU TYPE DE TIR
// ==============================================================
AI_SelectShotType(slot, skills, windDir):
    shotType = NORMAL
    rng = RAND(0, 100)

    // Imagination → Draw/Fade
    IF skills.imagination >= 8 AND rng < 30:
        IF windDir == CROSS_LEFT:   // compenser vent gauche
            shotType = DRAW         // draw pour aller à droite
        ELSE IF windDir == CROSS_RIGHT:
            shotType = FADE
        ELSE:
            shotType = (rng < 15) ? DRAW : FADE  // aléatoire

    // Approche green → High/Backspin
    IF slot.distanceToPin < 80
       AND slot.distanceToPin > 20
       AND skills.backspin >= 7
       AND rng < 20:
        // "setting up to hit a high shot which will spin back"
        shotType = HIGH    // lobe avec backspin

    // Obstacles aériens → Low shot
    IF obstacles_above AND skills.recovery >= 6:
        // "setting up to hit a low shot which will run under the trees"
        shotType = LOW

    // Vent de face fort → Punch/Low
    IF windDir == HEAD AND windSpd > 15:
        shotType = LOW   // trajectoire basse pour pénétrer le vent

    RETURN shotType

// ==============================================================
// 4. SIMULATION D'UN COUP COMPLET
// ==============================================================
AI_SimulateShot(slot, skills, holePar, windDir, windSpd):
    // Étape 1 : Club
    params.club = AI_SelectClub(slot.distanceToPin, slot.lieType, skills)
    slot.clubUsed = params.club

    // Étape 2 : Type de tir
    params.shotType = AI_SelectShotType(slot, skills, windDir)

    // Étape 3 : Cible
    target = AI_SelectTarget(..., skills)

    // Étape 4 : Puissance (jamais 100% par sécurité)
    params.power = 80 + RAND(0, 20)    // 80-100%

    // Étape 5 : Distance
    distance = CalcShotDistance(params, skills, slot.lieType, windDir, windSpd)

    // Étape 6 : Déviation
    offline = CalcShotDeviation(skills, slot.lieType, windDir, windSpd, params.shotType)

    // Étape 7 : Qualité du résultat
    IF offline < 5 AND distance > 0:
        resultQuality = PERFECT
    ELSE IF offline < 20 AND distance > slot.distanceToPin / 2:
        resultQuality = GOOD
    ELSE:
        resultQuality = MISS

    slot.shotResult = resultQuality
    slot.strokes++
    slot.distanceToPin -= distance
    IF slot.distanceToPin < 0:
        slot.distanceToPin = 0

    // Étape 8 : Trou terminé ?
    IF slot.distanceToPin <= 0 AND slot.lieType == GREEN:
        slot.state = DONE      // dans le trou
    ELSE:
        // Mise à jour du lie selon atterrissage
        IF slot.distanceToPin <= 30:
            slot.lieType = GREEN
        ELSE IF slot.distanceToPin <= 80:
            slot.lieType = FAIRWAY
        // sinon reste sur le lie d'impact
        slot.state = WAITING

    // Étape 9 : Prochain tick
    slot.timerNext = currentTime + 20000 - RAND(0, 5000)  // ~15-20s

    // Étape 10 : Commentaire (via AI_GenerateComment)
    // "setting up to hit a draw/low/high shot"
    // "My length skill helps on this hole"
    // "This hole rewards my accuracy"
    // "This hole is too hard/easy"
```

### 3.4 Tick économie quotidien

```
// ==============================================================
// ECONOMY — Tick Quotidien
// ==============================================================
Economy_dailyTick(finance, nbHoles, stars, weather, staffLevel):
    // 1. Tarif green fee
    baseFee = 25
    starBonus = 1.0 + (stars / 100.0) * 0.5    // +50% max à 100★
    diffMult = [1.0, 1.5, 2.0, 2.5]           // Easy→Expert
    greensFee = int(baseFee × starBonus × diffMult[difficulty])
    finance.greensFee = greensFee

    // 2. Revenus journaliers
    visitors = 10                               // VISITORS_PER_DAY_BASE
    visitors += (stars / 10)                     // +1 par 10 étoiles
    IF isWeekend:
        visitors = visitors × 3 / 2              // +50%
    IF isRaining:
        visitors = visitors / 2                   // -50%
    dailyRevenue = greensFee × visitors
    finance.dailyRevenue = dailyRevenue

    // 3. Coûts journaliers
    dailyCost = 5 × nbHoles                      // entretien/trou
    dailyCost += 50 + staffLevel × 20            // salaires
    finance.dailyCost = dailyCost

    // 4. Profit
    profit = dailyRevenue - dailyCost - loanInterest
    finance.dailyProfit = profit

    // 5. Mise à jour trésorerie
    finance.cash += profit
    IF profit > 0:
        finance.totalRevenue += profit
    finance.totalProfit += profit
    finance.visitorsToday = dailyRevenue / max(greensFee, 1)

    // 6. Seuils d'alerte
    IF finance.cash < 1000:
        ALERTE "Faillite imminente"  // game over si persiste
    ELSE IF finance.cash < 5000:
        ALERTE "Trésorerie basse"

    // 7. Valeur du parcours
    courseValue = investments
    courseValue += nbHoles × 5000                // $5000/trou
    courseValue += stars × 1000                  // $1000/étoile
    courseValue += finance.cash
    finance.courseValue = courseValue


// ==============================================================
// ECONOMY — Fonction ASM de profit @ 0x49d820
// ==============================================================
// Analyse brute du désassemblage :
//
//   [ecx+0x50] = diviseur / marge (prix unitaire)
//   [ecx+0x54] = plafond (capacité max)
//   [ecx+0x5c] = résultat intermédiaire (quantité vendue)
//   [ecx+0xd0] = valeur réelle (demande / revenu brut)
//   [ecx+0xcc] = pointeur liste chaînée
//   [ecx+0xc8] = flag liste
//   [ecx+0xd4] = index liste
//   [ecx+0x24] = bit flag (bit 2)
//   [ecx+0x30] = prix max (plafond revenu)
//   [ecx+0x44] = coût unitaire × 2
//   [ecx+0x38] = coût fixe
//
// Logique ASM reconstituée :
//
//   field_5c = MIN(field_d0, field_54)          // clamp capacité
//   IF field_5c < field_d0:
//       field_50 = field_d0 / field_5c + 1     // ajuste prix
//       field_5c = field_d0 / field_50          // recalcule quantité
//   IF field_50 × field_5c < field_d0:
//       field_5c++                               // arrondi supérieur
//
//   IF (flag & 2) != 0:                           // mode actif
//       profit = MIN(field_30, field_d0 / field_50)
//       profit -= field_44 × 2                    // coûts variables
//       profit -= field_38                        // coûts fixes
//   ELSE:
//       profit = 100000                           // valeur par défaut
//
// Interprétation :
//   Revenu     = prix × quantité
//   Profit     = MIN(plafond, Revenu) - coûtsVariables - coûtsFixes
```

---

## 4. FORMULES EXACTES (résumé)

### 4.1 Distance de base par club

| Club | Formule (yards) |
|------|------------------|
| **Driver** | `baseDist = 200 + length×0.5 + longDriver×0.5` (physique) ou `220 + length + longDriver` (IA) |
| **Wood** | `baseDist = 180 + length×0.3` (physique) ou `190 + length/2` (IA) |
| **Iron** | `baseDist = 100 + length×0.3` (physique) ou `150 + length/3` (IA) |
| **Wedge** | `baseDist = 50 + length×0.2` (physique) ou `80 + length/4` (IA) |
| **Putter** | `baseDist = 5 + putter×0.2` (physique) ou `15 + putter` (IA) |
| **Chip** | `baseDist = 40 + recovery` (IA) |

### 4.2 Facteurs multiplicatifs

| Facteur | Valeur | Application |
|---------|:------:|-------------|
| **Tee** | ×1.10 (+10%) | distance |
| **Fairway** | ×1.00 (réf) | distance |
| **Rough** | ×0.80 (-20%) | distance |
| **Sand** | ×0.60 (-40%) | distance |
| **Puissance** | ×(power/100) | distance |
| **Fairway lie (déviation)** | ×0.8 | meilleure précision |
| **Rough lie (déviation)** | ×1.3 | moins précis |
| **Sand lie (déviation)** | ×2.0 | beaucoup moins précis |
| **Déviation max aléatoire** | ±30 yards × accuracyFactor | `(100-accuracy)/100` |

### 4.3 Effets du vent

| Vent | Effet |
|------|-------|
| **Headwind (vent de face)** | `distance -= speed × 2` (yards) |
| **Tailwind (vent arrière)** | `distance += speed × 1` (yard) |
| **Crosswind left** | `deviation += speed × 0.5` |
| **Crosswind right** | `deviation -= speed × 0.5` |

### 4.4 Clubs (IDs 0-13, distances estimées)

| ID | Club | Distance (yards) |
|:--:|------|:----------------:|
| 0 | Driver | 200-320 (variable selon skills) |
| 1 | Bois 3 | 180-250 |
| 2 | Bois 5 | 160-190 |
| 3 | Fer 3 | 150-180 |
| 4 | Fer 4 | 140-170 |
| 5 | Fer 5 | 130-160 |
| 6 | Fer 6 | 120-145 |
| 7 | Fer 7 | 110-135 |
| 8 | Fer 8 | 95-120 |
| 9 | Fer 9 | 80-105 |
| 10 | PW (Pitching Wedge) | 60-85 |
| 11 | SW (Sand Wedge) | 40-65 |
| 12 | LW (Lob Wedge) | 20-45 |
| 13 | Putter | 1-30 |

### 4.5 Putting

```
difficulty = (distance / 30) × 0.5 + ABS(slope) × 0.05
chance = (putterSkill / 100) - difficulty
SUCCESS SI RAND(0,100) < chance × 100
```

### 4.6 Économie

```
greensFee = 25 × (1 + stars/100 × 0.5) × diffMult
visitors = 10 + stars/10
si weekend: visitors ×= 1.5
si pluie:   visitors ×= 0.5
dailyRevenue = greensFee × visitors

dailyCost = nbHoles × 5 + 50 + staffLevel × 20

profit = dailyRevenue - dailyCost - loanInterest

courseValue = investments + nbHoles×5000 + stars×1000 + cash
```

### 4.7 Timing simulation

```
slot.timeoutMs = 20000                    // 20s par défaut
nouveauTimeout = (timeGetTime() + (startTime - oldStart + 20)) / 2
relance sur timeout: timeout × 3 / 2       // croissance 150%
timerNext = currentTime + 20000 - RAND(0,5000)  // prochain coup
```

---

## 5. CONSTANTES FPU vérifiées dans le binaire

| Adresse | Type | Valeur | Usage |
|---------|:----:|:------:|-------|
| `0x4ba818` | double | **0.05** | Échelle distance club |
| `0x4ba478` | double | **0.2** | Facteur secondaire |
| `0x4ba480` | double | **0.04** | Facteur secondaire |
| `0x4ba488` | double | **0.01** | Facteur secondaire |

---

## 6. RÉFÉRENCES CROISÉES

- `game_ai_logic.h` → arbre de décision club basé sur strings confirmés (Driver > 200y, Wood > 150y, etc.)
- `golfer_ai_analysis.md` → 8 skills (1-15), 7 types de trous, 80 pros + hackers
- `physics_formulas.md` → confirme les lie multipliers (Tee=+10%, Rough=-20%, Sand=-40%)
- `docs/05-physics.md` → confirme les 4 constantes FPU (0.05, 0.2, 0.04, 0.01) + structure BallData 88 bytes
- `docs/08-economy.md` → confirme toutes les constantes et formules économiques
- `game_loop.c` → timer 33ms, pipeline Input→Update→Render
- `game_tick_v2.c` → ASM confirmé : 16 slots, vtable[0x68], timeout croissant ×3/2

### Notes importantes

1. **Deux jeux de formules coexistent** : `game_physics.c` (valeurs type "pro réimplémentation") et `game_ai_logic.h` (valeurs ASM plus proches du binaire). Les formules exactes du binaire original sont les plus fiables.
2. **Le calcul de distance ASM `property_byte × 0.05`** est la seule constante FPU vérifiée statiquement. Les distances de base par club sont des déductions.
3. **La fonction principale de la balle** `Ball_MainFunction` @ `0x460cf0` (40+ refs à `0x81ca10`) reste non décompilée — c'est là que la trajectoire 3D complète est calculée.
4. **Les skills (1-15)** sont lus via `"LengthSkill=%.2f / AccuracySkill=%.2f"` → valeurs flottantes en interne.
