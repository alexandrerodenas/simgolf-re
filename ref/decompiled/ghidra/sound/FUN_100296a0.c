/* Ghidra decompiled: sound.dll */
/* Function: FUN_100296a0 @ 0x100296A0 */


undefined4 __fastcall FUN_100296a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x100296a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x6c))();
    return uVar1;
  }
  return 1;
}

