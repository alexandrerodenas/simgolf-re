/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049d5a0 @ 0x0049D5A0 */


int * __thiscall FUN_0049d5a0(int *param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b921a;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  if (param_2 != 0) {
    *param_1 = (int)&DAT_004bbe7c;
    FUN_004804a0();
    local_4 = 0;
    FUN_00489150();
  }
  *(undefined ***)(*(int *)(*param_1 + 4) + (int)param_1) = &PTR_LAB_004bb744;
  *(undefined ***)(*(int *)(*param_1 + 4) + 0x274 + (int)param_1) = &PTR_LAB_004bb730;
  *(undefined ***)(*(int *)(*param_1 + 8) + (int)param_1) = &PTR_LAB_004bb724;
  *(int *)(*(int *)(*param_1 + 4) + -4 + (int)param_1) = *(int *)(*param_1 + 4) + -0x24;
  *(int *)(*(int *)(*param_1 + 8) + -4 + (int)param_1) = *(int *)(*param_1 + 8) + -0x59c;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = (int)PTR_DAT_004e4a14;
  param_1[3] = (int)PTR_DAT_004e4a18;
  param_1[1] = (int)PTR_DAT_004e4a10;
  param_1[6] = *(int *)(*(int *)(*param_1 + 8) + 0x80 + (int)param_1);
  param_1[7] = *(int *)(*(int *)(*param_1 + 8) + 0x80 + (int)param_1);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

