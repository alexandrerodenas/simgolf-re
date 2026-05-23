/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003ae30 @ 0x1003AE30 */
/* Body size: 50 addresses */


undefined4 FUN_1003ae30(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_10057d28);
  }
  else if (param_2 == 1) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_10057d28);
    return 1;
  }
  return 1;
}

