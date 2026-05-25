/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ae760 @ 0x004AE760 */


void FUN_004ae760(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[4] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(int *)(*param_1 + 0x18) = param_1[4];
    (**(code **)*param_1)(param_1);
  }
  if (param_1[0xf] == 0) {
    iVar1 = (**(code **)param_1[1])(param_1,0,0x348);
    param_1[0xf] = iVar1;
  }
  param_1[0xc] = 8;
  FUN_004ae740(param_1,0x4b,1);
  FUN_004ae850(param_1);
  piVar2 = param_1 + 0x20;
  do {
    *(undefined1 *)(piVar2 + -4) = 0;
    *(undefined1 *)piVar2 = 1;
    *(undefined1 *)(piVar2 + 4) = 5;
    piVar2 = (int *)((int)piVar2 + 1);
  } while ((int)((-0x80 - (int)param_1) + (int)piVar2) < 0x10);
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  if (8 < param_1[0xc]) {
    param_1[0x2c] = 1;
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined2 *)((int)param_1 + 0xce) = 1;
  *(undefined2 *)(param_1 + 0x34) = 1;
  FUN_004ae910(param_1);
  return;
}

