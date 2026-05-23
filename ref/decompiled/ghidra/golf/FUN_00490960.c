/* Ghidra decompiled: golf.exe */
/* Function: FUN_00490960 @ 0x00490960 */
/* Body size: 215 addresses */


void __thiscall FUN_00490960(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x170] = 0;
  iVar1 = FUN_004a1370();
  if (iVar1 != 0) {
    if (param_1[0x595] == 1) {
      param_1[0x170] = *(int *)(*(int *)(param_1[0x536] + 8) + 0x15c8 + (int)param_1);
    }
    else {
      iVar1 = FUN_00489950();
      param_1[0x170] = iVar1;
    }
  }
  if (param_2 == -2) {
    if ((*(byte *)(param_1 + 0x7da) & 0x40) == 0) {
      if (param_1[0x595] != -1) {
        return;
      }
      param_1[0x170] = 0;
    }
    else {
      param_1[0x170] = -1;
    }
  }
  else if (param_2 != -1) {
    param_1[0x7f0] = param_2;
    goto LAB_004909f7;
  }
  param_1[0x7f0] = 0;
LAB_004909f7:
  if ((param_1[0x7da] & 0x100U) == 0) {
    if ((int *)param_1[0x164] == (int *)0x0) {
      (**(code **)(*param_1 + 0x110))();
    }
    else {
      (**(code **)(*(int *)param_1[0x164] + 0x110))();
    }
  }
  if ((param_1[0x7da] & 0x4000U) != 0) {
    (**(code **)(*param_1 + 8))();
  }
  return;
}

