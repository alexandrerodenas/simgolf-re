/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b5ad0 @ 0x004B5AD0 */


void FUN_004b5ad0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piStack_4;
  
  piVar3 = param_1;
  iVar4 = param_1[0x3b];
  if (iVar4 == 1) {
    iVar4 = param_1[0x3c];
    param_1[0x40] = *(int *)(iVar4 + 0x1c);
    param_1[0x41] = *(int *)(iVar4 + 0x20);
    uVar5 = *(uint *)(iVar4 + 0x20) % *(uint *)(iVar4 + 0xc);
    *(undefined4 *)(iVar4 + 0x34) = 1;
    *(undefined4 *)(iVar4 + 0x38) = 1;
    *(undefined4 *)(iVar4 + 0x3c) = 1;
    *(undefined4 *)(iVar4 + 0x40) = 8;
    *(undefined4 *)(iVar4 + 0x44) = 1;
    if (uVar5 == 0) {
      uVar5 = *(uint *)(iVar4 + 0xc);
    }
    *(uint *)(iVar4 + 0x48) = uVar5;
    param_1[0x42] = 1;
    param_1[0x43] = 0;
  }
  else {
    if ((iVar4 < 1) || (4 < iVar4)) {
      *(undefined4 *)(*param_1 + 0x14) = 0x18;
      *(int *)(*param_1 + 0x18) = param_1[0x3b];
      *(undefined4 *)(*param_1 + 0x1c) = 4;
      (**(code **)*param_1)(param_1);
    }
    iVar4 = FUN_004b04c0(param_1[6],param_1[0x38] << 3);
    param_1[0x40] = iVar4;
    iVar4 = FUN_004b04c0(param_1[7],param_1[0x39] << 3);
    param_1[0x41] = iVar4;
    piVar1 = param_1 + 0x3b;
    param_1[0x42] = 0;
    param_1 = (int *)0x0;
    if (0 < *piVar1) {
      piStack_4 = piVar3 + 0x3c;
      do {
        iVar4 = *piStack_4;
        uVar5 = *(uint *)(iVar4 + 8);
        uVar2 = *(uint *)(iVar4 + 0xc);
        *(uint *)(iVar4 + 0x34) = uVar5;
        *(uint *)(iVar4 + 0x40) = uVar5 * 8;
        uVar6 = *(uint *)(iVar4 + 0x1c) % uVar5;
        iVar7 = uVar2 * uVar5;
        *(uint *)(iVar4 + 0x38) = uVar2;
        *(int *)(iVar4 + 0x3c) = iVar7;
        if (uVar6 == 0) {
          uVar6 = uVar5;
        }
        *(uint *)(iVar4 + 0x44) = uVar6;
        uVar5 = *(uint *)(iVar4 + 0x20) % uVar2;
        if (uVar5 == 0) {
          uVar5 = uVar2;
        }
        *(uint *)(iVar4 + 0x48) = uVar5;
        if (10 < piVar3[0x42] + iVar7) {
          *(undefined4 *)(*piVar3 + 0x14) = 0xb;
          (**(code **)*piVar3)(piVar3);
        }
        if (0 < iVar7) {
          do {
            piVar3[piVar3[0x42] + 0x43] = (int)param_1;
            iVar7 = iVar7 + -1;
            piVar3[0x42] = piVar3[0x42] + 1;
          } while (iVar7 != 0);
        }
        param_1 = (int *)((int)param_1 + 1);
        piStack_4 = piStack_4 + 1;
      } while ((int)param_1 < piVar3[0x3b]);
    }
  }
  if (0 < piVar3[0x31]) {
    iVar4 = piVar3[0x31] * piVar3[0x40];
    if (0xfffe < iVar4) {
      iVar4 = 0xffff;
    }
    piVar3[0x30] = iVar4;
  }
  return;
}

