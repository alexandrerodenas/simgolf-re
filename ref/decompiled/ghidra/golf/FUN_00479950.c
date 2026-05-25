/* Ghidra decompiled: golf.exe */
/* Function: FUN_00479950 @ 0x00479950 */


char __thiscall FUN_00479950(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)FUN_004796a0(param_2,param_3);
  if (pcVar2 != (char *)0x0) {
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0xe4))();
    }
    iVar1 = *piVar3;
    if (iVar1 == 0x10) {
      param_4 = *pcVar2 << 3;
    }
    else if ((iVar1 == 0x18) || (iVar1 == 0x20)) {
      param_4 = *pcVar2;
    }
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x24))(1);
    }
    return param_4;
  }
  return param_4;
}

