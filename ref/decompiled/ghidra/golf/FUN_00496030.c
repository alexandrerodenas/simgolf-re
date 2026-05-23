/* Ghidra decompiled: golf.exe */
/* Function: FUN_00496030 @ 0x00496030 */
/* Body size: 407 addresses */


undefined4 * __fastcall FUN_00496030(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b8316;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_004804a0();
  local_4 = 0;
  FUN_004a13f0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004a13f0();
  *param_1 = &PTR_FUN_004bbac8;
  param_1[0x9d] = &PTR_LAB_004bbab4;
  param_1[0x15d] = DAT_0083ff1c;
  param_1[0x15f] = DAT_004e4770;
  param_1[0x162] = 0;
  param_1[0x160] = DAT_0083ff20;
  param_1[0x161] = DAT_004e4774;
  param_1[0x163] = DAT_0083ff20;
  param_1[0x164] = DAT_004e476c;
  param_1[0x167] = 0xffffffff;
  param_1[0x166] = 0;
  param_1[0x165] = DAT_004e4768;
  param_1[0x168] = DAT_004e4764;
  param_1[0x169] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16a] = DAT_004e4778;
  param_1[0x16f] = DAT_004e477c;
  param_1[0x171] = DAT_004e4780;
  param_1[0x172] = DAT_004e4784;
  param_1[0x173] = DAT_004e4788;
  param_1[0x174] = DAT_004e478c;
  puVar3 = param_1 + 0x17a;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    puVar3[-3] = *(undefined4 *)((int)&DAT_0083ff24 + iVar1);
    *puVar3 = *(undefined4 *)((int)&DAT_0083ff30 + iVar1);
    puVar3[3] = *(undefined4 *)((int)&DAT_0083ff3c + iVar1);
    puVar3[6] = *(undefined4 *)((int)&DAT_0083ff48 + iVar1);
    puVar3 = puVar3 + 1;
    iVar1 = iVar2;
  } while (iVar2 < 0xc);
  param_1[0x175] = DAT_0083ff58;
  param_1[0x176] = DAT_0083ff5c;
  param_1[0x4eb] = 0;
  param_1[0x4ec] = 0;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

