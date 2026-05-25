/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b370 @ 0x1002B370 */


undefined4 __fastcall FUN_1002b370(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x38) != 0) && (*(int **)(param_1 + 0x40) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1002b380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x28))();
    return uVar1;
  }
  return 0x13;
}

