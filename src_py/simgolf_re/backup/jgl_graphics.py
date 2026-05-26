"""
jgl_graphics.py -- Python translation of jgl.dll (Graphics Layer).

Source: ref/decompiled/ghidra/jgl/all_decompiled.c (528+ functions total)
Original: SimGolf's GDI-based software rendering library "jgl.dll"

This module translates the C++ class hierarchy, constants, and all function
signatures from the decompiled C to Python. The original DLL:

- Provides a GDI-based software rendering backend
- Implements file-mapped I/O for efficient data access
- Has a notification/callback system for tracking state changes
- Includes Bresenham line drawing (solid, dashed, patterned)
- Implements blit operations (copy, alpha blend, stretch, transparent)
- Has a full affine texture-mapped software renderer
- Contains PNG file loading/decoding (via embedded libpng)
- Includes a complete zlib/deflate decompression implementation
- Uses COM-like vtable dispatch pattern for all objects
- Uses SEH (Structured Exception Handling) extensively

All function addresses from the original DLL are preserved as comments.
"""

from __future__ import annotations
import struct
import ctypes
from enum import IntEnum
from typing import Any, Callable, Optional

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
HPEN = int
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
LPSECURITY_ATTRIBUTES = int
PLONG = int

# ──────────────────────────────────────────────
# Win32 Constants
# ──────────────────────────────────────────────
GENERIC_READ = 0x80000000
GENERIC_WRITE = 0x40000000
FILE_SHARE_READ = 0x1
FILE_SHARE_WRITE = 0x2
OPEN_EXISTING = 3
OPEN_ALWAYS = 4
CREATE_ALWAYS = 2
INVALID_HANDLE_VALUE = 0xFFFFFFFF

PAGE_READWRITE = 0x04
FILE_MAP_ALL_ACCESS = 0xF001F

STILL_ACTIVE = 259

# GDI Stock Objects
WHITE_BRUSH = 0
DEFAULT_GUI_FONT = 17
NULL_BRUSH = 5
BLACK_PEN = 7
WHITE_PEN = 6

# BitBlt raster ops
SRCCOPY = 0xCC0020

# Error codes
ERROR_SUCCESS = 0

# ──────────────────────────────────────────────
# DLL Global Variables
# ──────────────────────────────────────────────
# These correspond to DAT_10057xxx globals in the decompilation.

# Event/notification system (FUN_10001260 area)
DAT_10057b08 = 0  # pointer to some singleton with vtable at +0xb4
DAT_10057b10 = None  # head of notification chain
DAT_10057b14 = None  # current notification node
DAT_10057b18 = None  # current notification data byte
DAT_10057b1c = 0  # notification count
DAT_10057b20 = None  # tail of notification chain
DAT_10057b24 = None  # node being processed

# Palette / color table globals
DAT_10057c00 = 0  # palette table pointer in rendering
DAT_10057c14 = 0  # scanline stride (in pixels) for destination surface
DAT_10057c18 = 0  # (stride - width) * 2 for scanline advance
DAT_10057c1c = 0  # width of render area
DAT_10057c24 = 0  # palette LUT pointer
DAT_10057c28 = 0  # fixed-point accumulator for stretch
DAT_10057c30 = 0  # height of render area (row countdown)
DAT_10057c34 = 0  # source bitmap stride (bytes per row)
DAT_10057c40 = 0  # fixed-point X step for stretch
DAT_10057bf4 = 0  # source stride - render width (byte advance)
DAT_10057bf8 = 0  # fixed-point Y step for stretch
DAT_10057bfc = 0  # Y accumulator for stretch
DAT_10057c3c = 0  # calculated Y advance
DAT_10057c44 = 0.0  # float scale X
DAT_10057c48 = 0.0  # float scale Y

# Global palette in software rendering
DAT_100550fc = 0  # palette transform X component (signed fixed-point)
DAT_10055100 = 0  # palette transform Y component (signed fixed-point)
DAT_10055104 = 0  # palette scale factor

# Pointer storage for rendering
PTR_DAT_10055108 = 0
PTR_DAT_1005510c = 0

# Palette lookup tables
DAT_10057d40 = 0  # 16-bit to 16-bit palette LUT source
DAT_10057d58 = 0  # palette shared pointer
DAT_10057d70 = 0  # 16-bit to 16-bit palette LUT destination
DAT_10057d9c = 0  # global palette override (non-zero = use this)

# render state cache
DAT_10057b34 = 0  # cached line count for pattern fills
DAT_10057b3c = 0  # cached scanline advance

# Error tracking for zlib
DAT_10057db0 = 0  # zlib error code

# ──────────────────────────────────────────────
# VTable Addresses (class hierarchy markers)
# ──────────────────────────────────────────────
# These are the actual RTTI/vtable addresses from the DLL.
# They serve as class type markers when assigned to objects.

PTR_FUN_100531d0 = 0x100531d0  # MemoryFile base vtable
PTR_FUN_100531f8 = 0x100531f8  # NotificationSource vtable (event emitter)
PTR_FUN_100531fc = 0x100531fc  # NotificationTarget vtable (event listener)
PTR_FUN_10053200 = 0x10053200  # NotificationNode vtable (linked list node)
PTR_FUN_10053214 = 0x10053214  # JGLDevice vtable (main graphics device)
PTR_FUN_10053304 = 0x10053304  # JGLDevice base (NotificationTarget part)
PTR_FUN_1005341c = 0x1005341c  # Surface8bpp vtable (8-bit paletted surface)
PTR_FUN_100534c0 = 0x100534c0  # Surface16bpp vtable (16-bit high-color surface)
PTR_FUN_100535c4 = 0x100535c4  # Palette16To16 vtable (palette LUT source)
PTR_FUN_100535c8 = 0x100535c8  # Palette16To16 vtable variant
PTR_FUN_100535cc = 0x100535cc  # Palette16To16 vtable variant (lookup dest)
PTR_FUN_100535d0 = 0x100535d0  # Palette16To16 vtable (shared/global)
PTR_FUN_10053884 = 0x10053884  # PngReader vtable (embedded libpng)
PTR_FUN_10053908 = 0x10053908  # ZlibStream vtable (compression context)
PTR_FUN_1005392c = 0x1005392c  # ZlibStream base (NotificationTarget part)

# ──────────────────────────────────────────────
# Enum: PixelFormat / Surface Type
# ──────────────────────────────────────────────

class PixelFormat(IntEnum):
    """Pixel format types used in the JGL rendering pipeline.

    Corresponds to the values stored at offset +0x24 of surface objects.
    """
    UNKNOWN_0 = 0
    PAL8 = 8                    # 8-bit paletted (256 color)
    RGB16 = 0x10                # 16-bit high-color (RGB 565/555)
    RGB24 = 0x18                # 24-bit true-color
    RGB32 = 0x20                # 32-bit true-color (ARGB)

    @staticmethod
    def from_value(v: int) -> 'PixelFormat':
        for fmt in PixelFormat:
            if fmt.value == v:
                return fmt
        return PixelFormat.UNKNOWN_0


class ZlibState(IntEnum):
    """State machine for zlib decompression (FUN_1004fa80)."""
    HEADER_CHECK = 0
    HEADER_BYTE2 = 1
    DICT_LEN_MSB = 2
    DICT_LEN_BYTE2 = 3
    DICT_LEN_BYTE3 = 4
    DICT_LEN_LSB = 5
    WAITING_DICT = 6
    BLOCK_TYPE = 7
    BLOCK_LEN_MSB = 8
    BLOCK_LEN_BYTE2 = 9
    BLOCK_LEN_BYTE3 = 10
    BLOCK_LEN_LSB = 11
    COMPRESSED_BLOCK = 12
    FINISHED = 13
    ERROR = 14


# ──────────────────────────────────────────────
# Class Hierarchy
# ──────────────────────────────────────────────
#
# The DLL uses a COM-like C++ object model where each object starts with
# a pointer to a vtable (function pointer table). The vtable address
# serves as the RTTI/class identifier.
#
# MemoryFile (vtable: 0x100531d0)
#   - File-mapped I/O wrapper
#   - Layout:
#     [0x00]: vtable ptr
#     [0x04]: mapped view pointer
#     [0x08]: file handle (INVALID_HANDLE_VALUE = -1 when closed)
#     [0x0C]: file mapping handle
#     [0x10]: file size (in bytes)
#   - Methods (vtable offsets):
#     [+0x00]: destructor
#
# NotificationNode (vtable: 0x10053200)
#   - Linked list node for notification system
#   - Layout:
#     [0x00]: vtable ptr
#     [0x04]: prev pointer
#     [0x08]: next pointer
#     [0x0C]: target object pointer
#     [0x10]: notification data byte
#
# NotificationTarget (vtable: 0x100531fc)
#   - Event listener base class
#   - Inherited by objects that receive notifications
#   - Layout starts with vtable ptr
#
# NotificationSource (vtable: 0x100531f8)
#   - Event emitter base class
#   - Manages a linked list of NotificationNode objects
#   - Layout:
#     [0x00]: vtable ptr
#     [0x04]: current callback target
#     [0x08]: current notification byte
#     [0x0C]: node count (number of listeners)
#     [0x10]: head of notification node linked list
#     [0x14]: tail node pointer
#     [0x18]: notification data / flags
#
# JGLDevice (vtable: 0x10053214, base: 0x10053304)
#   - Main graphics device context
#   - Contains surfaces, palette, and rendering state
#   - Very large structure (~0x4D4 bytes)
#   - Layout:
#     [0x00]: vtable ptr (initially NotificationTarget vtable, later JGLDevice)
#     [0x04-0x08]: notification target fields
#     [0x0C]: CRITICAL_SECTION
#     [0x24]: pixel format (8, 16, etc.)
#     [0x28]: ???
#     [0x2C]: source bitmap stride (bytes)
#     [0x30]: width (of source image)
#     [0x34]: height (of source image)
#     [0x38]: ???
#     [0x3C]: ???
#     [0x40]: scanline stride (in pixels)
#     [0x44+]: more state...
#     [0x4AC:+]: GDI handles (HDC, HBITMAP, etc.)
#     [0x4D0]: pixel operation flags
#
# Surface8bpp (vtable: 0x1005341c)
#   - 8-bit paletted bitmap surface
#   - Inherits from NotificationTarget
#   - Methods: lock, unlock, get_pixel_ptr, get_dimensions, ...
#
# Surface16bpp (vtable: 0x100534c0)
#   - 16-bit high-color bitmap surface
#   - Same interface as Surface8bpp but 16-bit pixels
#
# Palette16To16 (vtables: 0x100535c4/0x100535c8/0x100535cc/0x100535d0)
#   - 16-bit to 16-bit color lookup table
#   - Used for color transformation (fade, alpha, etc.)
#   - Layout:
#     [0x00]: vtable ptr
#     [0x04]: palette data pointer
#     [0x08]: palette size (entries)
#
# PngReader (vtable: 0x10053884)
#   - Embedded libpng-based PNG decoder
#   - Layout:
#     [0x00]: vtable ptr
#     [0x04+]: libpng state (png_structp, png_infop, etc.)
#     [0x14]: read function pointer
#     [0x18]: error handler
#     ...
#
# ZlibStream (vtable: 0x10053908, base: 0x1005392c)
#   - zlib decompression stream context
#   - Layout:
#     [0x00]: vtable ptr (initially NotificationTarget, then ZlibStream)
#     [0x04+]: zlib internal state
#     [0x14]: alloc function
#     [0x18]: free function
#     [0x1C]: state pointer (allocator state)
#     [0x20]: inflate function pointer
#     [0x24]: state handler pointer
#     [0x28]: opaque data
#     ...

# ──────────────────────────────────────────────
# Tracing / Debug Helpers
# ──────────────────────────────────────────────

class Hex:
    """Utility for displaying hex values."""
    def __init__(self, value: int):
        self.value = value
    def __repr__(self):
        return f'0x{self.value:08X}'


def hex_float(h: int) -> float:
    """Convert IEEE 754 32-bit hex to float."""
    return struct.unpack('>f', struct.pack('>I', h & 0xFFFFFFFF))[0]


# ──────────────────────────────────────────────
# Function: FUN_10001000 @ 0x10001000
# ──────────────────────────────────────────────
# MemoryFile constructor initializer
def FUN_10001000(obj: list) -> None:
    """Initialize a MemoryFile object (vtable + zero fields).
    
    C++: void __fastcall FUN_10001000(MemoryFile* this)
    Sets vtable to PTR_FUN_100531d0 and zeros fields.
    """
    obj[0] = PTR_FUN_100531d0
    obj[1] = 0      # mapped_view = NULL
    obj[2] = 0xFFFFFFFF  # hFile = INVALID_HANDLE_VALUE
    obj[3] = 0      # hMapping = NULL


# ──────────────────────────────────────────────
# Function: FUN_10001020 @ 0x10001020
# ──────────────────────────────────────────────
# MemoryFile::`scalar deleting destructor`
def FUN_10001020(this: list, param_1: int) -> list:
    """MemoryFile destructor with scalar delete.
    
    C++: void* __thiscall MemoryFile::`scalar deleting destructor`(byte flags)
    """
    FUN_10001040(this)
    if (param_1 & 1) != 0:
        FUN_10046490(this)
    return this


# ──────────────────────────────────────────────
# Function: FUN_10001040 @ 0x10001040
# ──────────────────────────────────────────────
# MemoryFile destructor
def FUN_10001040(obj: list) -> None:
    """MemoryFile destructor - close handles and set vtable.
    
    C++: void __fastcall FUN_10001040(MemoryFile* this)
    """
    obj[0] = PTR_FUN_100531d0
    FUN_10001170(id(obj))


# ──────────────────────────────────────────────
# Function: FUN_10001050 @ 0x10001050
# ──────────────────────────────────────────────
# MemoryFile::Create (open/create file mapping)
def FUN_10001050(this: list, filename: str, size: int, arg3: int) -> int:
    """Create or open a memory-mapped file.
    
    C++: undefined4 __thiscall MemoryFile::Create(LPCSTR filename, uint size, int arg3)
    Returns pointer to mapped view on success, 0 on failure.
    
    Win32 calls: CreateFileA, SetFilePointer, SetEndOfFile,
                 CreateFileMappingA, MapViewOfFile
    """
    FUN_10001170(id(this))
    this[4] = size                           # store at offset 0x10
    
    # CreateFileA would go here
    # hFile = CreateFileA(filename, GENERIC_READ|GENERIC_WRITE, 0, NULL,
    #                     CREATE_ALWAYS, flags, NULL)
    # this[2] = hFile (offset 0x08)
    # if hFile == INVALID_HANDLE_VALUE: return 0
    
    # SetFilePointer to size, SetEndOfFile
    # CreateFileMappingA(hFile, NULL, PAGE_READWRITE, 0, 0, NULL)
    # this[3] = hMapping (offset 0x0C)
    # MapViewOfFile(hMapping, FILE_MAP_ALL_ACCESS, 0, 0, 0)
    # this[1] = mapped_view (offset 0x04)
    
    # Zero-fill the mapping
    # for each dword: *view++ = 0
    # for remaining bytes: *((byte*)view)++ = 0
    
    # return mapped_view pointer
    return this[1]


# ──────────────────────────────────────────────
# Function: FUN_10001170 @ 0x10001170
# ──────────────────────────────────────────────
# MemoryFile::Close (release all handles)
def FUN_10001170(param_1: int) -> None:
    """Close all file/mapping handles for a MemoryFile object.
    
    C++: void __fastcall FUN_10001170(MemoryFile* this)
    
    Unmaps view, closes mapping handle, closes file handle.
    All handles set to 0/NULL/INVALID_HANDLE_VALUE after closing.
    """
    # Win32: UnmapViewOfFile, CloseHandle(hMapping), CloseHandle(hFile)
    pass


# ──────────────────────────────────────────────
# Function: FUN_100011c0 @ 0x100011c0
# ──────────────────────────────────────────────
# MemoryFile::Truncate (shrink file to given pointer)
def FUN_100011c0(this: list, new_end_ptr: int) -> None:
    """Truncate the memory-mapped file to end at new_end_ptr.
    
    C++: void __thiscall MemoryFile::Truncate(LPCVOID new_end)
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10001260 @ 0x10001260
# ──────────────────────────────────────────────
# Global notification manager init
def FUN_10001260() -> None:
    """Initialize the global notification system.
    
    C++: void FUN_10001260(void)
    Sets up DAT_10057b10 as empty NotificationSource.
    """
    global DAT_10057b10, DAT_10057b20, DAT_10057b24, DAT_10057b1c
    DAT_10057b10 = PTR_FUN_100531f8
    DAT_10057b20 = 0
    DAT_10057b24 = 0
    DAT_10057b1c = 0


# ──────────────────────────────────────────────
# Function: FUN_10001280 @ 0x10001280
# ──────────────────────────────────────────────
def FUN_10001280() -> None:
    """Register notification handler at address 0x10001290.
    
    C++: void FUN_10001280(void)
    """
    FUN_10046558(0x10001290)


# ──────────────────────────────────────────────
# Function: FUN_10001310 @ 0x10001310 (NotificationTarget ctor init)
def FUN_10001310(obj: list) -> list:
    """Initialize NotificationTarget (set vtable, register with source).
    
    C++: undefined4* __fastcall FUN_10001310(NotificationTarget* this)
    """
    obj[0] = PTR_FUN_100531fc
    FUN_100014c0(DAT_10057b10, id(obj), 0)
    return obj


# ──────────────────────────────────────────────
# Function: FUN_10001330 @ 0x10001330 (NotificationTarget scalar deleting dtor)
def FUN_10001330(this: list, param_1: int) -> list:
    FUN_10001350(this)
    if (param_1 & 1) != 0:
        FUN_10046490(this)
    return this


# ──────────────────────────────────────────────
# Function: FUN_10001350 @ 0x10001350 (NotificationTarget dtor)
def FUN_10001350(obj: list) -> None:
    """Remove this NotificationTarget from the notification chain.
    
    C++: void __fastcall FUN_10001350(NotificationTarget* this)
    """
    global DAT_10057b20, DAT_10057b14, DAT_10057b18, DAT_10057b24, DAT_10057b1c
    
    obj[0] = PTR_FUN_100531fc
    if DAT_10057b20 is not None:
        # Walk the linked list to find this node
        # ... linked list removal logic ...
        pass


# ──────────────────────────────────────────────
# Function: FUN_10001420 @ 0x10001420
def FUN_10001420() -> None:
    """Process all pending notifications.
    
    C++: void FUN_10001420(void)
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10001450 @ 0x10001450 (NotificationSource scalar deleting dtor)
def FUN_10001450(this: list, param_1: int) -> list:
    pass


# ──────────────────────────────────────────────
# Function: FUN_100014c0 @ 0x100014c0
def FUN_100014c0(this, param_1, param_2) -> None:
    """Add a notification node to the source chain.
    
    C++: void __thiscall NotificationSource::addTarget(target, byte)
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10001540 @ 0x10001540 (NotificationNode cleanup)
def FUN_10001540(this: list, param_1: int) -> list:
    pass


# ──────────────────────────────────────────────
# Function: FUN_10001590 @ 0x10001590 (LCG Random)
def FUN_10001590(state: list) -> float:
    """LCG random number generator.
    
    C++: float __fastcall FUN_10001590(uint* state)
    Returns float in [0.0, 1.0) using LCG:
      state = state * 0x41c64e6d + 0x3039
      result = (state >> 16) & 0x7fff / 32768.0
    """
    state[0] = (state[0] * 0x41c64e6d + 0x3039) & 0xFFFFFFFF
    return ((state[0] >> 16) & 0x7fff) / 32768.0


# ──────────────────────────────────────────────
# Function: FUN_100015d0 @ 0x100015d0 (LCG Random int)
def FUN_100015d0(state: list) -> int:
    """LCG random as integer.
    
    C++: longlong __fastcall FUN_100015d0(uint* state)
    Uses LCG then converts to integer.
    """
    val = FUN_10001590(state)
    return int(val)


# ══════════════════════════════════════════════
# JGLDevice - Main Graphics Device
# ══════════════════════════════════════════════

# ──────────────────────────────────────────────
# Function: FUN_100015f0 @ 0x100015f0
def FUN_100015f0(this: list, param_1: int) -> list:
    """JGLDevice scalar deleting destructor.
    
    C++: void* __thiscall JGLDevice::`scalar deleting destructor`(byte flags)
    """
    FUN_10001730(this)
    if (param_1 & 1) != 0:
        FUN_10046490(this)
    return this


# ──────────────────────────────────────────────
# Function: FUN_10001610 @ 0x10001610 (JGLDevice constructor)
def FUN_10001610(this: list, param_1: int) -> list:
    """JGLDevice constructor - main graphics device initialization.
    
    C++: void* __thiscall JGLDevice::JGLDevice(undefined4 param_1)
    
    Initializes all fields, creates critical section,
    sets pixel format defaults.
    """
    FUN_10001310(this)
    this[0x0A] = 0    # offset 0x28
    this[0x02] = 0    # offset 0x08
    this[0x0E] = 0    # offset 0x38
    this[0x0F] = 0    # offset 0x3C
    this[0x10] = 0    # offset 0x40
    this[0x1D] = 0    # offset 0x74
    this[0x1F] = 0    # offset 0x7C
    this[0x12B] = 0   # offset 0x4AC
    this[0x12C] = 0   # offset 0x4B0
    this[0x12D] = 0   # offset 0x4B4
    this[0x12E] = 0   # offset 0x4B8
    this[0x12F] = 0   # offset 0x4BC
    this[0x130] = 0   # offset 0x4C0
    this[0x131] = 0   # offset 0x4C4
    this[0x132] = 0   # offset 0x4C8
    this[0x22] = 0    # offset 0x88
    this[0x23] = 0    # offset 0x8C
    this[0x25] = 0    # offset 0x94
    this[0x26] = 0    # offset 0x98
    this[0x27] = 0    # offset 0x9C
    this[0x28] = 0    # offset 0xA0
    this[0x2A] = 0    # offset 0xA8
    
    this[0] = PTR_FUN_10053214
    
    this[0x20] = param_1      # offset 0x80
    this[0x21] = 0x28         # offset 0x84 - font height default?
    this[0x24] = 1            # offset 0x90 - short: weight
    this[0x24] |= (8 << 16)  # offset 0x92 - short: charset
    this[0x29] = 0x100        # offset 0xA4
    
    # Zero out some more fields
    for off in [0x54, 0x58, 0x5C, 0x60]:
        pass  # would set these to 0
    
    # InitializeCriticalSection at offset 0x0C
    # This would call Win32 InitializeCriticalSection
    
    # Check singleton for render mode
    # iVar1 = (**(code**)(*DAT_10057b08 + 0xB4))()
    # this[0x134] = pixel_format_flags at offset 0x4D0
    
    return this


# ──────────────────────────────────────────────
# Function: FUN_10001730 @ 0x10001730 (JGLDevice destructor)
def FUN_10001730(obj: list) -> None:
    """JGLDevice destructor - release all GDI objects, delete CS.
    
    C++: void __fastcall JGLDevice::~JGLDevice()
    """
    obj[0] = PTR_FUN_10053214
    # if palette override exists, clear it
    # DeleteCriticalSection at offset 0x0C
    FUN_100017a0(id(obj))
    obj[0] = PTR_FUN_10053304
    FUN_10001350(obj)


# ──────────────────────────────────────────────
# Function: FUN_100017a0 @ 0x100017a0 (JGLDevice release GDI)
def FUN_100017a0(param_1: int) -> None:
    """Release GDI objects (DC, bitmap, palette).
    
    C++: void __fastcall FUN_100017a0(JGLDevice* this)
    
    Cleans up HDC, HBITMAP, HPALETTE handles at offsets
    0x4AC, 0x4B0, 0x4B4, 0x4B8, 0x4BC, 0x4C0, 0x4C4, 0x4C8.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10001be0 @ 0x10001be0 (pixel offset computation)
def FUN_10001be0(this: list, x: int, y: int) -> int:
    """Compute pixel offset in surface memory based on format.
    
    C++: int __thiscall JGLDevice::getPixelOffset(int x, int y)
    
    Returns byte offset into surface for pixel (x, y).
    Handles 8bpp (1B/pixel), 16bpp (2B/pixel), 24bpp (3B/pixel), 32bpp (4B/pixel).
    """
    width = FUN_10001be0_vcall(this, 0xD8)  # get_width
    height = FUN_10001be0_vcall(this, 0xDC)  # get_height
    if x < width and y < height:
        base = FUN_10001be0_vcall(this, 0x10)  # get_base_ptr
        if base != 0:
            fmt = this[0x09]  # offset 0x24 = pixel_format
            stride = this[0x10]  # offset 0x40 = scanline_stride
            if fmt == 8:
                return stride * y + x + base
            elif fmt == 0x10:
                return base + (stride * y + x) * 2
            elif fmt == 0x18:
                offset = stride * y + x
                return offset + base + offset * 2
            elif fmt == 0x20:
                return base + (stride * y + x) * 4
    return 0


def FUN_10001be0_vcall(this: list, offset: int) -> int:
    """Virtual method call helper.
    In the original C++ this dispatches through the vtable at given offset.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_10001d30 @ 0x10001d30
def FUN_10001d30(this: list, param_1: list) -> int:
    """Select a font object into the device context.
    
    C++: undefined4 __thiscall JGLDevice::SelectFont(int* font_params)
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_10001d60 @ 0x10001d60
def FUN_10001d60(param_1: list) -> int:
    """Select stock font (DEFAULT_GUI_FONT) into DC.
    
    C++: undefined4 __fastcall FUN_10001d60(JGLDevice* this)
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_10001d90 @ 0x10001d90
def FUN_10001d90(this: list, param_1: int, param_2: int, param_3: int) -> int:
    """Set text color in device context.
    
    C++: undefined4 __thiscall JGLDevice::SetTextColor(uint color, byte r, byte g, byte b)
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_10001dd0 @ 0x10001dd0
def FUN_10001dd0(this: list, param_1: int) -> int:
    """Set text color packed.
    
    C++: undefined4 __thiscall JGLDevice::SetTextColor(uint packed_color)
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_10001e00 @ 0x10001e00
def FUN_10001e00(this: list, x: int, y: int, text: str, length: int) -> int:
    """Draw text at position.
    
    C++: undefined4 __thiscall JGLDevice::TextOut(int x, int y, LPCSTR text, int length)
    Wraps Win32 TextOutA.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_10001e40 @ 0x10001e40
def FUN_10001e40(this: list, param_1: list, param_2: int, param_3: int,
                 param_4: int, param_5: int, param_6: int, param_7: int,
                 param_8: int) -> int:
    """Stretch blit dispatcher (selects 8bpp or 16bpp path).
    
    C++: undefined4 __thiscall JGLDevice::StretchBlt(src, ...)
    Routes to FUN_10006a40 (16bpp) or FUN_10007300 (8bpp) based on pixel format.
    """
    fmt = FUN_10001e40_get_format(this)
    if fmt != 8:
        if fmt != 0x10:
            return 0x17  # invalid format
        return FUN_10006a40(this, param_1, param_2, param_3, param_4,
                            param_5, param_6, param_7, param_8)
    return FUN_10007300(this, param_1, param_2, param_3, param_4,
                        param_5, param_6, param_7, param_8)


def FUN_10001e40_get_format(this):
    return this[0x09]  # format at offset 0x24


# ──────────────────────────────────────────────
# Function: FUN_10001fc0 @ 0x10001fc0
def FUN_10001fc0(this: list, param_1: list, param_2: int, param_3: int,
                 param_4: list, param_5: list, param_6: int, param_7: int) -> int:
    """Copy/alpha blit dispatcher.
    
    Routes to 16bpp (FUN_10004990/10006ce0) or 8bpp (FUN_100075f0) paths.
    """
    fmt = this[0x09]
    if fmt != 8:
        if fmt != 0x10:
            return 0x17
        return FUN_10004990(this, param_1, param_2, param_3, param_4,
                            id(param_5) if param_5 else 0, param_6, param_7)
    # 8bpp path checks source format
    src_fmt = FUN_10001e40_get_format(param_1)
    if src_fmt == 8:
        return FUN_100075f0(this, param_1, param_2, param_3, param_4,
                            id(param_5) if param_5 else 0, param_6, param_7)
    if src_fmt != 0x10:
        return 0x17
    return FUN_10006ce0(this, param_1, param_2, param_3, id(param_4) if param_4 else 0,
                        param_5, param_6, param_7)


# ──────────────────────────────────────────────
# Function: FUN_10002090 @ 0x10002090
def FUN_10002090(this: list, param_1: list, param_2: int, param_3: int) -> int:
    """Fill rectangle with pattern/color dispatcher.
    
    C++: undefined4 __thiscall JGLDevice::FillRect(RECT* rect, short pattern, short color)
    """
    if param_1 is None:
        return 0x10
    fmt = FUN_10001e40_get_format(this)
    if fmt != 8:
        if fmt != 0x10:
            return 0x17
        return FUN_100027a0(this, param_1[0], param_1[1],
                            param_1[2] - param_1[0], param_1[3] - param_1[1],
                            param_2, param_3)
    return FUN_10005000(this, param_1[0], param_1[1],
                        param_1[2] - param_1[0], param_1[3] - param_1[1],
                        param_2 & 0xFF, param_3 & 0xFF)


# ──────────────────────────────────────────────
# Function: FUN_10002120 @ 0x10002120
def FUN_10002120(this: list, param_1: list, param_2: int) -> int:
    """Draw patterned rectangle (8bpp).
    
    C++: undefined4 __thiscall JGLDevice::FrameRect(RECT*, int pattern)
    """
    fmt = FUN_10001e40_get_format(this)
    if fmt != 8:
        return 0
    return FUN_100050d0(this, param_1[0], param_1[1], param_1[2], param_1[3], param_2)


# ──────────────────────────────────────────────
# Function: FUN_10002160 @ 0x10002160
def FUN_10002160(this: list, param_1: int, param_2: int, param_3: int,
                 param_4: int, param_5: int) -> int:
    """Draw a line dispatcher (solid color).
    
    Routes to 8bpp (FUN_100051c0) or 16bpp (FUN_10002870) line drawer.
    """
    fmt = FUN_10001e40_get_format(this)
    if fmt == 8:
        FUN_100051c0(this, param_1, param_2, param_3, param_4, param_5 & 0xFF)
    elif fmt == 0x10:
        FUN_10002870(this, param_1, param_2, param_3, param_4, param_5)
    return 0


# ──────────────────────────────────────────────
# Function: FUN_100021d0 @ 0x100021d0
def FUN_100021d0(obj: list) -> None:
    """Reset NotificationTarget vtable to base class.
    
    C++: void __fastcall FUN_100021d0(NotificationTarget* this)
    """
    obj[0] = PTR_FUN_10053304
    FUN_10001350(obj)


# ──────────────────────────────────────────────
# Function: FUN_100021e0 @ 0x100021e0
def FUN_100021e0(this: list, param_1: int, param_2: int, param_3: int,
                 param_4: int, param_5: int, param_6: list, param_7: int,
                 param_8: int, param_9: int) -> int:
    """Draw patterned line dispatcher.
    
    Routes to 8bpp (FUN_10005860) or 16bpp (FUN_10003070).
    """
    fmt = FUN_10001e40_get_format(this)
    if fmt == 8:
        FUN_10005860(this, param_1, param_2, param_3, param_4, param_5,
                     id(param_6) if param_6 else 0, param_7, param_8, param_9)
    elif fmt == 0x10:
        FUN_10003070(this, param_1, param_2, param_3, param_4, param_5,
                     param_6, param_7, param_8, param_9)
    return 0


# ──────────────────────────────────────────────
# Function: FUN_10002280 @ 0x10002280
def FUN_10002280(this: list, param_1: list, param_2: int) -> int:
    """Color fill dispatcher (solid color).
    
    Routes to 8bpp (FUN_100064b0) or 16bpp (FUN_10003f20).
    """
    fmt = FUN_10001e40_get_format(this)
    if fmt == 8:
        FUN_100064b0(this, param_1, param_2 & 0xFFFF)
    elif fmt == 0x10:
        FUN_10003f20(this, param_1, param_2)
    return 0


# ──────────────────────────────────────────────
# Function: FUN_100022f0 @ 0x100022f0
def FUN_100022f0(this: list, param_1: list, param_2: list,
                 param_3: int, param_4: int) -> int:
    """Alpha blend rect (16bpp only).
    """
    fmt = FUN_10001e40_get_format(this)
    if fmt != 0x10:
        return 0x17
    src_fmt = FUN_10001e40_get_format(param_2)
    if src_fmt != 0x10:
        return 0x17
    return FUN_10004ef0(this, param_1, param_2, param_3, param_4)


# ──────────────────────────────────────────────
# Function: FUN_10002350 @ 0x10002350
def FUN_10002350(this: list, param_1: list, param_2: int) -> int:
    """Alpha blend solid fill (16bpp).
    """
    fmt = FUN_10001e40_get_format(this)
    if fmt != 0x10:
        return 0x17
    return FUN_10004080(this, param_1, param_2)


# ──────────────────────────────────────────────
# Function: FUN_100023b0 @ 0x100023b0
def FUN_100023b0(this: list, param_1: list, param_2: int) -> int:
    """Alpha blend dispatcher (both formats).
    """
    fmt = FUN_10001e40_get_format(this)
    if fmt == 8:
        return FUN_100065a0(this, param_1, param_2 & 0xFF)
    if fmt != 0x10:
        return 0x17
    return FUN_10004420(this, param_1, param_2)


# ──────────────────────────────────────────────
# Function: FUN_10002400 @ 0x10002400
def FUN_10002400(this: list, param_1: list, param_2: int) -> int:
    """Alpha blend dispatcher (16bpp with dither).
    """
    fmt = FUN_10001e40_get_format(this)
    if fmt != 0x10:
        return 0x17
    return FUN_100045c0(this, param_1, param_2)


# ──────────────────────────────────────────────
# Function: FUN_10002440 @ 0x10002440 (Blt via affine texture mapper)
def FUN_10002440(this: list, param_1: list, param_2: int,
                 param_3: list) -> list:
    """Blit with affine texture mapping (software renderer).
    
    C++: undefined2* __thiscall JGLDevice::TextureBlt(RECT*, int flags, ushort* out)
    Uses the software affine texture mapper FUN_10008120.
    """
    # Save state from this
    fmt = this[0x09]     # offset 0x24
    base_ptr = FUN_10001be0_vcall(this, 0x10)
    stride = this[0x10]  # offset 0x40
    width = FUN_10001be0_vcall(this, 0xD8)
    height = FUN_10001be0_vcall(this, 0xDC)
    clip_rect = this[0x1F]  # offset 0x7C
    pixel_flags = this[0x134]  # offset 0x4D0
    render_mode = FUN_10001be0_vcall(this, 0xE8)
    
    return FUN_10008120(param_1, param_2, param_3, render_mode)


# ──────────────────────────────────────────────
# Function: FUN_10002520 @ 0x10002520
def FUN_10002520(this: list, param_1: int) -> list:
    """NotificationTarget scalar deleting destructor (with base reset).
    """
    FUN_100021d0(this)
    if (param_1 & 1) != 0:
        FUN_10046490(this)
    return this


# ──────────────────────────────────────────────
# Function: FUN_10002540 @ 0x10002540 (TextureBlt with color key)
def FUN_10002540(this: list, param_1: list, param_2: int,
                 param_3: list, param_4: int) -> int:
    """Texture blit with color key support.
    
    C++: int __thiscall JGLDevice::TextureBltColorKey(RECT*, int flags, ushort* palette, int color_key)
    Uses FUN_10008800 for the actual rendering.
    """
    fmt = this[0x09]
    base_ptr = FUN_10001be0_vcall(this, 0x10)
    stride = this[0x10]
    width = FUN_10001be0_vcall(this, 0xD8)
    height = FUN_10001be0_vcall(this, 0xDC)
    clip_rect = this[0x1F]
    pixel_flags = this[0x134]
    render_mode = FUN_10001be0_vcall(this, 0xE8)
    
    return FUN_10008800(param_1, param_2, param_3, param_4, render_mode)


# ──────────────────────────────────────────────
# Function: FUN_10002620 @ 0x10002620
def FUN_10002620(this: list, param_1: str) -> int:
    """Load a font by name (8bpp only).
    
    C++: undefined4 __thiscall JGLDevice::LoadFont(char* fontname)
    """
    fmt = FUN_10001e40_get_format(this)
    if fmt != 8:
        return 0x17
    return FUN_100066a0(this, param_1)


# ──────────────────────────────────────────────
# Function: FUN_10002760 @ 0x10002760
def FUN_10002760(dst: list, value: int, count: int) -> None:
    """Fill memory with a short value (memset for ushort).
    
    C++: void __cdecl FUN_10002760(void* dst, short value, uint count_bytes)
    
    Fills 'count' bytes at 'dst' with 'value' (short). Handles unaligned start.
    """
    pos = 0
    if (count & 1) != 0:
        # Write single byte at start if odd count
        # *((byte*)dst + 0) = LOBYTE(value)
        pos += 1
    remaining = count // 2
    for i in range(remaining):
        pass  # *((ushort*)dst + i) = value


# ══════════════════════════════════════════════
# 16bpp Line Drawing (Bresenham)
# ══════════════════════════════════════════════

# ──────────────────────────────────────────────
# Function: FUN_100027a0 @ 0x100027a0
def FUN_100027a0(this: list, x1: int, y1: int, w: int, h: int,
                 pattern: int, color: int) -> int:
    """Fill axis-aligned rectangle (16bpp).
    
    C++: undefined4 __thiscall JGLDevice::fillRect16(int x, int y, int w, int h, short pattern, short color)
    Uses IntersectRect for clipping, then fills with pattern support.
    """
    left = x1
    right = x1 + w
    top = y1
    bottom = y1 + h
    
    # IntersectRect with clip rect
    # If no intersection, return 0
    
    # Get pixel pointer at clipped top-left
    # Loop rows: for each pixel, if *pixel == pattern, set to color
    # Advance by (surface_stride - clipped_width)
    
    return 0


# ──────────────────────────────────────────────
# Function: FUN_10002870 @ 0x10002870
def FUN_10002870(this: list, x1: int, y1: int, x2: int, y2: int,
                 color: int) -> None:
    """Draw a line using Bresenham algorithm (16bpp, solid color).
    
    C++: void __thiscall JGLDevice::line16(int x1, int y1, int x2, int y2, uint color)
    
    Handles horizontal, vertical, and diagonal lines efficiently.
    Uses fixed-point math for Bresenham error term.
    Uses palette lookup for indexed color if palette is set.
    """
    # If x1==x2: draw vertical line via FUN_10002ef0
    # If y1==y2: draw horizontal line via FUN_10002da0
    # Otherwise: general Bresenham 
    pass


# ──────────────────────────────────────────────
# Function: FUN_10002da0 @ 0x10002da0
def FUN_10002da0(this: list, x1: int, x2: int, y: int, color: int) -> None:
    """Draw horizontal line (16bpp).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10002ef0 @ 0x10002ef0
def FUN_10002ef0(this: list, x: int, y1: int, y2: int, color: int) -> None:
    """Draw vertical line (16bpp).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10003070 @ 0x10003070
def FUN_10003070(this: list, x1: int, y1: int, x2: int, y2: int,
                 color: int, pattern_list: list, pattern_len1: int,
                 pattern_len2: int, pattern_start: int) -> None:
    """Draw patterned/dashed line (16bpp).
    
    C++: void __thiscall JGLDevice::patternedLine16(...)
    Uses Bresenham with dash pattern (on/off lengths).
    """
    pass


# ══════════════════════════════════════════════
# Pattern/Fill Operations
# ══════════════════════════════════════════════

# ──────────────────────────────────────────────
# Function: FUN_10003830 @ 0x10003830
def FUN_10003830(this: list, x: int, y1: int, y2: int, color1: int,
                 color2: int, pattern_on: int, pattern_off: int,
                 start_offset: int) -> None:
    """Fill vertical range with two-color pattern (16bpp).
    Uses Bresenham-like stepping for checkerboard/stipple.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10003b30 @ 0x10003b30
def FUN_10003b30(this: list, x: int, y1: int, y2: int, color1: int,
                 color2_ptr: list, pattern_on: int, pattern_off: int,
                 start_offset: int) -> None:
    """Fill vertical range with pattern using palette lookup (16bpp).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10003e40 @ 0x10003e40
def FUN_10003e40(this: list, color: int) -> None:
    """Solid color fill of entire surface (16bpp).
    
    C++: void __thiscall JGLDevice::clear16(uint color)
    If whole surface is visible, uses fast memset fill.
    Otherwise clips and fills visible rect.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10003f20 @ 0x10003f20
def FUN_10003f20(this: list, rect: list, color: int) -> int:
    """Fill rectangle with solid color (16bpp).
    Supports palette lookup and sub-rect clipping.
    """
    if rect is None:
        FUN_10003e40(this, color)
        return 0
    return 0


# ──────────────────────────────────────────────
# Function: FUN_10004080 @ 0x10004080
def FUN_10004080(this: list, rect: list, alpha: int) -> int:
    """Alpha blend fill rectangle (16bpp, 565 format).
    
    C++: undefined4 __thiscall JGLDevice::alphaFill16(RECT*, uint alpha_percent)
    
    Alpha-blends rectangle with the current source color.
    Uses pre-computed blend tables and 16bpp color math.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10004420 @ 0x10004420
def FUN_10004420(this: list, rect: list, alpha: int) -> int:
    """Alpha fill with dithering (16bpp).
    Similar to FUN_10004080 but with ordered dither.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_100045c0 @ 0x100045c0
def FUN_100045c0(this: list, rect: list, alpha: int) -> int:
    """Alpha fill with enhanced dithering (16bpp).
    Uses different dither matrix.
    """
    pass


# ══════════════════════════════════════════════
# Blit Operations
# ══════════════════════════════════════════════

# ──────────────────────────────────────────────
# Function: FUN_10004990 @ 0x10004990
def FUN_10004990(this: list, src: list, dst_x: int, dst_y: int,
                 color_table: list, src_palette: int, flags: int,
                 color_key: int) -> int:
    """Copy/blit rectangle with alpha and color key (16bpp).
    
    C++: undefined4 __thiscall JGLDevice::blit16(Surface*, x, y, palette, ...)
    
    Copies from source surface to this surface with optional:
    - Color key transparency
    - Alpha blending
    - Palette lookup/translation
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10004ef0 @ 0x10004ef0
def FUN_10004ef0(this: list, dst_rect: list, src: list,
                 param_3: int, param_4: int) -> int:
    """Alpha blend blit (16bpp to 16bpp).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10005000 @ 0x10005000
def FUN_10005000(this: list, x: int, y: int, w: int, h: int,
                 pattern: int, color: int) -> int:
    """Fill rectangle (8bpp).
    
    C++: undefined4 __thiscall JGLDevice::fillRect8(int x, int y, int w, int h, byte pattern, byte color)
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_100050d0 @ 0x100050d0
def FUN_100050d0(this: list, x1: int, y1: int, x2: int, y2: int,
                 pattern: int) -> int:
    """Draw rectangle outline with pattern (8bpp).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_100051c0 @ 0x100051c0
def FUN_100051c0(this: list, x1: int, y1: int, x2: int, y2: int,
                 color: int) -> None:
    """Draw line (8bpp, Bresenham).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10005860 @ 0x10005860
def FUN_10005860(this: list, x1: int, y1: int, x2: int, y2: int,
                 color: int, pattern: int, p_on: int, p_off: int,
                 start: int) -> None:
    """Draw patterned line (8bpp).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_100064b0 @ 0x100064b0
def FUN_100064b0(this: list, rect: list, color: int) -> int:
    """Color fill rect (8bpp).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_100065a0 @ 0x100065a0
def FUN_100065a0(this: list, rect: list, color: int) -> int:
    """Alpha blend fill (8bpp).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_100066a0 @ 0x100066a0
def FUN_100066a0(this: list, fontname: str) -> int:
    """Load font (8bpp).
    Wraps Win32 CreateFontIndirectA/SelectObject.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10006a40 @ 0x10006a40
def FUN_10006a40(this: list, src: list, x: int, y: int, w: int, h: int,
                 dst_x: int, dst_y: int, flags: int) -> int:
    """Stretch blit (16bpp source to 16bpp dest).
    Uses software bilinear/stretch with fixed-point math.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10006ce0 @ 0x10006ce0
def FUN_10006ce0(this: list, src: list, x: int, y: int, w: int, h: int,
                 palette: list, dst_x: int, dst_y: int) -> int:
    """Blit with palette translation (8bpp src to 16bpp dst).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10007300 @ 0x10007300
def FUN_10007300(this: list, src: list, x: int, y: int, w: int, h: int,
                 dst_x: int, dst_y: int, flags: int) -> int:
    """Stretch blit (8bpp source to 8bpp dest).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_100075f0 @ 0x100075f0
def FUN_100075f0(this: list, src: list, x: int, y: int, w: int, h: int,
                 palette: list, dst_x: int, dst_y: int) -> int:
    """Blit with palette lookup (8bpp src to 8bpp dst).
    """
    pass


# ══════════════════════════════════════════════
# Software Texture Mapper (Affine)
# ══════════════════════════════════════════════

# ──────────────────────────────────────────────
# Function: FUN_10007e20 @ 0x10007e20
def FUN_10007e20(this: list, param_1: int) -> None:
    """Surface constructor / initializer.
    
    C++: void __thiscall FUN_10007e20(Surface* this, int flags)
    Sets vtable to Surface8bpp.
    """
    this[0] = PTR_FUN_1005341c
    # init fields...


# ──────────────────────────────────────────────
# Function: FUN_10007e70 @ 0x10007e70
def FUN_10007e70(obj: list) -> None:
    """Surface destructor (both 8bpp and 16bpp).
    
    C++: void __fastcall FUN_10007e70(Surface* this)
    Frees bitmap data and releases GDI objects.
    """
    obj[0] = PTR_FUN_1005341c
    # ... cleanup ...
    obj[0] = PTR_FUN_100534c0
    # ... more cleanup ...
    FUN_10001350(obj)


# ──────────────────────────────────────────────
# Function: FUN_10008120 @ 0x10008120
def FUN_10008120(state: list, src_rect: list, flags: int,
                 dst_palette: list, render_mode: int) -> list:
    """Affine texture mapper - software renderer core.
    
    C++: ushort* __cdecl FUN_10008120(...)
    
    This is the main software rendering loop that performs
    affine texture mapping with sub-pixel accuracy.
    
    Features:
    - Fixed-point texture coordinate stepping
    - Palette-based color lookup
    - Texture wrapping/clamping modes
    - Color key transparency
    """
    return None


# ──────────────────────────────────────────────
# Function: FUN_10008800 @ 0x10008800
def FUN_10008800(state: list, src_rect: list, flags: int,
                 dst_palette: list, color_key: int, render_mode: int) -> int:
    """Affine texture mapper with color key.
    
    C++: int __cdecl FUN_10008800(...)
    Like FUN_10008120 but supports color key (transparent color).
    """
    return 0


# ══════════════════════════════════════════════
# PNG Loading (embedded libpng)
# ══════════════════════════════════════════════

# ──────────────────────────────────────────────
# Function: FUN_1003ac60 @ 0x1003ac60
def FUN_1003ac60() -> None:
    """Initialize global palette converter (source).
    
    C++: void __cdecl FUN_1003ac60(void)
    Sets DAT_10057d58 vtable.
    """
    global DAT_10057d58
    DAT_10057d58 = PTR_FUN_100535c4


# ──────────────────────────────────────────────
# Function: FUN_1003ac90 @ 0x1003ac90
def FUN_1003ac90() -> None:
    """Uninitialize palette converter.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003ad00 @ 0x1003ad00
def FUN_1003ad00() -> None:
    """Initialize global palette converter (destination).
    
    C++: void __cdecl FUN_1003ad00(void)
    Sets DAT_10057d40 vtable.
    """
    global DAT_10057d40
    DAT_10057d40 = PTR_FUN_100535c8


# ──────────────────────────────────────────────
# Function: FUN_1003ad30 @ 0x1003ad30
def FUN_1003ad30() -> None:
    """Uninitialize dest palette converter.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003ada0 @ 0x1003ada0
def FUN_1003ada0() -> None:
    """Initialize global palette converter (shared).
    
    C++: void __cdecl FUN_1003ada0(void)
    Sets DAT_10057d70 vtable.
    """
    global DAT_10057d70
    DAT_10057d70 = PTR_FUN_100535cc


# ──────────────────────────────────────────────
# Function: FUN_1003add0 @ 0x1003add0
def FUN_1003add0() -> None:
    """Uninitialize shared palette converter.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003ae30 @ 0x1003ae30
def FUN_1003ae30() -> None:
    """Initialize global palette converter (global).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003aec0 @ 0x1003aec0
def FUN_1003aec0(obj: list) -> None:
    """Palette converter init - set vtable.
    
    C++: void __fastcall FUN_1003aec0(Palette16To16* this)
    """
    obj[0] = PTR_FUN_100535d0


# ──────────────────────────────────────────────
# Function: FUN_1003af40 @ 0x1003af40
def FUN_1003af40(this: list, param_1: int) -> list:
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003af60 @ 0x1003af60
def FUN_1003af60(this: list, param_1: int) -> list:
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003af70 @ 0x1003af70
def FUN_1003af70(this: list, param_1: int) -> list:
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003b390 @ 0x1003b390
def FUN_1003b390(this: list, palette_data: list, size: int) -> int:
    """Build a 16-bit to 16-bit palette lookup table.
    
    C++: int __thiscall Palette16To16::build(LPVOID palette_data, int size)
    Builds the LUT from source palette entries.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003b4e0 @ 0x1003b4e0
def FUN_1003b4e0(this: list, palette_data: list, size: int,
                 shift: int) -> int:
    """Build palette LUT with brightness shift.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003b590 @ 0x1003b590
def FUN_1003b590(this: list, scale_r: int, scale_g: int, scale_b: int,
                 shift: int) -> int:
    """Build palette LUT with per-channel scaling.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003b8f0 @ 0x1003b8f0
def FUN_1003b8f0(this: list) -> None:
    """Palette16To16 (source) constructor.
    """
    this[0] = PTR_FUN_100535c4
    # this[1] = palette data pointer (NULL)
    # this[2] = size (0)


# ──────────────────────────────────────────────
# Function: FUN_1003b940 @ 0x1003b940
def FUN_1003b940(this: list) -> None:
    """Palette16To16 (destination) constructor.
    """
    this[0] = PTR_FUN_100535c8


# ──────────────────────────────────────────────
# Function: FUN_1003b990 @ 0x1003b990
def FUN_1003b990(this: list) -> None:
    """Palette16To16 (shared) constructor.
    """
    this[0] = PTR_FUN_100535cc


# ──────────────────────────────────────────────
# Function: FUN_1003b9e0 @ 0x1003b9e0
def FUN_1003b9e0(obj: list) -> None:
    """Palette16To16 destructor - free palette data.
    """
    obj[0] = PTR_FUN_100535d0
    # if palette_data: free it
    # Finally set to base vtable
    FUN_10001350(obj)


# ──────────────────────────────────────────────
# Function: FUN_1003bb20 @ 0x1003bb20
def FUN_1003bb20(this: list, palette_data: list, size: int) -> int:
    """Set palette data for source lookup.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003bb80 @ 0x1003bb80
def FUN_1003bb80(this: list, palette_data: list, size: int) -> int:
    """Set palette data for destination lookup.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003bbf0 @ 0x1003bbf0
def FUN_1003bbf0(this: list, palette_data: list, size: int) -> int:
    """Set palette data for shared lookup.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003bc60 @ 0x1003bc60
def FUN_1003bc60(this: list, palette_data: list, size: int) -> int:
    """Set palette data for global lookup.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003bd90 @ 0x1003bd90
def FUN_1003bd90(this: list) -> None:
    """PngReader constructor.
    
    C++: void __thiscall PngReader::PngReader()
    """
    this[0] = PTR_FUN_10053884


# ──────────────────────────────────────────────
# Function: FUN_1003be00 @ 0x1003be00
def FUN_1003be00(this: list, param_1: int) -> list:
    """PngReader scalar deleting destructor.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003c200 @ 0x1003c200
def FUN_1003c200() -> int:
    """Get PNG error message.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003c2a0 @ 0x1003c2a0
def FUN_1003c2a0() -> None:
    """PNG read callback initialization.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003c2c0 @ 0x1003c2c0
def FUN_1003c2c0() -> None:
    """PNG error handler.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003c2e0 @ 0x1003c2e0
def FUN_1003c2e0(obj: list) -> None:
    """PngReader destructor.
    """
    obj[0] = PTR_FUN_10053884
    # Cleanup PNG read/write structures
    obj[0] = PTR_FUN_1005392c
    FUN_10001350(obj)


# ──────────────────────────────────────────────
# Function: FUN_1003c320 @ 0x1003c320
def FUN_1003c320(this: list) -> None:
    """PNG read function.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003c350 @ 0x1003c350
def FUN_1003c350(this: list) -> None:
    """PNG output function.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003c360 @ 0x1003c360
def FUN_1003c360(this: list, filename: str) -> int:
    """PNG read PNG file.
    
    C++: int __thiscall PngReader::readPng(char* filename)
    
    Opens the file via MemoryFile, validates PNG signature,
    decodes IHDR/PLTE/IDAT chunks, returns surface data.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003c840 @ 0x1003c840
def FUN_1003c840() -> None:
    """PNG chunk reading helper.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003c880 @ 0x1003c880
def FUN_1003c880() -> None:
    """PNG chunk processing.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003c8a0 @ 0x1003c8a0
def FUN_1003c8a0(this: list) -> int:
    """Validate PNG signature bytes.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003c900 @ 0x1003c900
def FUN_1003c900(this: list) -> int:
    """Decode PNG IHDR chunk.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003c960 @ 0x1003c960
def FUN_1003c960(this: list) -> int:
    """Process PNG PLTE chunk (palette).
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003ca00 @ 0x1003ca00
def FUN_1003ca00(this: list) -> None:
    """Process PNG tRNS chunk (transparency).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003ca20 @ 0x1003ca20
def FUN_1003ca20(this: list) -> None:
    """Process PNG bKGD chunk (background color).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003ca40 @ 0x1003ca40
def FUN_1003ca40(this: list) -> None:
    """Process PNG pHYs chunk (physical dimensions).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003ca60 @ 0x1003ca60
def FUN_1003ca60(this: list) -> None:
    """Process PNG gAMA chunk (gamma).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003ca80 @ 0x1003ca80
def FUN_1003ca80(this: list) -> None:
    """Process PNG sBIT chunk (significant bits).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003caa0 @ 0x1003caa0
def FUN_1003caa0(this: list) -> None:
    """Process PNG sRGB chunk.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003cac0 @ 0x1003cac0
def FUN_1003cac0(this: list) -> None:
    """Process PNG cHRM chunk.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003cae0 @ 0x1003cae0
def FUN_1003cae0(this: list) -> None:
    """Process PNG IDAT chunk (image data).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003cb00 @ 0x1003cb00
def FUN_1003cb00(this: list) -> None:
    """Process PNG IEND chunk (end of image).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003cb20 @ 0x1003cb20
def FUN_1003cb20(this: list) -> int:
    """Process PNG tEXt chunk (text).
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003cb40 @ 0x1003cb40
def FUN_1003cb40(this: list) -> None:
    """ZlibStream constructor.
    
    C++: void __thiscall ZlibStream::ZlibStream()
    """
    this[0] = PTR_FUN_10053908
    # init allocator hooks


# ──────────────────────────────────────────────
# Function: FUN_1003cb70 @ 0x1003cb70
def FUN_1003cb70(this: list, param_1: int) -> list:
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003cb90 @ 0x1003cb90
def FUN_1003cb90(obj: list) -> None:
    """ZlibStream destructor.
    """
    obj[0] = PTR_FUN_10053908
    # Cleanup zlib internals
    obj[0] = PTR_FUN_1005392c
    FUN_10001350(obj)


# ──────────────────────────────────────────────
# Function: FUN_1003cc00 @ 0x1003cc00
def FUN_1003cc00(this: list, param_1: int) -> None:
    """ZlibStream set allocator.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003cc10 @ 0x1003cc10
def FUN_1003cc10(this: list) -> None:
    """ZlibStream set inflate function.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003cc70 @ 0x1003cc70
def FUN_1003cc70(this: list) -> None:
    """ZlibStream set state handler.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003cd00 @ 0x1003cd00
def FUN_1003cd00(this: list, func: Callable) -> None:
    """ZlibStream::setDataFunc - set the data processing callback.
    
    C++: void __thiscall ZlibStream::setDataFunc(code* func)
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003ce00 @ 0x1003ce00
def FUN_1003ce00(this: list, in_data: list, in_size: int,
                 out_data: list, out_size: int) -> int:
    """ZlibStream::decompress - inflate data.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003ce40 @ 0x1003ce40
def FUN_1003ce40(this: list, in_data: list, in_size: int) -> int:
    """ZlibStream::inflate - decompress with state machine.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003ce90 @ 0x1003ce90
def FUN_1003ce90(this: list, in_data: list, in_size: int,
                 out_data: list, out_size: int) -> int:
    """ZlibStream::processData - full decompress.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003cfd0 @ 0x1003cfd0
def FUN_1003cfd0(this: list) -> None:
    """ZlibStream::reset.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003d020 @ 0x1003d020
def FUN_1003d020(this: list, param_1: list, param_2: int) -> None:
    """ZlibStream::setDictionary.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003d060 @ 0x1003d060
def FUN_1003d060(obj: list) -> None:
    """NotificationTarget vtable reset for ZlibStream base.
    """
    obj[0] = PTR_FUN_1005392c
    FUN_10001350(obj)


# ──────────────────────────────────────────────
# Function: FUN_1003d070 @ 0x1003d070
def FUN_1003d070(this: list, param_1: int) -> list:
    """ZlibStream base scalar deleting destructor.
    """
    FUN_1003d060(this)
    if (param_1 & 1) != 0:
        FUN_10046490(this)
    return this


# ──────────────────────────────────────────────
# Function: FUN_1003d1a8 @ 0x1003d1a8
def FUN_1003d1a8() -> int:
    """Translate and dispatch a Windows message.
    
    C++: undefined4 FUN_1003d1a8(void)
    Selects best display mode and dispatches message.
    """
    return 1


# ──────────────────────────────────────────────
# Function: FUN_1003d5c0 @ 0x1003d5c0
def FUN_1003d5c0(version_str: str, param_2: int, param_3: int,
                 param_4: int) -> list:
    """libpng initialization / png_create_read_struct equivalent.
    
    C++: int* __cdecl FUN_1003d5c0(char* version, uint, uint, uint)
    
    Allocates and initializes the PNG read struct,
    sets up error handling, sets up zlib decompression,
    returns the png_structp equivalent.
    """
    return None


# ──────────────────────────────────────────────
# Function: FUN_1003d710 @ 0x1003d710
def FUN_1003d710(png_ptr: list, info_ptr: list) -> None:
    """libpng png_read_info equivalent.
    
    C++: void __cdecl FUN_1003d710(int* png_ptr, uint* info_ptr)
    
    Reads PNG signature, processes IHDR, PLTE, IDAT, IEND chunks.
    Validates CRC, handles transparency, gamma, and color type conversion.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003de30 @ 0x1003de30
def FUN_1003de30() -> None:
    """libpng png_set_* color conversion helper.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003de90 @ 0x1003de90
def FUN_1003de90(this: list, width: int, height: int, bit_depth: int,
                 color_type: int, interlace: int, compression: int,
                 filter: int) -> int:
    """Decode PNG IHDR chunk data.
    
    C++: int __thiscall PngReader::decodeIHDR(...)
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003e0a0 @ 0x1003e0a0
def FUN_1003e0a0(this: list) -> int:
    """Decode PNG palette (PLTE chunk).
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003e130 @ 0x1003e130
def FUN_1003e130(this: list, row: list, row_num: int,
                 pass_num: int) -> int:
    """Process one row of PNG image data.
    
    C++: int __thiscall PngReader::processRow(byte* row, int row_num, int pass)
    
    Applies PNG filter (None, Sub, Up, Average, Paeth),
    then converts to output format.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003e360 @ 0x1003e360
def FUN_1003e360() -> None:
    """PNG filter type None (passthrough).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003e370 @ 0x1003e370
def FUN_1003e370() -> None:
    """PNG filter type Sub.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003e390 @ 0x1003e390
def FUN_1003e390() -> None:
    """PNG filter type Up.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003e3c0 @ 0x1003e3c0
def FUN_1003e3c0() -> None:
    """PNG filter type Average.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003e3f0 @ 0x1003e3f0
def FUN_1003e3f0() -> None:
    """PNG filter type Paeth.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003e420 @ 0x1003e420
def FUN_1003e420(this: list) -> None:
    """Apply PNG filters to image data.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003e470 @ 0x1003e470
def FUN_1003e470(this: list, width: int, height: int,
                 row_bytes: int) -> int:
    """Allocate output image buffer.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003e680 @ 0x1003e680
def FUN_1003e680(this: list) -> int:
    """Convert palette to 16-bit RGB format.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003e750 @ 0x1003e750
def FUN_1003e750(this: list) -> int:
    """Set up palette LUT from decoded PLTE chunk.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1003e840 @ 0x1003e840
def FUN_1003e840() -> None:
    """libpng chunk reading helper.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003e880 @ 0x1003e880
def FUN_1003e880() -> None:
    """libpng CRC checking helper.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003e890 @ 0x1003e890
def FUN_1003e890(this: list, chunk_len: int) -> None:
    """Read and validate a PNG chunk.
    
    C++: void __thiscall PngReader::readChunk(int length)
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003f2b0 @ 0x1003f2b0
def FUN_1003f2b0(this: list) -> None:
    """Decode and process all PNG chunks (central chunk loop).
    
    C++: void __thiscall PngReader::processChunks()
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1003f700 @ 0x1003f700
def FUN_1003f700(this: list, filename: str) -> int:
    """Load a PNG file into a surface (main entry point).
    
    C++: int __thiscall PngReader::load(char* filename)
    """
    return 0


# ══════════════════════════════════════════════
# Memory Allocator (custom heap)
# ══════════════════════════════════════════════

# ──────────────────────────────────────────────
# Function: FUN_10042980 @ 0x10042980
def FUN_10042980(size: int) -> list:
    """Custom memory allocator (malloc equivalent).
    """
    return [0] * size


# ──────────────────────────────────────────────
# Function: FUN_100429f0 @ 0x100429f0
def FUN_100429f0(ptr: list) -> None:
    """Custom memory free.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10042a10 @ 0x10042a10
def FUN_10042a10(this: int) -> None:
    """Memory reset/reinit.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10042b90 @ 0x10042b90
def FUN_10042b90(this: list, dst: list, size: int) -> None:
    """Memory read.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10042bc0 @ 0x10042bc0
def FUN_10042bc0(this: list, param_1: int, param_2: int) -> None:
    """Memory initialization.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10042c60 @ 0x10042c60
def FUN_10042c60(param_1: int) -> list:
    """Allocate memory pool.
    """
    return None


# ──────────────────────────────────────────────
# Function: FUN_10042cb0 @ 0x10042cb0
def FUN_10042cb0(this: list) -> None:
    """Free memory pool.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10042cc0 @ 0x10042cc0
def FUN_10042cc0(this: list, size: int) -> list:
    """Allocate from memory pool.
    """
    return None


# ──────────────────────────────────────────────
# Function: FUN_10042d00 @ 0x10042d00
def FUN_10042d00(this: list, ptr: list) -> None:
    """Free from memory pool.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10042d90 @ 0x10042d90
def FUN_10042d90(this: list, msg: str) -> None:
    """Set error message in PNG struct.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10042f30 @ 0x10042f30
def FUN_10042f30(this: list, param_2: int, param_3: int,
                 param_4: int) -> None:
    """Initialize jump buffer / error handling.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10042f50 @ 0x10042f50
def FUN_10042f50(data: list) -> int:
    """Read big-endian 32-bit integer.
    
    C++: uint __cdecl FUN_10042f50(byte* data)
    Used for PNG chunk length parsing.
    """
    return (data[0] << 24) | (data[1] << 16) | (data[2] << 8) | data[3]


# ──────────────────────────────────────────────
# Function: FUN_10042fa0 @ 0x10042fa0
def FUN_10042fa0(this: list, dst: list, size: int) -> None:
    """Read data from file stream into buffer.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_100430f0 @ 0x100430f0
def FUN_100430f0(this: list, info_ptr: list, length: int) -> None:
    """Process PNG IHDR chunk data.
    
    C++: void __cdecl FUN_100430f0(int* png_ptr, uint* info_ptr, int length)
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10043350 @ 0x10043350
def FUN_10043350(this: list, info_ptr: int, length: int) -> None:
    """Process PNG PLTE chunk data.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_100434b0 @ 0x100434b0
def FUN_100434b0(this: list, info_ptr: int, length: int) -> None:
    """Process PNG IDAT chunk data.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_100437f0 @ 0x100437f0
def FUN_100437f0(this: list, info_ptr: int, length: int) -> None:
    """Process PNG tEXt chunk data.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_100442b0 @ 0x100442b0
def FUN_100442b0(this: list, info_ptr: int, length: int) -> None:
    """Process PNG IEND chunk data.
    """
    pass


# ══════════════════════════════════════════════
# Memory Management Utilities
# ══════════════════════════════════════════════

# ──────────────────────────────────────────────
# Function: FUN_10046490 @ 0x10046490
def FUN_10046490(ptr: list) -> None:
    """operator delete / free memory.
    
    In the decompiled code, this is called when an object's
    destructor has the 'deleting' flag set (param_1 & 1).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10046558 @ 0x10046558
def FUN_10046558(address: int) -> None:
    """Register a function/trampoline.
    
    C++: void __cdecl FUN_10046558(int address)
    """
    pass


# ══════════════════════════════════════════════
# zlib / Deflate Decompression
# ══════════════════════════════════════════════

# ──────────────────────────────────────────────
# Function: FUN_1004b134 @ 0x1004b134
def FUN_1004b134(param_1: int, param_2: int) -> None:
    """zlib allocator (default).
    
    C++: void __cdecl FUN_1004b134(int size, int count)
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1004e40d @ 0x1004e40d
def FUN_1004e40d(a: int, b: int, out: list) -> int:
    """32-bit multiply with overflow detection.
    
    C++: int __cdecl FUN_1004e40d(uint a, uint b, uint* out)
    
    Returns 0 on success, non-zero if overflow.
    """
    result = a * b
    out[0] = result & 0xFFFFFFFF
    if result > 0xFFFFFFFF:
        return 1  # overflow
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1004e48c @ 0x1004e48c
def FUN_1004e48c(state: list) -> None:
    """Inflate bit reader: shift in next bit (left shift).
    
    C++: void __cdecl FUN_1004e48c(uint* state)
    
    Part of the bit-oriented inflate decompressor.
    Shifts the bit buffer left by 1 and reads a new byte if needed.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1004e4ba @ 0x1004e4ba
def FUN_1004e4ba(state: list) -> None:
    """Inflate bit reader: shift right (opposite direction).
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1004f27d @ 0x1004f27d
def FUN_1004f27d(param_1: list, param_2: int, param_3: int) -> int:
    """Inflate fixed Huffman block.
    
    C++: int __cdecl FUN_1004f27d(...)
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1004f494 @ 0x1004f494
def FUN_1004f494(param_1: list) -> int:
    """Inflate table builder helper.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1004f4ba @ 0x1004f4ba
def FUN_1004f4ba() -> int:
    """Inflate distance table accessor.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1004f4bd @ 0x1004f4bd
def FUN_1004f4bd() -> int:
    """Inflate length table accessor.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1004f4cb @ 0x1004f4cb
def FUN_1004f4cb() -> int:
    """Inflate code length table accessor.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1004f4da @ 0x1004f4da
def FUN_1004f4da() -> int:
    """Inflate distance code table accessor.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1004f4fd @ 0x1004f4fd
def FUN_1004f4fd() -> int:
    """Inflate fixed length table accessor.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1004f560 @ 0x1004f560
def FUN_1004f560(param_1: list, param_2: list) -> None:
    """Inflate copy match (LZ77).
    
    C++: void __cdecl FUN_1004f560(ushort* dest, ushort* match)
    Copies a back-referenced match during decompression.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1004f58f @ 0x1004f58f
def FUN_1004f58f(param_1: list, param_2: list) -> None:
    """Inflate output byte.
    
    C++: void __cdecl FUN_1004f58f(int* state, int* table_entry)
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1004f7af @ 0x1004f7af
def FUN_1004f7af(param_1: list, param_2: int, param_3: int) -> None:
    """Inflate decode from bit stream using Huffman tree.
    
    C++: void __cdecl FUN_1004f7af(int* buffer, uint bit_count, int table)
    Decodes 'bit_count' bits using the Huffman tree at 'table'.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_1004f82b @ 0x1004f82b
def FUN_1004f82b(param_1: int, param_2: int) -> int:
    """Set inflate window size / dictionary.
    
    C++: int __cdecl FUN_1004f82b(uint param_1, int param_2)
    
    param_2: 0x8000 = store, 0x4000 = (store|0x80)
    Returns previous state or -1 on error.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1004f8b0 @ 0x1004f8b0
def FUN_1004f8b0(param_1: int) -> int:
    """Reset inflate stream (start new block).
    
    C++: undefined4 __cdecl FUN_1004f8b0(int zlib_state)
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1004f900 @ 0x1004f900
def FUN_1004f900(param_1: int) -> int:
    """End/free inflate stream.
    
    C++: undefined4 __cdecl FUN_1004f900(int zlib_state)
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1004f950 @ 0x1004f950
def FUN_1004f950(state: int, window_bits: int, version: str,
                 struct_size: int) -> int:
    """Initialize inflate (zlib inflateInit_ equivalent).
    
    C++: undefined4 __cdecl FUN_1004f950(int state, int window_bits,
                                          char* version, int struct_size)
    
    Initializes the inflate state machine.
    - window_bits < 0 means raw deflate (no zlib header)
    - window_bits 8-15 sets window size
    - version must be "1.0.2" and struct_size must be 0x38
    """
    if version is None or version[0:1] != '1' or struct_size != 0x38:
        return -6  # Z_VERSION_ERROR
    
    if state == 0:
        return -2  # Z_STREAM_ERROR
    
    # Allocate internal state
    # Set up function pointers
    # Allocate Huffman tables
    
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1004fa60 @ 0x1004fa60
def FUN_1004fa60(state: int, version: str, struct_size: int) -> None:
    """Inflate init with window size 15 (default).
    
    C++: void __cdecl FUN_1004fa60(int state, char* version, int struct_size)
    """
    FUN_1004f950(state, 15, version, struct_size)


# ──────────────────────────────────────────────
# Function: FUN_1004fa80 @ 0x1004fa80
def FUN_1004fa80(z_state: list, flush_mode: int) -> int:
    """Inflate (zlib inflate equivalent).
    
    C++: int __cdecl FUN_1004fa80(int* z_stream, int flush)
    
    Main inflate/decompression entry point.
    State machine with cases:
      0 = HEADER_CHECK (read zlib header)
      1 = HEADER_BYTE2
      2-5 = DICT_LEN (4 bytes)
      6 = WAITING_DICT
      7 = BLOCK_TYPE (read block header)
      8-11 = BLOCK_LEN (4 bytes)
      12 = COMPRESSED_BLOCK (stored or dynamic)
      13 = FINISHED
    Returns:
       0  = OK (stream in progress)
       1  = STREAM_END
       2  = NEED_DICT
      -2  = STREAM_ERROR
      -3  = DATA_ERROR
      -4  = MEM_ERROR
      -5  = BUF_ERROR
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_1004ffd0 @ 0x1004ffd0
def FUN_1004ffd0(tree: list, state: int, result: list) -> None:
    """Build/reuse a Huffman tree from codeword lengths.
    
    C++: void __cdecl FUN_1004ffd0(int* tree, int state, int* result)
    
    Builds a Huffman decoding tree from a list of code lengths.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10050070 @ 0x10050070
def FUN_10050070(state: int, alloc_hint: int, table_size: int) -> list:
    """Allocate Huffman tree table.
    
    C++: int* __cdecl FUN_10050070(int state, int alloc_hint, int table_size)
    """
    return None


# ──────────────────────────────────────────────
# Function: FUN_100500e0 @ 0x100500e0
def FUN_100500e0(huff_table: list, z_state: list, avail: int) -> int:
    """Inflate stored/compressed block.
    
    Processes either a stored (type 0) or dynamic Huffman (type 1/2) block.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_10050e10 @ 0x10050e10
def FUN_10050e10(tree: list, state: int, result: list) -> int:
    """Free Huffman tree and call destructor.
    
    C++: undefined4 __cdecl FUN_10050e10(int* tree, int state, int* result)
    """
    FUN_1004ffd0(tree, state, result)
    return 0


# ──────────────────────────────────────────────
# Function: FUN_10050e50 @ 0x10050e50
def FUN_10050e50(init_crc: int, buf: list, length: int) -> int:
    """Compute CRC32 checksum.
    
    C++: uint __cdecl FUN_10050e50(uint crc, byte* buf, uint length)
    
    Standard CRC32 computation used for PNG chunk validation.
    Uses polynomial 0xEDB88320 (reflected).
    Processes in 16-byte blocks for speed, then byte-by-byte.
    Modulo 0xFFF1 (65521) - this is actually Adler-32!
    """
    # This is actually Adler-32, not CRC32:
    s1 = init_crc & 0xFFFF
    s2 = init_crc >> 16
    
    if buf is None:
        return 1
    
    while length > 0:
        chunk_len = min(length, 0x15B0)  # process up to 5552 bytes at a time
        length -= chunk_len
        
        if chunk_len > 15:
            block_count = chunk_len // 16
            chunk_len -= block_count * 16
            pos = 0
            for _ in range(block_count):
                s1 += buf[pos + 0]
                s2 += s1
                s1 += buf[pos + 1]
                s2 += s1
                s1 += buf[pos + 2]
                s2 += s1
                s1 += buf[pos + 3]
                s2 += s1
                s1 += buf[pos + 4]
                s2 += s1
                s1 += buf[pos + 5]
                s2 += s1
                s1 += buf[pos + 6]
                s2 += s1
                s1 += buf[pos + 7]
                s2 += s1
                s1 += buf[pos + 8]
                s2 += s1
                s1 += buf[pos + 9]
                s2 += s1
                s1 += buf[pos + 10]
                s2 += s1
                s1 += buf[pos + 11]
                s2 += s1
                s1 += buf[pos + 12]
                s2 += s1
                s1 += buf[pos + 13]
                s2 += s1
                s1 += buf[pos + 14]
                s2 += s1
                s1 += buf[pos + 15]
                s2 += s1
                pos += 16
        
        for i in range(chunk_len):
            s1 += buf[pos + i]
            s2 += s1
        
        s1 %= 65521  # 0xFFF1
        s2 %= 65521
    
    return (s2 << 16) | s1


# ──────────────────────────────────────────────
# Function: FUN_10050f80 @ 0x10050f80
def FUN_10050f80(param_1: int, param_2: int, param_3: int) -> None:
    """Default zlib allocator (wraps FUN_1004b134).
    
    C++: void __cdecl FUN_10050f80(uint param_1, int param_2, int param_3)
    """
    FUN_1004b134(param_2, param_3)


# ──────────────────────────────────────────────
# Function: FUN_10050fb0 @ 0x10050fb0
def FUN_10050fb0(param_1: list, param_2: list, param_3: list,
                 param_4: int) -> int:
    """Build dynamic Huffman table from code lengths (inflate).
    
    C++: int __cdecl FUN_10050fb0(int* lengths, uint* out_table,
                                   uint* out_bits, int state)
    """
    return FUN_10051010(param_1, 19, 19, 0, 0, param_3, param_2, param_4)


# ──────────────────────────────────────────────
# Function: FUN_10051010 @ 0x10051010
def FUN_10051010(lengths: list, num_codes: int, max_codes: int,
                  param_4: int, param_5: int, out_bits: list,
                  out_table: list, state: int) -> int:
    """Build canonical Huffman code table.
    
    C++: undefined4 __cdecl FUN_10051010(int* lengths, uint num_codes,
                                          uint max_codes, int, int,
                                          uint* out_bits, uint* out_table,
                                          int state)
    
    Standard Huffman table builder:
    1. Count occurrences of each code length
    2. Check if Huffman code is valid (Kraft inequality)
    3. Assign canonical codewords
    4. Build lookup table with fast decoding
    """
    return 0


# ══════════════════════════════════════════════
# Huffman Tree / Inflate Helpers
# ══════════════════════════════════════════════

# ──────────────────────────────────────────────
# Function: FUN_100514d0 @ 0x100514d0
def FUN_100514d0(param_1: int, param_2: int, param_3: list,
                 param_4: list, param_5: list, param_6: list,
                 param_7: list, param_8: int) -> int:
    """Inflate: build combined length/distance trees.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_100515c0 @ 0x100515c0
def FUN_100515c0(a: list, b: list, c: list, d: list) -> None:
    """Inflate: compute table size parameters.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10051720 @ 0x10051720
def FUN_10051720(ptr: int, state: int) -> None:
    """Free memory via zlib allocator.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10051730 @ 0x10051730
def FUN_10051730(param_1: list, param_2: int) -> None:
    """Inflate helper.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10051760 @ 0x10051760
def FUN_10051760(param_1: int, param_2: int, param_3: list,
                 param_4: list, param_5: int) -> int:
    """Inflate: allocate and initialize trees.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_100517a0 @ 0x100517a0
def FUN_100517a0(state: list, stream: list, flush: int) -> int:
    """Inflate: process one deflate block.
    
    C++: int __cdecl FUN_100517a0(uint* state, int* stream, int flush)
    
    Decodes stored (type 0), fixed Huffman (type 1),
    or dynamic Huffman (type 2) blocks.
    """
    return 0


# ──────────────────────────────────────────────
# Function: FUN_10051f30 @ 0x10051f30
def FUN_10051f30(ptr: int, state: int) -> None:
    """Inflate: free allocated trees.
    """
    pass


# ──────────────────────────────────────────────
# Function: FUN_10051f50 @ 0x10051f50
def FUN_10051f50(state: int, stream: list, result: int) -> None:
    """Inflate: save state and return result.
    
    Saves the current bit buffer state and returns result code.
    """
    pass


# ══════════════════════════════════════════════
# Function List Summary (All Decompiled Functions)
# ══════════════════════════════════════════════
#
# The following is a complete list of all 528+ decompiled functions
# from jgl.dll, organized by functional area:
#
# ── Memory File I/O (0x10001000 - 0x100011c0) ──
# FUN_10001000 - MemoryFile ctor init
# FUN_10001020 - MemoryFile scalar deleting dtor
# FUN_10001040 - MemoryFile dtor
# FUN_10001050 - MemoryFile::Create (file mapping)
# FUN_10001170 - MemoryFile::Close (release handles)
# FUN_100011c0 - MemoryFile::Truncate
#
# ── Notification System (0x10001260 - 0x10001540) ──
# FUN_10001260 - NotificationSource global init
# FUN_10001280 - Register notification handler
# FUN_10001310 - NotificationTarget ctor
# FUN_10001330 - NotificationTarget scalar deleting dtor
# FUN_10001350 - NotificationTarget dtor (unlink)
# FUN_10001420 - Process all notifications
# FUN_10001450 - NotificationSource scalar deleting dtor
# FUN_100014c0 - Add notification target
# FUN_10001540 - NotificationNode scalar deleting dtor
#
# ── Random Number Generator (0x10001590 - 0x100015d0) ──
# FUN_10001590 - LCG random (float)
# FUN_100015d0 - LCG random (int)
#
# ── JGLDevice (0x100015f0 - 0x100017a0) ──
# FUN_100015f0 - JGLDevice scalar deleting dtor
# FUN_10001610 - JGLDevice ctor
# FUN_10001730 - JGLDevice dtor
# FUN_100017a0 - Release GDI objects
#
# ── GDI Helper Methods (0x10001be0 - 0x10002760) ──
# FUN_10001be0 - getPixelOffset (byte offset into surface)
# FUN_10001d30 - SelectObject (font)
# FUN_10001d60 - SelectStockObject (font)
# FUN_10001d90 - SetTextColor (RGB)
# FUN_10001dd0 - SetTextColor (packed)
# FUN_10001e00 - TextOut
# FUN_10001e40 - StretchBlt (dispatcher)
# FUN_10001fc0 - AlphaBlit (dispatcher)
# FUN_10002090 - FillRect (dispatcher)
# FUN_10002120 - FrameRect (8bpp)
# FUN_10002160 - LineTo (dispatcher)
# FUN_100021d0 - NotificationTarget vtable reset
# FUN_100021e0 - PatternLine (dispatcher)
# FUN_10002280 - SolidFill (dispatcher)
# FUN_100022f0 - AlphaBlend (16bpp only)
# FUN_10002350 - AlphaFill (16bpp)
# FUN_100023b0 - AlphaBlend (both formats)
# FUN_10002400 - AlphaFill with dither (16bpp)
# FUN_10002440 - TextureBlt (affine mapper)
# FUN_10002520 - NotificationTarget scalar deleting dtor
# FUN_10002540 - TextureBlt with color key
# FUN_10002620 - LoadFont (8bpp)
# FUN_10002760 - Fast ushort memset fill
#
# ── 16bpp Drawing Primitives (0x100027a0 - 0x100045c0) ──
# FUN_100027a0 - FillRect (16bpp)
# FUN_10002870 - Line (Bresenham 16bpp)
# FUN_10002da0 - HLine (horizontal line 16bpp)
# FUN_10002ef0 - VLine (vertical line 16bpp)
# FUN_10003070 - PatternLine (dashed 16bpp)
# FUN_10003830 - TwoColorPattern (vertical)
# FUN_10003b30 - PatternFill (vertical with palette)
# FUN_10003e40 - ClearScreen (16bpp fast fill)
# FUN_10003f20 - FillRect solid (16bpp)
# FUN_10004080 - AlphaFill (16bpp, 565 format)
# FUN_10004420 - AlphaFill with dither
# FUN_100045c0 - AlphaFill enhanced dither
#
# ── 16bpp Blit Operations (0x10004990 - 0x10004ef0) ──
# FUN_10004990 - Blit (16bpp copy/alpha/color key)
# FUN_10004ef0 - AlphaBlend blit (16bpp→16bpp)
#
# ── 8bpp Drawing Primitives (0x10005000 - 0x100066a0) ──
# FUN_10005000 - FillRect (8bpp)
# FUN_100050d0 - FrameRect (8bpp)
# FUN_100051c0 - Line (Bresenham 8bpp)
# FUN_10005860 - PatternLine (8bpp)
# FUN_100064b0 - FillRect solid (8bpp)
# FUN_100065a0 - AlphaFill (8bpp)
# FUN_100066a0 - LoadFont (8bpp)
#
# ── Stretch Blit (0x10006a40 - 0x100075f0) ──
# FUN_10006a40 - StretchBlt (16bpp→16bpp)
# FUN_10006ce0 - Blit with palette (8bpp→16bpp)
# FUN_10007300 - StretchBlt (8bpp→8bpp)
# FUN_100075f0 - Blit with palette (8bpp→8bpp)
#
# ── Software Texture Mapper (0x10007e20 - 0x10008800) ──
# FUN_10007e20 - Surface ctor (8bpp)
# FUN_10007e70 - Surface dtor (8bpp/16bpp)
# FUN_10008120 - Affine texture mapper core
# FUN_10008800 - Affine mapper with color key
#
# ── Palette Converters (0x1003ac60 - 0x1003d1a8) ──
# FUN_1003ac60 - Init global palette source
# FUN_1003ac90 - Uninit palette source
# FUN_1003ad00 - Init global palette dest
# FUN_1003ad30 - Uninit palette dest
# FUN_1003ada0 - Init global palette shared
# FUN_1003add0 - Uninit palette shared
# FUN_1003ae30 - Init global palette global
# FUN_1003aec0 - Palette16To16 ctor init
# FUN_1003af40 - Palette16To16 scalar dtor
# FUN_1003af60 - Palette16To16 scalar dtor
# FUN_1003af70 - Palette16To16 scalar dtor
# FUN_1003b390 - Palette::build (from palette data)
# FUN_1003b4e0 - Palette::build (with brightness)
# FUN_1003b590 - Palette::build (with per-channel scale)
# FUN_1003b8f0 - Palette16To16 source ctor
# FUN_1003b940 - Palette16To16 dest ctor
# FUN_1003b990 - Palette16To16 shared ctor
# FUN_1003b9e0 - Palette16To16 dtor
# FUN_1003bb20 - Palette::setPaletteData (source)
# FUN_1003bb80 - Palette::setPaletteData (dest)
# FUN_1003bbf0 - Palette::setPaletteData (shared)
# FUN_1003bc60 - Palette::setPaletteData (global)
#
# ── PNG Reader / libpng interface (0x1003bd90 - 0x1003f700) ──
# FUN_1003bd90 - PngReader ctor
# FUN_1003be00 - PngReader scalar deleting dtor
# FUN_1003c200 - Get PNG error message
# FUN_1003c2a0 - PNG read callback init
# FUN_1003c2c0 - PNG error handler
# FUN_1003c2e0 - PngReader dtor
# FUN_1003c320 - PNG read function
# FUN_1003c350 - PNG output function
# FUN_1003c360 - PngReader::readPng (main reader)
# FUN_1003c840 - Read PNG chunk
# FUN_1003c880 - Process PNG chunk
# FUN_1003c8a0 - Validate PNG signature
# FUN_1003c900 - Decode IHDR
# FUN_1003c960 - Process PLTE
# FUN_1003ca00 - Process tRNS
# FUN_1003ca20 - Process bKGD
# FUN_1003ca40 - Process pHYs
# FUN_1003ca60 - Process gAMA
# FUN_1003ca80 - Process sBIT
# FUN_1003caa0 - Process sRGB
# FUN_1003cac0 - Process cHRM
# FUN_1003cae0 - Process IDAT
# FUN_1003cb00 - Process IEND
# FUN_1003cb20 - Process tEXt
# FUN_1003de30 - Set PNG color conversion
# FUN_1003de90 - Decode IHDR parameters
# FUN_1003e0a0 - Decode PLTE palette
# FUN_1003e130 - Process row (apply filters)
# FUN_1003e360 - Filter None
# FUN_1003e370 - Filter Sub
# FUN_1003e390 - Filter Up
# FUN_1003e3c0 - Filter Average
# FUN_1003e3f0 - Filter Paeth
# FUN_1003e420 - Apply all filters
# FUN_1003e470 - Allocate output buffer
# FUN_1003e680 - Convert palette to 16-bit
# FUN_1003e750 - Set up palette LUT
# FUN_1003e840 - Read chunk helper
# FUN_1003e880 - CRC checking helper
# FUN_1003e890 - Read and validate chunk
# FUN_1003f2b0 - Process all chunks
# FUN_1003f700 - Load PNG file
#
# ── Memory Allocator (0x10042980 - 0x10042f50) ──
# FUN_10042980 - malloc wrapper
# FUN_100429f0 - free wrapper
# FUN_10042a10 - Memory reset
# FUN_10042b90 - Memory read
# FUN_10042bc0 - Memory init
# FUN_10042c60 - Alloc pool
# FUN_10042cb0 - Free pool
# FUN_10042cc0 - Pool alloc
# FUN_10042d00 - Pool free
# FUN_10042d90 - Set error message
# FUN_10042f30 - Init jump buffer
# FUN_10042f50 - Read BE32
# FUN_10042fa0 - Read file data
# FUN_100430f0 - Process IHDR chunk
# FUN_10043350 - Process PLTE chunk
# FUN_100434b0 - Process IDAT chunk
# FUN_100437f0 - Process tEXt chunk
# FUN_100442b0 - Process IEND chunk
#
# ── Utilities (0x10046490 - 0x10046558) ──
# FUN_10046490 - operator delete
# FUN_10046558 - Register function/trampoline
#
# ── Zlib Stream (0x1004b134 - 0x10051010) ──
# FUN_1004b134 - zlib allocator (default)
# FUN_1004e40d - 32-bit multiply with overflow
# FUN_1004e48c - Bit reader shift left
# FUN_1004e4ba - Bit reader shift right
# FUN_1004f27d - Inflate fixed block
# FUN_1004f494 - Inflate table builder
# FUN_1004f4ba - Distance table accessor
# FUN_1004f4bd - Length table accessor
# FUN_1004f4cb - Code length table accessor
# FUN_1004f4da - Distance code table
# FUN_1004f4fd - Fixed length table
# FUN_1004f560 - Copy match (LZ77)
# FUN_1004f58f - Output byte
# FUN_1004f7af - Huffman decode
# FUN_1004f82b - Set window size
# FUN_1004f8b0 - Reset inflate stream
# FUN_1004f900 - End inflate stream
# FUN_1004f950 - inflateInit_ equivalent
# FUN_1004fa60 - inflateInit with size 15
# FUN_1004fa80 - inflate (main decompressor)
# FUN_1004ffd0 - Build Huffman tree
# FUN_10050070 - Allocate Huffman table
# FUN_100500e0 - Process stored/dynamic block
# FUN_10050e10 - Free Huffman tree
# FUN_10050e50 - CRC32 (actually Adler-32)
# FUN_10050f80 - Default zlib allocator
# FUN_10050fb0 - Build dynamic Huffman table
# FUN_10051010 - Canonical Huffman table builder
# FUN_100514d0 - Build length/distance trees
# FUN_100515c0 - Compute table sizes
# FUN_10051720 - Free via allocator
# FUN_10051730 - Inflate helper
# FUN_10051760 - Allocate trees
# FUN_100517a0 - Process deflate block
# FUN_10051f30 - Free trees
# FUN_10051f50 - Save state and return
#
# ── Exception Handling / SEH Stubs (0x100523f0 - 0x100525b0) ──
# Unwind_100523f0 through Unwind_100525b0 (17 SEH unwind handlers)
