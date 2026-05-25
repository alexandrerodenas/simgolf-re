/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10096800 @ 0x10096800 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10096800(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = (uint)DAT_101289e2;
  if (DAT_10128994 == 0) {
    __free_dbg(DAT_101289b0,2);
    __free_dbg(DAT_101289b4,2);
    __free_dbg(DAT_101289b8,2);
    DAT_101289b0 = (void *)0x0;
    DAT_101289b4 = (void *)0x0;
    DAT_101289b8 = (char *)0x0;
    uVar5 = __malloc_dbg(2,2,0x1011ff14,0x88);
    *(undefined4 *)PTR_PTR_10126a38 = uVar5;
    if (*(int *)PTR_PTR_10126a38 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      FUN_1007f760(*(uint **)PTR_PTR_10126a38,(uint *)&DAT_1011feac);
      uVar5 = __malloc_dbg(2,2,0x1011ff14,0x8d);
      *(undefined4 *)(PTR_PTR_10126a38 + 4) = uVar5;
      if (*(int *)(PTR_PTR_10126a38 + 4) == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        **(undefined1 **)(PTR_PTR_10126a38 + 4) = 0;
        uVar5 = __malloc_dbg(2,2,0x1011ff14,0x92);
        *(undefined4 *)(PTR_PTR_10126a38 + 8) = uVar5;
        if (*(int *)(PTR_PTR_10126a38 + 8) == 0) {
          uVar5 = 0xffffffff;
        }
        else {
          **(undefined1 **)(PTR_PTR_10126a38 + 8) = 0;
          DAT_1012599c = **(undefined1 **)PTR_PTR_10126a38;
          _DAT_101259a0 = 1;
          uVar5 = 0;
        }
      }
    }
  }
  else {
    iVar2 = FUN_10099c30(1,uVar1,0xe,(int *)&DAT_101289b0);
    iVar3 = FUN_10099c30(1,uVar1,0xf,(int *)&DAT_101289b4);
    iVar4 = FUN_10099c30(1,uVar1,0x10,(int *)&DAT_101289b8);
    fix_grouping(DAT_101289b8);
    if ((iVar2 == 0 && iVar3 == 0) && iVar4 == 0) {
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
      uVar5 = 0;
    }
    else {
      __free_dbg(DAT_101289b0,2);
      __free_dbg(DAT_101289b4,2);
      __free_dbg(DAT_101289b8,2);
      DAT_101289b0 = (void *)0x0;
      DAT_101289b4 = (void *)0x0;
      DAT_101289b8 = (char *)0x0;
      uVar5 = 0xffffffff;
    }
  }
  return uVar5;
}

