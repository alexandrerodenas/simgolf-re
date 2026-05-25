/* Ghidra decompiled: golf.exe */
/* Function: FUN_00475b00 @ 0x00475B00 */


undefined4 __thiscall FUN_00475b00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x34))(param_2);
    return uVar1;
  }
  return 0x18;
}

