/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a0740 @ 0x004A0740 */


undefined4 * __thiscall FUN_004a0740(undefined4 *param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b930c;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  if (param_2 != 0) {
    param_1[1] = &DAT_004bc074;
    param_1[0x16] = &DAT_004bc068;
    param_1[0x1e] = &DAT_004bc05c;
    param_1[0x24] = &DAT_004bc050;
    param_1[0x5b] = &DAT_004bc044;
    FUN_004804a0();
    local_4 = 0;
    FUN_00489150();
    local_4 = 1;
  }
  FUN_00489cb0(0);
  local_4 = 2;
  FUN_0049d5a0(0);
  local_4._0_1_ = 3;
  FUN_0049ebb0(0);
  local_4._0_1_ = 4;
  FUN_004a3110(0);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004a2250(0);
  *param_1 = &PTR_LAB_004bba3c;
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = &PTR_LAB_004bb8d0;
  *(undefined ***)(*(int *)(param_1[1] + 4) + 0x278 + (int)param_1) = &PTR_LAB_004bb8bc;
  *(undefined ***)(*(int *)(param_1[1] + 8) + 4 + (int)param_1) = &PTR_LAB_004bb8b0;
  *(int *)(*(int *)(param_1[1] + 4) + (int)param_1) = *(int *)(param_1[1] + 4) + -0x1f8;
  *(int *)(*(int *)(param_1[1] + 8) + (int)param_1) = *(int *)(param_1[1] + 8) + -0x770;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

