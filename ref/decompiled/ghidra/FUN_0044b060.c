/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044b060 @ 0x0044B060 */
/* Body size: 129 addresses */


undefined4 __fastcall FUN_0044b060(undefined4 param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b759a;
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
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_00473ab0();
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

