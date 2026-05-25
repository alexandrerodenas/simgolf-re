/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002f140 @ 0x1002F140 */


undefined4 __fastcall FUN_1002f140(int param_1)

{
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x88))();
  }
  return 0;
}

