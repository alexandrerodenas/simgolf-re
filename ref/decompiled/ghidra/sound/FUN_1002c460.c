/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002c460 @ 0x1002C460 */


uint __fastcall FUN_1002c460(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1002c469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0xe8))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

