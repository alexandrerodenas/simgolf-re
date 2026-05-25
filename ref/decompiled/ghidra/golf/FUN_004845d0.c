/* Ghidra decompiled: golf.exe */
/* Function: FUN_004845d0 @ 0x004845D0 */


undefined4 __fastcall FUN_004845d0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004845d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x5c))();
    return uVar1;
  }
  return 0;
}

