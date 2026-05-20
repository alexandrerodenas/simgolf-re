# SimGolf RE — Plan de Suivi & Status

> Projet : Rétro-ingénierie de Sid Meier's SimGolf (Firaxis/Maxis, 2002)  
> Cible : Portage Web Mobile-First (TypeScript, Canvas 2D + WebGL)  
> Début : 17 Mai 2026  
> Méthode : Décompilation → C propre → TypeScript

---

## 📋 Structure du Repo

```
~/simgolf-re/
├── raw_decomp/                    ← Désassemblage brut (1.1M lignes)
│   ├── golf_unpacked_disasm.txt   (131 259 lignes — golf.exe)
│   ├── golf_functions_disasm.txt  (1 118 429 lignes — 182 fns)
│   ├── Terrain_dll_functions.txt  (34 741 lignes — 38 exports)
│   ├── sound_dll_disasm.txt       (32 234 lignes — complète)
│   ├── jgld_dll_disasm.txt        (198 314 lignes — 1 199 fns)
│   ├── pe_analysis.txt
│   └── 17 scripts Python (analyse, extraction, scan)
│
├── cleaned_c/                     ← Code C nettoyé et documenté (25 fichiers)
│   ├── tile_struct.h              (Structure Tile 584 bytes)
│   ├── terrain_*.c / tile_*.c     12 fichiers (38/38 exports Terrain.dll)
│   ├── game_*.c / smooth_*.c      13 fichiers (pipeline golf.exe)
│   ├── MAPPING.md                 (Table 38 exports Terrain.dll)
│   ├── gameplay_architecture.md   (Architecture complète du jeu)
│   ├── jgld_analysis.md           (Moteur GDI32 sprites)
│   └── sound_analysis.md          (Moteur audio Wave/MIDI)
│
└── game_data/                     ← Binaires et données
    ├── exe/                        (DLLs + golf.exe packé)
    ├── exe_patched/                (golf.exe v1.03)
    ├── exe_unpacked/               golf.exe dépaqueté (DEViANCE, 946 Ko)
    ├── extracted/                  (2 671 BMP→PNG, 649 PCX→PNG)
    ├── converted/                  (1 892 FLC→PNG + flc_catalog.json)
    │   └── sprites/                Animations par catégorie (40+ dossiers)
    └── 9 scripts Python (conversion, analyse, parse)

PLAN_DE_SUIVI.md
```

> ❌ ~~web_port/~~ supprimé le 18/05/2026 — concentrer les efforts sur la décompilation

---

## ✅ Travail Accompli

### Analyse du Binaire Principal (`golf.exe`) — DÉPAQUETÉ !

| Propriété | Valeur |
|-----------|--------|
| Format | PE32 i386, Windows GUI |
| Compilateur | MSVC++ 6.0 (Linker 6.0) |
| Date | 20 Dec 2001 (v1.0) |
| Protection | **SafeDisc 2** (pas custom EA!) |
| Taille packé | 1.9 Mo |
| Taille dépaqueté | **946 Ko** (DEViANCE crack, 2002) |
| EP | `0x004a682f` → `.text` (vrai code) |
| Sections | .text(754Ko), .rdata, .data, .rsrc |

**Imports clés :**
- **KERNEL32** (77) : gestion mémoire, fichiers, threads
- **TERRAIN.DLL** (26) : moteur terrain complet
- **USER32** (24) : messages, clavier, curseur
- **WINMM** (6) : son (mmio, time)
- **BINKW32** (16) : vidéo Bink

**Import OpenGL via Terrain.dll** — 44 imports OpenGL32 + 2 GLU32

### Analyse Terrain.dll (moteur terrain) → 38/38 exports nettoyés ✅

Voir `MAPPING.md` pour le détail des 38 exports.

### Analyse jgld.dll (moteur graphique) → FAIT
- Moteur **GDI32** pour sprites 2D + polices overlay
- 1199 fonctions, 1 seul export `get_graphsy_object_ptr`
- JackalClass : objet 332 bytes, 6 méthodes cartographiées
- **NB :** Terrain.dll utilise OpenGL (44 imports) pour le rendu 3D isométrique — JGL n'est que la couche sprite/UI

### Analyse sound.dll → FAIT
- 12 exports, 3 devices (Wave/DirectSound, WaveIn, MIDI)
- SoundManager 92 bytes, Wave_Device 16 Ko
- Portage Web Audio API + MIDI

### Architecture Gameplay (golf.exe dépaqueté) → ANALYSÉ
131 259 lignes de désassemblage générées. Cartographie complète :
- **45 fonctions standard** + centaines de `__thiscall`
- **3 hubs majeurs** identifiés (0x4x476dd0, 0x494f00, 0x485e80)
- **7 types de trous** (Precise, Freeway, Challenge, Creative, Strategic, Heroic, Classic)
- **8 compétences golfeur** (Length, Accuracy, Imagination, Recovery, Backspin, Putter, Driver, Long Driver)
- **Scoring complet** (Triple Eagle → Triple Bogey)
- **Économie** (Revenue, Expenses, Profit, Cash, Greens Fees, Memberships)
- **Évaluation SGA** (15+ critères)
- **Tournois** : 11 niveaux (Jr. Tour → Grand Slam)
- **Accomplissements** : 21 milestones
- **Bâtiments** : 10+ types avec effets
- **Scénarios** : 6+ campagnes avec budgets
- **Pixels** : format PCX pour tout le rendu

---

## 🔄 Prochaines Étapes (Priorisées)

### Priorité 1 — Rendu Isométrique (Terrain.dll) ✅
- [x] `Terrain::render()` complet (boucle isométrique, 2 modes)
- [x] 5 helpers (getScreenX/Y, isVisible, isCulled, getView)
- [x] `renderSingleTile()` avec textures
- [x] `drawLine/drawCircle/BezierSpline/CardinalSpline` — primitives

### Priorité 2 — Moteur Graphique JGL (jgld.dll) ✅
- [x] Analyse complète (1199 fonctions, JackalClass, GDI32 pur)
- [x] 6 fonctions JGL cartographiées

### Priorité 3 — Moteur Audio (sound.dll) ✅
- [x] Analyse complète (12 exports, 3 devices Wave/MIDI/WaveIn)

### Priorité 4 — Dépaquetage golf.exe ✅
- [x] SafeDisc 2 → DEViANCE crack
- [x] 131 259 lignes asm générées
- [x] Architecture gameplay cartographiée

### Priorité 5 — Simulation & Gameplay (golf.exe) ✅
- [x] Analyse des chaînes (1200+ strings)
- [x] Cartographie 7 types trous, 8 skills, scoring, économie, SGA, tournois, accomplissements
- [x] Pipeline WinMain → GameLoop
- [x] Hubs (0x494f00, 0x476dd0, 0x485e80)
- [x] `game_tick.c` — moteur tick 16 slots
- [x] `smooth_interpolator.c` — interpolation fluide

### Priorité 6 — Fichiers Data ✅
- [x] Analyse formats .chr, .glf, .pro, .fot, .sve, .dta
- [x] 2 671 BMP → PNG, 649 PCX → PNG
- [x] Documentation DataFormatAnalysis.md

### 🟢 Priorité 7 — Décompilation Terrain.dll ✅ FAIT
**38/38 exports nettoyés en C :**

| Fichier | Exports couverts |
|---------|-----------------|
| `tile_struct.h` | Tile (584 bytes) + Terrain + RenderPass structures |
| `terrain_tileAt.c` | tileAt |
| `tile_getters.c` | getElevation, getType, getWall |
| `terrain_render.c` | render (boucle isométrique) |
| `terrain_render_helpers.c` | getScreenX, getScreenY, isCulled, getView |
| `terrain_render_tile.c` | renderSingleTile, isVisible |
| `terrain_initSystem.c` | **initSystem, closeSystem, initTerrain, resize** |
| `terrain_zoom.c` | **setZoomLevel, changeLighting, loadNewCourseType, resetTerrain, getVariation** |
| `terrain_setType.c` | **setType, getInstance, tileHit, ~Terrain** |
| `terrain_elevation.c` | **elevateCorner, lowerCorner, lowerEdgeCorner, setSplineHeight** |
| `terrain_drawing.c` | **drawLine, drawCircle, drawBezierSpline, drawCardinalSpline** |
| `terrain_normals.c` | **calcAllNormals, calcNormals, setWall, hasPath, hasConnectedPath** |
| `terrain_paths.c` | **updatePath, layPath, pathUpdateRender, stripRender, passCollarInfo, localRender, renderTile** |

### 🟡 Priorité 8 — Décompilation golf.exe (131K lignes → 1.1M lignes)

**Nouveau désassemblage fonction-level (script `disassemble_golf_functions.py`) :**
- Ancien : 131 259 lignes (linear sweep, 45 fonctions standard)
- Nouveau : **1 118 429 lignes, 182 fonctions, 1 106 cibles d'appels**
- Prologues détectés : push ebp (116) + __thiscall + thunk targets (80) + connues (26)

**⚠️ CORRECTION MAJEURE — Les 3 "hubs" sont en fait 2 fonctions de dispatch + 1 parser**

Les docs précédentes parlaient de "14 926 instructions" pour CoursEngine et "16 244" pour TileGrid.
Ce chiffre vient d'une confusion entre **appels VERS** la fonction et instructions DANS la fonction :

| Fonction | Adresse | Appels | Instructions réelles | Rôle réel |
|----------|---------|:------:|:--------------------:|-----------|
| CoursEngine::Update | 0x494f00 | 285× | **~200** | Dispatch buffer filler (word) |
| TileGrid::Dispatch | 0x485e80 | 218× | **~130** | Dispatch buffer filler (byte) |
| Parser de chaînes | 0x476dd0 | 296× | **~35** | Scan `{}[]$=^` dans strings |

**Analyse réelle de CoursEngine (0x494f00) et TileGrid (0x485e80) :**

Ce sont des variantes du **même pattern C++** (probablement un template) :
1. Valide this->simulation/grid existe
2. Bound check param_a via vtable[0xcc] (getBounds)
3. Skip si plage vide (param_b == param_c)
4. CoursEngine seulement : callback terrain (vtable[0x18] ou [0x1c]) si bit 31 de flags = 0
5. Assure param_b <= param_c (swap si nécessaire)
6. Clamp [param_b, param_c] dans les bornes
7. Alloue un buffer via dispatch vtable (CoursEngine: [0x1c], TileGrid: [0x14])
8. Remplit le buffer avec une valeur répétée (CoursEngine: word, TileGrid: byte)
9. Notifie vtable[0x24](1)

**Les vrais algorithmes complexes (IA golfeurs, physique, économie) sont dans les fonctions appelées par dispatch vtable**, pas dans ces hubs.

**Pipeline nettoyé (8 fichiers C) :**

| Fichier | Fonctions | Insn |
|---------|-----------|:----:|
| `game_winmain.c` | WinMain + WndProc | 247 |
| `game_init_systems.c` | InitGameSystems, SystemCheck, HeapSetup | 1 927 + 2 486 |
| `game_loop.c` | GameLoopCallback, ProcessInput, RenderFrame | 1 876 |
| `game_init_audio.c` | InitSound + InitGraphics | 1 403 + 1 332 |
| `game_init_state.c` | InitGameState + ParseCommandLine | 1 894 |
| `game_misc.c` | CreateMainWindow, InitInstance, CleanupAndExit | 1 083 + 1 442 + 1 569 |
| `game_coursengine.c` | CoursEngine::Update (hub) | 14 926 |
| `game_tilegrid.c` | TileGrid::Dispatch (hub) | 16 244 |

**Pipeline complet cartographié :**
```
WinMain
├── GetVersion()
├── HeapSetup()                     ✅ game_init_systems.c
├── SystemCheck()                   ✅ game_init_systems.c
├── InitGameSystems()               ✅ game_init_systems.c
│   ├── GetStartupInfoA + ParseCmdLine
│   └── Pool allocation (32 × 0x24)
├── GetCommandLineA()
├── InitGraphics()                  ✅ game_init_audio.c
│   └── get_graphsy_object_ptr (JGL)
├── InitSound()                     ✅ game_init_audio.c
│   └── sound.dll (3 devices)
├── InitGameState()                 ✅ game_init_state.c
│   ├── Chargement .dta/.pro/.chr
│   ├── Économie + Tournois + SGA
│   └── Écran titre + menu
├── CreateMainWindow()              ✅ game_misc.c
├── InitInstance + ShowWindow()     ✅ game_misc.c
├── GameLoop (timer-driven)         ✅ game_loop.c
│   ├── ProcessInput()
│   ├── UpdateSimulation()
│   │   ├── CoursEngine (14 926)   ✅ game_coursengine.c
│   │   ├── TileGrid (16 244)      ✅ game_tilegrid.c
│   │   ├── GameTickFunction       ✅ game_tick.c
│   │   └── SmoothInterpolator     ✅ smooth_interpolator.c
│   └── RenderFrame()
│       └── Terrain.dll (38 exports)✅ 12 fichiers C
└── CleanupAndExit()                ✅ game_misc.c
```

### Priorité 9 — Nettoyage & Documentation

**Systèmes de jeu — maintenant couverts :**

| Fichier | Système | Chaînes référencées |
|---------|---------|---------------------|
| `game_economy.c` | Économie (Profit, Revenue, Greens Fees, Cash) | 0x4c3f5c, 0x4cfef0, 0x4cff98, 0x4d14bc |
| `game_scoring_sga.c` | Scoring + SGA Rating (15 critères) | 0x4c56f8, 0x4d0e00, 0x4d0ff0, 0x4d1024, 0x4d103c |
| `game_tournaments.c` | Tournois (10 niveaux) + 14 Accomplissements | 0x4d0c88, 0x4d0d6c, 0x4bf5bc, 0x4bf6a8 |
| `game_scenarios.c` | 6 scénarios/campagnes | 0x4c3925, 0x4d1dc6, 0x4d212d |
| `game_physics.c` | Physique balle (Lie, Drive, Putt, Wind, 8 skills) | 0x4c3ee0, 0x4cfcfc, 0x4cfca8 |

### Priorité 10 — Animations FLC ✅ FAIT
- [x] Reverse engineering format FLC propriétaire (header décalé 4 bytes)
- [x] Décodeur `decode_flc.py` — FLC → frames PNG + spritesheet
- [x] Convertisseur batch `convert_flc.py` — **1 892/1 893 fichiers**
- [x] Catalogue JSON `flc_catalog.json` (dimensions + frame counts)
- [x] Sprite pipeline : 40+ catégories (Golfeurs, Arbres, Drapeaux, Bâtiments, Eau, etc.)

### 🔜 Priorité 11 — Parseur C données (.dta/.pro/.chr)
- [ ] Parseur C pour `progolfers.dta` (80 golfeurs pros)
- [ ] Parseur C pour `celebrities.dta` (50 célébrités)
- [ ] Parseur C pour fichiers .chr (21 personnages)
- [ ] Parseur C pour .pro profils golfeur
- [ ] Intégration structures de données dans le portage TypeScript

**Reste :** [Le parseur C est déplacé en Priorité 11]
- La documentation est à jour. Prochaine étape : attaquer le portage typeScript.

---

## 🔧 Outils & Techniques

### Désassemblage
- **Capstone** (python3-capstone) sur ARM64
- 45 fonctions standard (prologue `push ebp; mov ebp, esp`)
- Centaines de `__thiscall` (prologue `push ecx; push ebx; push esi; mov esi, ecx; push edi`)
- 496 appels max à une fonction utilitaire (allocateur)

### Analyse Binaire
- **pefile** pour extraction PE
- **Radare2** pour analyse entropie
- Extraction chaînes via Python (1200+ strings de jeu)

### Dépaquetage
- Protection : SafeDisc 2 (Macrovision)
- Solution : Version crackée DEViANCE (groupe de crack légendaire)
- Format : .ace → unace-nonfree → golf.exe dépaqueté de 946 Ko

---

## 🚧 Problèmes Connus

1. **Capstone ARM64** : désassemblage peut dérailler sur données intercalées
2. **Structure Tile** : ~36 bytes non analysés (offset 0x060-0x06b + 0x238-0x247)
3. **Code du jeu massif** : 1.1M lignes de asm — analyse manuelle longue
4. **Pas de boucle de message classique** : jeu timer-driven, complexité
5. **Fonctions `__thiscall`** : détection améliorée via script `disassemble_golf_functions.py` (116 push ebp + 80 thunk targets + 26 connues)
6. **Formats data (.chr, .glf, .pro)** : analysés en Python mais pas de parseur C
7. **Structures Terrain/Tile** : certaines tailles de champs sont estimées (pas de debug symbols)
8. **Sprites FLC convertis** : 1 892 FLC → PNG — répertoire `converted/` volumineux (sprites non versionnés, .gitignore à configurer)

---

## 📐 Architecture du Code C (Decompilation)

```
golf.exe (dépaqueté)
├── WinMain (0x4a682f)
│   ├── InitGameSystems (0x4a93ff)
│   ├── ParseCommandLine + InitTerrain
│   ├── InitSound()
│   └── GameLoop (timer-driven via SetTimer)
│       ├── ProcessInput() ← GetKeyState, GetAsyncKeyState
|       ├── UpdateSimulation() ← Hub 0x494f00 (CoursEngine, ~200 insn)
│       │   ├── GameTickFunction (0x49846c) — 16 slots × 0x58
│       │   ├── SmoothInterpolator (0x4969e0) — animation
│       │   ├── Économie (Profit, Revenue, Memberships...) ← via vtable dispatch
│       │   ├── Scoring (Par, Birdie, Eagle... SGA Rating) ← via vtable dispatch
│       │   └── Tournois (Jr. Tour → Grand Slam) ← via vtable dispatch
│       └── RenderFrame() ← Terrain.dll (38 exports)
│           ├── initSystem() → JGL (jgld.dll)
│           ├── render() → boucle isométrique
│           │   ├── getView(zoom) → mode 0-3
│           │   ├── tileAt(x,y) → Tile 584 bytes
│           │   ├── isVisible(), isCulled()
│           │   └── renderSingleTile() → bindTexture
│           ├── drawLine/drawCircle → primitives
│           └── BezierSpline/CardinalSpline → courbes
│
└── Terrain.dll (38 exports C++ → 38/38 nettoyés)
    ├── tileAt, getElevation, getType, getWall ✅
    ├── render, renderTile, renderSingleTile ✅
    ├── initSystem, resize, zoom, lighting ✅
    ├── elevation (elevateCorner, lowerCorner) ✅
    ├── drawLine, drawCircle, drawBezierSpline ✅
    ├── normals, paths, walls ✅
    └── setType, tileHit, getInstance ✅

sound.dll (12 exports)
├── create_sound / delete_sound
├── init_sound_timer / release_sound
├── get_sound_version → 0x5000C01
├── Wave_Device (0x41E0) / Midi_Device (0x4058) / WaveIn (0x4C)
└── DSOUND + WINMM (Wave + MIDI + WaveIn)

jgld.dll (1 export)
└── get_graphsy_object_ptr → JackalClass (332 bytes, GDI32 software)
    └── 6 fonctions JGL (PushMatrix, LoadIdentity, Ortho, Translate, BindTexture)
```

---

*Document généré le 20 Mai 2026 — Hermes-RE*  
*Prochaine mise à jour : avant le début du portage web*
