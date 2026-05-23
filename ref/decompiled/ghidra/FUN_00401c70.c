/* Ghidra decompiled: golf.exe */
/* Function: FUN_00401c70 @ 0x00401C70 */
/* Body size: 147 addresses */


void __fastcall FUN_00401c70(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(int *)(param_1 + -0x1c) = (int)&PTR_LAB_004ba270;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x18) + 4) + -0x18 + param_1) = &PTR_LAB_004ba26c;
  if (*(int *)(param_1 + -0x14) == 0) {
    *(undefined4 *)(param_1 + -8) = 0;
    return;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + -0xc)) {
    do {
      *(undefined4 *)(param_1 + -0x10) = *(undefined4 *)(*(int *)(param_1 + -0x14) + 0xc);
      piVar1 = *(int **)(*(int *)(param_1 + -0x14) + 8);
      (**(code **)(*(int *)(param_1 + -0x1c) + 4))(piVar1);
      if (piVar1 != (int *)0x0) {
        (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
      }
      *(undefined4 *)(*(int *)(param_1 + -0x14) + 8) = 0;
      piVar1 = *(int **)(param_1 + -0x14);
      if (piVar1 != (int *)0x0) {
        (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
      }
      iVar2 = iVar2 + 1;
      *(undefined4 *)(param_1 + -0x14) = *(undefined4 *)(param_1 + -0x10);
    } while (iVar2 < *(int *)(param_1 + -0xc));
  }
  *(undefined4 *)(param_1 + -8) = 0;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined4 *)(param_1 + -8) = 0;
  return;
}

