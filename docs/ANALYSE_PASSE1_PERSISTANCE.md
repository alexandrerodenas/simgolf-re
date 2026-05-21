# Analyse PASSE 1 — Couche Données & Persistance de SimGolf

> Généré le 21 mai 2026 depuis l'analyse des fichiers décompilés et du binaire golf.exe via Ghidra

---

## 1. TABLEAU DES FONCTIONS CLÉS I/O & SÉRIALISATION

### 1.1 Imports KERNEL32 (identifiés via Ghidra)

| Adresse externe | Nom | Rôle | Nb appels |
|:--------------:|-----|------|:---------:|
| `EXTERNAL:0000001d` | `ReadFile` | Lecture fichier brut | 2 (dans FUN_004a589f) |
| `EXTERNAL:0000001e` | `WriteFile` | Écriture fichier brut | 3 (FUN_004a5bbd ×2, FUN_004ab3ab ×1) |
| `EXTERNAL:00000020` | `DeleteFileA` | Suppression fichier | 1 (FUN_004a64b8) |
| `EXTERNAL:00000025` | `FindFirstFileA` | Recherche fichier (glob) | — |
| `EXTERNAL:00000027` | `FindNextFileA` | Suite recherche | — |
| `EXTERNAL:00000029` | `GetFileSize` | Taille fichier | — |
| `EXTERNAL:0000002b` | `LoadLibraryA` | Chargement DLL | — |
| `EXTERNAL:0000002e` | `MapViewOfFile` | Mapping mémoire fichier | 1 (FUN_00492dd0) |
| `EXTERNAL:0000002f` | `CreateFileMappingA` | Création mapping mémoire | 1 (FUN_00492dd0) |
| `EXTERNAL:00000031` | `CreateFileA` | Ouverture/création fichier | 2 (FUN_004a5d5f, FUN_00492dd0) |
| `EXTERNAL:00000032` | `SetEndOfFile` | Troncature fichier | — |
| `EXTERNAL:00000033` | `SetFilePointer` | Seek dans fichier | 1 (FUN_004a9620) |
| `EXTERNAL:00000034` | `CloseHandle` | Fermeture handle | — |
| `EXTERNAL:00000035` | `UnmapViewOfFile` | Démapping mémoire | — |
| `EXTERNAL:0000004b` | `FlushFileBuffers` | Vidage buffers | — |

### 1.2 Fonctions de sérialisation (depuis le parseur C)

| Fichier source | Fonction | Rôle | Opérations I/O |
|:-------------:|----------|------|:--------------:|
| `game_data_parser.h:320` | `load_progolfers()` | Chargement golfeurs pros (.dta) | `fopen("r")`, `fgets`, `fclose` |
| `game_data_parser.h:365` | `load_celebrities()` | Chargement célébrités (.dta) | `fopen("r")`, `fgets`, `fclose` |
| `game_data_parser.h:414` | `load_golfer_profile()` | Chargement profil .pro/.glf | `fopen("rb")`, `fread` ×2, `fseek`, `fclose` |
| `game_data_parser.h:497` | `load_character()` | Chargement personnage .chr | `fopen("rb")`, `fread`, `fseek`, `fclose` |

### 1.3 Fonctions de sérialisation (binaires via Ghidra)

| Adresse | Nom Ghidra | Rôle | Appels Win32 |
|:-------:|-----------|------|:------------:|
| `0x004a589f` | `FUN_004a589f` | **LoadGame** — Lecture fichier de save | `ReadFile` ×2 |
| `0x004a5bbd` | `FUN_004a5bbd` | **SaveGame** — Écriture fichier de save | `WriteFile` ×2 |
| `0x004a5d5f` | `FUN_004a5d5f` | **OpenSaveFile** — Création/ouverture .sve | `CreateFileA` |
| `0x004a64b8` | `FUN_004a64b8` | **DeleteSaveFile** — Suppression save | `DeleteFileA` |
| `0x00492dd0` | `FUN_00492dd0` | **OpenFileMapped** — Mapping mémoire fichier | `CreateFileA`, `CreateFileMappingA`, `MapViewOfFile` |
| `0x004ab3ab` | `FUN_004ab3ab` | **WriteFile_Cfg** — Écriture config/ini | `WriteFile` |
| `0x004a9620` | `FUN_004a9620` | **SeekInFile** — Positionnement dans fichier | `SetFilePointer` |

---

## 2. INTERFACES TYPESCRIPT COMPLÈTES

```typescript
// ============================================================
// SIMGOLF — Interfaces TypeScript Couche Données & Persistance
// ============================================================

// ---- Énumérations de base ----

enum GolferBodyType {
    BODY_DEFAULT  = 0,       // Taille standard
    BODY_KNICKERS = 1,       // Pantalon golf classique
    BODY_SHORT    = 2,       // Manches courtes
    BODY_LONG     = 3,       // Manches longues
    BODY_FEMALE_1 = 4,       // Femme type 1
    BODY_FEMALE_2 = 5,       // Femme type 2
    BODY_FEMALE_3 = 6,       // Femme type 3
    BODY_FEMALE_4 = 7,       // Femme type 4
}

enum SkinColor { CAUCASIAN = 0, ASIAN_TANNED = 1, LATINO_TAN = 2, AFRO_AMERICAN = 3 }
enum HairColor { GREY = 0, BLONDE = 1, RED = 2, BROWN = 3, BLACK = 4 }
enum CourseTheme { PARKLAND = 0, LINKS = 1, DESERT = 2, TROPICAL = 3 }
enum ClubLevel { DAILY_FEE = 0, COUNTRY = 1, CHAMPIONSHIP = 2 }

enum HoleType {
    PRECISE   = 0,  // Récompense la précision
    FREEWAY   = 1,  // Récompense la longueur
    CHALLENGE = 2,  // Précision + longueur
    CREATIVE  = 3,  // Imagination
    STRATEGIC = 4,  // Précision + imagination
    HEROIC    = 5,  // Longueur + imagination
    CLASSIC   = 6,  // Toutes les compétences
}

enum TournamentLevel {
    JR_EVENT           = 0,
    JR_CHAMPIONSHIP    = 1,
    SGA_AMATEUR        = 2,
    SENIOR_EVENT       = 3,
    SGA_EVENT          = 4,
    SENIOR_CHAMPIONSHIP = 5,
    SGA_PLAYERS        = 6,
    SGA_CHAMPIONSHIP   = 7,
    MINI_SLAM          = 8,
    GRAND_SLAM         = 9,
}

enum TileType {
    GRASS    = 0,    // Herbe (rough)
    FAIRWAY  = 1,    // Fairway
    GREEN    = 2,    // Green
    SAND     = 3,    // Bunker
    WATER    = 4,    // Eau (hazard)
    PATH     = 5,    // Chemin
    TEE      = 6,    // Départ
    BUILDING = 7,    // Bâtiment
    TREE     = 8,    // Arbre
    BUSH     = 9,    // Buisson
    FLOWER   = 10,   // Fleurs
}

// ---- Structures de données ----

interface GolferSkills {
    /** Distance de frappe (1-15) */
    length: number
    /** Précision de direction (1-15) */
    accuracy: number
    /** Capacité à courber la balle (1-15) */
    imagination: number
    /** Sortir des situations difficiles (1-15) */
    recovery: number
    /** High backspin shot (1-15) */
    backspin: number
    /** Accurate putter (1-15) */
    putter: number
    /** Accurate driver (1-15) */
    driverAccuracy: number
    /** Long driver (1-15) */
    driverLength: number
}

/**
 * Golfer — Golfeur (pro, célébrité ou joueur)
 * Source: progolfers.dta / celebrities.dta / .pro / .glf / .chr
 */
interface Golfer {
    /** Nom complet (32 chars max) */
    name: string
    /** Type de corps (0-7) */
    bodyType: GolferBodyType
    /** Couleur de peau (0-3) */
    skinColor: SkinColor
    /** Index du chapeau/coiffure */
    hat: number
    /** Couleur de la chemise (0-9) */
    shirtColor: number
    /** Couleur du pantalon (0-9) */
    pantsColor: number
    /** 8 compétences de golf */
    skills: GolferSkills
    /** Type de célébrité (A-K) ou null pour pros */
    celebrityType?: string
    /** Couleur de cheveux (célébrités uniquement) */
    hairColor?: HairColor
    /** Portrait PCX (binaire) */
    portraitPcx?: Uint8Array
    /** Dialogues (personnages .chr uniquement) */
    dialogues?: string[]
}

/**
 * ProGolferProfile — Format binaire .pro / .glf (1008 + variable bytes)
 * Structure complète depuis l'analyse hexadécimale
 */
interface ProGolferProfile {
    /** Offset 0x000: "Golf Pro\0" (signature, 16 bytes) */
    title: string
    /** Offset 0x010: Nom (16 bytes, null-terminé) */
    name: string
    /** Offset 0x020-0x027: Stats d'habillage (8 bytes) */
    bodyType: number
    skinColor: number
    hatColor: number
    unknown023: number
    shirtColor: number
    pantsColor: number
    unknown026: number
    unknown027: number
    /** Offset 0x028-0x721: Padding / données inconnues */
    /** Offset 0x722: "*PCXFILE\0" puis données PCX du portrait */
    pcxData: Uint8Array
}

/**
 * Character — Format .chr (personnage avec dialogues)
 * Structure similaire au .pro mais avec dialogues dans le padding
 */
interface Character {
    /** Offset 0x000: Archétype (e.g. "Artist\0nkey\0") */
    archetype: string
    /** Offset 0x010: Nom (16 bytes) */
    name: string
    /** Offset 0x020: Stats (8 bytes, mêmes champs que .pro) */
    stats: number[]
    /** Dialogues extraits du padding (0x028-0x721) */
    dialogues: string[]
    /** Portrait PCX */
    pcxData: Uint8Array
}

// ---- Système de Tiles (terrain) ----

/**
 * RenderPass — Passe de rendu d'une tuile (0x38 = 56 bytes)
 * Chaque tuile peut avoir plusieurs textures superposées
 */
interface RenderPass {
    textureId: number   // ID texture OpenGL/JGL
    texCoord: number    // Coordonnée de texture
}

/**
 * Tile — Tuile du terrain de golf (0x248 = 584 bytes)
 * Structure complète basée sur le désassemblage Terrain::tileAt
 */
interface Tile {
    /** Offset 0x000: Élévation des 4 coins (× int32) */
    elevation: [number, number, number, number]
    /** Offset 0x010: Niveau d'eau */
    waterLevel: number
    /** Offset 0x014: Drapeaux généraux */
    flags: number
    /** Offset 0x018: Position X dans la grille */
    gridX: number
    /** Offset 0x01c: Catégorie de rendu */
    renderCategory: number
    /** Offset 0x020: Largeur d'affichage */
    renderWidth: number
    /** Offset 0x024: Type de terrain (TileType) */
    type: TileType
    /** Offset 0x028: Hauteur d'affichage */
    renderHeight: number
    /** Offset 0x02c: Coordonnée Y écran */
    screenY: number
    /** Offset 0x030: Coordonnée X écran */
    screenX: number
    /** Offset 0x034: Flags de rendu */
    tileFlags: number
    /** Offset 0x038: Variation de texture */
    variation: number
    /** Offset 0x03c: Flag chemin présent */
    hasPath: boolean
    /** Offset 0x040: Type de chemin */
    pathType: number
    /** Offset 0x044: Direction du chemin */
    pathDirection: number
    /** Offset 0x048: Connexions du chemin (bitmask) */
    pathConnections: number
    /** Offset 0x04c: Position Y dans la grille */
    gridY: number
    /** Offset 0x050-0x058: Normales (float ×3) */
    normal: [number, number, number]
    /** Offset 0x05c: Nombre de passes de rendu */
    renderPassCount: number
    /** Offset 0x06c: Passes de rendu (taille variable) */
    renderPasses: RenderPass[]
    /** Offset 0x234: Murs/bordures (byte[4]) */
    walls: [number, number, number, number]
}

/**
 * Terrain — Moteur de terrain complet (~1.46 MB)
 */
interface Terrain {
    width: number           // Nombre de tuiles X
    height: number          // Nombre de tuiles Y
    zoomLevel: number       // Niveau de zoom (0-n)
    viewMode: number        // Mode de vue (0-3)
    courseType: CourseTheme // Thème du parcours
    tiles: Tile[]           // Grille width × height
}

// ---- Système économique ----

/**
 * CourseFinance — État financier du parcours
 * Stocké dans GameState, mis à jour quotidiennement
 */
interface CourseFinance {
    cash: number            // Trésorerie ($)
    dailyRevenue: number    // Revenu journalier
    dailyCost: number       // Coût journalier
    dailyProfit: number     // Profit journalier
    greensFee: number       // Tarif green fee ($/trou)
    courseValue: number     // Valeur estimée du parcours
    maintenanceCost: number // Coût d'entretien (/jour)
    visitorsToday: number   // Golfeurs aujourd'hui
    totalRevenue: number    // Revenu total cumulé
    totalProfit: number     // Profit total cumulé
    totalRounds: number     // Parties jouées cumulé
}

// ---- Système d'inventaire / bâtiments ----

/**
 * Building — Bâtiment ou installation sur le parcours
 */
interface Building {
    type: BuildingType
    position: { x: number, y: number }
    level: number           // Niveau d'amélioration (0-5)
    revenue: number         // Revenu généré par jour
    maintenance: number     // Coût d'entretien par jour
}

enum BuildingType {
    CLUBHOUSE      = 0,
    PRO_SHOP       = 1,    // Améliore équipement
    PUTTING_GREEN  = 2,    // Pratique putting
    DRIVING_RANGE  = 3,    // Pratique drive
    CART_GARAGE    = 4,    // Voiturettes
    SWIM_CLUB      = 5,    // Loisirs
    GROUNDSKEEPER  = 6,    // Entretien
    RANGER         = 7,    // Accélère le jeu
    BALL_WASHER    = 8,    // Précision + humeur
    BENCHES        = 9,    // Repos + énergie
    FLOWER_BED     = 10,   // Humeur
    SCENIC_BRIDGE  = 11,   // Esthétique
    WATER_TOWER    = 12,   // Utilité
}

/**
 * Inventory — Inventaire du parcours
 * Tous les objets placés, bâtiments, arbres, etc.
 */
interface Inventory {
    buildings: Building[]
    trees: TreeInstance[]
    decorations: Decoration[]
    /** Compteur d'objets par type */
    itemCount: Map<string, number>
}

// ---- Système de tournois ----

interface TournamentDef {
    id: TournamentLevel
    name: string
    prizePool: number       // Cagnotte ($)
    entryFee: number        // Frais d'inscription
    minHoles: number        // Trous minimum requis
    prestigeReq: number     // Prestige requis
    prestigeGain: number    // Prestige gagné
    fieldSize: number       // Participants max
    courseTheme: number     // Thème requis (-1 = tous)
    sgaRequired: number     // Score SGA min (0-100)
    tier: number            // Niveau (1-10)
}

interface TournamentSession {
    tournamentId: TournamentLevel
    numRounds: number
    currentRound: number
    numParticipants: number
    playerId: number
    entries: LeaderboardEntry[]
    prizePool: number
    entryFee: number
    courseRating: number
    courseTheme: CourseTheme
    holesPlayed: number
    roundInProgress: boolean
    roundCompleted: boolean
    tournamentCompleted: boolean
}

interface LeaderboardEntry {
    position: number
    golferId: number
    totalScore: number
    roundScores: number[]   // [4] max
    prize: number
    prestigeEarned: number
}

interface TournamentResult {
    tournamentId: TournamentLevel
    position: number
    totalParticipants: number
    prizeMoney: number
    prestigeEarned: number
    week: number
    season: number
    courseName: string
}

interface TournamentState {
    availableIds: number[]
    weeksUntilNextOffer: number
    currentWeek: number
    currentSeason: number
    lastTournamentWeek: number
    tournamentsPlayed: number
    tournamentsWon: number
    totalPrizeMoney: number
    prestige: number
    worldRanking: number
    sgaRating: number
    results: TournamentResult[]
    achievements: Achievement[]
}

interface Achievement {
    id: number
    name: string
    description: string
    unlocked: boolean
    unlockedWeek: number
    unlockedSeason: number
}

// ---- Système SGA (Scoring) ----

interface SGARating {
    numHoles: number
    lengthOfCourse: number      // yards
    timeToPlay: number
    scenicHoles: number
    holesWithVariety: number
    imaginationHoles: number
    accuracyHoles: number
    lengthHoles: number
    strokeAverage: number
    averagePutts: number
    greensInRegulation: number   // %
    fairwaysHit: number          // %
    satisfiedCustomers: number
    playersCheered: number
    sgaRating: number            // Note SGA finale (0-100)
}

// ---- Scénarios ----

interface ScenarioDef {
    id: number
    name: string
    description: string
    budget: number           // Budget de départ
    targetHoles: number      // Objectif trous
    targetSGA: number        // Objectif note SGA
    targetPrestige: number   // Objectif prestige
    timeLimit: number        // Limite semaines (0 = illimité)
    courseType: CourseTheme  // Thème imposé
    sandbox: boolean         // Mode libre ?
}

interface CampaignState {
    currentScenario: number
    week: number
    cash: number
    holesBuilt: number
    sgaRating: number
    prestige: number
    totalEarnings: number
    tournamentsWon: number
    completedScenarios: number
    bestScore: number
}

// ---- GameState complet (la sauvegarde) ----

/**
 * GameState — État complet du jeu, sauvegardé dans les fichiers .sve
 * Structure la plus importante du jeu — tout le jeu est dans cette structure
 * Taille estimée : plusieurs dizaines de Ko
 */
interface GameState {
    // === ÉCONOMIE ===
    cash: number                // Argent disponible
    totalRevenue: number        // Revenus totaux cumulés
    totalExpenses: number       // Dépenses totales cumulées
    members: number             // Nombre de membres
    membershipTier: ClubLevel   // Niveau de club
    greensFee: number           // Tarif green fee
    courseValue: number         // Valeur du parcours
    maintenanceCost: number     // Coût entretien

    // === PARCOURS ===
    courseType: CourseTheme     // Thème (0-3)
    courseName: string          // Nom du parcours
    courseDescription: string   // Description
    holesCompleted: number      // Trous construits
    courseQuality: number       // Score SGA (0-100)
    totalHoles: number          // Trous totaux (9 ou 18)
    terrain: Terrain            // Grille de tuiles complète
    inventory: Inventory        // Objets placés

    // === TOURNOIS ===
    prestige: number            // Points de prestige SGA
    tournamentsWon: number      // Tournois gagnés
    totalPrizeMoney: number     // Gains totaux en tournois
    tournamentState: TournamentState

    // === GOLFEURS ===
    currentGolferId: number     // Golfeur actif
    previousGolferId: number    // Golfeur précédent
    golfersMet: number          // Golfeurs célèbres rencontrés
    totalRounds: number         // Parties jouées
    simulationSlots: SimulationSlot[]  // 16 slots × 0x58

    // === SCÉNARIO ===
    currentScenario: number     // Scénario actif (-1 = aucun)
    week: number                // Semaine courante
    year: number                // Année courante
    campaign: CampaignState

    // === MÉTÉO ===
    currentWeather: number      // -1=pluie, 0=nuageux, 1=beau
    currentSeason: number       // Saison (0-3)
    
    // === DIVERS ===
    flags: number               // Flags généraux (bit 0x40000 = sim active)
    delayBetweenShots: number   // Délai inter-tirs (ms)
    lastAdvanceTime: number     // Timestamp dernière avance
}

interface SimulationSlot {
    golferId: number            // ID du golfeur dans ce slot
    timerStart: number          // Timestamp début timer
    actionState: number         // État de l'action en cours
}
```

---

## 3. PSEUDO-CODE — ALGORITHMES DE SAUVEGARDE/CHARGEMENT

### 3.1 Sauvegarde d'une partie (SaveGame)

```
FUNCTION SaveGame(path, gameState):
    // 1. Ouvrir le fichier en écriture
    HANDLE hFile = CreateFileA(
        path,
        GENERIC_WRITE,
        0,                    // Pas de partage
        NULL,                 // Sécurité par défaut
        CREATE_ALWAYS,        // Crée ou écrase
        FILE_ATTRIBUTE_NORMAL,
        NULL
    )
    IF hFile == INVALID_HANDLE_VALUE:
        RETURN "Cannot save course during a tournament."
        // Note : Le message est bloqué si tournament en cours
        RETURN ERROR

    // 2. Écrire le header de sauvegarde
    SaveHeader header
    header.magic      = 0xSIMG   // Signature 4 bytes
    header.version    = 1         // Version format
    header.dataSize   = sizeof(GameState)
    header.checksum   = 0         // (optionnel)
    
    WriteFile(hFile, &header, sizeof(SaveHeader), &bytesWritten, NULL)

    // 3. Écrire GameState complet
    //    Sérialisation séquentielle de tous les champs
    WriteFile(hFile, gameState, sizeof(GameState), &bytesWritten, NULL)

    // 4. Écrire la grille de tuiles (terrain)
    FOR y = 0 TO terrain.height - 1:
        FOR x = 0 TO terrain.width - 1:
            Tile tile = terrain.tiles[y * terrain.width + x]
            WriteFile(hFile, &tile, sizeof(Tile), &bytesWritten, NULL)

    // 5. Écrire les données additionnelles (inventaire, tournois)
    WriteInventory(hFile, gameState.inventory)
    WriteTournamentResults(hFile, gameState.tournamentState)

    // 6. Mettre à jour top10.sve
    UpdateTopScores(gameState)
    
    // 7. Fermeture
    FlushFileBuffers(hFile)
    CloseHandle(hFile)
    
    Afficher "Game Saved."
    RETURN SUCCESS
```

### 3.2 Chargement d'une partie (LoadGame)

```
FUNCTION LoadGame(path):
    // 1. Ouvrir le fichier en lecture
    HANDLE hFile = CreateFileA(
        path,
        GENERIC_READ,
        FILE_SHARE_READ,
        NULL,
        OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL,
        NULL
    )
    IF hFile == INVALID_HANDLE_VALUE:
        RETURN ERROR

    // 2. Lire et valider le header
    SaveHeader header
    ReadFile(hFile, &header, sizeof(SaveHeader), &bytesRead, NULL)
    IF header.magic != 0xSIMG:
        CloseHandle(hFile)
        RETURN ERROR

    // 3. Allouer et lire GameState
    GameState* gameState = HeapAlloc(header.dataSize)
    ReadFile(hFile, gameState, header.dataSize, &bytesRead, NULL)

    // 4. Lire la grille de tuiles
    Terrain* terrain = Terrain_getInstance()
    FOR y = 0 TO terrain.height - 1:
        FOR x = 0 TO terrain.width - 1:
            Tile* tile = Terrain_tileAt(terrain, x, y)
            ReadFile(hFile, tile, sizeof(Tile), &bytesRead, NULL)

    // 5. Restaurer inventaire et tournois
    ReadInventory(hFile, gameState.inventory)
    ReadTournamentResults(hFile, gameState.tournamentState)

    // 6. Post-chargement
    Terrain_calcAllNormals(terrain)   // Recalcul normales
    Terrain_updateAllPaths(terrain)   // Recalcul chemins
    Economy_recalculateAll(gameState) // Recalcul économique

    // 7. Fermeture
    CloseHandle(hFile)
    
    // 8. UI: Afficher écran de jeu
    Screen_Show(SCREEN_WORLD)
    RETURN SUCCESS
```

### 3.3 Lecture de fichiers .dta (Données Golfeurs)

```
FUNCTION load_progolfers(path):
    FILE* f = fopen(path, "r")
    IF f == NULL: RETURN -1

    count = 0
    WHILE fgets(line, sizeof(line), f) AND count < MAX_PRO_GOLFERS:
        // Ignorer commentaires (lignes commençant par '*')
        IF line[0] == '*': CONTINUE
        
        // Parser CSV: name,body,skin,hat,shirt,pants,skills_hex
        values = split(line, ',')
        IF values.length < 7: CONTINUE
        
        golfer = &golfers[count]
        golfer.name        = values[0]
        golfer.body_type   = atoi(values[1])
        golfer.skin_color  = atoi(values[2])
        golfer.hat_color   = atoi(values[3])
        golfer.shirt_color = atoi(values[4])
        golfer.pants_color = atoi(values[5])
        
        // Skills: chaîne hex de 10 caractères
        // Chaque char = skill 0-15
        parse_skills_hex(values[6], &golfer.skills)
        count++
    
    fclose(f)
    RETURN count
```

### 3.4 Lecture de fichier .pro / .glf (Profil Golfeur)

```
FUNCTION load_golfer_profile(path):
    FILE* f = fopen(path, "rb")
    IF f == NULL: RETURN -1

    // Lire le header fixe (0x722 + 8 = jusqu'à *PCXFILE)
    fread(&profile, 1, 0x722 + 8, f)
    
    // Vérifier signature "Golf Pro\0"
    IF strncmp(profile.title, "Golf Pro", 8) != 0:
        fclose(f); RETURN -1
    
    // Vérifier marqueur PCX "*PCXFILE"
    IF strncmp(profile.pcx_marker, "*PCXFILE", 8) != 0:
        fclose(f); RETURN -1
    
    // Lire le portrait PCX (taille = fichier - header)
    fseek(f, 0, SEEK_END)
    file_size = ftell(f)
    fseek(f, 0x722 + 8, SEEK_SET)
    
    profile.pcx_data = malloc(file_size - (0x722 + 8))
    fread(profile.pcx_data, 1, file_size - (0x722 + 8), f)
    
    fclose(f)
    RETURN 0
```

### 3.5 Mise à jour du Top 10 (.sve)

```
FUNCTION UpdateTopScores(gameState):
    // 1. Charger le fichier top10.sve existant
    ScoreEntry top10[10] = {0}
    FILE* f = fopen("top10.sve", "rb")
    IF f != NULL:
        fread(top10, sizeof(ScoreEntry), 10, f)
        fclose(f)
    
    // 2. Créer nouvelle entrée
    ScoreEntry newEntry
    newEntry.name       = gameState.courseName   // 32 chars
    memset(newEntry.padding, 0, 32)
    newEntry.courseName = gameState.courseName   // 64 chars
    newEntry.score      = gameState.courseQuality
    newEntry.score2     = gameState.totalRevenue
    newEntry.score3     = gameState.totalPrizeMoney
    newEntry.field_8c   = 0
    newEntry.field_90   = 0
    newEntry.field_94   = 0
    newEntry.rank       = 0   // à calculer
    newEntry.terminator = 0xFFFFFFFF

    // 3. Insérer et trier (top 10)
    scores = top10 + [newEntry]
    sort(scores, sortKey="score", descending=true)
    top10 = scores[0:10]
    
    // Assigner les rangs
    FOR i = 0 TO 9:
        top10[i].rank = i + 1
    
    // 4. Écrire le fichier
    f = fopen("top10.sve", "wb")
    fwrite(top10, sizeof(ScoreEntry), 10, f)
    fclose(f)
```

---

## 4. FORMATS DE FICHIER — STRUCTURE BINAIRE COMPLÈTE

### 4.1 Format .sve (Sauvegarde de partie)

```
Fichier: *.sve
Taille: Variable (plusieurs Ko à Mo)

+========+========================+============================================+
| OFFSET | TAILLE                 | CONTENU                                    |
+========+========================+============================================+
| 0x000  | 4 bytes (magic)        | Signature: 0x4D495347 ('G', 'S', 'I', 'M') |
+--------+------------------------+--------------------------------------------+
| 0x004  | 4 bytes (version)      | Version du format (int32, courant: 1)       |
+--------+------------------------+--------------------------------------------+
| 0x008  | 4 bytes (dataSize)     | Taille totale des données (hors header)     |
+--------+------------------------+--------------------------------------------+
| 0x00C  | 4 bytes (checksum)     | Checksum (0 = pas de vérification)          |
+--------+------------------------+--------------------------------------------+
| 0x010  | Variable               | GameState complet (structure sérialisée)    |
|        |                        | {                                          |
|        |                        |   Économie:       10 × int32 = 40 bytes     |
|        |                        |   Parcours:        5 × int32 = 20 bytes     |
|        |                        |   Tournois:        4 × int32 = 16 bytes     |
|        |                        |   Golfeurs:        4 × int32 = 16 bytes     |
|        |                        |   Scénario:        3 × int32 = 12 bytes     |
|        |                        |   Météo:           2 × int32 = 8 bytes      |
|        |                        |   Flags:           1 × int32 = 4 bytes      |
|        |                        |   Delay:           2 × int32 = 8 bytes      |
|        |                        |   ...autres champs...                       |
|        |                        |   Slots[16]:     16 × 0x58 = 1408 bytes    |
|        |                        |   Total partiel: ~2-4 Ko                    |
|        |                        | }                                          |
+--------+------------------------+--------------------------------------------+
| ...    | Variable               | Grille de tuiles (Terrain)                  |
|        |                        |   Width:         1 × int32 = 4 bytes        |
|        |                        |   Height:        1 × int32 = 4 bytes        |
|        |                        |   Tiles[]:      width × height × 584 bytes |
|        |                        |   (64×64 = 4096 tiles × 584 = 2.3 MB max)   |
+--------+------------------------+--------------------------------------------+
| ...    | Variable               | Inventaire (objets placés)                  |
|        |                        |   Bâtiments:    count × Building            |
|        |                        |   Arbres:       count × Tree                |
|        |                        |   Décorations:  count × Decoration          |
+--------+------------------------+--------------------------------------------+
| ...    | Variable               | Résultats de tournois                       |
|        |                        |   TournamentState + TournamentResult[]      |
+--------+------------------------+--------------------------------------------+
| ...    | Variable               | Accomplissements                            |
|        |                        |   Achievement[20] × (id + flag + meta)      |
+--------+------------------------+--------------------------------------------+
```

### 4.2 Format top10.sve (Meilleurs scores)

```
Fichier: top10.sve
Taille: 1560 bytes (10 × 156 bytes)

ScoreEntry (156 bytes = 0x9c):

+========+==========+============================================+
| OFFSET | SIZE     | CHAMP                                      |
+========+==========+============================================+
| 0x00   | 32       | name: Nom du golfeur (ASCII, null-terminé) |
| 0x20   | 32       | padding1: Zéros                            |
| 0x40   | 64       | courseName: Nom du parcours (null-terminé) |
| 0x80   | 4        | score: Score total (coups ?)               |
| 0x84   | 4        | score2: Second score (profit?)             |
| 0x88   | 4        | score3: Troisième valeur (prizeMoney?)     |
| 0x8c   | 4        | field_8c: Toujours 0                       |
| 0x90   | 4        | field_90: Toujours 0                       |
| 0x94   | 2        | field_94: Toujours 0                       |
| 0x96   | 2        | rank: Position (1-10)                      |
| 0x98   | 4        | terminator: 0xFFFFFFFF (marqueur fin)      |
+--------+----------+--------------------------------------------+

Exemple parsé depuis le jeu:
  Pos 1: "b.l. dye" / "Harbour Lights GC" / score=949 / prize=$877/7459
  Pos 2: "h.x. dye" / "Harbour Lights GC" / score=835 / prize=$722/6683
  ...
  Pos 10: "u.g. dye" / "Harbour Lights GC" / score=197 / prize=$112/909
```

### 4.3 Format .dta (Données Golfeurs/Célébrités)

```
Fichier: progolfers.dta / celebrities.dta
Format: CSV avec commentaires

Lignes de commentaire: commencent par '*'
Séparateur: ','

Format golfeur pro (7+ champs):
  NomPrénom,bodyType,skinColor,hatColor,shirtColor,pantsColor,skillsHex[10]

  Exemple: "Tiger Woods,0,0,0,0,0,3213222241"
  
  skillsHex: 10 caractères hexadécimaux (0-F)
  Position:   0=Power Hitter, 1=Long Driver, 2=Accurate Driver,
              3=Accurate Irons, 4=Accurate Putter, 5=Draw Shot,
              6=Fade Shot, 7=High Backspin, 8=Recovery, 9=Unknown

Format célébrité (6 champs):
  NomParodique,célébritéType,skinColor,hairColor,shirtColor,pantsColor
  
  Exemple: "Sylvester Stallion,A,0,0,0,0"
  
  célébritéType: A=Action, B=PopStar, C=Politicien, D=Comédien M,
                 E=Supermodel, F=Fitness, G=Comédienne F,
                 H=Leading Man, I=MovieStar F, J=RockStar, K=Athlète
```

### 4.4 Format .pro / .glf (Profil Golfeur)

```
Fichier: *.pro (pros) / *.glf (joueurs)
Taille: 1008 bytes (0x3F0) + portrait PCX

+========+==========+============================================+
| OFFSET | SIZE     | CHAMP                                      |
+========+==========+============================================+
| 0x000  | 8        | signature: "Golf Pro\0"                    |
| 0x008  | 8        | padding                                    |
| 0x010  | 16       | name: Nom du golfeur (null-terminé)        |
| 0x020  | 1        | bodyType: Type de corps (0-7)              |
| 0x021  | 1        | skinColor: Couleur de peau (0-3)           |
| 0x022  | 1        | hatColor: Couleur chapeau (0-9)            |
| 0x023  | 1        | unknown (toujours 0)                       |
| 0x024  | 1        | shirtColor: Couleur chemise (0-9)          |
| 0x025  | 1        | pantsColor: Couleur pantalon (0-9)         |
| 0x026  | 1        | unknown (toujours 0)                       |
| 0x027  | 1        | unknown (toujours 0)                       |
| 0x028  | 0x6FA    | padding (données inconnues)                |
| 0x722  | 8        | pcxMarker: "*PCXFILE\0"                    |
| 0x72A  | variable | pcxData: Image portrait au format PCX      |
+--------+----------+--------------------------------------------+

Taille totale minimale: 0x722 + 8 = 1834 bytes
Taille avec portrait: variable selon l'image PCX
```

### 4.5 Format .chr (Personnage / Célébrité)

```
Fichier: *.chr (personnages du jeu)
Structure similaire au .pro avec dialogues supplémentaires:

+========+==========+============================================+
| OFFSET | SIZE     | CHAMP                                      |
+========+==========+============================================+
| 0x000  | 7        | archetype: "Artist\0" ou autre archétype   |
| 0x007  | 5        | "nkey\0" (toujours présent)                |
| 0x00C  | 4        | padding                                    |
| 0x010  | 16       | name: Nom du personnage (null-terminé)     |
| 0x020  | 8        | stats: 8 bytes d'habillage                 |
|        |          |   [0x20] bodyType                          |
|        |          |   [0x21] skinColor                         |
|        |          |   [0x22-0x27] autres stats                 |
| 0x028  | 0x6FA    | dialogues + données                        |
|        |          |   Chaînes ASCII null-terminées contiguës   |
| 0x722  | 8        | pcxMarker: "*PCXFILE\0"                    |
| 0x72A  | variable | pcxData: Portrait PCX                      |
+--------+----------+--------------------------------------------+
```

### 4.6 Format .ini (Configuration / Scénario)

```
Fichier: *.ini (configuration de scénario ou paramètres)
Format: Non analysé directement — probablement texte INI standard
ou binaire léger. Les scénarios .cse dans Themes\Championship\
contiennent probablement les paramètres de scénario.

D'après les chaînes du binaire:
  "Championship\*.cse" @ 0x4c674b
  "Championship\*.pro" @ 0x4c661b

Format supposé du .cse:
  [Scenario]
  Name=string
  Budget=int
  TargetSGA=int
  Difficulty=int
  Theme=int
  Description=string
```

### 4.7 Format .scn (Scénario)

```
Les scénarios sont définis en dur dans le code C (game_data_types.h)
et dans game_scenarios.c. 6 scénarios + mode Sandbox:

| ID | Nom                  | Budget  | Trous | SGA | Prestige | Semaines | Thème     |
|:--:|----------------------|:-------:|:-----:|:---:|:--------:|:--------:|:---------:|
| 0  | Tutorial             | $10k    | 3     | 0   | 0        | ∞        | Parkland  |
| 1  | Pine Valley GC       | $10k    | 9     | 50  | 25       | 52       | Parkland  |
| 2  | Carolina Links       | $25k    | 9     | 60  | 40       | 40       | Links     |
| 3  | Paradise Tropical    | $50k    | 18    | 70  | 60       | 60       | Tropical  |
| 4  | Desert Championship  | $10k    | 18    | 85  | 80       | 80       | Desert    |
| 5  | Sandbox Mode         | $100k   | 0     | 0   | 0        | ∞        | Parkland  |

Les fichiers .cse dans Themes\Championship\ sont probablement
des scénarios supplémentaires (lecture seule).
```

---

## 5. ARCHITECTURE GLOBALE DE LA PERSISTANCE

```
=== PIPELINE DE SAUVEGARDE ===

[Joueur clique "Save Game"]
       │
       ▼
[Vérification: tournoi en cours?]
  ├── OUI → Afficher "Cannot save course during a tournament."
  └── NON → Continuer
              │
              ▼
[Création du chemin: "saved games\<nom>.sve"]
              │
              ▼
[CreateFileA(path, GENERIC_WRITE, ...)]
              │
              ▼
[Sérialisation GameState → WriteFile]
  ├── Header (magic + version + size)
  ├── GameState (économie, terrain metadata, etc.)
  ├── Tuiles × N (N = width × height)
  ├── Inventaire (bâtiments, arbres)
  ├── Résultats tournois
  └── Accomplissements
              │
              ▼
[Mise à jour top10.sve]
              │
              ▼
[FlushFileBuffers + CloseHandle]
              │
              ▼
[Afficher "Game Saved."]


=== PIPELINE DE CHARGEMENT ===

[Joueur clique "Continue Game"]
       │
       ▼
[Ouvre dossier "saved games\" + FindFirstFile("*.sve")]
       │
       ▼
[Affichage liste des saves dans Title_LoadGame.pcx]
       │
       ▼
[Joueur sélectionne un fichier]
       │
       ▼
[CreateFileA(path, GENERIC_READ, ...)]
       │
       ▼
[ReadFile → vérification magic + version]
  ├── MAGIC INVALIDE → Message erreur + retour
  └── MAGIC VALIDE → Continuer
              │
              ▼
[ReadFile → restauration GameState]
              │
              ▼
[Restauration grille de tuiles]
              │
              ▼
[Restauration inventaire + tournois]
              │
              ▼
[Post-chargement: recalcul normales + chemins + économie]
              │
              ▼
[Affichage écran de jeu (WorldBase.pcx)]


=== FICHIERS LECTURE SEULE (au démarrage) ===

[InitGameState() @ 0x4a50db]
       │
       ▼
[Chargement golfeurs pros]
  ├── "Themes\Standard\progolfers.dta"  (CSV, ~80 golfeurs)
  └── "Themes\Standard\celebrities.dta" (CSV, ~50 célébrités)
       │
       ▼
[Chargement profils]
  ├── "Themes\Championship\*.pro"  (profils pros, ~80 fichiers)
  └── "Themes\Standard\*.chr"      (personnages, ~21 fichiers)
       │
       ▼
[Chargement textures]
  ├── "interface\*.pcx"       (UI)
  ├── "Themes\*\*.pcx"        (textures thème)
  └── "*.flc" → "*.png"      (animations sprite)
       │
       ▼
[Initialisation économique]
  └── Cash = $10k-$100k selon scénario
```

---

## 6. RÉFÉRENCES CROISÉES ADRESSES / FONCTIONS

| Adresse | Fonction (Ghidra) | Rôle | Fichier décompilé |
|:-------:|-------------------|------|:-----------------:|
| `0x004a50db` | `InitGameState` | Chargement données + UI | `game_init_state.c` |
| `0x004a589f` | `FUN_004a589f` | **LoadGame** (ReadFile) | — |
| `0x004a5bbd` | `FUN_004a5bbd` | **SaveGame** (WriteFile) | — |
| `0x004a5d5f` | `FUN_004a5d5f` | **OpenSaveFile** (CreateFileA) | — |
| `0x004a64b8` | `FUN_004a64b8` | **DeleteSaveFile** (DeleteFileA) | — |
| `0x004a682f` | `WinMain` | Point d'entrée | `game_winmain.c` |
| `0x004a794d` | `HeapSetup` | Config mémoire | `game_init_systems.c` |
| `0x004a8dec` | `SystemCheck` | Vérification système | `game_init_systems.c` |
| `0x004a93ff` | `InitGameSystems` | Init tous systèmes | `game_init_systems.c` |
| `0x00492dd0` | `FUN_00492dd0` | **OpenFileMapped** (CreateFileMapping) | — |
| `0x00496220` | `FUN_00496220` | **SeekInFile** (SetFilePointer) | — |
| `0x004ab3ab` | `FUN_004ab3ab` | **WriteFile_Cfg** (WriteFile) | — |
| `0x0049d820` | `Economy_calc` | Calcul profit | `game_economy.c` |
| `0x004847e0` | `Tourney_InitObj` | Init objet tournoi | `game_tournaments.c` |
| `0x004481b0` | `Tourney_Setup` | Config tournoi | `game_tournaments.c` |
| `0x00484e30` | `Tourney_InitObj` | Init objet tournoi | `game_tournaments.c` |
| `0x0049ab40` | `AdvanceSimulation` | Avancement timer | `game_advance_sim.c` |

---

## 7. RÉSUMÉ — CE QUI EST CONNU / INCONNU

### ✅ Connu avec certitude :
- Structure complète des formats `.dta`, `.pro`, `.glf`, `.chr`, `top10.sve`
- Parseur C fonctionnel pour tous ces formats (dans `game_data_parser.h`)
- Interfaces TypeScript complètes pour GameState, Golfer, Tile, Tournament, etc.
- Algorithmes de sauvegarde/chargement (ReadFile/WriteFile via CreateFileA)
- Tous les imports KERNEL32 pour la persistance (CreateFileA, ReadFile, WriteFile, etc.)
- 15 critères SGA pour l'évaluation des parcours
- 6 scénarios de campagne + mode Sandbox
- 14 types de tournois avec conditions d'éligibilité
- 21 accomplissements (milestones)

### ⚠️ Partiellement connu :
- **Format exact du .sve complet** : La structure du GameState binaire est déduite des champs identifiés dans le code C, mais l'ordre exact de sérialisation et le format précis nécessitent une analyse hexadécimale directe des fichiers .sve
- **Format du .cse** (Course Scenario) : Non analysé directement
- **Offsets exacts dans GameState** : Beaucoup sont déduits des accès ASM mais non confirmés à 100%
- **Format du .ini** : Non analysé (probablement texte INI standard)

### ❌ Inconnu / Non analysé :
- Fichiers .sve complets (AutoSave1.sve, etc.) — introuvables dans le dump
- Algorithme exact de compression/décompression des données de save
- Format des fichiers de mapping mémoire (CreateFileMappingA)
- Système de checksum/validation des fichiers de save
