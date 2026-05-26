"""
src_py/simgolf_re — Traduction Python du code décompilé de SimGolf.

Basée sur le code C décompilé par Ghidra depuis les 6 binaires :
- Terrain.dll (917 fonctions)
- golf.exe (1703 fonctions)
- jgld.dll (1317 fonctions)
- jgl.dll (575 fonctions)
- sound.dll (1602 fonctions)
- binkw32.dll (427 fonctions)

Chaque module traduit le(s) fichier(s) .c correspondant(s) de façon
fidèle, sans logique inventée.
"""

from . import _terrain_types
from . import terrain_core

from . import golf_event
from . import golf_physics
from . import golf_ai
from . import golf_course
from . import golf_assets
from . import golf_init
from . import golf_scoring
from . import golf_golfer_ui
from . import golf_economy
from . import golf_editor
from . import golf_pathfinding
from . import golf_saveload
from . import golf_ui_screens
from . import golf_sound as golf_sound_module
from . import golf_time
from . import golf_members

from . import jgld_render
from . import jgl_graphics
from . import sound_engine
from . import binkw32_video
