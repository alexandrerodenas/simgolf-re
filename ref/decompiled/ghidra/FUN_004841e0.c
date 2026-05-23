/* Ghidra decompiled: golf.exe */
/* Function: FUN_004841e0 @ 0x004841E0 */
/* Body size: 127 addresses */


void __fastcall FUN_004841e0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7e08;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  *param_1 = &PTR_FUN_004bac68;
  local_4 = 0;
  if (param_1[0x14] != 0) {
    FUN_004a4ffc(param_1[0x14]);
    param_1[0x14] = 0;
  }
  if (param_1[0x10] != 0) {
    FUN_00484110(param_1[0x10]);
    param_1[0x10] = 0;
  }
  FUN_004844e0();
  local_4 = 0xffffffff;
  FUN_004852d0();
  *unaff_FS_OFFSET = local_c;
  return;
}

