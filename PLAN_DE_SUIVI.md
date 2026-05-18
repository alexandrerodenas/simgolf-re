# SimGolf RE — Plan de Suivi & Status

> Projet : Rétro-ingénierie de Sid Meier's SimGolf (Firaxis/Maxis, 2002)  
> Cible : Portage Web Mobile-First (TypeScript, Phaser/PixiJS)  
> Début : 17 Mai 2026  
> Méthode : Décompilation → C propre → TypeScript

---

## 📋 Structure du Repo

```
~/simgolf-re/
├── raw_decomp/                    ← Désassemblage brut
│   ├── golf_unpacked_disasm.txt   (131 259 lignes — golf.exe dépaqueté !)
│   ├── Terrain_dll_disasm.txt     (25 658 lignes — v1, tronquée ARM64)
│   ├── Terrain_dll_disasm_v2.txt  (29 069 lignes — v2, fonctions individuelles)
│   ├── Terrain_dll_functions.txt  (34 741 lignes — fonctions individuelles)
│   ├── sound_dll_disasm.txt       (32 234 lignes — complète)
│   ├── jgld_dll_disasm.txt        (198 314 lignes — complète)
│   ├── golf_exe_full_disasm.txt   (18 lignes — obsolète, exe packé)
│   ├── pe_analysis.txt
│   ├── scan_functions.py          (analyse fonctions golf.exe)
│   ├── scan_game_loop.py          (analyse boucle de jeu)
│   ├── find_game_strings.py       (extraction chaînes)
│   ├── extract_bin_strings.py
│   ├── analyze_exe.py / analyze_exe_deep.py
│   └── *.py                       (scripts extraction)
│
├── cleaned_c/                     ← Code C nettoyé et documenté
│   ├── tile_struct.h              (Structure Tile 584 bytes)
│   ├── terrain_tileAt.c          ✅ Terrain::tileAt
│   ├── tile_getters.c            ✅ Tile::{getElevation,getType,getWall}
│   ├── terrain_render.c          ✅ Terrain::render (boucle isométrique)
│   ├── terrain_render_helpers.c  ✅ {getScreenX/Y, isVisible, isCulled, getView}
│   ├── terrain_render_tile.c     ✅ renderSingleTile + isVisible
│   ├── game_tick.c               ✅ Fonction de tick simulation (16 slots)
│   ├── smooth_interpolator.c     ✅ Interpolateur fluide
│   ├── MAPPING.md                 (Table 38 exports Terrain.dll)
│   └── gameplay_architecture.md   (Architecture complète du jeu)
│
└── game_data/                     ← Binaires et données
    ├── exe/                        (DLLs + golf.exe packé)
    ├── exe_patched/                (golf.exe v1.03)
    └── exe_unpacked/               ← golf.exe dépaqueté (DEViANCE)

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

**Aucun import DirectX/OpenGL** — tout le rendu passe par Terrain.dll → JGL → GDI

### Analyse Terrain.dll (moteur terrain) → 12/38 exports nettoyés

Voir `MAPPING.md` pour le détail des 38 exports.

### Analyse jgld.dll (moteur graphique) → FAIT
- Renderer logiciel GDI32 pur (pas d'OpenGL)
- 1199 fonctions, 1 seul export `get_graphsy_object_ptr`
- JackalClass : objet 332 bytes, 6 méthodes cartographiées

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
- [ ] Nettoyer `tile_struct.h` avec les champs découverts dans terrain_render_tile.c
- [ ] Réconcilier les différentes versions de Tile struct (terrain_tileAt.c vs tile_struct.h)
- [ ] Ajouter les fichiers .c manquants dans cleaned_c/ pour tous les exports Terrain.dll
- [ ] Ajouter les fonctions hub golf.exe dans cleaned_c/

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
3. **Code du jeu massif** : 131K lignes de asm — analyse manuelle longue
4. **Pas de boucle de message classique** : jeu timer-driven, complexité
5. **Fonctions `__thiscall`** : non détectées automatiquement (centaines de fonctions)
6. **Formats data (.chr, .glf, .pro)** : analysés mais pas de parseur C
7. **Structures Terrain/Tile** : certaines tailles de champs sont estimées (pas de debug symbols)

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
│       ├── UpdateSimulation() ← Hub 0x494f00 (CoursEngine)
│       │   ├── GameTickFunction (0x49846c) — 16 slots × 0x58
│       │   ├── SmoothInterpolator (0x4969e0) — animation
│       │   ├── Économie (Profit, Revenue, Memberships...)
│       │   ├── Scoring (Par, Birdie, Eagle... SGA Rating)
│       │   └── Tournois (Jr. Tour → Grand Slam)
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
└── Terrain.dll (38 exports C++ → 12 nettoyés)
    ├── tileAt, getElevation, getType, getWall ✅
    ├── render, renderTile, renderSingleTile ✅
    └── drawLine, drawCircle, drawBezierSpline ✅

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

*Document généré le 18 Mai 2026 — Hermes-RE*  
*Prochaine mise à jour : après analyse des fonctions hub de simulation*
