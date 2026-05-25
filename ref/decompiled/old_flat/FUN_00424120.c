/* Ghidra decompiled: golf.exe */
/* Function: FUN_00424120 @ 0x00424120 */


void FUN_00424120(uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  bool bVar22;
  int local_b0c;
  int local_b08;
  uint local_b04;
  int local_b00;
  int local_afc;
  uint local_af4;
  int local_ae4;
  int local_ae0;
  int local_ad4;
  uint local_ad0;
  int local_ac4 [32];
  uint auStack_a44 [32];
  char acStack_9c4 [2500];
  
  iVar19 = param_1 * 0x100;
  cVar2 = (&DAT_005794d9)[iVar19];
  iVar5 = FUN_00422530(param_1);
  if ((*(byte *)(&DAT_005794c8 + param_1 * 0x40) & 1) != 0) {
    DAT_005786a2 = 0x20;
    DAT_00578732 = 0x20;
  }
  DAT_004c2fcc = 0xffffffff;
  if (((DAT_0059e7b8 & 0x20) != 0) && (0 < DAT_0053df54)) {
    DAT_004c2fcc = DAT_0053df54 - 1;
  }
  iVar6 = (int)(&DAT_0057958c)[param_1 * 0x40] >> 10;
  iVar15 = (int)(&DAT_00579590)[param_1 * 0x40] >> 10;
  iVar14 = iVar15 + iVar6 * 0x32;
  local_b08 = (int)*(char *)((int)&DAT_005722e8 + iVar14);
  if (param_2 == 0) {
    uVar10 = (&DAT_00575acc)[cVar2 * 0x82];
    *(undefined4 *)(&DAT_00579584 + iVar19) = (&DAT_00575ac8)[cVar2 * 0x82];
    *(undefined4 *)(&DAT_00579588 + iVar19) = uVar10;
  }
  else {
    param_5 = 0;
    if (DAT_0058f330 < 2) {
      param_5 = DAT_0058f330;
    }
  }
  iVar20 = (*(int *)(&DAT_00579584 + iVar19) * 0x400 - (&DAT_0057958c)[param_1 * 0x40]) + 0x200;
  iVar17 = (*(int *)(&DAT_00579588 + iVar19) * 0x400 - (&DAT_00579590)[param_1 * 0x40]) + 0x200;
  if (param_3 != -1) {
    iVar20 = param_3 - (&DAT_0057958c)[param_1 * 0x40];
    iVar17 = param_4 - (&DAT_00579590)[param_1 * 0x40];
    *(int *)(&DAT_00579584 + iVar19) = param_3 >> 10;
    *(int *)(&DAT_00579588 + iVar19) = param_4 >> 10;
  }
  local_b0c = __ftol();
  iVar17 = FUN_004672d0(iVar20,iVar17);
  *(int *)(&DAT_00579598 + iVar19) = iVar17;
  uVar16 = (&DAT_005794c8)[param_1 * 0x40];
  uVar7 = (iVar17 >> 0x1c) + 1 >> 1;
  (&DAT_005794c8)[param_1 * 0x40] = uVar16 & 0xefffffff;
  if ((param_2 == 0) && (param_3 == -1)) {
    if (((uVar16 & 1) != 0) || (iVar17 = 0x4b, ((&DAT_005794d1)[iVar19] & 4) != 0)) {
      iVar17 = 0x19;
    }
    if ((iVar17 < local_b0c) && (local_b08 != 1)) {
      iVar17 = FUN_00467130(iVar5 + -0x19,0,local_b0c);
      iVar20 = (iVar17 * 0x400 + 0x200) / 0x19;
      iVar8 = FUN_00467270(*(undefined4 *)(&DAT_00579598 + iVar19),iVar20);
      iVar17 = (&DAT_00579590)[param_1 * 0x40];
      iVar8 = iVar8 + (&DAT_0057958c)[param_1 * 0x40] >> 10;
      iVar20 = FUN_004672b0(*(undefined4 *)(&DAT_00579598 + iVar19),iVar20);
      iVar20 = iVar17 - iVar20 >> 10;
      FUN_0040c4b0((&DAT_0057958c)[param_1 * 0x40],iVar17,iVar8,iVar20);
      FUN_0040acd0(iVar8 - (&DAT_00575ac8)[(char)(&DAT_005794d9)[iVar19] * 0x82],
                   iVar20 - (&DAT_00575acc)[(char)(&DAT_005794d9)[iVar19] * 0x82]);
      param_5 = FUN_00422fb0(param_1);
      if (DAT_005a9ce8 == 0) {
        iVar17 = (*(int *)(&DAT_00579584 + iVar19) * 0x400 - (&DAT_0057958c)[param_1 * 0x40]) +
                 0x200;
        iVar20 = (*(int *)(&DAT_00579588 + iVar19) * 0x400 - (&DAT_00579590)[param_1 * 0x40]) +
                 0x200;
        uVar16 = (&DAT_005794c8)[param_1 * 0x40] & 0xefffffff;
      }
      else {
        iVar17 = *(int *)(&DAT_00579584 + iVar19) * 0x400 - (&DAT_0057958c)[param_1 * 0x40];
        iVar20 = *(int *)(&DAT_00579588 + iVar19) * 0x400 - (&DAT_00579590)[param_1 * 0x40];
        uVar16 = (&DAT_005794c8)[param_1 * 0x40] | 0x10000000;
      }
      (&DAT_005794c8)[param_1 * 0x40] = uVar16;
      if (((&DAT_005794d1)[iVar19] & 4) != 0) {
        iVar8 = *(int *)(&DAT_00579584 + iVar19);
        iVar18 = 0;
        local_b00 = (int)acStack_9c4[*(int *)(&DAT_00579588 + iVar19) + iVar8 * 0x32];
        do {
          iVar9 = (int)acStack_9c4
                       [((iVar8 - *(int *)((int)&DAT_004c2878 + iVar18)) * 0x32 -
                        *(int *)((int)&DAT_004c2898 + iVar18)) + *(int *)(&DAT_00579588 + iVar19)] -
                  (int)acStack_9c4[*(int *)(&DAT_00579588 + iVar19) + iVar8 * 0x32];
          iVar9 = (int)acStack_9c4
                       [*(int *)(&DAT_00579588 + iVar19) +
                        (iVar8 + *(int *)((int)&DAT_004c2878 + iVar18)) * 0x32 +
                        *(int *)((int)&DAT_004c2898 + iVar18)] -
                  ((int)((iVar9 >> 0x1f & 3U) + iVar9) >> 2);
          if (iVar9 < local_b00) {
            local_b00 = iVar9;
          }
          iVar18 = iVar18 + 8;
        } while (iVar18 < 0x20);
      }
      uVar10 = FUN_004672d0(iVar17 * 0x19 >> 10,iVar20 * 0x19 >> 10);
      *(undefined4 *)(&DAT_00579598 + iVar19) = uVar10;
      local_b0c = __ftol();
      if (DAT_004c2fcc == param_1) {
        FUN_00480c80(0);
        FUN_0045c0c0(0);
      }
    }
    else {
      iVar17 = *(int *)(&DAT_00579584 + iVar19);
      iVar20 = *(int *)(&DAT_00579588 + iVar19);
      DAT_005a7140 = 0;
      DAT_005a8828 = iVar17 * 0x400 + 0x200;
      DAT_005a8830 = iVar20 * 0x400 + 0x200;
      if ((local_b08 != 1) && (0x19 < local_b0c)) {
        uVar16 = uVar7 & 6;
        uVar7 = (uVar7 & 7) + 1 & 6;
        iVar17 = (((int)(char)(&DAT_00578372)
                              [*(char *)((int)&DAT_005722e8 +
                                        iVar20 + ((iVar17 - (&DAT_004c2878)[uVar16]) * 0x32 -
                                                 (&DAT_004c2898)[uVar16])) * 0x30] +
                  (int)(char)(&DAT_00578372)
                             [*(char *)((int)&DAT_005722e8 +
                                       iVar20 + ((iVar17 - (&DAT_004c2878)[uVar7]) * 0x32 -
                                                (&DAT_004c2898)[uVar7])) * 0x30]) -
                 (int)(char)(&DAT_00578372)
                            [*(char *)((int)&DAT_005722e8 +
                                      iVar20 + (&DAT_004c2898)[uVar16] +
                                               ((&DAT_004c2878)[uVar16] + iVar17) * 0x32) * 0x30]) -
                 (int)(char)(&DAT_00578372)
                            [*(char *)((int)&DAT_005722e8 +
                                      iVar20 + (&DAT_004c2898)[uVar7] +
                                               (iVar17 + (&DAT_004c2878)[uVar7]) * 0x32) * 0x30];
        if (3 < iVar17) {
          iVar20 = FUN_00467130(((int)(local_b0c + (local_b0c >> 0x1f & 3U)) >> 2) -
                                ((((char)(&DAT_00578372)[local_b08 * 0x30] < '\x01') - 1 &
                                 0xfffffffa) + 6),0,0xc);
          local_b0c = local_b0c + iVar20;
        }
        if (iVar17 < -3) {
          local_b0c = local_b0c + -6;
        }
      }
    }
  }
  uVar16 = (*(int *)(&DAT_00579598 + iVar19) >> 0x1c) + 1 >> 1 & 7;
  piVar21 = local_ac4;
  for (iVar17 = 0x20; iVar17 != 0; iVar17 = iVar17 + -1) {
    *piVar21 = 0;
    piVar21 = piVar21 + 1;
  }
  iVar17 = 4 - (param_1 & 3);
  iVar20 = local_b0c / 0x19;
  local_afc = 0;
  local_ad4 = 0;
  local_ae4 = 0;
  local_af4 = 0;
  local_b00 = 0;
  if (0 < iVar20) {
    local_b04 = 0x200;
    uVar7 = 0;
    do {
      iVar8 = FUN_00467270(*(undefined4 *)(&DAT_00579598 + iVar19),local_b04);
      iVar18 = iVar8 + (&DAT_0057958c)[param_1 * 0x40] >> 10;
      iVar8 = FUN_004672b0(*(undefined4 *)(&DAT_00579598 + iVar19),local_b04);
      local_ae0 = (&DAT_00579590)[param_1 * 0x40] - iVar8 >> 10;
      iVar8 = FUN_0040bf60(iVar18,local_ae0);
      if (iVar8 != 0) break;
      iVar8 = local_ae0 + iVar18 * 0x32;
      iVar9 = (int)*(char *)((int)&DAT_005722e8 + iVar8);
      cVar2 = (&DAT_00578372)[iVar9 * 0x30];
      local_ad0 = uVar7 + 1;
      local_ac4[iVar9] = local_ac4[iVar9] + local_ad0 * (int)cVar2 * 2;
      auStack_a44[iVar9] = uVar16 ^ 4;
      if ((*(char *)((int)&DAT_005722e8 + iVar8) == '\x11') && (local_af4 == 0)) {
        local_af4 = uVar7;
      }
      if ((local_b04 != 0x200) && ((&DAT_00578376)[iVar9 * 0x30] == '\r')) {
        local_afc = local_afc + 1;
      }
      if (((&DAT_0053caf0)[iVar8] & 0x100) != 0) {
        local_ad4 = iVar9;
      }
      if (iVar20 / 2 < (int)uVar7) {
        iVar8 = FUN_0040c170(*(undefined4 *)(&DAT_00579584 + iVar19),
                             *(undefined4 *)(&DAT_00579588 + iVar19),0);
        iVar18 = FUN_0040c170(iVar18,local_ae0,0);
        if (iVar8 + 1 < iVar18) goto LAB_0042488f;
      }
      else {
        iVar8 = FUN_0040c170(iVar6,iVar15,0);
        iVar18 = FUN_0040c170(iVar18,local_ae0,0);
        if (iVar8 + 1 < iVar18) {
LAB_0042488f:
          local_afc = local_afc + 2;
        }
      }
      sVar3 = FUN_0045c1e0(2);
      iVar9 = (-(uint)(sVar3 != 0) & 0x15555554) + 0xf5555556;
      iVar18 = FUN_00467270(*(int *)(&DAT_00579598 + iVar19) + iVar9,local_b04);
      iVar8 = (&DAT_0057958c)[param_1 * 0x40];
      iVar9 = FUN_004672b0(*(int *)(&DAT_00579598 + iVar19) + iVar9,local_b04);
      iVar17 = iVar17 + uVar7 * (int)cVar2 * 2 +
               (int)(char)(&DAT_00578372)
                          [*(char *)((int)&DAT_005722e8 +
                                    (iVar18 + iVar8 >> 10) * 0x32 +
                                    ((&DAT_00579590)[param_1 * 0x40] - iVar9 >> 10)) * 0x30] *
               local_ad0;
      local_b04 = local_b04 + 0x400;
      uVar7 = local_ad0;
    } while ((int)local_ad0 < iVar20);
  }
  local_b04 = 0;
  do {
    iVar8 = *(int *)(&DAT_00579584 + iVar19);
    iVar18 = *(int *)(&DAT_00579588 + iVar19);
    iVar9 = (&DAT_004c2878)[local_b04];
    iVar13 = (&DAT_004c2898)[local_b04];
    iVar11 = FUN_0040bf60(iVar9 + iVar8,iVar13 + iVar18);
    if (iVar11 == 0) {
      iVar18 = (int)*(char *)((int)&DAT_005722e8 + (iVar9 + iVar8) * 0x32 + iVar13 + iVar18);
      iVar8 = ((int)(char)(&DAT_00578372)[iVar18 * 0x30] * (iVar20 + 1)) / 2;
      iVar17 = iVar17 + iVar8;
      local_ac4[iVar18] = local_ac4[iVar18] + iVar8;
      auStack_a44[iVar18] = local_b04;
    }
    else {
      iVar17 = iVar17 + 4 + iVar20 * 4;
    }
    local_b04 = local_b04 + 1;
  } while ((int)local_b04 < 8);
  iVar8 = -1;
  iVar18 = 0;
  do {
    if (iVar8 < local_ac4[iVar18]) {
      local_ad0 = auStack_a44[iVar18];
      iVar8 = local_ac4[iVar18];
      local_ae0 = iVar18;
    }
    iVar18 = iVar18 + 1;
  } while (iVar18 < 0x20);
  iVar17 = iVar17 / (iVar20 + 3);
  if (1 < local_afc) {
    iVar17 = iVar17 + 4;
  }
  if (*(char *)((int)&DAT_005722e8 +
               ((int)(&DAT_0057958c)[param_1 * 0x40] >> 10) * 0x32 +
               ((int)(&DAT_00579590)[param_1 * 0x40] >> 10)) == '\x01') {
    iVar17 = 0;
  }
  if ((local_b0c < 0x29) && (10 < iVar17)) {
    iVar17 = 10;
  }
  (&DAT_005794d3)[iVar19] = (char)iVar17;
  if (((&DAT_005794d1)[iVar19] & 4) != 0) {
    iVar17 = FUN_0040c170(*(undefined4 *)(&DAT_00579584 + iVar19),
                          *(undefined4 *)(&DAT_00579588 + iVar19),0);
    iVar20 = FUN_0040c170(iVar6,iVar15,0);
    iVar17 = iVar17 - iVar20;
    if (iVar17 < 1) {
      local_b0c = local_b0c + (iVar17 * 0x19) / 10;
    }
    else {
      local_b0c = local_b0c + ((int)(iVar17 * 0x19 + (iVar17 * 0x19 >> 0x1f & 7U)) >> 3);
    }
  }
  local_b0c = FUN_00467130(local_b0c,0,iVar5);
  (&DAT_0057959c)[param_1 * 0x40] = local_b0c;
  cVar2 = (char)(((iVar5 - local_b0c) * 0x3c) / (iVar5 * 3));
  (&DAT_005794d4)[iVar19] = cVar2;
  cVar2 = FUN_00467130((int)cVar2,local_b08 != 0,0xb);
  (&DAT_005794d4)[iVar19] = cVar2;
  if (((param_2 != 0) && (DAT_0058f330 == 3)) && (cVar2 < '\x05')) {
    local_b0c = (iVar5 * 0xd) / 0x12;
    (&DAT_0057959c)[param_1 * 0x40] = local_b0c;
    (&DAT_005794d4)[iVar19] = 5;
  }
  if (((local_b08 == 1) && (local_b0c < 0x32)) &&
     ((*(byte *)(&DAT_005794c8 + param_1 * 0x40) & 1) == 0)) {
    (&DAT_005794d4)[iVar19] = 0xd;
  }
  iVar17 = ((&DAT_0057959c)[param_1 * 0x40] * 0x14) / 0x19;
  iVar17 = (iVar17 * 0x21 - (iVar17 * iVar17) / 0x30) + 0x40;
  (&DAT_0057959c)[param_1 * 0x40] = iVar17;
  iVar17 = ((int)(iVar17 + (iVar17 >> 0x1f & 7U)) >> 3) + 0x200;
  *(int *)(&DAT_005795a0 + iVar19) = iVar17;
  uVar10 = FUN_00422430((local_b0c * 4) / 5,iVar17,0);
  uVar7 = DAT_005a47e0 & 2;
  (&DAT_0057959c)[param_1 * 0x40] = uVar10;
  iVar17 = (-(uint)(uVar7 != 0) & 0xfffffff8) + 0x14;
  if (((((&DAT_005794d1)[iVar19] & 4) != 0) && (DAT_00543cb8 != 0)) &&
     (((&DAT_005794d0)[iVar19] & 0xe0) != 0x20)) {
    iVar17 = iVar17 + iVar17 / (4 - DAT_00543cb8);
  }
  if (((&DAT_005794ce)[iVar19] & 0x10) != 0) {
    iVar17 = iVar17 + ((int)((uint)(byte)(&DAT_005795ac)[iVar19] * iVar17 +
                            ((int)((uint)(byte)(&DAT_005795ac)[iVar19] * iVar17) >> 0x1f & 7U)) >> 3
                      );
  }
  if ((*(byte *)((int)&DAT_0056988c +
                (&DAT_00575ac8)[(char)(&DAT_005794d9)[iVar19] * 0x82] * 0x32 +
                (&DAT_00575acc)[(char)(&DAT_005794d9)[iVar19] * 0x82]) & 0x80) != 0) {
    iVar17 = iVar17 + -10;
  }
  if ((char)(&DAT_005794ee)[iVar19] < '\x02') {
    iVar17 = iVar17 / 2;
  }
  uVar7 = FUN_0045c1e0(iVar17 / 2);
  iVar17 = (uVar7 & 0xffff) + 4 + iVar17 / 2;
  iVar8 = FUN_00422430((iVar5 * 4) / 5,*(undefined4 *)(&DAT_005795a0 + iVar19),0);
  iVar20 = DAT_005a9cc4;
  *(undefined4 *)(&DAT_005795a4 + iVar19) = 0;
  if (iVar20 < 2) {
    iVar20 = FUN_00405920();
    *(int *)(&DAT_005795a4 + iVar19) = iVar20 * 0x50000;
  }
  if (DAT_005a9cc4 == 1) {
    *(int *)(&DAT_005795a4 + iVar19) = *(int *)(&DAT_005795a4 + iVar19) / 3;
  }
  if ((char)(&DAT_005794ee)[iVar19] < '\0') {
    iVar20 = *(int *)(&DAT_005795a4 + iVar19);
    iVar18 = FUN_00467130(-(int)(char)(&DAT_005794ee)[iVar19],0,3);
    *(int *)(&DAT_005795a4 + iVar19) =
         (iVar18 * iVar20) / (int)((-(uint)(local_b08 != 1) & 0xfffffffb) + 8) + iVar20;
  }
  iVar20 = DAT_00822c88;
  if (((local_b08 != 1) && (((&DAT_005794d0)[iVar19] & 0xe0) != 0x20)) &&
     ((((&DAT_005794d1)[iVar19] & 2) != 0 || ((*(byte *)(&DAT_005794c8 + param_1 * 0x40) & 1) != 0))
     )) {
    iVar18 = *(int *)(&DAT_005795a4 + iVar19) / (DAT_00543cc0 + 2);
    *(int *)(&DAT_005795a4 + iVar19) = iVar18;
    if (iVar20 < 2) {
      *(int *)(&DAT_005795a4 + iVar19) = iVar18 - iVar18 / (iVar20 + 2);
    }
  }
  if ((((&DAT_005794c8)[param_1 * 0x40] & 0x4000000) != 0) &&
     (((&DAT_005794d0)[iVar19] & 0xe0) != 0x20)) {
    *(int *)(&DAT_005795a4 + iVar19) =
         *(int *)(&DAT_005795a4 + iVar19) - *(int *)(&DAT_005795a4 + iVar19) / 3;
  }
  local_b04 = -3;
  (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] & 0xffbfffff;
  uVar7 = DAT_0059e7b8;
  if ((&DAT_005794d4)[iVar19] == '\r') {
    *(undefined4 *)(&DAT_005795a4 + iVar19) = 0;
    iVar20 = (((uVar7 & 0x200000) != 0) + 1) * local_b0c;
    if (iVar20 - iVar17 != 0 && iVar17 <= iVar20) {
      sVar3 = FUN_0045c1e0(2);
      if (sVar3 == 0) {
        uVar7 = FUN_0045c1e0(0x96);
        *(uint *)(&DAT_005795a4 + iVar19) = ((uVar7 & 0xffff) + 0x96) * 0x40000;
      }
      else if (sVar3 == 1) {
        uVar7 = FUN_0045c1e0(0x96);
        *(uint *)(&DAT_005795a4 + iVar19) = (-0x96 - (uVar7 & 0xffff)) * 0x40000;
      }
      if (local_b0c < 6) {
        *(undefined4 *)(&DAT_005795a4 + iVar19) = 0;
      }
      if (0xf < local_b0c) {
        *(int *)(&DAT_005795a4 + iVar19) = *(int *)(&DAT_005795a4 + iVar19) / 2;
      }
      if (0x19 < local_b0c) {
        *(int *)(&DAT_005795a4 + iVar19) = *(int *)(&DAT_005795a4 + iVar19) / 2;
      }
      if (0x23 < local_b0c) {
LAB_00424edb:
        *(int *)(&DAT_005795a4 + iVar19) = *(int *)(&DAT_005795a4 + iVar19) / 2;
      }
    }
  }
  else {
    if ((&DAT_005794d0)[iVar19] != 0) {
      if (param_1 == DAT_005a59f8) {
        *(int *)(&DAT_005795a4 + iVar19) =
             *(int *)(&DAT_005795a4 + iVar19) -
             ((3 - iVar20) * *(int *)(&DAT_005795a4 + iVar19)) / 6;
      }
      else if (((&DAT_005794d0)[iVar19] & 0xe0) == 0x20) {
        *(int *)(&DAT_005795a4 + iVar19) =
             ((3 - iVar20) * *(int *)(&DAT_005795a4 + iVar19)) / 3 +
             *(int *)(&DAT_005795a4 + iVar19);
      }
      else {
        local_b04 = (char)(&DAT_005794ee)[iVar19] + -3;
      }
      if ((char)(&DAT_005794d4)[iVar19] < '\x04') {
        if ((&DAT_005794da)[iVar19] == '\0') {
          *(int *)(&DAT_005795a4 + iVar19) =
               (*(int *)(&DAT_005795a4 + iVar19) * 6) / (int)((byte)(&DAT_005795aa)[iVar19] + 4);
          bVar1 = (&DAT_005795aa)[iVar19];
          goto LAB_00424ff9;
        }
      }
      else {
        *(int *)(&DAT_005795a4 + iVar19) =
             (*(int *)(&DAT_005795a4 + iVar19) * 6) / (int)((byte)(&DAT_005795ab)[iVar19] + 4);
        bVar1 = (&DAT_005795ab)[iVar19];
LAB_00424ff9:
        local_b04 = local_b04 + bVar1;
      }
      if (param_5 == 1) {
        *(int *)(&DAT_005795a4 + iVar19) =
             (*(int *)(&DAT_005795a4 + iVar19) * 6) / (int)((byte)(&DAT_005795ad)[iVar19] + 3);
        local_b04 = local_b04 + (byte)(&DAT_005795ad)[iVar19];
      }
      else if (param_5 == -1) {
        *(int *)(&DAT_005795a4 + iVar19) =
             (*(int *)(&DAT_005795a4 + iVar19) * 6) / (int)((byte)(&DAT_005795ae)[iVar19] + 3);
        local_b04 = local_b04 + (byte)(&DAT_005795ae)[iVar19];
      }
      else if ((param_5 == 0) && (DAT_0058f330 != 3)) {
        local_b04 = local_b04 + 3;
        *(int *)(&DAT_005795a4 + iVar19) = (*(int *)(&DAT_005795a4 + iVar19) * 6) / 7;
      }
    }
    if ((((DAT_0059e7b8 & 0x800000) == 0) && (0x4b < local_b0c)) &&
       (uVar4 = FUN_0045c1e0((&DAT_0057959c)[param_1 * 0x40]), uVar7 = DAT_005a59f8,
       uVar12 = (int)*(uint *)(&DAT_005795a4 + iVar19) >> 0x1f,
       ((int)((*(uint *)(&DAT_005795a4 + iVar19) ^ uVar12) - uVar12) >> 9) + 0x200 <
       (int)(uint)uVar4)) {
      local_b04 = local_b04 + 4;
      (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] | 0x400000;
      if (param_1 != uVar7) goto LAB_00424edb;
      *(undefined4 *)(&DAT_005795a4 + iVar19) = 0;
    }
  }
  iVar17 = *(int *)(&DAT_00579598 + iVar19);
  if (param_5 == 1) {
    iVar17 = iVar17 + 0x15555554;
  }
  else if (param_5 == -1) {
    iVar17 = iVar17 + -0x15555554;
  }
  if ((&DAT_005794d4)[iVar19] != '\r') {
    iVar20 = FUN_00467130(*(undefined4 *)(&DAT_005795a4 + iVar19),0xfc71c71d,0x38e38e3);
    *(int *)(&DAT_00579598 + iVar19) = *(int *)(&DAT_00579598 + iVar19) + iVar20 * 3;
    iVar20 = *(int *)(&DAT_005795a4 + iVar19) - iVar20 / 2;
    bVar22 = DAT_005a9cc4 == 0;
    *(int *)(&DAT_005795a4 + iVar19) = iVar20;
    if ((bVar22) && (((&DAT_005794d0)[iVar19] & 0xe0) == 0x20)) {
      iVar18 = (local_b0c + -100) * iVar20;
      *(int *)(&DAT_005795a4 + iVar19) = ((int)(iVar18 + (iVar18 >> 0x1f & 0xffU)) >> 8) + iVar20;
      uVar4 = FUN_0045c1e0(0x71c6);
      *(int *)(&DAT_005795a4 + iVar19) =
           *(int *)(&DAT_005795a4 + iVar19) + (int)(uVar4 + 0xfc71c71d) / 0x32;
    }
  }
  (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] & 0xfffffe7f;
  (&DAT_00579564)[param_1 * 0x80] = 0;
  if ((((&DAT_005794c8)[param_1 * 0x40] & 1) == 0) || (uVar7 = 1, param_2 != 0)) {
    uVar7 = local_af4;
  }
  if ((((((&DAT_005794d1)[iVar19] & 4) == 0) && (((&DAT_005794c8)[param_1 * 0x40] & 2) == 0)) ||
      (local_b08 == 1)) || (uVar7 == 1)) {
LAB_004253e2:
    if ((((((&DAT_005794d1)[iVar19] & 4) != 0) && (param_5 == 0)) &&
        ((local_b08 != 1 &&
         (((&DAT_00578372)[local_b08 * 0x30] == '\0' && ('\x03' < (char)(&DAT_005794d4)[iVar19])))))
        ) && (0x19 < local_b0c)) {
      if (param_2 == 0) {
        if (*(char *)((int)&DAT_005722e8 +
                     *(int *)(&DAT_00579584 + iVar19) * 0x32 + *(int *)(&DAT_00579588 + iVar19)) ==
            '\x01') {
LAB_0042546f:
          (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] | 0x80;
          iVar5 = ((local_b0c + 0x32) * *(int *)(&DAT_005795a0 + iVar19)) / 400 +
                  *(int *)(&DAT_005795a0 + iVar19);
          *(int *)(&DAT_005795a0 + iVar19) = iVar5;
          uVar10 = FUN_00422430(local_b0c,iVar5,0);
          (&DAT_0057959c)[param_1 * 0x40] = uVar10;
          (&DAT_00579564)[param_1 * 0x80] = 3;
          *(int *)(&DAT_005795a4 + iVar19) =
               (*(int *)(&DAT_005795a4 + iVar19) * 6) / (int)((byte)(&DAT_005795af)[iVar19] + 3);
          local_b04 = local_b04 + (byte)(&DAT_005795af)[iVar19];
        }
      }
      else if (DAT_0058f330 == 3) goto LAB_0042546f;
    }
  }
  else {
    if (param_2 == 0) {
      iVar18 = FUN_004672b0(iVar17,0x80);
      iVar20 = (&DAT_00579590)[param_1 * 0x40];
      iVar9 = FUN_00467270(iVar17,0x80);
      if ((&DAT_00578376)
          [*(char *)((int)&DAT_005722e8 +
                    (iVar9 + (&DAT_0057958c)[param_1 * 0x40] >> 10) * 0x32 + (iVar20 - iVar18 >> 10)
                    ) * 0x30] != '\r') {
        iVar18 = FUN_004672b0(iVar17,0x400);
        iVar20 = (&DAT_00579590)[param_1 * 0x40];
        iVar17 = FUN_00467270(iVar17,0x400);
        if ((&DAT_00578376)
            [*(char *)((int)&DAT_005722e8 +
                      (iVar17 + (&DAT_0057958c)[param_1 * 0x40] >> 10) * 0x32 +
                      (iVar20 - iVar18 >> 10)) * 0x30] != '\r') goto LAB_004253e2;
      }
    }
    else if (DAT_0058f330 != 4) goto LAB_004253e2;
    uVar10 = FUN_00467130((int)(&DAT_0057959c)[param_1 * 0x40] / 0xc,0,0x100);
    *(undefined4 *)(&DAT_005795a0 + iVar19) = uVar10;
    (&DAT_0057959c)[param_1 * 0x40] =
         ((iVar5 * 0x21 - (iVar5 * iVar5) / 0x30) + 0x40 + (&DAT_0057959c)[param_1 * 0x40]) / 2;
    uVar10 = FUN_00422430((int)(local_b0c * 3 + (local_b0c * 3 >> 0x1f & 3U)) >> 2,
                          *(undefined4 *)(&DAT_005795a0 + iVar19),0);
    (&DAT_0057959c)[param_1 * 0x40] = uVar10;
    if (uVar7 != 0) {
      uVar10 = FUN_00422430((int)(uVar7 * 0x32) / 3,*(undefined4 *)(&DAT_005795a0 + iVar19),0);
      (&DAT_0057959c)[param_1 * 0x40] = uVar10;
    }
    param_5 = 0;
    (&DAT_00579564)[param_1 * 0x80] = 4;
  }
  uVar7 = (uint)(byte)(&DAT_00579532)[iVar19];
  if (param_3 == -1) {
    if ((&DAT_005794d4)[iVar19] == '\r') {
      if (*(char *)((int)&DAT_005722e8 +
                   *(int *)(&DAT_00579584 + iVar19) * 0x32 + *(int *)(&DAT_00579588 + iVar19)) ==
          '\x01') {
        uVar10 = FUN_00422430(local_b0c + 2,0,1);
        (&DAT_0057959c)[param_1 * 0x40] = uVar10;
      }
    }
    else {
      local_afc = 0;
      *(int *)(&DAT_00575ad4 + (char)(&DAT_005794d9)[iVar19] * 0x208) =
           *(int *)(&DAT_00575ad4 + (char)(&DAT_005794d9)[iVar19] * 0x208) + 1;
      iVar5 = FUN_0040c170(iVar6,iVar15,0);
      if (0 < (iVar5 << 4) / (DAT_00822c88 + 2)) {
        do {
          iVar5 = *(int *)(&DAT_00579598 + iVar19);
          uVar12 = FUN_0045c1e0(0x19);
          iVar5 = iVar5 + (0xc - (uVar12 & 0xffff)) * 0x1000000;
          uVar12 = FUN_0045c1e0(200);
          iVar20 = (local_b0c - (uVar12 & 0xffff)) + 100;
          iVar17 = local_b00;
          if (-1 < iVar20) {
            iVar9 = (iVar20 / 0x19) * 0x400;
            iVar20 = FUN_00467270(iVar5,iVar9);
            iVar18 = iVar20 + (&DAT_005794b8)[param_1 * 0x40] >> 10;
            iVar20 = FUN_004672b0(iVar5,iVar9);
            iVar20 = (&DAT_005794bc)[param_1 * 0x40] - iVar20 >> 10;
            uVar12 = (iVar5 >> 0x1c) + 1 >> 1 & 7;
            iVar5 = FUN_0040bf60(iVar18,iVar20);
            if (iVar5 == 0) {
              iVar5 = iVar20 + iVar18 * 0x32;
              if ((((&DAT_0053caf0)[iVar5] & 0x100) != 0) ||
                 (*(char *)((int)&DAT_005722e8 + iVar5) == '\x13')) {
                iVar9 = FUN_0040c170(iVar6,iVar15,0);
                iVar13 = FUN_0040c170(iVar18,iVar20,0);
                if ((iVar13 <= iVar9 + 1) &&
                   ((&DAT_00578376)
                    [*(char *)((int)&DAT_005722e8 +
                              iVar20 + ((iVar18 - (&DAT_004c2878)[uVar12]) * 0x32 -
                                       (&DAT_004c2898)[uVar12])) * 0x30] != '\r')) {
                  local_ad4 = iVar18 + iVar20 * 0x32;
                }
              }
              if (((&DAT_00578377)[*(char *)((int)&DAT_005722e8 + iVar5) * 0x30] == '\x10') &&
                 ((&DAT_00578376)
                  [*(char *)((int)&DAT_005722e8 +
                            iVar20 + ((iVar18 - (&DAT_004c2878)[uVar12]) * 0x32 -
                                     (&DAT_004c2898)[uVar12])) * 0x30] != '\r')) {
                iVar9 = FUN_0040df80(iVar18,iVar20);
                if (*(char *)((int)&DAT_005722e8 + iVar5) == '\x15') {
                  if (((iVar9 == -1) || ((&DAT_0058bcb8)[iVar9 * 8] != 5)) ||
                     (iVar17 = (&DAT_0058bcc0)[iVar9 * 4], (&DAT_0058bcc0)[iVar9 * 4] == 0)) {
                    local_ae4 = iVar18 + iVar20 * 0x32;
                    iVar17 = local_b00;
                  }
                }
                else if ((&DAT_0058bcb8)[iVar9 * 8] == 4) {
                  if ((int)(&DAT_0058bcc0)[iVar9 * 4] < 0x10) {
                    local_ad4 = iVar18 + iVar20 * 0x32;
                  }
                  else {
                    local_ae4 = iVar18 + iVar20 * 0x32;
                  }
                }
              }
            }
          }
          local_b00 = iVar17;
          local_afc = local_afc + 1;
          iVar5 = FUN_0040c170(iVar6,iVar15,0);
        } while (local_afc < (iVar5 << 4) / (DAT_00822c88 + 2));
      }
    }
    iVar5 = FUN_0040c170(*(undefined4 *)(&DAT_00579584 + iVar19),
                         *(undefined4 *)(&DAT_00579588 + iVar19),0);
    iVar17 = FUN_0040c170(iVar6,iVar15,0);
    bVar1 = (byte)(iVar17 - iVar5 >> 0x1f);
    bVar22 = DAT_005a9ce4 == 0;
    (&DAT_005794d3)[iVar19] = (&DAT_005794d3)[iVar19] + (((byte)(iVar17 - iVar5) ^ bVar1) - bVar1);
    if (((bVar22) ||
        ((char)(&DAT_00578372)
               [*(char *)((int)&DAT_005722e8 +
                         *(int *)(&DAT_00579584 + iVar19) * 0x32 + *(int *)(&DAT_00579588 + iVar19))
                * 0x30] < '\x01')) ||
       (('\0' < (char)(&DAT_00578372)[local_b08 * 0x30] ||
        ((param_2 != 0 || ((*(byte *)(&DAT_005794c8 + param_1 * 0x40) & 1) != 0)))))) {
      if (local_ae4 == 0) {
        if (local_b00 != 0) goto LAB_004258bc;
        if (((((&DAT_0053caf0)[iVar14] & 0x800) == 0) || (iVar5 = FUN_004675d0(param_1), iVar5 == 0)
            ) || (((&DAT_0053caf0)[iVar14] & 0x4000) != 0)) {
          if ((local_b0c < 100) || (param_2 != 0)) {
            DAT_005a7140 = DAT_005a7140 & 0xfffffffc;
          }
          if ((DAT_005a7140 == 0) || ((&DAT_00579564)[param_1 * 0x80] == 4)) {
            cVar2 = (&DAT_005794d9)[iVar19];
            if (('\x01' < cVar2) && ((int)(char)(&DAT_005794da)[iVar19] == (param_1 & 1) + 1)) {
              uVar12 = FUN_0045c1e0(3);
              cVar2 = (&DAT_005794d9)[iVar19];
              if (*(int *)(&DAT_00575cac + cVar2 * 0x208) <= (int)(uVar12 & 0xffff)) {
                FUN_00467a00(param_1,0x1d,0x14);
                goto LAB_00425b61;
              }
            }
            if (DAT_00822c88 == 0) {
LAB_00425ab8:
              uVar12 = FUN_0045c1e0(5);
              if ((((int)((uVar12 & 0xffff) + 6 + DAT_00822c88) < (int)(char)(&DAT_005794d3)[iVar19]
                   ) && (0x28 < local_b0c)) && (local_ad4 == 0)) {
                if ((char)(&DAT_005794d3)[iVar19] < '\x18') {
                  uVar16 = local_ad0 - uVar16 & 7;
                  if ((uVar16 < 2) || (6 < uVar16)) {
                    uVar10 = 0x26;
                  }
                  else if ((uVar16 == 2) || (uVar16 == 6)) {
                    uVar10 = 5;
                  }
                  else {
                    uVar10 = 0x25;
                  }
                }
                else {
                  uVar10 = 0x1f;
                }
                FUN_00467a00(param_1,uVar10,local_ae0);
                (&DAT_005794d3)[iVar19] = (((char)(&DAT_005794d3)[iVar19] < '\x18') - 1U & 10) + 10;
              }
              else {
                (&DAT_005794d3)[iVar19] = 6;
              }
            }
            else if (((cVar2 < '\x02') || ((&DAT_005794da)[iVar19] != '\x01')) ||
                    (uVar12 = FUN_0045c1e0(3),
                    *(int *)(&DAT_00575cac + (char)(&DAT_005794d9)[iVar19] * 0x208) <=
                    (int)((uVar12 & 0xffff) + 3))) {
              if (((DAT_00822c88 == 0) ||
                  (uVar12 = FUN_0045c1e0(4),
                  (int)((uVar12 & 0xffff) + DAT_00822c88 * 2) < (int)(char)(&DAT_005794d3)[iVar19]))
                 || ((local_b0c < 0x65 ||
                     (('\0' < (char)(&DAT_00578372)[local_b08 * 0x30] || (local_ad4 != 0))))))
              goto LAB_00425ab8;
              FUN_00467a00(param_1,4,0x14);
              (&DAT_005794d3)[iVar19] = 0;
            }
            else {
              FUN_00467a00(param_1,0x1e,0x14);
            }
          }
          else if ((DAT_005a7140 & 3) == 0) {
            if ((char)(&DAT_00578372)[local_b08 * 0x30] < '\x01') {
              FUN_00467a00(param_1,6,0x14);
            }
          }
          else {
            FUN_00467a00(param_1,~(byte)DAT_005a7140 & 1 | 0x20,0x14);
          }
        }
        else {
          FUN_00467a00(param_1,0x18,0x14);
        }
      }
      else if (local_b00 == 0) {
        FUN_00467a00(param_1,0x14,local_ae4);
      }
      else {
LAB_004258bc:
        FUN_00467a00(param_1,0x16,local_b00 + -1);
      }
    }
    else {
      FUN_00467a00(param_1,8,0x14);
    }
LAB_00425b61:
    (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] & 0xffffff9f;
    if ((byte)(&DAT_00579532)[iVar19] == uVar7) {
      if ((&DAT_0057953c)[iVar19] == '\0') {
        if ((local_ad4 != 0) && ((char)(&DAT_00578372)[local_b08 * 0x30] < '\x01')) {
          FUN_00467a00(param_1,0x1c,local_ad4);
          goto LAB_00425d99;
        }
        if (param_5 == 1) {
          uVar10 = 0x37;
LAB_00425bd5:
          FUN_00467a00(param_1,uVar10,0x14);
        }
        else if (param_5 == -1) {
          uVar10 = 0x38;
          goto LAB_00425bd5;
        }
        if (((*(byte *)(&DAT_005794c8 + param_1 * 0x40) & 0x80) != 0) && (100 < local_b0c)) {
          FUN_00467a00(param_1,0x39,0x14);
        }
        if ((&DAT_00579564)[param_1 * 0x80] == 4) {
          FUN_00467a00(param_1,(-((&DAT_005794da)[iVar19] != '\0') & 0x33U) + 9,local_b08);
        }
        if (0x4b < local_b0c) {
          if (0x1e << (0x10U - (((&DAT_005794d1)[iVar19] & 2) != 0) & 0x1f) <
              *(int *)(&DAT_005795a4 + iVar19)) {
            (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] | 0x20;
          }
          if (*(int *)(&DAT_005795a4 + iVar19) <
              -0x1e << (0x10U - (((&DAT_005794d1)[iVar19] & 2) != 0) & 0x1f)) {
            (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] | 0x40;
          }
        }
        if (((((byte)(&DAT_00579532)[iVar19] == uVar7) && ((&DAT_0057953c)[iVar19] == '\0')) &&
            ((&DAT_005794da)[iVar19] == '\0')) &&
           (((&DAT_005849f6)
             [(short)(&DAT_0057956e)[param_1 * 0x80] * 0x2c + (int)(char)(&DAT_005794d9)[iVar19]] !=
             '\0' && ((&DAT_005794d0)[iVar19] == '\0')))) {
          FUN_00467a00(param_1,0x3b,0x14);
        }
        if ((((byte)(&DAT_00579532)[iVar19] == uVar7) && ((&DAT_005794da)[iVar19] == '\x03')) &&
           ((((byte)(&DAT_005794d9)[iVar19] + param_1 & 1) == 0 &&
            (((&DAT_005794d0)[iVar19] == '\0' &&
             ((&DAT_005794d0)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100] == '\0')))))) {
          iVar5 = FUN_0046c940(param_1 ^ 1);
          iVar17 = FUN_0046c940(param_1);
          if ((iVar17 == iVar5) &&
             (((&DAT_0057953c)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100] == '\0' &&
              ((&DAT_0057953c)[iVar19] == '\0')))) {
            FUN_00467a00(param_1,0x30,0x14);
            FUN_00467a00(param_1 ^ 1,0x31,0x14);
            (&DAT_0057953c)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100] =
                 (&DAT_0057953c)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100] + '\x01';
          }
        }
        goto LAB_00425d99;
      }
LAB_00425da3:
      uVar7 = 0xffffffff;
    }
    else {
LAB_00425d99:
      if ((&DAT_0057953c)[iVar19] != '\0') goto LAB_00425da3;
    }
    if (((((byte)(&DAT_00579532)[iVar19] == uVar7) && ('\x01' < (char)(&DAT_005794d9)[iVar19])) &&
        (bVar1 = (&DAT_005794d4)[iVar19], (char)bVar1 < '\r')) &&
       ((1 << (bVar1 & 0x1f) & (int)*(short *)(&DAT_00579558 + iVar19)) == 0)) {
      FUN_00467a00(param_1,0x36,(int)(char)bVar1);
    }
    *(ushort *)(&DAT_00579558 + iVar19) =
         *(ushort *)(&DAT_00579558 + iVar19) | (ushort)(1 << ((&DAT_005794d4)[iVar19] & 0x1f));
    if ((byte)(&DAT_00579532)[iVar19] == uVar7) {
      iVar5 = FUN_0040c170(*(undefined4 *)(&DAT_00579584 + iVar19),
                           *(undefined4 *)(&DAT_00579588 + iVar19),0);
      iVar17 = FUN_0040c170(iVar6,iVar15,0);
      if (iVar5 < iVar17) {
        FUN_00467a00(param_1,0x2e,0x14);
      }
      iVar5 = FUN_0040c170(*(undefined4 *)(&DAT_00579584 + iVar19),
                           *(undefined4 *)(&DAT_00579588 + iVar19),0);
      iVar6 = FUN_0040c170(iVar6,iVar15,0);
      if (iVar6 < iVar5) {
        FUN_00467a00(param_1,0x2d,0x14);
      }
    }
    if ((((byte)(&DAT_00579532)[iVar19] == uVar7) && ((&DAT_005794d0)[iVar19] == '\0')) &&
       (((&DAT_0057953c)[iVar19] == '\0' &&
        ((local_b08 == 1 &&
         (((uint)(byte)(&DAT_005794da)[iVar19] + param_1 + (byte)(&DAT_005794d9)[iVar19] & 3) == 0))
        )))) {
      FUN_00467a00(param_1,0x3e,0x14);
    }
  }
  (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] & 0xfffffffd;
  local_b00 = 0;
  if (param_5 == 1) {
    iVar5 = *(int *)(&DAT_00579598 + iVar19);
    *(int *)(&DAT_00579598 + iVar19) = iVar5 + 0x15555554;
    if ((*(byte *)(&DAT_005794c8 + param_1 * 0x40) & 0x80) != 0) {
      *(int *)(&DAT_00579598 + iVar19) = iVar5 + 0xfffffff;
    }
    if ((0 < *(int *)(&DAT_005795a4 + iVar19)) && (param_1 == DAT_005a59f8)) {
      *(int *)(&DAT_005795a4 + iVar19) = *(int *)(&DAT_005795a4 + iVar19) / 2;
    }
    local_b00 = -0x239a955;
    if (local_b0c < 300) {
      if (local_b0c < 0xfa) {
        (&DAT_0057959c)[param_1 * 0x40] =
             (int)((&DAT_0057959c)[param_1 * 0x40] << 4) / (0x14a - local_b0c) +
             (&DAT_0057959c)[param_1 * 0x40];
        (&DAT_00579564)[param_1 * 0x80] = 1;
        iVar8 = 999999;
      }
      else {
        (&DAT_0057959c)[param_1 * 0x40] =
             (int)((&DAT_0057959c)[param_1 * 0x40] << 4) / (400 - local_b0c) +
             (&DAT_0057959c)[param_1 * 0x40];
        (&DAT_00579564)[param_1 * 0x80] = 1;
        iVar8 = 999999;
      }
    }
    else {
      (&DAT_0057959c)[param_1 * 0x40] = iVar8 + (iVar8 << 4) / (400 - local_b0c);
      (&DAT_00579564)[param_1 * 0x80] = 1;
      iVar8 = 999999;
    }
  }
  else if (param_5 == -1) {
    iVar5 = *(int *)(&DAT_00579598 + iVar19);
    *(int *)(&DAT_00579598 + iVar19) = iVar5 + -0x15555554;
    if ((*(byte *)(&DAT_005794c8 + param_1 * 0x40) & 0x80) != 0) {
      *(int *)(&DAT_00579598 + iVar19) = iVar5 + -0xfffffff;
    }
    if ((*(int *)(&DAT_005795a4 + iVar19) < 0) && (param_1 == DAT_005a59f8)) {
      *(int *)(&DAT_005795a4 + iVar19) = *(int *)(&DAT_005795a4 + iVar19) / 2;
    }
    local_b00 = 0x239a955;
    if (local_b0c < 300) {
      if (local_b0c < 0xfa) {
        (&DAT_0057959c)[param_1 * 0x40] =
             (int)((&DAT_0057959c)[param_1 * 0x40] << 4) / (0x14a - local_b0c) +
             (&DAT_0057959c)[param_1 * 0x40];
        (&DAT_00579564)[param_1 * 0x80] = 0xffff;
        iVar8 = 999999;
      }
      else {
        (&DAT_0057959c)[param_1 * 0x40] =
             (int)((&DAT_0057959c)[param_1 * 0x40] << 4) / (400 - local_b0c) +
             (&DAT_0057959c)[param_1 * 0x40];
        (&DAT_00579564)[param_1 * 0x80] = 0xffff;
        iVar8 = 999999;
      }
    }
    else {
      (&DAT_0057959c)[param_1 * 0x40] = iVar8 + (iVar8 << 4) / (400 - local_b0c);
      (&DAT_00579564)[param_1 * 0x80] = 0xffff;
      iVar8 = 999999;
    }
  }
  iVar6 = FUN_00467130((&DAT_0057959c)[param_1 * 0x40],0,iVar8);
  (&DAT_0057959c)[param_1 * 0x40] = iVar6;
  iVar5 = DAT_00822c88;
  if (local_b0c < 0x4b) {
    if (DAT_00822c88 == 0) {
      if (param_1 == param_2) {
        *(int *)(&DAT_005795a4 + iVar19) = *(int *)(&DAT_005795a4 + iVar19) / 3;
        goto LAB_0042612f;
      }
      if (param_1 == (param_2 | 1)) {
        *(int *)(&DAT_005795a4 + iVar19) = *(int *)(&DAT_005795a4 + iVar19) << 1;
      }
    }
    if (local_b08 != 1) {
      if (((&DAT_005794d1)[iVar19] & 7) == 7) {
        iVar5 = iVar5 + 4;
      }
      else {
        iVar5 = 9 - iVar5;
      }
      *(int *)(&DAT_00579598 + iVar19) =
           *(int *)(&DAT_00579598 + iVar19) + iVar5 * *(int *)(&DAT_005795a4 + iVar19) * 2;
    }
  }
LAB_0042612f:
  if ((((&DAT_005794d0)[iVar19] != '\0') && ('\0' < (char)(&DAT_00578372)[local_b08 * 0x30])) &&
     (uVar4 = FUN_0045c1e0((char)(&DAT_00578372)[local_b08 * 0x30] * 10),
     uVar4 <= (byte)(&DAT_005795b0)[iVar19])) {
    local_b08 = 2;
    (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] | 0x400000;
  }
  if ((DAT_005a9cc4 == 0) && (local_b08 != 1)) {
    uVar4 = FUN_0045c1e0(0x5555);
    cVar2 = (&DAT_00578372)[local_b08 * 0x30];
    iVar5 = FUN_00467150(*(undefined4 *)(&DAT_005795a4 + iVar19));
    *(uint *)(&DAT_00579598 + iVar19) =
         *(int *)(&DAT_00579598 + iVar19) + iVar5 * (uVar4 + 0x1555555) * (int)cVar2;
    *(int *)(&DAT_005795a4 + iVar19) = ((cVar2 + 2) * *(int *)(&DAT_005795a4 + iVar19)) / 2;
  }
  if (((*(byte *)(&DAT_005794c8 + param_1 * 0x40) & 1) != 0) &&
     ('\x06' < (char)(&DAT_005794da)[iVar19])) {
    (&DAT_0057959c)[param_1 * 0x40] = iVar6;
    local_b08 = -1;
  }
  *(int *)(&DAT_005795a4 + iVar19) = *(int *)(&DAT_005795a4 + iVar19) + local_b00;
  switch(local_b08) {
  case 0:
    uVar4 = FUN_0045c1e0((int)((&DAT_0057959c)[param_1 * 0x40] +
                              ((int)(&DAT_0057959c)[param_1 * 0x40] >> 0x1f & 3U)) >> 2);
    iVar5 = (&DAT_0057959c)[param_1 * 0x40];
    uVar16 = (uint)uVar4;
    iVar14 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
    goto LAB_004264fc;
  case 1:
    uVar4 = FUN_0045c1e0((int)((&DAT_0057959c)[param_1 * 0x40] +
                              ((int)(&DAT_0057959c)[param_1 * 0x40] >> 0x1f & 7U)) >> 3);
    (&DAT_0057959c)[param_1 * 0x40] =
         ((int)(&DAT_0057959c)[param_1 * 0x40] / 0xc - (uint)uVar4) +
         (&DAT_0057959c)[param_1 * 0x40];
    if ((&DAT_005794d4)[iVar19] == '\r') {
      *(undefined4 *)(&DAT_005795a0 + iVar19) = 0;
    }
    break;
  case 2:
    if (((&DAT_0053caf0)[iVar14] & 0x800) == 0) {
      uVar4 = FUN_0045c1e0((int)(&DAT_0057959c)[param_1 * 0x40] / 3);
      (&DAT_0057959c)[param_1 * 0x40] =
           ((int)(&DAT_0057959c)[param_1 * 0x40] / 6 - (uint)uVar4) +
           (&DAT_0057959c)[param_1 * 0x40];
      break;
    }
  default:
    uVar4 = FUN_0045c1e0((&DAT_0057959c)[param_1 * 0x40]);
    iVar5 = (&DAT_0057959c)[param_1 * 0x40];
    uVar16 = (uint)uVar4;
    iVar14 = iVar5 / 2;
LAB_004264fc:
    iVar5 = (iVar14 - uVar16) + iVar5;
LAB_00426500:
    (&DAT_0057959c)[param_1 * 0x40] = iVar5;
    break;
  case 4:
  case 5:
  case 8:
  case 0x15:
  case 0x16:
    uVar4 = FUN_0045c1e0((int)(&DAT_0057959c)[param_1 * 0x40] / 2);
    iVar5 = (&DAT_0057959c)[param_1 * 0x40];
    (&DAT_0057959c)[param_1 * 0x40] =
         (((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2) - (uint)uVar4) + iVar5;
    uVar16 = FUN_0045c1e0(*(int *)(&DAT_005795a4 + iVar19) / 2);
    cVar2 = DAT_005a34e0;
    iVar5 = *(int *)(&DAT_005795a4 + iVar19) + (uVar16 & 0xffff);
    *(int *)(&DAT_005795a4 + iVar19) = iVar5;
    if (local_b08 == (cVar2 != '\x01') + 4) {
      *(int *)(&DAT_00579598 + iVar19) = *(int *)(&DAT_00579598 + iVar19) + iVar5 * 4;
    }
    if ((DAT_005a47e0 & 4) == 0) break;
  case 10:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    uVar4 = FUN_0045c1e0((int)(&DAT_0057959c)[param_1 * 0x40] / 2);
    iVar5 = (&DAT_0057959c)[param_1 * 0x40];
    uVar16 = (uint)uVar4;
    iVar14 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
    goto LAB_004264fc;
  case 9:
    uVar16 = FUN_0045c1e0((&DAT_0057959c)[param_1 * 0x40] << 1);
    (&DAT_0057959c)[param_1 * 0x40] = uVar16 & 0xffff;
    *(int *)(&DAT_00579598 + iVar19) =
         *(int *)(&DAT_00579598 + iVar19) + *(int *)(&DAT_005795a4 + iVar19) * 0x10;
    break;
  case 0xb:
  case 0xc:
    uVar4 = FUN_0045c1e0((&DAT_0057959c)[param_1 * 0x40]);
    iVar5 = (int)(&DAT_0057959c)[param_1 * 0x40] / 2 + (uint)uVar4;
    goto LAB_00426500;
  case -1:
    break;
  }
  if (((((&DAT_005794d1)[iVar19] & 2) != 0) && ((char)(&DAT_00578372)[local_b08 * 0x30] < '\x01'))
     || ((*(byte *)(&DAT_005794c8 + param_1 * 0x40) & 1) != 0)) {
    (&DAT_0057959c)[param_1 * 0x40] = (iVar6 + (&DAT_0057959c)[param_1 * 0x40]) / 2;
  }
  iVar5 = DAT_005a9cc4;
  if (DAT_005a9cc4 == 0) {
    iVar14 = (int)(char)(&DAT_00578372)[local_b08 * 0x30] *
             ((&DAT_0057959c)[param_1 * 0x40] - iVar6);
    (&DAT_0057959c)[param_1 * 0x40] =
         ((int)(iVar14 + (iVar14 >> 0x1f & 7U)) >> 3) + (&DAT_0057959c)[param_1 * 0x40];
  }
  if ((int)(&DAT_0057959c)[param_1 * 0x40] < iVar6 / 3) {
    (&DAT_0057959c)[param_1 * 0x40] = iVar6 / 3;
  }
  if (1 < iVar5) {
    (&DAT_0057959c)[param_1 * 0x40] = iVar6;
  }
  if (iVar5 == 1) {
    (&DAT_0057959c)[param_1 * 0x40] = ((&DAT_0057959c)[param_1 * 0x40] + iVar6 * 2) / 3;
  }
  iVar5 = (&DAT_0057959c)[param_1 * 0x40];
  iVar14 = FUN_00467130(local_b04,0xfffffff6,0x10);
  iVar14 = iVar14 * (iVar6 - iVar5);
  (&DAT_0057959c)[param_1 * 0x40] = ((int)(iVar14 + (iVar14 >> 0x1f & 0xfU)) >> 4) + iVar5;
  uVar10 = FUN_00467130(*(undefined4 *)(&DAT_005795a4 + iVar19),0xeaaaaaab,0x15555555);
  *(undefined4 *)(&DAT_005795a4 + iVar19) = uVar10;
  (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] & 0xfffffffe;
  DAT_005786a2 = 8;
  DAT_00578732 = 8;
  return;
}

