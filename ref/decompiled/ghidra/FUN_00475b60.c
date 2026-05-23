/* Ghidra decompiled: golf.exe */
/* Function: FUN_00475b60 @ 0x00475B60 */
/* Body size: 58 addresses */


undefined4 __thiscall FUN_00475b60(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return 7;
  }
  if (param_2 == 0) {
    return 0x10;
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x84))
                    (*(undefined4 *)(param_2 + 4),param_3,param_4);
  return uVar1;
}

