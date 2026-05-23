/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042dea0 @ 0x0042DEA0 */
/* Body size: 2303 addresses */


void FUN_0042dea0(void)

{
  char cVar1;
  byte *pbVar2;
  short *psVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  char *pcVar15;
  char *pcVar16;
  short *local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  uint local_4c;
  int local_40 [8];
  int local_20 [8];
  
  DAT_0056d1b0 = 0;
  local_60 = 0;
  pbVar2 = (byte *)((int)&DAT_005849e0 + 2);
  do {
    if ((pbVar2[0x27] != 0xff) && (2 < (*pbVar2 & 7))) {
      DAT_0056d1b0 = DAT_0056d1b0 + 1;
    }
    pbVar2 = pbVar2 + 0x2c;
  } while ((int)pbVar2 < 0x5856f2);
  psVar3 = &DAT_0058bcb8;
  do {
    if (*psVar3 == 5) {
      DAT_0056d1b0 = DAT_0056d1b0 + -1;
    }
    psVar3 = psVar3 + 8;
  } while ((int)psVar3 < 0x58ccb8);
  DAT_0059ae78 = 0;
  local_4c = 0xffffffff;
  DAT_0059aafc = 0;
  DAT_0058d36c = 0;
  DAT_005a636c = 0;
  DAT_0056949c = 0;
  DAT_005a882c = 0;
  local_64 = 1;
  do {
    iVar10 = local_60;
    iVar4 = DAT_0059ae78;
    iVar11 = 0;
    iVar12 = local_64 * 0x208;
    cVar1 = *(char *)(&DAT_00575ab0 + local_64 * 0x82);
    if (cVar1 != '\0') {
      DAT_0058d36c = DAT_0058d36c + *(short *)(&DAT_00575ab4 + local_64 * 0x82);
      DAT_0059aafc = DAT_0059aafc + cVar1;
      piVar14 = local_20;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar14 = (int)cVar1 << 3;
        piVar14 = piVar14 + 1;
      }
      piVar14 = local_40;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar14 = 8;
        piVar14 = piVar14 + 1;
      }
      if (*(int *)(&DAT_00575ad0 + iVar12) != 0) {
        DAT_0059ae78 = DAT_0059ae78 +
                       (*(short *)(&DAT_00575c08 + iVar12) * 100) /
                       (*(int *)(&DAT_00575ad4 + iVar12) / 2 + 4 + *(int *)(&DAT_00575ad0 + iVar12))
        ;
      }
      local_68 = (short *)(&DAT_00575ada + iVar12);
      iVar12 = 0;
      local_5c = 1;
      do {
        iVar6 = 0;
        psVar3 = local_68;
        do {
          iVar9 = (int)*psVar3;
          iVar7 = iVar6 + 4;
          iVar11 = iVar11 + iVar9;
          *(int *)((int)local_40 + iVar6) = *(int *)((int)local_40 + iVar6) + iVar9;
          *(int *)((int)local_20 + iVar6) = *(int *)((int)local_20 + iVar6) + iVar9 * local_5c;
          iVar12 = iVar12 + iVar9 * local_5c;
          psVar3 = psVar3 + 0xb;
          iVar6 = iVar7;
        } while (iVar7 < 0x20);
        local_5c = local_5c + 1;
        local_68 = local_68 + 1;
      } while (local_5c < 10);
      uVar13 = (&DAT_00575cb0)[local_64 * 0x82];
      (&DAT_00575cb0)[local_64 * 0x82] = uVar13 & 0xfffffff3;
      if (9 < iVar11) {
        iVar6 = -DAT_00822c88;
        if (((iVar6 + 6) * iVar11) / 3 + *(char *)(&DAT_00575ab0 + local_64 * 0x82) * iVar11 <
            iVar12) {
          (&DAT_00575cb0)[local_64 * 0x82] = uVar13 & 0xfffffff3 | 4;
        }
        if (iVar12 < *(char *)(&DAT_00575ab0 + local_64 * 0x82) * iVar11 -
                     ((iVar6 + 3) * iVar11) / 6) {
          (&DAT_00575cb0)[local_64 * 0x82] = (&DAT_00575cb0)[local_64 * 0x82] | 8;
        }
      }
      uVar13 = (&DAT_00575cb0)[local_64 * 0x82];
      local_68 = (short *)0x0;
      local_5c = 100;
      (&DAT_00575cb0)[local_64 * 0x82] = uVar13 & 0xfffff8ff;
      if (local_40[7] != 0) {
        if (local_40[6] != 0) {
          iVar11 = (local_20[6] * 100) / local_40[6] - (local_20[7] * 100) / local_40[7];
          DAT_005a882c = DAT_005a882c + iVar11;
          local_60 = local_60 + iVar11;
          local_68 = (short *)(uint)((int)((-(uint)(DAT_00822c88 != 0) & 0x19) + 0x19) <= iVar11);
          if (0x31 < iVar11) {
            (&DAT_00575cb0)[local_64 * 0x82] = uVar13 & 0xfffff8ff | 0x100;
          }
          if (iVar11 < 100) {
            local_58 = 1;
            local_5c = iVar11;
          }
        }
        if (local_40[5] != 0) {
          iVar11 = (local_20[5] * 100) / local_40[5] - (local_20[7] * 100) / local_40[7];
          local_60 = local_60 + iVar11;
          DAT_0056949c = DAT_0056949c + iVar11;
          if ((int)((-(uint)(DAT_00822c88 != 0) & 0x19) + 0x19) <= iVar11) {
            local_68 = (short *)((uint)local_68 | 2);
          }
          if (0x31 < iVar11) {
            (&DAT_00575cb0)[local_64 * 0x82] = (&DAT_00575cb0)[local_64 * 0x82] | 0x200;
          }
          if (iVar11 < local_5c) {
            local_58 = 2;
            local_5c = iVar11;
          }
        }
        if (local_40[3] != 0) {
          iVar11 = (local_20[3] * 100) / local_40[3] - (local_20[7] * 100) / local_40[7];
          DAT_005a636c = DAT_005a636c + iVar11;
          local_60 = local_60 + iVar11;
          if ((int)((-(uint)(DAT_00822c88 != 0) & 0x19) + 0x19) <= iVar11) {
            local_68 = (short *)((uint)local_68 | 4);
          }
          if (0x31 < iVar11) {
            (&DAT_00575cb0)[local_64 * 0x82] = (&DAT_00575cb0)[local_64 * 0x82] | 0x400;
          }
          if (iVar11 < local_5c) {
            local_58 = 4;
            local_5c = iVar11;
          }
        }
      }
      if (local_5c < (int)((-(uint)(DAT_00822c88 != 0) & 0x32) + 0x32)) {
        local_68 = (short *)((uint)local_68 & ~local_58);
      }
      if ((DAT_0056c7b4 & 2) == 0) {
        if (local_68 != (short *)0x0) goto LAB_0042e2d6;
      }
      else {
        DAT_0056c7b4 = DAT_0056c7b4 & 0xfffffffd;
        local_64 = 1;
        local_68 = (short *)0x4;
LAB_0042e2d6:
        uVar13 = 1 << (sbyte)local_68;
        if ((uVar13 & DAT_005685f8) == 0) {
          FUN_00460df0(local_64,local_68);
          iVar11 = FUN_0040cb00(0x80001284,0,0xfffffffc);
          if (iVar11 != 0) {
            DAT_005685f8 = DAT_005685f8 | uVar13;
            FUN_004481b0(0x2a,100,0,0,0);
          }
        }
      }
      iVar11 = local_64 * 0x208;
      (&DAT_00575cb0)[local_64 * 0x82] = (&DAT_00575cb0)[local_64 * 0x82] & 0xffffffef;
      *(undefined4 *)(&DAT_00575cac + iVar11) = 0;
      if (1 < local_64) {
        if (((local_68 == (short *)local_4c) && (7 < *(int *)(&DAT_00575ad0 + iVar11))) &&
           (local_68 != (short *)0x7)) {
          *(undefined4 *)(&DAT_00575cac + iVar11) = 1;
        }
        if (((*(uint *)(&DAT_00575aa8 + iVar11) ^ (&DAT_00575cb0)[local_64 * 0x82]) & 0x60) == 0) {
          *(int *)(&DAT_00575cac + iVar11) = *(int *)(&DAT_00575cac + iVar11) + 1;
        }
        if ((*(short *)(iVar11 + 0x575be2) == 0) && (*(short *)(iVar11 + 0x575be4) == 0)) {
          *(int *)(&DAT_00575cac + iVar11) = *(int *)(&DAT_00575cac + iVar11) + 1;
        }
        if (*(char *)(&DAT_00575ab0 + local_64 * 0x82) == (&DAT_005758a8)[iVar11]) {
          *(int *)(&DAT_00575cac + iVar11) = *(int *)(&DAT_00575cac + iVar11) + 1;
        }
        iVar12 = FUN_004672d0(*(int *)(iVar11 + 0x5758c0) - *(int *)(iVar11 + 0x5758b0),
                              *(int *)(iVar11 + 0x5758c4) - *(int *)(iVar11 + 0x5758b4));
        iVar6 = FUN_004672d0((&DAT_00575ac8)[local_64 * 0x82] - (&DAT_00575ab8)[local_64 * 0x82],
                             (&DAT_00575acc)[local_64 * 0x82] - (&DAT_00575abc)[local_64 * 0x82]);
        uVar13 = iVar6 - iVar12 >> 0x1f;
        if ((int)((iVar6 - iVar12 >> 0x18 ^ uVar13) - uVar13) < 0x28) {
          *(int *)(&DAT_00575cac + iVar11) = *(int *)(&DAT_00575cac + iVar11) + 1;
        }
        if ((*(int *)(&DAT_00575cac + iVar11) != 0) && (DAT_00822c88 < 2)) {
          *(int *)(&DAT_00575cac + iVar11) = *(int *)(&DAT_00575cac + iVar11) + -1;
        }
      }
      local_4c = (uint)local_68;
      iVar10 = local_60 - iVar10;
      iVar4 = ((DAT_0059ae78 - iVar4) * 6) / (int)((DAT_00822c88 != 0) + 2);
      if ((DAT_00822c88 < 2) && (iVar10 < iVar4)) {
        iVar10 = iVar4;
      }
      if (((200 < *(int *)(&DAT_00575ca4 + iVar11)) && (200 < iVar10)) &&
         ((*(byte *)(&DAT_00575cb0 + local_64 * 0x82) & 0xd) == 0)) {
        uVar13 = 0xffffffff;
        pcVar5 = s_Hole___004c591c;
        do {
          pcVar16 = pcVar5;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar13 = ~uVar13;
        pcVar5 = pcVar16 + -uVar13;
        pcVar16 = (char *)&DAT_0051a068;
        for (uVar8 = uVar13 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        pcVar5 = (char *)FUN_004ad425(local_64,&DAT_0058a528,10);
        uVar13 = 0xffffffff;
        do {
          pcVar16 = pcVar5;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar13 = ~uVar13;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar15 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        pcVar5 = pcVar16 + -uVar13;
        pcVar16 = pcVar15 + -1;
        for (uVar8 = uVar13 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar13 = 0xffffffff;
        pcVar5 = s__henceforth_known_as___004c7788;
        do {
          pcVar16 = pcVar5;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar13 = ~uVar13;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar15 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        pcVar5 = pcVar16 + -uVar13;
        pcVar16 = pcVar15 + -1;
        for (uVar8 = uVar13 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        uVar8 = (&DAT_00575cb0)[local_64 * 0x82];
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        (&DAT_00575cb0)[local_64 * 0x82] = uVar8 | 0x80;
        FUN_00407280(local_64);
        uVar13 = 0xffffffff;
        pcVar5 = s_____has_been_rated_as_one_of_the_004c7754;
        do {
          pcVar16 = pcVar5;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar13 = ~uVar13;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar15 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        pcVar5 = pcVar16 + -uVar13;
        pcVar16 = pcVar15 + -1;
        for (uVar8 = uVar13 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar13 = 0xffffffff;
        pcVar5 = s_in_the_country_by_Golf_Enquirer_m_004c7728;
        do {
          pcVar16 = pcVar5;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar13 = ~uVar13;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar15 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        pcVar5 = pcVar16 + -uVar13;
        pcVar16 = pcVar15 + -1;
        for (uVar8 = uVar13 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar13 = 0xffffffff;
        pcVar5 = &DAT_004c7708;
        do {
          pcVar16 = pcVar5;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar13 = ~uVar13;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar15 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        pcVar5 = pcVar16 + -uVar13;
        pcVar16 = pcVar15 + -1;
        for (uVar8 = uVar13 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        iVar4 = FUN_0040cb00(0x80004010,0,0xffffffeb);
        if (iVar4 == 0) {
          (&DAT_00575cb0)[local_64 * 0x82] = (&DAT_00575cb0)[local_64 * 0x82] & 0xffffff7f;
        }
        else {
          (&DAT_00575cb0)[local_64 * 0x82] = (&DAT_00575cb0)[local_64 * 0x82] | 1;
          DAT_004c2850 = DAT_004c2850 + 1;
          FUN_0040c6f0(0x80,local_64);
          FUN_004481b0(0x2e,100,0,0,0);
          FUN_0046e7b0(7,(&DAT_00575ac8)[local_64 * 0x82] * 0x400 + 0x200,
                       (&DAT_00575acc)[local_64 * 0x82] * 0x400 + 0x200);
        }
      }
      if (((400 < *(int *)(&DAT_00575ca4 + iVar11)) && (300 < iVar10)) &&
         ((*(byte *)(&DAT_00575cb0 + local_64 * 0x82) & 0xe) == 0)) {
        DAT_0051a068._0_1_ = 0;
        FUN_00407280(local_64);
        uVar13 = 0xffffffff;
        pcVar5 = s_has_been_rated_as_one_of_the_Top_004c76dc;
        do {
          pcVar16 = pcVar5;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar13 = ~uVar13;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar15 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        pcVar5 = pcVar16 + -uVar13;
        pcVar16 = pcVar15 + -1;
        for (uVar8 = uVar13 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar13 = 0xffffffff;
        pcVar5 = s_in_the_country_by_Great_Golf_Hol_004c76ac;
        do {
          pcVar16 = pcVar5;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar13 = ~uVar13;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar15 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        pcVar5 = pcVar16 + -uVar13;
        pcVar16 = pcVar15 + -1;
        for (uVar8 = uVar13 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar13 = 0xffffffff;
        pcVar5 = &DAT_004c7708;
        do {
          pcVar16 = pcVar5;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar13 = ~uVar13;
        iVar4 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar15 = pcVar5;
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          pcVar15 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar15;
        } while (cVar1 != '\0');
        pcVar5 = pcVar16 + -uVar13;
        pcVar16 = pcVar15 + -1;
        for (uVar8 = uVar13 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        iVar4 = FUN_0040cb00(0x80005288,0,0xffffffeb);
        if (iVar4 != 0) {
          DAT_004c2850 = DAT_004c2850 + 1;
          (&DAT_00575cb0)[local_64 * 0x82] = (&DAT_00575cb0)[local_64 * 0x82] | 2;
          FUN_0040c6f0(0xa0,local_64);
          FUN_004481b0(0x2f,100,0,0,0);
          FUN_0046e7b0(10,(&DAT_00575ac8)[local_64 * 0x82] * 0x400 + 0x200,
                       (&DAT_00575acc)[local_64 * 0x82] * 0x400 + 0x200);
        }
      }
    }
    local_64 = local_64 + 1;
    if (0x12 < local_64) {
      DAT_00541cd8 = local_60;
      return;
    }
  } while( true );
}

