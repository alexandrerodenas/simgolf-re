/* Ghidra decompiled: golf.exe */
/* Function: FUN_00473df0 @ 0x00473DF0 */
/* Body size: 109 addresses */


undefined4 __thiscall FUN_00473df0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0x18;
  }
  if (param_2 == 0) {
    return 0x10;
  }
  if ((*(int **)(param_1 + 4) != (int *)0x0) && (*(int *)(param_2 + 4) != 0)) {
    if (param_5 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_5 + 4);
    }
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x5c))
                      (*(int *)(param_2 + 4),*(int *)(param_1 + 0x20) + param_3,
                       *(int *)(param_1 + 0x24) + param_4,uVar1);
    return uVar1;
  }
  return 7;
}

