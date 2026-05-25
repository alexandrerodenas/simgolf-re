/* Ghidra decompiled: sound.dll */
/* Function: FUN_100293b0 @ 0x100293B0 */


undefined4 __fastcall FUN_100293b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100293b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x18))();
    return uVar1;
  }
  return 0;
}

