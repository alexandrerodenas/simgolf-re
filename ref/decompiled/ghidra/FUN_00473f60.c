/* Ghidra decompiled: golf.exe */
/* Function: FUN_00473f60 @ 0x00473F60 */
/* Body size: 95 addresses */


undefined4 __thiscall
FUN_00473f60(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  
  if ((param_3 == 0) || (param_2 == 0)) {
    return 0x10;
  }
  if (((*(int **)(param_1 + 4) != (int *)0x0) && (*(int *)(param_3 + 4) != 0)) &&
     (*(int *)(param_2 + 4) != 0)) {
    if (param_6 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_6 + 4);
    }
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x54))
                      (*(int *)(param_2 + 4),*(int *)(param_3 + 4),param_4,param_5,uVar1);
    return uVar1;
  }
  return 7;
}

