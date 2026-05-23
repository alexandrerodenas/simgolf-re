/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048df20 @ 0x0048DF20 */
/* Body size: 158 addresses */


undefined4 __thiscall FUN_0048df20(int param_1,char *param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  if (param_2 == (char *)0x0) {
    return 3;
  }
  if (*param_2 == '^') {
    if (param_2[1] == '\0') {
      uVar2 = 3;
    }
    else {
      if (param_2[1] == '^') {
        uVar2 = 2;
        if (param_2[2] == '^') {
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 2;
        }
        goto LAB_0048df6b;
      }
      uVar2 = 1;
    }
    param_2 = param_2 + 1;
  }
LAB_0048df6b:
  uVar3 = 0;
  if (param_3 == '\0') {
    *(char **)(param_1 + 0x142c) = param_2;
    *(undefined4 *)(param_1 + 0x1430) = uVar2;
    *(undefined4 *)(param_1 + 0x1434) = 0;
    iVar1 = FUN_00401d10(0);
    if (iVar1 != 0) {
      uVar3 = 1;
    }
  }
  else {
    iVar1 = FUN_004a0600(param_2,0,uVar2,0);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return uVar3;
}

