/* Ghidra decompiled: golf.exe */
/* Function: FUN_004835f0 @ 0x004835F0 */
/* Body size: 338 addresses */


void __fastcall FUN_004835f0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_FS_OFFSET;
  int local_14;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b7dcb;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  *(int *)(param_1 + -0x20) = (int)&PTR_FUN_004babac;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x1c) + 4) + -0x1c + param_1) = &PTR_LAB_004baba8;
  local_4 = 0;
  if (*(int *)(param_1 + -0x18) != 0) {
    local_14 = 0;
    if (0 < *(int *)(param_1 + -0x10)) {
      do {
        *(undefined4 *)(param_1 + -0x14) = *(undefined4 *)(*(int *)(param_1 + -0x18) + 0xc);
        piVar1 = *(int **)(*(int *)(param_1 + -0x18) + 8);
        (**(code **)(*(int *)(param_1 + -0x20) + 4))(piVar1);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(*(int *)(param_1 + -0x18) + 8) = 0;
        piVar1 = *(int **)(param_1 + -0x18);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(param_1 + -0x18) = *(undefined4 *)(param_1 + -0x14);
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(param_1 + -0x10));
    }
    *(undefined4 *)(param_1 + -0x18) = 0;
    *(undefined4 *)(param_1 + -0xc) = 0;
    *(undefined4 *)(param_1 + -0x10) = 0;
  }
  *(undefined4 *)(param_1 + -0xc) = 0;
  local_4 = 0xffffffff;
  *(int *)(param_1 + -0x20) = (int)&PTR_LAB_004ba2ac;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x1c) + 4) + -0x1c + param_1) = &PTR_LAB_004ba2a8;
  if (*(int *)(param_1 + -0x18) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + -0x10)) {
      do {
        *(undefined4 *)(param_1 + -0x14) = *(undefined4 *)(*(int *)(param_1 + -0x18) + 0xc);
        piVar1 = *(int **)(*(int *)(param_1 + -0x18) + 8);
        (**(code **)(*(int *)(param_1 + -0x20) + 4))(piVar1);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(*(int *)(param_1 + -0x18) + 8) = 0;
        piVar1 = *(int **)(param_1 + -0x18);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        iVar2 = iVar2 + 1;
        *(undefined4 *)(param_1 + -0x18) = *(undefined4 *)(param_1 + -0x14);
      } while (iVar2 < *(int *)(param_1 + -0x10));
    }
    *(undefined4 *)(param_1 + -0x18) = 0;
    *(undefined4 *)(param_1 + -0xc) = 0;
    *(undefined4 *)(param_1 + -0x10) = 0;
  }
  *(undefined4 *)(param_1 + -0xc) = 0;
  *unaff_FS_OFFSET = uStack_c;
  return;
}

