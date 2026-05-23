/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a3480 @ 0x004A3480 */
/* Body size: 343 addresses */


void __fastcall FUN_004a3480(int param_1)

{
  int *piVar1;
  undefined4 *unaff_FS_OFFSET;
  int local_14;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_004b9409;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  piVar1 = (int *)(param_1 + -0xe0);
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0xe0) + 4) + -0xe0 + param_1) = &PTR_LAB_004bc244;
  *(undefined ***)(*(int *)(*piVar1 + 4) + 0x194 + param_1) = &PTR_LAB_004bc230;
  *(undefined ***)(*(int *)(*piVar1 + 8) + -0xe0 + param_1) = &PTR_LAB_004bc224;
  *(int *)(*(int *)(*piVar1 + 4) + -0xe4 + param_1) = *(int *)(*piVar1 + 4) + -0xe0;
  *(int *)(*(int *)(*piVar1 + 8) + -0xe4 + param_1) = *(int *)(*piVar1 + 8) + -0x658;
  local_4 = 1;
  FUN_004a35e0();
  local_4 = local_4 & 0xffffff00;
  *(int *)(param_1 + -0x68) = (int)&PTR_LAB_004ba2c4;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -100) + 4) + -100 + param_1) = &PTR_LAB_004ba2c0;
  if (*(int *)(param_1 + -0x60) != 0) {
    local_14 = 0;
    if (0 < *(int *)(param_1 + -0x58)) {
      do {
        *(undefined4 *)(param_1 + -0x5c) = *(undefined4 *)(*(int *)(param_1 + -0x60) + 0xc);
        piVar1 = *(int **)(*(int *)(param_1 + -0x60) + 8);
        (**(code **)(*(int *)(param_1 + -0x68) + 4))(piVar1);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(*(int *)(param_1 + -0x60) + 8) = 0;
        piVar1 = *(int **)(param_1 + -0x60);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(param_1 + -0x60) = *(undefined4 *)(param_1 + -0x5c);
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(param_1 + -0x58));
    }
    *(undefined4 *)(param_1 + -0x60) = 0;
    *(undefined4 *)(param_1 + -0x54) = 0;
    *(undefined4 *)(param_1 + -0x58) = 0;
  }
  *(undefined4 *)(param_1 + -0x54) = 0;
  DAT_00839650 = *(undefined4 *)(param_1 + -0x3c);
  *(undefined ***)(param_1 + -0x40) = &PTR_FUN_004ba278;
  local_4 = 0xffffffff;
  FUN_004928d0();
  *unaff_FS_OFFSET = uStack_c;
  return;
}

