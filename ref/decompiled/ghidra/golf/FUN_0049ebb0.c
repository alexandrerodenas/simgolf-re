/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049ebb0 @ 0x0049EBB0 */


int * __thiscall FUN_0049ebb0(int *param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b926a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  if (param_2 != 0) {
    *param_1 = (int)&DAT_004bc01c;
    FUN_004804a0();
    local_4 = 0;
    FUN_00489150();
  }
  *(undefined ***)(*(int *)(*param_1 + 4) + (int)param_1) = &PTR_LAB_004bbeb0;
  *(undefined ***)(*(int *)(*param_1 + 4) + 0x274 + (int)param_1) = &PTR_LAB_004bbe9c;
  *(undefined ***)(*(int *)(*param_1 + 8) + (int)param_1) = &PTR_LAB_004bbe90;
  *(int *)(*(int *)(*param_1 + 4) + -4 + (int)param_1) = *(int *)(*param_1 + 4) + -0x1c;
  *(int *)(*(int *)(*param_1 + 8) + -4 + (int)param_1) = *(int *)(*param_1 + 8) + -0x594;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = (int)PTR_DAT_004e4a28;
  param_1[4] = (int)PTR_DAT_004e4a24;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

