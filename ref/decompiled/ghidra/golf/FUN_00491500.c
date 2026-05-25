/* Ghidra decompiled: golf.exe */
/* Function: FUN_00491500 @ 0x00491500 */


void __fastcall FUN_00491500(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b81a0;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  *(undefined ***)(param_1 + -0x1fc) = &PTR_LAB_004bba3c;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x1f8) + 4) + -0x1f8 + param_1) = &PTR_LAB_004bb8d0;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x1f8) + 4) + 0x7c + param_1) = &PTR_LAB_004bb8bc;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x1f8) + 8) + -0x1f8 + param_1) = &PTR_LAB_004bb8b0;
  iVar1 = *(int *)(*(int *)(param_1 + -0x1f8) + 4);
  *(int *)(iVar1 + -0x1fc + param_1) = iVar1 + -0x1f8;
  iVar1 = *(int *)(*(int *)(param_1 + -0x1f8) + 8);
  *(int *)(iVar1 + -0x1fc + param_1) = iVar1 + -0x770;
  local_4 = 4;
  FUN_004a0890();
  local_4._0_1_ = 3;
  FUN_004a2330();
  local_4._0_1_ = 2;
  FUN_004a3480();
  local_4._0_1_ = 1;
  FUN_0049ec80();
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_1 == 0x1fc) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)(param_1 + -0x1a4);
  }
  *(undefined ***)(*(int *)(*piVar2 + 4) + (int)piVar2) = &PTR_LAB_004bb744;
  *(undefined ***)(*(int *)(*piVar2 + 4) + 0x274 + (int)piVar2) = &PTR_LAB_004bb730;
  *(undefined ***)(*(int *)(*piVar2 + 8) + (int)piVar2) = &PTR_LAB_004bb724;
  *(int *)(*(int *)(*piVar2 + 4) + -4 + (int)piVar2) = *(int *)(*piVar2 + 4) + -0x24;
  *(int *)(*(int *)(*piVar2 + 8) + -4 + (int)piVar2) = *(int *)(*piVar2 + 8) + -0x59c;
  FUN_0049d690();
  local_4 = 0xffffffff;
  FUN_00489de0();
  *unaff_FS_OFFSET = local_c;
  return;
}

