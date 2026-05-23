/* Ghidra decompiled: golf.exe */
/* Function: FUN_004763d0 @ 0x004763D0 */
/* Body size: 628 addresses */


int __thiscall
FUN_004763d0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,byte param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return param_4;
  }
  if (((param_6 & 2) == 0) && (-1 < *(int *)(param_2 + 0x10) + -1)) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 8);
  }
  if (*(int *)(param_2 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0xc) + 8) + 8);
  }
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    if (*(int *)(param_2 + 8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 4);
    }
    (**(code **)(param_1 + 0x10))(uVar3,iVar1);
  }
  if (iVar1 == 3) {
    iVar1 = FUN_00477580();
    uVar3 = 0;
    iVar1 = param_4 + iVar1;
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_2 + 8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0xc) + 8) + 4);
    }
    iVar1 = FUN_00478530(uVar3,param_3,param_4,param_5);
    uVar3 = 0;
  }
  else {
    iVar1 = param_4;
    if (*(int *)(param_2 + 8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0xc) + 8) + 4);
    }
  }
  FUN_00478750(uVar3,param_3,iVar1,param_5);
  if (*(int *)(param_2 + 0x14) < *(int *)(param_2 + 0x10) + -1) {
    do {
      if (*(int **)(param_1 + 4) == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xdc))();
      }
      if (iVar2 < iVar1) break;
      FUN_00402130();
      if (*(int *)(param_2 + 8) == 0) {
        param_4 = 0;
LAB_004765e2:
        if (*(code **)(param_1 + 0x10) != (code *)0x0) {
          if (*(int *)(param_2 + 8) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 4);
          }
          (**(code **)(param_1 + 0x10))(uVar3,param_4);
        }
        if (*(int *)(param_2 + 8) == 0) {
          uVar3 = 0;
        }
        else {
          iVar2 = FUN_00402160();
          uVar3 = *(undefined4 *)(iVar2 + 4);
        }
        FUN_004787a0(uVar3);
      }
      else {
        param_4 = *(int *)(*(int *)(*(int *)(param_2 + 0xc) + 8) + 8);
        if (*(int *)(*(int *)(*(int *)(param_2 + 0xc) + 8) + 8) == 0) goto LAB_004765e2;
        iVar2 = FUN_00478970();
        if (*(code **)(param_1 + 0x10) != (code *)0x0) {
          if (*(int *)(param_2 + 8) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(*(int *)(param_2 + 0xc) + 4);
          }
          (**(code **)(param_1 + 0x10))(uVar3,param_4);
        }
        if (iVar1 <= iVar2) {
          iVar1 = iVar2;
        }
        if (param_4 == 3) {
          iVar2 = FUN_00477580();
          iVar1 = iVar1 + iVar2;
          FUN_00478750(0,param_3,iVar1,param_5);
        }
        else if (param_4 == 2) {
          if (*(int *)(param_2 + 8) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0xc) + 8) + 4);
          }
          iVar1 = FUN_00478530(uVar3,param_3,iVar1,param_5);
          FUN_00478750(0,param_3,iVar1,param_5);
        }
        else {
          if (*(int *)(param_2 + 8) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0xc) + 8) + 4);
          }
          FUN_00478750(uVar3,param_3,iVar1,param_5);
        }
      }
    } while (*(int *)(param_2 + 0x14) < *(int *)(param_2 + 0x10) + -1);
  }
  iVar2 = FUN_00478970();
  if (iVar1 <= iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}

