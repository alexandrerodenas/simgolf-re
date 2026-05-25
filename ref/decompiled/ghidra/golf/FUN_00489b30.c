/* Ghidra decompiled: golf.exe */
/* Function: FUN_00489b30 @ 0x00489B30 */


void __fastcall FUN_00489b30(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  int local_14;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7f8b;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  *(int *)(param_1 + -0x28) = (int)&PTR_FUN_004bb22c;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x24) + 4) + -0x24 + param_1) = &PTR_LAB_004bb228;
  local_4 = 0;
  if (*(int *)(param_1 + -0x20) != 0) {
    local_14 = 0;
    if (0 < *(int *)(param_1 + -0x18)) {
      do {
        *(undefined4 *)(param_1 + -0x1c) = *(undefined4 *)(*(int *)(param_1 + -0x20) + 0xc);
        piVar1 = *(int **)(*(int *)(param_1 + -0x20) + 8);
        (**(code **)(*(int *)(param_1 + -0x28) + 4))(piVar1);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(*(int *)(param_1 + -0x20) + 8) = 0;
        piVar1 = *(int **)(param_1 + -0x20);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(param_1 + -0x20) = *(undefined4 *)(param_1 + -0x1c);
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(param_1 + -0x18));
    }
    *(undefined4 *)(param_1 + -0x20) = 0;
    *(undefined4 *)(param_1 + -0x14) = 0;
    *(undefined4 *)(param_1 + -0x18) = 0;
  }
  *(undefined4 *)(param_1 + -0x14) = 0;
  local_4 = 0xffffffff;
  *(int *)(param_1 + -0x28) = (int)&PTR_LAB_004ba270;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x24) + 4) + -0x24 + param_1) = &PTR_LAB_004ba26c;
  if (*(int *)(param_1 + -0x20) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + -0x18)) {
      do {
        *(undefined4 *)(param_1 + -0x1c) = *(undefined4 *)(*(int *)(param_1 + -0x20) + 0xc);
        piVar1 = *(int **)(*(int *)(param_1 + -0x20) + 8);
        (**(code **)(*(int *)(param_1 + -0x28) + 4))(piVar1);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(*(int *)(param_1 + -0x20) + 8) = 0;
        piVar1 = *(int **)(param_1 + -0x20);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        iVar2 = iVar2 + 1;
        *(undefined4 *)(param_1 + -0x20) = *(undefined4 *)(param_1 + -0x1c);
      } while (iVar2 < *(int *)(param_1 + -0x18));
    }
    *(undefined4 *)(param_1 + -0x20) = 0;
    *(undefined4 *)(param_1 + -0x14) = 0;
    *(undefined4 *)(param_1 + -0x18) = 0;
  }
  *(undefined4 *)(param_1 + -0x14) = 0;
  *unaff_FS_OFFSET = uStack_c;
  return;
}

