/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044b1b0 @ 0x0044B1B0 */


void __fastcall FUN_0044b1b0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b762c;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 8;
  FUN_004a5713(param_1 + 0xb0,0x2c,0x24,&LAB_004041f0);
  local_4._0_1_ = 7;
  FUN_004a5713(param_1 + 0x58,0x2c,8,&LAB_004041f0);
  local_4._0_1_ = 6;
  param_1[0x4d] = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  local_4._0_1_ = 5;
  param_1[0x42] = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  local_4._0_1_ = 4;
  param_1[0x37] = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  local_4._0_1_ = 3;
  param_1[0x2c] = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  local_4._0_1_ = 2;
  param_1[0x21] = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  local_4._0_1_ = 1;
  param_1[0x16] = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0xb] = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  local_4 = 0xffffffff;
  *param_1 = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  *unaff_FS_OFFSET = local_c;
  return;
}

