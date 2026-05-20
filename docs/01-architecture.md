# Architecture Technique

> **Confiance :** ✅ Élevée — issu du désassemblage direct de golf.exe et des DLLs

---

## 1. Structure Générale

```
golf.exe (946 Ko dépaqueté, 1.9 Mo packé)
├── .text      (754 Ko) — code exécutable, ~1900+ fonctions
├── .rdata     (288 Ko) — chaînes, tables, données constantes
├── .data      (3.7 Mo) — données globales, objets du jeu
├── .rsrc      (4 Ko)   — ressources Windows
└── 3 sections supplémentaires (packer residue)
```

### Dépendances

| DLL | Rôle | Imports dans EXE |
|-----|------|:----------------:|
| **Terrain.dll** | Rendu 3D isométrique (OpenGL) | 26 exports |
| **jgld.dll** | Moteur 2D (GDI32) — sprites, polices, framebuffer | Export unique |
| **sound.dll** | Audio (WAVE/MIDI) | 12 exports |
| **binkw32.dll** | Cutscenes Bink Video | 16 imports |
| **WINMM** | Windows Multimedia (audio bas niveau) | 6 imports |
| **KERNEL32** | OS Core | 77 imports |
| **USER32** | Fenêtrage | 24 imports |
| **GDI32** | Graphismes 2D (via jgld.dll) | (dans jgld) |

### Point d'Entrée

```
WinMain @ 0x004a682f
├── HeapSetup()         @ 0x4a794d  — configure le tas
├── SystemCheck()       @ 0x4a8dec  — vérifie OS + résolution
├── InitGameSystems()   @ 0x4a93ff  — init tous les sous-systèmes
├── GetModuleHandle()   @ thunk 0x4ba0bc
├── CreateMainWindow()  @ ~0x4ab240 — crée la fenêtre
├── InitSound()         @ ~0x4aaff3 — sound.dll
├── InitGraphics()      @ ~0x4aaf3a — jgld.dll (JGL)
├── InitGameState()     @ 0x4a50db — charge données + UI
├── SetTimer()          — démarre la boucle de jeu
├── GameLoopCallback()  @ 0x4a5108 — première frame
├── Boucle messages     @ 0x4aad6a — message pump
└── CleanupAndExit()    @ 0x4a5119 — sortie
```

---

## 2. Boucle de Jeu

Le jeu n'a **pas** de boucle de message classique (`PeekMessage`). Il utilise `SetTimer`/`KillTimer` :

```
WinMain:
  SetTimer(hWnd, 1, interval, NULL)
  → Le timer Windows appelle GameLoopCallback() à intervalle régulier

GameLoopCallback @ 0x4a5108:
  ├── Traite les messages Windows (GetMessage/DispatchMessage)
  ├── GameTickFunction @ 0x49846c  — SIMULATION
  │   ├── 16 slots × 88 bytes (0x58)
  │   ├── WaitForMultipleObjects(2 slots) — timeout 20s
  │   ├── SEH protégé (__try/__except)
  │   └── Appelle InputHandler si événement
  ├── UI_Update() — met à jour l'interface
  └── Render() — Terrain::render + JGL composite → BitBlt
```

### Fréquence d'images

| Mode | Refresh |
|------|---------|
| Jeu normal | Timer Windows (~60 FPS?) |
| Animation golfeur | Timer Windows (~30 FPS?) |

> ⚠️ La fréquence exacte n'a pas été mesurée — elle dépend de `SetTimer` et du temps de rendu.

---

## 3. Modèle Mémoire

### Objets Globaux

| Adresse | Taille | Contenu |
|---------|:------:|---------|
| `0x008400b0` | 4 | Pointeur GameState (objet principal) |
| `0x00842160` | 4 | hInstance (handle d'instance) |
| `0x00840aac` | 4 | HWND (handle fenêtre) |
| `0x00842040` | 0x480 | InitPool (32 slots × 0x24) |
| `0x0080d840` | ~0x960 | TournamentObj array (22 × 0x6c) |

### GameState (structure principale)

**Adresse :** pointée par `[0x008400b0]`
**Taille estimée :** plusieurs Ko

| Offset | Taille | Champ | Rôle |
|--------|:------:|-------|------|
| +0xf0 | 4 | delayBetweenShots | Délai entre tirs (5/10/20/30s) |
| +0x170 | 4 | slot[0].golferId | ID golfeur slot 0 |
| +0x180 | 4 | slot[0].timer | Timer slot 0 |
| +0x184 | 1 | slot[0].state | État du slot |
| +0x1c8 | 4 | slot[1].golferId | ID golfeur slot 1 |
| +0x1d8 | 4 | slot[1].timer | Timer slot 1 |
| +0x77c | 4 | currentGolfer | Golfeur actif |
| +0x780 | 4 | previousGolfer | Golfeur précédent |

**Stride des slots :** 0x58 (88 bytes) × 16 slots
**Structure d'un slot (0x58 bytes) :**
```
+0x00 : golferId  (int)
+0x04 : timer     (int, timeGetTime)
+0x08 : state     (char)
+0x09-0x57 : données spécifiques
```

### Tournois : TournamentObj Array

**Adresse :** `0x0080d840`
**Stride :** 0x6c (108 bytes)
**Nombre :** ~22 entrées (14 types + réserves)

| Offset | Taille | Champ |
|--------|:------:|-------|
| +0x00 | 4 | name (char* pointer to string in .rdata) |
| +0x04 | 4 | prizePool (int) |
| +0x08 | 4 | entryFee (int) |
| +0x0c | 4 | minHoles (int) |
| +0x10 | 4 | prestigeReq (int) |
| +0x14 | 4 | prestigeGain (int) |
| +0x18 | 4 | fieldSize (int) |
| +0x1c | 4 | courseTheme (int, -1=tous) |
| +0x20 | 4 | sgaRequired (int, 0-100) |
| +0x24 | 4 | tier (int, 1-10) |
| +0x28 | 0x44 | Résultats / état variable |

---

## 4. Gestion des Erreurs

Le jeu utilise **SEH (Structured Exception Handling)** de MSVC :

```asm
; Prologue de GameTickFunction
mov  ecx, dword ptr fs:[0]  ; chaîne SEH
push ecx
mov  dword ptr fs:[0], esp
; ... code protégé ...
mov  ecx, dword ptr [esp + 0x2e8]
pop  edi
mov  dword ptr fs:[0], ecx  ; restaure chaîne SEH
```

Cela permet de catcher les `access violations` et autres exceptions fatales sans crasher.

---

## 5. Dépendances OpenGL (Terrain.dll)

Terrain.dll importe 44 fonctions OpenGL :
- `glBegin`/`glEnd` — primitives
- `glBindTexture` — textures
- `glTexCoord2f` — coordonnées de texture
- `glVertex3f` — sommets
- `glNormal3f` — normales
- `glLight*` — éclairage
- `glMatrix*` — transformations
- `glEnable`/`glDisable` — états

Le rendu du terrain est donc **pure OpenGL 1.x** (pas de DirectX).

---

## 6. Outils de la Chaîne de RE

| Outil | Usage |
|-------|-------|
| `objdump` | Désassemblage massif (1.1M lignes) |
| `strings` | Extraction de chaînes |
| `xxd` / `hexdump` | Analyse binaire |
| Python + `capstone` | Désassemblage fonction-level |
| Python + `pefile` | Analyse PE |
| Python + `struct` | Analyse de données binaires |
