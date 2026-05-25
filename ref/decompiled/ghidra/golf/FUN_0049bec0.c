/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049bec0 @ 0x0049BEC0 */


void __thiscall FUN_0049bec0(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1[2] != 0) {
    iVar3 = 0;
    if (0 < param_1[4]) {
      do {
        if (*(int *)(param_1[3] + 4) == param_2) {
          *(undefined4 *)(*(int *)(param_1[3] + 0xc) + 0x10) = *(undefined4 *)(param_1[3] + 0x10);
          *(undefined4 *)(*(int *)(param_1[3] + 0x10) + 0xc) = *(undefined4 *)(param_1[3] + 0xc);
          piVar1 = (int *)param_1[3];
          if (piVar1 == (int *)param_1[2]) {
            param_1[2] = piVar1[3];
          }
          param_1[3] = piVar1[3];
          puVar2 = (undefined4 *)piVar1[2];
          (**(code **)(*param_1 + 4))(puVar2);
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)*puVar2)(1);
          }
          piVar1[2] = 0;
          if (piVar1 != (int *)0x0) {
            (*(code *)**(undefined4 **)(*(int *)(*piVar1 + 4) + (int)piVar1))(1);
          }
          param_1[4] = param_1[4] + -1;
          break;
        }
        iVar3 = iVar3 + 1;
        param_1[3] = *(int *)(param_1[3] + 0xc);
      } while (iVar3 < param_1[4]);
    }
    if (param_1[4] == 0) {
      param_1[2] = 0;
    }
    param_1[5] = param_1[4] + -1;
  }
  return;
}

