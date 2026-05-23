/* Ghidra decompiled: golf.exe */
/* Function: FUN_004936a0 @ 0x004936A0 */
/* Body size: 897 addresses */


int __thiscall
FUN_004936a0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,
            uint param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if ((param_7 & 1) == 0) {
    bVar4 = *(byte *)(param_1 + 4) & 0xfe;
  }
  else {
    bVar4 = *(byte *)(param_1 + 4) | 1;
  }
  *(byte *)(param_1 + 4) = bVar4;
  if ((param_7 & 2) == 0) {
    bVar4 = bVar4 & 0xfb;
  }
  else {
    bVar4 = bVar4 | 4;
  }
  *(byte *)(param_1 + 4) = bVar4;
  if ((param_7 & 4) != 0) {
    *(byte *)(param_1 + 4) = bVar4 | 8;
  }
  iVar1 = DAT_0083d3ac;
  if ((DAT_0083d3ac == 0) && (iVar1 = *(int *)(param_1 + 0x3468), iVar1 == 0)) {
    return 7;
  }
  local_10 = param_2;
  local_8 = param_2 + param_4;
  local_4 = *(int *)(iVar1 + 0x1c) + param_3;
  local_c = param_3;
  iVar1 = FUN_00480870(&local_10,0,0xa0,param_6,0,0);
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    (**(code **)(*DAT_0083ad50 + 0xb4))();
    FUN_00476310(0x8000001f,0xffffffff,2,2);
    FUN_004762d0(DAT_0083b9c0,0,0,0);
  }
  if (DAT_0083d3ac != 0) {
    FUN_00493ef0(&DAT_0083d3ac);
  }
  iVar2 = local_c;
  iVar1 = *(int *)(param_1 + 0x3474);
  if (iVar1 == 0) {
    if (DAT_0083d3a0 != 0) {
      param_7 = *(int *)(DAT_0083d3a0 + 0x1c);
      iVar3 = *(int *)(DAT_0083d3a0 + 0x10);
      iVar1 = DAT_0083d3a0;
      uVar5 = DAT_0083d3a8;
      uVar6 = DAT_0083d3a4;
      goto LAB_004937b0;
    }
    param_7 = 0x19;
    iVar3 = 0x19;
  }
  else {
    param_7 = *(int *)(iVar1 + 0x1c);
    iVar3 = *(int *)(iVar1 + 0x10);
    uVar5 = *(undefined4 *)(param_1 + 0x347c);
    uVar6 = *(undefined4 *)(param_1 + 0x3478);
LAB_004937b0:
    *(int *)(param_1 + 0x2d14) = iVar1;
    *(undefined4 *)(param_1 + 0x2d18) = uVar6;
    *(undefined4 *)(param_1 + 0x2d1c) = uVar5;
  }
  iVar1 = local_c;
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    local_8 = (local_8 - iVar3) - local_10;
    local_10 = 0;
    local_c = 0;
    local_4 = local_4 - iVar2;
    iVar1 = 0;
    if (&stack0x00000000 != (undefined1 *)0x10) {
      *(undefined4 *)(param_1 + 0x26b4) = 0;
      *(undefined4 *)(param_1 + 0x26b8) = 0;
      *(int *)(param_1 + 0x26bc) = local_8;
      *(int *)(param_1 + 0x26c0) = local_4;
      iVar1 = local_c;
    }
  }
  local_c = iVar1;
  if (*(int **)(param_1 + 0x23b4) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x23b4) + 0xd8))();
  }
  if (*(int **)(param_1 + 0x23b4) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x23b4) + 0xdc))();
  }
  FUN_004887c0(0,1,(iVar1 - iVar3) + 5,(int)(iVar2 - param_7) / 2,iVar3 + 5,param_7,param_1 + 0x213c
               ,0);
  uVar6 = DAT_0083d3a8;
  uVar5 = DAT_0083d3a4;
  puVar7 = (undefined4 *)(param_1 + 0x3474);
  if (*(int *)(param_1 + 0x3474) == 0) {
    if (DAT_0083d3a0 == 0) goto LAB_004938fc;
    *(int *)(param_1 + 0x2d14) = DAT_0083d3a0;
    *(undefined4 *)(param_1 + 0x2d18) = uVar5;
    *(undefined4 *)(param_1 + 0x2d1c) = uVar6;
    puVar7 = &DAT_0083d3a0;
  }
  FUN_00494020(puVar7);
LAB_004938fc:
  *(int *)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0xc) = param_3;
  *(uint *)(param_1 + 0x18) = param_7;
  *(int *)(param_1 + 0x10) = iVar3;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 0x3480) = param_6;
  iVar1 = FUN_00493b90(iVar3,param_5);
  if ((*(byte *)(param_1 + 4) & 4) != 0) {
    *(byte *)(param_1 + 0x148c) = *(byte *)(param_1 + 0x148c) | 1;
  }
  *(undefined4 *)(param_1 + 0x2dd0) = 1;
  iVar2 = (**(code **)(*DAT_0083ad50 + 0xb4))();
  iVar3 = (**(code **)(*DAT_0083ad50 + 0xb4))();
  *(uint *)(param_1 + 0x2dcc) = (-(uint)(iVar2 != 1) & 0xffffa940) + 0x8000ad72;
  *(uint *)(param_1 + 0x2dc8) = (-(uint)(iVar3 != 1) & 0xffffa940) + 0x8000ad72;
  iVar2 = (**(code **)(*DAT_0083ad50 + 0xb4))();
  *(uint *)(param_1 + 0x2dac) = (-(uint)(iVar2 != 1) & 0xffffff40) + 0x80000185;
  FUN_0047d020(1);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2d98) + 4) + 0x2f00 + param_1) = 0;
  iVar2 = (**(code **)(*DAT_0083ad50 + 0xb4))();
  *(uint *)(param_1 + 0x2db0) = (-(uint)(iVar2 != 1) & 0xffff8100) + 0x8000fded;
  *(byte *)(param_1 + 0x2d9c) = *(byte *)(param_1 + 0x2d9c) | 1;
  return iVar1;
}

