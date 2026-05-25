/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048c6e0 @ 0x0048C6E0 */


int __fastcall FUN_0048c6e0(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar4 = FUN_004801f0();
  FUN_00489950();
  iVar5 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0xf4 + param_1);
  FUN_0048a120();
  if (iVar5 == *(int *)(param_1 + 0x14)) {
    FUN_00489f50(iVar1,1);
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 4) + 4) + param_1;
    iVar5 = *(int *)(*(int *)(param_1 + 4) + 8) + param_1;
    iVar5 = FUN_0048a5d0(*(undefined4 *)(iVar6 + 0x134),*(undefined4 *)(iVar5 + 0x2c),
                         *(undefined4 *)(iVar5 + 0x30),*(undefined4 *)(iVar6 + 0xa0));
    if (iVar5 != 0) {
      return iVar5;
    }
    if (iVar1 == -1) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = 0;
    }
    FUN_00489f50(uVar7,1);
    ReleaseCapture();
    if (iVar4 != 0) {
      FUN_0047b670(0);
    }
  }
  iVar5 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)(*(int *)(iVar5 + 4) + param_1 + 0xa0);
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 4) != 0) {
      FUN_0047ba50(0,*(int *)(*(int *)(iVar5 + 8) + 0xd4 + param_1) /
                     *(int *)(*(int *)(iVar5 + 8) + param_1 + 0x60) + -1);
      FUN_0047ba90(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0x5c + param_1));
    }
  }
  else {
    FUN_0047ba30(0,*(int *)(*(int *)(iVar5 + 8) + 0xd4 + param_1) + -1);
    FUN_0047ba70(*(int *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0x60 + param_1) + -1);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar7 = FUN_00489950();
    (**(code **)(param_1 + 0x50))(uVar7);
  }
  piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x134 + param_1);
  if (piVar3 != (int *)0x0) {
    iVar5 = *piVar3;
    uVar7 = FUN_00489950();
    (**(code **)(iVar5 + 0x100))(uVar7);
  }
  iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x134 + param_1);
  if ((iVar5 != 0) && (piVar3 = *(int **)(iVar5 + 0x94), piVar3 != (int *)0x0)) {
    (**(code **)(*piVar3 + 0x1c))();
  }
  if (iVar4 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 4 + param_1) + 0x120))();
  }
  return 0;
}

