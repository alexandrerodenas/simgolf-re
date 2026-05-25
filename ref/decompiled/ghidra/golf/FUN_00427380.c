/* Ghidra decompiled: golf.exe */
/* Function: FUN_00427380 @ 0x00427380 */


void FUN_00427380(uint param_1)

{
  undefined1 uVar1;
  short sVar2;
  undefined4 uVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  char *pcVar21;
  char *pcVar22;
  int iStack_20;
  int iStack_1c;
  short sStack_18;
  int iStack_14;
  int iStack_10;
  int *piStack_c;
  
  iVar19 = param_1 * 0x100;
  if ((&DAT_005794d0)[iVar19] == '\0') {
    bVar5 = (&DAT_005794d1)[iVar19];
    FUN_004060a0((int)(char)(&DAT_005794d9)[iVar19],~bVar5 & 7);
    iVar6 = FUN_00467130((int)(char)(&DAT_005794da)[iVar19],0,9);
    *(short *)(&DAT_00575ad8 +
              (iVar6 + ((byte)(&DAT_005794d1)[iVar19] & 0xf) * 0xb +
              (char)(&DAT_005794d9)[iVar19] * 0x104) * 2) =
         *(short *)(&DAT_00575ad8 +
                   (iVar6 + ((byte)(&DAT_005794d1)[iVar19] & 0xf) * 0xb +
                   (char)(&DAT_005794d9)[iVar19] * 0x104) * 2) + 1;
    FUN_004060a0((int)(char)(&DAT_005794d9)[iVar19],~bVar5 & 7);
    iVar6 = ((int)(char)(&DAT_005794d9)[iVar19] +
            ((int)(char)(&DAT_00579572)[iVar19] + ((byte)(&DAT_005794d1)[iVar19] & 7) * 4) * 0x2e) *
            4;
    *(int *)(&DAT_0056ae90 + iVar6) =
         *(int *)(&DAT_0056ae90 + iVar6) + (int)(char)(&DAT_005794da)[iVar19];
    *(int *)(&DAT_0056aedc + iVar6) = *(int *)(&DAT_0056aedc + iVar6) + 1;
  }
  (&DAT_005794db)[iVar19 + (char)(&DAT_005794d9)[iVar19]] = (&DAT_005794da)[iVar19];
  DAT_004c2850 = (int)(short)(&DAT_0057955c)[param_1 * 0x80];
  if (DAT_00543cf4 == 2) {
    DAT_004c2850 = DAT_004c2850 * 2;
  }
  if (((&DAT_00575cb0)[(char)(&DAT_005794d9)[iVar19] * 0x82] & 1) != 0) {
    DAT_004c2850 = DAT_004c2850 + 2;
  }
  if (((&DAT_00575cb0)[(char)(&DAT_005794d9)[iVar19] * 0x82] & 2) != 0) {
    DAT_004c2850 = DAT_004c2850 + 2;
  }
  if (DAT_00543cd8 != 0) {
    DAT_004c2850 = DAT_004c2850 + DAT_00543cd8;
  }
  bVar5 = *(byte *)((int)&DAT_005849e0 + (short)(&DAT_0057956e)[param_1 * 0x80] * 0x2c + 2) & 7;
  if (3 < bVar5) {
    DAT_004c2850 = DAT_004c2850 + (-(uint)(bVar5 != 4) & 3) + 2;
    FUN_0040c500(0x19,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],0);
  }
  if ((DAT_0059e7b8 & 0x200000) == 0) {
    if ((DAT_005a6d3c == 0) && ((short)DAT_00584210 == 0)) {
      DAT_004c2e0c = param_1 | 0x100;
      DAT_0051a068._0_1_ = 0;
      FUN_004676e0(param_1,0);
      iVar6 = DAT_004c2850;
      uVar11 = 0xffffffff;
      pcVar7 = s_has_just_paid_you_your_first_gre_004c7444;
      do {
        pcVar9 = pcVar7;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar9 = pcVar7 + 1;
        cVar18 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar18 != '\0');
      uVar11 = ~uVar11;
      iVar12 = -1;
      pcVar7 = (char *)&DAT_0051a068;
      do {
        pcVar22 = pcVar7;
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        pcVar22 = pcVar7 + 1;
        cVar18 = *pcVar7;
        pcVar7 = pcVar22;
      } while (cVar18 != '\0');
      pcVar7 = pcVar9 + -uVar11;
      pcVar9 = pcVar22 + -1;
      for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      pcVar7 = (char *)FUN_004ad425(iVar6 * 100,&DAT_0058a528,10);
      uVar11 = 0xffffffff;
      do {
        pcVar9 = pcVar7;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar9 = pcVar7 + 1;
        cVar18 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar18 != '\0');
      uVar11 = ~uVar11;
      iVar6 = -1;
      pcVar7 = (char *)&DAT_0051a068;
      do {
        pcVar22 = pcVar7;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar22 = pcVar7 + 1;
        cVar18 = *pcVar7;
        pcVar7 = pcVar22;
      } while (cVar18 != '\0');
      pcVar7 = pcVar9 + -uVar11;
      pcVar9 = pcVar22 + -1;
      for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar11 = 0xffffffff;
      pcVar7 = s_simoleans__Golfers_pay_a_fee_at_t_004c7408;
      do {
        pcVar9 = pcVar7;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar9 = pcVar7 + 1;
        cVar18 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar18 != '\0');
      uVar11 = ~uVar11;
      iVar6 = -1;
      pcVar7 = (char *)&DAT_0051a068;
      do {
        pcVar22 = pcVar7;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar22 = pcVar7 + 1;
        cVar18 = *pcVar7;
        pcVar7 = pcVar22;
      } while (cVar18 != '\0');
      pcVar7 = pcVar9 + -uVar11;
      pcVar9 = pcVar22 + -1;
      for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar11 = 0xffffffff;
      pcVar7 = s_happy_golfers_pay_higher_fees__u_004c73cc;
      do {
        pcVar9 = pcVar7;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar9 = pcVar7 + 1;
        cVar18 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar18 != '\0');
      uVar11 = ~uVar11;
      iVar6 = -1;
      pcVar7 = (char *)&DAT_0051a068;
      do {
        pcVar22 = pcVar7;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar22 = pcVar7 + 1;
        cVar18 = *pcVar7;
        pcVar7 = pcVar22;
      } while (cVar18 != '\0');
      pcVar7 = pcVar9 + -uVar11;
      pcVar9 = pcVar22 + -1;
      for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar11 = 0xffffffff;
      pcVar7 = s_Greens_fees_are_your_main_source_004c7374;
      do {
        pcVar9 = pcVar7;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar9 = pcVar7 + 1;
        cVar18 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar18 != '\0');
      uVar11 = ~uVar11;
      iVar6 = -1;
      pcVar7 = (char *)&DAT_0051a068;
      do {
        pcVar22 = pcVar7;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar22 = pcVar7 + 1;
        cVar18 = *pcVar7;
        pcVar7 = pcVar22;
      } while (cVar18 != '\0');
      pcVar7 = pcVar9 + -uVar11;
      pcVar9 = pcVar22 + -1;
      for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      DAT_005a9ccc = 3;
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar11 = 0xffffffff;
      pcVar7 = s_Refer_to_your_financial_report_f_004c7334;
      do {
        pcVar9 = pcVar7;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar9 = pcVar7 + 1;
        cVar18 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar18 != '\0');
      uVar11 = ~uVar11;
      iVar6 = -1;
      pcVar7 = (char *)&DAT_0051a068;
      do {
        pcVar22 = pcVar7;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar22 = pcVar7 + 1;
        cVar18 = *pcVar7;
        pcVar7 = pcVar22;
      } while (cVar18 != '\0');
      pcVar7 = pcVar9 + -uVar11;
      pcVar9 = pcVar22 + -1;
      for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_0040cb00(1,1,param_1);
    }
    iVar6 = DAT_004c2850;
    DAT_00571fd4 = DAT_00571fd4 + DAT_004c2850;
    *(int *)(&DAT_00575ca4 + (char)(&DAT_005794d9)[iVar19] * 0x208) =
         *(int *)(&DAT_00575ca4 + (char)(&DAT_005794d9)[iVar19] * 0x208) + DAT_004c2850;
    uVar3 = (&DAT_005794b8)[param_1 * 0x40];
    *(short *)(&DAT_00584210 + ((int)DAT_005a6d3c % 100) * 5) =
         *(short *)(&DAT_00584210 + ((int)DAT_005a6d3c % 100) * 5) + (short)iVar6;
    FUN_0040c890(iVar6,uVar3,(&DAT_005794bc)[param_1 * 0x40],0xffffffff);
  }
  if ((&DAT_0057953c)[iVar19] == '\0') {
    FUN_00467a00(param_1,0x13,(int)(short)(&DAT_0057955c)[param_1 * 0x80]);
  }
  (&DAT_005849f6)
  [(short)(&DAT_0057956e)[param_1 * 0x80] * 0x2c + (int)(char)(&DAT_005794d9)[iVar19]] =
       (&DAT_005794da)[iVar19];
  pbVar8 = &DAT_00585862;
  do {
    if ((*pbVar8 != 0) && ((int)(char)pbVar8[1] == param_1)) {
      *pbVar8 = *pbVar8 | 2;
    }
    iVar6 = DAT_00834170;
    pbVar8 = pbVar8 + 0x4c;
  } while ((int)pbVar8 < 0x586b62);
  (&DAT_0057958c)[param_1 * 0x40] = 0;
  (&DAT_005794da)[iVar19] = 0;
  if (*(int *)(&DAT_00579578 + iVar19) < iVar6) {
    *(int *)(&DAT_00575c9c + (char)(&DAT_005794d9)[iVar19] * 0x208) =
         *(int *)(&DAT_00575c9c + (char)(&DAT_005794d9)[iVar19] * 0x208) +
         (iVar6 - *(int *)(&DAT_00579578 + iVar19)) / 2;
  }
  uVar11 = DAT_0059e7b8;
  *(int *)(&DAT_00579578 + iVar19) = iVar6;
  (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] & 0xfbdfbbff;
  (&DAT_005794d4)[iVar19] = 0;
  if ((uVar11 & 0x200000) == 0) {
    if (((&DAT_005794d1)[iVar19] & 0xf0) != 0) {
      iVar6 = (short)(&DAT_0057955a)[param_1 * 0x80] * 0x100;
      if (((&DAT_005794d1)[iVar6] & 0xf0) != 0) {
        if (((char)(&DAT_005794d9)[iVar19] < (char)(&DAT_005794d9)[iVar6]) ||
           ((&DAT_005794d9)[iVar6] == '\0')) {
          iVar12 = (int)(char)(&DAT_005794d9)[iVar19];
          iVar6 = 1;
          iVar20 = 0;
          iStack_20 = 0;
          iStack_1c = 0;
          iStack_14 = 0;
          if (0 < iVar12) {
            pcVar7 = &DAT_00575cb8;
            do {
              iVar20 = iVar20 + (char)(&DAT_005794db)[iVar19 + iVar6];
              iStack_1c = iStack_1c +
                          (char)(&DAT_005794db)
                                [iVar6 + (short)(&DAT_0057955a)[param_1 * 0x80] * 0x100];
              iStack_14 = iStack_14 + *pcVar7;
              iVar6 = iVar6 + 1;
              pcVar7 = pcVar7 + 0x208;
              iStack_20 = iVar20;
            } while (iVar6 <= iVar12);
          }
          uVar11 = param_1 & 0xfffe;
          uVar13 = param_1 | 1;
          DAT_0051a068._0_1_ = 0;
          pcVar7 = &DAT_005794db + iVar12 + uVar11 * 0x100;
          iVar6 = uVar13 * 0x100;
          if ((char)(&DAT_005794db)[iVar12 + iVar6] < (char)(&DAT_005794db)[iVar12 + uVar11 * 0x100]
             ) {
            iVar20 = (DAT_0059b730 * 2000) / 100;
            FUN_004676e0(uVar13,0);
            uVar14 = 0xffffffff;
            pcVar9 = s_wins_hole___004c7324;
            do {
              pcVar22 = pcVar9;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar22 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar22;
            } while (cVar18 != '\0');
            uVar14 = ~uVar14;
            iVar15 = -1;
            pcVar9 = (char *)&DAT_0051a068;
            do {
              pcVar21 = pcVar9;
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              pcVar21 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar21;
            } while (cVar18 != '\0');
            pcVar9 = pcVar22 + -uVar14;
            pcVar22 = pcVar21 + -1;
            for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar22 = pcVar22 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar22 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar22 = pcVar22 + 1;
            }
            pcVar9 = (char *)FUN_004ad425(iVar12,&DAT_0058a528,10);
            uVar14 = 0xffffffff;
            do {
              pcVar22 = pcVar9;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar22 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar22;
            } while (cVar18 != '\0');
            uVar14 = ~uVar14;
            iVar15 = -1;
            pcVar9 = (char *)&DAT_0051a068;
            do {
              pcVar21 = pcVar9;
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              pcVar21 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar21;
            } while (cVar18 != '\0');
            pcVar9 = pcVar22 + -uVar14;
            pcVar22 = pcVar21 + -1;
            for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar22 = pcVar22 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar22 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar22 = pcVar22 + 1;
            }
            uVar14 = 0xffffffff;
            pcVar9 = s_by_a_score_of_004c7314;
            do {
              pcVar22 = pcVar9;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar22 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar22;
            } while (cVar18 != '\0');
            uVar14 = ~uVar14;
            iVar15 = -1;
            pcVar9 = (char *)&DAT_0051a068;
            do {
              pcVar21 = pcVar9;
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              pcVar21 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar21;
            } while (cVar18 != '\0');
            pcVar9 = pcVar22 + -uVar14;
            pcVar22 = pcVar21 + -1;
            for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar22 = pcVar22 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar22 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar22 = pcVar22 + 1;
            }
            pcVar9 = (char *)FUN_004ad425((int)(char)(&DAT_005794db)[iVar12 + iVar6],&DAT_0058a528,
                                          10);
            uVar14 = 0xffffffff;
            do {
              pcVar22 = pcVar9;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar22 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar22;
            } while (cVar18 != '\0');
            uVar14 = ~uVar14;
            iVar15 = -1;
            pcVar9 = (char *)&DAT_0051a068;
            do {
              pcVar21 = pcVar9;
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              pcVar21 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar21;
            } while (cVar18 != '\0');
            pcVar9 = pcVar22 + -uVar14;
            pcVar22 = pcVar21 + -1;
            for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar22 = pcVar22 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar22 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar22 = pcVar22 + 1;
            }
            uVar14 = 0xffffffff;
            pcVar9 = &DAT_004c730c;
            do {
              pcVar22 = pcVar9;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar22 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar22;
            } while (cVar18 != '\0');
            uVar14 = ~uVar14;
            iVar15 = -1;
            pcVar9 = (char *)&DAT_0051a068;
            do {
              pcVar21 = pcVar9;
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              pcVar21 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar21;
            } while (cVar18 != '\0');
            pcVar9 = pcVar22 + -uVar14;
            pcVar22 = pcVar21 + -1;
            for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar22 = pcVar22 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar22 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar22 = pcVar22 + 1;
            }
            pcVar9 = (char *)FUN_004ad425((int)*pcVar7,&DAT_0058a528,10);
            uVar14 = 0xffffffff;
            do {
              pcVar22 = pcVar9;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar22 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar22;
            } while (cVar18 != '\0');
            uVar14 = ~uVar14;
            iVar15 = -1;
            pcVar9 = (char *)&DAT_0051a068;
            do {
              pcVar21 = pcVar9;
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              pcVar21 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar21;
            } while (cVar18 != '\0');
            pcVar9 = pcVar22 + -uVar14;
            pcVar22 = pcVar21 + -1;
            for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar22 = pcVar22 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar22 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar22 = pcVar22 + 1;
            }
            uVar14 = 0xffffffff;
            pcVar9 = &DAT_004c7300;
            do {
              pcVar22 = pcVar9;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar22 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar22;
            } while (cVar18 != '\0');
            uVar14 = ~uVar14;
            iVar15 = -1;
            pcVar9 = (char *)&DAT_0051a068;
            do {
              pcVar21 = pcVar9;
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              pcVar21 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar21;
            } while (cVar18 != '\0');
            pcVar9 = pcVar22 + -uVar14;
            pcVar22 = pcVar21 + -1;
            for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar22 = pcVar22 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar22 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar22 = pcVar22 + 1;
            }
            FUN_0042dc00(iVar20 * 100);
            uVar14 = 0xffffffff;
            pcVar9 = &DAT_004c4944;
            do {
              pcVar22 = pcVar9;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar22 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar22;
            } while (cVar18 != '\0');
            uVar14 = ~uVar14;
            iVar15 = -1;
            pcVar9 = (char *)&DAT_0051a068;
            do {
              pcVar21 = pcVar9;
              if (iVar15 == 0) break;
              iVar15 = iVar15 + -1;
              pcVar21 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar21;
            } while (cVar18 != '\0');
            pcVar9 = pcVar22 + -uVar14;
            pcVar22 = pcVar21 + -1;
            for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar22 = pcVar22 + 4;
            }
            iVar15 = (int)DAT_005a6d3c;
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar22 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar22 = pcVar22 + 1;
            }
            uVar3 = (&DAT_005794bc)[uVar13 * 0x40];
            *(short *)(&DAT_0058421e + (iVar15 % 100) * 0x14) =
                 *(short *)(&DAT_0058421e + (iVar15 % 100) * 0x14) + (short)iVar20;
            FUN_0040c890(iVar20,(&DAT_005794b8)[uVar13 * 0x40],uVar3,0xffffffff);
            DAT_00571fd4 = DAT_00571fd4 + iVar20;
            FUN_0040cb00(0x80002108,0,DAT_005a59f8);
            FUN_004481b0(0x23,100,0,0,0);
          }
          if (*pcVar7 < (char)(&DAT_005794db)[iVar12 + iVar6]) {
            uVar14 = (DAT_0059b730 * -2000) / 100;
            FUN_004676e0(uVar11,0);
            uVar16 = 0xffffffff;
            pcVar9 = s_wins_hole___004c7324;
            do {
              pcVar22 = pcVar9;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar22 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar22;
            } while (cVar18 != '\0');
            uVar16 = ~uVar16;
            iVar20 = -1;
            pcVar9 = (char *)&DAT_0051a068;
            do {
              pcVar21 = pcVar9;
              if (iVar20 == 0) break;
              iVar20 = iVar20 + -1;
              pcVar21 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar21;
            } while (cVar18 != '\0');
            pcVar9 = pcVar22 + -uVar16;
            pcVar22 = pcVar21 + -1;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar22 = pcVar22 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar22 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar22 = pcVar22 + 1;
            }
            pcVar9 = (char *)FUN_004ad425(iVar12,&DAT_0058a528,10);
            uVar16 = 0xffffffff;
            do {
              pcVar22 = pcVar9;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar22 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar22;
            } while (cVar18 != '\0');
            uVar16 = ~uVar16;
            iVar20 = -1;
            pcVar9 = (char *)&DAT_0051a068;
            do {
              pcVar21 = pcVar9;
              if (iVar20 == 0) break;
              iVar20 = iVar20 + -1;
              pcVar21 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar21;
            } while (cVar18 != '\0');
            pcVar9 = pcVar22 + -uVar16;
            pcVar22 = pcVar21 + -1;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar22 = pcVar22 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar22 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar22 = pcVar22 + 1;
            }
            uVar16 = 0xffffffff;
            pcVar9 = s_by_a_score_of_004c7314;
            do {
              pcVar22 = pcVar9;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar22 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar22;
            } while (cVar18 != '\0');
            uVar16 = ~uVar16;
            iVar20 = -1;
            pcVar9 = (char *)&DAT_0051a068;
            do {
              pcVar21 = pcVar9;
              if (iVar20 == 0) break;
              iVar20 = iVar20 + -1;
              pcVar21 = pcVar9 + 1;
              cVar18 = *pcVar9;
              pcVar9 = pcVar21;
            } while (cVar18 != '\0');
            pcVar9 = pcVar22 + -uVar16;
            pcVar22 = pcVar21 + -1;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar22 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar22 = pcVar22 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar22 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar22 = pcVar22 + 1;
            }
            pcVar7 = (char *)FUN_004ad425((int)*pcVar7,&DAT_0058a528,10);
            uVar16 = 0xffffffff;
            do {
              pcVar9 = pcVar7;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar9 = pcVar7 + 1;
              cVar18 = *pcVar7;
              pcVar7 = pcVar9;
            } while (cVar18 != '\0');
            uVar16 = ~uVar16;
            iVar20 = -1;
            pcVar7 = (char *)&DAT_0051a068;
            do {
              pcVar22 = pcVar7;
              if (iVar20 == 0) break;
              iVar20 = iVar20 + -1;
              pcVar22 = pcVar7 + 1;
              cVar18 = *pcVar7;
              pcVar7 = pcVar22;
            } while (cVar18 != '\0');
            pcVar7 = pcVar9 + -uVar16;
            pcVar9 = pcVar22 + -1;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
              pcVar7 = pcVar7 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar9 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar9 = pcVar9 + 1;
            }
            uVar16 = 0xffffffff;
            pcVar7 = &DAT_004c730c;
            do {
              pcVar9 = pcVar7;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar9 = pcVar7 + 1;
              cVar18 = *pcVar7;
              pcVar7 = pcVar9;
            } while (cVar18 != '\0');
            uVar16 = ~uVar16;
            iVar20 = -1;
            pcVar7 = (char *)&DAT_0051a068;
            do {
              pcVar22 = pcVar7;
              if (iVar20 == 0) break;
              iVar20 = iVar20 + -1;
              pcVar22 = pcVar7 + 1;
              cVar18 = *pcVar7;
              pcVar7 = pcVar22;
            } while (cVar18 != '\0');
            pcVar7 = pcVar9 + -uVar16;
            pcVar9 = pcVar22 + -1;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
              pcVar7 = pcVar7 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar9 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar9 = pcVar9 + 1;
            }
            pcVar7 = (char *)FUN_004ad425((int)(char)(&DAT_005794db)[iVar12 + iVar6],&DAT_0058a528,
                                          10);
            uVar16 = 0xffffffff;
            do {
              pcVar9 = pcVar7;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar9 = pcVar7 + 1;
              cVar18 = *pcVar7;
              pcVar7 = pcVar9;
            } while (cVar18 != '\0');
            uVar16 = ~uVar16;
            iVar12 = -1;
            pcVar7 = (char *)&DAT_0051a068;
            do {
              pcVar22 = pcVar7;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar22 = pcVar7 + 1;
              cVar18 = *pcVar7;
              pcVar7 = pcVar22;
            } while (cVar18 != '\0');
            pcVar7 = pcVar9 + -uVar16;
            pcVar9 = pcVar22 + -1;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
              pcVar7 = pcVar7 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar9 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar9 = pcVar9 + 1;
            }
            uVar16 = 0xffffffff;
            pcVar7 = &DAT_004c72f8;
            do {
              pcVar9 = pcVar7;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar9 = pcVar7 + 1;
              cVar18 = *pcVar7;
              pcVar7 = pcVar9;
            } while (cVar18 != '\0');
            uVar16 = ~uVar16;
            iVar12 = -1;
            pcVar7 = (char *)&DAT_0051a068;
            do {
              pcVar22 = pcVar7;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar22 = pcVar7 + 1;
              cVar18 = *pcVar7;
              pcVar7 = pcVar22;
            } while (cVar18 != '\0');
            pcVar7 = pcVar9 + -uVar16;
            pcVar9 = pcVar22 + -1;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
              pcVar7 = pcVar7 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar9 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar9 = pcVar9 + 1;
            }
            FUN_0042dc00(((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)) * 100);
            uVar16 = 0xffffffff;
            pcVar7 = &DAT_004c4944;
            do {
              pcVar9 = pcVar7;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar9 = pcVar7 + 1;
              cVar18 = *pcVar7;
              pcVar7 = pcVar9;
            } while (cVar18 != '\0');
            uVar16 = ~uVar16;
            iVar12 = -1;
            pcVar7 = (char *)&DAT_0051a068;
            do {
              pcVar22 = pcVar7;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar22 = pcVar7 + 1;
              cVar18 = *pcVar7;
              pcVar7 = pcVar22;
            } while (cVar18 != '\0');
            pcVar7 = pcVar9 + -uVar16;
            pcVar9 = pcVar22 + -1;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
              pcVar7 = pcVar7 + 4;
              pcVar9 = pcVar9 + 4;
            }
            iVar12 = (int)DAT_005a6d3c;
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar9 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar9 = pcVar9 + 1;
            }
            uVar3 = (&DAT_005794bc)[uVar13 * 0x40];
            *(short *)(&DAT_0058421e + (iVar12 % 100) * 0x14) =
                 *(short *)(&DAT_0058421e + (iVar12 % 100) * 0x14) + (short)uVar14;
            FUN_0040c890(uVar14,(&DAT_005794b8)[uVar13 * 0x40],uVar3,0xffffffff);
            DAT_00571fd4 = DAT_00571fd4 + uVar14;
            FUN_0040cb00(0x80002108,0,DAT_005a59f8);
            FUN_004481b0(0x24,100,0,0,0);
          }
          iVar12 = DAT_0059b730;
          if ((&DAT_00575cb8)[(char)(&DAT_005794d9)[iVar19] * 0x208] == '\0') {
            uVar14 = 0xffffffff;
            pcVar7 = s_At_the_end_of_the_match__004c72dc;
            do {
              pcVar9 = pcVar7;
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              pcVar9 = pcVar7 + 1;
              cVar18 = *pcVar7;
              pcVar7 = pcVar9;
            } while (cVar18 != '\0');
            uVar14 = ~uVar14;
            iVar20 = -1;
            pcVar7 = (char *)&DAT_0051a068;
            do {
              pcVar22 = pcVar7;
              if (iVar20 == 0) break;
              iVar20 = iVar20 + -1;
              pcVar22 = pcVar7 + 1;
              cVar18 = *pcVar7;
              pcVar7 = pcVar22;
            } while (cVar18 != '\0');
            pcVar7 = pcVar9 + -uVar14;
            pcVar9 = pcVar22 + -1;
            for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
              pcVar7 = pcVar7 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pcVar9 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar9 = pcVar9 + 1;
            }
            iVar12 = (iVar12 * 2000) / 100;
            if (((&DAT_005794d1)[iVar6] & 0xf0) != 0) {
              sStack_18 = (short)iVar12;
              if (((param_1 == uVar11) && (iStack_20 < iStack_1c)) ||
                 ((param_1 == uVar13 && (iStack_1c < iStack_20)))) {
                DAT_00571fd4 = DAT_00571fd4 - iVar12;
                FUN_0040c890(-iVar12,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40]
                             ,0xffffffff);
                uVar14 = 0xffffffff;
                pcVar7 = &DAT_004c72d0;
                do {
                  pcVar9 = pcVar7;
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  pcVar9 = pcVar7 + 1;
                  cVar18 = *pcVar7;
                  pcVar7 = pcVar9;
                } while (cVar18 != '\0');
                uVar14 = ~uVar14;
                iVar20 = -1;
                pcVar7 = (char *)&DAT_0051a068;
                do {
                  pcVar22 = pcVar7;
                  if (iVar20 == 0) break;
                  iVar20 = iVar20 + -1;
                  pcVar22 = pcVar7 + 1;
                  cVar18 = *pcVar7;
                  pcVar7 = pcVar22;
                } while (cVar18 != '\0');
                pcVar7 = pcVar9 + -uVar14;
                pcVar9 = pcVar22 + -1;
                for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
                  pcVar7 = pcVar7 + 4;
                  pcVar9 = pcVar9 + 4;
                }
                for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *pcVar9 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  pcVar9 = pcVar9 + 1;
                }
                FUN_0042dc00(iVar12 * 100);
                uVar14 = 0xffffffff;
                pcVar7 = &DAT_004c72c8;
                do {
                  pcVar9 = pcVar7;
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  pcVar9 = pcVar7 + 1;
                  cVar18 = *pcVar7;
                  pcVar7 = pcVar9;
                } while (cVar18 != '\0');
                uVar14 = ~uVar14;
                iVar20 = -1;
                pcVar7 = (char *)&DAT_0051a068;
                do {
                  pcVar22 = pcVar7;
                  if (iVar20 == 0) break;
                  iVar20 = iVar20 + -1;
                  pcVar22 = pcVar7 + 1;
                  cVar18 = *pcVar7;
                  pcVar7 = pcVar22;
                } while (cVar18 != '\0');
                pcVar7 = pcVar9 + -uVar14;
                pcVar9 = pcVar22 + -1;
                for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
                  pcVar7 = pcVar7 + 4;
                  pcVar9 = pcVar9 + 4;
                }
                iVar20 = (int)DAT_005a6d3c;
                for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *pcVar9 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  pcVar9 = pcVar9 + 1;
                }
                *(short *)(&DAT_0058421e + (iVar20 % 100) * 0x14) =
                     *(short *)(&DAT_0058421e + (iVar20 % 100) * 0x14) - sStack_18;
                FUN_004481b0(0x24,100,0,0,0);
                DAT_0059b730 = DAT_0059b730 + -1;
              }
              if (iStack_20 == iStack_1c) {
                uVar14 = 0xffffffff;
                DAT_0059b730 = DAT_0059b730 + -1;
                pcVar7 = s_the_score_is_tied__004c72b4;
                do {
                  pcVar9 = pcVar7;
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  pcVar9 = pcVar7 + 1;
                  cVar18 = *pcVar7;
                  pcVar7 = pcVar9;
                } while (cVar18 != '\0');
                uVar14 = ~uVar14;
                iVar20 = -1;
                pcVar7 = (char *)&DAT_0051a068;
                do {
                  pcVar22 = pcVar7;
                  if (iVar20 == 0) break;
                  iVar20 = iVar20 + -1;
                  pcVar22 = pcVar7 + 1;
                  cVar18 = *pcVar7;
                  pcVar7 = pcVar22;
                } while (cVar18 != '\0');
                pcVar7 = pcVar9 + -uVar14;
                pcVar9 = pcVar22 + -1;
                for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
                  pcVar7 = pcVar7 + 4;
                  pcVar9 = pcVar9 + 4;
                }
                for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *pcVar9 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  pcVar9 = pcVar9 + 1;
                }
              }
              if (((param_1 == uVar11) && (iStack_1c < iStack_20)) ||
                 ((param_1 == uVar13 && (iStack_20 < iStack_1c)))) {
                DAT_00571fd4 = DAT_00571fd4 + iVar12;
                FUN_0040c890(iVar12,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40],
                             0xffffffff);
                uVar14 = 0xffffffff;
                *(short *)(&DAT_0058421e + ((int)DAT_005a6d3c % 100) * 0x14) =
                     *(short *)(&DAT_0058421e + ((int)DAT_005a6d3c % 100) * 0x14) + sStack_18;
                pcVar7 = (char *)&DAT_004c72a8;
                do {
                  pcVar9 = pcVar7;
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  pcVar9 = pcVar7 + 1;
                  cVar18 = *pcVar7;
                  pcVar7 = pcVar9;
                } while (cVar18 != '\0');
                uVar14 = ~uVar14;
                iVar20 = -1;
                pcVar7 = (char *)&DAT_0051a068;
                do {
                  pcVar22 = pcVar7;
                  if (iVar20 == 0) break;
                  iVar20 = iVar20 + -1;
                  pcVar22 = pcVar7 + 1;
                  cVar18 = *pcVar7;
                  pcVar7 = pcVar22;
                } while (cVar18 != '\0');
                pcVar7 = pcVar9 + -uVar14;
                pcVar9 = pcVar22 + -1;
                for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
                  pcVar7 = pcVar7 + 4;
                  pcVar9 = pcVar9 + 4;
                }
                for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *pcVar9 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  pcVar9 = pcVar9 + 1;
                }
                FUN_0042dc00(iVar12 * 100);
                uVar14 = 0xffffffff;
                pcVar7 = &DAT_004c72c8;
                do {
                  pcVar9 = pcVar7;
                  if (uVar14 == 0) break;
                  uVar14 = uVar14 - 1;
                  pcVar9 = pcVar7 + 1;
                  cVar18 = *pcVar7;
                  pcVar7 = pcVar9;
                } while (cVar18 != '\0');
                uVar14 = ~uVar14;
                iVar12 = -1;
                pcVar7 = (char *)&DAT_0051a068;
                do {
                  pcVar22 = pcVar7;
                  if (iVar12 == 0) break;
                  iVar12 = iVar12 + -1;
                  pcVar22 = pcVar7 + 1;
                  cVar18 = *pcVar7;
                  pcVar7 = pcVar22;
                } while (cVar18 != '\0');
                pcVar7 = pcVar9 + -uVar14;
                pcVar9 = pcVar22 + -1;
                for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
                  pcVar7 = pcVar7 + 4;
                  pcVar9 = pcVar9 + 4;
                }
                for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                  *pcVar9 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  pcVar9 = pcVar9 + 1;
                }
                FUN_004481b0(0x23,100,0,0,0);
                DAT_005787cc = DAT_005787cc + 1;
                FUN_0046e7b0(5,(&DAT_005794b8)[param_1 * 0x40],(&DAT_005794bc)[param_1 * 0x40]);
                if (param_1 == uVar11) {
                  uVar1 = (&DAT_00579573)[iVar19];
                }
                else {
                  uVar1 = (&DAT_00579573)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100];
                }
                FUN_0040c6f0(0x60,uVar1);
              }
            }
            DAT_005a59f8 = 0xffffffff;
            FUN_004676e0((int)(short)(&DAT_0057955a)[param_1 * 0x80],0);
            if (iStack_20 == iStack_1c) {
              uVar11 = 0xffffffff;
              pcVar7 = &DAT_004c6af4;
              do {
                pcVar9 = pcVar7;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                pcVar9 = pcVar7 + 1;
                cVar18 = *pcVar7;
                pcVar7 = pcVar9;
              } while (cVar18 != '\0');
              uVar11 = ~uVar11;
              iVar6 = -1;
              pcVar7 = (char *)&DAT_0051a068;
              do {
                pcVar22 = pcVar7;
                if (iVar6 == 0) break;
                iVar6 = iVar6 + -1;
                pcVar22 = pcVar7 + 1;
                cVar18 = *pcVar7;
                pcVar7 = pcVar22;
              } while (cVar18 != '\0');
              pcVar7 = pcVar9 + -uVar11;
              pcVar9 = pcVar22 + -1;
              for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar9 = pcVar9 + 4;
              }
              for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *pcVar9 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar9 = pcVar9 + 1;
              }
              FUN_004676e0(param_1,0);
              uVar11 = 0xffffffff;
              pcVar7 = s_are_tied_at_004c7298;
              do {
                pcVar9 = pcVar7;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                pcVar9 = pcVar7 + 1;
                cVar18 = *pcVar7;
                pcVar7 = pcVar9;
              } while (cVar18 != '\0');
              uVar11 = ~uVar11;
              iVar6 = -1;
              pcVar7 = (char *)&DAT_0051a068;
              do {
                pcVar22 = pcVar7;
                if (iVar6 == 0) break;
                iVar6 = iVar6 + -1;
                pcVar22 = pcVar7 + 1;
                cVar18 = *pcVar7;
                pcVar7 = pcVar22;
              } while (cVar18 != '\0');
              pcVar7 = pcVar9 + -uVar11;
              pcVar9 = pcVar22 + -1;
              for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar9 = pcVar9 + 4;
              }
              for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *pcVar9 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar9 = pcVar9 + 1;
              }
              if (iStack_20 == iStack_14) {
                pcVar7 = s_even_par__004c728c;
              }
              else {
                uVar11 = iStack_20 - iStack_14 >> 0x1f;
                pcVar7 = (char *)FUN_004ad425((iStack_20 - iStack_14 ^ uVar11) - uVar11,
                                              &DAT_0058a528,10);
                uVar11 = 0xffffffff;
                do {
                  pcVar9 = pcVar7;
                  if (uVar11 == 0) break;
                  uVar11 = uVar11 - 1;
                  pcVar9 = pcVar7 + 1;
                  cVar18 = *pcVar7;
                  pcVar7 = pcVar9;
                } while (cVar18 != '\0');
                uVar11 = ~uVar11;
                iVar6 = -1;
                pcVar7 = (char *)&DAT_0051a068;
                do {
                  pcVar22 = pcVar7;
                  if (iVar6 == 0) break;
                  iVar6 = iVar6 + -1;
                  pcVar22 = pcVar7 + 1;
                  cVar18 = *pcVar7;
                  pcVar7 = pcVar22;
                } while (cVar18 != '\0');
                pcVar7 = pcVar9 + -uVar11;
                pcVar9 = pcVar22 + -1;
                for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                  *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
                  pcVar7 = pcVar7 + 4;
                  pcVar9 = pcVar9 + 4;
                }
                for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *pcVar9 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  pcVar9 = pcVar9 + 1;
                }
                if (iStack_20 < iStack_14) {
                  pcVar7 = s_under_par__004c7280;
                }
                else {
                  pcVar7 = s_over_par__004c7274;
                }
              }
            }
            else {
              if (iStack_1c < iStack_20) {
                if ((((&DAT_005794d1)[iVar6] & 0xf0) != 0) &&
                   (((&DAT_005794d1)[(uVar13 ^ 1) * 0x100] & 0xf0) != 0)) {
                  FUN_004481b0((param_1 == uVar13) + '/',100,0,0,0);
                }
                pcVar7 = s_leads_004c726c;
              }
              else {
                if ((((&DAT_005794d1)[iVar6] & 0xf0) != 0) &&
                   (((&DAT_005794d1)[(uVar13 ^ 1) * 0x100] & 0xf0) != 0)) {
                  FUN_004481b0((param_1 != uVar13) + '/',100,0,0,0);
                }
                pcVar7 = s_trails_004c7260;
              }
              uVar11 = 0xffffffff;
              do {
                pcVar9 = pcVar7;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                pcVar9 = pcVar7 + 1;
                cVar18 = *pcVar7;
                pcVar7 = pcVar9;
              } while (cVar18 != '\0');
              uVar11 = ~uVar11;
              iVar6 = -1;
              pcVar7 = (char *)&DAT_0051a068;
              do {
                pcVar22 = pcVar7;
                if (iVar6 == 0) break;
                iVar6 = iVar6 + -1;
                pcVar22 = pcVar7 + 1;
                cVar18 = *pcVar7;
                pcVar7 = pcVar22;
              } while (cVar18 != '\0');
              pcVar7 = pcVar9 + -uVar11;
              pcVar9 = pcVar22 + -1;
              for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar9 = pcVar9 + 4;
              }
              for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *pcVar9 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar9 = pcVar9 + 1;
              }
              FUN_004676e0(param_1,0);
              uVar11 = 0xffffffff;
              pcVar7 = &DAT_004c52cc;
              do {
                pcVar9 = pcVar7;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                pcVar9 = pcVar7 + 1;
                cVar18 = *pcVar7;
                pcVar7 = pcVar9;
              } while (cVar18 != '\0');
              uVar11 = ~uVar11;
              iVar6 = -1;
              pcVar7 = (char *)&DAT_0051a068;
              do {
                pcVar22 = pcVar7;
                if (iVar6 == 0) break;
                iVar6 = iVar6 + -1;
                pcVar22 = pcVar7 + 1;
                cVar18 = *pcVar7;
                pcVar7 = pcVar22;
              } while (cVar18 != '\0');
              pcVar7 = pcVar9 + -uVar11;
              pcVar9 = pcVar22 + -1;
              for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar9 = pcVar9 + 4;
              }
              uVar13 = iStack_20 - iStack_1c >> 0x1f;
              iVar6 = (iStack_20 - iStack_1c ^ uVar13) - uVar13;
              for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *pcVar9 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar9 = pcVar9 + 1;
              }
              pcVar7 = (char *)FUN_004ad425(iVar6,&DAT_0058a528,10);
              uVar11 = 0xffffffff;
              do {
                pcVar9 = pcVar7;
                if (uVar11 == 0) break;
                uVar11 = uVar11 - 1;
                pcVar9 = pcVar7 + 1;
                cVar18 = *pcVar7;
                pcVar7 = pcVar9;
              } while (cVar18 != '\0');
              uVar11 = ~uVar11;
              iVar12 = -1;
              pcVar7 = (char *)&DAT_0051a068;
              do {
                pcVar22 = pcVar7;
                if (iVar12 == 0) break;
                iVar12 = iVar12 + -1;
                pcVar22 = pcVar7 + 1;
                cVar18 = *pcVar7;
                pcVar7 = pcVar22;
              } while (cVar18 != '\0');
              pcVar7 = pcVar9 + -uVar11;
              pcVar9 = pcVar22 + -1;
              for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
                pcVar7 = pcVar7 + 4;
                pcVar9 = pcVar9 + 4;
              }
              for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *pcVar9 = *pcVar7;
                pcVar7 = pcVar7 + 1;
                pcVar9 = pcVar9 + 1;
              }
              pcVar7 = s_shots__004c7258;
              if (iVar6 < 2) {
                pcVar7 = &DAT_004c7250;
              }
            }
            uVar11 = 0xffffffff;
            do {
              pcVar9 = pcVar7;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar9 = pcVar7 + 1;
              cVar18 = *pcVar7;
              pcVar7 = pcVar9;
            } while (cVar18 != '\0');
            uVar11 = ~uVar11;
            iVar6 = -1;
            pcVar7 = (char *)&DAT_0051a068;
            do {
              pcVar22 = pcVar7;
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              pcVar22 = pcVar7 + 1;
              cVar18 = *pcVar7;
              pcVar7 = pcVar22;
            } while (cVar18 != '\0');
            pcVar7 = pcVar9 + -uVar11;
            pcVar9 = pcVar22 + -1;
            for (uVar13 = uVar11 >> 2; uVar3 = DAT_005a59f8, uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
              pcVar7 = pcVar7 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
              *pcVar9 = *pcVar7;
              pcVar7 = pcVar7 + 1;
              pcVar9 = pcVar9 + 1;
            }
            FUN_0040cb00(0x80002108,1,uVar3);
          }
        }
      }
    }
    if (((DAT_0059e7b8 & 0x200000) == 0) &&
       ((cVar18 = (&DAT_005794d9)[iVar19], cVar18 == '\x12' ||
        ((&DAT_00575cb8)[cVar18 * 0x208] == '\0')))) {
      iVar12 = 0;
      iVar6 = 1;
      iStack_10 = 0;
      iStack_20 = 0;
      iStack_1c = 0;
      iStack_14 = 0;
      bVar4 = true;
      pcVar7 = &DAT_00575cb8;
      do {
        if (cVar18 < iVar6) {
          iStack_10 = iStack_10 + 5;
          iStack_20 = iStack_20 + 1;
        }
        else {
          iVar20 = (int)(char)(&DAT_005794db)[iVar19 + iVar6];
          iVar12 = iVar12 + iVar20;
          iStack_10 = iStack_10 + iVar20;
          iStack_14 = iStack_14 + *pcVar7;
          iStack_20 = iStack_20 + (iVar20 - *pcVar7);
          iStack_1c = iStack_1c +
                      (*(byte *)(iVar6 + 0x5849e3 + (short)(&DAT_0057956e)[param_1 * 0x80] * 0x2c) &
                      3);
        }
        if ((iVar6 < DAT_005685f0) && ((&DAT_005794db)[iVar19 + iVar6] == '\0')) {
          bVar4 = false;
        }
        pcVar7 = pcVar7 + 0x208;
        iVar6 = iVar6 + 1;
      } while ((int)pcVar7 < 0x578148);
      DAT_0051a068._0_1_ = 0;
      if (bVar4) {
        iVar6 = 0;
        piVar10 = &DAT_0056a524;
LAB_00428406:
        if (*piVar10 == 0) {
          (&DAT_0056a524)[iVar6] = iVar12;
        }
        else {
          if (*piVar10 <= iVar12) goto code_r0x00428410;
          if (iVar6 < 9) {
            piStack_c = &DAT_0056a544;
            iVar20 = 0x1d;
            do {
              if (*piStack_c != 0) {
                DAT_0051a068._0_1_ = 0;
                piStack_c[1] = *piStack_c;
                FUN_0045b9f0(iVar20 + -1);
                FUN_0045b8b0(iVar20);
              }
              piStack_c = piStack_c + -1;
              iVar15 = iVar20 + -0x16;
              iVar20 = iVar20 + -1;
            } while (iVar6 <= iVar15);
          }
          (&DAT_0056a524)[iVar6] = iVar12;
        }
        DAT_0051a068._0_1_ = 0;
        FUN_004676e0(param_1,0);
        FUN_0045b8b0(iVar6 + 0x14);
      }
LAB_004284aa:
      if ((((2 < DAT_005685f0) && ((&DAT_005794dc)[iVar19] != '\0')) && (DAT_004c2e0c == 0xffffffff)
          ) && (((bVar4 && ((DAT_0056a524 == 0 || (iVar12 < DAT_0056a524)))) &&
                (iVar12 <= iStack_14)))) {
        DAT_004c2e0c = param_1 | 0x100;
        FUN_004676e0(param_1,0);
        FUN_0045b8b0(0x14);
        uVar11 = 0xffffffff;
        pcVar7 = s_has_just_set_a_new_course_record_004c7228;
        do {
          pcVar9 = pcVar7;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar9 = pcVar7 + 1;
          cVar18 = *pcVar7;
          pcVar7 = pcVar9;
        } while (cVar18 != '\0');
        uVar11 = ~uVar11;
        iVar6 = -1;
        pcVar7 = (char *)&DAT_0051a068;
        do {
          pcVar22 = pcVar7;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar22 = pcVar7 + 1;
          cVar18 = *pcVar7;
          pcVar7 = pcVar22;
        } while (cVar18 != '\0');
        pcVar7 = pcVar9 + -uVar11;
        pcVar9 = pcVar22 + -1;
        for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
        pcVar7 = (char *)FUN_004ad425(iVar12,&DAT_0058a528,10);
        uVar11 = 0xffffffff;
        do {
          pcVar9 = pcVar7;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar9 = pcVar7 + 1;
          cVar18 = *pcVar7;
          pcVar7 = pcVar9;
        } while (cVar18 != '\0');
        uVar11 = ~uVar11;
        iVar6 = -1;
        pcVar7 = (char *)&DAT_0051a068;
        do {
          pcVar22 = pcVar7;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar22 = pcVar7 + 1;
          cVar18 = *pcVar7;
          pcVar7 = pcVar22;
        } while (cVar18 != '\0');
        pcVar7 = pcVar9 + -uVar11;
        pcVar9 = pcVar22 + -1;
        for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
        uVar11 = 0xffffffff;
        pcVar7 = s_strokes_for_004c7218;
        do {
          pcVar9 = pcVar7;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar9 = pcVar7 + 1;
          cVar18 = *pcVar7;
          pcVar7 = pcVar9;
        } while (cVar18 != '\0');
        uVar11 = ~uVar11;
        iVar6 = -1;
        pcVar7 = (char *)&DAT_0051a068;
        do {
          pcVar22 = pcVar7;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar22 = pcVar7 + 1;
          cVar18 = *pcVar7;
          pcVar7 = pcVar22;
        } while (cVar18 != '\0');
        pcVar7 = pcVar9 + -uVar11;
        pcVar9 = pcVar22 + -1;
        for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        iVar6 = DAT_005685f0 + -1;
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
        pcVar7 = (char *)FUN_004ad425(iVar6,&DAT_0058a528,10);
        uVar11 = 0xffffffff;
        do {
          pcVar9 = pcVar7;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar9 = pcVar7 + 1;
          cVar18 = *pcVar7;
          pcVar7 = pcVar9;
        } while (cVar18 != '\0');
        uVar11 = ~uVar11;
        iVar6 = -1;
        pcVar7 = (char *)&DAT_0051a068;
        do {
          pcVar22 = pcVar7;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar22 = pcVar7 + 1;
          cVar18 = *pcVar7;
          pcVar7 = pcVar22;
        } while (cVar18 != '\0');
        pcVar7 = pcVar9 + -uVar11;
        pcVar9 = pcVar22 + -1;
        for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
        uVar11 = 0xffffffff;
        pcVar7 = &DAT_004c720c;
        do {
          pcVar9 = pcVar7;
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          pcVar9 = pcVar7 + 1;
          cVar18 = *pcVar7;
          pcVar7 = pcVar9;
        } while (cVar18 != '\0');
        uVar11 = ~uVar11;
        iVar6 = -1;
        pcVar7 = (char *)&DAT_0051a068;
        do {
          pcVar22 = pcVar7;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar22 = pcVar7 + 1;
          cVar18 = *pcVar7;
          pcVar7 = pcVar22;
        } while (cVar18 != '\0');
        pcVar7 = pcVar9 + -uVar11;
        pcVar9 = pcVar22 + -1;
        for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        iStack_1c = iStack_1c + 1;
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      iVar6 = DAT_00822c88;
      if (DAT_00822c88 * 2 + 6 <= (int)(short)(&DAT_0057955c)[param_1 * 0x80]) {
        iStack_1c = iStack_1c + 1;
      }
      iVar12 = (int)(short)(&DAT_0057956e)[param_1 * 0x80];
      iVar20 = iVar12 * 0x2c;
      if ((iStack_10 < (int)(uint)*(byte *)(&DAT_005849e0 + iVar12 * 0xb)) ||
         (*(byte *)(&DAT_005849e0 + iVar12 * 0xb) == 0)) {
        *(char *)(&DAT_005849e0 + iVar12 * 0xb) = (char)iStack_10;
      }
      iVar12 = DAT_005685f0;
      cVar18 = *(char *)((int)&DAT_005849e0 + iVar20 + 1);
      if (cVar18 == '\0') {
      }
      else {
        iStack_20._0_1_ = (undefined1)((cVar18 + iStack_20) / 2);
      }
      *(undefined1 *)((int)&DAT_005849e0 + iVar20 + 1) = (undefined1)iStack_20;
      if (((((*(byte *)(iVar20 + 0x5849e2 + iVar12) & 3) != 0) || (iVar6 == 0)) ||
          (DAT_005a6d3c == 0)) || ((DAT_00571fd4 < 200 && (DAT_0056d1b0 < 1)))) {
        iStack_1c = iStack_1c + 1;
      }
      if (DAT_00543cc4 != 0) {
        iStack_1c = iStack_1c + DAT_00543cc4;
      }
      if ((((&DAT_005794d0)[iVar19] == '\0') &&
          (bVar5 = *(byte *)((int)&DAT_005849e0 + iVar20 + 2), 1 << (bVar5 & 7) <= iStack_1c)) &&
         ((bVar5 & 7) < 5)) {
        (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] | 0x80000000;
        (&DAT_00579556)[param_1 * 0x80] = 0xfff8;
      }
    }
  }
  uVar11 = DAT_0059e7b8;
  cVar18 = (&DAT_005794d9)[iVar19] + '\x01';
  (&DAT_005794d9)[iVar19] = cVar18;
  if ((uVar11 & 0x4200000) == 0) {
    if ((((&DAT_00575ab0)[cVar18 * 0x208] == '\0') ||
        ((&DAT_005794d9)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100] == '\0')) ||
       ((&DAT_005794d9)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x100] == '\x13')) {
      FUN_004266b0(param_1);
      return;
    }
  }
  else {
    if ((&DAT_00575ab0)[cVar18 * 0x208] == '\0') {
      (&DAT_005794d9)[iVar19] = 1;
    }
    (&DAT_00579576)[param_1 * 0x80] = (&DAT_00579576)[param_1 * 0x80] + (short)DAT_005685f0 * 2;
    if ((&DAT_005794db)[iVar19 + (char)(&DAT_005794d9)[iVar19]] != '\0') {
      FUN_004266b0(param_1);
    }
  }
  if ((&DAT_00575cb8)[(char)(&DAT_005794d9)[iVar19] * 0x208] == '\0') {
    if (((&DAT_005794d0)[iVar19] & 0xe0) == 0x40) {
      pcVar7 = s_County_commissioner_004c7088;
    }
    else {
      if (((&DAT_005794d0)[iVar19] & 0xe0) != 0x60) goto LAB_00428892;
      pcVar7 = s_Corporate_CEO_004c71b0;
    }
    uVar11 = 0xffffffff;
    do {
      pcVar9 = pcVar7;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar9 = pcVar7 + 1;
      cVar18 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar18 != '\0');
    uVar11 = ~uVar11;
    pcVar7 = pcVar9 + -uVar11;
    pcVar9 = (char *)&DAT_0051a068;
    for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_004676e0(param_1,0);
    uVar11 = 0xffffffff;
    pcVar7 = s_is_playing_the_last_hole_on_your_004c71c0;
    do {
      pcVar9 = pcVar7;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar9 = pcVar7 + 1;
      cVar18 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar18 != '\0');
    uVar11 = ~uVar11;
    iVar6 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar22 = pcVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar22 = pcVar7 + 1;
      cVar18 = *pcVar7;
      pcVar7 = pcVar22;
    } while (cVar18 != '\0');
    pcVar7 = pcVar9 + -uVar11;
    pcVar9 = pcVar22 + -1;
    for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    sVar2 = (&DAT_0057955c)[param_1 * 0x80];
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00469a20((int)sVar2,0);
    uVar11 = 0xffffffff;
    pcVar7 = &DAT_004c4e54;
    do {
      pcVar9 = pcVar7;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar9 = pcVar7 + 1;
      cVar18 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar18 != '\0');
    uVar11 = ~uVar11;
    iVar6 = -1;
    pcVar7 = (char *)&DAT_0051a068;
    do {
      pcVar22 = pcVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar22 = pcVar7 + 1;
      cVar18 = *pcVar7;
      pcVar7 = pcVar22;
    } while (cVar18 != '\0');
    pcVar7 = pcVar9 + -uVar11;
    pcVar9 = pcVar22 + -1;
    for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_0040cb00(0x80000210,1,param_1);
  }
LAB_00428892:
  *(short *)(&DAT_0057956c + iVar19) =
       (short)((int)(*(short *)(&DAT_0057956c + iVar19) * 7 +
                    (*(short *)(&DAT_0057956c + iVar19) * 7 >> 0x1f & 7U)) >> 3) +
       (&DAT_0057955c)[param_1 * 0x80];
  if (((&DAT_005794c8)[param_1 * 0x40] & 0x100000) == 0) {
    *(undefined2 *)(&DAT_0057956c + iVar19) = (&DAT_0057955c)[param_1 * 0x80];
  }
  else {
    (&DAT_005794ef)[iVar19 + (char)(&DAT_005794d9)[iVar19]] = (&DAT_0057956c)[iVar19];
  }
  *(undefined1 *)((char)(&DAT_005794d9)[iVar19] + 0x579514 + iVar19) =
       *(undefined1 *)(&DAT_0057955c + param_1 * 0x80);
  cVar18 = FUN_00467150((int)(char)(&DAT_005794ee)[iVar19]);
  (&DAT_005794ee)[iVar19] = (&DAT_005794ee)[iVar19] - cVar18;
  if (((&DAT_005794d0)[iVar19] & 0xe0) == 0x40) {
    iVar19 = ((char)(&DAT_005794d9)[iVar19] + 6) * (int)(short)(&DAT_0057955c)[param_1 * 0x80] *
             DAT_00822c88;
    (&DAT_0057955c)[param_1 * 0x80] =
         (&DAT_0057955c)[param_1 * 0x80] -
         (((short)(iVar19 / 0xa0) + (short)(iVar19 >> 0x1f)) -
         (short)((longlong)iVar19 * 0x66666667 >> 0x3f));
    return;
  }
  (&DAT_0057955c)[param_1 * 0x80] =
       (&DAT_0057955c)[param_1 * 0x80] -
       (short)((((short)(&DAT_00584a0a)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x16] + 6 +
                (int)(char)(&DAT_005794d9)[iVar19]) *
                ((short)(&DAT_0057955c)[param_1 * 0x80] + -1 + DAT_00822c88) * (DAT_00822c88 + 1)) /
              ((DAT_00543cd4 * 5 + 0xf) * 8));
  return;
code_r0x00428410:
  piVar10 = piVar10 + 1;
  iVar6 = iVar6 + 1;
  if (0x56a54b < (int)piVar10) goto LAB_004284aa;
  goto LAB_00428406;
}

