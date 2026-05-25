/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a2250 @ 0x004A2250 */


int * __thiscall FUN_004a2250(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b935d;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  if (param_2 != 0) {
    *param_1 = (int)&DAT_004bc214;
    FUN_004804a0();
    local_4 = 0;
    FUN_00489150();
  }
  *(undefined ***)(*(int *)(*param_1 + 4) + (int)param_1) = &PTR_LAB_004bc0a8;
  *(undefined ***)(*(int *)(*param_1 + 4) + 0x274 + (int)param_1) = &PTR_LAB_004bc094;
  *(undefined ***)(*(int *)(*param_1 + 8) + (int)param_1) = &PTR_LAB_004bc088;
  *(int *)(*(int *)(*param_1 + 4) + -4 + (int)param_1) = *(int *)(*param_1 + 4) + -0x8c;
  *(int *)(*(int *)(*param_1 + 8) + -4 + (int)param_1) = *(int *)(*param_1 + 8) + -0x604;
  piVar1 = param_1 + 0xb;
  iVar2 = 10;
  do {
    piVar1[-10] = 0;
    *piVar1 = 0;
    piVar1[10] = 10;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x21] = DAT_008409c4;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

