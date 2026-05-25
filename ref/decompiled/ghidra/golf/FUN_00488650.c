/* Ghidra decompiled: golf.exe */
/* Function: FUN_00488650 @ 0x00488650 */


void __fastcall FUN_00488650(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b7f44;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  *param_1 = &PTR_FUN_004bb0a8;
  param_1[0x9d] = &PTR_LAB_004bb094;
  local_4 = 2;
  FUN_004886d0();
  local_4._0_1_ = 1;
  FUN_00486ce0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00486ce0();
  local_4 = 0xffffffff;
  FUN_004805a0();
  *unaff_FS_OFFSET = uStack_c;
  return;
}

