/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001e920 @ 0x1001E920 */
/* Body size: 41 addresses */


void __thiscall FUN_1001e920(void *this,int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10019e10(this,param_1 + 0x1c);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}

