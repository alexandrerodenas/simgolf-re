/* Ghidra decompiled: golf.exe */
/* Function: FUN_004805a0 @ 0x004805A0 */


void __fastcall FUN_004805a0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7ca8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  *param_1 = &PTR_FUN_004baa30;
  param_1[0x9d] = &PTR_LAB_004baa1c;
  local_4 = 0;
  param_1[0x15c] = 0;
  FUN_00474c40();
  local_4 = 0xffffffff;
  FUN_0047a3c0();
  *unaff_FS_OFFSET = local_c;
  return;
}

