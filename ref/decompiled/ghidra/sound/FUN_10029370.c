/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029370 @ 0x10029370 */


void __fastcall FUN_10029370(int param_1)

{
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10029379. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x14) + 0x50))();
    return;
  }
  return;
}

