/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487390 @ 0x00487390 */


void __fastcall FUN_00487390(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7ee8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  *param_1 = &PTR_FUN_004baf00;
  local_4 = 0;
  FUN_004a5713(param_1 + 9,0x1c,0x10,FUN_00487310);
  local_4 = 0xffffffff;
  FUN_00487260();
  *unaff_FS_OFFSET = local_c;
  return;
}

