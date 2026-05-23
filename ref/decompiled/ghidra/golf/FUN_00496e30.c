/* Ghidra decompiled: golf.exe */
/* Function: FUN_00496e30 @ 0x00496E30 */
/* Body size: 400 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00496e30(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  DAT_0083ff18 = 1;
  if ((int *)param_1[0x9e] == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*(int *)param_1[0x9e] + 0xd8))();
  }
  if ((int *)param_1[0x9e] == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*(int *)param_1[0x9e] + 0xdc))();
  }
  if (iVar2 < iVar1) {
    if (param_3 != 0x23) {
      if (param_3 != 0x24) {
        return 0;
      }
      iVar1 = param_1[0x160];
      goto LAB_00496ee7;
    }
    param_1[0x163] = param_1[0x161];
  }
  else if (param_3 == 0x21) {
    iVar2 = param_1[0x163];
    iVar1 = param_1[0x160];
    param_1[0x163] = iVar2 - param_1[0x168];
    if (iVar2 - param_1[0x168] < iVar1) goto LAB_00496ee7;
  }
  else {
    if (param_3 != 0x22) {
      return 0;
    }
    iVar2 = param_1[0x163];
    iVar1 = param_1[0x161];
    param_1[0x163] = iVar2 + param_1[0x168];
    if (iVar1 < iVar2 + param_1[0x168]) {
LAB_00496ee7:
      param_1[0x163] = iVar1;
    }
  }
  _DAT_0083ab2c = param_1[0x4c];
  if (param_1[0x162] == 0) {
    (**(code **)(*(int *)param_1[0x4c] + 0xe4))(param_1[0x15e],param_1[0x163]);
    pcVar3 = (code *)param_1[0x4eb];
    if (pcVar3 == (code *)0x0) goto LAB_00496f87;
    iVar1 = param_1[0x163];
  }
  else {
    (**(code **)(*(int *)param_1[0x4c] + 0xe4))
              (param_1[0x15e],(param_1[0x161] - param_1[0x163]) + param_1[0x160]);
    pcVar3 = (code *)param_1[0x4eb];
    if (pcVar3 == (code *)0x0) goto LAB_00496f87;
    iVar1 = (param_1[0x161] - param_1[0x163]) + param_1[0x160];
  }
  (*pcVar3)(param_1[0x15e],iVar1);
LAB_00496f87:
  if (*(int **)(param_1[0x4c] + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(param_1[0x4c] + 0x84) + 0x1c))();
  }
  param_1[0x167] = -1;
  (**(code **)(*param_1 + 0x120))();
  return 1;
}

