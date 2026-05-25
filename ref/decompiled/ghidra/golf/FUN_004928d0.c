/* Ghidra decompiled: golf.exe */
/* Function: FUN_004928d0 @ 0x004928D0 */


void __fastcall FUN_004928d0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b82ab;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  *param_1 = &PTR_FUN_004bba74;
  local_4 = 0;
  FUN_00492830();
  local_4 = 0xffffffff;
  FUN_00486ce0();
  *unaff_FS_OFFSET = uStack_c;
  return;
}

