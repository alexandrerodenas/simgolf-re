/* Ghidra decompiled: sound.dll */
/* Function: FUN_10028ff0 @ 0x10028FF0 */
/* Body size: 19 addresses */


void __fastcall FUN_10028ff0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1005b8b0;
  if ((int *)param_1[5] != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10028fff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[5] + 0x14))();
    return;
  }
  return;
}

