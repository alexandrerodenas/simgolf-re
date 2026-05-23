/* Ghidra decompiled: golf.exe */
/* Function: FUN_004804a0 @ 0x004804A0 */
/* Body size: 212 addresses */


undefined4 * __fastcall FUN_004804a0(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7c88;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_00479c40();
  local_4 = 0;
  FUN_00474ae0();
  *param_1 = &PTR_FUN_004baa30;
  param_1[0x9d] = &PTR_LAB_004baa1c;
  param_1[0x15c] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = DAT_0083ac18;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

