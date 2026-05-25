/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b1e0 @ 0x1002B1E0 */


undefined4 __fastcall FUN_1002b1e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1002b1e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x5c))();
    return uVar1;
  }
  return 0;
}

