/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002f1f0 @ 0x1002F1F0 */


undefined4 __fastcall FUN_1002f1f0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1002f1f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x90))();
    return uVar1;
  }
  return 0;
}

