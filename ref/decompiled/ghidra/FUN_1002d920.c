/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002d920 @ 0x1002D920 */
/* Body size: 21 addresses */


undefined4 __fastcall FUN_1002d920(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1002d929. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0xb8))();
    return uVar1;
  }
  return 0x14;
}

