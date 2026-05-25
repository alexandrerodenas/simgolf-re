/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b34b0 @ 0x004B34B0 */


void FUN_004b34b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x30);
  param_1[0x58] = (int)puVar1;
  *puVar1 = &LAB_004b3550;
  iVar2 = param_1[0x2f];
  if (iVar2 == 0) {
    puVar1[1] = &LAB_004b3720;
    puVar1[2] = &LAB_004b5d50;
  }
  else if (iVar2 == 1) {
    puVar1[1] = &LAB_004b3720;
    puVar1[2] = &LAB_004b6110;
  }
  else if (iVar2 == 2) {
    puVar1[1] = &LAB_004b38c0;
    puVar1[7] = &LAB_004b6360;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 0x2f;
    (**(code **)*param_1)(param_1);
  }
  puVar1 = puVar1 + 8;
  iVar2 = 4;
  do {
    puVar1[-5] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

