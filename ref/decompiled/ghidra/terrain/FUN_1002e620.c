/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002e620 @ 0x1002E620 */
/* Body size: 678 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1002e620(void)

{
  undefined *this;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  void *this_00;
  void *this_01;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = (uint)DAT_10110a0a;
  if (DAT_101109b0 == 0) {
    __free_dbg(DAT_101109d8,2);
    __free_dbg(DAT_101109dc,2);
    __free_dbg(DAT_101109e0,2);
    DAT_101109d8 = (void *)0x0;
    DAT_101109dc = (void *)0x0;
    DAT_101109e0 = (char *)0x0;
    uVar3 = __malloc_dbg(this_00,2,2,"initnum.c",0x88);
    *(undefined4 *)PTR_PTR_100675f8 = uVar3;
    if (*(int *)PTR_PTR_100675f8 == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      FUN_10018580(*(uint **)PTR_PTR_100675f8,(uint *)&DAT_100608bc);
      uVar3 = __malloc_dbg(this_01,2,2,"initnum.c",0x8d);
      *(undefined4 *)(PTR_PTR_100675f8 + 4) = uVar3;
      this = PTR_PTR_100675f8;
      if (*(int *)(PTR_PTR_100675f8 + 4) == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        **(undefined1 **)(PTR_PTR_100675f8 + 4) = 0;
        uVar3 = __malloc_dbg(this,2,2,"initnum.c",0x92);
        *(undefined4 *)(PTR_PTR_100675f8 + 8) = uVar3;
        if (*(int *)(PTR_PTR_100675f8 + 8) == 0) {
          uVar3 = 0xffffffff;
        }
        else {
          **(undefined1 **)(PTR_PTR_100675f8 + 8) = 0;
          DAT_1006626c = **(undefined1 **)PTR_PTR_100675f8;
          _DAT_10066270 = 1;
          uVar3 = 0;
        }
      }
    }
  }
  else {
    uVar1 = FUN_10031900(1,uVar2,0xe,(int *)&DAT_101109d8);
    uVar4 = uVar4 | uVar1;
    uVar1 = FUN_10031900(1,uVar2,0xf,(int *)&DAT_101109dc);
    uVar4 = uVar4 | uVar1;
    uVar2 = FUN_10031900(1,uVar2,0x10,(int *)&DAT_101109e0);
    uVar4 = uVar4 | uVar2;
    fix_grouping(DAT_101109e0);
    if (uVar4 == 0) {
      if (*(undefined **)PTR_PTR_100675f8 != &DAT_100675c0) {
        __free_dbg(*(void **)PTR_PTR_100675f8,2);
        __free_dbg(*(void **)(PTR_PTR_100675f8 + 4),2);
        __free_dbg(*(void **)(PTR_PTR_100675f8 + 8),2);
      }
      *(void **)PTR_PTR_100675f8 = DAT_101109d8;
      *(void **)(PTR_PTR_100675f8 + 4) = DAT_101109dc;
      *(char **)(PTR_PTR_100675f8 + 8) = DAT_101109e0;
      DAT_1006626c = **(undefined1 **)PTR_PTR_100675f8;
      _DAT_10066270 = 1;
      uVar3 = 0;
    }
    else {
      __free_dbg(DAT_101109d8,2);
      __free_dbg(DAT_101109dc,2);
      __free_dbg(DAT_101109e0,2);
      DAT_101109d8 = (void *)0x0;
      DAT_101109dc = (void *)0x0;
      DAT_101109e0 = (char *)0x0;
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

