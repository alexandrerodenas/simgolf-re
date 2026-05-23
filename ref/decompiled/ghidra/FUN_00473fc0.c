/* Ghidra decompiled: golf.exe */
/* Function: FUN_00473fc0 @ 0x00473FC0 */
/* Body size: 111 addresses */


undefined4 __thiscall
FUN_00473fc0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6,
            int param_7)

{
  undefined4 uVar1;
  
  if ((param_3 == 0) || (param_2 == 0)) {
    return 0x10;
  }
  if ((((*(int **)(param_1 + 4) != (int *)0x0) && (*(int *)(param_3 + 4) != 0)) &&
      (*(int *)(param_2 + 4) != 0)) && (*(int *)(param_4 + 4) != 0)) {
    if (param_7 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_7 + 4);
    }
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x50))
                      (*(int *)(param_2 + 4),*(int *)(param_3 + 4),*(int *)(param_4 + 4),param_5,
                       param_6,uVar1);
    return uVar1;
  }
  return 7;
}

