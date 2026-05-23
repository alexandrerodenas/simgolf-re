/* Ghidra decompiled: golf.exe */
/* Function: FUN_00482f60 @ 0x00482F60 */
/* Body size: 105 addresses */


void __thiscall FUN_00482f60(undefined4 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_004babb4;
    param_1[8] = &PTR_FUN_004ba278;
    param_1[9] = DAT_00839650;
    DAT_00839650 = 0;
  }
  *param_1 = &PTR_LAB_004ba2ac;
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = &PTR_LAB_004ba2a8;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_004babac;
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = &PTR_LAB_004baba8;
  return;
}

