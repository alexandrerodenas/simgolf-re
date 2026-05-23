/* Ghidra decompiled: golf.exe */
/* Function: FUN_00482b20 @ 0x00482B20 */
/* Body size: 61 addresses */


void __thiscall FUN_00482b20(int *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (int)&DAT_004ba2b8;
    param_1[2] = (int)&PTR_FUN_004ba278;
    param_1[3] = DAT_00839650;
    DAT_00839650 = 0;
  }
  *(undefined ***)(*(int *)(*param_1 + 4) + (int)param_1) = &PTR_LAB_004ba2b4;
  return;
}

