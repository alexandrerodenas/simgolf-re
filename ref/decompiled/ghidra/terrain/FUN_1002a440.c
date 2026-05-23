/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002a440 @ 0x1002A440 */
/* Body size: 147 addresses */


uint __cdecl FUN_1002a440(uint param_1)

{
  void *this;
  bool bVar1;
  
  if (DAT_101109a8 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      param_1 = param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_10110b70);
    bVar1 = DAT_10110b60 == 0;
    if (!bVar1) {
      InterlockedDecrement(&DAT_10110b70);
      FUN_10019e10(this,0x13);
    }
    param_1 = FUN_1002a4e0(param_1);
    if (bVar1) {
      InterlockedDecrement(&DAT_10110b70);
    }
    else {
      FUN_10019eb0(0x13);
    }
  }
  return param_1;
}

