/* Ghidra decompiled: golf.exe */
/* Function: FUN_00474ae0 @ 0x00474AE0 */
/* Body size: 306 addresses */


undefined4 * __fastcall FUN_00474ae0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7b4e;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  *param_1 = &PTR_LAB_004ba86c;
  param_1[1] = 0;
  FUN_00492850();
  local_4 = 0;
  FUN_00492850();
  *param_1 = &PTR_LAB_004ba858;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  puVar2 = param_1 + 0x45;
  iVar3 = 0x28;
  do {
    puVar2[0x28] = 0;
    *puVar2 = 0xfffffffe;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x2b] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = DAT_004e4210;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  uVar1 = DAT_0083ad44;
  param_1[0x1f] = 0xffffffff;
  param_1[0x23] = 2;
  param_1[0x27] = 2;
  param_1[0x1c] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x24] = 2;
  param_1[0x28] = 2;
  param_1[0x1d] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x25] = 2;
  param_1[0x29] = 2;
  param_1[0x1e] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x26] = 2;
  param_1[0x2a] = 2;
  param_1[0x17] = uVar1;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

