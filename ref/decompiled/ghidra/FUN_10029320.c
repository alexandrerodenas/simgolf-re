/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029320 @ 0x10029320 */
/* Body size: 26 addresses */


undefined4 __fastcall FUN_10029320(int param_1)

{
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 0;
}

