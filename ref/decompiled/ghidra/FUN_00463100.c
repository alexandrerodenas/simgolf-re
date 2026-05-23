/* Ghidra decompiled: golf.exe */
/* Function: FUN_00463100 @ 0x00463100 */
/* Body size: 107 addresses */


void FUN_00463100(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7a58;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  FUN_00482fd0();
  local_4 = 0;
  for (iVar1 = DAT_0082c160; iVar1 != -1; iVar1 = (&DAT_008361f4)[iVar1]) {
    FUN_00462be0(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_00483010();
  *unaff_FS_OFFSET = uStack_c;
  return;
}

