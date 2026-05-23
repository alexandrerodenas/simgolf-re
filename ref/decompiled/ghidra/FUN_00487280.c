/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487280 @ 0x00487280 */
/* Body size: 98 addresses */


undefined4 * __fastcall FUN_00487280(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7ec8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_00487210();
  local_4 = 0;
  FUN_004a55d2(param_1 + 9,0x1c,0x10,&LAB_004877d0,FUN_00487310);
  *param_1 = &PTR_FUN_004baf00;
  param_1[8] = 0;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

