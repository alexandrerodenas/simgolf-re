/* Ghidra decompiled: golf.exe */
/* Function: FUN_00493ed0 @ 0x00493ED0 */


undefined4 __fastcall FUN_00493ed0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x23b4) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00493edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x23b4) + 0xd8))();
    return uVar1;
  }
  return 0;
}

