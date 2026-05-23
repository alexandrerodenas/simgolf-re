/* Ghidra decompiled: golf.exe */
/* Function: FUN_004848a0 @ 0x004848A0 */
/* Body size: 123 addresses */


void __fastcall FUN_004848a0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7e28;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  *param_1 = &PTR_FUN_004bacf8;
  local_4 = 0;
  if ((uint)param_1[0xf] < 0x10) {
    FUN_004876c0(param_1);
  }
  if (param_1[0x14] != 0) {
    FUN_004a4ffc(param_1[0x14]);
  }
  param_1[0x14] = 0;
  FUN_004844e0();
  local_4 = 0xffffffff;
  FUN_004841e0();
  *unaff_FS_OFFSET = local_c;
  return;
}

