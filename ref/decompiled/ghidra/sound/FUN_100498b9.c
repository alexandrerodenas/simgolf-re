/* Ghidra decompiled: sound.dll */
/* Function: FUN_100498b9 @ 0x100498B9 */


uint __cdecl FUN_100498b9(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_100b5744 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement(&DAT_100b58dc);
    bVar1 = DAT_100b58cc != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement(&DAT_100b58dc);
      this = (void *)0x13;
      FUN_10047710(0x13);
    }
    param_1 = FUN_10049928(this,param_1);
    if (bVar1) {
      FUN_10047771(0x13);
    }
    else {
      InterlockedDecrement(&DAT_100b58dc);
    }
  }
  return param_1;
}

