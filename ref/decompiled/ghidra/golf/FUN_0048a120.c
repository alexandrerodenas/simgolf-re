/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048a120 @ 0x0048A120 */


undefined4 __fastcall FUN_0048a120(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0xd4 + param_1) == 0) {
    return 7;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + param_1;
  FUN_00476310(*(undefined4 *)(iVar2 + 0x84),*(undefined4 *)(iVar2 + 0x90),
               *(undefined4 *)(iVar2 + 0x9c),*(undefined4 *)(iVar2 + 0xa8));
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + param_1;
  FUN_00476340(*(undefined4 *)(iVar2 + 0x88),*(undefined4 *)(iVar2 + 0x94),
               *(undefined4 *)(iVar2 + 0xa0),*(undefined4 *)(iVar2 + 0xac));
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + param_1;
  FUN_00476370(*(undefined4 *)(iVar2 + 0x8c),*(undefined4 *)(iVar2 + 0x98),
               *(undefined4 *)(iVar2 + 0xa4),*(undefined4 *)(iVar2 + 0xb0));
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + param_1;
  FUN_004762d0(*(undefined4 *)(iVar2 + 0x78),*(undefined4 *)(iVar2 + 0x7c),
               *(undefined4 *)(iVar2 + 0x80),0);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8);
  iVar4 = *(int *)(iVar2 + 0x58 + param_1);
  iVar2 = iVar2 + param_1;
  iVar6 = *(int *)(iVar2 + 0xd4);
  if (iVar4 <= iVar6) {
    iVar6 = iVar4;
  }
  *(int *)(iVar2 + 0x60) = iVar6;
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 8);
  iVar6 = 0;
  iVar5 = 0;
  iVar2 = iVar4 + param_1;
  if (0 < *(int *)(iVar4 + 0xd4 + param_1)) {
    do {
      if (*(int *)(iVar2 + 0xcc) != 0) {
        *(undefined4 *)(iVar2 + 0xd0) = *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 0xc);
        iVar4 = *(int *)(iVar2 + 0xd8) + 1;
        *(int *)(iVar2 + 0xd8) = iVar4;
        if (iVar4 == *(int *)(iVar2 + 0xd4)) {
          *(undefined4 *)(iVar2 + 0xd8) = 0;
        }
      }
      if (*(int *)(iVar2 + 0xd0) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uRam00000004;
        if (*(int *)(iVar2 + 0xcc) != 0) {
          uVar3 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0xd0) + 8) + 4);
        }
      }
      iVar2 = FUN_00477250(uVar3);
      if (iVar6 < iVar2) {
        iVar6 = iVar2;
      }
      iVar5 = iVar5 + 1;
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + param_1;
    } while (iVar5 < *(int *)(iVar2 + 0xd4));
    if (iVar6 != 0) goto LAB_0048a2c5;
  }
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0x34 + param_1);
LAB_0048a2c5:
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 8);
  iVar2 = iVar4 + param_1;
  *(int *)(iVar2 + 0x6c) =
       *(int *)(iVar4 + 0x4c + param_1) + 2 + *(int *)(param_1 + 0x3c) * 2 + *(int *)(iVar2 + 0x3c)
       + iVar6;
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 8) + param_1;
  iVar2 = *(int *)(iVar4 + 0x50);
  if (iVar2 == -1) {
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + param_1;
    iVar4 = FUN_00477580();
    *(int *)(iVar2 + 0x70) = iVar4 + *(int *)(iVar2 + 0x4c);
  }
  else {
    *(int *)(iVar4 + 0x70) = iVar2;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8);
  iVar4 = iVar2 + param_1;
  if (((*(byte *)(iVar2 + 0x28 + param_1) & 2) == 0) || (*(int *)(iVar4 + 0x34) == 0)) {
    if (*(int *)(iVar4 + 0x54) == 1) {
      iVar2 = *(int *)(iVar4 + 0x6c) + *(int *)(iVar4 + 0x48) * 2;
      if (iVar2 < *(int *)(iVar4 + 0x34)) {
        iVar2 = *(int *)(iVar4 + 0x34);
      }
      *(int *)(iVar4 + 100) = iVar2;
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 8);
      *(int *)(iVar2 + param_1 + 0x6c) =
           *(int *)(iVar2 + 100 + param_1) + *(int *)(iVar2 + 0x48 + param_1) * -2;
    }
    else {
      *(int *)(iVar4 + 0x6c) =
           (*(int *)(iVar4 + 100) + *(int *)(iVar4 + 0x48) * -2 + *(int *)(iVar4 + 0x4c)) /
           *(int *)(iVar4 + 0x54) - *(int *)(iVar4 + 0x4c);
      iVar4 = *(int *)(*(int *)(param_1 + 4) + 8);
      iVar6 = *(int *)(iVar4 + 0x4c + param_1);
      iVar2 = iVar4 + param_1;
      iVar6 = ((*(int *)(iVar4 + 0x6c + param_1) + iVar6) * *(int *)(iVar2 + 0x54) +
              *(int *)(iVar2 + 0x48) * 2) - iVar6;
      if (iVar6 < *(int *)(iVar2 + 0x34)) {
        iVar6 = *(int *)(iVar2 + 0x34);
      }
      *(int *)(iVar2 + 100) = iVar6;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + param_1;
    *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar2 + 0x54);
  }
  else {
    *(int *)(iVar4 + 100) = *(int *)(iVar4 + 0x34);
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + param_1;
    *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar2 + 0x54);
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + param_1;
    if (*(int *)(iVar2 + 0x5c) == 1) {
      *(int *)(iVar2 + 0x6c) = *(int *)(iVar2 + 100) + *(int *)(iVar2 + 0x48) * -2;
    }
    else {
      *(int *)(iVar2 + 0x6c) = *(int *)(iVar2 + 0x6c) - *(int *)(iVar2 + 0x4c);
    }
  }
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + param_1;
  if (((*(byte *)(iVar2 + 0x28) & 1) == 0) || (*(int *)(iVar2 + 0x38) == 0)) {
    *(int *)(iVar2 + 0x68) =
         (*(int *)(iVar2 + 0x70) * *(int *)(iVar2 + 0x60) - *(int *)(iVar2 + 0x4c)) +
         *(int *)(iVar2 + 0x44) + *(int *)(iVar2 + 0x40);
  }
  else {
    *(int *)(iVar2 + 0x68) = *(int *)(iVar2 + 0x38);
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 8);
    *(int *)(iVar2 + param_1 + 0x60) =
         (((*(int *)(iVar2 + 0x68 + param_1) - *(int *)(iVar2 + 0x44 + param_1)) -
          *(int *)(iVar2 + 0x40 + param_1)) + *(int *)(iVar2 + 0x4c + param_1)) /
         *(int *)(iVar2 + param_1 + 0x70);
    if ((*(byte *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0xa0 + param_1) & 0x40) == 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 4) + 8);
      iVar6 = *(int *)(iVar4 + 0x5c + param_1);
      iVar2 = iVar4 + param_1;
      if (*(int *)(iVar4 + 0x60 + param_1) * iVar6 < *(int *)(param_1 + 0x30)) {
        if (iVar6 < 2) {
          *(int *)(iVar2 + 100) = *(int *)(iVar2 + 0x34) - DAT_0083ff10;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0x5c + param_1) = 1;
        }
        else {
          *(int *)(iVar2 + 0x68) = *(int *)(iVar2 + 0x38) - DAT_0083ff10;
          iVar4 = *(int *)(*(int *)(param_1 + 4) + 8);
          iVar2 = iVar4 + param_1;
          *(int *)(iVar2 + 0x60) = *(int *)(iVar4 + 0x68 + param_1) / *(int *)(iVar2 + 0x70);
        }
      }
    }
  }
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8);
  iVar4 = iVar2 + param_1;
  *(int *)(iVar4 + 0x70) = *(int *)(iVar2 + 0x70 + param_1) - *(int *)(iVar4 + 0x4c);
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 8);
  iVar6 = *(int *)(iVar4 + 0x4c + param_1);
  iVar2 = iVar4 + param_1;
  if (*(int *)(iVar2 + 0xd4) <=
      (((*(int *)(iVar4 + 0x68 + param_1) - *(int *)(iVar4 + 0x44 + param_1)) -
       *(int *)(iVar4 + 0x40 + param_1)) + iVar6) / (*(int *)(iVar2 + 0x70) + iVar6)) {
    if ((*(byte *)(iVar2 + 0x28) & 2) == 0) {
      *(int *)(iVar2 + 0x6c) = *(int *)(iVar2 + 100) + *(int *)(iVar2 + 0x48) * -2;
    }
    else {
      *(int *)(iVar2 + 0x6c) =
           (*(int *)(iVar2 + 100) + *(int *)(iVar2 + 0x48) * -2 + iVar6) / *(int *)(iVar2 + 0x5c) -
           iVar6;
    }
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(*(int *)(iVar2 + 8) + 0x60 + param_1) *
          *(int *)(*(int *)(iVar2 + 8) + param_1 + 0x5c);
  *(int *)(param_1 + 0x2c) = iVar4;
  if (iVar4 < *(int *)(param_1 + 0x30)) {
    iVar4 = *(int *)(iVar2 + 8) + param_1;
    if (1 < *(int *)(*(int *)(iVar2 + 8) + 0x5c + param_1)) {
      if ((*(byte *)(*(int *)(iVar2 + 4) + 0xa0 + param_1) & 0x40) == 0) {
        *(int *)(iVar4 + 0x68) = *(int *)(iVar4 + 0x68) + DAT_0083ff10;
      }
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1;
      return 0;
    }
    if ((*(byte *)(*(int *)(iVar2 + 4) + 0xa0 + param_1) & 0x40) == 0) {
      *(int *)(iVar4 + 100) = *(int *)(iVar4 + 100) + DAT_0083ff10;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 8);
    iVar2 = iVar4 + param_1;
    if ((*(byte *)(iVar4 + 0x28 + param_1) & 2) != 0) {
      piVar1 = (int *)(iVar2 + 0x6c);
      *piVar1 = *piVar1 - DAT_0083ff10 / *(int *)(iVar2 + 0x5c);
    }
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 2;
  }
  return 0;
}

