/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484150 @ 0x00484150 */


undefined4 * __fastcall FUN_00484150(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7de8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_00485260();
  *param_1 = &PTR_FUN_004bac68;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x11] = 0;
  local_4 = 0;
  FUN_004846d0(1000);
  param_1[0x15] = 0;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

