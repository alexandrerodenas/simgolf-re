/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b59d0 @ 0x004B59D0 */
/* Body size: 255 addresses */


void FUN_004b59d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar3 = param_1[0x29];
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1[0x51] + 0x20);
    param_1[0x3b] = *(int *)(iVar3 + iVar1 * 0x24);
    piVar2 = (int *)(iVar3 + iVar1 * 0x24);
    if (0 < *(int *)(iVar3 + iVar1 * 0x24)) {
      piVar5 = param_1 + 0x3c;
      piVar4 = piVar2;
      do {
        piVar4 = piVar4 + 1;
        iVar6 = iVar6 + 1;
        *piVar5 = param_1[0xf] + *piVar4 * 0x54;
        piVar5 = piVar5 + 1;
      } while (iVar6 < *piVar2);
    }
    param_1[0x4d] = piVar2[5];
    param_1[0x4e] = piVar2[6];
    param_1[0x4f] = piVar2[7];
    param_1[0x50] = piVar2[8];
    return;
  }
  if (4 < param_1[0xd]) {
    *(undefined4 *)(*param_1 + 0x14) = 0x18;
    *(int *)(*param_1 + 0x18) = param_1[0xd];
    *(undefined4 *)(*param_1 + 0x1c) = 4;
    (**(code **)*param_1)(param_1);
  }
  iVar3 = 0;
  param_1[0x3b] = param_1[0xd];
  if (0 < param_1[0xd]) {
    iVar6 = 0;
    piVar2 = param_1 + 0x3c;
    do {
      iVar3 = iVar3 + 1;
      *piVar2 = param_1[0xf] + iVar6;
      piVar2 = piVar2 + 1;
      iVar6 = iVar6 + 0x54;
    } while (iVar3 < param_1[0xd]);
  }
  param_1[0x4d] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x4e] = 0x3f;
  return;
}

