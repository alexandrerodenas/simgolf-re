/* Ghidra decompiled: golf.exe */
/* Function: FUN_00493b90 @ 0x00493B90 */
/* Body size: 819 addresses */


undefined4 __thiscall FUN_00493b90(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_8;
  int local_4;
  
  local_4 = *(int *)(param_1 + 0x22e8);
  local_8 = *(int *)(param_1 + 0x22f4);
  if (((*(byte *)(param_1 + 4) & 4) != 0) &&
     (FUN_0047b170(&local_4,&local_8), (*(byte *)(param_1 + 4) & 4) != 0)) {
    if (*(int **)(param_1 + 0x23b4) == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x23b4) + 0xd8))();
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x1488) + 8);
    iVar4 = *(int *)(iVar3 + 0x14e8 + param_1);
    if (iVar4 == 0) {
      iVar4 = *(int *)(iVar3 + param_1 + 0x14b8);
    }
    FUN_0048e190((iVar1 + local_4) - iVar4,local_8);
    FUN_00493a60();
    return 0;
  }
  FUN_0047b420(local_4,*(int *)(param_1 + 0x18) + local_8);
  (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x2d98) + 4) + 0x2d98 + param_1) + 0xc))
            (param_2,param_3 - *(int *)(param_1 + 0x18),0,0);
  uVar2 = FUN_00493ed0();
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2d98) + 8) + 0x2dc8 + param_1) = uVar2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x2d98) + 4);
  *(int *)(*(int *)(*(int *)(param_1 + 0x2d98) + 8) + 0x2dcc + param_1) =
       *(int *)(iVar1 + 0x2f50 + param_1) - *(int *)(iVar1 + 0x2f48 + param_1);
  iVar1 = *(int *)(*(int *)(param_1 + 0x2d98) + 8);
  *(uint *)(iVar1 + param_1 + 0x2dbc) = *(uint *)(iVar1 + 0x2dbc + param_1) | 2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x2d98) + 8);
  *(uint *)(iVar1 + param_1 + 0x2dbc) = *(uint *)(iVar1 + 0x2dbc + param_1) | 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2d98) + 8) + 0x2de0 + param_1) = 0;
  *(undefined4 *)(param_1 + 0x2dd0) = 0;
  iVar1 = (**(code **)(*DAT_0083ad50 + 0xb4))();
  iVar3 = (**(code **)(*DAT_0083ad50 + 0xb4))();
  *(uint *)(param_1 + 0x2dcc) = (-(uint)(iVar1 != 1) & 0xffff91c0) + 0x8000dc71;
  *(uint *)(param_1 + 0x2dc8) = (-(uint)(iVar3 != 1) & 0xffff91c0) + 0x8000dc71;
  iVar1 = (**(code **)(*DAT_0083ad50 + 0xb4))();
  *(uint *)(param_1 + 0x2dac) = (-(uint)(iVar1 != 1) & 0xffffff00) + 0x8000021f;
  FUN_0047d020(0);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2d98) + 4) + 0x2f00 + param_1) = 0;
  iVar1 = (**(code **)(*DAT_0083ad50 + 0xb4))();
  *(uint *)(*(int *)(*(int *)(param_1 + 0x2d98) + 4) + 0x2f04 + param_1) =
       (-(uint)(iVar1 != 1) & 0xfffffe00) + 0x80000400;
  iVar1 = (**(code **)(*DAT_0083ad50 + 0xb4))();
  *(uint *)(param_1 + 0x2db0) = (-(uint)(iVar1 != 1) & 0xffff8040) + 0x8000ff91;
  iVar3 = (**(code **)(*DAT_0083ad50 + 0xb4))();
  iVar4 = (**(code **)(*DAT_0083ad50 + 0xb4))();
  iVar1 = *(int *)(*(int *)(param_1 + 0x2d98) + 4);
  *(uint *)(iVar1 + 0x2f28 + param_1) = (-(uint)(iVar3 != 1) & 0xfffffe00) + 0x80000400;
  *(uint *)(iVar1 + param_1 + 0x2f24) = (-(uint)(iVar4 != 1) & 0xfffffe00) + 0x80000400;
  (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x2d98) + 8) + 0x2d98 + param_1) + 4))
            (*(undefined4 *)(param_1 + 0x3480),*(undefined4 *)(param_1 + 8),
             *(undefined4 *)(param_1 + 0x22f4),0);
  if (*(int *)(param_1 + 0x3488) != 0) {
    FUN_00489ab0(*(int *)(param_1 + 0x3488),0,0);
  }
  FUN_0048c6e0();
  FUN_00493a60();
  return 0;
}

