/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049c020 @ 0x0049C020 */


undefined4 * __fastcall FUN_0049c020(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b9196;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_004804a0();
  local_4 = 0;
  FUN_004837f0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00486c90();
  *param_1 = &PTR_FUN_004bbcf4;
  param_1[0x9d] = &PTR_LAB_004bbce0;
  param_1[0x165] = 0;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

