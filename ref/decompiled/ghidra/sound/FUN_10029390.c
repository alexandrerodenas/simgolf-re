/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029390 @ 0x10029390 */


void __fastcall FUN_10029390(int param_1)

{
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10029399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x14) + 0x38))();
    return;
  }
  return;
}

