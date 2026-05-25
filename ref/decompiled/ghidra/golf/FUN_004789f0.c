/* Ghidra decompiled: golf.exe */
/* Function: FUN_004789f0 @ 0x004789F0 */


undefined4 __thiscall FUN_004789f0(int param_1,int param_2)

{
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return 7;
  }
  if (param_2 == 0) {
    return 3;
  }
  (**(code **)(**(int **)(param_1 + 4) + 0xec))(*(undefined4 *)(param_2 + 4));
  return 0;
}

