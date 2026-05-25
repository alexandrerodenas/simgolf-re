/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a4680 @ 0x004A4680 */


undefined4 __thiscall FUN_004a4680(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  switch(param_2) {
  case 0x25:
  case 100:
    iVar1 = *(int *)(*(int *)(param_1 + -0xe0) + 8);
    iVar2 = iVar1 + param_1;
    if (*(int *)(iVar1 + -0x88 + param_1) == 1) {
      return 1;
    }
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar1 < *(int *)(iVar2 + -0x84)) {
      return 1;
    }
    *(int *)(iVar2 + 0x10) = iVar1 - *(int *)(iVar2 + -0x84);
    break;
  case 0x26:
  case 0x68:
    iVar1 = *(int *)(*(int *)(param_1 + -0xe0) + 8);
    iVar2 = *(int *)(iVar1 + 0x10 + param_1);
    if (iVar2 == 0) {
      return 1;
    }
    *(int *)(iVar1 + 0x10 + param_1) = iVar2 + -1;
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + -0xe0) + 8) + 0x10 + param_1) + 1;
    break;
  case 0x27:
  case 0x66:
    iVar2 = *(int *)(*(int *)(param_1 + -0xe0) + 8) + param_1;
    if (*(int *)(iVar2 + -0x88) == 1) {
      return 1;
    }
    iVar1 = *(int *)(iVar2 + 0x10);
    if ((*(int *)(iVar2 + -0x88) + -1) * *(int *)(iVar2 + -0x84) <= iVar1) {
      return 1;
    }
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + -0x84) + iVar1;
    iVar2 = *(int *)(*(int *)(param_1 + -0xe0) + 8);
    if (*(int *)(param_1 + -0x58) + -1 < *(int *)(iVar2 + 0x10 + param_1)) {
      *(int *)(iVar2 + 0x10 + param_1) = iVar1;
      return 1;
    }
    break;
  case 0x28:
  case 0x62:
    iVar1 = *(int *)(*(int *)(param_1 + -0xe0) + 8);
    iVar2 = *(int *)(iVar1 + 0x10 + param_1);
    if (iVar2 == *(int *)(param_1 + -0x58) + -1) {
      return 1;
    }
    *(int *)(iVar1 + 0x10 + param_1) = iVar2 + 1;
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + -0xe0) + 8) + 0x10 + param_1) + -1;
    break;
  default:
    return 0;
  }
  FUN_004a3f10(iVar1);
  FUN_004a3f10(*(undefined4 *)(*(int *)(*(int *)(param_1 + -0xe0) + 8) + 0x10 + param_1));
  (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + -0xe0) + 4) + -0xe0 + param_1) + 0x124))();
  return 1;
}

