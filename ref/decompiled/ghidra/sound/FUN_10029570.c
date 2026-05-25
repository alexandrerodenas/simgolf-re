/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029570 @ 0x10029570 */


undefined4 __fastcall FUN_10029570(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10029579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x40))();
    return uVar1;
  }
  return 0;
}

