/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10089680 @ 0x10089680 */
/* Body size: 141 addresses */


undefined4 __cdecl FUN_10089680(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  undefined **ppuVar3;
  
  DAT_10129fa0 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10129fa0 == (HANDLE)0x0) {
    uVar2 = 0;
  }
  else {
    DAT_10129fb0 = FUN_10089450();
    if (DAT_10129fb0 == 3) {
      bVar1 = ___sbh_heap_init(0x3f8);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        HeapDestroy(DAT_10129fa0);
        return 0;
      }
    }
    else if ((DAT_10129fb0 == 2) && (ppuVar3 = FUN_10088510(), ppuVar3 == (undefined **)0x0)) {
      HeapDestroy(DAT_10129fa0);
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

