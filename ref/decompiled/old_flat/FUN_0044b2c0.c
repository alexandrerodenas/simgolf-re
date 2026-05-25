/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044b2c0 @ 0x0044B2C0 */


int __fastcall FUN_0044b2c0(int param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b76bc;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_00473ab0();
  local_4 = 0;
  FUN_00473ab0();
  local_4._0_1_ = 1;
  FUN_00473ab0();
  local_4._0_1_ = 2;
  FUN_00473ab0();
  local_4._0_1_ = 3;
  FUN_00473ab0();
  local_4._0_1_ = 4;
  FUN_00473ab0();
  local_4._0_1_ = 5;
  FUN_00473ab0();
  local_4._0_1_ = 6;
  FUN_00473ab0();
  local_4._0_1_ = 7;
  FUN_004a55d2(param_1 + 0x160,0x2c,8,FUN_00473ab0,&LAB_004041f0);
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_004a55d2(param_1 + 0x2c0,0x2c,0x24,FUN_00473ab0,&LAB_004041f0);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

