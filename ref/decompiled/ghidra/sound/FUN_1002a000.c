/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002a000 @ 0x1002A000 */


undefined4 __fastcall FUN_1002a000(int param_1)

{
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 0;
}

