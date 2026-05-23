/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049fe50 @ 0x0049FE50 */
/* Body size: 221 addresses */


int FUN_0049fe50(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_2c4 [696];
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b928b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_00474ae0();
  local_4 = 0;
  iVar1 = FUN_00475840(s_jackal_pcx_004e49fc,0,0,0x100,2);
  if (iVar1 != 0) {
    local_4 = 0xffffffff;
    FUN_00474c40();
    *unaff_FS_OFFSET = local_c;
    return iVar1;
  }
  FUN_00473bf0(local_2c4,1,0x23,0x20,0x20,1,1);
  FUN_00473bf0(local_2c4,0x22,0x23,0x20,0x20,1,1);
  local_4 = 0xffffffff;
  FUN_00474c40();
  *unaff_FS_OFFSET = local_c;
  return 0;
}

