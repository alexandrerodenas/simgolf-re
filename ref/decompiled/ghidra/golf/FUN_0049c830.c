/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049c830 @ 0x0049C830 */


undefined4 __thiscall FUN_0049c830(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b91cb;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  pvVar1 = operator_new(0x58);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00482fd0();
  }
  *(int *)(param_2 + 4) = iVar2;
  if (iVar2 == 0) {
    *unaff_FS_OFFSET = local_c;
    return 4;
  }
  *(int *)(param_1 + 0x1c) = iVar2;
  *unaff_FS_OFFSET = local_c;
  return 0;
}

