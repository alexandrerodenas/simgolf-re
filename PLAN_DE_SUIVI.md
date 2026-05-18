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
│   ├── Terrain_dll_disasm.txt     (25 658 lignes)
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
│   ├── terrain_tileAt.c
│   ├── tile_getters.c
│   ├── terrain_render.c
│   ├── terrain_render_helpers.c
│   ├── terrain_render_tile.c
│   ├── MAPPING.md                 (Table 38 exports Terrain.dll)
│   └── gameplay_architecture.md   ← NOUVEAU : Architecture complète du jeu
│
├── web_port/                      ← Portage TypeScript
│   ├── core/
│   │   └── TerrainTileSystem.ts
│   └── view/
│       ├── IsometricRenderer.ts
│       ├── JGLInterface.ts
│       └── AudioEngine.ts
│
└── game_data/                     ← Binaires et données
    ├── exe/                        (DLLs + golf.exe packé)
    ├── exe_patched/                (golf.exe v1.03)
    └── exe_unpacked/               ← NOUVEAU : golf.exe dépaqueté (DEViANCE)

PLAN_DE_SUIVI.md
```

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

### Priorité 1 — Rendu Isométrique ✅
- [x] `Terrain::render()` complet
- [x] 5 helpers (getScreenX/Y, isVisible, isCulled, getView)
- [x] `renderSingleTile()` avec textures
- [x] `IsometricRenderer.ts` — Canvas 2D isométrique
- [x] `JGLInterface.ts` — mapping JGL → Canvas 2D
- [ ] `drawLine/drawCircle/BezierSpline/CardinalSpline` (optionnel)

### Priorité 2 — Moteur Graphique JGL (jgld.dll) ✅
- [x] Analyse complète (1199 fonctions, JackalClass)
- [x] 6 fonctions JGL cartographiées
- [x] Documentation + Interface TypeScript

### Priorité 3 — Moteur Audio ✅
- [x] Analyse sound.dll (12 exports, 3 devices)
- [x] AudioEngine.ts (Web Audio API + MIDI)

### Priorité 4 — Dépaquetage golf.exe ✅
- [x] SafeDisc 2 identifié
- [x] Version DEViANCE trouvée et extraite (archive ACE)
- [x] 131 259 lignes de code jeu générées
- [x] 26 imports Terrain.dll accessibles dans le code
- [x] Architecture gameplay cartographiée

### Priorité 5 — Simulation & Gameplay ✅
- [x] Analyse des chaînes de jeu (1200+ strings extraites)
- [x] Cartographie des systèmes : types trous, skills, scoring, économie, SGA, tournois, accomplissements
- [x] Analyse du pipeline d'exécution (WinMain → GameLoop)
- [x] Analyse des fonctions hub (0x494f00, 0x476dd0, 0x485e80)
- [x] Nettoyage du moteur de tick simulation (0x49846c)
- [x] Nettoyage du système d'interpolation fluide (0x4969e0)
- [ ] Nettoyage du moteur d'économie (Revenue/Expenses)
- [ ] Nettoyage du système de scoring
- [ ] Nettoyage de l'IA des golfeurs
- [ ] Nettoyage du système de tournois SGA
- [x] Portage TypeScript : `GameTickEngine.ts`
- [x] Portage TypeScript : `SmoothInterpolator.ts`
- [ ] Portage TypeScript : `EconomySystem.ts`
- [ ] Portage TypeScript : `GolfSimulation.ts` (physique)
- [ ] Portage TypeScript : `ScoringSystem.ts`
- [ ] Portage TypeScript : `PersonaSystem.ts` (IA golfeurs)
- [ ] Portage TypeScript : `TournamentSystem.ts`

### Priorité 6 — Fichiers Data ✅
- [x] Analyse du format .chr (personnages golfeurs)
- [x] Analyse du format .glf (données golfeurs)
- [x] Analyse du format .pro (profils)
- [x] Analyse du format .fot (polices bitmap — ce sont des NE executables)
- [x] Analyse du format .sve (sauvegardes — top10 scores)
- [x] Parseur TypeScript pour les formats data (.dta CSV, .chr, .pro, .sve, .txt stories)
- [x] Portage des polices TrueType (KLEPTO__.TTF, manu3_.TTF → Web)
- [x] Catalog complet des textures : 2 671 BMP 64×64 24-bit converties en PNG
- [x] 1 893 animations FLC (sprites) par catégorie
- [x] Documentation tous formats dans game_data/DataFormatAnalysis.md

### Priorité 7 — Textures & Rendu ✅
- [x] Analyse des textures BMP (64×64, 24-bit, 4 thèmes)
- [x] Pipeline de conversion BMP → PNG (2 671 textures, zéro erreur)
- [x] Catalogue JSON des textures (web_port/assets/texture_catalog.json)
- [x] TextureManager.ts (chargement, cache, sélection par variante)
- [x] Analyse et conversion des 649 PCX (UI/sprites)
  - interface/ (137 fichiers) : panneaux, boutons, écrans, infos
  - flics/ (450 fichiers) : palettes de sprites/animations
  - heads/ (11 fichiers) : portraits golfeurs
  - bodies/ (42 fichiers) : corps des golfeurs
  - other/ (9 fichiers) : logo, splash, etc.
- [ ] Analyse des 1893 FLC (animations sprites)
- [x] Intégration des textures dans le rendu isométrique (IsometricRenderer.ts)
- [x] Mapping TileType → TerrainType avec prefix match
- [x] TextureManager.getTileTexture() avec recherche par préfixe
- [x] Support de 4 thèmes visuels (Desert, Links, Parkland, Tropical)

### Priorité 8 — Interface Mobile ← EN COURS
- [x] Layout mobile principal (GameShell) : canvas + UI overlay
- [x] HUD mobile (score, par, trou, money)
- [x] BuildToolbar tactile (Fairway, Rough, Sand, Tee, Green, Trees, Water)
- [x] Touch handler (pan/drag, tap, pinch zoom, long-press)
- [x] MainMenu mobile (Nouvelle Partie, Continuer, Options)
- [x] Index.html + app.ts (point d'entrée)
- [ ] Adaptation aux formats tablette et téléphone
- [ ] Écran de construction complet
- [ ] Mode jeu (parcours) – affichage scorecard

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
2. **Structure Tile** : 524 bytes non analysés (offset 0x028-0x233)
3. **Code du jeu massif** : 131K lignes de asm, analyse manuelle longue
4. **Pas de boucle de message classique** : jeu timer-driven, complexité
5. **Fonctions `__thiscall`** : non détectées automatiquement (centaines de fonctions)
6. **Formats data (.chr, .glf, .pro, .fot)** : non analysés
7. **PCX du CD** : non extraits (nécessitent l'ISO originale ou les CABs)

---

## 📐 Architecture Cible (Web Port)

```
web_port/
├── core/                    # Logique de simulation pure (découplée)
│   ├── TerrainTileSystem.ts ✅  (Moteur terrain)
│   ├── GolfSimulation.ts    ❌  (Physique balle + scoring)
│   ├── EconomySystem.ts     ❌  (Économie club + membership)
│   ├── PersonaSystem.ts     ❌  (IA golfeurs + skills + humeur)
│   ├── TournamentSystem.ts  ❌  (Tournois SGA + accomplissements)
│   └── SGARating.ts         ❌  (Évaluation parcours)
│
├── view/                    # Rendu graphique
│   ├── IsometricRenderer.ts ✅  (Rendu isométrique Canvas 2D)
│   ├── TileRenderer.ts      ❌  (Rendu tuile par type)
│   ├── JGLInterface.ts      ✅  (Interface JGL → Canvas)
│   └── AudioEngine.ts       ✅  (Web Audio API + MIDI)
│
└── ui/                      # Interface utilisateur
    ├── Toolbar.tsx           ❌  (Barre d'outils construction)
    ├── CourseMap.tsx         ❌  (Mini-carte)
    ├── SimPanel.tsx          ❌  (Panneau infos golfeur)
    ├── FinancePanel.tsx      ❌  (Écran finances)
    ├── TournamentPanel.tsx   ❌  (Écran tournoi)
    ├── SGAPanel.tsx          ❌  (Rapport SGA)
    ├── HUD.tsx               ❌  (Affichage match)
    └── MenuSystem.tsx        ❌  (Menus)
```

---

*Document généré le 18 Mai 2026 — Hermes-RE*  
*Prochaine mise à jour : après analyse des fonctions hub de simulation*
