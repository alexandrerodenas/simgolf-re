/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487260 @ 0x00487260 */
/* Body size: 19 addresses */


void __fastcall FUN_00487260(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004baeac;
  if ((int *)param_1[5] != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0048726f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)param_1[5] + 0x14))();
    return;
  }
  return;
}

