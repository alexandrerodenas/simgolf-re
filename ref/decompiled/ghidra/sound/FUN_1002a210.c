/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002a210 @ 0x1002A210 */


undefined4 __fastcall FUN_1002a210(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1002a219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x60))();
    return uVar1;
  }
  return 1;
}

