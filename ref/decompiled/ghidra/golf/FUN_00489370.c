/* Ghidra decompiled: golf.exe */
/* Function: FUN_00489370 @ 0x00489370 */


void __fastcall FUN_00489370(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *unaff_FS_OFFSET;
  int local_14;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_004b7f74;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  *param_1 = &PTR_FUN_004bb21c;
  local_4 = 1;
  FUN_004894b0();
  puVar1 = param_1 + 0x3a;
  param_1[0x30] = &PTR_FUN_004bb22c;
  *(undefined ***)(*(int *)(param_1[0x31] + 4) + -0x24 + (int)puVar1) = &PTR_LAB_004bb228;
  local_4._0_1_ = 2;
  FUN_004026a0();
  param_1[0x35] = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x30] = &PTR_LAB_004ba270;
  *(undefined ***)(*(int *)(param_1[0x31] + 4) + -0x24 + (int)puVar1) = &PTR_LAB_004ba26c;
  if (param_1[0x32] != 0) {
    local_14 = 0;
    if (0 < (int)param_1[0x34]) {
      do {
        param_1[0x33] = *(undefined4 *)(param_1[0x32] + 0xc);
        piVar2 = *(int **)(param_1[0x32] + 8);
        (**(code **)(param_1[0x30] + 4))(piVar2);
        if (piVar2 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar2 + 4) + (int)piVar2))(1);
        }
        *(undefined4 *)(param_1[0x32] + 8) = 0;
        piVar2 = (int *)param_1[0x32];
        if (piVar2 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar2 + 4) + (int)piVar2))(1);
        }
        param_1[0x32] = param_1[0x33];
        local_14 = local_14 + 1;
      } while (local_14 < (int)param_1[0x34]);
    }
    param_1[0x32] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
  }
  param_1[0x35] = 0;
  DAT_00839650 = param_1[0x3b];
  *puVar1 = &PTR_FUN_004ba278;
  local_4 = 0xffffffff;
  FUN_00474810();
  *unaff_FS_OFFSET = uStack_c;
  return;
}

