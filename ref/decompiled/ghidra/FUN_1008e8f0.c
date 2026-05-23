/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008e8f0 @ 0x1008E8F0 */
/* Body size: 147 addresses */


uint __cdecl FUN_1008e8f0(uint param_1)

{
  bool bVar1;
  
  if (DAT_1012898c == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      param_1 = param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_10129bb0);
    bVar1 = DAT_10129ba0 == 0;
    if (!bVar1) {
      InterlockedDecrement(&DAT_10129bb0);
      FUN_100833f0(0x13);
    }
    param_1 = FUN_1008e990(param_1);
    if (bVar1) {
      InterlockedDecrement(&DAT_10129bb0);
    }
    else {
      FUN_10083490(0x13);
    }
  }
  return param_1;
}

