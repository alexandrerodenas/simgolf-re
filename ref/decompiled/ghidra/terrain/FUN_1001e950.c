/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001e950 @ 0x1001E950 */
/* Body size: 61 addresses */


void __cdecl FUN_1001e950(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_10066278) || (&DAT_100664d8 < param_1)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_10019eb0(((int)(param_1 + -0x401989e) >> 5) + 0x1c);
  }
  return;
}

