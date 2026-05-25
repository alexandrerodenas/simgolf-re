/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044b4f0 @ 0x0044B4F0 */


void __fastcall FUN_0044b4f0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b7754;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 3;
  FUN_004a5713(param_1 + 0xc6,0x2c,0x15,&LAB_004041f0);
  local_4._0_1_ = 2;
  param_1[0xbb] = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  local_4._0_1_ = 1;
  FUN_004a5713(param_1 + 0x37,0x2c,0xc,&LAB_004041f0);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004a5713(param_1 + 0xb,0x2c,4,&LAB_004041f0);
  local_4 = 0xffffffff;
  *param_1 = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  *unaff_FS_OFFSET = local_c;
  return;
}

