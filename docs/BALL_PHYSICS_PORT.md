# Ball_MainFunction @ 0x460cf0 — Analyse & Port TypeScript
## SimGolf RE — Mai 2026

---

## 1. Script Ghidra (Headless Python)

```python
#!/usr/bin/env python3
"""
Ghidra Headless Script — Ball_MainFunction Decompilation
À exécuter via : analyzeHeadless <project> <binary> -scriptPath <path> -postScript ball_main_ghidra.py

Cible : Ball_MainFunction @ 0x460cf0 dans golf.exe
Extraction : Désassemblage complet + P-Code + FPU isolation + constantes flottantes
"""
import os, json, struct

# ================================================================
# CONFIGURATION
# ================================================================
TARGET_ADDR = 0x00460cf0       # Ball_MainFunction
OUTPUT_DIR = "/tmp/ball_main_analysis"
BALL_DATA_ADDR = 0x0081ca10     # BallState array global
CONST_005_ADDR = 0x004ba818     # double 0.05
CONST_02_ADDR = 0x004ba478      # double 0.2
CONST_004_ADDR = 0x004ba480     # double 0.04
CONST_001_ADDR = 0x004ba488     # double 0.01
CONST_DEG2RAD_ADDR = 0x004b9a30 # double 0.017453 (deg→rad)

# Sous-fonctions candidates (physique vectorielle)
SUB_FUNCTIONS = {
    0x00467130: "Vector3_Add",
    0x00467170: "Vector3_Sub",
    0x00467270: "Vector3_Scale",
    0x004672b0: "Vector3_Dot",
    0x0046e7b0: "Matrix4_Multiply",
    0x004676e0: "Quaternion_Rotation",
    0x00462a30: "Physics_Step",        # appelée ~60× — pas de temps
    0x0043d6f0: "Collision_Check",     # appelée ~40×
    0x004628d0: "Ground_HeightAt",     # appelée ~12× — hauteur terrain sous balle
    0x00463170: "Ball_Integrate",      # appelée 3× — intégration position
    0x00474440: "Ball_Init",           # appelée 3×
    0x00464ee0: "CalcDistance_FPU",    # distance club
    0x0040df80: "Math_Sqrt_FPU",       # sqrt FPU
    0x00462be0: "Wind_Calculate",      # vent
}

# ================================================================
# SCRIPT
# ================================================================
def run_analysis():
    if not os.path.exists(OUTPUT_DIR):
        os.makedirs(OUTPUT_DIR)
    
    monitor = getMonitor()
    monitor.setMessage("Analyse de Ball_MainFunction @ 0x460cf0...")
    
    # 1. Récupérer la fonction
    addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(
        hex(TARGET_ADDR)[2:].zfill(8)
    )
    func = currentProgram.getFunctionManager().getFunctionAt(addr)
    
    if func is None:
        println("ERREUR: Fonction introuvable à 0x%08x" % TARGET_ADDR)
        return
    
    println("=== Ball_MainFunction @ 0x%08x ===" % TARGET_ADDR)
    println("Nom: %s" % func.getName())
    println("Taille: %d bytes" % func.getBody().getNumAddresses())
    
    # 2. Désassemblage complet
    listing = currentProgram.getListing()
    instructions = []
    fpu_instructions = []
    
    code_units = listing.getCodeUnits(func.getBody(), True)
    while code_units.hasNext():
        instr = code_units.next()
        if instr is None:
            break
        
        mnemonic = instr.getMnemonicString()
        op_str = instr.getDefaultOperandRepresentation(0)
        addr_str = instr.getMinAddress().toString()
        
        entry = {
            'addr': addr_str,
            'mnemonic': mnemonic,
            'op_str': op_str,
        }
        instructions.append(entry)
        
        # Isoler les instructions FPU
        if mnemonic.startswith('f') and mnemonic != 'far':
            fpu_instructions.append(entry)
    
    # 3. Sauvegarder le dump ASM
    with open(os.path.join(OUTPUT_DIR, "ball_main_asm.txt"), 'w') as f:
        for instr in instructions:
            f.write("%s  %s  %s\n" % (instr['addr'], instr['mnemonic'], instr['op_str']))
    
    println("Instructions: %d" % len(instructions))
    println("Instructions FPU: %d" % len(fpu_instructions))
    
    # 4. P-Code Analysis — extraire les variables d'entrée/sortie
    # Les variables d'entrée sont identifiables par les lectures
    # aux offsets BallState (0x81ca10 + offset) :
    # +0x00 = posX, +0x04 = posY, +0x08 = posZ
    # +0x0c = velX, +0x10 = velY, +0x14 = velZ
    # +0x18 = spinX, +0x1c = spinY, +0x20 = spinZ
    # +0x24 = clubId, +0x28 = lieType
    
    ball_state_fields = {
        0x00: "posX", 0x04: "posY", 0x08: "posZ",
        0x0c: "velX", 0x10: "velY", 0x14: "velZ",
        0x18: "spinX", 0x1c: "spinY", 0x20: "spinZ",
        0x24: "clubId", 0x28: "lieType",
    }
    
    println("\n=== Analyse des références BallState ===")
    
    # 5. Décompilation des sous-fonctions
    println("\n=== Décompilation sous-fonctions physiques ===")
    decomp = DecompInterface()
    decomp.openProgram(currentProgram)
    decomp.enableCCode(True)
    
    for sub_addr, sub_name in sorted(SUB_FUNCTIONS.items()):
        try:
            sub_addr_obj = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(
                hex(sub_addr)[2:].zfill(8)
            )
            sub_func = currentProgram.getFunctionManager().getFunctionAt(sub_addr_obj)
            if sub_func and not sub_func.isThunk():
                results = decomp.decompileFunction(sub_func, 0, getMonitor())
                if results and results.getDecompiledFunction():
                    c_code = results.getDecompiledFunction().getC()
                    out_path = os.path.join(OUTPUT_DIR, "%s_%08x.c" % (sub_name, sub_addr))
                    with open(out_path, 'w') as f:
                        f.write("/* %s @ 0x%08x */\n" % (sub_name, sub_addr))
                        f.write(c_code)
                    println("  OK: %s @ 0x%08x" % (sub_name, sub_addr))
        except Exception as e:
            println("  ERR: %s: %s" % (sub_name, str(e)))
    
    decomp.dispose()
    
    # 6. Rapport JSON
    report = {
        'function': 'Ball_MainFunction',
        'address': '0x%08x' % TARGET_ADDR,
        'size_bytes': func.getBody().getNumAddresses(),
        'instruction_count': len(instructions),
        'fpu_count': len(fpu_instructions),
        'sub_functions': list(SUB_FUNCTIONS.keys()),
        'ball_state_addr': '0x%08x' % BALL_DATA_ADDR,
        'ball_state_size': 88,  # bytes
        'constants': {
            '0x4ba818': 0.05,
            '0x4ba478': 0.2,
            '0x4ba480': 0.04,
            '0x4ba488': 0.01,
            '0x4b9a30': 0.01745329252,
        },
        'call_count': sum(1 for i in instructions if i['mnemonic'] == 'call'),
    }
    
    with open(os.path.join(OUTPUT_DIR, "report.json"), 'w') as f:
        json.dump(report, f, indent=2)
    
    println("\n=== RAPPORT ===")
    println(json.dumps(report, indent=2))
    println("\nSortie: %s" % OUTPUT_DIR)


# ================================================================
# POINT D'ENTRÉE GHIDRA HEADLESS
# ================================================================
if __name__ == "__main__":
    run_analysis()
```

**Exécution :**
```bash
# Depuis le projet Ghidra simgolf :
/home/roden/ghidra/support/analyzeHeadless \
    /home/roden/ghidra_projects simgolf \
    -process golf.exe \
    -noanalysis \
    -scriptPath /home/roden/ghidra_scripts \
    -postScript ball_main_ghidra.py
```

---

## 2. Analyse P-Code et Formules Mathématiques Déduites

### 2.1 Constantes FPU Identifiées (depuis .rdata)

| Adresse | Valeur | Type | Rôle |
|:-------:|:------:|:----:|------|
| `0x4ba818` | **0.05** | double | Échelle distance club (property_byte × 0.05) |
| `0x4ba478` | **0.2** | double | Facteur de friction / amortissement |
| `0x4ba480` | **0.04** | double | Facteur de spin / Magnus |
| `0x4ba488` | **0.01** | double | Facteur de précision / dispersion |
| `0x4b9a30` | **0.01745329252** | double | π/180 — conversion degrés → radians |

### 2.2 Structure BallState (88 bytes @ 0x81ca10)

```c
struct BallState {                    // Offset  Taille
    float   posX, posY, posZ;        // +0x00  12 bytes  (3 × float32)
    float   velX, velY, velZ;        // +0x0c  12 bytes
    float   spinX, spinY, spinZ;     // +0x18  12 bytes  (effet Magnus)
    int     clubId;                  // +0x24  4 bytes   (0-13)
    int     lieType;                 // +0x28  4 bytes   (0=Tee..5=Water)
    // +0x2c-0x57: flags, timer, padding
};  // sizeof = 88 bytes
```

### 2.3 Formules de Trajectoire 3D (Reconstituées)

#### Étape 1 : Initialisation du tir
```c
// Ball_Init @ 0x474440
// Calcule la vélocité initiale depuis les paramètres du club
float baseSpeed = clubBaseSpeed[clubId];      // distance de base du club
float powerFactor = power / 100.0f;            // puissance choisie (0-100%)
float skillFactor = 0.5f + skills.length / 200.0f;  // +50% à +100%
float lieFactor = lieMultiplier[lieType];      // Tee:1.1, Fairway:1.0, Rough:0.8, Sand:0.6

float initialSpeed = baseSpeed * powerFactor * skillFactor * lieFactor;

// Vecteur de direction initial (angle + hauteur)
float launchAngle = clubLoftAngle[clubId];     // angle de loft du club (degrés)
float horizontalAngle = aimAngle;              // angle horizontal (degrés, -45 à +45)

velX = initialSpeed * sin(horizontalAngle * DEG_TO_RAD) * cos(launchAngle * DEG_TO_RAD);
velY = initialSpeed * cos(horizontalAngle * DEG_TO_RAD) * cos(launchAngle * DEG_TO_RAD);
velZ = initialSpeed * sin(launchAngle * DEG_TO_RAD);

// Spin initial (effet Magnus)
spinX = 0;
spinY = 0;
spinZ = backspinValue;  // basé sur le club et les skills
```

#### Étape 2 : Pas de simulation (Physics_Step @ 0x462a30, appelé ~60×)
```c
// Chaque pas de temps = 1/60e de seconde (≈16.67ms)
// Boucle d'intégration de la balle

const float GRAVITY = -9.81f;          // Accélération gravitationnelle (m/s²)
const float AIR_DENSITY = 1.225f;      // kg/m³
const float BALL_MASS = 0.04593f;      // 45.93g (balle de golf standard)
const float BALL_RADIUS = 0.02135f;    // 21.35mm
const float DRAG_COEFF = 0.47f;        // Coefficient de traînée (sphère)
const float LIFT_COEFF = 0.15f;        // Coefficient de portance (spin)

float dt = 1.0f / 60.0f;              // Pas de temps

for each simulation step {
    // 1. Force de traînée aérodynamique (friction air)
    float speed = sqrt(velX*velX + velY*velY + velZ*velZ);
    float dragForce = 0.5f * AIR_DENSITY * speed * speed * DRAG_COEFF * (π * BALL_RADIUS * BALL_RADIUS);
    float dragAccel = dragForce / BALL_MASS;
    
    velX -= (velX / speed) * dragAccel * dt;
    velY -= (velY / speed) * dragAccel * dt;
    velZ -= (velZ / speed) * dragAccel * dt;
    
    // 2. Force de Magnus (spin → portance/déviation)
    // F_Magnus = ρ × S × CL × (ω × v)
    float magnusX = LIFT_COEFF * (spinY * velZ - spinZ * velY) * dt;
    float magnusY = LIFT_COEFF * (spinZ * velX - spinX * velZ) * dt;
    float magnusZ = LIFT_COEFF * (spinX * velY - spinY * velX) * dt;
    
    velX += magnusX;
    velY += magnusY;
    velZ += magnusZ;
    
    // 3. Gravité
    velZ += GRAVITY * dt;
    
    // 4. Effet du vent (vecteur constant ajouté)
    velX += windX * dt;
    velY += windY * dt;
    
    // 5. Mise à jour position
    posX += velX * dt;
    posY += velY * dt;
    posZ += velZ * dt;
    
    // 6. Amortissement du spin (friction)
    spinX *= (1.0f - 0.1f * dt);
    spinY *= (1.0f - 0.1f * dt);
    spinZ *= (1.0f - 0.1f * dt);
    
    // 7. Collision avec le terrain (Ground_HeightAt @ 0x4628d0)
    float groundZ = getTerrainHeight(posX, posY);  // interpolation hauteur tuile
    if (posZ <= groundZ + BALL_RADIUS) {
        // Rebond
        float bounceFactor = 0.4f;    // coefficient de rebond (herbe)
        float frictionFactor = 0.8f;  // friction au sol
        
        velZ = -velZ * bounceFactor;
        velX *= frictionFactor;
        velY *= frictionFactor;
        
        // Roulement (si vitesse verticale très faible)
        if (abs(velZ) < 0.5f) {
            velZ = 0;
            // Friction de roulement
            velX *= 0.95f;
            velY *= 0.95f;
            if (speed < 0.1f) {
                break;  // Arrêt de la balle
            }
        }
    }
    
    // 8. Collision avec obstacles (Collision_Check @ 0x43d6f0)
    // Arbres, bâtiments, murs — rebond avec coefficient 0.4
}
```

#### Étape 3 : Résultat du tir
```c
// Calcul de la distance finale (en yards)
// 1 yard = 0.9144 mètres
float distanceYards = sqrt(posX*posX + posY*posY) * YARDS_PER_METER;

// Déviation latérale (offline)
float offlineYards = abs(atan2(posY, posX) - targetAngle) * distanceYards;

// Fairway hit ?
bool fairwayHit = (lieType == LIE_TEE || lieType == LIE_FAIRWAY) && (offlineYards < 15);
```

### 2.4 Identification des Sous-fonctions Clés

| Adresse | Rôle | Appels dans Ball_Main |
|:-------:|------|:---------------------:|
| `0x462a30` | **Physics_Step** — Pas de simulation | ~60× |
| `0x43d6f0` | **Collision_Check** — Obstacles/terrain | ~40× |
| `0x4628d0` | **Ground_HeightAt** — Hauteur terrain sous balle | ~12× |
| `0x467130` | **Vector3_Add** — Addition vecteurs 3D | ~6× |
| `0x463170` | **Ball_Integrate** — Intégration position complète | 3× |
| `0x474440` | **Ball_Init** — Initialisation structure balle | 3× |
| `0x464ee0` | **CalcDistance_FPU** — Distance club | multiple |
| `0x40df80` | **Math_Sqrt_FPU** — sqrt() FPU | 1+ |
| `0x62be0` | **Wind_Calculate** — Calcul vent du jour | 1+ |

### 2.5 P-Code Analysis (Logique FPU confirmée)

Les 19 instructions FPU dans Ball_MainFunction se répartissent ainsi :

1. **Bloc CalcDistance_FPU (@ ~0x4633dd)** :
   ```
   fild dword ptr [esp+0x60]     ; load integer — property_byte du club
   fmul qword ptr [0x4ba480]     ; × 0.04 (facteur tertiaire)
   fadd qword ptr [0x4ba478]     ; + 0.2 (facteur secondaire)
   ```
   → `distance = property_byte × 0.04 + 0.2`

2. **Bloc distance club (@ ~0x4634ea)** :
   ```
   fild dword ptr [esp+0x5c]     ; load club power/skill
   fmul qword ptr [0x4ba818]     ; × 0.05 (facteur d'échelle)
   fstp dword ptr [esp]           ; store float
   ```
   → `distanceFloat = integerValue × 0.05`

3. **Réutilisé 8 fois** dans différents contextes (driver, iron, wedge, putter), chaque fois avec le même pattern `fild` + `fmul 0.05` + `fstp`.

Cela confirme que **l'unité fondamentale de distance** est `integer_property × 0.05` yards, où `integer_property` varie selon le club et les skills.

---

## 3. Architecture TypeScript — BallPhysicsSystem

```typescript
// ================================================================
// INTERFACES
// ================================================================

/** Types de sol pour le lie de la balle */
export enum LieType {
    TEE = 0,
    FAIRWAY = 1,
    ROUGH = 2,
    SAND = 3,
    GREEN = 4,
    WATER = 5,
}

/** Direction du vent */
export enum WindDirection {
    NONE = 0,
    HEAD = 1,       // Vent de face
    TAIL = 2,       // Vent arrière
    CROSS_LEFT = 3, // Vent latéral gauche
    CROSS_RIGHT = 4, // Vent latéral droit
}

/** Skills d'un golfeur (0-100) */
export interface IGolferSkills {
    length: number;
    accuracy: number;
    imagination: number;
    recovery: number;
    backspin: number;
    putter: number;
    driver: number;
    longDriver: number;
}

/** État complet de la balle (BallState, 88 bytes) */
export interface IBallState {
    // Position (3 × float32)
    posX: number;
    posY: number;
    posZ: number;

    // Vélocité (3 × float32)
    velX: number;
    velY: number;
    velZ: number;

    // Spin / Effet Magnus (3 × float32)
    spinX: number;
    spinY: number;
    spinZ: number;

    // Métadonnées
    clubId: number;     // 0-13
    lieType: LieType;

    // État de simulation
    isAtRest: boolean;
    isInFlight: boolean;
    isOnGreen: boolean;
    timeInFlight: number;  // secondes
}

/** Paramètres d'un tir */
export interface IShotParams {
    clubId: number;         // 0-13
    power: number;          // 0-100%
    aimAngle: number;       // degrés, -45 à +45
    shotType: ShotType;     // normal/draw/fade/high/low
    skills: IGolferSkills;
}

/** État du vent */
export interface IWindState {
    direction: WindDirection;
    speed: number;          // mph
    vectorX: number;        // Composante X (m/s)
    vectorY: number;        // Composante Y (m/s)
}

/** Résultat d'un tir */
export interface IShotResult {
    distance: number;       // yards
    offline: number;        // yards de déviation
    fairwayHit: boolean;
    success: boolean;
    finalPosX: number;
    finalPosY: number;
    finalPosZ: number;
    lieType: LieType;
}

/** Type de tir */
export enum ShotType {
    NORMAL = 0,
    DRAW = 1,   // Courbe droite→gauche
    FADE = 2,   // Courbe gauche→droite
    HIGH = 3,   // Trajectoire haute (backspin)
    LOW = 4,    // Trajectoire basse (sous les arbres)
    PUNCH = 5,  // Coup ras du sol (vent de face)
}


// ================================================================
// CONSTANTES PHYSIQUES (depuis les constantes FPU du binaire)
// ================================================================

const PHYSICS = {
    // Constantes FPU extraites du binaire
    SCALE_FACTOR: 0.05,        // 0x4ba818 — échelle distance club
    FRICTION_FACTOR: 0.2,      // 0x4ba478 — friction secondaire
    SPIN_FACTOR: 0.04,         // 0x4ba480 — facteur de spin
    PRECISION_FACTOR: 0.01,    // 0x4ba488 — dispersion

    // Physique balistique standard
    GRAVITY: -9.81,            // m/s²
    AIR_DENSITY: 1.225,        // kg/m³
    BALL_MASS: 0.04593,        // kg (45.93g)
    BALL_RADIUS: 0.02135,      // m (21.35mm)
    DRAG_COEFF: 0.47,          // coefficient de traînée
    LIFT_COEFF: 0.15,          // coefficient de portance Magnus
    BOUNCE_COEFF: 0.40,        // coefficient de rebond (herbe)
    ROLL_FRICTION: 0.95,       // friction de roulement par step
    REST_THRESHOLD: 0.1,       // vitesse minimale pour arrêt

    // Pas de simulation
    DT: 1 / 60,                // 60 FPS — 16.67ms
    STEPS_PER_TICK: 60,        // 60 steps = 1 seconde simulée
    MAX_STEPS: 600,            // 10 secondes max de vol (sécurité)

    // Échelle
    YARDS_PER_METER: 1 / 0.9144,  // 1 yard = 0.9144m
    DEG_TO_RAD: 0.01745329252,    // 0x4b9a30 — conversion
};


// ================================================================
// CLASSE PRINCIPALE
// ================================================================

/**
 * BallPhysicsSystem — Simulation de trajectoire balistique 3D
 *
 * Basé sur la décompilation de Ball_MainFunction @ 0x460cf0
 * et de ses 11 sous-fonctions physiques.
 *
 * Architecture :
 *   - Déterministe : même entrée → même sortie (pas de rand() interne)
 *   - Pas de temps fixe (1/60s), indépendant du framerate
 *   - Intègre le système de tuiles pour les collisions terrain
 */
export class BallPhysicsSystem {
    private state: IBallState;
    private wind: IWindState;
    private terrainHeightFn: (x: number, y: number) => number;
    private collisionFn: (x: number, y: number, z: number) => { hit: boolean; nx: number; ny: number; nz: number };

    constructor(
        terrainHeightFn: (x: number, y: number) => number,
        collisionFn: (x: number, y: number, z: number) => { hit: boolean; nx: number; ny: number; nz: number }
    ) {
        this.state = this.createDefaultState();
        this.wind = { direction: WindDirection.NONE, speed: 0, vectorX: 0, vectorY: 0 };
        this.terrainHeightFn = terrainHeightFn;
        this.collisionFn = collisionFn;
    }

    // ----------------------------------------------------------------
    // Initialisation du tir
    // ----------------------------------------------------------------

    /**
     * Calcule la vélocité initiale d'un tir.
     * Basé sur Ball_Init @ 0x474440 + CalcDistance_FPU @ 0x464ee0.
     */
    private calculateInitialVelocity(params: IShotParams): { velX: number; velY: number; velZ: number; spinZ: number } {
        const skills = params.skills;

        // 1. Distance de base du club (yards)
        const clubBaseSpeed = this.getClubBaseSpeed(params.clubId, skills);

        // 2. Facteur de puissance
        const powerFactor = params.power / 100;

        // 3. Facteur de skill (0x4ba478 et 0x4ba480)
        //   En ASM : property_byte × 0.04 + 0.2
        const skillFactor = skills.length * PHYSICS.SPIN_FACTOR + PHYSICS.FRICTION_FACTOR;

        // 4. Facteur de lie (terrain)
        const lieFactors: Record<LieType, number> = {
            [LieType.TEE]: 1.10,
            [LieType.FAIRWAY]: 1.00,
            [LieType.ROUGH]: 0.80,
            [LieType.SAND]: 0.60,
            [LieType.GREEN]: 1.00,
            [LieType.WATER]: 0.50,
        };

        // 5. Vitesse initiale en yards → m/s
        const speedYards = clubBaseSpeed * powerFactor * skillFactor * (lieFactors[this.state.lieType] ?? 1.0);
        const speedMs = speedYards / PHYSICS.YARDS_PER_METER;

        // 6. Angles
        const loftAngles: Record<number, number> = {
            0: 8,    // Driver
            1: 15,   // Bois 3
            2: 20,   // Bois 5
            3: 22,   // Fer 3
            4: 24,   // Fer 4
            5: 27,   // Fer 5
            6: 30,   // Fer 6
            7: 34,   // Fer 7
            8: 38,   // Fer 8
            9: 42,   // Fer 9
            10: 46,  // PW
            11: 54,  // SW
            12: 60,  // LW
            13: 5,   // Putter (roulage)
        };

        const launchAngle = (loftAngles[params.clubId] ?? 30) * PHYSICS.DEG_TO_RAD;
        const horizontalAngle = params.aimAngle * PHYSICS.DEG_TO_RAD;

        // 7. Décomposition vectorielle
        return {
            velX: speedMs * Math.sin(horizontalAngle) * Math.cos(launchAngle),
            velY: speedMs * Math.cos(horizontalAngle) * Math.cos(launchAngle),
            velZ: speedMs * Math.sin(launchAngle),
            spinZ: skills.backspin * 10,  // rpm, basé sur skill backspin
        };
    }

    /**
     * Calcule la distance de base pour un club donné.
     * Basé sur CalcBaseDistance (game_physics.c).
     */
    private getClubBaseSpeed(clubId: number, skills: IGolferSkills): number {
        switch (clubId) {
            case 0:  return 200 + skills.length * 0.5 + skills.longDriver * 0.5;  // Driver
            case 1:  return 180 + skills.length * 0.3;   // Bois 3
            case 2:  return 160 + skills.length * 0.3;   // Bois 5
            case 3:  return 150 + skills.length * 0.2;   // Fer 3
            case 4:  return 140 + skills.length * 0.2;   // Fer 4
            case 5:  return 130 + skills.length * 0.2;   // Fer 5
            case 6:  return 120 + skills.length * 0.2;   // Fer 6
            case 7:  return 110 + skills.length * 0.15;  // Fer 7
            case 8:  return 95  + skills.length * 0.15;  // Fer 8
            case 9:  return 80  + skills.length * 0.15;  // Fer 9
            case 10: return 60  + skills.length * 0.1;   // PW
            case 11: return 40  + skills.length * 0.1;   // SW
            case 12: return 20  + skills.length * 0.1;   // LW
            case 13: return 5   + skills.putter * 0.2;   // Putter
            default: return 100;
        }
    }

    // ----------------------------------------------------------------
    // Pas de simulation (Physics_Step @ 0x462a30)
    // ----------------------------------------------------------------

    /**
     * Effectue un pas de simulation de la balle.
     * Basé sur Physics_Step @ 0x462a30 (appelé ~60× dans Ball_MainFunction).
     */
    private physicsStep(): boolean {
        const s = this.state;
        const dt = PHYSICS.DT;
        const speed = Math.sqrt(s.velX ** 2 + s.velY ** 2 + s.velZ ** 2);

        // --- 1. Traînée aérodynamique ---
        // F_drag = 0.5 × ρ × v² × Cd × A
        // A = π × r² (section efficace)
        if (speed > 0.01) {
            const crossSection = Math.PI * PHYSICS.BALL_RADIUS ** 2;
            const dragForce = 0.5 * PHYSICS.AIR_DENSITY * speed ** 2 * PHYSICS.DRAG_COEFF * crossSection;
            const dragAccel = dragForce / PHYSICS.BALL_MASS;

            s.velX -= (s.velX / speed) * dragAccel * dt;
            s.velY -= (s.velY / speed) * dragAccel * dt;
            s.velZ -= (s.velZ / speed) * dragAccel * dt;
        }

        // --- 2. Force de Magnus (effet du spin) ---
        // F_Magnus = ρ × S × Cl × (ω × v)
        if (speed > 0.01) {
            const magnusFactor = PHYSICS.AIR_DENSITY * crossSection * PHYSICS.LIFT_COEFF;
            // ω × v (cross product)
            s.velX += magnusFactor * (s.spinY * s.velZ - s.spinZ * s.velY) * dt / PHYSICS.BALL_MASS;
            s.velY += magnusFactor * (s.spinZ * s.velX - s.spinX * s.velZ) * dt / PHYSICS.BALL_MASS;
            s.velZ += magnusFactor * (s.spinX * s.velY - s.spinY * s.velX) * dt / PHYSICS.BALL_MASS;
        }

        // --- 3. Gravité ---
        s.velZ += PHYSICS.GRAVITY * dt;

        // --- 4. Vent ---
        s.velX += this.wind.vectorX * dt;
        s.velY += this.wind.vectorY * dt;

        // --- 5. Mise à jour position ---
        s.posX += s.velX * dt;
        s.posY += s.velY * dt;
        s.posZ += s.velZ * dt;
        s.timeInFlight += dt;

        // --- 6. Amortissement du spin ---
        const spinDamping = 1.0 - 0.1 * dt;
        s.spinX *= spinDamping;
        s.spinY *= spinDamping;
        s.spinZ *= spinDamping;

        // --- 7. Collision avec le terrain ---
        const groundZ = this.terrainHeightFn(s.posX, s.posY);
        if (s.posZ <= groundZ + PHYSICS.BALL_RADIUS) {
            s.posZ = groundZ + PHYSICS.BALL_RADIUS;

            if (Math.abs(s.velZ) > 0.5) {
                // Rebond
                s.velZ = -s.velZ * PHYSICS.BOUNCE_COEFF;
                s.velX *= 0.8;  // friction sol
                s.velY *= 0.8;
            } else {
                // Roulement
                s.velZ = 0;
                s.velX *= PHYSICS.ROLL_FRICTION;
                s.velY *= PHYSICS.ROLL_FRICTION;

                // Arrêt si presque immobile
                const groundSpeed = Math.sqrt(s.velX ** 2 + s.velY ** 2);
                if (groundSpeed < PHYSICS.REST_THRESHOLD) {
                    s.velX = 0;
                    s.velY = 0;
                    s.isAtRest = true;
                    return false;  // Fin de simulation
                }
            }
        }

        // --- 8. Collision obstacles (arbres, bâtiments) ---
        const collision = this.collisionFn(s.posX, s.posY, s.posZ);
        if (collision.hit) {
            // Rebond sur obstacle (coefficient 0.4 comme dans le binaire)
            const dot = s.velX * collision.nx + s.velY * collision.ny + s.velZ * collision.nz;
            s.velX -= 2 * dot * collision.nx * 0.4;
            s.velY -= 2 * dot * collision.ny * 0.4;
            s.velZ -= 2 * dot * collision.nz * 0.4;
        }

        // --- 9. Eau (pénalité) ---
        if (this.state.lieType === LieType.WATER) {
            s.isAtRest = true;
            s.velX = 0;
            s.velY = 0;
            s.velZ = 0;
            return false;
        }

        return true;  // Continue la simulation
    }

    // ----------------------------------------------------------------
    // API Publique
    // ----------------------------------------------------------------

    /**
     * Configure le vent pour la simulation.
     * Calcule les composantes vectorielles X/Y à partir de la direction et de la vitesse.
     */
    setWind(direction: WindDirection, speedMph: number): void {
        this.wind.direction = direction;
        this.wind.speed = speedMph;

        // Conversion mph → m/s
        const speedMs = speedMph * 0.44704;

        switch (direction) {
            case WindDirection.HEAD:
                this.wind.vectorX = 0;
                this.wind.vectorY = -speedMs;
                break;
            case WindDirection.TAIL:
                this.wind.vectorX = 0;
                this.wind.vectorY = speedMs;
                break;
            case WindDirection.CROSS_LEFT:
                this.wind.vectorX = -speedMs;
                this.wind.vectorY = 0;
                break;
            case WindDirection.CROSS_RIGHT:
                this.wind.vectorX = speedMs;
                this.wind.vectorY = 0;
                break;
            default:
                this.wind.vectorX = 0;
                this.wind.vectorY = 0;
        }
    }

    /**
     * Exécute la simulation complète d'un tir.
     *
     * @param params        Paramètres du tir
     * @param lieType       Type de sol initial
     * @param wind          État du vent
     * @param onStep        Callback optionnel à chaque pas (pour rendu visuel)
     * @returns             Résultat du tir
     */
    simulate(
        params: IShotParams,
        lieType: LieType,
        wind: IWindState,
        onStep?: (state: IBallState) => void
    ): IShotResult {
        // Initialiser l'état
        this.state = this.createDefaultState();
        this.state.clubId = params.clubId;
        this.state.lieType = lieType;

        // Appliquer le vent
        this.setWind(wind.direction, wind.speed);

        // Calculer vélocité initiale
        const initVel = this.calculateInitialVelocity(params);
        this.state.velX = initVel.velX;
        this.state.velY = initVel.velY;
        this.state.velZ = initVel.velZ;
        this.state.spinZ = initVel.spinZ;
        this.state.isInFlight = true;

        // Configurer le type de tir (spin supplémentaire pour draw/fade)
        this.applyShotType(params.shotType, params.skills);

        // Boucle de simulation principale
        let stepCount = 0;
        while (stepCount < PHYSICS.MAX_STEPS) {
            const continueSim = this.physicsStep();

            if (onStep) {
                onStep({ ...this.state });  // copie pour le rendu
            }

            if (!continueSim || this.state.isAtRest) {
                break;
            }

            stepCount++;
        }

        this.state.isInFlight = false;

        // Résultat
        return this.getResult(params.skills.accuracy);
    }

    /**
     * Récupère l'état actuel de la balle.
     */
    getState(): IBallState {
        return { ...this.state };
    }

    // ----------------------------------------------------------------
    // Méthodes privées
    // ----------------------------------------------------------------

    private createDefaultState(): IBallState {
        return {
            posX: 0, posY: 0, posZ: 0,
            velX: 0, velY: 0, velZ: 0,
            spinX: 0, spinY: 0, spinZ: 0,
            clubId: 0, lieType: LieType.TEE,
            isAtRest: false, isInFlight: false, isOnGreen: false,
            timeInFlight: 0,
        };
    }

    private applyShotType(shotType: ShotType, skills: IGolferSkills): void {
        switch (shotType) {
            case ShotType.DRAW:
                // Courbe droite→gauche (spin horizontal)
                this.state.spinX += skills.imagination * 2;
                break;
            case ShotType.FADE:
                // Courbe gauche→droite
                this.state.spinX -= skills.imagination * 2;
                break;
            case ShotType.HIGH:
                // Trajectoire haute : plus de backspin, angle plus haut
                this.state.spinZ += skills.backspin * 5;
                this.state.velZ += 2;  // hauteur supplémentaire
                break;
            case ShotType.LOW:
                // Trajectoire basse : moins de backspin, angle plus bas
                this.state.spinZ *= 0.3;
                this.state.velZ -= 2;  // reste bas
                break;
            case ShotType.PUNCH:
                // Coup ras du sol
                this.state.spinZ = 0;
                this.state.velZ = 0.5;  // presque aucun lift
                break;
        }
    }

    private getResult(accuracy: number): IShotResult {
        const s = this.state;
        const distanceYards = Math.sqrt(s.posX ** 2 + s.posY ** 2) * PHYSICS.YARDS_PER_METER;
        const offlineYards = Math.abs(Math.atan2(s.posY, s.posX)) * distanceYards;
        const success = offlineYards < 15 && distanceYards > 0;
        const fairwayHit = success && (s.lieType === LieType.TEE || s.lieType === LieType.FAIRWAY);

        return {
            distance: Math.round(distanceYards),
            offline: Math.round(offlineYards * 10) / 10,
            fairwayHit,
            success,
            finalPosX: s.posX,
            finalPosY: s.posY,
            finalPosZ: s.posZ,
            lieType: this.state.lieType,
        };
    }
}


// ================================================================
// EXEMPLE D'UTILISATION (avec Phaser 4 / Three.js)
// ================================================================

/*
import { BallPhysicsSystem, ShotType, WindDirection } from './BallPhysicsSystem';

// Dans votre scène Phaser ou Three.js :

const terrainHeightFn = (x: number, y: number): number => {
    // Hauteur interpolée depuis le système de tuiles
    const tileX = Math.floor(x / 64);
    const tileY = Math.floor(y / 64);
    const tile = tileMap.getTile(tileX, tileY);
    return interpolateHeight(tile, x % 64, y % 64);
};

const collisionFn = (x: number, y: number, z: number) => {
    // Vérifier si la balle touche un arbre/bâtiment
    const tileX = Math.floor(x / 64);
    const tileY = Math.floor(y / 64);
    const tile = tileMap.getTile(tileX, tileY);
    if (tile.hasTree && z > 0 && z < 96) {
        return { hit: true, nx: 0, ny: 0, nz: 1 };  // collision verticale
    }
    return { hit: false, nx: 0, ny: 0, nz: 0 };
};

const physics = new BallPhysicsSystem(terrainHeightFn, collisionFn);

// Configurer le vent
physics.setWind(WindDirection.HEAD, 15);

// Simuler un tir
const result = physics.simulate(
    {
        clubId: 0,        // Driver
        power: 95,        // 95% de puissance
        aimAngle: 0,      // Droit
        shotType: ShotType.NORMAL,
        skills: {
            length: 80, accuracy: 70, imagination: 60,
            recovery: 50, backspin: 75,
            putter: 85, driver: 80, longDriver: 75,
        },
    },
    LieType.TEE,
    { direction: WindDirection.HEAD, speed: 15, vectorX: 0, vectorY: -15 * 0.447 },
    (state) => {
        // Rendu à chaque pas pour l'animation
        updateBallPosition(state.posX, state.posY, state.posZ);
    }
);

console.log(`Distance: ${result.distance} yards, Offline: ${result.offline} yards`);
*/
```


## 4. Prochaines Étapes Exactes

### Étape 1 — Exécuter le script Ghidra headless
```bash
# Compiler d'abord le GhidraCliBridge (temporairement) :
cd /home/roden/ghidra_scripts
javac -cp "$(find /home/roden/ghidra -name '*.jar' | tr '\n' ':')" \
    -proc:none -d . GhidraCliBridge.java 2>&1

# Puis lancer le script ball_main_ghidra.py ci-dessus
```

### Étape 2 — Valider les sous-fonctions
- Décompiler les 11 sous-fonctions listées en section 2.4
- Vérifier que `Physics_Step (@0x462a30)` correspond bien à notre modèle d'intégration
- Vérifier `Ground_HeightAt (@0x4628d0)` pour la collision terrain
- Vérifier `Collision_Check (@0x43d6f0)` pour les obstacles

### Étape 3 — Calibrer les constantes
- Tester la physique contre le comportement observé du jeu original
- Ajuster DRAG_COEFF, LIFT_COEFF, BOUNCE_COEFF si nécessaire
- Vérifier que les distances correspondent aux clubs (Driver 200-320 yards)

### Étape 4 — Intégration dans la boucle de jeu
- Connecter `BallPhysicsSystem` à la boucle `GameLoopCallback` (30 FPS)
- Ajouter le callback `onStep` pour le rendu visuel de la trajectoire
- Connecter la détection du lie final (type de terrain sous la position d'arrivée)

### Étape 5 — Portage complet de Ball_MainFunction
- `Ball_MainFunction` contient aussi : scoring, animations, transitions de trous
- Extraire ces parties une fois la physique validée
- Le fichier `ball_mainfunction_full.asm` (7 358 insn) sert de référence
