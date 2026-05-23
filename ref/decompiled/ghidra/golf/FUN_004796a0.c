/* Ghidra decompiled: golf.exe */
/* Function: FUN_004796a0 @ 0x004796A0 */
/* Body size: 143 addresses */


int __thiscall FUN_004796a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xd8))();
  }
  if (param_2 < iVar1) {
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xdc))();
    }
    if ((param_3 < iVar1) && (iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x10))(), iVar1 != 0))
    {
      if (*(int **)(param_1 + 4) == (int *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (undefined4 *)(**(code **)(**(int **)(param_1 + 4) + 0xe4))();
      }
      switch(*puVar2) {
      case 8:
        if (*(int **)(param_1 + 4) != (int *)0x0) {
          iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xe0))();
          return iVar3 * param_3 + iVar1 + param_2;
        }
        return iVar1 + param_2;
      case 0x10:
        if (*(int **)(param_1 + 4) != (int *)0x0) {
          iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xe0))();
          return iVar1 + (iVar3 * param_3 + param_2) * 2;
        }
        return iVar1 + param_2 * 2;
      case 0x18:
        if (*(int **)(param_1 + 4) != (int *)0x0) {
          iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xe0))();
          param_2 = iVar3 * param_3 + param_2;
          return param_2 + iVar1 + param_2 * 2;
        }
        return param_2 * 3 + iVar1;
      case 0x20:
        if (*(int **)(param_1 + 4) != (int *)0x0) {
          iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xe0))();
          return iVar1 + (iVar3 * param_3 + param_2) * 4;
        }
        return iVar1 + param_2 * 4;
      }
    }
  }
  return 0;
}

