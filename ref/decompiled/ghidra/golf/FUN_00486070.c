/* Ghidra decompiled: golf.exe */
/* Function: FUN_00486070 @ 0x00486070 */
/* Body size: 94 addresses */


undefined4 * __fastcall FUN_00486070(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7ea8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_004804a0();
  local_4 = 0;
  FUN_00486c90();
  *param_1 = &PTR_FUN_004ba4a8;
  param_1[0x9d] = &PTR_LAB_004ba494;
  FUN_00485ff0();
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

