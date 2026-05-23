/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002e950 @ 0x1002E950 */
/* Body size: 304 addresses */


undefined4 FUN_1002e950(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (DAT_101109ac == 0) {
    PTR_DAT_100675c8 = *(undefined **)PTR_PTR_100675f8;
    PTR_DAT_100675cc = *(undefined **)(PTR_PTR_100675f8 + 4);
    PTR_DAT_100675d0 = *(undefined **)(PTR_PTR_100675f8 + 8);
    PTR_PTR_100675f8 = (undefined *)&PTR_DAT_100675c8;
    FUN_1002ed10((int)DAT_101109e4);
    __free_dbg(DAT_101109e4,2);
    DAT_101109e4 = (undefined4 *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)__calloc_dbg(1,0x30,2,"initmon.c",0x4a);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar3 = FUN_1002ea80((int)puVar1);
      if (uVar3 == 0) {
        *puVar1 = *(undefined4 *)PTR_PTR_100675f8;
        puVar1[1] = *(undefined4 *)(PTR_PTR_100675f8 + 4);
        puVar1[2] = *(undefined4 *)(PTR_PTR_100675f8 + 8);
        PTR_PTR_100675f8 = (undefined *)puVar1;
        FUN_1002ed10((int)DAT_101109e4);
        __free_dbg(DAT_101109e4,2);
        uVar2 = 0;
        DAT_101109e4 = puVar1;
      }
      else {
        FUN_1002ed10((int)puVar1);
        __free_dbg(puVar1,2);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

