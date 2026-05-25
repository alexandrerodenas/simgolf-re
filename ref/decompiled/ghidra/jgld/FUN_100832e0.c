/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100832e0 @ 0x100832E0 */


void __cdecl FUN_100832e0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10083490(param_1 + 0x1c);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}

