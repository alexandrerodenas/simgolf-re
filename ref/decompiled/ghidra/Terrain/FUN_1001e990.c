/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001e990 @ 0x1001E990 */


void __cdecl FUN_1001e990(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10019eb0(param_1 + 0x1c);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}

