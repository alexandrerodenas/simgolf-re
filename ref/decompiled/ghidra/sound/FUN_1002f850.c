/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002f850 @ 0x1002F850 */


undefined4 __fastcall FUN_1002f850(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0xf8) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1002f85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0xf8) + 0x5c))();
    return uVar1;
  }
  return 0;
}

