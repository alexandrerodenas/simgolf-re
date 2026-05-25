/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002ed00 @ 0x1002ED00 */


undefined4 __fastcall FUN_1002ed00(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1002ed09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x98))();
    return uVar1;
  }
  return 0;
}

