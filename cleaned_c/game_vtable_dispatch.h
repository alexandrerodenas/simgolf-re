/**
 * game_vtable_dispatch.h
 * Décompilation des fonctions dispatch vtable (CoursEngine & TileGrid)
 *
 * ═══════════════════════════════════════════════════════════
 *  CHAÎNE DE DISPATCH VTABLE
 * ═══════════════════════════════════════════════════════════
 *
 * TileGrid_Dispatch (0x485e80) :
 *   [esi+4] → gridEngine (5) → gridEngine->vtable[0x14] → ???
 *
 *   this->grid est initialisé depuis le global BSS 0x83fe78.
 *   Ce global est peuplé à l'initialisation (probablement par
 *   un constructeur statique ou Terrain.dll).
 *   La vtable de gridEngine est 0x4baa14, mais l'entrée
 *   [5] (0x14) est un thunk d'héritage multiple :
 *     0x481b40: sub ecx, 0x274; jmp 0x480580
 *   → Ajuste this de -0x274 pour la classe de base
 *   → Saute à 0x480580 (destructeur de base)
 *
 *   CECI SIGNIFIE : la fonction "dispatch" réelle est ailleurs.
 *   Voir le Système de Pointeurs Globaux ci-dessous.
 *
 * CoursEngine_Update (0x494f00) :
 *   [esi+4] → simulationEngine → simEngine->vtable[0x1c] → ???
 *   [esi+4] → simulationEngine → simEngine->vtable[0xcc] → getBounds
 *
 *   SimulationEngine créé dans le constructeur de CoursEngine
 *   (adresse à trouver — pas la même hiérarchie que TileGrid).
 *   Utilise vtable[0x1c] pour le dispatch buffer filler.
 *
 * ═══════════════════════════════════════════════════════════
 *  SYSTÈME DE POINTEURS GLOBAUX (BSS)
 * ═══════════════════════════════════════════════════════════
 *
 *   Les globaux à 0x83fe78+ sont en BSS (.data virtuel non initialisé)
 *   Leurs valeurs sont SET à l'initialisation via des constructeurs
 *   statiques C++ ou des appels DLL. Ces valeurs ne sont JAMAIS
 *   écrites dans le désassemblage statique de golf.exe.
 *
 *   Globaux identifiés :
 *     0x83fe78 → gridEngine ptr (lu par 0x495d38, 0x495eb0)
 *     0x83fe7c..0x83fec8 → données copiées lors de l'init
 *
 *   La fonction à 0x495eb0 COPIE ces globaux vers un nouvel objet,
 *   elle ne les SET pas. Le vrai setter est dans l'init runtime.
 *
 * ═══════════════════════════════════════════════════════════
 *  FONCTIONS DE SIMULATION REELLES (déjà décompilées)
 * ═══════════════════════════════════════════════════════════
 *
 *  Au lieu de tracer les vtables (profondeur excessive), l'IA
 *  et la simulation sont décompilées depuis :
 *
 *  1. GameTickFunction @ 0x49846c — Boucle simulation 16 slots
 *     → game_ai_logic.h → GameTickFunction()
 *
 *  2. Golfer vtable[0x68] — Simulation d'un coup
 *     → game_ai_logic.h → Golfer_ProcessTick()
 *
 *  3. Chaînes extraites — types de tirs, commentaires, skills
 *     → game_ai_logic.h → AI_SelectShotType()
 *     → game_ai_logic.h → AI_GenerateComment()
 *
 *  4. Analyse WAV — sons de club (Drive, Iron, Wedge, Putt...)
 *     → game_ai_logic.h → AI_SelectClub()
 *
 * ═══════════════════════════════════════════════════════════
 *  FONCTIONS VTABLE UNIQUES IDENTIFIÉES
 * ═══════════════════════════════════════════════════════════
 *
 *  Incontournables (non stubs, candidates pour décompilation future) :
 *
 *  De vtable 0x4ba4a8 (TileGrid principal) :
 *    [1] 0x47b670 — Traitement, flags [esi+0xa0], globals 0x83ab40/44
 *    [3] 0x480b30 — Dispatch avec vtable[0x54], bornes min=1
 *    [22] 0x4864f0 — Path-related
 *    [27] 0x486c40 — Grid management
 *    [35] 0x4866f0 — Init
 *    [36] 0x4867b0 — Update
 *    [57] 0x486af0 — getStatus
 *    [60] 0x486b30 — ?
 *
 *  Stubs communs :
 *    0x404880 → xor eax,eax; ret
 *    0x404890 → xor eax,eax; ret
 *    0x43cbc0 → Destructeur/return -1
 *    0x402180 → Helper simple
 *    0x402190 → Helper getBound
 */
