/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048fe60 @ 0x0048FE60 */


int __fastcall FUN_0048fe60(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_8;
  
  FUN_00476310(param_1[0x7f8],param_1[0x7fc],param_1[0x800],param_1[0x804]);
  FUN_00476340(param_1[0x7f9],param_1[0x7fd],param_1[0x801],param_1[0x805]);
  FUN_00476370(param_1[0x7fa],param_1[0x7fe],param_1[0x802],param_1[0x806]);
  FUN_004763a0(param_1[0x7fb],param_1[0x7ff],param_1[0x803],param_1[0x807]);
  FUN_004762d0(param_1[0x7f4],param_1[0x7f5],param_1[0x7f6],param_1[0x7f7]);
  param_1[0x7dc] = param_1[0x4df];
  if ((*(byte *)(param_1 + 0x7da) & 0x40) != 0) {
    param_1[0x7dc] = param_1[0x4df] + 1;
  }
  if ((param_1[0x7da] & 0x10100U) == 0) {
    param_1[0x7dc] = param_1[0x7dc] + 1;
  }
  if (param_1[0x164] == 0) {
    if ((((param_1[0x7da] & 0x400U) != 0) || (DAT_0083ad50 == (int *)0x0)) ||
       (iVar3 = (**(code **)(*DAT_0083ad50 + 0xa8))(), iVar3 < 0x400)) {
      param_1[0x7e8] = param_1[0x514];
      goto LAB_0048ffe8;
    }
    param_1[0x7e8] = (param_1[0x514] * 3) / 2;
    param_1[0x7e9] = (param_1[0x515] * 3) / 2;
  }
  else {
    param_1[0x7e8] = 0;
LAB_0048ffe8:
    param_1[0x7e9] = param_1[0x515];
  }
  if (param_1[0x164] == 0) {
    param_1[0x7ea] = param_1[0x512];
    param_1[0x7eb] = param_1[0x513];
  }
  else {
    param_1[0x7ea] = param_1[0x512];
    param_1[0x7eb] = param_1[0x513];
  }
  iVar3 = param_1[0x4f4];
  param_1[0x7ec] = param_1[0x510];
  param_1[0x7ed] = param_1[0x511];
  if (iVar3 == 0) {
    param_1[0x7e6] = 0;
    param_1[0x7e7] = 0;
  }
  else {
    if (param_1[0x508] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_1[0x7e9];
    }
    param_1[0x7e6] =
         (*(int *)(iVar3 + 0x10) * param_1[0x7f1]) / param_1[0x7f2] + param_1[0x7e8] + iVar4;
    param_1[0x7e7] = (*(int *)(iVar3 + 0x14) * param_1[0x7f1]) / param_1[0x7f2];
  }
  iVar3 = *(int *)(param_1[0x80b] + 0x10);
  if (param_1[0x164] != 0) {
    FUN_0048e120(((param_1[0x167] + param_1[0x7e8] * -2) - param_1[0x511]) - param_1[0x510]);
    if (param_1[0x7dc] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_1[0x7e4];
    }
    FUN_0048e0b0(((param_1[0x168] - param_1[0x7eb]) - param_1[0x7ea]) - iVar4);
    FUN_0048e190(param_1[0x165],param_1[0x166]);
    *(uint *)((int)param_1 + *(int *)(param_1[0x519] + 8) + 0x1488) =
         *(uint *)(*(int *)(param_1[0x519] + 8) + 0x1488 + (int)param_1) | 3;
  }
  FUN_004a11c0();
  iVar4 = *(int *)(param_1[0x519] + 8);
  if (param_1[0x164] == 0) {
    iVar1 = *(int *)(iVar4 + 0x14c4 + (int)param_1);
    if (iVar1 == 0) {
      iVar1 = *(int *)((int)param_1 + iVar4 + 0x1494);
    }
    iVar2 = param_1[0x7e6];
    if ((iVar2 < iVar1) && (iVar2 = *(int *)((int)param_1 + iVar4 + 0x14c4), iVar2 == 0)) {
      iVar2 = *(int *)((int)param_1 + iVar4 + 0x1494);
    }
    param_1[0x7df] = iVar2;
    if (param_1[0x59] != 0) {
      FUN_004762d0(param_1[0x59],0,0,0);
      iVar4 = param_1[0x7df];
      iVar1 = FUN_00477250(param_1[0x172]);
      if (iVar4 <= iVar1) {
        iVar4 = FUN_00477250(param_1[0x172]);
      }
      param_1[0x7df] = iVar4;
      FUN_004762d0(param_1[0x7f4],param_1[0x7f5],param_1[0x7f6],param_1[0x7f7]);
    }
    iVar4 = 0;
    if ((DAT_0083fe08 != 0) && (iVar1 = FUN_004941e0(), iVar1 != 0)) {
      uVar5 = FUN_004941e0();
      iVar4 = FUN_00477250(uVar5);
      if (iVar4 < 200) {
        iVar4 = 200;
      }
      else {
        uVar5 = FUN_004941e0();
        iVar4 = FUN_00477250(uVar5);
      }
      iVar4 = iVar4 + 0x32 + param_1[0x7e6];
    }
    iVar1 = param_1[0x7df];
    if (param_1[0x7df] <= iVar4) {
      iVar1 = iVar4;
    }
    param_1[0x7df] = iVar1;
    if (param_1[0x517] == -1) {
      iVar4 = param_1[0x7e8] * 2;
    }
    else {
      iVar4 = param_1[0x7e8] + param_1[0x517];
    }
    param_1[0x7df] = iVar1 + iVar4;
  }
  else {
    iVar1 = *(int *)(iVar4 + 0x14c4 + (int)param_1);
    if (iVar1 == 0) {
      iVar1 = *(int *)((int)param_1 + iVar4 + 0x1494);
    }
    param_1[0x7df] = iVar1;
    iVar4 = *(int *)(param_1[0x519] + 8);
    iVar1 = *(int *)(iVar4 + 0x14c8 + (int)param_1);
    if (iVar1 == 0) {
      param_1[0x7e0] = *(int *)((int)param_1 + iVar4 + 0x1498);
    }
    else {
      param_1[0x7e0] = iVar1;
    }
  }
  param_1[0x7e1] = *(int *)(*(int *)(param_1[0x519] + 8) + 0x14c8 + (int)param_1);
  switch(param_1[0x595]) {
  default:
    if (param_1[0x171] == -1) {
      *(undefined4 *)(*(int *)(param_1[0x519] + 8) + 0x1554 + (int)param_1) = 0;
    }
    else {
      FUN_004898d0(param_1[0x171]);
    }
    param_1[0x533] = (int)&LAB_00490b30;
    break;
  case 1:
    param_1[0x539] = (int)&LAB_00490b30;
    break;
  case 2:
    if (param_1[0x171] == -1) {
      FUN_00489f50(0,1);
      param_1[0x52d] = (int)&LAB_00490b30;
    }
    else {
      FUN_00489ed0(param_1[0x171]);
      param_1[0x52d] = (int)&LAB_00490b30;
    }
    break;
  case 4:
    if (param_1[0x171] != -1) {
      FUN_004a29a0(param_1[0x171]);
    }
    break;
  case 8:
    param_1[0x56b] = param_1[0x808];
    param_1[0x571] = param_1[0x809];
    param_1[0x56a] = param_1[0x80a];
    param_1[0x559] = param_1[0x7f2];
    param_1[0x558] = param_1[0x7f1];
    break;
  case -1:
    break;
  }
  if (-1 < param_1[0x508] + -1) {
    param_1[0x509] = 0;
    param_1[0x507] = param_1[0x506];
  }
  iVar4 = ((param_1[0x7e8] * -2 - param_1[0x516]) - param_1[0x7e6]) + param_1[0x7df];
  if (param_1[0x506] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1[0x507] + 8) + 8);
  }
  param_1[0x7e5] = 0;
  if (iVar1 == 3) {
    iVar1 = FUN_00477580();
LAB_004904b6:
    uVar5 = 0;
    param_1[0x7e5] = param_1[0x7e5] + iVar1;
  }
  else {
    if (iVar1 == 2) {
      if (param_1[0x506] == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(*(int *)(param_1[0x507] + 8) + 4);
      }
      iVar1 = FUN_00476e20(uVar5,iVar4,0,0);
      goto LAB_004904b6;
    }
    if (param_1[0x506] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(*(int *)(param_1[0x507] + 8) + 4);
    }
  }
  FUN_004785e0(uVar5,iVar4);
  local_8 = 0;
  if (param_1[0x508] != 1 && -1 < param_1[0x508] + -1) {
    do {
      if (param_1[0x506] != 0) {
        iVar1 = param_1[0x509];
        param_1[0x507] = *(int *)(param_1[0x507] + 0xc);
        param_1[0x509] = iVar1 + 1;
        if (iVar1 + 1 == param_1[0x508]) {
          param_1[0x509] = 0;
        }
      }
      if (param_1[0x507] == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = uRam00000004;
        if (param_1[0x506] != 0) {
          uVar5 = *(undefined4 *)(*(int *)(param_1[0x507] + 8) + 4);
        }
      }
      if (param_1[0x506] == 0) {
LAB_00490628:
        uVar5 = 0;
LAB_0049062a:
        FUN_00478610(uVar5);
      }
      else {
        iVar1 = *(int *)(*(int *)(param_1[0x507] + 8) + 8);
        if (iVar1 == 0) {
          if (param_1[0x506] == 0) goto LAB_00490628;
          uVar5 = *(undefined4 *)(*(int *)(param_1[0x507] + 8) + 4);
          goto LAB_0049062a;
        }
        iVar2 = FUN_00478700();
        param_1[0x7e5] = param_1[0x7e5] + iVar2;
        if (iVar1 == 2) {
          iVar1 = FUN_00476e20(uVar5,iVar4,0,0);
LAB_004905cc:
          uVar5 = 0;
          param_1[0x7e5] = param_1[0x7e5] + iVar1;
        }
        else {
          if (iVar1 == 3) {
            iVar1 = FUN_00477580();
            goto LAB_004905cc;
          }
          if (param_1[0x506] == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined4 *)(*(int *)(param_1[0x507] + 8) + 4);
          }
        }
        FUN_004785e0(uVar5,iVar4);
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_1[0x508] + -1);
  }
  iVar2 = FUN_00478700();
  iVar4 = param_1[0x7e5];
  param_1[0x7e5] = iVar4 + iVar2;
  iVar1 = param_1[0x7dc];
  if (iVar1 == 0) {
    param_1[0x7e4] = 0;
    param_1[0x7e3] = 0;
  }
  else {
    iVar3 = iVar3 * 7;
    param_1[0x7e4] = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
    param_1[0x7e3] =
         ((param_1[0x7e8] * -2 - (iVar1 + -1) * param_1[0x7e9]) + param_1[0x7df]) / iVar1;
  }
  if ((param_1[0x164] != 0) && ((*(byte *)(param_1 + 0x7da) & 2) != 0)) {
    FUN_0048e0b0(((param_1[0x168] + param_1[0x7e9] * -2) - (iVar4 + iVar2)) - param_1[0x7e4]);
    iVar3 = FUN_004a11c0();
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  (**(code **)(*param_1 + 0x18c))();
  if ((param_1[0x7da] & 0x100U) != 0) {
    param_1[0x7e4] = 0;
  }
  if (param_1[0x164] != 0) {
    FUN_0048e120(((param_1[0x167] + param_1[0x7e8] * -2) - param_1[0x7ed]) - param_1[0x7ec]);
    iVar3 = param_1[0x7e7];
    if (param_1[0x7e7] < param_1[0x7e5]) {
      iVar3 = param_1[0x7e5];
    }
    if (param_1[0x7dc] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = param_1[0x7e4];
    }
    FUN_0048e0b0((((param_1[0x168] - param_1[0x7eb]) - iVar4) - iVar3) - param_1[0x7ea]);
    FUN_0048e190(param_1[0x165],param_1[0x166]);
    *(uint *)((int)param_1 + *(int *)(param_1[0x519] + 8) + 0x1488) =
         *(uint *)(*(int *)(param_1[0x519] + 8) + 0x1488 + (int)param_1) | 3;
    if (param_1[0x164] != 0) {
      param_1[0x7df] = param_1[0x167];
      param_1[0x7e0] = param_1[0x168];
      if (param_1[0x595] == -1) {
        param_1[0x7e1] = 0;
        *(undefined4 *)(*(int *)(param_1[0x519] + 8) + 0x14c8 + (int)param_1) = 0;
      }
      goto LAB_004908bc;
    }
  }
  iVar3 = param_1[0x7e7];
  if (param_1[0x7e7] < param_1[0x7e5]) {
    iVar3 = param_1[0x7e5];
  }
  iVar3 = iVar3 + param_1[0x7e8] * 2 + param_1[0x7e1] + param_1[0x7e4];
  param_1[0x7e0] = iVar3;
  if (param_1[0x7e1] != 0) {
    param_1[0x7e0] = iVar3 + param_1[0x7e9];
  }
  if (param_1[0x7e4] != 0) {
    param_1[0x7e0] = param_1[0x7e0] + param_1[0x7e9];
  }
  param_1[0x7e0] = param_1[0x7e0] + param_1[0x7eb] + param_1[0x7ea];
  param_1[0x7df] = param_1[0x7df] + param_1[0x7ed] + param_1[0x7ec];
LAB_004908bc:
  if ((int *)param_1[0x16f] == param_1) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1[0x7dd];
  }
  DAT_0083b8dc = iVar3 + param_1[0x7e8] + param_1[0x7ec] + param_1[0x7e6];
  if ((int *)param_1[0x16f] == param_1) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1[0x7de];
  }
  DAT_0083b8d8 = iVar3 + param_1[0x7e5] + param_1[0x7ea] + param_1[0x7e8];
  (**(code **)(*param_1 + 0x180))();
  return 0;
}

