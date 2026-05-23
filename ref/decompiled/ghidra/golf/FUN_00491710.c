/* Ghidra decompiled: golf.exe */
/* Function: FUN_00491710 @ 0x00491710 */
/* Body size: 444 addresses */


void __fastcall FUN_00491710(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b824e;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  *param_1 = &PTR_FUN_004bb3f8;
  param_1[0x9d] = &PTR_LAB_004bb3e4;
  local_4 = 8;
  FUN_0048d480();
  local_4._0_1_ = 7;
  FUN_004928d0();
  local_4._0_1_ = 6;
  FUN_00491500();
  FUN_00489370();
  FUN_004805a0();
  param_1[0x504] = &PTR_FUN_004bb22c;
  *(undefined ***)(*(int *)(param_1[0x505] + 4) + -0x24 + (int)(param_1 + 0x50e)) =
       &PTR_LAB_004bb228;
  local_4._0_1_ = 9;
  FUN_004026a0();
  param_1[0x509] = 0;
  local_4._0_1_ = 5;
  FUN_00401c70();
  DAT_00839650 = param_1[0x50f];
  param_1[0x50e] = &PTR_FUN_004ba278;
  param_1[0x4f8] = &PTR_FUN_004bb22c;
  *(undefined ***)(*(int *)(param_1[0x4f9] + 4) + -0x24 + (int)(param_1 + 0x502)) =
       &PTR_LAB_004bb228;
  local_4._0_1_ = 10;
  FUN_004026a0();
  param_1[0x4fd] = 0;
  local_4._0_1_ = 4;
  FUN_00401c70();
  DAT_00839650 = param_1[0x503];
  param_1[0x502] = &PTR_FUN_004ba278;
  local_4._0_1_ = 3;
  param_1[0x4e8] = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  param_1[0x32b] = &PTR_FUN_004bb5b4;
  param_1[0x3c8] = &PTR_LAB_004bb5a0;
  local_4._0_1_ = 0xb;
  FUN_004a14c0();
  local_4._0_1_ = 2;
  FUN_00488650();
  param_1[0x177] = &PTR_FUN_004bb5b4;
  param_1[0x214] = &PTR_LAB_004bb5a0;
  local_4._0_1_ = 0xc;
  FUN_004a14c0();
  local_4._0_1_ = 1;
  FUN_00488650();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00474810();
  local_4 = 0xffffffff;
  FUN_004805a0();
  *unaff_FS_OFFSET = local_c;
  return;
}

