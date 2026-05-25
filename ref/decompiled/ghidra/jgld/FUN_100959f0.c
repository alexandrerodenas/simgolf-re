/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100959f0 @ 0x100959F0 */


uint __cdecl FUN_100959f0(uint param_1)

{
  bool bVar1;
  
  if (DAT_1012898c == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      param_1 = param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_10129bb0);
    bVar1 = DAT_10129ba0 == 0;
    if (!bVar1) {
      InterlockedDecrement(&DAT_10129bb0);
      FUN_100833f0(0x13);
    }
    param_1 = FUN_10095a90(param_1);
    if (bVar1) {
      InterlockedDecrement(&DAT_10129bb0);
    }
    else {
      FUN_10083490(0x13);
    }
  }
  return param_1;
}

