"""
SimGolf Reverse Engineering — Game Initialization (FUN_00442180)
================================================================
Translation of FUN_00442180 from Ghidra decompiled C.

Clears game state arrays (DAT_00575ab0 hole data, DAT_005794b8 terrain data),
initializes entity lists, sets up course for play, and loads all assets.

Key:
  - param_1 == 0: quick init (load course assets via FUN_0043DBE0)
  - param_1 != 0: full init (load ALL palettes, sprites, animations, UI)
"""

from __future__ import annotations

import random
from typing import Final, List, Tuple

# ── Constants ─────────────────────────────────────────────────────────────────

HOLE_STRIDE: Final[int] = 0x208  # DAT_00575ab0 stride
TERRAIN_LEN: Final[int] = 0x2700  # 0x9c00 bytes / 4
OBJECT_LEN: Final[int] = 0x4c0   # DAT_00585850
GOLFER_LIST_LEN: Final[int] = 0x668a  # DAT_00543d10
TILE_COUNT: Final[int] = 0x98   # 152 tiles max

# Per-tile fields in DAT_005794b8.. region (stride 0x40 per tile)
TERRAIN_FIELDS = {
    "x": 0,      # b8 - int32
    "y": 4,      # bc - int32  
    "y_bounds": 8,    # c0 - int32
    "x_bounds": 12,   # c4 - int32
    "flags": 16,      # c8 - int32
    "type": 24,       # d0 - byte
    "subtype": 25,    # d1 - byte
    "dir": 26,        # d2 - byte
    "attr": 27,       # d3 - byte
    "phase": 28,      # d4 - byte
    "state": 29,      # d5 - byte
    "delay": 30,      # d6 - byte
    "wind": 31,       # d7 - byte
    "moved": 32,      # d8 - byte
    "hole_idx": 33,   # d9 - signed byte
    "subhole": 34,    # da - byte
    "height_adj": 35, # db - byte
}


# ═══════════════════════════════════════════════════════════════════════════════
#  GameState — mirror of global data arrays
# ═══════════════════════════════════════════════════════════════════════════════

class GameState:
    """Encapsulates all global arrays modified by game init.

    Mirrors the binary layout of the golf.exe globals.
    """

    def __init__(self) -> None:
        # ── Hole data (DAT_00575ab0 — stride 0x208 per hole) ────────────
        self.hole_data: List[bytearray] = [
            bytearray(HOLE_STRIDE) for _ in range(TILE_COUNT)
        ]

        # ── Terrain tile data (DAT_005794b8 plus adjacent fields) ──────
        # Each tile occupies 0x40 bytes.  We use a flat list for the raw
        # storage and provide accessor methods.
        self.terrain_raw: List[bytearray] = [
            bytearray(0x40) for _ in range(TILE_COUNT)
        ]

        # ── Object/entity list (DAT_00585850 — 304 entries × 4 bytes) ──
        self.objects: List[int] = [0] * 0x4c0

        # ── Various 4-byte arrays ───────────────────────────────────────
        self.arr_5409ac: List[int] = [0] * 0xfa
        self.arr_51b388: List[int] = [0] * 0xfa
        self.arr_53e63c: List[int] = [0] * 0xfa
        self.arr_520640: List[int] = [0] * 0xfa
        self.arr_568600: List[int] = [0] * 0xfa
        self.arr_59dea0: List[int] = [0] * 0x20
        self.arr_584210: List[int] = [0] * 500
        self.arr_56ae70: List[int] = [0] * 0x5c0
        self.arr_5422f8: List[int] = [0] * 0x3c  # 60 entries (9×6 + spare)

        # ── Index mapping (DAT_0059bfc4 — sequential IDs) ──────────────
        self.index_map: List[int] = list(range(0x20))

        # ── Hole flags (DAT_0059ae80 — stride, init to -1) ─────────────
        self.hole_flags: List[int] = [0xffffffff] * 0x72

        # ── Occupancy / flags (DAT_0053caf0) ───────────────────────────
        self.occupancy: List[int] = [0] * 0x4e2

        # ── Additional terrain arrays ───────────────────────────────────
        self.arr_53ea24: List[int] = [0] * 0x271

        # ── Trainee/score arrays (DAT_005a4998) ────────────────────────
        self.arr_5a4998: List[int] = [0] * 0x28a

        # ── Misc globals ────────────────────────────────────────────────
        self.DAT_005685f0: int = 1       # course loaded flag
        self.DAT_0059b730: int = 0       # building count / seq ID
        self.DAT_0059ae7c: int = 0       # golfer count

        # ── 8bcb8 array (DAT_0058bcb8 — 16-bit entries, stride 8) ─────
        self.arr_58bcb8: List[int] = [0xffff] * 8  # stride-8, 0x1000 range

    # ── Terrain helpers ───────────────────────────────────────────────────────

    def get_tile_raw(self, idx: int, offset: int) -> int:
        return self.terrain_raw[idx][offset]

    def set_tile_raw(self, idx: int, offset: int, value: int) -> None:
        self.terrain_raw[idx][offset] = value & 0xff

    def get_tile_x(self, idx: int) -> int:
        """DAT_005794b8 — tile X coordinate (int32)."""
        return int.from_bytes(self.terrain_raw[idx][0:4], "little", signed=True)

    def set_tile_x(self, idx: int, val: int) -> None:
        self.terrain_raw[idx][0:4] = val.to_bytes(4, "little", signed=True)

    def get_tile_y(self, idx: int) -> int:
        """DAT_005794bc — tile Y coordinate."""
        return int.from_bytes(self.terrain_raw[idx][4:8], "little", signed=True)

    def set_tile_y(self, idx: int, val: int) -> None:
        self.terrain_raw[idx][4:8] = val.to_bytes(4, "little", signed=True)

    def get_tile_type(self, idx: int) -> int:
        """DAT_005794d0 — tile terrain type byte."""
        return self.terrain_raw[idx][0x18]

    def set_tile_type(self, idx: int, val: int) -> None:
        self.terrain_raw[idx][0x18] = val & 0xff

    def get_tile_flags(self, idx: int) -> int:
        """DAT_005794c8 — tile flags bitfield (int32)."""
        return int.from_bytes(self.terrain_raw[idx][0x10:0x14], "little", signed=True)

    def set_tile_flags(self, idx: int, val: int) -> None:
        self.terrain_raw[idx][0x10:0x14] = val.to_bytes(4, "little", signed=True)

    def get_tile_hole_index(self, idx: int) -> int:
        """DAT_005794d9 — signed byte hole index."""
        val = self.terrain_raw[idx][0x19]  # d9
        return val if val < 128 else val - 256

    def set_tile_hole_index(self, idx: int, val: int) -> None:
        self.terrain_raw[idx][0x19] = val & 0xff

    def get_tile_subhole(self, idx: int) -> int:
        """DAT_005794da — byte subhole index."""
        return self.terrain_raw[idx][0x1a]

    def set_tile_subhole(self, idx: int, val: int) -> None:
        self.terrain_raw[idx][0x1a] = val & 0xff

    def get_tile_height_adj(self, idx: int) -> int:
        """DAT_005794db — height adjustment byte."""
        return self.terrain_raw[idx][0x1b]

    def set_tile_height_adj(self, idx: int, val: int) -> None:
        self.terrain_raw[idx][0x1b] = val & 0xff

    def get_tile_dx(self, idx: int) -> int:
        """DAT_005794d2 — direction byte."""
        return self.terrain_raw[idx][0x1a]  # d2 = offset 0x1a

    def set_tile_dx(self, idx: int, val: int) -> None:
        self.terrain_raw[idx][0x1a] = val & 0xff


# ═══════════════════════════════════════════════════════════════════════════════
#  Core initialization
# ═══════════════════════════════════════════════════════════════════════════════

def game_init(state: GameState, param_1: int) -> None:
    """FUN_00442180 — Game / Course Initialization.

    Args:
        state: GameState object mirroring all global arrays.
        param_1: 0 = quick init (load course assets only),
                 non-zero = full init (load all assets/palettes).
    """
    # ── Step 1: Clear major arrays ──────────────────────────────────────
    _clear_arrays(state)

    # ── Step 2: Index initialization ────────────────────────────────────
    state.index_map = list(range(0x20))
    state.arr_58bcb8 = [0xffff] * 8

    # ── Step 3: Random distribution loop ────────────────────────────────
    _random_distribution(state)

    # ── Step 4: Conditional init ────────────────────────────────────────
    if param_1 == 0:
        # Quick init: load course assets (FUN_0043DBE0 equivalent)
        _load_course_assets(state)
    else:
        # Full init: load all assets, palettes, animations
        _full_asset_load(state)


# ═══════════════════════════════════════════════════════════════════════════════
#  Internal helpers
# ═══════════════════════════════════════════════════════════════════════════════

def _clear_arrays(state: GameState) -> None:
    """Clear all game-state arrays to zero (lines 40-123 of C)."""
    # Hole data — DAT_00575ab0: 0xa28 uint32 entries = 0xa28
    for i in range(TILE_COUNT):
        state.hole_data[i] = bytearray(HOLE_STRIDE)

    # Terrain — DAT_005794b8: 0x2700 uint32 entries
    state.terrain_raw = [bytearray(0x40) for _ in range(TILE_COUNT)]

    # Object list — DAT_00585850: 0x4c0 entries
    state.objects = [0] * 0x4c0

    # Various arrays
    state.arr_5409ac = [0] * 0xfa
    state.arr_51b388 = [0] * 0xfa
    state.arr_53e63c = [0] * 0xfa
    state.arr_520640 = [0] * 0xfa
    state.arr_568600 = [0] * 0xfa
    state.arr_59dea0 = [0] * 0x20
    state.arr_584210 = [0] * 500
    state.arr_56ae70 = [0] * 0x5c0
    state.arr_5422f8 = [0] * 0x3c

    # Flags and misc
    state.DAT_005685f0 = 1
    state.hole_flags = [0xffffffff] * 0x72
    state.occupancy = [0] * 0x4e2
    state.arr_53ea24 = [0] * 0x271
    state.arr_5a4998 = [0] * 0x28a

    # The C code also writes one extra null byte past arr_5a4998 but
    # our list-of-lists approach handles it naturally.


def _random_distribution(state: GameState) -> None:
    """Random distribution loop for course setup (lines 137-158 of C).

    Uses FUN_0045c1e0(n) which returns random(0..n-1).
    Distributes 9 hole types across the DAT_005422f8/54230c arrays.
    """
    def rand_below(n: int) -> int:
        """FUN_0045c1e0 — returns random value in [0, n)."""
        return random.randrange(n)

    state.DAT_0059b730 = 0
    uVar13 = 0

    while uVar13 < 9:
        # Find an unassigned hole type slot (DAT_0054230c[idx*6] == 0)
        while True:
            uVar4 = rand_below(9)
            uVar4 &= 0xffff
            if state.arr_5422f8[uVar4 * 6] == 0:
                # Note: DAT_0054230c is at offset 0x14 from DAT_005422f8
                # We use a unified arr_5422f8 of 0x3c bytes
                break

        # Assign random sub-slots
        iVar6 = uVar13 + 1
        while iVar6 != 0:
            r = rand_below(4)
            iVar5 = (r & 0xffff) + uVar4 * 6
            state.arr_5422f8[iVar5] = state.arr_5422f8[iVar5] + 1
            iVar6 -= 1
            state.arr_5422f8[uVar4 * 6] = state.arr_5422f8[uVar4 * 6] + 1
            uVar13 = uVar13  # original C: doesn't change inside loop

        uVar13 += 1


def _load_course_assets(state: GameState) -> None:
    """FUN_0043DBE0 — Load course terrain/building assets (stub).

    In the original C this loads all theme-specific .pcx palette files,
    animation definitions, terrain tiles, building sprites, etc.
    We record that the assets were loaded.
    """
    state.DAT_005685f0 = 1


# ═══════════════════════════════════════════════════════════════════════════════
#  Full asset loading (param_1 != 0 branch)
# ═══════════════════════════════════════════════════════════════════════════════

def _full_asset_load(state: GameState) -> None:
    """Load ALL game assets including palettes, sprites, animations, UI.

    This corresponds to the param_1 != 0 branch (lines 159-1843 of C).
    The original C function loads every .pcx file, registers every animation
    sequence, and builds all UI panels via FUN_00475840/FUN_00473BF0 calls.

    We abstract this into logical groups since the actual rendering requires
    the full game engine.
    """
    state.DAT_0059ae7c = 0

    # ── Clear golfer data array (DAT_00543d10) ──────────────────────────
    # 0x668a × 4 bytes cleared to zero

    # ── Initialize golfer index mapping (DAT_005a9370 → -1) ────────────
    # 0x24e entries set to 0xffffffff

    # ── Initialize additional arrays ────────────────────────────────────
    # DAT_0053f3e8 → 0 (0x24e entries)
    # DAT_008156d0 → 0 (0x1ccf entries)

    # ── Golfer name buffer (DAT_00820b70) ───────────────────────────────
    # First entry = 0xfffffffe, rest = -1 (100 entries)

    # ── Load body swap palettes (MaleSwap01-10, FemaleSwap01-10) ────────
    _load_palettes(state)

    # ── Load scenic elements, bridges, benches, flags ───────────────────
    _load_scenic(state)

    # ── Load golfer animation sets ──────────────────────────────────────
    _load_golfer_anims(state)

    # ── Load employee/animal/celebrity animations ───────────────────────
    _load_npc_anims(state)

    # ── Load building/house sprites ─────────────────────────────────────
    _load_buildings(state)

    # ── Load interface panels ───────────────────────────────────────────
    _load_ui_panels(state)

    # ── Load course select buttons ──────────────────────────────────────
    _load_course_select(state)


def _load_palettes(state: GameState) -> None:
    """Load all body swap, tree, scenic, and landmark palettes."""
    "Stub: loads ~180 palette files via FUN_00475840 (body swaps, trees, "
    "scenery, landmarks, animals, buildings, employees)."
    pass


def _load_scenic(state: GameState) -> None:
    """Load scenic decoration sprites."""
    "Stub: bridges, benches, flags, hole markers, etc."
    pass


def _load_golfer_anims(state: GameState) -> None:
    """Load golfer animation sets."""
    "Stub: male/female walk/swing/putt animations for all body types."
    pass


def _load_npc_anims(state: GameState) -> None:
    """Load employee, animal, and celebrity animations."""
    "Stub: greeters, rangers, caddies, animals (elk/crane/flamingo), "
    "celebrities (action star, pop singer, politician, etc.)."
    pass


def _load_buildings(state: GameState) -> None:
    """Load building and house sprites."""
    "Stub: summer homes, political homes, art deco homes, desert celeb houses."
    pass


def _load_ui_panels(state: GameState) -> None:
    """Load all UI panel graphics."""
    "Stub: golfer stats, course info, terrain panel, elevation panel, "
    "building panel, amenities, member panel, employee panel, etc."
    pass


def _load_course_select(state: GameState) -> None:
    """Load course selection theme buttons."""
    "Stub: parkland, desert, tropical, links theme buttons and tack/arrow icons."
    pass
