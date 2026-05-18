# SimGolf RE — Plan de Suivi & Status

> Projet : Rétro-ingénierie de Sid Meier's SimGolf (Firaxis/Maxis, 2002)  
> Cible : Portage Web Mobile-First (TypeScript, Phaser/PixiJS)  
> Début : 17 Mai 2026  
> Méthode : Décompilation → C propre → TypeScript

---

## 📋 Structure du Repo

```
~/simgolf-re/
├── raw_decomp/           ← Désassemblage brut (sortie outils)
│   ├── golf_exe_full_disasm.txt        (18 lignes — .exe packé)
│   ├── pe_analysis.txt                 (Analyse PE complète)
│   ├── Terrain_dll_disasm.txt          (25 658 lignes — v1 partielle)
│   ├── Terrain_dll_disasm_v2.txt       (28 801 lignes — v2 avec data/code)
│   ├── Terrain_dll_functions.txt       (34 741 lignes — fonctions individuelles)
│   ├── sound_dll_disasm.txt            (32 234 lignes — complète)
│   ├── jgld_dll_disasm.txt             (198 314 lignes — complète, 1.1 Mo)
│   ├── disassemble.py                  (script extraction v1)
│   ├── disassemble_dlls.py             (script extraction DLLs)
│   ├── disassemble_terrain_v2.py       (script v2)
│   └── disassemble_smart.py            (script fonction-par-fonction)
│
├── cleaned_c/            ← Code C nettoyé et documenté
│   ├── tile_struct.h                   (Structure Tile 584 bytes — v2)
│   ├── terrain_tileAt.c                (Terrain::tileAt nettoyé)
│   ├── tile_getters.c                  (getElevation, getType, getWall)
│   ├── terrain_render.c                (Terrain::render — moteur isométrique)
│   ├── terrain_render_helpers.c        (getScreenX/Y, isCulled, getView)
│   ├── terrain_render_tile.c           (isVisible, renderSingleTile → glBindTexture)
│   └── MAPPING.md                      (Table 38 exports Terrain.dll)
│
├── web_port/             ← Portage TypeScript
│   ├── core/
│   │   └── TerrainTileSystem.ts        (TerrainEngine singleton + tileAt)
│   └── view/
│       └── IsometricRenderer.ts        (Rendu Canvas 2D isométrique)
│
└── game_data/            ← Binaires et données originales
    ├── exe/                            (golf.exe, DLLs originales)
    └── exe_patched/                    (golf.exe v1.03 patché)
```

---

## ✅ Travail Accompli

### Analyse du Binaire Principal (`golf.exe`)

| Propriété | Valeur |
|-----------|--------|
| Format | PE32 i386, Windows GUI |
| Compilateur | MSVC++ 6.0 (Linker 6.0) |
| Date | 20 Dec 2001 (v1.0) |
| Entry Point | `0x443056` (dans section `stxt371`) |
| ImageBase | `0x400000` |
| Taille | 1.9 Mo (v1.0), 2.3 Mo (v1.03 patch) |
| **Packer** | **Custom EA/Firaxis** — entropie .text = 7.98/8.0 |

**Sections :**
| Nom | Taille | Rôle |
|-----|--------|------|
| `.text` | 753 Ko | **Encrypté/compressé** (packer custom) |
| `.rdata` | 24 Ko | Constantes |
| `.data` | **3.5 Mo** | Données massives (tables, tuiles ?) |
| `.rsrc` | 4 Ko | Ressources |
| `stxt774` | 524 o | Code exécutable + écriture (stub packer) |
| `stxt371` | 14 Ko | **Code décompresseur + OEP** |

**Packer :**
- Entry point dans `stxt371` : stub auto-modifiant (écrit `JMP rel32` et `RET`)
- Vrai OEP : `0x4A5F9F` (dans .text)
- Fonction de décompression : `0x8430FA` (appels COM, vtables, allocations)
- Non dépacké — nécessite Wine + dumping ou émulation du décompresseur

### Analyse Terrain.dll (moteur terrain)

**38 exports C++** identifiés :

| # | Export | Adresse brute | Statut |
|---|--------|:---:|:------:|
| 1 | `Terrain::tileAt(int, int)` | 0x10001D50 | ✅ Nettoyé |
| 2 | `Terrain::getElevation(Tile*, int)` | 0x10001DE0 | ✅ Nettoyé |
| 3 | `Terrain::getType(Tile*)` | 0x10001F10 | ✅ Nettoyé |
| 4 | `Terrain::getWall(Tile*, int)` | 0x10001E80 | ✅ Nettoyé |
| 5 | `Tile::getElevation(int)` | 0x10001E40 | ✅ Nettoyé |
| 6 | `Tile::getType()` | 0x10001F60 | ✅ Nettoyé |
| 7 | `Tile::getWall(int)` | 0x10001ED0 | ✅ Nettoyé |
| 8 | `Terrain::render(Tile*, float)` | 0x10005990 | ✅ Nettoyé |
| 9 | `Terrain::getView(float)` | 0x1000ADC0 | ✅ Nettoyé |
| 10 | `Terrain::renderSingleTile(Tile*, float)` | 0x1000E6C0 | ✅ Nettoyé |
| 11 | `Tile::getScreenX()` | 0x10006810 | ✅ Nettoyé |
| 12 | `Tile::getScreenY()` | 0x10005960 | ✅ Nettoyé |
| 13 | `Tile::isVisible()` | 0x10015460 | ✅ Nettoyé |
| 14 | `Tile::isCulled(Tile*, float)` | 0x10006850 | ✅ Nettoyé |
| 15 | `Terrain::setWall(Tile*, int, int, bool)` | 0x1000A560 | ❌ Non traité |
| 16 | `Terrain::hasPath(Tile*)` | 0x1000A510 | ❌ Non traité |
| 17 | `Terrain::hasConnectedPath(int, int)` | 0x10001023 | ❌ Non traité |
| 13 | `Terrain::getInstance()` | 0x100031A0 | ❌ Non traité |
| 14 | `Terrain::localRender(...)` | 0x1000117C | ❌ Non traité |
| 15 | `Terrain::drawLine(...)` | 0x100011B3 | ❌ Non traité |
| 16 | `Terrain::drawCircle(Tile*, float)` | 0x10001186 | ❌ Non traité |
| 17 | `Terrain::drawBezierSpline(...)` | 0x10005230 | ❌ Non traité |
| 18 | `Terrain::drawCardinalSpline(...)` | 0x10001244 | ❌ Non traité |
| 19 | `Terrain::initSystem(int,int,HDC,bool)` | 0x100012E4 | ❌ Non traité |
| 20 | `Terrain::closeSystem()` | 0x10001217 | ❌ Non traité |
| 21 | `Terrain::initTerrain()` | 0x100012CB | ❌ Non traité |
| 22 | `Terrain::resize(int, int)` | 0x100012F8 | ❌ Non traité |
| 23 | `Terrain::loadNewCourseType(int)` | 0x10001032 | ❌ Non traité |
| 24 | `Terrain::resetTerrain()` | 0x1000AA10 | ❌ Non traité |
| 25 | `Terrain::calcAllNormals(Tile*)` | 0x1000A740 | ❌ Non traité |
| 26 | `Terrain::calcNormals(Tile*)` | 0x10001307 | ❌ Non traité |
| 27 | `Terrain::setZoomLevel(int)` | 0x10001294 | ❌ Non traité |
| 28 | `Terrain::changeLighting(int)` | 0x100011C2 | ❌ Non traité |
| 29 | `Terrain::getVariation(Tile*)` | 0x1000105A | ❌ Non traité |
| 30 | `Terrain::elevateCorner(Tile*, int)` | 0x1000133E | ❌ Non traité |
| 31 | `Terrain::lowerCorner(Tile*, int)` | 0x1000A620 | ❌ Non traité |
| 32 | `Terrain::lowerEdgeCorner(...)` | 0x10001154 | ❌ Non traité |
| 33 | `Terrain::setSplineHeight(float)` | 0x10001339 | ❌ Non traité |
| 34 | `Terrain::setType(Tile*, int, int)` | 0x1000121C | ❌ Non traité |
| 35 | `Terrain::updatePath(int,int,int)` | 0x1000125D | ❌ Non traité |
| 36 | `Terrain::layPath(Tile*, int, int)` | 0x100012C1 | ❌ Non traité |
| 37 | `Terrain::pathUpdateRender(...)` | 0x100011E0 | ❌ Non traité |
| 38 | `Terrain::stripRender(Tile*, int, float)` | 0x10001299 | ❌ Non traité |

### Structure Tile (584 bytes = 0x248) — v2 (12 champs identifiés)

```
Offset  Size    Champ             Source                  Statut
------  ------  ---------------   ----------------------  ------
 0x000  16      elevation[4]      Tile::getElevation()    ✅
 0x010   4      waterLevel?       Hypothèse               ⚠️
 0x014   4      ?                 Inconnu                 ❌
 0x018   4      ?                 Inconnu                 ❌
 0x01C   4      renderCategory    Tile::isCulled()        ✅
 0x020   4      renderWidth       Tile::isCulled()        ✅
 0x024   4      type              Tile::getType()         ✅
 0x028   4      renderHeight      Tile::isCulled()        ✅
 0x02C   4      screenY           Tile::getScreenY()      ✅
 0x030   4      screenX           Tile::getScreenX()      ✅
 0x034  0x200   unknown[512]      Non analysé             ❌
 0x234   4      walls[4]          Tile::getWall()         ✅
 0x238   ?      render_data?      Non analysé             ❌
------  ------  ---------------   ----------------------  ------
Total:  584
```

### Structure Terrain (partielle)

```
Offset  Size    Champ         Source                  Statut
------  ------  -----------   ----------------------  ------
 0x000   4      vtable        Convention C++          ✅
 0x004  16      ?             Données internes        ❌
 0x014   4      width         Terrain::tileAt()       ✅
 0x018   4      height        Terrain::tileAt()       ✅
 0x01C  0x388   ?             Données internes        ❌
 0x3A4   N      tiles[]       Terrain::tileAt()       ✅
------  ------  -----------   ----------------------  ------
```

---

|## 🔄 Prochaines Étapes (Priorisées)

### Priorité 1 — Rendu Isométrique ✅
- [x] Nettoyer `Terrain::render(Tile*, float)` (0x10005990)
  - Pipeline complet : setup JGL → boucles tuiles → culling → textures
- [x] Nettoyer `Terrain::renderSingleTile()` + 5 helpers (getScreenX/Y, isVisible, isCulled, getView)
- [ ] Nettoyer `Terrain::renderTile(int, int, int, int, int)` (0x100080E0)
- [ ] Nettoyer `Terrain::stripRender(Tile*, int, float)` (0x10009270)
- [ ] Nettoyer `Terrain::drawLine(...)` (0x100011B3)
- [ ] Nettoyer `Terrain::drawCircle(...)` (0x10001186)
- [ ] Portage TypeScript du pipeline de rendu (IsometricRenderer.ts) ✅ partiel

### Priorité 2 — Moteur Graphique JGL (jgld.dll) ← EN COURS
- [ ] Analyser les exports de **jgld.dll** (1.1 Mo de code clair)
  - Wrapper OpenGL/DirectX ?
  - Fonctions matricielles (push, pop, loadIdentity)
  - Fonctions de texture (bind, create, delete)
  - Fonctions de rendu (draw arrays, draw elements)
- [ ] Cartographier les appels JGL utilisés par Terrain.dll
- [ ] Interface TypeScript pour le rendu (PixiJS/Phaser)
- [ ] Interface TypeScript pour le rendu (PixiJS/Phaser)

### Priorité 3 — Moteur Audio (sound.dll)
- [ ] Analyser les exports de sound.dll
- [ ] Portage Web Audio API

### Priorité 4 — Dépacketage du golf.exe
- [ ] Option A : Émuler le décompresseur (x86 emu)
- [ ] Option B : Wine + dump mémoire
- [ ] Option C : Trouver une version déjà dépackée (crack/No-CD)
- [ ] Accéder aux fonctions de jeu (simulation, économie, golfeurs)

### Priorité 5 — Simulation & Gameplay
- [ ] Analyse des fichiers data (.chr, .glf, .fot, .sve)
- [ ] Moteur de simulation de golf (physique de balle)
- [ ] Économie du club
- [ ] IA des golfeurs Sim
- [ ] Système de tournois

### Priorité 6 — Interface Mobile
- [ ] Adaptation tactile (drag-and-drop, appui long)
- [ ] Écran principal de construction
- [ ] Mode jeu (parcours)
- [ ] Menus et options

---

## 🔧 Outils & Techniques

### Désassemblage
- **Capstone** (python3-capstone) sur ARM64
- **Limite connue** : déraille sur les tables de données intercalées
- **Solution** : extraction fonction-par-fonction via prologues `55 8B EC`
- 760 fonctions détectées, 200+ réelles, 50 Ko de code
- 16% de couverture du .text (le reste = padding 0xCC + données)

### Analyse PE
- **readpe** (pev package) pour analyse PE32
- **pefile** (python3-pefile) pour extraction sections/exports
- Import minimum : KERNEL32, USER32, WINMM, binkw32, **Terrain.dll**
- **Export** : Terrain.dll importe et est importé par golf.exe (circuit étrange)

### Format des données
- PCX : textures et sprites
- .chr : personnages (golfeurs)
- .glf : données de golfeur ?
- .fot : polices bitmap
- .sve : sauvegardes (top10.sve)
- .pro : profils de golfeur
- .cab : archives InstallShield (5659 fichiers extraits)

---

## 📝 Notes Techniques

### Convention d'appel C++
Toutes les méthodes Terrain.dll utilisent `__thiscall` :
- `this` dans `ecx`
- Paramètres sur la stack (ordre C, pushed right-to-left)
- Caller nettoie la stack (`ret 8`, `ret 4` selon le nombre de paramètres explicites)
- Build **Debug** : stack frame 0x44 bytes + remplissage `0xCC`
- Helper de debug : `__chkesp` (call 0x100180A0)

### Packer golf.exe
- Sections `stxt371` et `stxt774` : nommées arbitrairement
- Stub auto-modifiant écrit des `JMP rel32` et `RET` sur lui-même
- Vrai OEP : `0x4A5F9F`
- Fonction décompresseur : `0x8430FA` (COM/OLE, allocations multiples)
- Non identifié comme UPX/ASPack/PECompact/UPack connu — **packer custom EA**
- Versions : v1.0 (20/12/2001) et v1.03 (29/03/2002), toutes deux packées

---

## 🚧 Problèmes Connus

1. **Capstone ARM64** : désassemblage incomplet du .text de Terrain.dll (données intercalées)
2. **golf.exe packé** : code du jeu inaccessible sans dépaquetage
3. **Structure Tile** : 524 bytes non analysés (offset 0x028-0x233)
4. **jgld.dll packé** : wrapper graphique principal illisible (entropie 6.56)
5. **jgld.dll OK** : 1.1 Mo de code clair
6. **Compréhension partielle** du pipeline de rendu isométrique

---

## 📐 Architecture Cible (Web Port)

```
web_port/
├── core/                    # Logique de simulation pure
│   ├── TerrainTileSystem.ts ✅  (Moteur terrain)
│   ├── GolfSimulation.ts    ❌  (Physique balle)
│   ├── EconomySystem.ts     ❌  (Économie club)
│   ├── PersonaSystem.ts     ❌  (IA golfeurs)
│   └── ...
│
├── view/                    # Rendu graphique
│   ├── IsometricRenderer.ts ❌  (Rendu isométrique)
│   ├── TileRenderer.ts      ❌  (Rendu tuile)
│   ├── SpriteManager.ts     ❌  (Gestion sprites)
│   └── ...
│
└── ui/                      # Interface utilisateur
    ├── Toolbar.tsx           ❌  (Barre d'outils construction)
    ├── CourseMap.tsx         ❌  (Mini-carte)
    ├── SimPanel.tsx          ❌  (Panneau infos golfeur)
    └── ...
```

---

*Document généré le 18 Mai 2026 — Hermes-RE*
*Prochaine mise à jour : après nettoyage du moteur de rendu isométrique*
