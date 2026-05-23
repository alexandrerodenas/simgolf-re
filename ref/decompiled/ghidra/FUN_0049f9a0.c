/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049f9a0 @ 0x0049F9A0 */
/* Body size: 236 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0049f9a0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar1 = (int *)(param_1 + -0x1c);
  _DAT_0083ab2c = *(undefined4 *)(*(int *)(*(int *)(param_1 + -0x1c) + 4) + 0x114 + param_1);
  iVar4 = *(int *)(*piVar1 + 8) + param_1;
  iVar4 = FUN_00489a30((param_2 / (*(int *)(iVar4 + 0x4c) + *(int *)(iVar4 + 0x2c))) *
                       *(int *)(iVar4 + 0x40) +
                       param_3 / (*(int *)(iVar4 + 0x50) + *(int *)(iVar4 + 0x2c)));
  FUN_0049ee90(iVar4);
  iVar2 = FUN_00489a30(*(undefined4 *)(param_1 + -0x18));
  if (iVar2 != iVar4) {
    uVar5 = 0;
    uVar3 = FUN_0049f030(*(undefined4 *)(param_1 + -0x18));
    FUN_0049f370(*(undefined4 *)(param_1 + -0x18),uVar3,uVar5);
    uVar3 = FUN_004899d0(iVar4);
    *(undefined4 *)(param_1 + -0x18) = uVar3;
  }
  if (*(code **)(param_1 + -0x14) != (code *)0x0) {
    (**(code **)(param_1 + -0x14))(*(undefined4 *)(*(int *)(*piVar1 + 8) + 0xf0 + (int)piVar1));
  }
  uVar6 = 1;
  uVar3 = FUN_0049ef80(iVar4);
  uVar5 = FUN_004899d0(iVar4);
  FUN_0049f370(uVar5,uVar3,uVar6);
  FUN_00480ce0();
  return;
}

