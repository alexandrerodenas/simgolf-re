/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10096b30 @ 0x10096B30 */
/* Body size: 304 addresses */


undefined4 FUN_10096b30(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (DAT_10128990 == 0) {
    PTR_DAT_10126a08 = *(undefined **)PTR_PTR_10126a38;
    PTR_DAT_10126a0c = *(undefined **)(PTR_PTR_10126a38 + 4);
    PTR_DAT_10126a10 = *(undefined **)(PTR_PTR_10126a38 + 8);
    PTR_PTR_10126a38 = (undefined *)&PTR_DAT_10126a08;
    FUN_10096ef0((int)DAT_101289bc);
    __free_dbg(DAT_101289bc,2);
    DAT_101289bc = (undefined4 *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)__calloc_dbg(1,0x30,2,"initmon.c",0x4a);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar3 = FUN_10096c60((int)puVar1);
      if (uVar3 == 0) {
        *puVar1 = *(undefined4 *)PTR_PTR_10126a38;
        puVar1[1] = *(undefined4 *)(PTR_PTR_10126a38 + 4);
        puVar1[2] = *(undefined4 *)(PTR_PTR_10126a38 + 8);
        PTR_PTR_10126a38 = (undefined *)puVar1;
        FUN_10096ef0((int)DAT_101289bc);
        __free_dbg(DAT_101289bc,2);
        uVar2 = 0;
        DAT_101289bc = puVar1;
      }
      else {
        FUN_10096ef0((int)puVar1);
        __free_dbg(puVar1,2);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

