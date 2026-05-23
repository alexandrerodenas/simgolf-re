/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a8f1b @ 0x004A8F1B */
/* Body size: 79 addresses */


void FUN_004a8f1b(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_004bc518;
  puStack_10 = &LAB_004a8f7c;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  if (PTR_FUN_004e4bf4 != (undefined *)0x0) {
    local_8 = 1;
    (*(code *)PTR_FUN_004e4bf4)();
  }
  local_8 = 0xffffffff;
  FUN_004a8eba();
  return;
}

