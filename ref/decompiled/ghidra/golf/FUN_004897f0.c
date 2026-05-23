/* Ghidra decompiled: golf.exe */
/* Function: FUN_004897f0 @ 0x004897F0 */
/* Body size: 159 addresses */


undefined4 __thiscall FUN_004897f0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  FUN_004894b0();
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  if (*(int *)(param_1 + 200) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0xd0)) {
      do {
        *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(*(int *)(param_1 + 200) + 0xc);
        piVar1 = *(int **)(*(int *)(param_1 + 200) + 8);
        (**(code **)(*(int *)(param_1 + 0xc0) + 4))(piVar1);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(*(int *)(param_1 + 200) + 8) = 0;
        piVar1 = *(int **)(param_1 + 200);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        iVar2 = iVar2 + 1;
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xcc);
      } while (iVar2 < *(int *)(param_1 + 0xd0));
    }
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  return 0;
}

