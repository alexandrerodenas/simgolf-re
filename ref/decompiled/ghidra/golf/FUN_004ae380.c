/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ae380 @ 0x004AE380 */
/* Body size: 117 addresses */


void FUN_004ae380(int *param_1,int param_2)

{
  if (param_1[4] != 100) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(int *)(*param_1 + 0x18) = param_1[4];
    (**(code **)*param_1)(param_1);
  }
  if (param_2 != 0) {
    FUN_004ae220(param_1,0);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(param_1[5] + 8))(param_1);
  FUN_004b03a0(param_1);
  (**(code **)param_1[0x51])(param_1);
  param_1[0x36] = 0;
  param_1[4] = (param_1[0x2a] != 0) + 0x65;
  return;
}

