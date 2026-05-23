/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a33e0 @ 0x004A33E0 */
/* Body size: 147 addresses */


void __fastcall FUN_004a33e0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(int *)(param_1 + -0x28) = (int)&PTR_LAB_004ba2c4;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x24) + 4) + -0x24 + param_1) = &PTR_LAB_004ba2c0;
  if (*(int *)(param_1 + -0x20) == 0) {
    *(undefined4 *)(param_1 + -0x14) = 0;
    return;
  }
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
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x20) = 0;
  *(undefined4 *)(param_1 + -0x18) = 0;
  *(undefined4 *)(param_1 + -0x14) = 0;
  return;
}

