/* Ghidra decompiled: golf.exe */
/* Function: FUN_00478df0 @ 0x00478DF0 */


uint __thiscall FUN_00478df0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  
  if (((*(int **)(param_1 + 4) != (int *)0x0) && (-1 < param_2)) && (-1 < param_3)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xd8))();
    if (param_2 < iVar1) {
      if (*(int **)(param_1 + 4) == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xdc))();
      }
      if (param_3 < iVar1) {
        puVar2 = (uint *)FUN_004796a0(param_2,param_3);
        if (*(int **)(param_1 + 4) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 4) + 0x24))(1);
        }
        if (puVar2 != (uint *)0x0) {
          if (*(int **)(param_1 + 4) == (int *)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xe4))();
          }
          if (*piVar3 != 8) {
            if (*piVar3 != 0x10) {
              return *puVar2;
            }
            return (uint)(ushort)*puVar2;
          }
          return (uint)(byte)*puVar2;
        }
      }
    }
  }
  return 0;
}

