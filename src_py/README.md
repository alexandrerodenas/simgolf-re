# SimGolf RE — Traduction Python

Ce répertoire contient la traduction Python du code C décompilé par Ghidra
des 6 binaires de SimGolf.

## Structure

```
simgolf_re/
├── __init__.py      # Point d'entrée
├── types.py         # Types de base (Vec2, Vec3, Color, TileType)
├── render/
│   ├── __init__.py  # Backend de rendu abstrait
│   └── terrain_render.py  # Rendu isométrique (render, renderTile, changeLighting)
├── terrain/
│   ├── __init__.py       # Classe Terrain + Tile
│   ├── thunk_map.py      # Mapping thunk_FUN_ → noms lisibles
│   └── extra_translations.py  # tileHit, drawSpline, layPath
├── golf/
│   ├── __init__.py  # Point d'entrée golf
│   ├── swing.py     # Swing à deux barres
│   └── physics.py   # Physique balle (trajectoire, vent, rebond)
└── audio/
    └── __init__.py  # Système audio (sound.dll)
```

## Utilisation

```python
from simgolf_re.terrain import Terrain, TerrainConfig
from simgolf_re.golf import SwingMeter, BallPhysics
```

## Sources Ghidra

Le code C original décompilé se trouve dans `ref/decompiled/ghidra/`.
