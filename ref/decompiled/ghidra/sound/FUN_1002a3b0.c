/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002a3b0 @ 0x1002A3B0 */


void __fastcall FUN_1002a3b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1005b8b0;
  if ((int *)param_1[5] != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1002a3bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[5] + 0x14))();
    return;
  }
  return;
}

