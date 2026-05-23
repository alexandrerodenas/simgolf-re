/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10096c60 @ 0x10096C60 */
/* Body size: 525 addresses */


uint __cdecl FUN_10096c60(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar1 = (uint)DAT_101289dc;
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_10099c30(1,uVar1,0x15,(int *)(param_1 + 0xc));
    uVar3 = FUN_10099c30(1,uVar1,0x14,(int *)(param_1 + 0x10));
    uVar4 = FUN_10099c30(1,uVar1,0x16,(int *)(param_1 + 0x14));
    uVar5 = FUN_10099c30(1,uVar1,0x17,(int *)(param_1 + 0x18));
    uVar6 = FUN_10099c30(1,uVar1,0x18,(int *)(param_1 + 0x1c));
    fix_grouping(*(char **)(param_1 + 0x1c));
    uVar7 = FUN_10099c30(1,uVar1,0x50,(int *)(param_1 + 0x20));
    uVar8 = FUN_10099c30(1,uVar1,0x51,(int *)(param_1 + 0x24));
    uVar9 = FUN_10099c30(0,uVar1,0x1a,(int *)(param_1 + 0x28));
    uVar10 = FUN_10099c30(0,uVar1,0x19,(int *)(param_1 + 0x29));
    uVar11 = FUN_10099c30(0,uVar1,0x54,(int *)(param_1 + 0x2a));
    uVar12 = FUN_10099c30(0,uVar1,0x55,(int *)(param_1 + 0x2b));
    uVar13 = FUN_10099c30(0,uVar1,0x56,(int *)(param_1 + 0x2c));
    uVar14 = FUN_10099c30(0,uVar1,0x57,(int *)(param_1 + 0x2d));
    uVar15 = FUN_10099c30(0,uVar1,0x52,(int *)(param_1 + 0x2e));
    uVar1 = FUN_10099c30(0,uVar1,0x53,(int *)(param_1 + 0x2f));
    uVar1 = uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12
            | uVar13 | uVar14 | uVar15 | uVar1;
  }
  return uVar1;
}

