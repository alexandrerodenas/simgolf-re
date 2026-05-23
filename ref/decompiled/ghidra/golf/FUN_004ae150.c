/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ae150 @ 0x004AE150 */
/* Body size: 184 addresses */


void FUN_004ae150(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  param_1[1] = 0;
  if (param_2 != 0x3d) {
    *(undefined4 *)(*param_1 + 0x14) = 10;
    *(undefined4 *)(*param_1 + 0x18) = 0x3d;
    *(int *)(*param_1 + 0x1c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (param_3 != 0x168) {
    *(undefined4 *)(*param_1 + 0x14) = 0x13;
    *(undefined4 *)(*param_1 + 0x18) = 0x168;
    *(int *)(*param_1 + 0x1c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  iVar3 = *param_1;
  piVar1 = param_1;
  for (iVar2 = 0x5a; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  }
  *param_1 = iVar3;
  param_1[3] = 0;
  FUN_004aee30(param_1);
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar3 = 4;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  piVar1 = param_1 + 0x18;
  do {
    piVar1[-4] = 0;
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[10] = 0;
  param_1[0xb] = 0x3ff00000;
  param_1[4] = 100;
  return;
}

