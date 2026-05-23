/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a8eba @ 0x004A8EBA */
/* Body size: 86 addresses */


void FUN_004a8eba(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_004bc500;
  puStack_10 = &LAB_004a8f7c;
  uStack_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_14;
  local_8 = 0;
  iVar1 = FUN_004a8e53();
  if (*(int *)(iVar1 + 0x60) != 0) {
    local_8 = 1;
    iVar1 = FUN_004a8e53();
    (**(code **)(iVar1 + 0x60))();
  }
  local_8 = 0xffffffff;
  FUN_004abfb4();
  return;
}

