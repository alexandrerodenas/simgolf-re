/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b480 @ 0x1002B480 */


undefined4 __fastcall FUN_1002b480(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1002b489. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x74))();
    return uVar1;
  }
  return 0;
}

