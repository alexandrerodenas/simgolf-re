/* Ghidra decompiled: golf.exe */
/* Function: FUN_0043cb50 @ 0x0043CB50 */
/* Body size: 105 addresses */


void __fastcall FUN_0043cb50(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b7466;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  *param_1 = &PTR_FUN_004ba4a8;
  param_1[0x9d] = &PTR_LAB_004ba494;
  local_4 = 1;
  FUN_004860d0();
  local_4 = local_4 & 0xffffff00;
  FUN_00486ce0();
  local_4 = 0xffffffff;
  FUN_004805a0();
  *unaff_FS_OFFSET = uStack_c;
  return;
}

