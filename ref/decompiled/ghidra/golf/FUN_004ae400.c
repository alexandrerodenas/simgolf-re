/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ae400 @ 0x004AE400 */
/* Body size: 196 addresses */


void FUN_004ae400(int *param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = param_1;
  if (param_1[4] != 0x65) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(int *)(*param_1 + 0x18) = param_1[4];
    (**(code **)*param_1)(param_1);
  }
  if ((uint)piVar1[7] <= (uint)piVar1[0x36]) {
    *(undefined4 *)(*piVar1 + 0x14) = 0x77;
    (**(code **)(*piVar1 + 4))(piVar1,0xffffffff);
  }
  if (piVar1[2] != 0) {
    *(int *)(piVar1[2] + 4) = piVar1[0x36];
    *(int *)(piVar1[2] + 8) = piVar1[7];
    (**(code **)piVar1[2])(piVar1);
  }
  if (*(int *)(piVar1[0x51] + 0xc) != 0) {
    (**(code **)(piVar1[0x51] + 4))(piVar1);
  }
  uVar2 = param_3;
  if ((uint)(piVar1[7] - piVar1[0x36]) < param_3) {
    uVar2 = piVar1[7] - piVar1[0x36];
  }
  param_1 = (int *)0x0;
  (**(code **)(piVar1[0x52] + 4))(piVar1,param_2,&param_1,uVar2);
  piVar1[0x36] = piVar1[0x36] + (int)param_1;
  return;
}

