/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a8d0f @ 0x004A8D0F */


void FUN_004a8d0f(int param_1)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_004bc4f0;
  puStack_10 = &LAB_004a8f7c;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  if ((param_1 != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4), iVar1 != 0)) {
    local_8 = 0;
    FUN_004a522f(*(undefined4 *)(param_1 + 0x18),iVar1);
  }
  *unaff_FS_OFFSET = local_14;
  return;
}

