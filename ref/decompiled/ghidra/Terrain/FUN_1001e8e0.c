/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001e8e0 @ 0x1001E8E0 */


void __thiscall FUN_1001e8e0(void *this,undefined **param_1)

{
  if ((param_1 < &PTR_DAT_10066278) || (&DAT_100664d8 < param_1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  else {
    FUN_10019e10(this,((int)(param_1 + -0x401989e) >> 5) + 0x1c);
  }
  return;
}

