/* Ghidra decompiled: golf.exe */
/* Function: FUN_00491310 @ 0x00491310 */
/* Body size: 90 addresses */


undefined4 FUN_00491310(void)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b808b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  pvVar1 = operator_new(0x2114);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_0048ce00(pvVar1);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}

