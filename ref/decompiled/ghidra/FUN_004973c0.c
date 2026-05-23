/* Ghidra decompiled: golf.exe */
/* Function: FUN_004973c0 @ 0x004973C0 */
/* Body size: 270 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004973c0(int *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  
  _DAT_0083ab2c = param_1[0x4c];
  param_1[0x166] = 0;
  DAT_0083ff18 = 0;
  if (param_2 == 1) {
    if (param_1[0x160] < param_1[0x163]) {
      iVar1 = param_1[0x163] + -1;
      goto LAB_00497410;
    }
  }
  else if ((param_2 == 2) && (param_1[0x163] < param_1[0x161])) {
    iVar1 = param_1[0x163] + 1;
LAB_00497410:
    param_1[0x163] = iVar1;
  }
  if (param_1[0x162] == 0) {
    (**(code **)(*(int *)param_1[0x4c] + 0xe4))(param_1[0x15e],param_1[0x163]);
    pcVar2 = (code *)param_1[0x4eb];
    if (pcVar2 == (code *)0x0) goto LAB_004974a0;
    iVar1 = param_1[0x163];
  }
  else {
    (**(code **)(*(int *)param_1[0x4c] + 0xe4))
              (param_1[0x15e],(param_1[0x161] - param_1[0x163]) + param_1[0x160]);
    pcVar2 = (code *)param_1[0x4eb];
    if (pcVar2 == (code *)0x0) goto LAB_004974a0;
    iVar1 = (param_1[0x161] - param_1[0x163]) + param_1[0x160];
  }
  (*pcVar2)(param_1[0x15e],iVar1);
LAB_004974a0:
  if (*(int **)(param_1[0x4c] + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(param_1[0x4c] + 0x84) + 0x1c))();
  }
  param_1[0x167] = -1;
  (**(code **)(*param_1 + 0x120))();
  return;
}

