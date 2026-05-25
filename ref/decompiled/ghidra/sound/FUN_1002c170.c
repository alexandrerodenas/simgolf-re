/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002c170 @ 0x1002C170 */


undefined4 __fastcall FUN_1002c170(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1002c179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0xbc))();
    return uVar1;
  }
  return 0xffffffff;
}

