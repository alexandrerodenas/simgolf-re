/* Ghidra decompiled: golf.exe */
/* Function: FUN_00491410 @ 0x00491410 */
/* Body size: 89 addresses */


void __fastcall FUN_00491410(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b80a8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  *param_1 = &PTR_FUN_004bb5b4;
  param_1[0x9d] = &PTR_LAB_004bb5a0;
  local_4 = 0;
  FUN_004a14c0();
  local_4 = 0xffffffff;
  FUN_00488650();
  *unaff_FS_OFFSET = local_c;
  return;
}

