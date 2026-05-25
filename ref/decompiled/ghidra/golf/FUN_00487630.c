/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487630 @ 0x00487630 */


undefined4 __fastcall FUN_00487630(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00487639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x74))();
    return uVar1;
  }
  return 0;
}

