/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044ae60 @ 0x0044AE60 */


undefined4 __fastcall FUN_0044ae60(undefined4 param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b74f8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_00473ab0();
  local_4 = 0;
  FUN_00473ab0();
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

