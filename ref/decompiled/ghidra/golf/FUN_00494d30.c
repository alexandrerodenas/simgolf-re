/* Ghidra decompiled: golf.exe */
/* Function: FUN_00494d30 @ 0x00494D30 */


void __thiscall FUN_00494d30(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 *puVar5;
  uint uVar6;
  
  iVar3 = param_3;
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
  if (param_4 < *(int *)(iVar2 + 4)) {
    return;
  }
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
  }
  iVar1 = DAT_0083ad0c;
  if (*(int *)(iVar2 + 0xc) <= param_4) {
    return;
  }
  if (param_2 == param_3) {
    return;
  }
  if (((param_5 & 0x80000000) != 0) || (DAT_0083ad0c == 0)) goto LAB_00494dec;
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xe4))();
  }
  if (*(int *)(iVar2 + 4) == 0) {
    piVar4 = *(int **)(iVar1 + 4);
    if (piVar4 == (int *)0x0) goto LAB_00494dd6;
    iVar2 = (**(code **)(*piVar4 + 0x18))();
  }
  else {
    if (*(int *)(iVar2 + 4) != 1) {
      return;
    }
    piVar4 = *(int **)(iVar1 + 4);
    if (piVar4 == (int *)0x0) {
LAB_00494dd6:
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(*piVar4 + 0x1c))();
    }
  }
  param_5 = (uint)*(ushort *)(iVar2 + (param_5 & 0xff) * 2);
LAB_00494dec:
  if (param_3 < param_2) {
    param_3 = param_2;
    param_2 = iVar3;
  }
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
  }
  if (param_2 < *(int *)(iVar3 + 8)) {
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xcc))();
    }
    if (*piVar4 <= param_3) {
      if (*(int **)(param_1 + 4) == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xcc))();
      }
      if (param_2 < *piVar4) {
        if (*(int **)(param_1 + 4) == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xcc))();
        }
        param_2 = *piVar4;
      }
      if (*(int **)(param_1 + 4) == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
      }
      if (*(int *)(iVar3 + 8) <= param_3) {
        if (*(int **)(param_1 + 4) == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
        }
        param_3 = *(int *)(iVar3 + 8) + -1;
      }
      if ((*(int **)(param_1 + 4) != (int *)0x0) &&
         (puVar5 = (undefined2 *)(**(code **)(**(int **)(param_1 + 4) + 0x1c))(param_2,param_4),
         puVar5 != (undefined2 *)0x0)) {
        uVar6 = (param_3 - param_2) + 1U >> 1;
        do {
          *puVar5 = (undefined2)param_5;
          puVar5 = puVar5 + 2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        if (*(int **)(param_1 + 4) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 4) + 0x24))(1);
        }
      }
    }
  }
  return;
}

