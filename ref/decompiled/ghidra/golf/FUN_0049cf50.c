/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049cf50 @ 0x0049CF50 */


int __thiscall FUN_0049cf50(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if ((((*(int *)(param_1 + 0xbc) != 0) &&
       (piVar5 = *(int **)(param_1 + 0x948), piVar5 != (int *)0x0)) &&
      (iVar2 = *(int *)(param_1 + 0x938), param_2 < iVar2)) && (-1 < param_2)) {
    iVar3 = *(int *)(param_1 + 0x1a4);
    iVar6 = *piVar5;
    while (iVar6 != iVar3) {
      piVar1 = piVar5 + 4;
      piVar5 = piVar5 + 4;
      iVar6 = *piVar1;
    }
    iVar6 = param_2;
    if (0 < param_2) {
      do {
        piVar5 = piVar5 + 4;
        iVar4 = *piVar5;
        while (iVar4 != iVar3) {
          piVar5 = piVar5 + 4;
          iVar4 = *piVar5;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    while ((param_2 < iVar2 + -1 && ((*(byte *)(piVar5 + 1) & 0x10) == 0))) {
      piVar5 = piVar5 + 4;
      iVar6 = *piVar5;
      while (iVar6 != iVar3) {
        piVar5 = piVar5 + 4;
        iVar6 = *piVar5;
      }
      param_2 = param_2 + 1;
    }
    if (param_2 == iVar2 + -1) {
      if ((*(byte *)(piVar5 + 1) & 0x10) != 0) {
        *(int **)(param_1 + 0x94c) = piVar5;
        return param_2;
      }
    }
    else if (param_2 != iVar2) {
      *(int **)(param_1 + 0x94c) = piVar5;
      return param_2;
    }
  }
  return -1;
}

