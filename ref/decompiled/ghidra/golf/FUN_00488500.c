/* Ghidra decompiled: golf.exe */
/* Function: FUN_00488500 @ 0x00488500 */


undefined4 * __fastcall FUN_00488500(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7f16;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_004804a0();
  local_4 = 0;
  FUN_00486c90();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00486c90();
  *param_1 = &PTR_FUN_004bb0a8;
  param_1[0x9d] = &PTR_LAB_004bb094;
  param_1[0x17b] = DAT_004e4480;
  param_1[0x17c] = DAT_004e4484;
  param_1[0x15d] = 0;
  param_1[0x179] = 0;
  param_1[0x16b] = 0xffffffff;
  param_1[0x16c] = 0xffffffff;
  param_1[0x17a] = 0;
  param_1[0x185] = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x183] = DAT_0083b604;
  param_1[0x17f] = DAT_004e443c;
  param_1[0x180] = DAT_004e4440;
  param_1[0x181] = DAT_004e4444;
  param_1[0x182] = DAT_004e4448;
  param_1[0x184] = DAT_0083b608;
  param_1[0x187] = 0;
  param_1[0x186] = DAT_004e444c;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

