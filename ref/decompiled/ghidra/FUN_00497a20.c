/* Ghidra decompiled: golf.exe */
/* Function: FUN_00497a20 @ 0x00497A20 */
/* Body size: 193 addresses */


void __fastcall FUN_00497a20(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b8354;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  *param_1 = &PTR_FUN_004bbac8;
  param_1[0x9d] = &PTR_LAB_004bbab4;
  local_4 = 2;
  FUN_004961d0();
  param_1[0x337] = &PTR_FUN_004bb5b4;
  param_1[0x3d4] = &PTR_LAB_004bb5a0;
  local_4._0_1_ = 3;
  FUN_004a14c0();
  local_4._0_1_ = 1;
  FUN_00488650();
  param_1[0x183] = &PTR_FUN_004bb5b4;
  param_1[0x220] = &PTR_LAB_004bb5a0;
  local_4._0_1_ = 4;
  FUN_004a14c0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00488650();
  local_4 = 0xffffffff;
  FUN_004805a0();
  *unaff_FS_OFFSET = local_c;
  return;
}

