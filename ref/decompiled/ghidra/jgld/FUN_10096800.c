/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10096800 @ 0x10096800 */
/* Body size: 678 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10096800(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = (uint)DAT_101289e2;
  if (DAT_10128994 == 0) {
    __free_dbg(DAT_101289b0,2);
    __free_dbg(DAT_101289b4,2);
    __free_dbg(DAT_101289b8,2);
    DAT_101289b0 = (void *)0x0;
    DAT_101289b4 = (void *)0x0;
    DAT_101289b8 = (char *)0x0;
    uVar3 = __malloc_dbg(2,2,0x1011ff14,0x88);
    *(undefined4 *)PTR_PTR_10126a38 = uVar3;
    if (*(int *)PTR_PTR_10126a38 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      FUN_1007f760(*(uint **)PTR_PTR_10126a38,(uint *)&DAT_1011feac);
      uVar3 = __malloc_dbg(2,2,0x1011ff14,0x8d);
      *(undefined4 *)(PTR_PTR_10126a38 + 4) = uVar3;
      if (*(int *)(PTR_PTR_10126a38 + 4) == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        **(undefined1 **)(PTR_PTR_10126a38 + 4) = 0;
        uVar3 = __malloc_dbg(2,2,0x1011ff14,0x92);
        *(undefined4 *)(PTR_PTR_10126a38 + 8) = uVar3;
        if (*(int *)(PTR_PTR_10126a38 + 8) == 0) {
          uVar3 = 0xffffffff;
        }
        else {
          **(undefined1 **)(PTR_PTR_10126a38 + 8) = 0;
          DAT_1012599c = **(undefined1 **)PTR_PTR_10126a38;
          _DAT_101259a0 = 1;
          uVar3 = 0;
        }
      }
    }
  }
  else {
    uVar1 = FUN_10099c30(1,uVar2,0xe,(int *)&DAT_101289b0);
    uVar4 = uVar4 | uVar1;
    uVar1 = FUN_10099c30(1,uVar2,0xf,(int *)&DAT_101289b4);
    uVar4 = uVar4 | uVar1;
    uVar2 = FUN_10099c30(1,uVar2,0x10,(int *)&DAT_101289b8);
    uVar4 = uVar4 | uVar2;
    fix_grouping(DAT_101289b8);
    if (uVar4 == 0) {
      if (*(undefined **)PTR_PTR_10126a38 != &DAT_10126a00) {
        __free_dbg(*(void **)PTR_PTR_10126a38,2);
        __free_dbg(*(void **)(PTR_PTR_10126a38 + 4),2);
        __free_dbg(*(void **)(PTR_PTR_10126a38 + 8),2);
      }
      *(void **)PTR_PTR_10126a38 = DAT_101289b0;
      *(void **)(PTR_PTR_10126a38 + 4) = DAT_101289b4;
      *(char **)(PTR_PTR_10126a38 + 8) = DAT_101289b8;
      DAT_1012599c = **(undefined1 **)PTR_PTR_10126a38;
      _DAT_101259a0 = 1;
      uVar3 = 0;
    }
    else {
      __free_dbg(DAT_101289b0,2);
      __free_dbg(DAT_101289b4,2);
      __free_dbg(DAT_101289b8,2);
      DAT_101289b0 = (void *)0x0;
      DAT_101289b4 = (void *)0x0;
      DAT_101289b8 = (char *)0x0;
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

