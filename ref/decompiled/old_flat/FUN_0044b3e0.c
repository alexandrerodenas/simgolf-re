/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044b3e0 @ 0x0044B3E0 */


void __fastcall FUN_0044b3e0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b76e3;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 1;
  FUN_004a5713(param_1 + 0x16,0x2c,0x12,&LAB_004041f0);
  local_4 = local_4 & 0xffffff00;
  param_1[0xb] = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  local_4 = 0xffffffff;
  *param_1 = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  *unaff_FS_OFFSET = local_c;
  return;
}

