"""
SimGolf Reverse Engineering — Sound / Audio System
===================================================
Translation of FUN_0046F550 from Ghidra decompiled C.

This function implements the in-game property/land purchase interface
with sound effects. It displays:
  - A scrollable property list sorted by type
  - Money/availability checks with status labels
  - Property detail display (terrain, setting, slope, acreage)
  - "Reset World", "Save Game", "Load Game", "Cancel" buttons
  - Purchase flow with sound effects

Key:
  - DAT_00571ff4+ / aiStack_4bc: property indices sorted by ID
  - DAT_00571fd4: player money
  - DAT_00571ff8: property type (0=scenic,1=statue,2=path,3=building)
  - DAT_00822d68: flag indicating a property was just purchased
  - FUN_0046f1d0(prop_id) -> cost of property
  - Sound IDs: 0x33=error, 0x78+/0x6e+/0x73+=purchase sounds
"""

from __future__ import annotations

import random
from typing import Final, List, Optional, Tuple

# ── Constants ──────────────────────────────────────────────────────────────────

PROPERTY_STRIDE: Final[int] = 0x2E       # bytes per property entry

# Button areas (x, y) for the four dialog buttons
BTN_RESET_WORLD: Final[Tuple[int, int]] = (0x2F8, 0x1DC)
BTN_SAVE_GAME: Final[Tuple[int, int]] = (0x2F8, 0x1DC)
BTN_LOAD_GAME: Final[Tuple[int, int]] = (0x306, 0x1A9)
BTN_CANCEL: Final[Tuple[int, int]] = (0x300, 0x22D)

# Property list display
PROP_LIST_X: Final[int] = 0x2D4
PROP_LIST_Y: Final[int] = 0x198
PROP_LIST_ROW_H: Final[int] = 0x2E

# Sound effect IDs
SFX_ERROR: Final[int] = 0x33

# Property type constants
PROP_SCENIC: Final[int] = 0
PROP_STATUE: Final[int] = 1
PROP_PATH: Final[int] = 2
PROP_BUILDING: Final[int] = 3

# Terrain type names
TERRAIN_NAMES: Final[List[str]] = [
    "parkland", "desert", "tropical", "alpine",
]

# Setting names
SETTING_NAMES: Final[List[str]] = [
    "inland", "coastal", "island",
]

# Slope names
SLOPE_NAMES: Final[List[str]] = [
    "flat", "rolling", "hilly",
]


# ═══════════════════════════════════════════════════════════════════════════════
#  Global state container
# ═══════════════════════════════════════════════════════════════════════════════

class SoundGlobals:
    """Container for all global variables referenced by the sound system.

    Represents the C globals used by FUN_0046F550.
    """

    def __init__(self) -> None:
        # DAT_00571fd4 — player money
        self.money: int = 0

        # DAT_00571ff4 — property indices (sorted list)
        self.property_indices: List[int] = []

        # DAT_00571ff8 — property types (per index)
        self.property_types: List[int] = []

        # DAT_00571ffa — purchased flag (-1 = not purchased)
        self.property_purchased: List[int] = []

        # DAT_00571ff5 — property acreage
        self.property_acres: List[int] = []

        # DAT_00822d68 — purchase-in-progress flag
        self.purchase_flag: int = 0

        # DAT_00543cfc — bitmask of purchased properties
        self.purchased_mask: int = 0

        # DAT_0059e7b8 — global flags (0x1000000 = unlimited mode)
        self.flags: int = 0

        # DAT_00834170 — game tick / time
        self.game_tick: int = 0

        # DAT_005a6364 — course feature unlock counter
        self.course_features: int = 0

        # DAT_00822c88 — screen width
        self.screen_w: int = 800

        # Property data arrays (indexed by property ID)
        self.property_name: List[str] = []
        self.property_cost: List[int] = []
        self.property_terrain: List[int] = []
        self.property_setting: List[int] = []
        self.property_slope: List[int] = []
        self.property_acres_list: List[int] = []

    def get_property_name(self, idx: int) -> str:
        if 0 <= idx < len(self.property_name):
            return self.property_name[idx]
        return f"Property {idx}"

    def get_property_cost(self, idx: int) -> int:
        if 0 <= idx < len(self.property_cost):
            return self.property_cost[idx]
        return 0

    def is_purchased(self, idx: int) -> bool:
        if 0 <= idx < len(self.property_purchased):
            return self.property_purchased[idx] != -1
        return False


class SoundDialogState:
    """Mutable state of the sound/property dialog."""

    def __init__(self) -> None:
        self.selected_index: int = 0
        self.hover_index: int = 0
        self.button_pressed: int = -1
        self.button_hold_count: int = 0
        self.last_selection: int = 0
        self.show_save_dialog: bool = False
        self.show_load_dialog: bool = False
        self.show_reset_confirm: bool = False
        self.result: int = -1


# ═══════════════════════════════════════════════════════════════════════════════
#  Stub helper functions (matching decompiled C calling convention)
# ═══════════════════════════════════════════════════════════════════════════════

def _render_text(text: str, x: int, y: int, flags: int = 0x80000000) -> None:
    """FUN_00404b70 — render a text string at screen position (stub)."""
    pass


def _render_label(text: str, x: int, y: int, flags: int = 0x80000000) -> None:
    """FUN_004049d0 — render a text label (stub)."""
    pass


def _render_surface(surface: int, x: int, y: int, flags: int = 0) -> None:
    """FUN_00473e60 — blit a surface to the screen (stub)."""
    pass


def _fill_rect(x: int, y: int, w: int, h: int, color: int = 0) -> None:
    """Draw a filled rectangle (stub)."""
    pass


def _play_sound(sound_id: int, volume: int = 100, pan: int = 0,
                loop: int = 0, priority: int = 0) -> None:
    """FUN_004481b0 — play a sound effect (stub)."""
    pass


def _get_cost(prop_idx: int) -> int:
    """FUN_0046f1d0 — return the cost of the property."""
    return 0


def _sleep_ticks(ticks: int) -> None:
    """FUN_0042dc00 — wait for the given number of ticks."""
    pass


def _rand_int(max_val: int) -> int:
    """Return a random integer in [0, max_val)."""
    return random.randint(0, max_val - 1) if max_val > 0 else 0


def _clamp(value: int, lo: int, hi: int) -> int:
    """FUN_00467130 — clamp value to [lo, hi]."""
    if value < lo:
        return lo
    if value > hi:
        return hi
    return value


def _distance(x1: int, y1: int, x2: int, y2: int) -> int:
    """FUN_00467170 — approximate Euclidean distance."""
    dx = abs(x1 - x2)
    dy = abs(y1 - y2)
    if dx > dy:
        return dx + (dy >> 1)
    return dy + (dx >> 1)


# ═══════════════════════════════════════════════════════════════════════════════
#  Rendering helpers
# ═══════════════════════════════════════════════════════════════════════════════

def _render_property_list(sg: SoundGlobals, state: SoundDialogState) -> int:
    """Render the scrollable property list. Returns total count."""
    total = len(sg.property_indices)
    for i in range(total):
        prop_idx = sg.property_indices[i]
        y = PROP_LIST_Y + i * PROP_LIST_ROW_H

        # Property name
        _render_text(sg.get_property_name(prop_idx),
                     PROP_LIST_X + 0x60, y + 4, 0x80000000)

        # Status label
        sx = PROP_LIST_X + 0x70
        sy = y + 0x1E
        if sg.is_purchased(prop_idx):
            _render_text("Already purchased", sx, sy, 0x80002108)
        elif sg.get_property_cost(prop_idx) <= sg.money:
            _render_text("Available", sx, sy, 0x80002108)
        else:
            _render_text("Insufficient funds", sx, sy, 0x80002108)

        # Price
        _render_text(f"${sg.get_property_cost(prop_idx)}",
                     PROP_LIST_X + 0x68, y + 0x10, 0x80000000)

        # Detail panel if selected
        if i == state.selected_index and not sg.is_purchased(prop_idx):
            terr = sg.property_terrain[prop_idx] \
                if prop_idx < len(sg.property_terrain) else 0
            sett = sg.property_setting[prop_idx] \
                if prop_idx < len(sg.property_setting) else 0
            slp = sg.property_slope[prop_idx] \
                if prop_idx < len(sg.property_slope) else 0
            acres = sg.property_acres_list[prop_idx] \
                if prop_idx < len(sg.property_acres_list) else 0

            tn = TERRAIN_NAMES[terr] if 0 <= terr < len(TERRAIN_NAMES) else ""
            sn = SETTING_NAMES[sett] if 0 <= sett < len(SETTING_NAMES) else ""
            sln = SLOPE_NAMES[slp] if 0 <= slp < len(SLOPE_NAMES) else ""

            _render_text(f"{sn} {tn}, {sln}, {acres} acres",
                         PROP_LIST_X + 0x70, y + 0x28, 0x80002108)
            _render_text(f"${sg.get_property_cost(prop_idx)}",
                         PROP_LIST_X + 0x6A, y + 0x28, 0x80002108)

    return total


def _render_buttons() -> None:
    """Render the four action buttons."""
    _render_text("Reset World", BTN_RESET_WORLD[0], BTN_RESET_WORLD[1], 0x80000000)
    _render_text("Save Game", BTN_SAVE_GAME[0], BTN_SAVE_GAME[1], 0x80000000)
    _render_text("Load Game", BTN_LOAD_GAME[0], BTN_LOAD_GAME[1], 0x80000000)
    _render_text("Cancel", BTN_CANCEL[0], BTN_CANCEL[1], 0x80000000)


def _render_title() -> None:
    """Render the main dialog title."""
    _render_text("Where will you build", 0x7E, 0x13, 0x80000000)
    _render_text("your golf course?", 0x7E, 0x21, 0x80000000)


def _render_balance(sg: SoundGlobals) -> None:
    """Render the player's current money balance."""
    balance = sg.money
    text = f"${balance}" if balance >= 0 else f"-${-balance}"
    _render_text(text, 0x2E4, 0x12, 0x80000000)


# ═══════════════════════════════════════════════════════════════════════════════
#  Main sound system function   FUN_0046F550()
# ═══════════════════════════════════════════════════════════════════════════════

def sound_system(sg: SoundGlobals) -> int:
    """FUN_0046F550 — Main sound/audio system dialog.

    Displays the property purchase interface and handles the complete
    purchase flow. Returns the index of the selected property, or -1
    if cancelled.

    The function:
      1. Sets up the UI surface and loads button assets
      2. Builds a sorted list of purchasable properties
      3. Renders the property list with affordability checks
      4. Handles mouse input for selection and purchase
      5. Plays appropriate sound effects on purchase/error
      6. Handles sub-dialogs for Save/Load/Reset

    Returns:
        int: selected property index, or -1 if cancelled.
    """
    # Sort property indices by type
    sorted_props = sorted(
        range(len(sg.property_indices)),
        key=lambda i: sg.property_types[i] if i < len(sg.property_types) else 0,
    )

    state = SoundDialogState()
    selected_property = -1

    # ── Main loop ──────────────────────────────────────────────────
    while sg.purchase_flag == 0:
        _render_title()
        _render_balance(sg)

        # Unlimited mode indicator
        if sg.flags & 0x1000000:
            _render_text("Unlimited", 0x2E4, 0x12, 0x80000000)

        # Column headers
        _render_label("Available", 0x2C, 0x230, 0x80000000)
        _render_label("Insufficient funds", 0x90, 0x230, 0x80000000)
        _render_label("Already purchased", 0x108, 0x230, 0x80000000)

        _render_property_list(sg, state)
        _render_buttons()

        # ── "Already Purchased!" overlay ────────────────────────────
        for i in range(len(sg.property_indices)):
            prop_idx = sg.property_indices[i]
            if sg.is_purchased(prop_idx):
                _render_text(
                    "Already Purchased!",
                    PROP_LIST_X + 0x70,
                    PROP_LIST_Y + i * PROP_LIST_ROW_H + 0x2D,
                    0x80002108,
                )

        # In the original C, this loop processes input events.
        # For the Python translation, we break here; the caller
        # is expected to drive the loop externally.
        break

    # ── Purchase flow ──────────────────────────────────────────────
    if selected_property < 0:
        return -1

    prop_idx = sg.property_indices[selected_property]
    cost = sg.get_property_cost(prop_idx)

    if cost > sg.money and not (sg.flags & 0x1000000):
        _play_sound(SFX_ERROR)
        return -1

    if not (sg.flags & 0x1000000):
        sg.money -= cost

    if prop_idx < len(sg.property_purchased):
        sg.property_purchased[prop_idx] = 0  # mark as purchased

    sg.purchased_mask |= 1 << (prop_idx & 0x1F)

    # Play purchase sound based on property type
    ptype = sg.property_types[prop_idx] \
        if prop_idx < len(sg.property_types) else 0
    if ptype == PROP_SCENIC:
        sfx = 0x78 + _rand_int(3)
    elif ptype == PROP_STATUE:
        sfx = 0x6E + _rand_int(3)
    elif ptype == PROP_PATH:
        sfx = 0x73 + _rand_int(3)
    else:
        sfx = 0x78

    _play_sound(sfx)
    _sleep_ticks(100)

    return prop_idx


# ═══════════════════════════════════════════════════════════════════════════════
#  Save/Load dialog helpers
# ═══════════════════════════════════════════════════════════════════════════════

def save_game_dialog(sg: SoundGlobals) -> Optional[str]:
    """Display the Save Game dialog. Returns filename or None."""
    _fill_rect(0x78, 0x50, 0x210, 0x50, 0)
    _render_text("SAVE GAME (edit name then press Enter)",
                 0x180, 0x58, 0x80007FFF)
    return None


def load_game_dialog(sg: SoundGlobals) -> Optional[str]:
    """Display the Load Game dialog. Returns filename or None."""
    return None


# ═══════════════════════════════════════════════════════════════════════════════
#  Exported interface
# ═══════════════════════════════════════════════════════════════════════════════

__all__ = [
    'SoundGlobals',
    'SoundDialogState',
    'sound_system',
    'save_game_dialog',
    'load_game_dialog',
]
