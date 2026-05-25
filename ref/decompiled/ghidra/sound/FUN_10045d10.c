/* Ghidra decompiled: sound.dll */
/* Function: FUN_10045d10 @ 0x10045D10 */


undefined4 __cdecl FUN_10045d10(int param_1)

{
  undefined **ppuVar1;
  
  DAT_100b5d10 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_100b5d10 != (HANDLE)0x0) {
    DAT_100b5d20 = FUN_10045bc8();
    if (DAT_100b5d20 == 3) {
      ppuVar1 = (undefined **)FUN_10045ee7(0x3f8);
    }
    else {
      if (DAT_100b5d20 != 2) {
        return 1;
      }
      ppuVar1 = FUN_10046e50();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_100b5d10);
  }
  return 0;
}

