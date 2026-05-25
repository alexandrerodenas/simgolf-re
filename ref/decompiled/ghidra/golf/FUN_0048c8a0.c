/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048c8a0 @ 0x0048C8A0 */


void __thiscall FUN_0048c8a0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = *(int *)(*(int *)(param_1 + -0x58) + 8);
  if (*(int *)(iVar2 + 0x78 + param_1) == 0) {
    return;
  }
  iVar2 = *(int *)(iVar2 + param_1 + 0x9c);
  *(int *)(param_1 + -0x3c) = param_2;
  *(int *)(param_1 + -0x38) = param_3;
  iVar5 = *(int *)(*(int *)(param_1 + -0x58) + 8);
  piVar1 = (int *)(iVar5 + param_1);
  param_3 = param_3 - *(int *)(iVar5 + -0x1c + param_1);
  if (param_3 < 0) {
    return;
  }
  if (*piVar1 != 1) {
    iVar7 = ((param_2 - piVar1[-5]) / (piVar1[4] + piVar1[-4])) * piVar1[1] +
            param_3 / (piVar1[5] + piVar1[-4]);
    goto LAB_0048c9db;
  }
  iVar5 = piVar1[0x1e];
  uVar8 = *(int *)(param_1 + -0x34) - 1;
  if ((int)uVar8 <= iVar5 + -1) {
    piVar1[0x1d] = piVar1[0x1c];
    if ((int)uVar8 < 0) {
      iVar3 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
      if (iVar5 < iVar3) goto LAB_0048c95f;
      if (0 < iVar3) {
        do {
          iVar3 = iVar3 + -1;
          piVar1[0x1d] = *(int *)(piVar1[0x1d] + 0x10);
        } while (iVar3 != 0);
      }
      uVar8 = uVar8 + iVar5;
    }
    else {
      uVar4 = uVar8;
      if (0 < (int)uVar8) {
        do {
          uVar4 = uVar4 - 1;
          piVar1[0x1d] = *(int *)(piVar1[0x1d] + 0xc);
        } while (uVar4 != 0);
      }
    }
    piVar1[0x1f] = uVar8;
  }
LAB_0048c95f:
  iVar7 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + -0x58) + 8);
  iVar3 = *(int *)(iVar5 + 0x78 + param_1);
  iVar5 = iVar5 + param_1;
  if (iVar3 < 1) {
    return;
  }
  do {
    if (param_3 < 0) break;
    iVar7 = iVar7 + 1;
    if (*(int *)(iVar5 + 0x70) != 0) {
      *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(*(int *)(iVar5 + 0x74) + 0xc);
      iVar6 = *(int *)(iVar5 + 0x7c) + 1;
      *(int *)(iVar5 + 0x7c) = iVar6;
      if (iVar6 == *(int *)(iVar5 + 0x78)) {
        *(undefined4 *)(iVar5 + 0x7c) = 0;
      }
    }
    if (*(int *)(iVar5 + 0x74) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iRam0000000c;
      if (*(int *)(iVar5 + 0x70) != 0) {
        iVar6 = *(int *)(*(int *)(*(int *)(iVar5 + 0x74) + 8) + 0xc);
      }
    }
    iVar5 = *(int *)(*(int *)(param_1 + -0x58) + 8) + param_1;
    param_3 = param_3 - (*(int *)(iVar5 + 0x14) + *(int *)(iVar5 + -0x10)) * iVar6;
    iVar3 = iVar3 + -1;
  } while (0 < iVar3);
  if (iVar7 == 0) {
    return;
  }
  iVar7 = iVar7 + -1;
LAB_0048c9db:
  iVar7 = iVar7 + *(int *)(param_1 + -0x34);
  iVar3 = *(int *)(*(int *)(param_1 + -0x58) + 8);
  iVar5 = iVar3 + param_1;
  if (iVar7 < *(int *)(iVar3 + 0x78 + param_1)) {
    if (iVar7 == *(int *)(iVar5 + 0x98)) {
      if (*(int *)(iVar5 + 0x9c) == -1) {
        return;
      }
      *(undefined4 *)(iVar5 + 0x9c) = 0xffffffff;
      DAT_0083b650 = iVar2 - *(int *)(param_1 + -0x34);
      (*(code *)**(undefined4 **)(param_1 + -0x5c))(iVar2);
    }
    else {
      *(int *)(iVar5 + 0x9c) = iVar7;
      if ((*(byte *)(param_1 + -0x54) & 1) != 0) {
        FUN_00489f50(iVar7,1);
      }
      if (*(int *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + 0x9c + param_1) == iVar2) {
        return;
      }
      if (iVar2 != -1) {
        DAT_0083b650 = iVar2 - *(int *)(param_1 + -0x34);
        (*(code *)**(undefined4 **)(param_1 + -0x5c))(iVar2);
      }
      DAT_0083b650 = *(int *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + 0x9c + param_1) -
                     *(int *)(param_1 + -0x34);
      (*(code *)**(undefined4 **)(param_1 + -0x5c))
                (*(undefined4 *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + 0x9c + param_1));
    }
    FUN_00480ce0();
  }
  return;
}

