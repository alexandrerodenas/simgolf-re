/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492850 @ 0x00492850 */


undefined4 * __fastcall FUN_00492850(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b828b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_00486c90();
  local_4 = 0;
  *param_1 = &PTR_FUN_004bba74;
  param_1[0x17] = 1000;
  FUN_00492800();
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

