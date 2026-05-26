"""
SimGolf Reverse Engineering — Course Routing & Employee Screen (FUN_00456BE0)
==============================================================================
Translation of FUN_00456be0 from Ghidra decompiled C.

This function renders the course routing map / employee management overlay.
It shows:
  - A grid map of the course with terrain/ownership coloring
  - Hole routing numbers & labels
  - Employee list with morale/status indicators
  - Mode-specific overlays: Course Routing (-1), Course Aura (1), Home Site Value (2)
  - Supports click-to-select holes, swap holes, and scroll employee list

Key globals:
  DAT_005722e8  — Course layout grid (50×50 byte grid)
  DAT_0058dd34  — Terrain type mapping table
  DAT_00578376  — Terrain properties table (stride 0x30)
  DAT_00575ab0  — Hole data array (stride 0x208)
  DAT_0059ae80  — Hole routing flags (stride 6 shorts)
  DAT_0053caf0  — Occupancy grid
  DAT_0051a068  — Global string buffer
  DAT_00519cd4  — Primary rendering surface
  DAT_00821ee8  — UI text rendering surface
  DAT_00821020  — Another rendering surface
  DAT_00821f28  — Tooltip surface
  DAT_004d20dc  — Display mode (-1=routing, 0=employee, 1=aura, 2=home value)
  DAT_00585863  — Employee data array (stride 0x4c)
  DAT_00822b80  — Mouse hover flag
  DAT_00822b84  — Current color/palette selection
  DAT_0083ad50  — Audio/input handler interface
  DAT_005685f4  — Current game time
  DAT_00822d60  — Mouse X position
  DAT_00822d64  — Mouse Y position
  DAT_00822d68  — Mouse click type (0=none, 1=left, 2=right)
  DAT_005a34e0  — Course theme
  DAT_005685f0  — Hole count
"""

from __future__ import annotations

from typing import Final, List, Optional, Tuple

# ── Constants ───────────────────────────────────────────────────────────────────
GRID_SIZE: Final[int] = 0x32            # 50
GRID_CELL_W: Final[int] = 8             # pixels per grid cell
GRID_CELL_H: Final[int] = 8
GRID_ORIGIN_X: Final[int] = 0x184       # pixel origin for grid
GRID_ORIGIN_Y: Final[int] = 0x68
HOLE_STRIDE: Final[int] = 0x208
TERRAIN_STRIDE: Final[int] = 0x30
EMPLOYEE_STRIDE: Final[int] = 0x4c
ROUTING_STRIDE: Final[int] = 6          # shorts per hole in DAT_0059ae80
MAX_EMPLOYEES: Final[int] = 100

# Display modes
MODE_EMPLOYEE: Final[int] = 0
MODE_ROUTING: Final[int] = -1
MODE_AURA: Final[int] = 1
MODE_HOME_VALUE: Final[int] = 2

# ── String table ────────────────────────────────────────────────────────────────
STR_EMPLOYEES: Final[str] = "Employees"
STR_ROUTING_MAP: Final[str] = "ROUTING MAP"
STR_COURSE_ROUTING: Final[str] = "COURSE ROUTING"
STR_LEFT_CLICK: Final[str] = "Left click to select hole..."
STR_RIGHT_CLICK: Final[str] = "Right click to swap holes..."
STR_HOLE_LABEL: Final[str] = "Hole"
STR_COURSE_AURA: Final[str] = "COURSE AURA"
STR_HAPPY: Final[str] = "Happy"
STR_UNHAPPY: Final[str] = "Unhappy"
STR_HOME_SITE_VALUE: Final[str] = "HOME SITE VALUE"
STR_COURSE_AURA_DESC: Final[str] = "Course AURA indicates where on your course..."
STR_INCREASE_VALUE: Final[str] = "Things which INCREASE home value:"
STR_CLOSE_WATER: Final[str] = "Close to water and trees..."
STR_CLOSE_FUN_HOLE: Final[str] = "Close to a fun golf hole..."
STR_CLOSE_TOP_HOLE: Final[str] = "Close to a top 100 or top 18 hole..."
STR_BUILDING_A: Final[str] = "Building a"
STR_MARINA: Final[str] = "Marina"
STR_DECREASE_VALUE: Final[str] = "Things which DECREASE home value:"
STR_CLOSE_UNFUN_HOLE: Final[str] = "Close to an unfun hole..."
STR_CLOSE_OTHER_BUILDING: Final[str] = "Close to another building..."
STR_TOO_CLOSE_GREEN: Final[str] = "Too close to green, fairway, or OB..."
STR_FAR_FROM_COURSE: Final[str] = "Far away from the golf course..."
STR_HIRED: Final[str] = "Hired."
STR_PLAYERS_GREETED: Final[str] = "Players greeted."
STR_PLAYERS_CHEERED: Final[str] = "Players cheered."
STR_PLAYERS_RUSHED: Final[str] = "Players rushed."
STR_SLACKERS_INTIMIDATED: Final[str] = "Slackers intimidated."
STR_WEEDS_DESTROYED: Final[str] = "Weeds destroyed."
STR_WEEDS_ERADICATED: Final[str] = "Weeds eradicated."
STR_BEVERAGES_SERVED: Final[str] = "Beverages served."
STR_SATISFIED_CUSTOMERS: Final[str] = "Satisfied customers."

# ── Color / palette constants (packed display IDs) ─────────────────────────────
COLOR_GRASS: Final[int] = 0x80003394
COLOR_SAND: Final[int] = 0x80001310
COLOR_WATER: Final[int] = 0x8000318c
COLOR_FAIRWAY: Final[int] = 0x80000204
COLOR_GREEN: Final[int] = 0x80006310
COLOR_ROUGH: Final[int] = 0x80005304
COLOR_TEE: Final[int] = 0x80001184
COLOR_OB: Final[int] = 0x80000218
COLOR_DISPLAY_BASE: Final[int] = 0x800010c8
COLOR_AURA_HAPPY: Final[int] = 0x80007ff0
COLOR_AURA_UNHAPPY: Final[int] = 0x80002000
COLOR_AURA_NORMAL: Final[int] = 0x80002108
COLOR_SELECTED: Final[int] = 0x800023e8
COLOR_SEL_OUTLINE: Final[int] = 0x80007fff
COLOR_DEFAULT: Final[int] = 0x80000000
COLOR_HIGHLIGHT: Final[int] = 0x80007ff0
COLOR_WHITE: Final[int] = 0x80000000
COLOR_EMPLOYEE_BG: Final[int] = 0x80006318


# ═══════════════════════════════════════════════════════════════════════════════
#  GameState — globals relevant to the routing screen
# ═══════════════════════════════════════════════════════════════════════════════

class GameState:
    """Encapsulates global arrays modified by FUN_00456be0."""

    def __init__(self) -> None:
        # ── Grids ──────────────────────────────────────────────────
        self.course_grid: List[bytearray] = [
            bytearray(GRID_SIZE) for _ in range(GRID_SIZE)
        ]
        self.terrain_lut: List[int] = [0] * 256
        self.terrain_props: List[bytearray] = [
            bytearray(TERRAIN_STRIDE) for _ in range(256)
        ]

        # ── Hole data ──────────────────────────────────────────────
        self.hole_data: List[bytearray] = [
            bytearray(HOLE_STRIDE) for _ in range(152)
        ]
        self.hole_routing: List[List[int]] = [
            [0] * 6 for _ in range(152)
        ]
        self.occupancy: List[int] = [0] * 0x4e2

        # ── Employee data (stride 0x4c) ────────────────────────────
        self.employees: List[bytearray] = [
            bytearray(EMPLOYEE_STRIDE) for _ in range(MAX_EMPLOYEES)
        ]

        # ── Scalar globals ─────────────────────────────────────────
        self.display_mode: int = 0
        self.mouse_hover: int = 0
        self.mouse_x: int = 0
        self.mouse_y: int = 0
        self.mouse_click: int = 0
        self.current_color: int = 0
        self.game_time: int = 0
        self.course_theme: int = 0
        self.hole_count: int = 0x13
        self.employee_count: int = 0
        self.scroll_offset: int = 0
        self.selected_hole: int = 1
        self.prev_selection: int = -1
        self.audio_handler: object = None

    # ── Terrain flag helpers ────────────────────────────────────────
    @property
    def terrain_flags(self) -> List[bytearray]:
        """Alias for terrain flags (DAT_005794d0-style)."""
        return self.course_grid


# ═══════════════════════════════════════════════════════════════════════════════
#  RenderBuffers — the surfaces / buffers passed to draw functions
# ═══════════════════════════════════════════════════════════════════════════════

class RenderBuffers:
    """Container for the rendering surfaces used by the screen."""

    def __init__(self) -> None:
        self.main: object = ...       # DAT_00519cd4
        self.ui_text: object = ...    # DAT_00821ee8
        self.surface2: object = ...   # DAT_00821020
        self.tooltip: object = ...    # DAT_00821f28
        self.text_buf: List[str] = [""]  # DAT_0051a068


# ═══════════════════════════════════════════════════════════════════════════════
#  Helper stubs
# ═══════════════════════════════════════════════════════════════════════════════

def _fill_rect(buffer: object, x: int, y: int, w: int, h: int, color: int) -> None:
    """FUN_00475df0 / FUN_00480b00 — Fill a rectangle on screen."""
    pass


def _draw_text(buffer: object, text: str, x: int, y: int, color: int) -> None:
    """FUN_00404b70 — Draw text on a surface."""
    pass


def _draw_text_centered(buffer: object, text: str, x: int, y: int, color: int) -> None:
    """FUN_004049d0 — Draw centered text."""
    pass


def _draw_text_bounded(buffer: object, text: str, x: int, y: int, max_w: int, color: int) -> None:
    """FUN_00478530 — Draw text with bounding box."""
    pass


def _render_surface(buffer: object, *args: object) -> None:
    """FUN_004762d0 — Blit/render a surface."""
    pass


def _grid_to_screen(grid_x: int, grid_y: int) -> Tuple[int, int]:
    """Convert grid coordinates to screen pixel coordinates."""
    return grid_x * 8 + 0x184, grid_y * 8 + 0x68


def _get_terrain_type(state: GameState, grid_x: int, grid_y: int) -> int:
    """FUN_00456b70 — Get the terrain type at a grid cell."""
    return state.course_grid[grid_x][grid_y]


def _draw_golfer_icon(buffer: object, x: int, y: int, color: int, size: int = 0x28) -> None:
    """FUN_004628d0 — Draw a golfer/icon at the given position."""
    pass


def _get_terrain_elevation(state: GameState, grid_x: int, grid_y: int) -> int:
    """FUN_0042ef40 — Get terrain elevation at grid cell."""
    return 0


def _get_terrain_moisture(state: GameState, grid_x: int, grid_y: int) -> int:
    """FUN_0040db90 — Get terrain moisture at grid cell."""
    return 0


def _check_game_input() -> bool:
    """FUN_0045c030 — Poll for pending input."""
    return False


def _is_escape_pressed() -> bool:
    """FUN_0045ae70 — Check if escape was pressed."""
    return False


def _notify_audio_handler(state: GameState, param: int) -> None:
    """Call audio handler callback (DAT_0083ad50)."""
    if state.audio_handler is not None:
        pass


def _circle_x(i: int, radius: int) -> int:
    """Compute X coordinate for a point on a circle (fixed-point multiply)."""
    return (i * 0xaaaaaaa * radius) // 0x10000000


def _circle_y(i: int, radius: int) -> int:
    """Compute Y coordinate for a point on a circle."""
    return (i * 0xaaaaaaa * radius) // 0x10000000


# ═══════════════════════════════════════════════════════════════════════════════
#  FUN_00456be0 — Main routing / employee screen
# ═══════════════════════════════════════════════════════════════════════════════

def fun_00456be0(state: GameState, bufs: RenderBuffers) -> None:
    """Render the course routing / employee / aura / home-value overlay.

    Runs in a loop until the user presses escape or selects an action.
    Supports four display modes via state.display_mode.
    """
    hole_order: List[int] = list(range(0x14))
    state.scroll_offset = 0
    state.prev_selection = -1

    # ── Count employees ──────────────────────────────────────────────
    employee_count: int = 0
    for emp in state.employees:
        if emp[0] != 0xfa and emp[-1] != 0 and emp[0] < 0:
            employee_count += 1
    state.employee_count = employee_count

    _notify_audio_handler(state, 1)

    # ═══════════════════════════════════════════════════════════════════
    #  Main event loop
    # ═══════════════════════════════════════════════════════════════════
    while True:
        # ── Frame clear (if not hovering) ──────────────────────────
        if state.mouse_hover == 0:
            _fill_rect(bufs.main, 0, 0, 0xfd, 0, COLOR_DEFAULT)
            _fill_rect(bufs.main, 0, 0, 0, 0, COLOR_DEFAULT)

        if state.display_mode == MODE_AURA:
            _render_aura_overlay(state, bufs)

        _notify_audio_handler(state, 5)

        # ── Render course grid ─────────────────────────────────────
        _render_course_grid(state, bufs)

        # ── Render routing / info panels ──────────────────────────
        _render_surface(bufs.tooltip, 0, 0, 0)
        bufs.text_buf.clear()
        bufs.text_buf.append("")
        _render_surface(bufs.surface2, 0, 0, 0)

        # Mode-specific header
        if state.display_mode == MODE_ROUTING:
            _draw_text(bufs.text_buf, STR_COURSE_ROUTING, 400, 0x55, COLOR_DEFAULT)
            _draw_text(bufs.text_buf, STR_LEFT_CLICK, 400, 0x6c, COLOR_DEFAULT)
            _draw_text(bufs.text_buf, STR_RIGHT_CLICK, 400, 0x7e, COLOR_DEFAULT)
            _draw_text(bufs.text_buf, STR_HOLE_LABEL, 0x47, 0x55, COLOR_DEFAULT)
            _draw_text(bufs.text_buf, STR_HOLE_LABEL, 0x234, 0x55, COLOR_DEFAULT)
            _draw_text(bufs.text_buf, "Front 9", 0x84, 0x55, COLOR_DEFAULT)
            _draw_text(bufs.text_buf, "Back 9", 0x276, 0x55, COLOR_DEFAULT)
            _draw_text(bufs.text_buf, "In", 0xb6, 0x55, COLOR_DEFAULT)
            _draw_text(bufs.text_buf, "Out", 0x2a8, 0x55, COLOR_DEFAULT)
            _draw_text(bufs.text_buf, "Total", 0xef, 0x55, COLOR_DEFAULT)
            _draw_text(bufs.text_buf, "Total", 0x2e1, 0x55, COLOR_DEFAULT)
            _render_hole_stats_table(state, bufs)

        elif state.display_mode == MODE_AURA:
            _draw_text(bufs.text_buf, STR_COURSE_AURA, 400, 0xbc, COLOR_DEFAULT)
            _draw_text(bufs.text_buf, "Legend:", 400, 0x55, COLOR_DEFAULT)
            _draw_text_centered(bufs.text_buf, STR_HAPPY, 0x270, 0xce, COLOR_DEFAULT)
            _draw_text_centered(bufs.text_buf, STR_UNHAPPY, 0x88, 0xce, COLOR_DEFAULT)
            _draw_text_bounded(bufs.text_buf, STR_COURSE_AURA_DESC, 0xfa, 0x6e, 300, COLOR_DEFAULT)

        elif state.display_mode == MODE_HOME_VALUE:
            _draw_text(bufs.text_buf, STR_HOME_SITE_VALUE, 400, 0xbc, COLOR_DEFAULT)
            _draw_text_centered(bufs.text_buf, "Current:", 0x277, 0xce, COLOR_DEFAULT)
            _draw_text_centered(bufs.text_buf, "Base:", 0x8e, 0xce, COLOR_DEFAULT)
            _draw_text_centered(bufs.text_buf, STR_INCREASE_VALUE, 0x33, 0x56, COLOR_DEFAULT)
            _draw_text_centered(bufs.text_buf, STR_CLOSE_WATER, 0x33, 0x68, COLOR_DEFAULT)
            _draw_text_centered(bufs.text_buf, STR_CLOSE_FUN_HOLE, 0x33, 0x79, COLOR_DEFAULT)
            _draw_text_centered(bufs.text_buf, STR_CLOSE_TOP_HOLE, 0x33, 0x8a, COLOR_DEFAULT)
            _draw_text_centered(bufs.text_buf, STR_BUILDING_A + " " + STR_MARINA, 0x33, 0x9c, COLOR_DEFAULT)
            _draw_text_centered(bufs.text_buf, STR_DECREASE_VALUE, 0x1ee, 0x56, COLOR_DEFAULT)
            _draw_text_centered(bufs.text_buf, STR_CLOSE_UNFUN_HOLE, 0x1ee, 0x68, COLOR_DEFAULT)
            _draw_text_centered(bufs.text_buf, STR_CLOSE_OTHER_BUILDING, 0x1ee, 0x79, COLOR_DEFAULT)
            _draw_text_centered(bufs.text_buf, STR_TOO_CLOSE_GREEN, 0x1ee, 0x8a, COLOR_DEFAULT)
            _draw_text_centered(bufs.text_buf, STR_FAR_FROM_COURSE, 0x1ee, 0x9c, COLOR_DEFAULT)

        # ── Employee scrollbar ─────────────────────────────────────
        if state.display_mode == MODE_EMPLOYEE and state.employee_count > 8:
            scrollbar_h: int = (state.scroll_offset * 0x5f) // max(1, state.employee_count)
            max_bar: int = 0x2f8 // max(1, state.employee_count)
            remaining: int = 0x5f - scrollbar_h
            if remaining <= max_bar:
                max_bar = remaining
            _fill_rect(bufs.main, 0x30d, scrollbar_h + 0x6a, 6, max_bar, COLOR_HIGHLIGHT)

        # ── Employee list ──────────────────────────────────────────
        _render_employee_list(state, bufs)

        # ── Employee details (position indicators) ─────────────────
        _render_employee_details(state, bufs)

        # ── Info panel at bottom ───────────────────────────────────
        _render_info_panel(state, bufs)

        # ── Input handling ─────────────────────────────────────────
        _notify_audio_handler(state, 1)

        prev_sel: int = state.prev_selection
        new_sel: int = _check_hit_regions(state)

        if new_sel != prev_sel:
            continue

        if _check_game_input():
            _check_escape(state)

        if state.mouse_click != 0:
            _handle_mouse_click(state, hole_order, bufs)
            continue

        if state.mouse_y > 0x100:
            _reorder_holes(state, hole_order)

        # Scroll wheel
        if new_sel == 9 and state.scroll_offset > 0:
            state.scroll_offset -= 1
        elif new_sel == 10 and state.employee_count > 8:
            state.scroll_offset += 1

        if state.mouse_click == 1:
            hole_num: int = _get_hole_from_click(state)
            state.selected_hole = hole_num
        elif state.mouse_click == 2:
            _swap_holes(state, hole_order)

        if state.mouse_y > 0x100:
            break

    # ── Post-loop: remap hole indices ─────────────────────────────────
    _remap_hole_indices(state, hole_order)


# ═══════════════════════════════════════════════════════════════════════════════
#  Rendering sub-functions
# ═══════════════════════════════════════════════════════════════════════════════

def _render_aura_overlay(state: GameState, bufs: RenderBuffers) -> None:
    """FUN_00456bc0-style overlay for AURA mode (icon rendering)."""
    for gy in range(GRID_SIZE):
        for gx in range(GRID_SIZE):
            ttype: int = _get_terrain_type(state, gx, gy)
            if ttype == 0x14:
                continue
            sx, sy = _grid_to_screen(gx, gy)
            # Golfer icon at each position
            _draw_golfer_icon(bufs.main, sx, sy, COLOR_AURA_NORMAL, 0x28)


def _render_course_grid(state: GameState, bufs: RenderBuffers) -> None:
    """Render the 50×50 course grid with terrain type coloring."""
    for gy in range(GRID_SIZE):
        for gx in range(GRID_SIZE):
            ttype: int = _get_terrain_type(state, gx, gy)
            if ttype == 0x14:
                continue

            color: int = COLOR_DEFAULT
            terrain_lookup: int = state.terrain_lut[ttype]

            if terrain_lookup != -1:
                prop_byte: int = state.terrain_props[ttype][0]

                if state.display_mode == MODE_ROUTING or state.display_mode == MODE_EMPLOYEE:
                    color = _compute_terrain_color(prop_byte)
                elif state.display_mode == MODE_AURA:
                    color = _compute_aura_cell_color(state, gx, gy, ttype, prop_byte)
                elif state.display_mode == MODE_HOME_VALUE:
                    color = _compute_home_cell_color(state, gx, gy, ttype, prop_byte)

            sx, sy = _grid_to_screen(gx, gy)
            _fill_rect(bufs.main, sx - 6, sy - 3, 12, 6, color)

    # Routing overlay labels
    _render_routing_overlay(state, bufs)


def _compute_terrain_color(prop_byte: int) -> int:
    """Map terrain property byte to display color."""
    mapping: dict = {
        0: COLOR_GRASS,
        1: COLOR_GRASS,
        2: COLOR_SAND,
        3: COLOR_SAND,
        4: COLOR_FAIRWAY,
        7: COLOR_GREEN,
        10: COLOR_ROUGH,
        0xd: COLOR_TEE,
        0x11: COLOR_OB,
        0x12: COLOR_DISPLAY_BASE,
    }
    return mapping.get(prop_byte, COLOR_GRASS)


def _compute_aura_cell_color(state: GameState, gx: int, gy: int,
                              ttype: int, prop_byte: int) -> int:
    """Compute AURA mode color for a cell."""
    if ttype == 0x11:
        return 0x80000218
    if state.display_mode == MODE_AURA:
        return 0x80002108
    return COLOR_DEFAULT


def _compute_home_cell_color(state: GameState, gx: int, gy: int,
                              ttype: int, prop_byte: int) -> int:
    """Compute HOME SITE VALUE color for a cell."""
    if prop_byte == 0x0d:
        return 0x80001184
    return COLOR_DEFAULT


def _render_routing_overlay(state: GameState, bufs: RenderBuffers) -> None:
    """Draw hole numbers, routing arrows, and selection highlights."""
    for hole_idx in range(1, min(state.hole_count + 1, 19)):
        hole_x: int = state.hole_data[hole_idx][0]  # grid x
        hole_y: int = state.hole_data[hole_idx][2]  # grid y
        sx, sy = _grid_to_screen(hole_x, hole_y)

        if state.display_mode == MODE_ROUTING:
            if hole_idx == state.selected_hole:
                _fill_rect(bufs.main, sx - 0x1b, sy - 0x1b, 0xee, 0x11, COLOR_SELECTED)
                _fill_rect(bufs.main, sx - 0x1a, sy - 0x1a, 0xec, 0xf, COLOR_SEL_OUTLINE)

            _draw_text(bufs.text_buf, str(hole_idx), sx, sy, COLOR_EMPLOYEE_BG)

            par: int = state.hole_data[hole_idx][8]
            if par != 0:
                _draw_text(bufs.text_buf, str(par), sx + 0x3d, sy, COLOR_DEFAULT)
                yds: int = state.hole_data[hole_idx][10]
                if yds != 0:
                    _draw_text(bufs.text_buf, str(yds // 0x28), sx + 0x6f, sy, COLOR_DEFAULT)

            if hole_idx < state.hole_count:
                next_hole: int = hole_idx + 1
                nx: int = state.hole_data[next_hole][0]
                ny: int = state.hole_data[next_hole][2]
                nsx, nsy = _grid_to_screen(nx, ny)
                mid_x: int = (sx + nsx) // 2
                mid_y: int = (sy + nsy) // 2
                _fill_rect(bufs.main, mid_x, mid_y, 2, 2, COLOR_HIGHLIGHT)

        elif state.display_mode in (MODE_AURA, MODE_HOME_VALUE):
            _draw_golfer_icon(bufs.main, sx, sy, COLOR_AURA_NORMAL)


def _render_hole_stats_table(state: GameState, bufs: RenderBuffers) -> None:
    """Render hole-by-hole stats for routing mode."""
    for hole_i in range(1, 19):
        row: int = ((hole_i - 1) % 9) * 0x11
        col_x: int = row + 0x68
        col_x2: int = (0x47 if hole_i < 10 else 0x1f2) + 0x47
        hole: bytearray = state.hole_data[hole_i]

        _draw_text(bufs.text_buf, str(hole_i), col_x2, col_x, COLOR_EMPLOYEE_BG)
        if hole[8] != 0:
            _draw_text(bufs.text_buf, str(hole[8]), col_x2 + 0x3d, col_x, COLOR_DEFAULT)
        if hole[10] != 0:
            _draw_text(bufs.text_buf, str(hole[10] // 0x28), col_x2 + 0x6f, col_x, COLOR_DEFAULT)
        if hole[12] != 0:
            _draw_text(bufs.text_buf, str(hole[12]), col_x2 + 0x54, col_x, COLOR_DEFAULT)


def _render_employee_list(state: GameState, bufs: RenderBuffers) -> None:
    """Render the scrollable employee list on the right side."""
    visible_idx: int = 0
    for emp_record in state.employees:
        if emp_record[0] == 0xfa:
            continue
        if visible_idx < state.scroll_offset:
            visible_idx += 1
            continue
        if (visible_idx - state.scroll_offset) > 8:
            break

        y_offset: int = (visible_idx - state.scroll_offset - 1) & 3
        y_emp: int = y_offset * 0x2d + 0x67
        x_emp: int = 0x2ea

        emp_type: int = emp_record[2]
        emp_action: int = emp_record[4]

        if emp_type < 0xb:
            icon_id: int = 0x20e
        elif emp_type == 0xc:
            icon_id = 0x21e
        else:
            icon_id = 0x216

        state.current_color = icon_id

        _draw_golfer_icon(bufs.main, x_emp, y_emp, state.current_color)

        name_label: str = f"#{visible_idx + 1}"
        action_label: str = _get_employee_action_label(emp_action)

        _draw_text_centered(bufs.text_buf, name_label, x_emp + 0x19f, y_emp + 0x47, COLOR_DEFAULT)
        _draw_text_centered(bufs.text_buf, action_label, x_emp + 0x1ae, y_emp + 0x56, COLOR_DEFAULT)
        _draw_text_centered(bufs.text_buf, STR_HIRED, x_emp + 0x1ae, y_emp + 0x65, COLOR_DEFAULT)

        loc_x: int = emp_record[5]
        loc_y: int = emp_record[6]
        sx2, sy2 = _grid_to_screen(loc_x, loc_y)
        _draw_golfer_icon(bufs.main, sx2, sy2, state.current_color)

        visible_idx += 1


def _get_employee_action_label(action: int) -> str:
    """Map employee action state to display string."""
    action_labels: dict = {
        0: STR_PLAYERS_GREETED,
        1: STR_PLAYERS_CHEERED,
        2: STR_PLAYERS_RUSHED,
        3: STR_SLACKERS_INTIMIDATED,
        4: STR_WEEDS_DESTROYED,
        5: STR_WEEDS_ERADICATED,
        6: STR_BEVERAGES_SERVED,
        7: STR_SATISFIED_CUSTOMERS,
    }
    return action_labels.get(action, "")


def _render_employee_details(state: GameState, bufs: RenderBuffers) -> None:
    """Render employee position indicators on the course grid."""
    for emp_idx, emp in enumerate(state.employees):
        if emp[0] == 0xfa:
            continue

        grid_x: int = emp[-11]
        grid_y: int = emp[-13]
        ttype: int = emp[-11]
        sx, sy = _grid_to_screen(grid_x, grid_y)

        if ttype == 0xfb:
            emp_color: int = 0x800003ff
            icon_size: int = 0x18
        elif ttype == 0xfc:
            emp_color = 0x80007ff0
            icon_size = 0x30
        elif ttype == 0xfd:
            emp_color = 0x80000018
            icon_size = 0x18
        elif ttype == 0xfe:
            emp_color = 0x80006318
            icon_size = 0x18
        else:
            emp_color = 0x80007fff
            icon_size = 0x18

        for ring_i in range(0x19):
            px: int = _circle_x(ring_i, icon_size) + sx
            py: int = _circle_y(ring_i, icon_size * 2) + sy
            if ring_i == 0:
                _fill_rect(bufs.main, px, py, 6, 6, emp_color)
            else:
                _fill_rect(bufs.main, px, py, 2, 7, emp_color)

        if ttype != 0xfa:
            _draw_text_bounded(bufs.text_buf, f"#{emp_idx + 1}", sx, sy - 10, 300, emp_color)
            _draw_text_bounded(bufs.text_buf, f"Emp{emp_idx}", sx, sy, 200, emp_color)


def _render_info_panel(state: GameState, bufs: RenderBuffers) -> None:
    """Render the info panel at the bottom of the screen."""
    x: int
    y: int
    if state.prev_selection == -2:
        x, y = 0x214, 0x296
    elif state.prev_selection == 1:
        x, y = 0x139, 0x3c
    elif state.prev_selection == 0:
        x, y = 0xfe, 0xb6
    elif state.prev_selection == 2:
        x, y = 0xfe, 0x1e3
    elif state.prev_selection == 3:
        x, y = 0x139, 0x264
    elif state.display_mode == MODE_EMPLOYEE:
        if state.prev_selection == 9:
            x, y = 0x307, 0x40
        elif state.prev_selection == 10:
            x, y = 0x307, 0xcd
        else:
            x, y = 0x139, 0x3c
    elif state.display_mode == MODE_ROUTING:
        x, y = 0xfe, 0xb6
    elif state.display_mode == MODE_AURA:
        x, y = 0xfe, 0x1e2
    elif state.display_mode == MODE_HOME_VALUE:
        x, y = 0x139, 0x264
    else:
        x, y = 0x47, 0x215

    _fill_rect(bufs.main, x, y, 100, 30, COLOR_DEFAULT)
    _render_surface(bufs.ui_text, 0, 0, 0)
    _draw_text_centered(bufs.text_buf, f"Panel ({state.display_mode})",
                        x + 20, y + 10, COLOR_DEFAULT)


# ═══════════════════════════════════════════════════════════════════════════════
#  Input handling sub-functions
# ═══════════════════════════════════════════════════════════════════════════════

def _check_hit_regions(state: GameState) -> int:
    """Check mouse position against UI hot regions; return region ID."""
    mx: int = state.mouse_x
    my: int = state.mouse_y

    if 0x3e <= mx <= 0x8d and 0x13b <= my <= 0x18a:
        return 1
    if 0xb7 <= mx <= 0x106 and 0xfe <= my <= 0x14d:
        return 0
    if 0x218 <= mx <= 0x267 and 0xfe <= my <= 0x14d:
        return 2
    if 0x293 <= mx <= 0x2e2 and 0x13b <= my <= 0x18a:
        return 3
    if 0x296 <= mx <= 0x2e5 and 0x214 <= my <= 0x254:
        return -2

    if state.display_mode == MODE_EMPLOYEE and state.employee_count > 8:
        if mx > 0x306:
            if mx < 0x319 and 0x3f < my < 0x65:
                return 9
            if 0x307 <= mx <= 0x318 and 0xcd <= my <= 0xf1:
                return 10
    return -1


def _handle_mouse_click(state: GameState, hole_order: List[int],
                        bufs: RenderBuffers) -> None:
    """Process mouse clicks on the routing map."""
    if state.mouse_click == 1:
        hole_num: int = max(1, min(0x12,
                           (state.mouse_y - 0x68) // 0x11 + 1))
        if state.mouse_x > 0x18f:
            hole_num += 9
        state.selected_hole = max(1, min(0x12, hole_num))

    elif state.mouse_click == 2:
        hole_a: int = state.selected_hole
        hole_b: int = max(1, min(0x12,
                          (state.mouse_y - 0x68) // 0x11 + 1))
        if state.mouse_x > 0x18f:
            hole_b += 9
        if hole_a != hole_b and 1 <= hole_a <= 0x12 and 1 <= hole_b <= 0x12:
            _swap_hole_data(state, hole_a, hole_b)
            hole_order[hole_a], hole_order[hole_b] = (
                hole_order[hole_b], hole_order[hole_a]
            )


def _swap_hole_data(state: GameState, a: int, b: int) -> None:
    """Swap all hole data between two hole slots."""
    state.hole_data[a], state.hole_data[b] = (
        state.hole_data[b], state.hole_data[a]
    )
    state.hole_routing[a], state.hole_routing[b] = (
        state.hole_routing[b], state.hole_routing[a]
    )


def _swap_holes(state: GameState, hole_order: List[int]) -> None:
    """Handle hole swap triggered by right-click on hole list."""
    pass


def _get_hole_from_click(state: GameState) -> int:
    """Determine which hole number was clicked based on mouse position."""
    return max(1, min(0x13, (state.mouse_y - 0x68) // 0x11 + 1))


def _reorder_holes(state: GameState, hole_order: List[int]) -> None:
    """Reorder holes if a hole was moved to a new position."""
    pass


def _check_escape(state: GameState) -> None:
    """Check if escape was pressed."""
    if _is_escape_pressed():
        pass


def _remap_hole_indices(state: GameState, hole_order: List[int]) -> None:
    """Remap hole indices across all terrain tiles after reordering."""
    inverse: List[int] = [0] * 0x14
    for i, v in enumerate(hole_order):
        inverse[v] = i

    for tile_idx in range(152):
        hole_idx: int = state.terrain_flags[tile_idx][9]
        if hole_idx > 0:
            state.terrain_flags[tile_idx][9] = inverse[hole_idx]

    state.hole_count = 0x13
    for h in range(1, 152):
        if state.hole_data[h][0] == 0:
            state.hole_count = h
            return
