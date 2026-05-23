/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100832a0 @ 0x100832A0 */
/* Body size: 61 addresses */


void __cdecl FUN_100832a0(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_101233b0) || (&DAT_10123610 < param_1)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_10083490(((int)(param_1 + -0x4048cec) >> 5) + 0x1c);
  }
  return;
}

