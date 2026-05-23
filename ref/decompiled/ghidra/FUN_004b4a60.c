/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b4a60 @ 0x004B4A60 */
/* Body size: 141 addresses */


void FUN_004b4a60(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0xc);
  param_1[0x56] = (int)puVar2;
  *puVar2 = FUN_004b01e0;
  switch(param_1[9]) {
  case 1:
    if (param_1[8] != 1) {
LAB_004b4acf:
      *(undefined4 *)(*param_1 + 0x14) = 7;
      (**(code **)*param_1)(param_1);
    }
    break;
  case 2:
  case 3:
    if (param_1[8] != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 7;
      (**(code **)*param_1)(param_1);
    }
    break;
  case 4:
  case 5:
    if (param_1[8] != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 7;
      (**(code **)*param_1)(param_1);
    }
    break;
  default:
    if (param_1[8] < 1) goto LAB_004b4acf;
  }
  switch(param_1[0xe]) {
  case 1:
    if (param_1[0xd] != 1) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    iVar1 = param_1[9];
    if (iVar1 == 1) {
      puVar2[1] = FUN_004b50d0;
      return;
    }
    if (iVar1 == 2) {
      *puVar2 = &LAB_004b4ca0;
      puVar2[1] = FUN_004b4eb0;
      return;
    }
    if (iVar1 == 3) {
      puVar2[1] = FUN_004b50d0;
      return;
    }
    goto LAB_004b4be8;
  case 2:
    if (param_1[0xd] != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[9] != 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x19;
      (**(code **)*param_1)(param_1);
      return;
    }
    break;
  case 3:
    if (param_1[0xd] != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[9] == 2) {
      *puVar2 = &LAB_004b4ca0;
      puVar2[1] = &LAB_004b4d80;
      return;
    }
    if (param_1[9] != 3) {
      *(undefined4 *)(*param_1 + 0x14) = 0x19;
      (**(code **)*param_1)(param_1);
      return;
    }
    break;
  case 4:
    if (param_1[0xd] != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[9] == 4) break;
LAB_004b4be8:
    *(undefined4 *)(*param_1 + 0x14) = 0x19;
    (**(code **)*param_1)(param_1);
    return;
  case 5:
    if (param_1[0xd] != 4) {
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[9] == 4) {
      *puVar2 = &LAB_004b4ca0;
      puVar2[1] = &LAB_004b4f60;
      return;
    }
    if (param_1[9] != 5) {
      *(undefined4 *)(*param_1 + 0x14) = 0x19;
      (**(code **)*param_1)(param_1);
      return;
    }
    break;
  default:
    if ((param_1[0xe] != param_1[9]) || (param_1[0xd] != param_1[8])) {
      *(undefined4 *)(*param_1 + 0x14) = 0x19;
      (**(code **)*param_1)(param_1);
    }
  }
  puVar2[1] = &LAB_004b5140;
  return;
}

