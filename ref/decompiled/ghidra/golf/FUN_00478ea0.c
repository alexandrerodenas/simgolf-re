/* Ghidra decompiled: golf.exe */
/* Function: FUN_00478ea0 @ 0x00478EA0 */
/* Body size: 173 addresses */


undefined4 __thiscall FUN_00478ea0(int param_1,int param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  int *piVar3;
  
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return 7;
  }
  if ((-1 < param_2) && (-1 < param_3)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xd8))();
    if (param_2 < iVar1) {
      if (*(int **)(param_1 + 4) == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xdc))();
      }
      if (param_3 < iVar1) {
        puVar2 = (undefined2 *)FUN_004796a0(param_2,param_3);
        if (puVar2 != (undefined2 *)0x0) {
          if (*(int **)(param_1 + 4) == (int *)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xe4))();
          }
          if (*piVar3 == 8) {
            *(undefined1 *)puVar2 = (undefined1)param_4;
          }
          else {
            if (*piVar3 != 0x10) {
              return 0x17;
            }
            *puVar2 = param_4;
          }
        }
        if (*(int **)(param_1 + 4) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 4) + 0x24))(1);
        }
      }
    }
  }
  return 0;
}

