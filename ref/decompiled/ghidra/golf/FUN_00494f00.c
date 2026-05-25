/* Ghidra decompiled: golf.exe */
/* Function: FUN_00494f00 @ 0x00494F00 */


void __thiscall FUN_00494f00(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  
  iVar4 = param_4;
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return;
  }
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xcc))();
  if (param_2 < *piVar2) {
    return;
  }
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
  }
  iVar1 = DAT_0083ad0c;
  if (*(int *)(iVar3 + 8) <= param_2) {
    return;
  }
  if (param_3 == param_4) {
    return;
  }
  if (((param_5 & 0x80000000) != 0) || (DAT_0083ad0c == 0)) goto LAB_00494fbc;
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xe4))();
  }
  if (*(int *)(iVar3 + 4) == 0) {
    piVar2 = *(int **)(iVar1 + 4);
    if (piVar2 == (int *)0x0) goto LAB_00494fa6;
    iVar3 = (**(code **)(*piVar2 + 0x18))();
  }
  else {
    if (*(int *)(iVar3 + 4) != 1) {
      return;
    }
    piVar2 = *(int **)(iVar1 + 4);
    if (piVar2 == (int *)0x0) {
LAB_00494fa6:
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(*piVar2 + 0x1c))();
    }
  }
  param_5 = (uint)*(ushort *)(iVar3 + (param_5 & 0xff) * 2);
LAB_00494fbc:
  if (param_4 < param_3) {
    param_4 = param_3;
    param_3 = iVar4;
  }
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
  }
  if (param_3 < *(int *)(iVar4 + 0xc)) {
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
    }
    if (*(int *)(iVar4 + 4) <= param_4) {
      if (*(int **)(param_1 + 4) == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
      }
      if (param_3 < *(int *)(iVar4 + 4)) {
        if (*(int **)(param_1 + 4) == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
        }
        param_3 = *(int *)(iVar4 + 4);
      }
      if (*(int **)(param_1 + 4) == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
      }
      if (*(int *)(iVar4 + 0xc) <= param_4) {
        if (*(int **)(param_1 + 4) == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
        }
        param_4 = *(int *)(iVar4 + 0xc) + -1;
      }
      if ((*(int **)(param_1 + 4) != (int *)0x0) &&
         (puVar5 = (undefined2 *)(**(code **)(**(int **)(param_1 + 4) + 0x1c))(param_2,param_3),
         puVar5 != (undefined2 *)0x0)) {
        if (*(int **)(param_1 + 4) == (int *)0x0) {
          param_2 = 0;
        }
        else {
          param_2 = (**(code **)(**(int **)(param_1 + 4) + 0xe0))();
        }
        uVar6 = (param_4 - param_3) + 1U >> 1;
        do {
          *puVar5 = (undefined2)param_5;
          puVar5 = puVar5 + param_2 * 2;
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

