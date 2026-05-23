/* Ghidra decompiled: golf.exe */
/* Function: FUN_00421fa0 @ 0x00421FA0 */
/* Body size: 1056 addresses */


int FUN_00421fa0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                )

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  
  iVar7 = param_3 * 0x400;
  iVar11 = (param_4 * 0x400 - param_2) + 0x200;
  iVar8 = (iVar7 - param_1) + 0x200;
  DAT_005783a2 = 0;
  iVar1 = FUN_004672d0(iVar8,iVar11);
  uVar2 = (iVar1 >> 0x1c) + 1 >> 1 & 7;
  iVar8 = FUN_0040acd0(iVar8,iVar11);
  iVar9 = iVar8 + 0x200 >> 10;
  iVar11 = FUN_00467130(iVar9,0,param_5 / 0x19 + 1);
  iVar8 = 0;
  param_3 = 0;
  local_24 = 0;
  local_1c = 0;
  if (-1 < iVar9) {
    local_18 = 0x200;
    local_28 = iVar11 << 10;
    iVar8 = iVar11 * param_6 * 0x15555554;
    do {
      iVar4 = 0;
      if (param_6 != 0) {
        if (iVar11 / 2 < local_1c) {
          if (local_1c < iVar11) {
            iVar4 = iVar8 / ((iVar11 + 1) / 2);
          }
        }
        else {
          iVar4 = param_6 * 0xffffffc;
        }
      }
      iVar3 = FUN_00467270(iVar1 + iVar4,local_1c << 10);
      uVar10 = iVar3 + param_1;
      iVar4 = FUN_004672b0(iVar1 + iVar4,local_1c << 10);
      uVar5 = param_2 - iVar4;
      if (((param_6 != 0) && (iVar11 / 2 < local_1c)) && (local_1c < iVar11)) {
        iVar3 = iVar1 + param_6 * -0x15555554;
        iVar4 = FUN_00467270(iVar3,local_28);
        uVar10 = (iVar7 - iVar4) + 0x200;
        iVar4 = FUN_004672b0(iVar3,local_28);
        uVar5 = iVar4 + 0x200 + param_4 * 0x400;
      }
      uVar12 = uVar10 & 0x800003ff;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xfffffc00) + 1;
      }
      uVar6 = uVar5 & 0x800003ff;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffc00) + 1;
      }
      iVar4 = ((int)uVar5 >> 10) + ((int)uVar10 >> 10) * 0x32;
      if (iVar11 < 6) {
        iVar3 = 1;
      }
      else {
        iVar3 = (8 < iVar11) + 2;
      }
      if (((iVar11 - iVar3 <= local_1c) && (param_7 == 0)) ||
         ((&DAT_00578376)[*(char *)((int)&DAT_005722e8 + iVar4) * 0x30] == '\r')) {
        iVar3 = *(char *)((int)&DAT_005722e8 + iVar4) * 0x30;
        if ('\0' < (char)(&DAT_00578372)[iVar3]) {
          param_3 = param_3 + (char)(&DAT_00578372)[iVar3];
        }
        if ((&DAT_00578376)[iVar3] == '\r') {
          param_3 = param_3 + (int)(0x20 / (longlong)(local_1c + 1));
        }
        if ((*(char *)((int)&DAT_005722e8 + iVar4) == '\x11') ||
           (iVar3 = FUN_0040bf60((int)uVar10 >> 10,(int)uVar5 >> 10), iVar3 != 0)) {
          param_3 = param_3 + 0x10;
        }
        if (((int)uVar12 >> 4 < 0xf) && ((&DAT_004c2898)[uVar2] != 0)) {
          param_3 = param_3 + (int)(char)(&DAT_00578372)[(char)(&DAT_005722b6)[iVar4] * 0x30] / 2;
        }
        if ((0x30 < (int)uVar12 >> 4) && ((&DAT_004c2898)[uVar2] != 0)) {
          param_3 = param_3 + (int)(char)(&DAT_00578372)[(char)(&DAT_0057231a)[iVar4] * 0x30] / 2;
        }
        if (((int)uVar6 >> 4 < 0xf) && ((&DAT_004c2878)[uVar2] != 0)) {
          param_3 = param_3 + (int)(char)(&DAT_00578372)[(char)(&DAT_005722e7)[iVar4] * 0x30] / 2;
        }
        if ((0x30 < (int)uVar6 >> 4) && ((&DAT_004c2878)[uVar2] != 0)) {
          param_3 = param_3 + (int)(char)(&DAT_00578372)
                                         [*(char *)((int)&DAT_005722e8 + iVar4 + 1) * 0x30] / 2;
        }
      }
      iVar4 = FUN_00467270(iVar1,local_18);
      iVar3 = FUN_004672b0(iVar1,local_18);
      if ((&DAT_00578376)
          [*(char *)((int)&DAT_005722e8 + (iVar4 + param_1 >> 10) * 0x32 + (param_2 - iVar3 >> 10))
           * 0x30] == '\r') {
        local_24 = local_24 + 1;
      }
      local_1c = local_1c + 1;
      iVar8 = iVar8 + param_6 * -0x15555554;
      local_28 = local_28 + -0x400;
      local_18 = local_18 + 0x400;
    } while (local_1c <= iVar9);
    iVar8 = param_3;
    if (1 < local_24) {
      iVar8 = param_3 + 1;
    }
    if (iVar8 < 0) {
      iVar8 = 0;
    }
  }
  DAT_005783a2 = 0xff;
  return iVar8;
}

