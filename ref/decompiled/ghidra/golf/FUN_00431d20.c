/* Ghidra decompiled: golf.exe */
/* Function: FUN_00431d20 @ 0x00431D20 */
/* Body size: 440 addresses */


void FUN_00431d20(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((((((param_1 != 0) && (param_2 != 0)) && (param_5 != 0)) &&
       (((param_6 != 0 && (param_7 != 0)) && ((-1 < param_3 && ((-1 < param_4 && (-1 < param_5))))))
       )) && (-1 < param_6)) && ((-1 < param_7 && (param_7 < 0x15)))) {
    if (*(int **)(param_2 + 4) == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(**(int **)(param_2 + 4) + 0xd8))();
    }
    if (*(int **)(param_2 + 4) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(**(int **)(param_2 + 4) + 0xdc))();
    }
    if (*(int **)(param_2 + 4) == (int *)0x0) {
      DAT_0056125c = 0;
    }
    else {
      DAT_0056125c = (**(code **)(**(int **)(param_2 + 4) + 0xe0))();
    }
    if (*(int **)(param_2 + 4) == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(**(code **)(**(int **)(param_2 + 4) + 0xe4))();
    }
    if ((((*piVar3 == 0x10) && (piVar3[1] == 0)) && (param_3 < iVar1)) && (param_4 < iVar2)) {
      if (iVar1 < param_3 + param_5) {
        param_5 = iVar1 - param_3;
      }
      if (iVar2 < param_4 + param_6) {
        param_6 = iVar2 - param_4;
      }
      iVar1 = FUN_004a614d(param_1,&DAT_004c7828);
      if (iVar1 != 0) {
        DAT_004c3074 = param_7;
        if (*(int **)(param_2 + 4) == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (**(code **)(**(int **)(param_2 + 4) + 0x10))();
        }
        DAT_00543cf0 = iVar2 + (DAT_0056125c * param_4 + param_3) * 2;
        DAT_0056a510 = _malloc((param_5 * 3) / param_7);
        FUN_004ae020(iVar1,param_5 / param_7,param_6 / param_7,&LAB_00431be0);
        if (DAT_0056a510 != (void *)0x0) {
          FUN_004a5007(DAT_0056a510);
        }
        FUN_004a609f(iVar1);
      }
    }
  }
  return;
}

