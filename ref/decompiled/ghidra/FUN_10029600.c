/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029600 @ 0x10029600 */
/* Body size: 15 addresses */


undefined4 __fastcall FUN_10029600(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10029609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x74))();
    return uVar1;
  }
  return 0;
}

