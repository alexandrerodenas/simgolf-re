/* Ghidra decompiled: golf.exe */
/* Function: FUN_00482ae0 @ 0x00482AE0 */
/* Body size: 61 addresses */


void __thiscall FUN_00482ae0(int *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (int)&DAT_004ba28c;
    param_1[5] = (int)&PTR_FUN_004ba278;
    param_1[6] = DAT_00839650;
    DAT_00839650 = 0;
  }
  *(undefined ***)(*(int *)(*param_1 + 4) + (int)param_1) = &PTR_LAB_004ba288;
  return;
}

