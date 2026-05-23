/* Ghidra decompiled: golf.exe */
/* Function: FUN_00404280 @ 0x00404280 */
/* Body size: 107 addresses */


void __fastcall FUN_00404280(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7303;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  *param_1 = &PTR_LAB_004ba2e0;
  local_4 = 0;
  FUN_00481ba0();
  *param_1 = &PTR_FUN_004ba2dc;
  local_4 = 1;
  FUN_00482dd0();
  local_4 = 0xffffffff;
  param_1[2] = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  *unaff_FS_OFFSET = local_c;
  return;
}

