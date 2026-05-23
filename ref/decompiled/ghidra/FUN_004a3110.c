/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a3110 @ 0x004A3110 */
/* Body size: 593 addresses */


int * __thiscall FUN_004a3110(int *param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b93e0;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  if (param_2 != 0) {
    *param_1 = (int)&DAT_004bc3c4;
    FUN_004804a0();
    local_4 = 0;
    FUN_00489150();
    local_4 = 1;
  }
  FUN_00492850();
  param_1[0x1f] = (int)&DAT_004bc3bc;
  param_1[0x28] = (int)&PTR_FUN_004ba278;
  param_1[0x29] = DAT_00839650;
  DAT_00839650 = 0;
  param_1[0x1e] = (int)&PTR_LAB_004ba2c4;
  *(undefined ***)(*(int *)(param_1[0x1f] + 4) + 0x7c + (int)param_1) = &PTR_LAB_004ba2c0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x1e] = (int)&PTR_FUN_004bc3b4;
  *(undefined ***)(*(int *)(param_1[0x1f] + 4) + 0x7c + (int)param_1) = &PTR_LAB_004bc3b0;
  local_4 = 3;
  *(undefined ***)(*(int *)(*param_1 + 4) + (int)param_1) = &PTR_LAB_004bc244;
  *(undefined ***)(*(int *)(*param_1 + 4) + 0x274 + (int)param_1) = &PTR_LAB_004bc230;
  *(undefined ***)(*(int *)(*param_1 + 8) + (int)param_1) = &PTR_LAB_004bc224;
  *(int *)(*(int *)(*param_1 + 4) + -4 + (int)param_1) = *(int *)(*param_1 + 4) + -0xe0;
  *(int *)(*(int *)(*param_1 + 8) + -4 + (int)param_1) = *(int *)(*param_1 + 8) + -0x658;
  param_1[1] = 0;
  param_1[0x1c] = 1;
  param_1[0x1d] = 1;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[2] = DAT_008409cc;
  FUN_00476310(DAT_004e449c,DAT_004e44a8,DAT_004e44b4,DAT_004e44c0);
  FUN_00476340(DAT_004e44a0,DAT_004e44ac,DAT_004e44b8,DAT_004e44c4);
  FUN_00476370(DAT_004e44a4,DAT_004e44b0,DAT_004e44bc,DAT_004e44c8);
  FUN_004762d0(DAT_0083b628,DAT_0083b62c,DAT_0083b630,0);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

