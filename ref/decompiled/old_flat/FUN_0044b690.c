/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044b690 @ 0x0044B690 */


void __fastcall FUN_0044b690(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b77b8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  FUN_004a5713(param_1 + 0xb,0x2c,4,&LAB_004041f0);
  local_4 = 0xffffffff;
  *param_1 = &PTR_LAB_004ba2d8;
  FUN_00473ae0();
  *unaff_FS_OFFSET = local_c;
  return;
}

