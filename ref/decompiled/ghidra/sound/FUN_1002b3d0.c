/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b3d0 @ 0x1002B3D0 */


undefined4 __fastcall FUN_1002b3d0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x38) != 0) && (*(int **)(param_1 + 0x40) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x1002b3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x30))();
    return uVar1;
  }
  return 0x13;
}

