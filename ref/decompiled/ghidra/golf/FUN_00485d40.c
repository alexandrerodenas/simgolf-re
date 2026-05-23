/* Ghidra decompiled: golf.exe */
/* Function: FUN_00485d40 @ 0x00485D40 */
/* Body size: 318 addresses */


void __thiscall FUN_00485d40(int param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  iVar2 = param_3;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
    if (*(int *)(iVar1 + 4) <= param_4) {
      if (*(int **)(param_1 + 4) == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
      }
      if (param_4 < *(int *)(iVar1 + 0xc)) {
        if (param_2 != param_3) {
          if (param_3 < param_2) {
            param_3 = param_2;
            param_2 = iVar2;
          }
          if (*(int **)(param_1 + 4) == (int *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
          }
          if (param_2 < *(int *)(iVar2 + 8)) {
            if (*(int **)(param_1 + 4) == (int *)0x0) {
              piVar3 = (int *)0x0;
            }
            else {
              piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xcc))();
            }
            if (*piVar3 <= param_3) {
              if (*(int **)(param_1 + 4) == (int *)0x0) {
                piVar3 = (int *)0x0;
              }
              else {
                piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xcc))();
              }
              if (param_2 < *piVar3) {
                if (*(int **)(param_1 + 4) == (int *)0x0) {
                  piVar3 = (int *)0x0;
                }
                else {
                  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xcc))();
                }
                param_2 = *piVar3;
              }
              if (*(int **)(param_1 + 4) == (int *)0x0) {
                iVar2 = 0;
              }
              else {
                iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
              }
              if (*(int *)(iVar2 + 8) <= param_3) {
                if (*(int **)(param_1 + 4) == (int *)0x0) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
                }
                param_3 = *(int *)(iVar2 + 8) + -1;
              }
              if (*(int **)(param_1 + 4) != (int *)0x0) {
                puVar4 = (undefined1 *)
                         (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_4);
                if (puVar4 != (undefined1 *)0x0) {
                  uVar5 = (param_3 - param_2) + 1U >> 1;
                  do {
                    *puVar4 = param_5;
                    puVar4 = puVar4 + 2;
                    uVar5 = uVar5 - 1;
                  } while (uVar5 != 0);
                  if (*(int **)(param_1 + 4) != (int *)0x0) {
                    (**(code **)(**(int **)(param_1 + 4) + 0x24))(1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

