/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002eee0 @ 0x1002EEE0 */
/* Body size: 18 addresses */


undefined4 __fastcall FUN_1002eee0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1002eee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x94))();
    return uVar1;
  }
  return 0;
}

