/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a8a06 @ 0x004A8A06 */


undefined4
FUN_004a8a06(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004bc4c8;
  puStack_10 = &LAB_004a8f7c;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  FUN_004a8e53();
  FUN_004a8e53();
  iVar1 = FUN_004a8e53();
  *(undefined4 *)(iVar1 + 0x6c) = param_1;
  iVar1 = FUN_004a8e53();
  *(undefined4 *)(iVar1 + 0x70) = param_3;
  local_8 = 1;
  uVar2 = FUN_004a52c2(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_004a8ad3();
  *unaff_FS_OFFSET = local_14;
  return uVar2;
}

