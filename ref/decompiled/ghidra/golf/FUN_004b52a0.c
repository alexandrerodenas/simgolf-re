/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b52a0 @ 0x004B52A0 */
/* Body size: 461 addresses */


void FUN_004b52a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if ((((param_1[7] == 0) || (param_1[6] == 0)) || (param_1[0xd] < 1)) || (param_1[8] < 1)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x1f;
    (**(code **)*param_1)(param_1);
  }
  if ((0xffdc < param_1[7]) || (0xffdc < param_1[6])) {
    *(undefined4 *)(*param_1 + 0x14) = 0x28;
    *(undefined4 *)(*param_1 + 0x18) = 0xffdc;
    (**(code **)*param_1)(param_1);
  }
  if (param_1[0xc] != 8) {
    *(undefined4 *)(*param_1 + 0x14) = 0xd;
    *(int *)(*param_1 + 0x18) = param_1[0xc];
    (**(code **)*param_1)(param_1);
  }
  if (10 < param_1[0xd]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x18;
    *(int *)(*param_1 + 0x18) = param_1[0xd];
    *(undefined4 *)(*param_1 + 0x1c) = 10;
    (**(code **)*param_1)(param_1);
  }
  iVar3 = 0;
  param_1[0x38] = 1;
  param_1[0x39] = 1;
  if (0 < param_1[0xd]) {
    piVar4 = (int *)(param_1[0xf] + 0xc);
    do {
      if (((piVar4[-1] < 1) || (4 < piVar4[-1])) || ((*piVar4 < 1 || (4 < *piVar4)))) {
        *(undefined4 *)(*param_1 + 0x14) = 0x10;
        (**(code **)*param_1)(param_1);
      }
      iVar1 = param_1[0x38];
      if (param_1[0x38] <= piVar4[-1]) {
        iVar1 = piVar4[-1];
      }
      param_1[0x38] = iVar1;
      iVar1 = param_1[0x39];
      if (param_1[0x39] <= *piVar4) {
        iVar1 = *piVar4;
      }
      param_1[0x39] = iVar1;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 0x15;
    } while (iVar3 < param_1[0xd]);
  }
  iVar3 = 0;
  if (0 < param_1[0xd]) {
    puVar5 = (undefined4 *)(param_1[0xf] + 0x24);
    do {
      puVar5[-8] = iVar3;
      *puVar5 = 8;
      uVar2 = FUN_004b04c0(puVar5[-7] * param_1[6],param_1[0x38] << 3);
      puVar5[-2] = uVar2;
      uVar2 = FUN_004b04c0(puVar5[-6] * param_1[7],param_1[0x39] << 3);
      puVar5[-1] = uVar2;
      uVar2 = FUN_004b04c0(puVar5[-7] * param_1[6],param_1[0x38]);
      puVar5[1] = uVar2;
      uVar2 = FUN_004b04c0(puVar5[-6] * param_1[7],param_1[0x39]);
      puVar5[2] = uVar2;
      puVar5[3] = 1;
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 0x15;
    } while (iVar3 < param_1[0xd]);
  }
  iVar3 = FUN_004b04c0(param_1[7],param_1[0x39] << 3);
  param_1[0x3a] = iVar3;
  return;
}

