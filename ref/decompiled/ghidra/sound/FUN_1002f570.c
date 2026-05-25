/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002f570 @ 0x1002F570 */


undefined4 __fastcall FUN_1002f570(int param_1)

{
  undefined4 uVar1;
  
  if (((*(byte *)(param_1 + 0x58) & 1) != 0) && (*(int **)(param_1 + 0x40) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1002f57f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x20))();
    return uVar1;
  }
  return 0;
}

