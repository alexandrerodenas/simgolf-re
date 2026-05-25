/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a0350 @ 0x004A0350 */


undefined4 __thiscall FUN_004a0350(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int local_10;
  int local_4;
  
  iVar3 = 0;
  bVar2 = false;
  bVar1 = false;
  if (0 < param_1[0x21]) {
    piVar6 = param_1;
    bVar2 = false;
    do {
      piVar6 = piVar6 + 1;
      if (*(int *)(*piVar6 + 0x5e8) == param_1[0x22]) {
        bVar1 = true;
        local_4 = iVar3;
      }
      if (*(int *)(*piVar6 + 0x5e8) == param_2) {
        bVar2 = true;
        local_10 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[0x21]);
  }
  if ((param_1[0x23] & 2U) == 0) {
LAB_004a03d7:
    if ((param_1[0x22] == param_2) && ((param_1[0x23] & 1U) == 0)) goto LAB_004a04ea;
  }
  else if (param_1[0x22] == param_2) {
    param_1[0x22] = -1;
    bVar2 = false;
    goto LAB_004a03d7;
  }
  if (bVar1) {
    FUN_004890e0(0);
    (**(code **)(*(int *)param_1[local_4 + 1] + 0x120))();
  }
  if (bVar2) {
    FUN_004890e0(1);
    (**(code **)(*(int *)param_1[local_10 + 1] + 0x120))();
    param_1[0x22] = param_2;
  }
  else {
    param_1[0x22] = -1;
  }
  if ((param_1[0x25] == 0) && (param_1[0x21] != 0)) {
    if (bVar2) {
      uVar5 = *(undefined4 *)(param_1[local_10 + 1] + 0x5e8);
    }
    else {
      uVar5 = 0xffffffff;
    }
    if (bVar1) {
      uVar4 = *(undefined4 *)(param_1[local_4 + 1] + 0x5e8);
    }
    else {
      uVar4 = 0xffffffff;
    }
    (**(code **)(**(int **)(param_1[1] + 0x130) + 0xe0))(uVar4,uVar5);
    if (param_1[0x21] != 0) {
      if (bVar2) {
        uVar5 = *(undefined4 *)(param_1[local_10 + 1] + 0x5e8);
      }
      else {
        uVar5 = 0xffffffff;
      }
      if (bVar1) {
        uVar4 = *(undefined4 *)(param_1[local_4 + 1] + 0x5e8);
      }
      else {
        uVar4 = 0xffffffff;
      }
      (**(code **)(**(int **)(param_1[1] + 0x130) + 0xdc))(param_1[0x24],uVar4,uVar5);
    }
  }
LAB_004a04ea:
  iVar3 = 0;
  piVar6 = param_1;
  if (0 < param_1[0x21]) {
    do {
      piVar6 = piVar6 + 1;
      if (*(int *)(*piVar6 + 0x5e4) != 0) {
        *(undefined4 *)(*piVar6 + 0x5e4) = 0;
        (**(code **)(*(int *)*piVar6 + 0x120))();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[0x21]);
  }
  return 0;
}

