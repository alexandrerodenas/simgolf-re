/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049c780 @ 0x0049C780 */
/* Body size: 122 addresses */


void __fastcall FUN_0049c780(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b91b6;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  *param_1 = &PTR_FUN_004bbcf4;
  param_1[0x9d] = &PTR_LAB_004bbce0;
  local_4 = 1;
  FUN_0049c0a0();
  FUN_00486ce0();
  local_4 = local_4 & 0xffffff00;
  param_1[0x15d] = &PTR_LAB_004ba468;
  FUN_004838b0();
  local_4 = 0xffffffff;
  FUN_004805a0();
  *unaff_FS_OFFSET = uStack_c;
  return;
}

