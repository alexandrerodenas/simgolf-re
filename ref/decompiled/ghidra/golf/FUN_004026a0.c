/* Ghidra decompiled: golf.exe */
/* Function: FUN_004026a0 @ 0x004026A0 */


void __fastcall FUN_004026a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[2] != 0) {
    iVar2 = 0;
    if (0 < param_1[4]) {
      do {
        param_1[3] = *(int *)(param_1[2] + 0xc);
        piVar1 = *(int **)(param_1[2] + 8);
        (**(code **)(*param_1 + 4))(piVar1);
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        *(undefined4 *)(param_1[2] + 8) = 0;
        piVar1 = (int *)param_1[2];
        if (piVar1 != (int *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
        }
        iVar2 = iVar2 + 1;
        param_1[2] = param_1[3];
      } while (iVar2 < param_1[4]);
    }
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
  }
  return;
}

