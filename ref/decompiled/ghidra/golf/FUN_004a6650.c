/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a6650 @ 0x004A6650 */


int FUN_004a6650(int param_1)

{
  bool bVar1;
  
  if (DAT_00840b44 == 0) {
    if ((0x60 < param_1) && (param_1 < 0x7b)) {
      return param_1 + -0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_0084100c);
    bVar1 = DAT_00841008 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_0084100c);
      FUN_004a79b2(0x13);
    }
    param_1 = FUN_004a66bf(param_1);
    if (bVar1) {
      FUN_004a7a13(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_0084100c);
    }
  }
  return param_1;
}

