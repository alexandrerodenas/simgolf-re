/* Ghidra decompiled: golf.exe */
/* Function: FUN_00489cb0 @ 0x00489CB0 */
/* Body size: 293 addresses */


undefined4 * __thiscall FUN_00489cb0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7fba;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  if (param_2 != 0) {
    param_1[1] = &DAT_004bb3d0;
    FUN_004804a0();
    local_4 = 0;
    FUN_00489150();
  }
  *param_1 = &PTR_LAB_004bb3cc;
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = &PTR_LAB_004bb260;
  *(undefined ***)(*(int *)(param_1[1] + 4) + 0x278 + (int)param_1) = &PTR_LAB_004bb24c;
  *(undefined ***)(*(int *)(param_1[1] + 8) + 4 + (int)param_1) = &PTR_LAB_004bb240;
  *(int *)(*(int *)(param_1[1] + 4) + (int)param_1) = *(int *)(param_1[1] + 4) + -0x58;
  *(int *)(*(int *)(param_1[1] + 8) + (int)param_1) = *(int *)(param_1[1] + 8) + -0x5d0;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  param_1[0x10] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = DAT_004e44d8;
  param_1[7] = DAT_004e44dc;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = DAT_004e44d0;
  param_1[0xe] = DAT_0083b648;
  uVar1 = DAT_004e44d4;
  param_1[0x11] = 0;
  param_1[0xf] = uVar1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(*(int *)(param_1[1] + 8) + 0xbc + (int)param_1) = 1;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

