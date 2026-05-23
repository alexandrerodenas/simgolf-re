/* Ghidra decompiled: golf.exe */
/* Function: FUN_00474440 @ 0x00474440 */
/* Body size: 122 addresses */


undefined4 __thiscall
FUN_00474440(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            undefined4 param_7)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0x18;
  }
  if (param_2 == 0) {
    return 0x10;
  }
  if ((*(int **)(param_1 + 4) != (int *)0x0) && (*(int *)(param_2 + 4) != 0)) {
    if (param_6 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_6 + 4);
    }
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x94))
                      (*(int *)(param_2 + 4),*(int *)(param_1 + 0x20) + param_3,
                       *(int *)(param_1 + 0x24) + param_4,param_5,uVar1,param_7);
    return uVar1;
  }
  return 7;
}

