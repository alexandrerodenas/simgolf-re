/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049d1b0 @ 0x0049D1B0 */
/* Body size: 199 addresses */


int FUN_0049d1b0(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_2c4 [696];
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b91eb;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_00474ae0();
  local_4 = 0;
  iVar1 = FUN_00475840(s_jackal_pcx_004e49fc,0,10,0xec,0);
  if (iVar1 == 0) {
    iVar1 = FUN_00473bf0(local_2c4,1,0x12,0x10,0x10,1,1);
  }
  else {
    iVar1 = FUN_004745c0(0x10,0x10);
  }
  local_4 = 0xffffffff;
  if (iVar1 != 0) {
    FUN_00474c40();
    *unaff_FS_OFFSET = local_c;
    return iVar1;
  }
  FUN_00474c40();
  *unaff_FS_OFFSET = local_c;
  return 0;
}

