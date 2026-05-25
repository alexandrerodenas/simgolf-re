/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487460 @ 0x00487460 */


undefined4 __fastcall FUN_00487460(int param_1)

{
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
    FUN_00487430();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 0;
}

