# SimGolf Reverse Engineering

**simgolf-re** — dossier de *reverse engineering* du jeu SimGolf (2002, Maxis/Firaxis).

## Structure

```
simgolf-re/
├── data/               fichiers originaux du jeu (338 MB)
│   ├── exe_unpacked/   golf.exe dépaqueté
│   └── raw/            DLLs, textures, audio, animations, fonts…
│
├── ref/                documentation + analyse
│   └── decompiled/     code C décompilé par Ghidra (6 535 fonctions)
│       ├── golf/       golf.exe — 1 702 fonctions
│       ├── Terrain/    Terrain.dll — 916 fonctions
│       ├── sound/      sound.dll — 1 601 fonctions
│       ├── jgl/        jgl.dll — 574 fonctions
│       ├── jgld/       jgld.dll — 1 316 fonctions
│       └── binkw32/    binkw32.dll — 426 fonctions
│
├── scripts/            scripts Ghidra
└── README.md
```

## Binaires décompilés

| Fichier | Source | Fonctions |
|:---|:---|:---|
| `golf.exe` | `data/exe_unpacked/golf.exe` | **1 702** (1 464 disassemblées) |
| `Terrain.dll` | `data/raw/Terrain.dll` | **916** |
| `sound.dll` | `data/raw/sound.dll` | **1 601** |
| `jgld.dll` | `data/raw/jgld.dll` | **1 316** |
| `jgl.dll` | `data/raw/jgl.dll` | **574** |
| `binkw32.dll` | `data/raw/binkw32.dll` | **426** |
| **Total** | | **6 535** |

Chaque binaire dans `ref/decompiled/ghidra/<binaire>/` contient :
- `all_decompiled.c` — toutes les fonctions concaténées
- Fichiers individuels `nom_fonction.c`

## Outils

- **Ghidra 12.1** — décompilation des 6 binaires
- **Rizin 0.8.2** — désassemblage, analyse
