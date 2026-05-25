/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002f6b0 @ 0x1002F6B0 */


undefined4 __fastcall FUN_1002f6b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1002f6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x88))();
    return uVar1;
  }
  return 0;
}

