/* Ghidra decompiled: golf.exe */
/* Function: FUN_00485e80 @ 0x00485E80 */


void __thiscall FUN_00485e80(int param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  iVar3 = param_4;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xcc))();
    if (*piVar1 <= param_2) {
      if (*(int **)(param_1 + 4) == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
      }
      if (param_2 < *(int *)(iVar2 + 8)) {
        if (param_3 != param_4) {
          if (param_4 < param_3) {
            param_4 = param_3;
            param_3 = iVar3;
          }
          if (*(int **)(param_1 + 4) == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
          }
          if (param_3 < *(int *)(iVar3 + 0xc)) {
            if (*(int **)(param_1 + 4) == (int *)0x0) {
              iVar3 = 0;
            }
            else {
              iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
            }
            if (*(int *)(iVar3 + 4) <= param_4) {
              if (*(int **)(param_1 + 4) == (int *)0x0) {
                iVar3 = 0;
              }
              else {
                iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
              }
              if (param_3 < *(int *)(iVar3 + 4)) {
                if (*(int **)(param_1 + 4) == (int *)0x0) {
                  iVar3 = 0;
                }
                else {
                  iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
                }
                param_3 = *(int *)(iVar3 + 4);
              }
              if (*(int **)(param_1 + 4) == (int *)0x0) {
                iVar3 = 0;
              }
              else {
                iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
              }
              if (*(int *)(iVar3 + 0xc) <= param_4) {
                if (*(int **)(param_1 + 4) == (int *)0x0) {
                  iVar3 = 0;
                }
                else {
                  iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xcc))();
                }
                param_4 = *(int *)(iVar3 + 0xc) + -1;
              }
              if (*(int **)(param_1 + 4) != (int *)0x0) {
                puVar4 = (undefined1 *)
                         (**(code **)(**(int **)(param_1 + 4) + 0x14))(param_2,param_3);
                if (puVar4 != (undefined1 *)0x0) {
                  if (*(int **)(param_1 + 4) == (int *)0x0) {
                    param_2 = 0;
                  }
                  else {
                    param_2 = (**(code **)(**(int **)(param_1 + 4) + 0xe0))();
                  }
                  uVar5 = (param_4 - param_3) + 1U >> 1;
                  do {
                    *puVar4 = param_5;
                    puVar4 = puVar4 + param_2 * 2;
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

