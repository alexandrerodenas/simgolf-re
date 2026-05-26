"""
engine_stubs.py — Shared stubs for engine-level FUN_004* functions.

These functions correspond to named engine routines in the original SimGolf
binary. They are defined once here and imported by all module files that
need them, eliminating duplicated stub definitions across the codebase.

Each stub has:
  - A meaningful name derived from reverse-engineering context
  - Typed parameters matching usage across all callers
  - A docstring noting the original FUN_004* address
  - A minimal body (return 0 / return "" / pass) as appropriate
"""

from __future__ import annotations

from typing import List


# ═══════════════════════════════════════════════════════════════════════════════
#  Resource / Memory Management
# ═══════════════════════════════════════════════════════════════════════════════

def load_resource(name_buf: int, slot_id: int, size_ptr: int) -> int:
    """Load a flic/animation file, register under slot_id. (FUN_00404120)"""
    return slot_id


def get_resource(slot_id: int) -> int:
    """Re-load a previously registered resource by slot ID. (FUN_00404090)"""
    return slot_id


def free_resource(slot_id: int) -> None:
    """Release/close a loaded resource. (FUN_004041c0)"""
    pass


def free_slot(slot_id: int) -> None:
    """Free/unregister a previously registered animation slot. (FUN_0043d670)"""
    pass


def alloc_memory(byte_count: int) -> int:
    """Allocate memory block. Returns buffer offset or -1. (FUN_0043d5d0)"""
    return 0


# ═══════════════════════════════════════════════════════════════════════════════
#  Palette / GFX Loading
# ═══════════════════════════════════════════════════════════════════════════════

def load_palette(path: str, dest_buf: int, unk2: int, palette_size: int, mode: int) -> int:
    """Load a palette/graphic file (.pcx). Returns handle or 0. (FUN_00475840)"""
    return 1


def load_file(path: str, a: int, b: int, c: int) -> None:
    """Load a data file into memory. (FUN_0040b9b0)"""
    pass


def set_loading_mode(flag: int) -> None:
    """Set loading screen mode/state. (FUN_0040b840)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Text Rendering
# ═══════════════════════════════════════════════════════════════════════════════

def draw_title_text(text: str, x: int, y: int, color: int) -> None:
    """Render large title text on screen. (FUN_00404b70)"""
    pass


def draw_text_left(text: str, x: int, y: int, color: int) -> None:
    """Render left-aligned text on screen. (FUN_004049d0)"""
    pass


def draw_text_right(surface: int, text: str, x: int, y: int, width: int) -> None:
    """Render right-aligned text with font. (FUN_00476750)"""
    pass


def draw_text_centered(surface: int, text: str, x: int, y: int, width: int) -> None:
    """Render centered text with font on surface. (FUN_00476700)"""
    pass


def draw_save_text(text: str, x: int, y: int, color: int) -> None:
    """Render save/load dialog text. (FUN_00404bc0)"""
    pass


def draw_text(surface: int, text: str, x: int, y: int, width: int) -> None:
    """Render text on surface with font. (FUN_00476650)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Surface / Rendering Operations
# ═══════════════════════════════════════════════════════════════════════════════

def blit_surface(buf: int, x: int, y: int, w: int, h: int, unk1: int, unk2: int) -> None:
    """Blit/copy surface area to framebuffer. (FUN_00473bf0)"""
    pass


def fill_surface(surface: int, x: int, y: int, color: int) -> None:
    """Fill/clear a surface with a color. (FUN_00473e60)"""
    pass


def draw_surface(surface: int, x: int, y: int, flags: int) -> None:
    """Render a surface to the display. (FUN_004762d0)"""
    pass


def set_draw_color(color: int, a: int, b: int, c: int) -> None:
    """Set the current drawing color. (FUN_00476310)"""
    pass


def draw_rect(x: int, y: int, w: int, h: int, color: int) -> None:
    """Draw a filled rectangle on screen. (FUN_00480b00)"""
    pass


def clear_area(x: int, y: int, w: int, h: int, color: int) -> None:
    """Clear/fill a rectangular area with solid color. (FUN_00478af0)"""
    pass


def blit_list(surface: int, src_surface: int, x: int, y: int, flags: int) -> None:
    """Batch blit operation (blit list). (FUN_00473f60)"""
    pass


def set_clip_rect(surface: int, x: int, y: int, w: int, h: int, max_w: int, max_h: int) -> None:
    """Set clipping rectangle for a surface. (FUN_00475c60)"""
    pass


def draw_tile_preview(surface: int, x: int, y: int, w: int, h: int) -> None:
    """Render a tile preview area. (FUN_00476be0)"""
    pass


def draw_3d_surface(surface: int, a: int, b: int, color: int, c: int, d: int) -> None:
    """Render a 3D/raised surface with border. (FUN_00474440)"""
    pass


def draw_bordered_rect(surface: int, x: int, y: int, w: int, h: int, fill: int, outline: int) -> None:
    """Draw a bordered rectangle (fill + outline). (FUN_00473c60)"""
    pass


def draw_surface_flip(surface: int, x: int, y: int, w: int, h: int, unk: int, flip: int) -> None:
    """Draw surface with flip/transform options. (FUN_00473cb0)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Frame Management
# ═══════════════════════════════════════════════════════════════════════════════

def begin_screen() -> None:
    """Begin screen rendering / initialize offscreen buffer. (FUN_00474ae0)"""
    pass


def end_draw() -> None:
    """End render frame / restore previous surface. (FUN_00474c40)"""
    pass


def begin_draw() -> None:
    """Begin render frame. (FUN_00483d30)"""
    pass


def create_surface(w: int, h: int, x: int, y: int, flags: int, unk: int) -> None:
    """Create/configure a rendering surface. (FUN_00474dd0)"""
    pass


def flip_buffers() -> None:
    """Flip/present buffers. (FUN_00474cb0)"""
    pass


def push_render_target(slot: int) -> None:
    """Push/save current render target. (FUN_0045b8b0)"""
    pass


def pop_render_target(slot: int) -> None:
    """Pop/restore saved render target. (FUN_0045b9f0)"""
    pass


def push_render_layer() -> None:
    """Push rendering layer state. (FUN_00473ab0)"""
    pass


def pop_render_layer() -> None:
    """Pop rendering layer state. (FUN_00473ae0)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Display / Cursor
# ═══════════════════════════════════════════════════════════════════════════════

def show_cursor(flag: int) -> None:
    """Show/hide cursor / process paint messages. (FUN_00480c80)"""
    pass


def update_display(val: int) -> None:
    """Update display / present backbuffer. (FUN_0040daa0)"""
    pass


def draw_loading_progress(progress: int) -> None:
    """Update loading progress bar (percentage). (FUN_00406250)"""
    pass


def update_screen() -> None:
    """Update display / present the backbuffer. (FUN_00483bd0)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Mouse / Input
# ═══════════════════════════════════════════════════════════════════════════════

def get_mouse_pos(out_x: list, out_y: list) -> None:
    """Get current mouse position. (FUN_0047ab50)"""
    pass


def is_key_pressed(buf: int) -> int:
    """Check if a key is pressed / file exists. (FUN_004378a0)"""
    return 1


def set_mouse_click_rect(x: int, y: int, w: int, h: int, flags: int) -> None:
    """Set clickable rectangle area for mouse interaction. (FUN_0040cc00)"""
    pass


def draw_mouse_cursor(x: int, y: int, flags: int) -> None:
    """Draw mouse cursor at position. (FUN_00479830)"""
    pass


def set_cursor_hotspot(x: int, y: int, flags: int) -> None:
    """Set cursor hotspot position. (FUN_004798c0)"""
    pass


def set_cursor_shape(x: int, y: int, flags: int) -> None:
    """Set cursor shape/appearance. (FUN_00479950)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Timing / Delay / RNG
# ═══════════════════════════════════════════════════════════════════════════════

def game_delay(duration: int, mode: int) -> None:
    """Delay/sleep for a number of game ticks. (FUN_0045bf80)"""
    pass


def game_delay_cancel() -> None:
    """Cancel current delay. (FUN_0045c030)"""
    pass


def reset_random() -> None:
    """Reset the random number generator. (FUN_0045c150)"""
    pass


def get_tick_count() -> int:
    """Get current system tick count. (FUN_0045ae70)"""
    return 0


def get_adjusted_tick() -> int:
    """Get adjusted tick count. (FUN_0045ae50)"""
    return 0


# ═══════════════════════════════════════════════════════════════════════════════
#  String / Conversion
# ═══════════════════════════════════════════════════════════════════════════════

def itoa(value: int, buf: int, base: int) -> str:
    """Convert integer to string. (FUN_004ad425)"""
    return str(value)


# ═══════════════════════════════════════════════════════════════════════════════
#  Sound
# ═══════════════════════════════════════════════════════════════════════════════

def play_sound_ex(sound_id: int, volume: int, pan: int, loop: int, prio: int) -> None:
    """Play a sound effect with extended parameters. (FUN_004481b0)"""
    pass


def play_sound(sound_id: int) -> None:
    """Play a simple sound effect. (FUN_00448200)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Golfer / Character State
# ═══════════════════════════════════════════════════════════════════════════════

def update_golfer_mood(golfer_id: int, param_2: int) -> None:
    """Update golfer satisfaction/mood after an event. (FUN_004676e0)"""
    pass


def check_partner_status(golfer_id: int) -> int:
    """Check if a golfer is partnered/invited. Returns status. (FUN_0046c940)"""
    return 1


def execute_shot(golfer_id: int, a: int, strokes: int) -> None:
    """Execute a golf shot for a golfer. (FUN_00467a00)"""
    pass


def show_speech_bubble(event_type: int, param_2: int, param_3: int, golfer_id: int) -> None:
    """Show a speech bubble for a golfer. (FUN_00469b00)"""
    pass


def get_golfer_name(name_buf: str, golfer_idx: int, param_3: int) -> None:
    """Get golfer display name. (FUN_00437fa0)"""
    pass


def get_golfer_by_click(mouse_x: int, mouse_y: int) -> int:
    """Find golfer at screen coordinates. (FUN_00438260)"""
    return -1


def check_golfer_state(golfer_id: int) -> int:
    """Check golfer state/availability. (FUN_00438390)"""
    return 1


def get_golfer_relationship(golfer_idx: int, param_2: int, param_3: int) -> int:
    """Get relationship/affinity between two golfers. (FUN_00437910)"""
    return 0


def set_golfer_mood(golfer_id: int) -> None:
    """Set golfer mood state. (FUN_004675d0)"""
    pass


def partner_golfer(golfer_id: int) -> None:
    """Invite/partner a golfer. (FUN_00462020)"""
    pass


def calculate_score(golfer_id: int, param_2: int, param_3: int) -> None:
    """Calculate golfer score after a stroke. (FUN_00469a20)"""
    pass


def get_skill_rating(skill_idx: int, max_skill: int, variant: int) -> int:
    """Get skill rating value. (FUN_0043d6f0)"""
    return 0


def show_message(msg: str) -> None:
    """Show a message popup/info dialog. (FUN_0040b4a0)"""
    pass


def get_hole_index(hole_id: int) -> None:
    """Get the hole index for a tile/position. (FUN_00407280)"""
    pass


def move_ball(x: int, y: int, z: int) -> None:
    """Move ball to position. (FUN_00407700)"""
    pass


def show_error_dialog(msg: str, x: int, y: int) -> None:
    """Show an error message dialog. (FUN_0046de70)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  UI / Scrolling / Dialogs
# ═══════════════════════════════════════════════════════════════════════════════

def open_file_dialog(pattern: str, default_path: str, title: str) -> int:
    """Open a file browser dialog. (FUN_0043d2a0)"""
    return 0


def text_input_prompt(prompt: str, max_len: int, x: int, y: int) -> int:
    """Open a text input dialog. (FUN_0045b2c0)"""
    return 0


def create_scrollbar(x: int, y: int, w: int, h: int, flags: int) -> int:
    """Create a scrollable list/area. (FUN_0046d6e0)"""
    return 0


def show_course_rating(val: int) -> None:
    """Show course rating display. (FUN_004532a0)"""
    pass


def draw_minimap(x: int, y: int, w: int, h: int, color: int) -> None:
    """Draw the minimap. (FUN_0040ca10)"""
    pass


def draw_outlined_rect(x: int, y: int, w: int, h: int, color: int) -> None:
    """Draw an outlined rectangle. (FUN_0045b0d0)"""
    pass


def format_name_text(template: str, name_buf: str) -> None:
    """Format name text from template. (FUN_0045b7c0)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Economy / Club Funds
# ═══════════════════════════════════════════════════════════════════════════════

def add_money(amount: int) -> None:
    """Add club funds/money. (FUN_0042dc00)"""
    pass


def spend_money(value: int) -> None:
    """Spend/subtract club funds. (FUN_0042dd50)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Math / Utility
# ═══════════════════════════════════════════════════════════════════════════════

def clamp_int(value: int, min_val: int, max_val: int) -> int:
    """Clamp an integer between min and max values. (FUN_00467130)"""
    if value < min_val:
        return min_val
    if value > max_val:
        return max_val
    return value


# ═══════════════════════════════════════════════════════════════════════════════
#  Particles
# ═══════════════════════════════════════════════════════════════════════════════

def spawn_particles(flags: int, a: int, param_1: int) -> None:
    """Spawn particle effects. (FUN_0040cb00)"""
    pass


def spawn_sound_particles(sound_id: int, x: int, y: int, z: int) -> None:
    """Spawn particles at sound origin position. (FUN_0040c500)"""
    pass


def spawn_money_particles(amount: int, x: int, y: int, a: int) -> None:
    """Spawn money/coin particle effects. (FUN_0040c890)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Terrain / Course
# ═══════════════════════════════════════════════════════════════════════════════

def set_tile_type(tile_id: int, flags: int) -> None:
    """Set tile terrain type/flag. (FUN_004074a0)"""
    pass


def update_tile_skill(tile_id: int, sub_type: int, skill_type: int, flag: int) -> None:
    """Update tile skill/sub-type. (FUN_00466b70)"""
    pass


def set_ui_mode(flag: int) -> None:
    """Set interface/edit mode. (FUN_004658b0)"""
    pass


def apply_terrain(terrain_idx: int, flag: int) -> None:
    """Apply terrain brush/change. (FUN_004060a0)"""
    pass


def spawn_animal(a: int, x: int, y: int) -> None:
    """Spawn an animal/entity on the course. (FUN_0046e7b0)"""
    pass


def draw_ui_element(x: int, y: int, w: int, h: int, buf: int, flags: int) -> None:
    """Draw a UI element from buffer. (FUN_00486110)"""
    pass


def set_ui_flags(flags: int) -> None:
    """Set UI flags. (FUN_00486b30)"""
    pass


def set_text_max_len(max_len: int) -> None:
    """Set maximum text input length. (FUN_00486250)"""
    pass


def set_text_buf(buf: str) -> None:
    """Set current text input buffer. (FUN_00486200)"""
    pass


def set_mode_focus(mode: int) -> None:
    """Set UI mode/focus. (FUN_0047b670)"""
    pass


def refresh_text_input() -> None:
    """Refresh/redraw text input area. (FUN_00483bb0)"""
    pass


def clear_text_input() -> None:
    """Clear text input area. (FUN_00483c70)"""
    pass


def get_text_input_state() -> None:
    """Get text input state. (FUN_00483d80)"""
    pass


def close_text_input() -> None:
    """Close/dismiss text input. (FUN_004860d0)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Color / Pixel
# ═══════════════════════════════════════════════════════════════════════════════

def make_color(r: int, g: int, b: int, a: int) -> int:
    """Create a packed color value from RGBA components. (FUN_00483420)"""
    return 0


# ═══════════════════════════════════════════════════════════════════════════════
#  Editor-specific functions (only used in golf_editor.py)
# ═══════════════════════════════════════════════════════════════════════════════

def clamp_editor_val(val: int) -> int:
    """Clamp editor value. (FUN_00467150)"""
    return max(0, min(val, 100))


def compute_grid_offset(dx: int, dy: int) -> int:
    """Compute grid offset from delta. (FUN_00467170)"""
    return dx + dy * 64


def resize_edit(param_1: int) -> None:
    """Resize edit area. (FUN_004266b0)"""
    pass


def edit_golfer(golfer_id: int) -> None:
    """Edit golfer properties in editor. (FUN_00427380)"""
    pass


def fill_debug_list(buf_ptr: int, stride: int, count: int, callback: int, label_ptr: int) -> None:
    """Fill a debug list with entries. (FUN_004a55d2)"""
    pass


def sort_debug_list(buf_ptr: int, stride: int, count: int, label_ptr: int) -> None:
    """Sort a debug list. (FUN_004a5713)"""
    pass


def load_debug_script(path: str) -> None:
    """Load a debug script file. (FUN_004a64b8)"""
    pass


def set_hole_id(hole_id: int) -> None:
    """Set current hole ID for editor. (FUN_00453330)"""
    pass


def compute_visibility(param_1: int, param_2: int) -> int:
    """Compute visibility/distance. (FUN_0043b610)"""
    return 0


def update_scroll_param(amount: int, x: int, y: int) -> None:
    """Update scroll/pan amount. (FUN_0040a9a0)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Economy-specific stubs (only in golf_economy.py)
# ═══════════════════════════════════════════════════════════════════════════════

def compute_golfer_cost() -> int:
    """Compute golfer hiring/maintenance cost. (FUN_004732d0)"""
    return 0


def update_golfer_happiness() -> None:
    """Update golfer happiness levels. (FUN_00473470)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Input area functions
# ═══════════════════════════════════════════════════════════════════════════════

def set_mouse_rect(x: int, y: int, w: int, h: int, flags: int) -> None:
    """Set mouse interaction rectangle. (FUN_0040cc00)"""
    pass


def set_input_area(x: int, y: int, w: int, h: int, buf: int, flags: int) -> None:
    """Set input/click area with buffer. (FUN_00486110)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Ball movement
# ═══════════════════════════════════════════════════════════════════════════════

def move_ball_to(x: int, y: int, z: int) -> None:
    """Move ball to 3D position on course. (FUN_00407700)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Golfer partner/event specific
# ═══════════════════════════════════════════════════════════════════════════════

def set_golfer_event(golfer_id: int) -> None:
    """Set golfer event state. (FUN_00467560)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Mouse click handler
# ═══════════════════════════════════════════════════════════════════════════════

def handle_mouse_click(mouse_x: int, mouse_y: int) -> None:
    """Handle mouse click at position. (FUN_00432620)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Draw shadow behind surface
# ═══════════════════════════════════════════════════════════════════════════════

def draw_surface_shadow(surface: int, x: int, y: int, color: int) -> None:
    """Draw a surface with shadow effect. (FUN_004749d0)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Determine game mode
# ═══════════════════════════════════════════════════════════════════════════════

def get_game_mode(mode: int) -> int:
    """Get current game mode. (FUN_0045c1e0)"""
    return mode


# ═══════════════════════════════════════════════════════════════════════════════
#  Scroll viewport
# ═══════════════════════════════════════════════════════════════════════════════

def scroll_viewport(x: int, y: int, w: int, h: int, src_x: int, src_y: int, src_w: int, src_h: int) -> None:
    """Scroll viewport by copying source area. (FUN_004628d0)"""
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Set color (condensed)
# ═══════════════════════════════════════════════════════════════════════════════

def set_color(color: int, flags: int, mode: int, unk: int) -> None:
    """Set drawing color with flags. (FUN_00476310)"""
    pass
