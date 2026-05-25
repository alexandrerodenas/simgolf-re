/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487ac0 @ 0x00487AC0 */


undefined4 __fastcall FUN_00487ac0(int param_1)

{
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
    FUN_004879f0();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 0;
}

