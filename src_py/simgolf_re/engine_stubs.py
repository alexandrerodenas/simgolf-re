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
#  Global memory / state mirrors for DAT_* used by the stubs
# ═══════════════════════════════════════════════════════════════════════════════

# DAT_0051a068 — main global text/string buffer (256+ bytes)
g_text_buffer: str = ""

# DAT_00569498 — particle/effect active flag
g_particle_active: bool = False

# DAT_0053df54 — effect counter
g_effect_counter: int = 0

# DAT_00567afc — game mode flag
g_game_mode_flag: int = 0

# DAT_00569628 — money amount (for spend)
g_money_amount: int = 0

# DAT_0059abb0 — sound particle ring buffer index
g_sound_particle_idx: int = 0

# DAT_005a9cd8 — sound positioning flag
g_sound_pos_flag: int = 0

# DAT_005a9cdc — sound position counter
g_sound_pos_counter: int = 0

# DAT_00822d68 — event/cancel flag
g_event_flag: int = 0

# DAT_00822d74 — event cancel flag
g_event_cancel: int = 0

# DAT_00822b9c — tick count low word
g_tick_low: int = 0

# DAT_00822b98 — tick count high word
g_tick_high: int = 0

# DAT_004d3834 — tick mode flag
g_tick_mode: int = 0

# DAT_004c2844 — zoom/scale factor
g_zoom_factor: int = 1

# DAT_00568d08 — file handle
g_file_handle: int = 0

# DAT_0059e7b8 — mode flags
g_mode_flags: int = 0

# DAT_005a34e0 — course theme (char)
g_course_theme: int = 0

# DAT_00834170 — random/global counter
g_random_counter: int = 0

# DAT_005a9cd0 — ball z position tracker
g_ball_z_pos: int = 0

# DAT_00822c88 — force reload flag
g_force_reload: int = 0

# DAT_00822c78 — current course id
g_course_id: int = 0

# DAT_005685f0 — current club id
g_club_id: int = 0

# DAT_00571fd4 — total course length
g_total_course_length: int = 0

# DAT_00541cd8 — total holes
g_total_holes: int = 0

# DAT_0059ae78 — total course rating
g_total_course_rating: int = 0

# DAT_008392a8 — current ranked index
g_ranked_idx: int = -1

# DAT_00822c8c — viewport zoom
g_viewport_zoom: int = 0

# DAT_00838200 — scroll index
g_scroll_idx: int = 0

# DAT_005aa55c — golfer scroll offset
g_golfer_scroll: int = 0

# DAT_0059bf90 — current course index
g_current_course: int = 0

# DAT_005a9cbc — sound flag
g_sound_flag: int = 0

# DAT_004c2e08 — loading text flag
g_loading_text_flag: int = 0

# DAT_0083ad4c — display mode flag
g_display_mode: int = 0


# ═══════════════════════════════════════════════════════════════════════════════
#  Internal stub helpers (not from C, but needed by other stubs)
# ═══════════════════════════════════════════════════════════════════════════════

def _strlen(s: str) -> int:
    """Ghidra-style strlen: return length of null-terminated string."""
    return len(s)


# ═══════════════════════════════════════════════════════════════════════════════
#  Resource / Memory Management
# ═══════════════════════════════════════════════════════════════════════════════

def load_resource(name_buf: int, slot_id: int, size_ptr: int) -> int:
    """Load a flic/animation file, register under slot_id. (FUN_00404120)

    Original C: calls FUN_00481f40 to load file, stores into slot table at
    DAT_004e9aa0 + slot_id*0x58. Returns error code (0 = failure).
    """
    # Original: iVar1 = param_2 * 0x84; FUN_00481f40(param_1, 0, &DAT_004e9aa0 + param_2 * 0x58, 0);
    # If error, set *param_3 = 0 and return 0
    # Else FUN_00482b90(&DAT_004f65c8 + iVar1, 0);
    # If size_ptr valid and data loaded, *size_ptr = *(ushort*)(data + 0x62)
    return slot_id


def get_resource(slot_id: int) -> int:
    """Re-load a previously registered resource by slot ID. (FUN_00404090)

    Original C: checks slot at DAT_004f660c + slot_id*0x84 for loaded data.
    If data exists, checks frame counter. Advances frame if not at end.
    Returns buffer handle or 0.
    """
    return slot_id


def free_resource(slot_id: int) -> None:
    """Release/close a loaded resource. (FUN_004041c0)

    Original C: calls FUN_00482dd0() then FUN_00481ba0().
    """
    pass


def free_slot(slot_id: int) -> None:
    """Free/unregister a previously registered animation slot. (FUN_0043d670)

    Original C: if DAT_005a9370[slot] != -1, calls FUN_0043d520 to free memory
    based on dims (DAT_0053f3e8[slot] * DAT_005a5a2c[slot*4]).
    Then calls FUN_00473ae0() for each element and resets slot to -1.
    """
    pass


def alloc_memory(byte_count: int) -> int:
    """Allocate memory block. Returns buffer offset or -1. (FUN_0043d5d0)

    Original C: iterates through allocation table (DAT_00820b70, DAT_00820d00)
    finding a slot with enough free space. Splits the block and returns offset.
    Returns -1 if no slot has enough space (>99 slots checked).
    """
    return 0


# ═══════════════════════════════════════════════════════════════════════════════
#  Palette / GFX Loading
# ═══════════════════════════════════════════════════════════════════════════════

def load_palette(path: str, dest_buf: int, unk2: int, palette_size: int, mode: int) -> int:
    """Load a palette/graphic file (.pcx). Returns handle or 0. (FUN_00475840)

    Original C: Full PCX loader with Windows file I/O (GetFileSize etc.).
    Handles multiple modes (bit 0 = create new loader, bit 1 = use existing).
    Copies filename to local buffer, appends extension if needed, opens file,
    reads data via FUN_00478cd0.
    """
    return 1


def load_file(path: str, a: int, b: int, c: int) -> None:
    """Load a data file into memory. (FUN_0040b9b0)

    Original C: copies path to local buffer, constructs full path with
    "saved games\\" prefix (if param_4==0) or "Themes\\Championship\\" (if !=0).
    Opens file via FUN_004a5d48, reads data, handles loading screen display.
    Detects "While Browsing.sve" for special handling. Resets game state.
    """
    pass


def set_loading_mode(flag: int) -> None:
    """Set loading screen mode/state. (FUN_0040b840)

    Original C: opens data file, sets loading text ("Loading Course..." for mode 0,
    "Loading Game..." for mode 2). Calls FUN_0040d320 for progress bar display.
    Mode 2 exits early, mode 3 exits after setup.
    Mode 0 resets game state flags.
    """
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Text Rendering
# ═══════════════════════════════════════════════════════════════════════════════

def draw_title_text(text: str, x: int, y: int, color: int) -> None:
    """Render large title text on screen. (FUN_00404b70)

    Original C: FUN_00476310(color, -1, 2, 2); if(text) FUN_00477da0(text, x, y, 0, strlen(text));
    """
    set_color(color, -1, 2, 2)
    if text:
        # FUN_00477da0: draw text at x,y with unknown params
        pass


def draw_text_left(text: str, x: int, y: int, color: int) -> None:
    """Render left-aligned text on screen. (FUN_004049d0)

    Original C: FUN_00476310(color, -1, 2, 2); if(text) FUN_00477c30(text, x, y, strlen(text));
    """
    set_color(color, -1, 2, 2)
    if text:
        pass


def draw_text_right(surface: int, text: str, x: int, y: int, width: int) -> None:
    """Render right-aligned text with font. (FUN_00476750)

    Original C: saves surface->texture, sets new texture, calls FUN_00478140(text,x,y,width),
    restores old texture.
    """
    pass


def draw_text_centered(surface: int, text: str, x: int, y: int, width: int) -> None:
    """Render centered text with font on surface. (FUN_00476700)

    Original C: saves surface->texture, sets new texture, calls FUN_00477fc0(text,x,y,width),
    restores old texture.
    """
    pass


def draw_save_text(text: str, x: int, y: int, color: int) -> None:
    """Render save/load dialog text. (FUN_00404bc0)

    Original C: FUN_00476310(color, 1, 0, 1); if(text) FUN_00477da0(text, x, y, 0, strlen(text));
    """
    set_color(color, 1, 0, 1)
    if text:
        pass


def draw_text(surface: int, text: str, x: int, y: int, width: int) -> None:
    """Render text on surface with font. (FUN_00476650)

    Original C: saves surface->texture, sets new texture, calls FUN_00477c30(text,x,y,width),
    restores old texture.
    """
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Surface / Rendering Operations
# ═══════════════════════════════════════════════════════════════════════════════

def blit_surface(buf: int, x: int, y: int, w: int, h: int, unk1: int, unk2: int) -> None:
    """Blit/copy surface area to framebuffer. (FUN_00473bf0)

    Original C: if buf==0 return 0x10; if *(buf+4)==0 return 7;
    Checks pixel format (must be 8). Calls FUN_00492000(buf,x,y,w,h,unk1,unk2).
    """
    pass


def fill_surface(surface: int, x: int, y: int, color: int) -> None:
    """Fill/clear a surface with a color. (FUN_00473e60)

    Original C: complex — if surface has buffer (offset 8 != 0), calls FUN_00475840
    to load palette then FUN_00475b60 to fill. Otherwise fills via vtable call.
    """
    pass


def draw_surface(surface: int, x: int, y: int, flags: int) -> None:
    """Render a surface to the display. (FUN_004762d0)

    Original C: if x==0 return 3; if *(x+4)!=0 set *(surface+0x5c)=x;
    Set *(surface+0x60)=y; *(surface+0x68)=flags; *(surface+100)=flags2; return 0;
    """
    pass


def set_draw_color(color: int, a: int, b: int, c: int) -> None:
    """Set the current drawing color. (FUN_00476310)

    Original C: *(param_1+0x6c)=param_2; *(param_1+0x7c)=param_3;
    *(param_1+0x8c)=param_4; *(param_1+0x9c)=param_5;
    """
    pass


def draw_rect(x: int, y: int, w: int, h: int, color: int) -> None:
    """Draw a filled rectangle on screen. (FUN_00480b00)

    Original C: simple wrapper — calls FUN_00478af0(x, y, w, h, color).
    """
    clear_area(x, y, w, h, color)


def clear_area(x: int, y: int, w: int, h: int, color: int) -> None:
    """Clear/fill a rectangular area with solid color. (FUN_00478af0)

    Original C: local vars set to (x, y, x+w, y+h), calls FUN_00478b50(&rect, color).
    """
    pass


def blit_list(surface: int, src_surface: int, x: int, y: int, flags: int) -> None:
    """Batch blit operation (blit list). (FUN_00473f60)

    Original C: checks params for null. If all valid, calls vtable function
    at offset 0x54 with the blit params. Returns error code (0x10 or 7) on failure.
    """
    pass


def set_clip_rect(surface: int, x: int, y: int, w: int, h: int, max_w: int, max_h: int) -> None:
    """Set clipping rectangle for a surface. (FUN_00475c60)

    Original C: calls FUN_00475d00 with params rearranged.
    """
    pass


def draw_tile_preview(surface: int, x: int, y: int, w: int, h: int) -> None:
    """Render a tile preview area. (FUN_00476be0)

    Original C: not found as individual file or in all_decompiled.c.
    Placeholder.
    """
    pass


def draw_3d_surface(surface: int, a: int, b: int, color: int, c: int, d: int) -> None:
    """Render a 3D/raised surface with border. (FUN_00474440)

    Original C: if surface has buffer return 0x18; if a==0 return 0x10;
    if surface->texture && a->texture: if c==0 use 0 else *(c+4);
    call vtable[0x94](a->texture, surface->x + b, surface->y + d, color, ...)
    """
    pass


def draw_bordered_rect(surface: int, x: int, y: int, w: int, h: int, fill: int, outline: int) -> None:
    """Draw a bordered rectangle (fill + outline). (FUN_00473c60)

    Original C: calls FUN_00473bf0 for fill, then sets outline border from surface data.
    *(surface+0xc) = *(x+0xac); *(x+0xac) = 0;
    """
    pass


def draw_surface_flip(surface: int, x: int, y: int, w: int, h: int, unk: int, flip: int) -> None:
    """Draw surface with flip/transform options. (FUN_00473cb0)

    Original C: checks params; if surface has internal buffer, loads palette and draws.
    Otherwise does coordinate transform and calls vtable[0x44].
    """
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Frame Management
# ═══════════════════════════════════════════════════════════════════════════════

def begin_screen() -> None:
    """Begin screen rendering / initialize offscreen buffer. (FUN_00474ae0)

    Original C: initializes a render surface struct with vtable pointers,
    zeroes out fields, sets default values for borders/colors.
    Calls FUN_00492850() twice. Sets many fields to 0/-1/2.
    """
    pass


def end_draw() -> None:
    """End render frame / restore previous surface. (FUN_00474c40)

    Original C: sets vtable pointer, calls FUN_00474cb0(), FUN_004928d0() twice.
    """
    pass


def begin_draw() -> None:
    """Begin render frame. (FUN_00483d30)

    Original C: calls FUN_00483d40(), FUN_00483d60(), FUN_00497b20() sequentially.
    """
    pass


def create_surface(w: int, h: int, x: int, y: int, flags: int, unk: int) -> None:
    """Create/configure a rendering surface. (FUN_00474dd0)

    Original C: calls FUN_00474cb0() to reset, sets internal buffer size,
    calls vtable[0x7c] to create texture. If error, returns.
    Else sets up rendering state via FUN_00478a20(), FUN_00478a70().
    """
    pass


def flip_buffers() -> None:
    """Flip/present buffers. (FUN_00474cb0)

    Original C: renders if texture exists; frees allocated buffers (the 0x28 slots);
    resets many surface fields to defaults.
    """
    pass


def push_render_target(slot: int) -> None:
    """Push/save current render target. (FUN_0045b8b0)

    Original C: if slot != -1 and slot table entry != -1, copies string from
    render buffer to new position, updates slot offsets. Then finds free slot
    or reuses slot, copies current text buffer to render buffer at offset.
    Returns slot index or -1 on overflow.
    """
    pass


def pop_render_target(slot: int) -> None:
    """Pop/restore saved render target. (FUN_0045b9f0)

    Original C: if slot == -1 or slot table entry == -1, return 0.
    Otherwise copies string from render buffer back to text buffer, return 1.
    """
    pass


def push_render_layer() -> None:
    """Push rendering layer state. (FUN_00473ab0)

    Original C: initializes a layer struct with vtable pointer, zeros all fields.
    """
    pass


def pop_render_layer() -> None:
    """Pop rendering layer state. (FUN_00473ae0)

    Original C: if display driver exists: frees texture, buffer, and other
    allocated resources. Zeros all fields.
    """
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Display / Cursor
# ═══════════════════════════════════════════════════════════════════════════════

def show_cursor(flag: int) -> None:
    """Show/hide cursor / process paint messages. (FUN_00480c80)

    Original C: gets cursor dimensions from vtable calls, then calls
    FUN_00480c20(0, 0, width, height, 0) to redraw.
    """
    pass


def update_display(val: int) -> None:
    """Update display / present backbuffer. (FUN_0040daa0)

    Original C: copies course name to text buffer based on current course index.
    If val != -1: gets club tier info, copies club tier name to text buffer.
    """
    pass


def draw_loading_progress(progress: int) -> None:
    """Update loading progress bar (percentage). (FUN_00406250)"""
    pass


def update_screen() -> None:
    """Update display / present the backbuffer. (FUN_00483bd0)

    Original C: sets DAT_0083ad4c = 0x3f; loops calling FUN_00483bb0()
    until it returns 0. Then sets DAT_0083ad4c = 0 and calls FUN_00497b00().
    """
    g_display_mode = 0x3f
    # loop calling process_events until empty
    g_display_mode = 0


# ═══════════════════════════════════════════════════════════════════════════════
#  Mouse / Input
# ═══════════════════════════════════════════════════════════════════════════════

def get_mouse_pos(out_x: list, out_y: list) -> None:
    """Get current mouse position. (FUN_0047ab50)

    Original C: if both out params valid: if display driver exists, call
    vtable[0x2c] to get raw pos. Then FUN_0047b200() for adjustment.
    If param_1 == DAT_0083aa9c (current window), subtract window origin.
    """
    pass


def is_key_pressed(buf: int) -> int:
    """Check if a key is pressed / file exists. (FUN_004378a0)

    Original C: calls FindFirstFileA(param_1, &find_data) and returns
    true if handle != INVALID_HANDLE_VALUE.
    """
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
    """Delay/sleep for a number of game ticks. (FUN_0045bf80)

    Original C: if duration != 0: start = timeGetTime(); while((timeGetTime()-start) < (duration*1000/100)):
    call FUN_00483c30(); if mode != 0: call FUN_0045c030() to check for cancel event.
    Return 1 if canceled, 0 if completed.
    """
    pass


def game_delay_cancel() -> None:
    """Cancel current delay. (FUN_0045c030)

    Original C: PeekMessageA loop for WM_KEY* messages (TranslateMessage/DispatchMessage).
    If DAT_00822d74 == 0: set DAT_00822d68 = 0.
    Call FUN_00483cd0(). Set DAT_00822d74 = 0.
    """
    g_event_flag = 0
    g_event_cancel = 0


def reset_random() -> None:
    """Reset the random number generator. (FUN_0045c150)

    Original C: set DAT_00822d68 = 0; do { update_screen(); game_delay_cancel(); }
    while (DAT_00822d68 != 0); do {} while (get_tick_count() != 0);
    """
    g_event_flag = 0


def get_tick_count() -> int:
    """Get current system tick count. (FUN_0045ae70)

    Original C: if DAT_004d3834 == 0: call FUN_00483c70();
    else: DAT_004d3834 = 0; call FUN_00483c70(); reset tick high/low words.
    Call FUN_00483c30(). If both tick words are 0: return 0.
    Set DAT_004d3834 = 1. Return 1.
    """
    return 0


def get_adjusted_tick() -> int:
    """Get adjusted tick count. (FUN_0045ae50)

    Original C: if DAT_00822b9c == 0: return. Else DAT_00822b9c = 0.
    """
    return 0


# ═══════════════════════════════════════════════════════════════════════════════
#  String / Conversion
# ═══════════════════════════════════════════════════════════════════════════════

def itoa(value: int, buf: int, base: int) -> str:
    """Convert integer to string. (FUN_004ad425)

    Original C: if base==10 and value<0: sign=1, else sign=0.
    Calls FUN_004ad452(value, buf, base, sign). Returns buf.
    (FUN_004ad452 is the actual conversion.)
    """
    return str(value)


# ═══════════════════════════════════════════════════════════════════════════════
#  Sound
# ═══════════════════════════════════════════════════════════════════════════════

def play_sound_ex(sound_id: int, volume: int, pan: int, loop: int, prio: int) -> None:
    """Play a sound effect with extended parameters. (FUN_004481b0)

    Original C: if sound_id != -1: FUN_00484f40(loop); FUN_00485140(volume);
    FUN_004847f0(pan); FUN_004846b0(prio); FUN_00484940();
    """
    pass


def play_sound(sound_id: int) -> None:
    """Play a simple sound effect. (FUN_00448200)

    Original C: calls FUN_00484750(1000).
    """
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Golfer / Character State
# ═══════════════════════════════════════════════════════════════════════════════

def update_golfer_mood(golfer_id: int, param_2: int) -> None:
    """Update golfer satisfaction/mood after an event. (FUN_004676e0)

    Original C: if param_2 != 0: copy "OK" string to text buffer.
    Then select golfer name string based on flag bits:
    - bits 5-6 (0x20/0x40/0x60/0x80) determine personality type
    - For 0x40: name from PTR_DAT_004c2c10 based on DAT_0053a450 & 0x7f index
    - For 0x60: name from PTR_s_J_P_Bigdome_004c2c18 based on sub-type
    - For 0x80: name from s_Ivana_Richman_004e1b94 (even=Agnes, odd=Ivana)
    - Default: name from golfer table (DAT_0057956e indexed)
    Then copy selected name to text buffer.
    """
    pass


def check_partner_status(golfer_id: int) -> int:
    """Check if a golfer is partnered/invited. Returns status. (FUN_0046c940)

    Original C: return (~(byte)DAT_004d60a9[(short)DAT_0057956e[golfer_id*0x80]*0x230] >> 7) & 1;
    """
    return 1


def execute_shot(golfer_id: int, a: int, strokes: int) -> None:
    """Execute a golf shot for a golfer. (FUN_00467a00)"""
    pass


def show_speech_bubble(event_type: int, param_2: int, param_3: int, golfer_id: int) -> None:
    """Show a speech bubble for a golfer. (FUN_00469b00)"""
    pass


def get_golfer_name(name_buf: str, golfer_idx: int, param_3: int) -> None:
    """Get golfer display name. (FUN_00437fa0)

    Original C: copies name from source to local buffer. Then constructs path
    "Themes\\" + golfer_name for file operations. If golfer_idx < 0x4d (77):
    uses "Themes\\" + DAT_00567328 + DAT_004c84e4 path. Else: uses "Themes\\Standard\\" path.
    Then appends the name, checks if file exists via FUN_004a614d.
    If found: reads golfer data from file, sets up facial features.
    Calls FUN_00473bf0 three times to display face thumbnails.
    """
    pass


def get_golfer_by_click(mouse_x: int, mouse_y: int) -> int:
    """Find golfer at screen coordinates. (FUN_00438260)"""
    return -1


def check_golfer_state(golfer_id: int) -> int:
    """Check golfer state/availability. (FUN_00438390)

    Original C: loop: fill_surface with background; get mouse pos;
    check hit test at position; for each face slot draw face;
    if mouse hits arrow buttons adjust scroll offset.
    Returns golfer index or -1.
    """
    return 1


def get_golfer_relationship(golfer_idx: int, param_2: int, param_3: int) -> int:
    """Get relationship/affinity between two golfers. (FUN_00437910)

    Original C: complex save/load function. Constructs path "Themes\\" + name.
    If file exists: shows confirmation dialog to overwrite.
    Calls FUN_00405ac0 to validate name. Checks file path validity.
    Reads/writes golfer data via FUN_004a63a1/FUN_004a6268.
    """
    return 0


def set_golfer_mood(golfer_id: int) -> None:
    """Set golfer mood state. (FUN_004675d0)

    Original C: if DAT_00579540[golfer_id*0x80] & 0x8000: return 2.
    Else: return ~(ushort)DAT_00579540[golfer_id*0x80] >> 14 & 1.
    """
    pass


def partner_golfer(golfer_id: int) -> None:
    """Invite/partner a golfer. (FUN_00462020)

    Original C: complex golfer animation/position update with 3D rendering calls.
    Sets up golfer body parameters (position, rotation, animation frames).
    Calls multiple rendering functions for each body part.
    """
    pass


def calculate_score(golfer_id: int, param_2: int, param_3: int) -> None:
    """Calculate golfer score after a stroke. (FUN_00469a20)

    Original C: selects a review comment string based on score quality (param_1 0-7+):
    0="I hate this stupid course", 1="I don't like this course much",
    2="I'm not having much fun today", 3="This course is almost adequate",
    4="Well, I guess this course is OK", 5="This course is quite nice",
    6=varies by param_2, 7=varies by param_2,
    default: "I hate this course, I'm leaving" or positive depending on range.
    Copies selected string to text buffer.
    """
    pass


def get_skill_rating(skill_idx: int, max_skill: int, variant: int) -> int:
    """Get skill rating value. (FUN_0043d6f0)

    Original C: if slot state is -1: return &DAT_0053ba48 (null/empty).
    If skill_idx >= current max: return &DAT_0053ba48.
    Else: return &DAT_005aaa30 + (max * variant + slot_state + skill_idx) * 0x2c.
    """
    return 0


def show_message(msg: str) -> None:
    """Show a message popup/info dialog. (FUN_0040b4a0)

    Original C: copies msg to local buffer, constructs path "saved games\\" + msg,
    then appends "\\" + msg. Opens dialog via FUN_004a5d48 with flags.
    Calls FUN_0040daa0(0) to update display.
    Then constructs "OK" button string and "Cancel" string.
    Shows dialog via FUN_0040d7b0, FUN_004a5b58, FUN_0040afa0.
    """
    pass


def get_hole_index(hole_id: int) -> None:
    """Get the hole index for a tile/position. (FUN_00407280)

    Original C: if tile flags & 0x81 == 0: copy "Hole" string + number to text buffer.
    Else: check tile type (0x03/0x04/other) and select hole name from ptr table.
    Copy name to text buffer.
    """
    pass


def move_ball(x: int, y: int, z: int) -> None:
    """Move ball to position. (FUN_00407700)

    Original C: if z == -1: get z from heightmap at (x,y).
    If z & 0x100: extract x,y from packed coords.
    Check terrain type at location:
    - 0x15/0x16 (water): find landmark name based on tile type
    - Other types: use switch on feature type to get name string
    Copy name to text buffer. Return 1.
    """
    pass


def show_error_dialog(msg: str, x: int, y: int) -> None:
    """Show an error message dialog. (FUN_0046de70)

    Original C: DAT_00839260 = x; DAT_00839264 = y; DAT_00839278 = 1;
    FUN_0046dea0(msg, 1);
    """
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  UI / Scrolling / Dialogs
# ═══════════════════════════════════════════════════════════════════════════════

def open_file_dialog(pattern: str, default_path: str, title: str) -> int:
    """Open a file browser dialog. (FUN_0043d2a0)

    Original C: clears file list buffer (size 0x9c4). Uses FindFirstFileA/FindNextFileA
    to enumerate files matching pattern. Filters by include/exclude strings.
    Removes "shadow" and "Shadow" files. Stores matching filenames in buffer.
    Returns count of matching files or 0 if none found.
    """
    return 0


def text_input_prompt(prompt: str, max_len: int, x: int, y: int) -> int:
    """Open a text input dialog. (FUN_0045b2c0)

    Original C: copies prompt and current text to local buffers.
    Enters input loop: draws dialog box, text field, cursor.
    Handles keyboard input (backspace, delete, arrows, home, end).
    Validates character input via FUN_004a65c0.
    Enter (0xd) / Escape (0x1b) exit the loop.
    """
    return 0


def create_scrollbar(x: int, y: int, w: int, h: int, flags: int) -> int:
    """Create a scrollable list/area. (FUN_0046d6e0)

    Original C: parses text buffer (newline-delimited) into lines.
    Draws scrollable list with mouse/keyboard navigation.
    Supports selection highlighting, scrolling by up/down keys.
    Click returns selected index. Returns -1 on escape.
    """
    return 0


def show_course_rating(val: int) -> None:
    """Show course rating display. (FUN_004532a0)"""
    pass


def draw_minimap(x: int, y: int, w: int, h: int, color: int) -> None:
    """Draw the minimap. (FUN_0040ca10)"""
    pass


def draw_outlined_rect(x: int, y: int, w: int, h: int, color: int) -> None:
    """Draw an outlined rectangle. (FUN_0045b0d0)

    Original C: word-wrap text from text buffer into rect area.
    Parses text for spaces, newlines, and '^' markers for line breaks.
    Draws each word-wrapped line via FUN_004049d0 (left) or FUN_00404ad0 (shadow).
    Returns final y position.
    """
    pass


def format_name_text(template: str, name_buf: str) -> None:
    """Format name text from template. (FUN_0045b7c0)

    Original C: uses _strstr to find template in text buffer.
    If found: saves remainder, replaces template with name_buf,
    then appends saved remainder. This is a search-and-replace in buffer.
    """
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Economy / Club Funds
# ═══════════════════════════════════════════════════════════════════════════════

def add_money(amount: int) -> None:
    """Add club funds/money. (FUN_0042dc00)

    Original C: if amount < 0: copy "-" sign to text buffer, negate amount.
    If amount > 999: recursively add_money(amount/1000), then copy "," separator.
    Format remainder with leading zeros for consistency.
    Convert to string via itoa and append to text buffer.
    """
    g_text_buffer = str(amount)


def spend_money(value: int) -> None:
    """Spend/subtract club funds. (FUN_0042dd50)

    Original C: DAT_00569628 = value; if value < 0: copy "-" sign.
    Convert value/100 to string via itoa and copy to text buffer.
    Append "." for decimal separator.
    If value%100 < 10: append "0" for padding.
    Convert value%100 to string and append.
    """
    g_money_amount = value
    g_text_buffer = f"{value // 100}.{value % 100:02d}"


# ═══════════════════════════════════════════════════════════════════════════════
#  Math / Utility
# ═══════════════════════════════════════════════════════════════════════════════

def clamp_int(value: int, min_val: int, max_val: int) -> int:
    """Clamp an integer between min and max values. (FUN_00467130)

    Original C: if value < min_val: value = min_val.
    if max_val < value AND min_val <= max_val: value = max_val.
    return value.
    """
    if value < min_val:
        return min_val
    if value > max_val and min_val <= max_val:
        return max_val
    return value


# ═══════════════════════════════════════════════════════════════════════════════
#  Particles
# ═══════════════════════════════════════════════════════════════════════════════

def spawn_particles(flags: int, a: int, param_1: int) -> None:
    """Spawn particle effects. (FUN_0040cb00)

    Original C: if particle inactive and effect_counter==0 and param_2<1
    OR game_mode==3: return 0.
    Copy current text to particle buffer, set flags.
    Set particle active = 1. Set effect type from param_1.
    Calculate duration. If param_2 < 0: store absolute value.
    Set random offsets via FUN_0045c1e0.
    Return 1.
    """
    pass


def spawn_sound_particles(sound_id: int, x: int, y: int, z: int) -> None:
    """Spawn particles at sound origin position. (FUN_0040c500)

    Original C: converts world coords to screen coords via FUN_0042fb90.
    Clamps screen coords (x: 0-599, y: 0-799).
    If sound_pos_flag: calculates pan from x/12, volume from y.
    Else: calculates pan with random variation.
    Calls FUN_004481b0 to play 3D-positioned sound.
    """
    pass


def spawn_money_particles(amount: int, x: int, y: int, a: int) -> None:
    """Spawn money/coin particle effects. (FUN_0040c890)

    Original C: if amount != 0 and mode_flags & 0x1000000 == 0:
    If a != -1: subtract amount from golfer's money at DAT_00575ca0 + a*0x208.
    Store position and amount in ring buffer at DAT_00542fd8/DAT_00542ff8/DAT_00542dd8.
    Set type = 0x18. Advance ring buffer index (mod 8, signed).
    """
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
    """Set interface/edit mode. (FUN_004658b0)

    Original C: calls FUN_004659a0() first. If flag != 0:
    copies "Themes\\" path to text buffer, then appends DAT_00567328 and DAT_004c856c.
    Calls FUN_0043d2a0() to enumerate theme files.
    For each file found: sets flag byte and loads golfer names.
    """
    pass


def apply_terrain(terrain_idx: int, flag: int) -> None:
    """Apply terrain brush/change. (FUN_004060a0)

    Original C: analyzes terrain data at tile position across 9 cells (3x3 grid).
    Computes weighted height changes for each direction (N, NE, E, SE, S, SW, W, NW).
    Returns the slope difference between weighted average and center.
    """
    return 0


def spawn_animal(a: int, x: int, y: int) -> None:
    """Spawn an animal/entity on the course. (FUN_0046e7b0)

    Original C: if mode_flags & 0x4000000 == 0 and entry at type*12 is empty:
    stores type, position, and course index in animal structure.
    """
    pass


def draw_ui_element(x: int, y: int, w: int, h: int, buf: int, flags: int) -> None:
    """Draw a UI element from buffer. (FUN_00486110)"""
    pass


def set_ui_flags(flags: int) -> None:
    """Set UI flags. (FUN_00486b30)

    Original C: if flags == 0: FUN_00486ec0(); else: FUN_00486dc0();
    Then set UI flags field, call vtable[0x120] for refresh.
    """
    pass


def set_text_max_len(max_len: int) -> None:
    """Set maximum text input length. (FUN_00486250)

    Original C: if max_len != current max: malloc new buffer, copy old text,
    free old buffer, store new buffer and size.
    """
    pass


def set_text_buf(buf: str) -> None:
    """Set current text input buffer. (FUN_00486200)

    Original C: if text buffer exists: if buf is null: clear it; else: strncpy.
    Recalculate length from strlen. Call vtable[0x120] for refresh.
    """
    pass


def set_mode_focus(mode: int) -> None:
    """Set UI mode/focus. (FUN_0047b670)

    Original C: complex focus handler. Checks mode flags.
    Updates cursor, calls refresh functions. Handles scroll offset calculations.
    Calls vtable functions for rendering updates.
    """
    pass


def refresh_text_input() -> None:
    """Refresh/redraw text input area. (FUN_00483bb0)

    Original C: calls FUN_0049c8e0(), FUN_00497b00(), FUN_00497b20(),
    then vtable[0x128] on display driver.
    """
    pass


def clear_text_input() -> None:
    """Clear text input area. (FUN_00483c70)

    Original C: calls FUN_0049c8e0(), FUN_00497b20(),
    then vtable[0x134] on display driver.
    """
    pass


def get_text_input_state() -> None:
    """Get text input state. (FUN_00483d80)

    Original C: calls FUN_00497b20(), then vtable[0x120] on display driver.
    """
    pass


def close_text_input() -> None:
    """Close/dismiss text input. (FUN_004860d0)

    Original C: if text buf exists: free it. Calls FUN_00485ff0(),
    FUN_00486f10(), FUN_00480610().
    """
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Color / Pixel
# ═══════════════════════════════════════════════════════════════════════════════

def make_color(r: int, g: int, b: int, a: int) -> int:
    """Create a packed color value from RGBA components. (FUN_00483420)

    Original C: color matching function. If param_2 != 0: checks surface color
    against 5 palettes (5x16 colors), finds best match using Euclidean distance
    in RGB space. Else: searches through 256 colors for best match.
    Returns index of closest matching color.
    """
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
    """Update scroll/pan amount. (FUN_0040a9a0)

    Original C: switch on param_1 (club type index 0-0xd):
    copies club name string to text buffer:
    0="Driver", 1="3 Wood", 2="4 Wood", 3="2 Iron", 4="3 Iron",
    5="4 Iron", 6="5 Iron", 7="6 Iron", 8="7 Iron", 9="8 Iron",
    10="9 Iron", 11="Lob Wedge", 12="Sand Wedge", 13="Putter"
    """
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Economy-specific stubs (only in golf_economy.py)
# ═══════════════════════════════════════════════════════════════════════════════

def compute_golfer_cost() -> int:
    """Compute golfer hiring/maintenance cost. (FUN_004732d0)

    Original C: course ranking computation. Iterates through course list
    (DAT_00541d64 table, stride 0x27 = 39 entries). Finds position by
    comparing total score (length/10 + holes + rating) * (tier+1).
    Inserts current course into sorted position, shifting others down.
    Copies course name to text buffer. Returns rank index.
    """
    return 0


def update_golfer_happiness() -> None:
    """Update golfer happiness levels. (FUN_00473470)

    Original C: renders the Top 10 leaderboard screen. Calls FUN_004732d0()
    to compute rankings, loads interface textures, draws each ranked entry
    with name, course length, money, and total score. Displays trophies.
    Uses FUN_00404b70 for title text rendering.
    """
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
    """Move ball to 3D position on course. (FUN_00407700)

    Same as move_ball — constructs landmark/hole name based on terrain at position.
    See move_ball for details.
    """
    move_ball(x, y, z)


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
    """Handle mouse click at position. (FUN_00432620)

    Original C: draws a horizontal line at mouse_y with markers.
    Uses text buffer content to calculate line dimensions.
    Draws title text above the line showing text buffer content.
    """
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
    """Scroll viewport by copying source area. (FUN_004628d0)

    Original C: calculates scroll offset based on zoom factor and speed.
    Determines divisor from viewport zoom: 0x10 if >1000, 0xd if >0x4af, else 0x10.
    If param_7 < 0: negative scroll direction.
    If param_7 == 0: center-based scroll.
    Stores result in scroll position arrays and calls FUN_00462be0().
    """
    pass


# ═══════════════════════════════════════════════════════════════════════════════
#  Set color (condensed)
# ═══════════════════════════════════════════════════════════════════════════════

def set_color(color: int, flags: int, mode: int, unk: int) -> None:
    """Set drawing color with flags. (FUN_00476310)

    Original C: *(param_1+0x6c)=flags; *(param_1+0x7c)=mode;
    *(param_1+0x8c)=unk; *(param_1+0x9c)=param_5;
    """
    pass
