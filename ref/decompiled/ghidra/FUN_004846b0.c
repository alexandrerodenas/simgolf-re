/* Ghidra decompiled: golf.exe */
/* Function: FUN_004846b0 @ 0x004846B0 */
/* Body size: 23 addresses */


void __thiscall FUN_004846b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x4c))(param_2);
  }
  return;
}

