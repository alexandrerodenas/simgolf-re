/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029c60 @ 0x10029C60 */


uint __fastcall FUN_10029c60(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10029c69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x88))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

