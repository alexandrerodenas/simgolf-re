/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047ae80 @ 0x0047AE80 */


void __thiscall FUN_0047ae80(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 != (int *)0x0) && (*(int *)(param_1 + 0x140) != 0)) {
    if (*(int *)(param_1 + 0x138) == 0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = *(int **)(*(int *)(param_1 + 0x13c) + 4);
    }
    if (param_2 != piVar1) {
      DAT_0083ab98 = piVar1;
      if (*(int *)(param_1 + 0x138) != 0) {
        iVar2 = 0;
        *(undefined4 *)(param_1 + 0x144) = 0;
        *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x138);
        if (0 < *(int *)(param_1 + 0x140)) {
          while (*(int **)(*(int *)(param_1 + 0x13c) + 4) != param_2) {
            iVar2 = iVar2 + 1;
            *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
            *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(*(int *)(param_1 + 0x13c) + 0xc);
            if (*(int *)(param_1 + 0x140) <= iVar2) {
              return;
            }
          }
          if ((piVar1 != (int *)0x0) && (1 < *(int *)(param_1 + 0x140))) {
            (**(code **)(*piVar1 + 0xf0))(0);
          }
          if ((*(int *)(param_1 + 0x138) != 0) &&
             (piVar1 = *(int **)(*(int *)(param_1 + 0x13c) + 4), piVar1 != (int *)0x0)) {
            (**(code **)(*piVar1 + 0xf0))(1);
          }
        }
      }
    }
  }
  return;
}

