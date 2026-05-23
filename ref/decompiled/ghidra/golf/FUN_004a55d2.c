/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a55d2 @ 0x004A55D2 */
/* Body size: 106 addresses */


void FUN_004a55d2(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  undefined4 *unaff_FS_OFFSET;
  int local_20;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_004bc438;
  puStack_10 = &LAB_004a8f7c;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  local_8 = 0;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*param_4)();
  }
  local_8 = 0xffffffff;
  FUN_004a563c();
  *unaff_FS_OFFSET = local_14;
  return;
}

