/* Ghidra decompiled: golf.exe */
/* Function: FUN_00489f50 @ 0x00489F50 */
/* Body size: 458 addresses */


void __thiscall FUN_00489f50(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  bVar3 = false;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
  if ((param_2 == *(int *)(iVar1 + 0xf4 + param_1)) && (*(int *)(param_1 + 0x10) == 0)) {
    return;
  }
  *(int *)(iVar1 + 0xf4 + param_1) = param_2;
  if (param_2 < 0) goto LAB_0048a0ff;
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(iVar1 + 8) + param_1;
  if (*(int *)(iVar4 + 0xf4) < *(int *)(param_1 + 0x28)) {
    bVar3 = true;
    do {
      if (*(int *)(iVar4 + 0x5c) < 2) {
        iVar4 = 1;
      }
      else {
        iVar4 = *(int *)(iVar4 + 0x60);
      }
      iVar4 = *(int *)(param_1 + 0x28) - iVar4;
      *(int *)(param_1 + 0x28) = iVar4;
      if (iVar4 < 0) {
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      iVar4 = *(int *)(iVar1 + 8) + param_1;
    } while (*(int *)(iVar4 + 0xf4) < *(int *)(param_1 + 0x28));
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar5 = *(int *)(iVar1 + 8) + param_1;
  if (iVar4 < *(int *)(iVar5 + 0xd4)) {
    if (*(int *)(iVar5 + 0xf4) < iVar4 + *(int *)(param_1 + 0x28)) goto LAB_0048a023;
    do {
      if (*(int *)(iVar5 + 0x5c) < 2) {
        iVar8 = 1;
      }
      else {
        iVar8 = *(int *)(iVar5 + 0x60);
      }
      iVar8 = *(int *)(param_1 + 0x28) + iVar8;
      *(int *)(param_1 + 0x28) = iVar8;
      iVar5 = *(int *)(iVar1 + 8) + param_1;
    } while (iVar8 + iVar4 <= *(int *)(iVar5 + 0xf4));
LAB_0048a027:
    if (iVar4 < *(int *)(*(int *)(iVar1 + 8) + 0xd4 + param_1)) {
      if (*(int *)(*(int *)(iVar1 + 8) + param_1 + 0x5c) < 2) {
        FUN_0047b9f0(*(undefined4 *)(param_1 + 0x28));
      }
      else {
        FUN_0047ba10(*(undefined4 *)(param_1 + 0x28));
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
LAB_0048a023:
    if (bVar3) goto LAB_0048a027;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar6 = FUN_00489950();
    (**(code **)(param_1 + 0x50))(uVar6);
  }
  if (param_3 != 0) {
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x134 + param_1);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar6 = FUN_00489a30(param_2);
      (**(code **)(iVar1 + 0x100))(uVar6);
    }
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x134 + param_1);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar6 = DAT_0083b654;
      uVar7 = FUN_00489a30(param_2);
      (**(code **)(iVar1 + 0xfc))(uVar7,uVar6);
    }
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x134 + param_1);
    if ((iVar1 != 0) && (piVar2 = *(int **)(iVar1 + 0x94), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x1c))();
    }
  }
LAB_0048a0ff:
  (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + 4 + param_1) + 0x120))();
  return;
}

