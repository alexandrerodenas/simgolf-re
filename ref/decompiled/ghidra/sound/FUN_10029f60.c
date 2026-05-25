/* Ghidra decompiled: sound.dll */
/* Function: FUN_10029f60 @ 0x10029F60 */


void __fastcall FUN_10029f60(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1005b8b0;
  if ((int *)param_1[5] != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10029f6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[5] + 0x14))();
    return;
  }
  return;
}

