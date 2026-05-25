/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10083230 @ 0x10083230 */


void __cdecl FUN_10083230(undefined **param_1)

{
  if ((param_1 < &PTR_DAT_101233b0) || (&DAT_10123610 < param_1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_100833f0(((int)(param_1 + -0x4048cec) >> 5) + 0x1c);
  }
  return;
}

