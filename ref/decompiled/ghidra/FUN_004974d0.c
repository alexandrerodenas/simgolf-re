/* Ghidra decompiled: golf.exe */
/* Function: FUN_004974d0 @ 0x004974D0 */
/* Body size: 1218 addresses */


void __thiscall FUN_004974d0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = param_2;
  *param_2 = *(int *)(param_1 + 0x5ac);
  param_2[1] = *(int *)(param_1 + 0x5b0);
  param_2[2] = *(int *)(param_1 + 0x5b4);
  param_2[3] = *(int *)(param_1 + 0x5b8);
  iVar5 = param_2[2] + -*param_2;
  iVar3 = *param_2 + -*param_2;
  param_2[2] = iVar5;
  *param_2 = iVar3;
  iVar4 = param_2[1] + -param_2[1];
  iVar6 = param_2[3] + -param_2[1];
  param_2[1] = iVar4;
  param_2[3] = iVar6;
  if (*(int *)(param_1 + 0x57c) != -1) {
    *param_2 = iVar3 + 1;
    param_2[2] = iVar5 + 1;
    param_2[1] = iVar4 + 1;
    param_2[3] = iVar6 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x59c);
  iVar4 = param_2[2] - *param_2;
  if (iVar3 == -1) {
    if ((*(byte *)(param_1 + 0x574) & 2) == 0) {
      iVar3 = iVar4 + 1;
      iVar4 = iVar4 * -3;
    }
    else {
      iVar3 = 0;
      iVar4 = -iVar4;
    }
    iVar5 = iVar4 + -1;
    if (*(int *)(param_1 + 0x57c) != -1) {
      iVar5 = iVar4 + -3;
    }
    if (*(int **)(param_1 + 0x278) == (int *)0x0) {
      param_2 = (int *)0x0;
    }
    else {
      param_2 = (int *)(**(code **)(**(int **)(param_1 + 0x278) + 0xd8))();
    }
    if (*(int **)(param_1 + 0x278) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x278) + 0xdc))();
    }
    piVar1 = *(int **)(param_1 + 0x278);
    if (iVar4 < (int)param_2) {
      if (piVar1 == (int *)0x0) {
        param_2 = (int *)0x0;
      }
      else {
        param_2 = (int *)(**(code **)(*piVar1 + 0xd8))();
      }
      iVar4 = *(int *)(param_1 + 0x580);
      if (*(int *)(param_1 + 0x584) != iVar4) {
        iVar3 = iVar3 + ((*(int *)(param_1 + 0x58c) - iVar4) * ((int)param_2 + iVar5)) /
                        (*(int *)(param_1 + 0x584) - iVar4);
      }
      *piVar2 = *piVar2 + iVar3;
      piVar2[2] = piVar2[2] + iVar3;
    }
    else {
      if (piVar1 == (int *)0x0) {
        param_2 = (int *)0x0;
      }
      else {
        param_2 = (int *)(**(code **)(*piVar1 + 0xdc))();
      }
      iVar4 = *(int *)(param_1 + 0x580);
      if (*(int *)(param_1 + 0x584) != iVar4) {
        iVar3 = iVar3 + ((*(int *)(param_1 + 0x58c) - iVar4) * ((int)param_2 + iVar5)) /
                        (*(int *)(param_1 + 0x584) - iVar4);
      }
      piVar2[1] = piVar2[1] + iVar3;
      piVar2[3] = piVar2[3] + iVar3;
    }
    goto LAB_00497970;
  }
  iVar5 = *param_2 + iVar4;
  if ((*(byte *)(param_1 + 0x574) & 2) == 0) {
    *(int *)(param_1 + 0x59c) = (iVar4 >> 1) + iVar3;
    if (*(int **)(param_1 + 0x278) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x278) + 0xd8))();
    }
    if (*(int **)(param_1 + 0x278) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x278) + 0xdc))();
    }
    piVar1 = *(int **)(param_1 + 0x278);
    if (iVar3 <= iVar4) {
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(*piVar1 + 0xdc))();
      }
      iVar4 = *(int *)(param_1 + 0x59c);
      if (iVar3 + iVar5 * -2 <= iVar4) {
        if (*(int **)(param_1 + 0x278) == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (**(code **)(**(int **)(param_1 + 0x278) + 0xdc))();
        }
        iVar4 = iVar4 + iVar5 * -2;
      }
      iVar3 = iVar5;
      if (iVar5 <= iVar4) {
        if (*(int **)(param_1 + 0x278) == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (**(code **)(**(int **)(param_1 + 0x278) + 0xdc))();
        }
        iVar3 = *(int *)(param_1 + 0x59c);
        if (iVar4 + iVar5 * -2 <= *(int *)(param_1 + 0x59c)) {
          if (*(int **)(param_1 + 0x278) == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = (**(code **)(**(int **)(param_1 + 0x278) + 0xdc))();
          }
          iVar3 = iVar3 + iVar5 * -2;
        }
      }
      goto LAB_00497950;
    }
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(*piVar1 + 0xd8))();
    }
    iVar4 = *(int *)(param_1 + 0x59c);
    if (iVar3 + iVar5 * -2 <= iVar4) {
      if (*(int **)(param_1 + 0x278) == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (**(code **)(**(int **)(param_1 + 0x278) + 0xd8))();
      }
      iVar4 = iVar4 + iVar5 * -2;
    }
    iVar3 = iVar5;
    if (iVar5 <= iVar4) {
      if (*(int **)(param_1 + 0x278) == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (**(code **)(**(int **)(param_1 + 0x278) + 0xd8))();
      }
      iVar3 = *(int *)(param_1 + 0x59c);
      if (iVar4 + iVar5 * -2 <= *(int *)(param_1 + 0x59c)) {
        if (*(int **)(param_1 + 0x278) == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(**(int **)(param_1 + 0x278) + 0xd8))();
        }
        iVar3 = iVar3 + iVar5 * -2;
      }
    }
    *(int *)(param_1 + 0x59c) = iVar3;
    *param_2 = *param_2 + iVar3;
    param_2[2] = param_2[2] + iVar3;
  }
  else {
    *(int *)(param_1 + 0x59c) = (iVar4 >> 1) + iVar3;
    if (*(int **)(param_1 + 0x278) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x278) + 0xd8))();
    }
    if (*(int **)(param_1 + 0x278) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x278) + 0xdc))();
    }
    piVar1 = *(int **)(param_1 + 0x278);
    if (iVar4 < iVar3) {
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(*piVar1 + 0xd8))();
      }
      iVar4 = *(int *)(param_1 + 0x59c);
      if (iVar3 - iVar5 <= iVar4) {
        if (*(int **)(param_1 + 0x278) == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (**(code **)(**(int **)(param_1 + 0x278) + 0xd8))();
        }
        iVar4 = iVar4 - iVar5;
      }
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else {
        if (*(int **)(param_1 + 0x278) == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (**(code **)(**(int **)(param_1 + 0x278) + 0xd8))();
        }
        iVar4 = *(int *)(param_1 + 0x59c);
        if (iVar3 - iVar5 <= iVar4) {
          if (*(int **)(param_1 + 0x278) == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = (**(code **)(**(int **)(param_1 + 0x278) + 0xd8))();
          }
          iVar4 = iVar4 - iVar5;
        }
      }
      *(int *)(param_1 + 0x59c) = iVar4;
      *param_2 = *param_2 + iVar4;
      param_2[2] = param_2[2] + iVar4;
    }
    else {
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (**(code **)(*piVar1 + 0xdc))();
      }
      iVar4 = *(int *)(param_1 + 0x59c);
      if (iVar3 - iVar5 <= iVar4) {
        if (*(int **)(param_1 + 0x278) == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (**(code **)(**(int **)(param_1 + 0x278) + 0xdc))();
        }
        iVar4 = iVar4 - iVar5;
      }
      if (iVar4 < 0) {
        iVar3 = 0;
      }
      else {
        if (*(int **)(param_1 + 0x278) == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (**(code **)(**(int **)(param_1 + 0x278) + 0xdc))();
        }
        iVar3 = *(int *)(param_1 + 0x59c);
        if (iVar4 - iVar5 <= iVar3) {
          if (*(int **)(param_1 + 0x278) == (int *)0x0) {
            iVar3 = -iVar5;
          }
          else {
            iVar3 = (**(code **)(**(int **)(param_1 + 0x278) + 0xdc))();
            iVar3 = iVar3 - iVar5;
          }
        }
      }
LAB_00497950:
      *(int *)(param_1 + 0x59c) = iVar3;
      param_2[1] = param_2[1] + iVar3;
      param_2[3] = param_2[3] + iVar3;
    }
  }
  *(undefined4 *)(param_1 + 0x59c) = 0xffffffff;
LAB_00497970:
  *(int *)(param_1 + 0x5ac) = *piVar2;
  *(int *)(param_1 + 0x5b0) = piVar2[1];
  *(int *)(param_1 + 0x5b4) = piVar2[2];
  *(int *)(param_1 + 0x5b8) = piVar2[3];
  return;
}

