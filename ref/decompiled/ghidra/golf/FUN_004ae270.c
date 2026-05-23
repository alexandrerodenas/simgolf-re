/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ae270 @ 0x004AE270 */
/* Body size: 258 addresses */


void FUN_004ae270(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[4];
  if ((iVar2 == 0x65) || (iVar2 == 0x66)) {
    if ((uint)param_1[0x36] < (uint)param_1[7]) {
      *(undefined4 *)(*param_1 + 0x14) = 0x42;
      (**(code **)*param_1)(param_1);
    }
    (**(code **)(param_1[0x51] + 8))(param_1);
  }
  else if (iVar2 != 0x67) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(int *)(*param_1 + 0x18) = param_1[4];
    (**(code **)*param_1)(param_1);
  }
  puVar1 = (undefined4 *)param_1[0x51];
  iVar2 = puVar1[4];
  while (iVar2 == 0) {
    (*(code *)*puVar1)(param_1);
    uVar3 = 0;
    if (param_1[0x3a] != 0) {
      do {
        if (param_1[2] != 0) {
          *(uint *)(param_1[2] + 4) = uVar3;
          *(int *)(param_1[2] + 8) = param_1[0x3a];
          (**(code **)param_1[2])(param_1);
        }
        iVar2 = (**(code **)(param_1[0x54] + 4))(param_1,0);
        if (iVar2 == 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x16;
          (**(code **)*param_1)(param_1);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < (uint)param_1[0x3a]);
    }
    (**(code **)(param_1[0x51] + 8))(param_1);
    puVar1 = (undefined4 *)param_1[0x51];
    iVar2 = puVar1[4];
  }
  (**(code **)(param_1[0x55] + 0x10))(param_1);
  (**(code **)(param_1[5] + 0x10))(param_1);
  FUN_004afa60(param_1);
  return;
}

