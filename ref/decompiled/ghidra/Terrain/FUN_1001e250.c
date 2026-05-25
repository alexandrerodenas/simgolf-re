/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001e250 @ 0x1001E250 */


undefined4 __cdecl FUN_1001e250(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  undefined **ppuVar3;
  
  DAT_101122c0 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_101122c0 == (HANDLE)0x0) {
    uVar2 = 0;
  }
  else {
    DAT_101122d0 = FUN_1001e020();
    if (DAT_101122d0 == 3) {
      bVar1 = ___sbh_heap_init(0x3f8);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        HeapDestroy(DAT_101122c0);
        return 0;
      }
    }
    else if ((DAT_101122d0 == 2) && (ppuVar3 = FUN_1001d0e0(), ppuVar3 == (undefined **)0x0)) {
      HeapDestroy(DAT_101122c0);
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

