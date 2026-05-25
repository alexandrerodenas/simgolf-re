/* Ghidra decompiled: golf.exe */
/* Function: FUN_004845e0 @ 0x004845E0 */


undefined4 __fastcall FUN_004845e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004845ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x20))();
    return uVar1;
  }
  return 0x14;
}

