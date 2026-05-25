/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002c585 @ 0x3002C585 */


undefined4 __cdecl FUN_3002c585(int param_1)

{
  undefined **ppuVar1;
  
  DAT_3004f750 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_3004f750 != (HANDLE)0x0) {
    DAT_3004f754 = FUN_3002c43d();
    if (DAT_3004f754 == 3) {
      ppuVar1 = (undefined **)FUN_3002c68a(0x3f8);
    }
    else {
      if (DAT_3004f754 != 2) {
        return 1;
      }
      ppuVar1 = FUN_3002cedb();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_3004f750);
  }
  return 0;
}

