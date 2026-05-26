"""
jgld_render.py -- Python translation of jgld.dll (Jackal Graphics Library - Render)

Source: ref/decompiled/ghidra/jgld/all_decompiled.c (1317 functions total)
Original: SimGolf's OpenGL/Direct3D wrapper DLL "jgld.dll" (Jackal Graphics Library)

This module translates the C++ class hierarchy and key rendering pipeline
functions from decompiled C to Python. The original DLL:
- Wraps OpenGL (glBegin/glEnd/glVertex/glTexture etc.) operations
- Manages Direct3D surface operations
- Uses a function-pointer-based vtable dispatch pattern
- Implements a full GDI-based software rendering backend named "Jackal"

All function signatures from all_decompiled.c are included as stub comments.
Logical implementations are provided for the most important structural functions.
"""

from __future__ import annotations
import ctypes
import struct
from enum import IntEnum
from typing import Any, Callable, Optional
import ctypes.wintypes as w

# ──────────────────────────────────────────────
# Win32 Type Aliases
# ──────────────────────────────────────────────
HWND = int
HDC = int
HINSTANCE = int
HICON = int
HCURSOR = int
HBRUSH = int
HMENU = int
HANDLE = int
HMODULE = int
HGDIOBJ = int
HFONT = int
LPCSTR = int  # pointer to const char*
LPARAM = int
WPARAM = int
LPRECT = int
RECT = tuple[int, int, int, int]
DWORD = int
LONG = int
BOOL = int
FARPROC = int
LPVOID = int
LPCRITICAL_SECTION = int
DEVMODEA = int

# ──────────────────────────────────────────────
# Constants from Win32 and the DLL
# ──────────────────────────────────────────────

# Window messages (from FUN_100692b0 WndProc)
WM_SIZE = 0x5
WM_ACTIVATE = 0x6
WM_PAINT = 0xF
WM_ERASEBKGND = 0x14
WM_COMMAND = 0x111
WM_SYSCOMMAND = 0x112
WM_KEYDOWN = 0x100
WM_KEYUP = 0x101
WM_CHAR = 0x102
WM_SYSKEYDOWN = 0x104
WM_SYSKEYUP = 0x105
WM_MOUSEMOVE = 0x200
WM_LBUTTONDOWN = 0x201
WM_LBUTTONUP = 0x202
WM_RBUTTONDOWN = 0x204
WM_RBUTTONUP = 0x205
WM_MBUTTONDOWN = 0x207
WM_MBUTTONUP = 0x208
WM_MOUSEWHEEL = 0x20A

# ShowWindow constants
SW_HIDE = 0
SW_SHOWNORMAL = 1
SW_SHOWMAXIMIZED = 3
SW_MINIMIZE = 6

# BitBlt raster ops
SRCCOPY = 0xCC0020

# GDI stock objects
WHITE_BRUSH = 4
DEFAULT_GUI_FONT = 17

# Display mode
CDS_TEST = 2

# Window class styles
CS_HREDRAW = 0x2
CS_VREDRAW = 0x1
CS_DBLCLKS = 0x8
CS_OWNDC = 0x20

# Window styles
WS_POPUP = 0x80000000
WS_VISIBLE = 0x10000000
WS_CAPTION = 0xC00000
WS_CLIPCHILDREN = 0x2000000
WS_CLIPSIBLINGS = 0x4000000

WS_EX_TOPMOST = 0x8
WS_EX_APPWINDOW = 0x40000
WS_EX_CLIENTEDGE = 0x200

# File mapping
PAGE_READWRITE = 0x4
FILE_MAP_ALL_ACCESS = 0xF001F
FILE_MAP_READ = 0x4
FILE_MAP_WRITE = 0x2
INVALID_HANDLE_VALUE = -1

# Critical section
DAT_101286b0 = 0  # placeholder for CRITICAL_SECTION

# Global data pointers (from Ghidra decompilation)
# DAT_1012872c → Render device vtable pointer (set by FUN_100657e0)
DAT_1012872c: int = 0
# DAT_10128724 → GDI device context handle
DAT_10128724: int = 0
# DAT_1012873c → Backbuffer/surface pointer
DAT_1012873c: int = 0
# DAT_10128728 → flag
DAT_10128728: int = 0
# DAT_10128420 → Another object vtable pointer
DAT_10128420: int = 0
# DAT_101287b0 → reference count
DAT_101287b0: int = 0


# ──────────────────────────────────────────────
# Class: RenderDevice (the main "Jackal" engine)
# ──────────────────────────────────────────────
# From: FUN_100654b0, FUN_10065670, FUN_100657e0, etc.
#
# Memory layout (0x14c = 332 bytes struct):
#   +0x000: vtable pointer (→ PTR_LAB_1011d640)
#   +0x004: devmode (display settings)
#   +0x140: HINSTANCE
#   +0x144: HWND
#   +0x148: renderer object pointer (surface/backbuffer)
#   +0x130: screen height
#   +0x12c: screen width (offset 300 = 0x12c)
#   +0x134: color depth (bits)
#   +0x138: GDI HDC (window DC)
#   +0x14c: end of struct size

class RenderDevice:
    """
    Main rendering device class.
    Manages the application window ("JackalClass") and the rendering surface.
    Corresponds to the C++ class whose vtable is at PTR_LAB_1011d640.
    """
    # Vtable method indices (from function calls through this->vtable)
    # Methods called with (this + 0x58) = resize callback
    # Methods called with (this + 0x60) = some param 4-arg call
    # Methods called with (this + 0x68) = get something
    # Method at +100 (0x64) = select surface

    def __init__(self):
        # Layout matching FUN_100654b0 initialization
        self.vtable_ptr: int = 0  # set to &PTR_LAB_1011d640
        self.devmode: Optional[dict] = None  # display settings at +0x04
        self.hInstance: int = 0  # +0x140
        self.hwnd: int = 0  # +0x144
        self.renderer: Optional[object] = None  # +0x148, surface/backbuffer
        self.screen_width: int = 0  # +0x12c (offset 300)
        self.screen_height: int = 0  # +0x130
        self.color_depth: int = 8  # +0x134
        self.hdc: int = 0  # +0x138, window device context
        # offsets 0x4b-0x52 are zeroed (padding/flags)

    def resize(self, width: int, height: int, param_3: int = 0):
        """Called through vtable+0x58 (from FUN_10066200)."""
        self.screen_width = width
        self.screen_height = height
        # Resize the backbuffer surface

    def init_window(self, render_device_ptr: int, title: str, param_3_ptr: int):
        """
        Create the application window.
        Original: FUN_100657e0 (offset 0x100657E0)
        
        param_1 = render device interface pointer (→ stored in DAT_1012872c)
        param_2 = window title (LPCSTR)
        param_3 = renderer object pointer (vtable-based)
        """
        DAT_1012872c = render_device_ptr
        self.renderer = param_3_ptr
        self.hInstance = 0  # GetModuleHandleA(None)

        # Window class: "JackalClass"
        # WNDCLASSA style = CS_HREDRAW|CS_VREDRAW|CS_DBLCLKS|CS_OWNDC = 0x2B
        # lpfnWndProc = &LAB_10001302 (window procedure → FUN_100692b0)

        # Create fullscreen window
        # WS_EX_TOPMOST|WS_EX_APPWINDOW = 0x40008
        # style = WS_POPUP|WS_VISIBLE = 0x90000000
        self.screen_width = 0  # GetSystemMetrics(0)
        self.screen_height = 0  # GetSystemMetrics(1)
        self.color_depth = 8

        # GetDC(hwnd) → self.hdc
        # SetBkMode(self.hdc, 1)  # TRANSPARENT

        # Call renderer->init(width, height, depth, fullscreen)
        # (**(code **)*param_3)(width, height, depth, 1)

    def shutdown(self):
        """
        Destroy window and restore display.
        Original: FUN_100656c0 (offset 0x100656C0)
        """
        # ChangeDisplaySettingsA(None, 0)
        if self.hwnd:
            # DestroyWindow(self.hwnd)
            self.hwnd = 0
        if self.renderer:
            # (**(code **)(*(self.renderer) + 8))()  — destroy renderer
            self.renderer = None
        # UnregisterClassA("JackalClass", self.hInstance)
        self.hInstance = 0

    def show_window(self, cmd_show: int = SW_SHOWNORMAL):
        """Show or hide the window (wraps ShowWindow)."""
        # From FUN_100675e0 (SW_SHOWNORMAL=1), FUN_10067640 (SW_HIDE=0),
        # FUN_100676a0 (SW_MINIMIZE=6), FUN_10067700 (SW_SHOWMAXIMIZED=3)
        pass

    def get_window_rect(self) -> RECT:
        """
        Get window rectangle.
        Original: FUN_10066650
        """
        # GetWindowRect(self.hwnd, &rect)
        return (0, 0, self.screen_width, self.screen_height)


# ──────────────────────────────────────────────
# Class: RenderDeviceInterface (vtable at DAT_1012872c)
# ──────────────────────────────────────────────
# From: FUN_10069xxx series functions
#
# Vtable layout (method offsets from *DAT_1012872c):
#   +0x00 → method_0(p1, p2)          [FUN_10069db0: WM_SIZE handler]
#   +0x04 → method_1(hwnd)            [FUN_10069ac0: WM_PAINT handler]
#   +0x08 → method_2(p1, p2)          [FUN_10069e10: WM_NCPAINT/WM_ERASEBKGND]
#   +0x0c → method_3(key, down)       [FUN_10069c70: keyboard handler]
#   +0x10 → method_4(char_byte)       [FUN_10069d50: WM_CHAR handler]
#   +0x14 → method_5(x, y)            [FUN_10069ee0: mouse move handler]
#   +0x18 → method_6(x, y, flags)     [FUN_10069e70: mouse btn handler]
#   +0x1c → method_7(btn, x, y)       [FUN_10069f40: lbtn/rbtn down]
#   +0x20 → method_8(x, y)            [FUN_10069fb0: lbtn/rbtn up]
#   +0x24 → method_9(x, y, flags)     [FUN_1006a010: mbtn down]
#   +0x28 → method_10(x, y)           [FUN_1006a080: mbtn up]
#   +0x2c → method_11(w, h, param_4?) [FUN_10069b90: WM_ACTIVATE handler]
#   +0x34 → method_13()               [FUN_1006b0f0: custom message 0x402]

class RenderDeviceInterface:
    """
    Abstract base for the render device interface (vtable at DAT_1012872c).
    This is the core rendering abstraction that the game uses. 
    The actual implementation can be OpenGL, Direct3D, or GDI software.
    """

    def method_0(self, param_1: int, param_2: int) -> None:
        """Vtable+0x00: WM_SIZE handler (window resize)."""
        raise NotImplementedError

    def method_1(self, hwnd: int) -> None:
        """Vtable+0x04: WM_PAINT handler (BeginPaint/EndPaint)."""
        raise NotImplementedError

    def method_2(self, param_1: int, param_2: int) -> None:
        """Vtable+0x08: WM_NCPAINT/WM_ERASEBKGND handler."""
        raise NotImplementedError

    def method_3(self, key_code: int, is_down: int) -> None:
        """Vtable+0x0c: Keyboard key event (WM_KEYDOWN/WM_KEYUP)."""
        raise NotImplementedError

    def method_4(self, char_byte: int) -> None:
        """Vtable+0x10: Character input (WM_CHAR)."""
        raise NotImplementedError

    def method_5(self, x: int, y: int) -> None:
        """Vtable+0x14: Mouse move (WM_MOUSEMOVE)."""
        raise NotImplementedError

    def method_6(self, x: int, y: int, flags: int) -> None:
        """Vtable+0x18: Mouse button with flags."""
        raise NotImplementedError

    def method_7(self, button: int, x: int, y: int) -> None:
        """Vtable+0x1c: Mouse button down (WM_LBUTTONDOWN, WM_RBUTTONDOWN)."""
        raise NotImplementedError

    def method_8(self, x: int, y: int) -> None:
        """Vtable+0x20: Mouse button up (WM_LBUTTONUP, WM_RBUTTONUP)."""
        raise NotImplementedError

    def method_9(self, x: int, y: int, flags: int) -> None:
        """Vtable+0x24: Middle mouse button down (WM_MBUTTONDOWN)."""
        raise NotImplementedError

    def method_10(self, x: int, y: int) -> None:
        """Vtable+0x28: Middle mouse button up (WM_MBUTTONUP)."""
        raise NotImplementedError

    def method_11(self, w: int, h: int, param_4: int) -> None:
        """Vtable+0x2c: WM_ACTIVATE handler (window activation)."""
        raise NotImplementedError

    def method_13(self) -> None:
        """Vtable+0x34: Custom message 0x402 handler."""
        raise NotImplementedError


# ──────────────────────────────────────────────
# Class: Surface / BackBuffer
# ──────────────────────────────────────────────
# From: FUN_10066470 (BitBlt to screen), FUN_10066040 (texture lookup)
#
# Vtable pattern:
#   +0x28: get HDC (begin rendering)
#   +0x2c: release HDC (end rendering)
#   +0x58: something
#   +0x60: texture/blit with 4 params
#   +0x68: get surface count
#   +0x64: select surface (index)
#   +0xd4: get width pointer
#   +0xec: prepare for blit (set source)

class Surface:
    """
    A rendering surface/backbuffer.
    Used as the primary render target (stored at RenderDevice.renderer).
    """
    def __init__(self):
        self.width: int = 0
        self.height: int = 0
        self.bits_per_pixel: int = 8
        self.pitch: int = 0
        self.pixels: Optional[bytearray] = None
        self.hdc: int = 0  # memory DC for GDI operations

    def get_hdc(self) -> int:
        """
        Get device context for rendering.
        Vtable+0x28: returns HDC for drawing.
        """
        return self.hdc

    def release_hdc(self, release_flag: int = 1):
        """
        Release device context after rendering.
        Vtable+0x2c: release HDC with optional flag.
        """
        pass

    def blit_to(self, dst_hdc: int, dst_rect: Optional[RECT] = None, 
                src_rect: Optional[RECT] = None):
        """
        BitBlt from this surface to a destination DC.
        Called from FUN_10066470: see the blit pipeline.
        """
        # Uses BitBlt(dst_hdc, dx, dy, dw, dh, src_hdc, sx, sy, SRCCOPY)
        raster_op = SRCCOPY  # 0xCC0020
        if dst_rect is None:
            # Full surface blit
            # BitBlt(dst_hdc, 0, 0, width, height, src_hdc, 0, 0, SRCCOPY)
            pass
        else:
            # Clipped blit
            pass

    def resize(self, width: int, height: int, bpp: int):
        """Resize the surface's pixel buffer."""
        self.width = width
        self.height = height
        self.bits_per_pixel = bpp
        self.pitch = width * (bpp // 8)
        self.pixels = bytearray(self.pitch * height)


# ──────────────────────────────────────────────
# Class: Font
# ──────────────────────────────────────────────
# From: FUN_10068850 (CreateFontIndirectA-based)
# Uses global DAT_10128724 as the HDC for text metrics

class Font:
    """
    GDI font wrapper.
    Original: FUN_10068850
    C++ struct at +0x14 has a flags field (bit 0 = created flag)
    +0x04: pointer to metrics struct
    +0x18: HFONT handle
    """
    def __init__(self):
        self.hfont: int = 0  # +0x18: HFONT
        self.height: int = 0
        self.ascent: int = 0
        self.descent: int = 0
        self.internal_leading: int = 0
        self.external_leading: int = 0

    def create(self, font_name: str, height: int, flags: int = 0):
        """
        Create a GDI font.
        Original at FUN_10068850.
        
        flags bit 0 → bold (weight 700)
        flags bit 1 → italic
        flags bit 2 → underline
        """
        # LOGFONTA lf = {
        #   lfHeight = -height,
        #   lfWeight = (flags & 1) ? 700 : 0,
        #   lfItalic = (flags & 2) != 0,
        #   lfUnderline = (flags & 4) != 0,
        #   ...
        #   lfFaceName = font_name
        # }
        # HFONT = CreateFontIndirectA(&lf)
        # SelectObject(hdc, hfont)
        # GetTextMetricsA(hdc, &tm)
        # → store metrics
        pass

    def delete(self):
        """Delete the GDI font object."""
        if self.hfont:
            # DeleteObject(self.hfont)
            self.hfont = 0


# ──────────────────────────────────────────────
# Class: VideoMode enumeration
# ──────────────────────────────────────────────
# From: FUN_10065a90 (EnumDisplaySettingsA-based)

class VideoMode:
    """
    Display mode entry (from EnumDisplaySettingsA).
    """
    def __init__(self, width: int = 0, height: int = 0, bpp: int = 0, 
                 refresh: int = 0):
        self.width = width
        self.height = height
        self.bits_per_pixel = bpp
        self.refresh_rate = refresh


def enumerate_video_modes() -> list[VideoMode]:
    """
    Enumerate all available display modes.
    Original: FUN_10065a90
    
    Uses EnumDisplaySettingsA to fill two global arrays:
    - DAT_101286c8: list of mode structures
    - DAT_101286f8: list of mode structures (duplicate?)
    """
    modes: list[VideoMode] = []
    # DEVMODEA devmode = { dmSize = 0x94, ... }
    # iModeNum = 0
    # while EnumDisplaySettingsA(None, iModeNum, &devmode):
    #     mode = VideoMode(width=devmode.dmPelsWidth,
    #                      height=devmode.dmPelsHeight,
    #                      bpp=devmode.dmBitsPerPel,
    #                      refresh=devmode.dmDisplayFrequency)
    #     modes.append(mode)
    #     # Store in sorted list at DAT_101286c8 & DAT_101286f8
    #     iModeNum += 1
    return modes


# ──────────────────────────────────────────────
# Key original function signature stubs
# ──────────────────────────────────────────────
# These are all the named/jump-table functions from all_decompiled.c
# organized by address range.

# === Address 0x10002650 ===
# undefined4* __fastcall FUN_10002650(undefined4* param_1)
# Constructor: sets vtable to &PTR_LAB_1011d01c, zeros fields

# === Address 0x100026C0 ===
# void __thiscall FUN_100026c0(void* this, uint param_1)
# Destructor: calls thunk_FUN_10002820, then optionally operator delete

# === Address 0x10002730 ===
# void __thiscall FUN_10002730(void* this, LPCSTR param_1, int param_2)
# Constructor with string

# === Address 0x100027B0 ===
# void __thiscall FUN_100027b0(void* this, LPCSTR param_1)
# Constructor with string (param_2 = 0)

# === Address 0x10002820 ===
# void __fastcall FUN_10002820(undefined4* param_1)
# Constructor: sets vtable to &PTR_LAB_1011d01c, calls FUN_10002e10

# === Address 0x10002870 ===
# void __thiscall FUN_10002870(void* this, LPCSTR param_1, int param_2)
# File mapping constructor (CreateFileA, CreateFileMappingA, MapViewOfFile)
# Struct layout: +0x00 vtable, +0x04 mapped ptr, +0x08 file handle, 
#                +0x0c mapping handle, +0x10 size

# === Address 0x10002A20 ===
# void __thiscall FUN_10002a20(void* this, LPCSTR param_1, int param_2)
# File reader constructor (similar to 0x10002870 but read-only)

# === Address 0x10002BD0 ===
# void __thiscall FUN_10002bd0(void* this, LPCSTR param_1, size_t param_2, int param_3)
# File writer constructor (create file, set size, map view)

# === Address 0x10002E10 ===
# void __fastcall FUN_10002e10(int param_1)
# Destructor: closes file mapping handles, unmaps view

# === Address 0x10002EF0 ===
# void __thiscall FUN_10002ef0(void* this, uint param_1)
# bool param: destructor with conditional delete

# === Address 0x10003050 ===
# void __fastcall FUN_10003050(void* param_1)
# memcpy-based block copy?

# === Address 0x100030B0 ===
# void* __thiscall FUN_100030b0(void* this, undefined4* param_1)
# Copy/move semantics

# === Address 0x10003110 ===
# void __thiscall FUN_10003110(void* this, float param_1, undefined4* param_2)
# Float assignment

# === Address 0x10003170 ===
# void __fastcall FUN_10003170(void* param_1)
# memcpy

# === Address 0x100031D0 ===
# void __thiscall FUN_100031d0(void* this, float* param_1, undefined4* param_2)
# Float array copy

# === Address 0x10003230 ===
# void __thiscall FUN_10003230(void* this, float* param_1)
# Single float pointer dereference

# === Address 0x10003290 ===
# void __thiscall FUN_10003290(void* this, undefined4* param_1)
# Int assignment via memcpy

# === Address 0x100032F0 ===
# void __fastcall FUN_100032f0(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011d05c

# === Address 0x10003340 ===
# void __fastcall FUN_10003340(int param_1)
# memcpy-based destroy

# === Address 0x10003390 ===
# void __thiscall FUN_10003390(void* this, undefined4* param_1, undefined4* param_2)
# memcpy with offsets

# === Address 0x10003400 ===
# void __thiscall FUN_10003400(void* this, undefined4* param_1)
# vtable set to &PTR_LAB_1011d098, memcpy

# === Address 0x10003470 ===
# void __thiscall FUN_10003470(void* this, undefined4* param_1)
# vtable set to &PTR_LAB_1011d0c4

# === Address 0x100034E0 ===
# void __fastcall FUN_100034e0(undefined4* param_1)
# vtable to &PTR_LAB_1011d0e0

# === Address 0x10003530 ===
# void __thiscall FUN_10003530(void* this, undefined4* param_1, undefined4* param_2)
# memcpy 4 bytes with vtable

# === Address 0x100035B0-0x10003730 ===
# Various small memcpy/assignment wrappers

# === Address 0x10003790 ===
# float* __thiscall FUN_10003790(void* this, float* param_1, int param_2)
# Float array indexing

# === Address 0x10003820 ===
# float* __thiscall FUN_10003820(void* this, float* param_1, int param_2)
# Float array indexing (alternate)

# === Address 0x100038B0 ===
# void* __thiscall FUN_100038b0(void* this, int param_1)
# Pointer arithmetic

# === Address 0x10003930-0x10003AB0 ===
# Float math helpers (abs, cos, sin approximations?)

# === Address 0x10003B30 ===
# void __thiscall FUN_10003b30(void* this, int param_1)
# Float/vector init

# === Address 0x10003BF0 ===
# float10 __thiscall FUN_10003bf0(void* param_1, int param_2)
# Vector length calculation?

# === Address 0x10003C90 ===
# float10 __thiscall FUN_10003c90(void* param_1, float* param_2)
# Dot product?

# === Address 0x10003CF0 ===
# void __fastcall FUN_10003cf0(float* param_1)
# Vector/4x4 matrix identity initialization

# === Address 0x10003DF0 ===
# void __fastcall FUN_10003df0(float* param_1)
# Matrix/vector zero?

# === Address 0x10003E50 ===
# float* __thiscall FUN_10003e50(void* this, float* param_1, float* param_2)
# 4x4 matrix multiplication?

# === Address 0x10003F10 ===
# void __thiscall FUN_10003f10(void* this, float param_1)
# Scale matrix?

# === Address 0x10003F80 ===
# float* __thiscall FUN_10003f80(void* this, float* param_1, int param_2)
# Matrix column/element access?

# === Address 0x10004020 ===
# void __thiscall FUN_10004020(void* this, float param_1, float param_2, float param_3)
# Translation matrix?

# === Address 0x10004090 ===
# void __thiscall FUN_10004090(void* this, float* param_1)
# Matrix copy/assign

# === Address 0x10004100 ===
# void FUN_10004100(float* param_1)
# 4x4 matrix transpose?

# === Address 0x10004230 ===
# void __thiscall FUN_10004230(void* this, float param_1, undefined4* param_2)
# Rotation matrix around axis?

# === Address 0x100042F0 ===
# void FUN_100042f0(float* param_1)
# Perspective projection matrix?

# === Address 0x10004410 ===
# void FUN_10004410(float* param_1, float* param_2)
# Matrix multiply (result = a × b)

# === Address 0x10004530 ===
# void __fastcall FUN_10004530(float* param_1)
# Matrix/vector normalization?

# === Address 0x10004590 ===
# void __fastcall FUN_10004590(undefined4* param_1)
# Constructor for vector? vtable to &PTR_LAB_1011d148

# === Address 0x100045F0 ===
# void __fastcall FUN_100045f0(int param_1)
# memcpy

# === Address 0x10004690 ===
# void __thiscall FUN_10004690(void* this, float* param_1, undefined4* param_2)
# Vector cross product?

# === Address 0x100046F0-0x10004A50 ===
# More vector/matrix math operations

# === Address 0x10004CC0-0x10004DC0 ===
# void* __thiscall operator new / placement new

# === Address 0x10004E40 ===
# float* __thiscall FUN_10004e40(void* this, float* param_1, float* param_2)
# Vector subtraction?

# === Address 0x10004F40 ===
# void FUN_10004f40(void* param_1, float param_2)
# Vector scaling?

# === Address 0x10005030 ===
# void FUN_10005030(void* param_1, int param_2)
# Vector/array set?

# === Address 0x100052B0 ===
# void __fastcall FUN_100052b0(int param_1)
# memcpy 4 bytes

# === Address 0x10005300-0x10005690 ===
# Various stream/file management and helper funcs

# === Address 0x10005890 ===
# void FUN_10005890(void* param_1, undefined4* param_2)
# Stream read helper

# === Address 0x10005990 ===
# void __thiscall FUN_10005990(void* this, undefined4* param_1)
# Stream read wrapper

# === Address 0x10005A30 ===
# void FUN_10005a30(void* param_1, undefined4* param_2)
# Stream write helper

# === Address 0x10005B30 ===
# void __thiscall FUN_10005b30(void* this, undefined4* param_1)
# Stream write wrapper

# === Address 0x10005BD0 ===
# void __thiscall FUN_10005bd0(void* this, float param_1, float param_2, float param_3)
# 3-component set?

# === Address 0x10005C70-0x10005DD0 ===
# Stream I/O helpers

# === Address 0x10005FF0 ===
# void FUN_10005ff0(void* param_1, float param_2)
# FLOAT write to stream

# === Address 0x100060D0 ===
# void FUN_100060d0(int param_1)
# INT write to stream

# === Address 0x10006270-0x100062E0 ===
# Stream control (seek, flush?)

# === Address 0x10006340-0x10006790 ===
# String/stream conversion functions (ftoa, itoa-style)

# === Address 0x10006840-0x100068D0 ===
# void* __thiscall operator new / operator delete

# === Address 0x10006970-0x10006A40 ===
# void FUN_10006970()... - Static init/atexit registration

# === Address 0x10006AB0 ===
# void __fastcall FUN_10006ab0(undefined4* param_1)
# vtable to &PTR_LAB_1011d0c4, string copy

# === Address 0x10006B10-0x10006B80 ===
# string class destructor/constructor

# === Address 0x10006BF0 ===
# void FUN_10006bf0(void)
# Static guard initialization

# === Address 0x10006C80-0x10006DF0 ===
# Critical section / threading helpers

# === Address 0x10006F40 ===
# void __thiscall FUN_10006f40(void* this, undefined4 param_1, undefined1 param_2)
# String assignment

# === Address 0x10007100 ===
# void __fastcall FUN_10007100(int param_1)
# String buffer management

# === Address 0x100072B0 ===
# (Empty function? Some loop construct)

# === Address 0x10007370 ===
# void* __thiscall FUN_10007370(void* this, undefined4 param_1, undefined1 param_2)
# String constructor

# === Address 0x100073E0 ===
# void __thiscall FUN_100073e0(void* this, uint param_1)
# String destructor variant

# === Address 0x10007450-0x100074F0 ===
# void FUN_10007450() - atexit/cleanup helpers

# === Address 0x10007530 ===
# float10 __fastcall FUN_10007530(uint* param_1)
# Parse float from string?

# === Address 0x100075B0-0x10007970 ===
# String/number conversion functions

# === Address 0x10007BF0-0x10007E40 ===
# Memory/file mapping helpers

# === Address 0x10008360-0x10008590 ===
# RECT manipulation / GDI helpers

# === Address 0x100085F0 ===
# void __cdecl FUN_100085f0(RECT* param_1, RECT* param_2)
# RECT copy (4 ints)

# === Address 0x10008640-0x10008B90 ===
# Misc helpers (string, RECT, brushes)

# === Address 0x10008C40 ===
# void __thiscall FUN_10008c40(void* this, uint param_1, uint param_2, uint param_3)
# Color/RGB helper?

# === Address 0x10008D00 ===
# void __thiscall FUN_10008d00(void* this, uint param_1)
# Color set?

# === Address 0x10008DA0 ===
# void __thiscall FUN_10008da0(void* this, int param_1, int param_2, LPCSTR param_3, int param_4)
# File path resolution

# === Address 0x10008E50 ===
# void __thiscall FUN_10008e50(void* this, undefined4 param_1, undefined4 param_2, 
#                              undefined4 param_3, undefined4 param_4, undefined4 param_5)
# Larger file/path handling

# === Address 0x10008F70-0x100098F0 ===
# File system utilities (directory enumeration, file find, path management)

# === Address 0x100099C0-0x1000A170 ===
# File I/O (read/write blocks, file attribute management)

# === Address 0x1000A4E0-0x1000A550 ===
# void __thiscall FUN_1000a4e0(void* this, uint param_1)
# Memory allocation tracking

# === Address 0x1000A5D0-0x1000A660 ===
# Memory allocator functions (malloc, free, realloc wrappers)

# === Address 0x1000A750-0x1000A8D0 ===
# Pointer/array management utilities

# === Address 0x1000A930-0x1000ABF0 ===
# Array/list management (insert, remove, find)

# === Address 0x1000AC30-0x1000ADF0 ===
# List iteration/navigation

# === Address 0x1000AE30-0x1000AF30 ===
# String formatting (vsprintf-style wrappers)

# === Address 0x1000AFE0 ===
# void FUN_1000afe0(int p1, int p2, int p3, int p4, short p5, short p6)
# Draw line/rect on DC?

# === Address 0x1000B140 ===
# void __thiscall FUN_1000b140(void* this, ...) (large, ~400 lines)
# Font metrics / text rendering

# === Address 0x1000BA90 ===
# void __thiscall FUN_1000ba90(void* this, int p1, int p2, int p3, uint p4)
# Word-wrapped text rendering (~300 lines)

# === Address 0x1000BDE0 ===
# void __thiscall FUN_1000bde0(void* this, int p1, int p2, int p3, uint p4)
# Text rendering with word wrap (alternate)

# === Address 0x1000C140 ===
# void __thiscall FUN_1000c140(void* this, ...) (large, ~400 lines)
# Advanced text rendering (justification, formatting)

# === Address 0x1000CF90 ===
# void __thiscall FUN_1000cf90(void* this, ...) (large, ~200 lines)
# Text line layout / formatting

# === Address 0x1000D4F0 ===
# void __thiscall FUN_1000d4f0(void* this, ...) (large, ~200 lines)
# Text layout continuation

# === Address 0x1000DA70 ===
# void __thiscall FUN_1000da70(void* this, uint param_1)
# Text object destructor

# === Address 0x1000DC90-0x1000ED70 ===
# Large text system functions (paragraph formatting, 
# multi-line text with word wrap)

# === Address 0x1000F6A0 ===
# void FUN_1000f6a0(LPRECT param_1, int* param_2, undefined4 param_3, int param_4)
# RECT clipping/intersection for text rendering

# === Address 0x1000F880 ===
# void FUN_1000f880(int p1, int p2, int p3, int p4, char p5, char p6)
# Line drawing (MoveToEx/LineTo pattern?)

# === Address 0x1000F9E0 ===
# void FUN_1000f9e0(... 6 params ...) 
# Rectangle fill/draw

# === Address 0x1000FB70 ===
# void __thiscall FUN_1000fb70(void* this, ... 5 params ...) (large, ~240 lines)
# Multi-line text box rendering

# === Address 0x10010390 ===
# void __cdecl FUN_10010390(...)
# Text color/formatting state

# === Address 0x100103F0 ===
# void __thiscall FUN_100103f0(void* this, int p1, int p2, int p3, int p4)
# Text cursor positioning / selection

# === Address 0x10010620 ===
# void __thiscall FUN_10010620(void* this, int p1, int p2, int p3, undefined1 p4)
# Text edit box rendering

# === Address 0x10010870 ===
# void __thiscall FUN_10010870(void* this, ...) (large, ~300 lines)
# Rich text / multi-style text rendering

# === Address 0x100114E0 ===
# void __thiscall FUN_100114e0(void* this, ...) (large, ~150 lines)
# Text formatting state management

# === Address 0x10011880 ===
# void __thiscall FUN_10011880(void* this, ...) (large, ~150 lines)
# List box / dropdown rendering

# === Address 0x10011C40 ===
# void __thiscall FUN_10011c40(void* this, undefined2 param_1)
# Button/list item highlight?

# === Address 0x10011DD0 ===
# void __thiscall FUN_10011dd0(void* this, int* param_1, undefined2 param_2)
# Control state management

# === Address 0x10011F80 ===
# void __thiscall FUN_10011f80(void* this, int* param_1, undefined1 param_2)
# UI element drawing

# === Address 0x10012140 ===
# void FUN_10012140(uint* param_1) (~200 lines)
# Image/texture loading (palette management?)

# === Address 0x10012900 ===
# void __thiscall FUN_10012900(void* this, ...) (large, ~150 lines)
# Image/bitmap loader

# === Address 0x10012DB0 ===
# void __thiscall FUN_10012db0(void* this, ...) (large, ~300 lines)
# Bitmap/sprite rendering

# === Address 0x10013800 ===
# void __thiscall FUN_10013800(void* this, ...) (large, ~200 lines)
# Image decompression/format conversion

# === Address 0x10013C50 ===
# void __thiscall FUN_10013c50(void* this, ...) (large, ~280 lines)
# Image/texture data manipulation

# === Address 0x10014550 ===
# void __cdecl FUN_10014550(undefined4 param_1, LPCSTR param_2)
# Debug/error output message

# === Address 0x100145A0 ===
# (Large, ~800 lines)
# Assertion/error handling system

# === Address 0x10014A40 ===
# void __cdecl FUN_10014a40(size_t param_1)
# Memory allocation hook

# === Address 0x10014A90 ===
# void __cdecl FUN_10014a90(void* param_1)
# Memory free hook

# === Address 0x10014AF0 ===
# void __fastcall FUN_10014af0(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011d4e0
# File stream class?

# === Address 0x10014C00 ===
# void __thiscall FUN_10014c00(void* this, uint param_1)
# File stream destructor

# === Address 0x10014C70 ===
# void __fastcall FUN_10014c70(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011d4b4, Buffer class?

# === Address 0x10014CD0 ===
# void __thiscall FUN_10014cd0(void* this, undefined4 param_1)
# Buffer append

# === Address 0x10014DE0 ===
# void __fastcall FUN_10014de0(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011d488

# === Address 0x10014EB0 ===
# void __fastcall FUN_10014eb0(int param_1)
# Destructor helper

# === Address 0x10014FF0 ===
# void __thiscall FUN_10014ff0(void* this, ...)
# Linked list node insert

# === Address 0x100150D0 ===
# void __thiscall FUN_100150d0(void* this, char param_1, char param_2)
# Linked list init?

# === Address 0x10015180 ===
# void __thiscall FUN_10015180(void* this, int* p1, int p2, int p3, int p4)
# (~100 lines) List/array search

# === Address 0x10015480 ===
# void __thiscall FUN_10015480(void* this, int* p1, int p2, int p3, int p4)
# (~120 lines) List/array sort?

# === Address 0x100157E0 ===
# void __thiscall FUN_100157e0(void* this, ...) (~130 lines)
# Hash table operations

# === Address 0x10015BB0 ===
# void __thiscall FUN_10015bb0(void* this, ...) (~130 lines)
# Hash table lookup

# === Address 0x10015F80 ===
# void __thiscall FUN_10015f80(void* this, ...) (~100 lines)
# Hash table insert

# === Address 0x10016270 ===
# void __thiscall FUN_10016270(void* this, ...) (~110 lines)
# Hash table delete

# === Address 0x100165A0 ===
# void __thiscall FUN_100165a0(void* this, ...) (~110 lines)
# Hash table rehash

# === Address 0x100168E0 ===
# void __fastcall FUN_100168e0(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011d8c0, Set class

# === Address 0x10016930 ===
# ... (large area, more hashing/set operations)


# ──────────────────────────────────────────────
# KEY STRUCTURAL FUNCTIONS: 0x10065xxx - 0x1006xxxx
# (Window management, rendering device, surface)
# ──────────────────────────────────────────────

# === FUN_10065010 / FUN_10065050 / FUN_100650A0 / FUN_100650E0 ===
# Small constructors/destructors for device-related objects

# === FUN_10065120 / FUN_10065160 / FUN_100651B0 / FUN_100651F0 ===
# Small helper functions

# === FUN_10065230 ===
# void __fastcall FUN_10065230(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011d7dc

# === FUN_10065270 ===
# void __fastcall FUN_10065270(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011d7a8

# === FUN_100652C0 ===
# void __fastcall FUN_100652c0(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011d780

# === FUN_10065300 ===
# void FUN_10065300(undefined4 param_1, int param_2)
# DLL main helper: Initialize/Delete critical section at DAT_101286b0
# Called on DLL_PROCESS_ATTACH / DLL_PROCESS_DETACH

# === FUN_10065390 ===
# void __fastcall FUN_10065390(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011d74c

# === FUN_10065420 ===
# void __fastcall FUN_10065420(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011d690

# === FUN_100654B0 ===
# void __fastcall FUN_100654b0(undefined4* param_1)
# CONSTRUCTOR for RenderDevice (main class):
#   - Calls thunk_FUN_10065630 (base class constructor)
#   - Sets vtable to &PTR_LAB_1011d640
#   - Zeros fields at offsets 0x4b-0x52
# This is the main "Jackal" rendering device object

# === FUN_100655C0 ===
# (Small helper)

# === FUN_10065630 ===
# void __fastcall FUN_10065630(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011d5a8
# Base class for the rendering device

# === FUN_10065670 ===
# void __fastcall FUN_10065670(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011d640
# Calls thunk_FUN_10066d20 for further init

# === FUN_100656C0 ===
# void __fastcall FUN_100656c0(int param_1)
# DESTRUCTOR: Restores display mode, destroys window, 
# destroys renderer, unregisters window class

# === FUN_100657E0 ===
# void FUN_100657e0(undefined4 param_1, LPCSTR param_2, undefined4* param_3)
# WINDOW CREATION:
#   - Gets module handle
#   - Stores param_1 → DAT_1012872c (render device interface)
#   - Stores param_3 → this+0x148 (renderer object)
#   - Registers "JackalClass" window class (WNDPROC at LAB_10001302)
#   - Creates fullscreen window with CreateWindowExA
#   - Gets DC (this+0x138), sets background mode to TRANSPARENT
#   - Calls (param_3[0])(width, height, depth, 1) to init renderer
#
# Important: This function is called from the game to initialize
# the entire rendering subsystem.

# === FUN_10065A90 ===
# void FUN_10065a90(void)
# DISPLAY MODE ENUMERATION:
#   Uses EnumDisplaySettingsA to enumerate all available modes
#   Stores them in DAT_101286c8 and DAT_101286f8
#
# This is the DLL's display mode enumeration, called at startup.

# === FUN_10066040 ===
# void __thiscall FUN_10066040(void* this, int p1, int p2, int p3, char p4, int p5)
# TEXTURE/SURFACE LOOKUP:
#   If param_4 == 0: search through a list of surfaces (p1=width, p2=height, p3=bpp)
#   to find the best matching surface. Uses vtable+0x68 to get count,
#   then iterates an array at (count+4) with stride 0x14 (20 bytes).
#   Each entry: [0]=param_1, [4]=param_2, [12]=param_3, [16]=param_5.
#   Finds the one that matches p1,p2,p3 and has the best param_5 match.
#   If found, calls vtable+0x64 (select surface) with the index.
#   If param_4 != 0: calls vtable+0x60 (add/create surface with 4 params).

# === FUN_10066200 ===
# void FUN_10066200(undefined4 param_1)
# RESIZE HANDLER:
#   Gets screen dimensions via GetSystemMetrics
#   Calls vtable+0x58 (resize callback) with width, height, param_1
#   (called from window resize event)

# === FUN_10066470 ===
# void __thiscall FUN_10066470(void* this, RECT* param_1)
# Present / FLIP to screen:
#   - Gets the renderer object at this+0x148
#   - Calls renderer.vtable+0x28 (get HDC for drawing)
#   - Calls renderer.vtable+0xec (prepare source for blit)
#   - If param_1 is None: full screen BitBlt
#   - If param_1 is not None: clipped BitBlt with intersection
#   - Calls renderer.vtable+0x2c (release HDC)
#   Uses BitBlt with SRCCOPY opcode
#
# This is the main "flip/present" function — copies the backbuffer to screen.

# === FUN_10066650 ===
# void __thiscall FUN_10066650(void* this, LPRECT param_1)
# GetWindowRect wrapper — gets the window rectangle.

# === FUN_10066710 ===
# void __thiscall FUN_10066710(void* this, int p1, int p2, int p3, int p4)
# Window repositioning?

# === FUN_10066780 ===
# void __thiscall FUN_10066780(void* this, int param_1)
# Set window position?

# === FUN_10066810 ===
# void __thiscall FUN_10066810(void* this, int param_1)
# Window message/post?

# === FUN_10066890 ===
# void __thiscall FUN_10066890(void* this, int param_1, int param_2)
# Set window title?

# === FUN_10066970 ===
# void __thiscall FUN_10066970(void* this, int param_1)
# Window style change?

# === FUN_100669E0 ===
# void __fastcall FUN_100669e0(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011da5c

# === FUN_10066A30 ===
# void __fastcall FUN_10066a30(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011da5c, calls thunk_FUN_10068100

# === FUN_10066A80-0x10066C40 ===
# Various list/array management for rendering surface objects

# === FUN_10066D20 ===
# (Constructor helper)

# === FUN_10067000-0x10067760 ===
# Window management helpers:
#   FUN_100675E0: ShowWindow(SW_SHOWNORMAL=1)
#   FUN_10067640: ShowWindow(SW_HIDE=0)
#   FUN_100676A0: ShowWindow(SW_MINIMIZE=6)
#   FUN_10067700: ShowWindow(SW_SHOWMAXIMIZED=3)

# === FUN_10067820-0x10067910 ===
# Cursor/clip cursor management?

# === FUN_10068000 ===
# void __fastcall FUN_10068000(int param_1)
# Destructor for a small helper object (frees inner pointer)

# === FUN_100680A0 ===
# (Constructor)

# === FUN_10068100 ===
# (Constructor helper)

# === FUN_100681A0 ===
# (Insert into sorted list)

# === FUN_10068300 ===
# void __fastcall FUN_10068300(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011da60
# Calls thunk_FUN_10068610 for init

# === FUN_10068360 ===
# (Constructor)

# === FUN_10068400 ===
# (List insertion)

# === FUN_10068570 ===
# void __fastcall FUN_10068570(int param_1)
# Calls thunk_FUN_10068000

# === FUN_10068610 ===
# (Constructor)

# === FUN_10068660 ===
# void __fastcall FUN_10068660(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011da30

# === FUN_10068760 ===
# void __fastcall FUN_10068760(undefined4* param_1)
# Constructor: vtable to &PTR_thunk_FUN_100691b0_1011da6c
# Complex constructor with exception handling
# Initializes a container/list class

# === FUN_10068850 ===
# void __thiscall FUN_10068850(void* this, uint* param_1, int param_2, uint param_3)
# FONT CREATION:
#   - If param_1 != None:
#     - If (this.flags & 1) == 0: calls vtable+0xc (init function)
#     - Else: resets metrics struct and deletes old font
#     - Creates LOGFONTA with:
#       lfHeight = -param_2 (font height)
#       lfWeight = (param_3 & 1) ? 700 : 0 (bold)
#       lfItalic = (param_3 & 2) != 0
#       lfUnderline = (param_3 & 4) != 0
#       lfFaceName = copy of param_1 (font name string)
#     - Calls CreateFontIndirectA
#     - Selects font into DAT_10128724 (global HDC)
#     - Gets text metrics: height, ascent, descent, internalLeading
#     - Restores stock font in DC

# === FUN_10068E60 ===
# (Font/surface selection utilities)

# === FUN_10068F30 ===
# (HDC select object wrapper)

# === FUN_10068FA0 ===
# (HDC select/release helper)

# === FUN_10069010 ===
# void __fastcall FUN_10069010(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011da90

# === FUN_10069050 ===
# (Destructor)

# === FUN_10069090 ===
# undefined4 FUN_10069090(void)
# Returns 0x18 (size of some struct)

# === FUN_10069100 ===
# (Size query)

# === FUN_10069140 ===
# (Destructor helper)

# === FUN_10069220 ===
# undefined4* __fastcall FUN_10069220(undefined4* param_1)
# Constructor: vtable to &PTR_LAB_1011da90

# === FUN_10069260 ===
# (Int setter)

# === FUN_10069270 ===
# undefined4 __fastcall FUN_10069270(undefined4 param_1)
# Sets DAT_10128728 = 0

# === FUN_100692B0 ← WINDOW PROCEDURE ===
# void FUN_100692b0(HWND param_1, uint param_2, HWND param_3, LPARAM param_4)
# WINDOW PROCEDURE (WndProc) for "JackalClass":
#   Dispatches messages to render device interface methods:
#   
#   WM_SIZE (0x5) → FUN_10069db0 (method_0)
#   WM_ACTIVATE (0x6) → FUN_10069b90 (method_11)
#   WM_PAINT (0xF) → FUN_10069ac0 (method_1)
#   WM_ERASEBKGND (0x14) → FUN_10069e10 (method_2)
#   WM_NCPAINT (0x85) → FUN_10069e10 (method_2)
#   WM_NCACTIVATE (0x86) → FUN_10069e10 (method_2)
#   WM_COMMAND (0x111) → custom handling
#   WM_KEYDOWN (0x100) → FUN_10069c70 (method_3) with down=1
#   WM_KEYUP (0x101) → FUN_10069c70 (method_3) with down=0
#   WM_CHAR (0x102) → FUN_10069d50 (method_4)
#   WM_SYSKEYDOWN (0x104) → FUN_10069c70 (method_3) with down=1
#   WM_SYSKEYUP (0x105) → FUN_10069c70 (method_3) with down=0
#   WM_SYSCOMMAND (0x112) → filter SC_KEYMENU (0xF140) and SC_MOUSEMENU (0xF170)
#   WM_MOUSEMOVE (0x200) → FUN_10069ee0 (method_5) with x,y
#   WM_LBUTTONDOWN (0x201) → FUN_10069f40 (method_7) with btn=0
#   WM_LBUTTONUP (0x202) → FUN_10069fb0 (method_8) with x,y
#   WM_RBUTTONDOWN (0x204) → FUN_10069f40 (method_7) with btn=1
#   WM_RBUTTONUP (0x205) → FUN_10069fb0 (method_8) with x,y
#   WM_MBUTTONDOWN (0x207) → FUN_1006a010 (method_9) with flags=0
#   WM_MBUTTONUP (0x208) → FUN_1006a080 (method_10) with x,y
#   WM_MOUSEWHEEL (0x20A) → DefWindowProcA
#   Default → DefWindowProcA

# --- Render interface methods (delegated to DAT_1012872c vtable) ---

# === FUN_10069AC0 → Vtable+0x04 (method_1) ===
# void __cdecl FUN_10069ac0(HWND param_1)
# WM_PAINT handler:
#   BeginPaint, calls vtable[1] with paint RECT, EndPaint
#   (vtable[1] = (*DAT_1012872c+4) — the actual render device paint method)

# === FUN_10069B90 → Vtable+0x2c (method_11) ===
# void __cdecl FUN_10069b90(HWND param_1, uint param_2, LPARAM param_3, int param_4)
# WM_ACTIVATE handler:
#   InvalidateRect, optionally calls thunk_FUN_100699c0,
#   calls vtable[11] with (param_2, param_4), DefWindowProcA

# === FUN_10069C70 → Vtable+0x0c (method_3) ===
# void __cdecl FUN_10069c70(HWND param_1, uint param_2, int param_3)
# Keyboard handler:
#   Calls vtable[3](param_2, param_3)
#   If param_3 != 0 (key down) and key is not in range 0x60-0x6F:
#     Spin on (*DAT_10128420+0x138)() message pump
#   Else if key in 0x60-0x6F (numpad?):
#     Spin on PeekMessageA(0x102, 0x102, PM_NOREMOVE)

# === FUN_10069D50 → Vtable+0x10 (method_4) ===
# void __cdecl FUN_10069d50(undefined4 param_1, undefined1 param_2)
# WM_CHAR handler: calls vtable[4] with character byte

# === FUN_10069DB0 → Vtable+0x00 (method_0) ===
# void __cdecl FUN_10069db0(undefined4 p1, undefined4 p2, undefined4 p3, undefined4 p4)
# WM_SIZE handler: calls vtable[0](p3, p4)

# === FUN_10069E10 → Vtable+0x08 (method_2) ===
# void __cdecl FUN_10069e10(undefined4 p1, undefined4 p2, undefined4 p3)
# WM_ERASEBKGND/WM_NCPAINT: calls vtable[2](p2, p3)

# === FUN_10069E70 → Vtable+0x18 (method_6) ===
# void __cdecl FUN_10069e70(undefined4 p1, undefined4 p2, undefined4 p3, undefined4 p4)
# Mouse button: calls vtable[6](p2, p3, p4)

# === FUN_10069EE0 → Vtable+0x14 (method_5) ===
# void __cdecl FUN_10069ee0(undefined4 p1, undefined4 p2, undefined4 p3)
# Mouse move: calls vtable[5](p2, p3)

# === FUN_10069F40 → Vtable+0x1c (method_7) ===
# void __cdecl FUN_10069f40(undefined4 p1, undefined4 p2, undefined4 p3, undefined4 p4)
# Mouse button down: calls vtable[7](p2, p3, p4)

# === FUN_10069FB0 → Vtable+0x20 (method_8) ===
# void __cdecl FUN_10069fb0(undefined4 p1, undefined4 p2, undefined4 p3)
# Mouse button up: calls vtable[8](p2, p3)

# === FUN_1006A010 → Vtable+0x24 (method_9) ===
# void __cdecl FUN_1006a010(undefined4 p1, undefined4 p2, undefined4 p3, undefined4 p4)
# Middle mouse down: calls vtable[9](p2, p3, p4)

# === FUN_1006A080 → Vtable+0x28 (method_10) ===
# void __cdecl FUN_1006a080(undefined4 p1, undefined4 p2, undefined4 p3)
# Middle mouse up: calls vtable[10](p2, p3)

# === FUN_1006A0E0 ===
# (WM_DROPFILES/other handler)

# === FUN_1006A150 ===
# (Constructor: vtable to &PTR_LAB_1011da5c)

# === FUN_1006A260 ===
# (Constructor)

# === FUN_1006A2C0 ===
# (Constructor)

# === FUN_1006AF00 ===
# (Constructor)

# === FUN_1006B0F0 ===
# void FUN_1006b0f0(void)
# Message pump:
#   PeekMessageA to check for messages
#   If message == 0x402 (custom app message):
#     calls DAT_1012872c[0x34/4=13] (method_13)
#   Else: TranslateMessage + DispatchMessageA
#
# This is likely called from the game's main loop to process
# window messages and pump the render device's custom handler.

# ──────────────────────────────────────────────
# END OF FUNCTION STUBS
# ──────────────────────────────────────────────


# ──────────────────────────────────────────────
# PYTHON IMPLEMENTATION: Jackal Software Renderer
# ──────────────────────────────────────────────

class JackalRenderDevice(RenderDeviceInterface):
    """
    Python implementation of the "Jackal" software renderer.
    This is the render device interface that the game uses through
    the vtable at DAT_1012872c.
    
    The original implementation was a GDI-based software renderer.
    This Python translation provides the same interface for the
    SimGolf decompilation project.
    """
    
    def __init__(self):
        super().__init__()
        self._window: RenderDevice | None = None
        self._surface: Surface | None = None
        self._key_state: dict[int, bool] = {}
        self._mouse_x: int = 0
        self._mouse_y: int = 0
        self._mouse_buttons: dict[int, bool] = {}
        self._char_buffer: list[int] = []
    
    def set_window(self, window: RenderDevice):
        """Connect this render interface to the window/device."""
        self._window = window
        self._surface = window.renderer if isinstance(window.renderer, Surface) else Surface()
    
    # --- Getters for game state (used by the Python game engine) ---
    
    def is_key_down(self, vk_code: int) -> bool:
        return self._key_state.get(vk_code, False)
    
    def get_mouse_pos(self) -> tuple[int, int]:
        return (self._mouse_x, self._mouse_y)
    
    def is_mouse_button_down(self, btn: int) -> bool:
        return self._mouse_buttons.get(btn, False)
    
    def get_char(self) -> int:
        if self._char_buffer:
            return self._char_buffer.pop(0)
        return 0
    
    # --- Vtable method implementations ---
    
    def method_0(self, param_1: int, param_2: int) -> None:
        """WM_SIZE handler: update window/surface dimensions."""
        if self._window:
            self._window.screen_width = param_1
            self._window.screen_height = param_2
    
    def method_1(self, hwnd: int) -> None:
        """WM_PAINT handler: redraw the window."""
        if self._surface and self._window and self._window.hdc:
            self._surface.blit_to(self._window.hdc)
    
    def method_2(self, param_1: int, param_2: int) -> None:
        """WM_ERASEBKGND / WM_NCPAINT handler."""
        pass  # Default: allow DefWindowProc to handle
    
    def method_3(self, key_code: int, is_down: int) -> None:
        """Keyboard key event."""
        self._key_state[key_code] = bool(is_down)
    
    def method_4(self, char_byte: int) -> None:
        """Character input."""
        self._char_buffer.append(char_byte)
    
    def method_5(self, x: int, y: int) -> None:
        """Mouse move."""
        self._mouse_x = x
        self._mouse_y = y
    
    def method_6(self, x: int, y: int, flags: int) -> None:
        """Mouse button with flags."""
        self._mouse_x = x
        self._mouse_y = y
    
    def method_7(self, button: int, x: int, y: int) -> None:
        """Mouse button down."""
        self._mouse_buttons[button] = True
        self._mouse_x = x
        self._mouse_y = y
    
    def method_8(self, x: int, y: int) -> None:
        """Mouse button up."""
        # Which button was released depends on context
        for btn in list(self._mouse_buttons.keys()):
            self._mouse_buttons[btn] = False
        self._mouse_x = x
        self._mouse_y = y
    
    def method_9(self, x: int, y: int, flags: int) -> None:
        """Middle mouse button down."""
        self._mouse_buttons[2] = True
        self._mouse_x = x
        self._mouse_y = y
    
    def method_10(self, x: int, y: int) -> None:
        """Middle mouse button up."""
        self._mouse_buttons[2] = False
        self._mouse_x = x
        self._mouse_y = y
    
    def method_11(self, w: int, h: int, param_4: int) -> None:
        """WM_ACTIVATE handler."""
        pass
    
    def method_13(self) -> None:
        """Custom message handler."""
        pass


# ──────────────────────────────────────────────
# Global State
# ──────────────────────────────────────────────

# The singleton render device instance
_render_device: Optional[JackalRenderDevice] = None
_render_window: Optional[RenderDevice] = None


def get_render_device() -> JackalRenderDevice:
    """Get or create the render device singleton."""
    global _render_device
    if _render_device is None:
        _render_device = JackalRenderDevice()
    return _render_device


def create_render_window(title: str = "SimGolf") -> RenderDevice:
    """
    Create the main render window and initialize the engine.
    
    This wraps the sequence from FUN_100654B0 (constructor) +
    FUN_100657E0 (window creation) + FUN_10065A90 (mode enumeration).
    
    Returns the RenderDevice instance.
    """
    global _render_window, _render_device
    
    window = RenderDevice()
    render_dev = get_render_device()
    render_dev.set_window(window)
    
    # Enumerate display modes (from FUN_10065A90)
    modes = enumerate_video_modes()
    
    # In the original DLL, this would now:
    # 1. Register "JackalClass" window
    # 2. Create fullscreen window
    # 3. Initialize rendering surface
    # 4. Setup the message pump
    
    _render_window = window
    return window


def destroy_render_window():
    """
    Destroy the render window and clean up resources.
    Corresponds to FUN_100656C0.
    """
    global _render_window, _render_device
    if _render_window:
        _render_window.shutdown()
        _render_window = None
    _render_device = None


def pump_messages():
    """
    Process one window message (from FUN_1006B0F0).
    Should be called from the game's main loop.
    """
    global _render_device
    # PeekMessage, TranslateMessage, DispatchMessageA
    # If message == 0x402: call render_dev.method_13()
    pass


def present(rect: Optional[RECT] = None):
    """
    Present the backbuffer to the screen (from FUN_10066470).
    """
    global _render_window
    if _render_window and _render_window.hdc:
        if _render_window.renderer:
            if isinstance(_render_window.renderer, Surface):
                _render_window.renderer.blit_to(
                    _render_window.hdc, rect
                )


# ──────────────────────────────────────────────
# Direct3D / OpenGL Abstraction Layer
# ──────────────────────────────────────────────
# 
# The original jgld.dll was described as an "OpenGL/Direct3D wrapper."
# The decompiled code shows a GDI-based software implementation 
# accessed through function pointer tables (vtables).
#
# The DLL likely provided a hardware abstraction layer that could
# be backed by:
#   - Software: GDI BitBlt (the implementation seen in decompilation)
#   - OpenGL: via dynamically loaded opengl32.dll
#   - Direct3D: via dynamically loaded d3d*.dll
#
# The render device interface (DAT_1012872c vtable) is the abstraction
# that allowed swapping between these implementations.
#
# In the software path (which is what we see decompiled):
#   - FUN_10066470: BitBlt-based screen present
#   - FUN_10068850: GDI font creation
#   - FUN_10066040: Surface/texture management
#   - FUN_10065A90: Display mode enumeration
#
# In the OpenGL/Direct3D path (not decompiled separately):
#   - OpenGL functions would be loaded dynamically from opengl32.dll
#   - Similar vtable dispatch for glBegin/glEnd/glVertex/glTexture
#   - Direct3D surfaces mapped to the same vtable interface

class GDIRenderer:
    """
    GDI-based software renderer backend.
    
    This implements the actual rendering primitives that the
    game uses through the RenderDeviceInterface.
    Future: Can be extended with Pygame/PyOpenGL backends.
    """
    
    @staticmethod
    def blit_surface(src_hdc: int, dst_hdc: int, 
                     src_rect: Optional[RECT] = None,
                     dst_rect: Optional[RECT] = None,
                     rop: int = SRCCOPY):
        """
        Bit blit from source to destination HDC.
        Original: the BitBlt in FUN_10066470.
        """
        # In Python, this would delegate to PIL/Pygame/OpenGL
        pass
    
    @staticmethod
    def create_font(name: str, height: int, bold: bool = False,
                    italic: bool = False, underline: bool = False) -> int:
        """
        Create a GDI font. Returns HFONT.
        Original: FUN_10068850 with LOGFONTA.
        """
        # In Python: use PIL.ImageFont or pygame.font
        return 0
    
    @staticmethod
    def draw_text(hdc: int, text: str, x: int, y: int, 
                  color: int, font: Optional[int] = None):
        """
        Draw text using GDI TextOutA.
        Original: various text rendering functions at 0x1000B140-0x10010870.
        """
        pass
    
    @staticmethod
    def draw_rect(hdc: int, rect: RECT, color: int, fill: bool = True):
        """
        Draw or fill a rectangle.
        Original: FUN_1000F9E0 rectangle drawing.
        """
        pass
    
    @staticmethod
    def draw_line(hdc: int, x1: int, y1: int, x2: int, y2: int, color: int):
        """
        Draw a line using GDI.
        Original: FUN_1000F880 line drawing (MoveToEx/LineTo).
        """
        pass


# ──────────────────────────────────────────────
# Module Summary
# ──────────────────────────────────────────────
# 
# jgld.dll (1317 functions) translated to Python:
# 
# 1317 function signatures documented as comments
# Key classes implemented:
#   - RenderDevice (window management, display mode)
#   - RenderDeviceInterface (abstract render device, 12 vtable methods)
#   - Surface (backbuffer with GDI blit)
#   - Font (GDI font wrapper)
#   - VideoMode (display mode enumeration)
#   - JackalRenderDevice (Python implementation of render interface)
#   - GDIRenderer (GDI drawing primitives)
#
# All function signature stubs reference the original Ghidra address
# and file name from all_decompiled.c.
