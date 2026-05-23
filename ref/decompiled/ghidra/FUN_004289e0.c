/* Ghidra decompiled: golf.exe */
/* Function: FUN_004289e0 @ 0x004289E0 */
/* Body size: 20552 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004289e0(void)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  ushort uVar5;
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  short *psVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  char *pcVar26;
  int iVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  char *pcVar30;
  char *pcVar31;
  uint uVar32;
  bool bVar33;
  bool bVar34;
  undefined4 uVar35;
  uint local_6c;
  int local_68;
  uint local_60;
  uint local_58;
  int local_4c;
  int local_44;
  int local_38;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  local_6c = 0;
  do {
    iVar24 = local_6c * 0x100;
    if ((&DAT_005794d9)[iVar24] != '\0') {
      iVar18 = 0;
      _DAT_0059b73c = 0;
      if ((&DAT_005794d9)[iVar24] == -1) {
        if ((&DAT_0057953c)[iVar24] == '\0') {
          sVar9 = FUN_0045c1e0(100);
          if (sVar9 == 0) {
            iVar18 = (int)DAT_0058bcbc;
            (&DAT_005794b8)[local_6c * 0x40] = DAT_0058bcba * 0x400 + 0x600;
            (&DAT_005794bc)[local_6c * 0x40] = iVar18 * 0x400 + 0x600;
          }
          if ((&DAT_0057953c)[iVar24] == '\0') goto LAB_00429ed2;
        }
        sVar9 = FUN_0045c1e0(2);
        if (sVar9 != 0) {
          (&DAT_0057953c)[iVar24] = (&DAT_0057953c)[iVar24] + -1;
        }
      }
      else {
        iVar25 = -1;
        bVar4 = false;
        psVar12 = &DAT_0059fc60;
        do {
          if ((int)*psVar12 == local_6c) {
            iVar25 = iVar18;
          }
          psVar12 = psVar12 + 0x1c4;
          iVar18 = iVar18 + 1;
        } while ((int)psVar12 < 0x5a34e0);
        local_4c = iVar25;
        if ((iVar25 != -1) && (((&DAT_005794c8)[local_6c * 0x40] & 0x40000) == 0)) {
          local_4c = -1;
          (&DAT_0059fc60)[iVar25 * 0x1c4] = 0xffff;
        }
        if (((&DAT_0057953c)[iVar24] != '\0') && ((DAT_00834170 & 7) == 0)) {
          cVar6 = (&DAT_0057953c)[iVar24] + -1;
          (&DAT_0057953c)[iVar24] = cVar6;
          if ((cVar6 == '\x01') &&
             (uVar13 = FUN_0045c1e0(6), DAT_00822c88 + 1 <= (int)(uVar13 & 0xffff))) {
            FUN_004675d0(local_6c);
          }
          if (((((&DAT_0057953c)[iVar24] == '\x06') && ((&DAT_0057953d)[iVar24] == '2')) &&
              ((&DAT_005794c0)[local_6c * 0x40] != -1)) &&
             ((((&DAT_005794c8)[local_6c * 0x40] & 0x100000) == 0 &&
              ((&DAT_0057956a)[local_6c * 0x80] == 4)))) {
            DAT_004c2e0c = local_6c;
          }
        }
        if (((&DAT_005794c8)[local_6c * 0x40] & 0x100000) != 0) {
          iVar18 = (int)(short)(&DAT_0057955a)[local_6c * 0x80];
          if ((((((&DAT_005794d9)[iVar24] == (&DAT_005794d9)[iVar18 * 0x100]) &&
                (((&DAT_005794d9)[iVar24] != '\x13' || ((&DAT_0057956a)[local_6c * 0x80] != 0)))) &&
               (((&DAT_005794c8)[local_6c * 0x40] & 0x200000) == 0)) &&
              ((((((((DAT_00834170 + local_6c * -0x1f & 0x3f) == 0 &&
                    ('\x06' < (char)(&DAT_005794d5)[iVar24])) && ((&DAT_005794d5)[iVar24] != '\x10')
                   ) && (('\x06' < (char)(&DAT_005794d5)[iVar18 * 0x100] &&
                         ((&DAT_005794d5)[iVar18 * 0x100] != '\x10')))) &&
                 (0x96 < (int)(DAT_00834170 - DAT_0059b048))) &&
                ((DAT_00569498 == '\0' &&
                 (iVar18 = FUN_0040acd0((&DAT_005794b8)[local_6c * 0x40] -
                                        (&DAT_005794b8)[iVar18 * 0x40],
                                        (&DAT_005794bc)[local_6c * 0x40] -
                                        (&DAT_005794bc)[iVar18 * 0x40]),
                 iVar18 < (int)(0x3000 / (longlong)((short)(&DAT_0057956a)[local_6c * 0x80] + 6)))))
                ) && ((3 < DAT_004c2844 &&
                      (((0x32 < (int)(&DAT_005794c0)[local_6c * 0x40] &&
                        ((int)(&DAT_005794c0)[local_6c * 0x40] < 0x2ee)) &&
                       (0x32 < (int)(&DAT_005794c4)[local_6c * 0x40])))))))) &&
             ((int)(&DAT_005794c4)[local_6c * 0x40] < 0x1c2)) {
            iVar18 = FUN_00407000((&DAT_005794b8)[local_6c * 0x40],(&DAT_005794bc)[local_6c * 0x40],
                                  8);
            if (iVar18 != 0) {
              (&DAT_005794ef)
              [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x100 +
               (int)(char)(&DAT_005794d9)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x100]] = 99;
            }
            FUN_00466370(local_6c,0);
            (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 0x200000;
            (&DAT_005794c8)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] =
                 (&DAT_005794c8)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] | 0x200000;
          }
        }
        uVar13 = 0x1ff;
        if (((&DAT_00579540)[local_6c * 0x80] & 0xc000) == 0) {
          uVar13 = 0xff;
        }
        if (((&DAT_00579540)[local_6c * 0x80] & 0x4000) != 0) {
          uVar13 = (int)uVar13 >> 2;
        }
        if (0 < *(short *)(&DAT_005794cc + iVar24)) {
          uVar13 = (int)uVar13 >> 1;
        }
        if ((((uVar13 & DAT_00834170 + local_6c * 0x21) == 0) &&
            (((&DAT_00579528)[iVar24] & 0x7f) != 0xb)) && (((&DAT_00579529)[iVar24] & 0x7f) != 0xb))
        {
          uVar13 = FUN_0045c1e0(5);
          uVar13 = ((byte)(&DAT_005794d2)[iVar24] - 2) + (uVar13 & 0xffff) & 7;
          iVar27 = ((int)(&DAT_005794b8)[local_6c * 0x40] >> 10) + (&DAT_004c2878)[uVar13];
          iVar25 = ((int)(&DAT_005794bc)[local_6c * 0x40] >> 10) + (&DAT_004c2898)[uVar13];
          iVar18 = iVar25 + iVar27 * 0x32;
          if (*(char *)((int)&DAT_005722e8 + iVar18) == '\x16') {
            iVar14 = FUN_0040df80(iVar27,iVar25);
            if ((&DAT_0058bcb8)[iVar14 * 8] == 2) {
LAB_00428df3:
              uVar35 = 0xb;
            }
            else {
              if ((&DAT_0058bcb8)[iVar14 * 8] != 4) goto LAB_00428e0c;
              if ((int)(&DAT_0058bcc0)[iVar14 * 4] < 0x10) goto LAB_00428df3;
              uVar35 = 0x14;
            }
            FUN_00467a00(local_6c,uVar35,iVar27 + iVar25 * 0x32);
          }
LAB_00428e0c:
          if ((((&DAT_0053caf0)[iVar18] & 0x1000) != 0) &&
             ((iVar14 = FUN_004675d0(local_6c), iVar14 == 2 ||
              (((&DAT_0053caf0)[iVar18] & 0x800) != 0)))) {
            FUN_00467a00(local_6c,(-(((&DAT_0053caf0)[iVar18] & 0x800) != 0) & 9U) + 0xb,
                         iVar27 + iVar25 * 0x32);
          }
        }
        if (((&DAT_005794c8)[local_6c * 0x40] & 0x200) != 0) {
          DAT_00585850 = (&DAT_005794b8)[local_6c * 0x40];
          DAT_00585854 = (&DAT_005794bc)[local_6c * 0x40];
          DAT_00585866 = (&DAT_005794d2)[iVar24];
        }
        iVar27 = (int)(&DAT_00579590)[local_6c * 0x40] >> 10;
        iVar25 = (int)(&DAT_0057958c)[local_6c * 0x40] >> 10;
        iVar18 = FUN_0040bf60(iVar25,iVar27);
        if (iVar18 == 0) {
          local_68 = (int)*(char *)((int)&DAT_005722e8 + iVar25 * 0x32 + iVar27);
        }
        else {
          local_68 = 0x14;
        }
        iVar18 = (int)(&DAT_005794b8)[local_6c * 0x40] >> 10;
        iVar14 = (int)(&DAT_005794bc)[local_6c * 0x40] >> 10;
        if (((int)(DAT_00834170 + local_6c * 0x25) %
             (int)((-(uint)(*(short *)(&DAT_005794cc + iVar24) != 0) & 0xffffffd8) + 0xa0) == 0) &&
           ((&DAT_005794d9)[iVar24] != '\x13')) {
          if (('\x01' < (char)(&DAT_005794d9)[iVar24]) &&
             ((((&DAT_005794db)[iVar24] == '\0' && (*(short *)(&DAT_00579558 + iVar24) == 0)) &&
              (sVar9 = FUN_0045c1e0(DAT_005685f0 / 2), sVar9 == 0)))) {
            FUN_00467a00(local_6c,0x3f,0x14);
          }
          bVar33 = false;
          cVar6 = (&DAT_00578377)[*(char *)((int)&DAT_005722e8 + iVar18 * 0x32 + iVar14) * 0x30];
          if (((cVar6 == '\a') || (cVar6 == '\b')) || (cVar6 == '\x0e')) {
            bVar33 = true;
          }
          iVar20 = 0;
          do {
            cVar6 = (&DAT_00578377)
                    [*(char *)((int)&DAT_005722e8 +
                              (*(int *)((int)&DAT_004c2878 + iVar20) + iVar18) * 0x32 +
                              *(int *)((int)&DAT_004c2898 + iVar20) + iVar14) * 0x30];
            if (((cVar6 == '\a') || (cVar6 == '\b')) || (cVar6 == '\x0e')) {
              bVar33 = true;
            }
            iVar20 = iVar20 + 4;
          } while (iVar20 < 0x20);
          if (((DAT_005a34e0 == '\x03') && (sVar9 = FUN_0045c1e0(2), sVar9 != 0)) || (bVar33)) {
            if (('\x02' < (char)(&DAT_005794d9)[iVar24]) && (sVar9 = FUN_0045c1e0(2), sVar9 == 0)) {
              *(short *)(&DAT_0057955e + iVar24) = *(short *)(&DAT_0057955e + iVar24) + 1;
              if (0xf < *(short *)(&DAT_0057955e + iVar24)) {
                uVar13 = (int)*(short *)(&DAT_0057955e + iVar24) & 0x80000003;
                bVar33 = uVar13 == 0;
                if ((int)uVar13 < 0) {
                  bVar33 = (uVar13 - 1 | 0xfffffffc) == 0xffffffff;
                }
                if (bVar33) {
                  if (((&DAT_005794d0)[iVar24] & 0xe0) == 0x20) {
                    *(undefined2 *)(&DAT_0057955e + iVar24) = 0x10;
                  }
                  else {
                    FUN_00467a00(local_6c,0xf,0x14);
                  }
                }
              }
            }
          }
          else {
            (&DAT_00579560)[local_6c * 0x80] = (&DAT_00579560)[local_6c * 0x80] + 1;
            if (0xf < (short)(&DAT_00579560)[local_6c * 0x80]) {
              uVar13 = (int)(short)(&DAT_00579560)[local_6c * 0x80] & 0x80000003;
              bVar33 = uVar13 == 0;
              if ((int)uVar13 < 0) {
                bVar33 = (uVar13 - 1 | 0xfffffffc) == 0xffffffff;
              }
              if (bVar33) {
                if (((&DAT_005794d0)[iVar24] & 0xe0) == 0x20) {
                  (&DAT_00579560)[local_6c * 0x80] = 0x10;
                }
                else {
                  FUN_00467a00(local_6c,0xe,0x14);
                }
              }
            }
          }
        }
        iVar20 = iVar14 + iVar18 * 0x32;
        iVar15 = (int)*(char *)((int)&DAT_005722e8 + iVar20);
        if ((&DAT_0057959c)[local_6c * 0x40] == 0) {
          (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] & 0xfffbffff;
        }
        if ((short)(&DAT_00579556)[local_6c * 0x80] < 0) {
          if ((DAT_00834170 & 1) != 0) {
            (&DAT_00579556)[local_6c * 0x80] = (&DAT_00579556)[local_6c * 0x80] + 1;
          }
          if (((&DAT_005794c8)[local_6c * 0x40] & 0x40000) == 0) goto LAB_00429ed2;
          goto LAB_0042c661;
        }
        if (((&DAT_005794c8)[local_6c * 0x40] & 0x80000000) != 0) {
          FUN_00406670(local_6c);
        }
        uVar13 = (&DAT_005794c8)[local_6c * 0x40];
        (&DAT_005794c8)[local_6c * 0x40] = uVar13 & 0xffff7fff;
        if ('\t' < (char)(&DAT_005794da)[iVar24]) {
          FUN_00427380(local_6c);
          goto LAB_00429ed2;
        }
        if ((((_DAT_0059e7b8 & 0x20) != 0) &&
            (((&DAT_0057959c)[local_6c * 0x40] != 0 || (local_68 != 1)))) &&
           (iVar22 = FUN_0042fb90((&DAT_0057957c)[local_6c * 0x40],(&DAT_00579580)[local_6c * 0x40],
                                  &local_1c,&local_20,0), iVar22 != 0)) {
          if (((&DAT_005794c8)[local_6c * 0x40] & 0x10000000) == 0) {
            iVar22 = FUN_0042f940(*(undefined4 *)(&DAT_00579584 + iVar24),
                                  *(undefined4 *)(&DAT_00579588 + iVar24),&local_24,&local_28);
          }
          else {
            iVar22 = FUN_0042fb90(*(int *)(&DAT_00579584 + iVar24) << 10,
                                  *(int *)(&DAT_00579588 + iVar24) << 10,&local_24,&local_28,0);
          }
          if (iVar22 != 0) {
            FUN_00478b80(local_1c,local_20,local_24,local_28,0x80006318);
            FUN_0042f940((&DAT_00575ac8)[(char)(&DAT_005794d9)[iVar24] * 0x82],
                         (&DAT_00575acc)[(char)(&DAT_005794d9)[iVar24] * 0x82],&local_1c,&local_20);
          }
        }
        bVar33 = false;
        bVar34 = true;
        if ((((&DAT_005794d9)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x100] == '\0') &&
            ((&DAT_005794da)[iVar24] == '\0')) && ((&DAT_005794d9)[iVar24] != '\x13')) {
          FUN_004266b0(local_6c);
        }
        iVar22 = (int)(short)(&DAT_0057955a)[local_6c * 0x80];
        cVar6 = (&DAT_005794d9)[iVar22 * 0x100];
        if (((cVar6 != '\0') && (cVar6 == (&DAT_005794d9)[iVar24])) &&
           ((((&DAT_005794c8)[local_6c * 0x40] & 0x400) != 0 &&
            (((&DAT_005794c8)[iVar22 * 0x40] & 0x400) == 0)))) {
          bVar33 = true;
        }
        local_8 = 0;
        if (((((&DAT_005794c8)[local_6c * 0x40] & 0x400) != 0) &&
            ((&DAT_0057958c)[local_6c * 0x40] != 0)) &&
           (((&DAT_0057958c)[iVar22 * 0x40] != 0 && ((&DAT_005794d9)[iVar24] == cVar6)))) {
          cVar2 = (&DAT_005794d9)[iVar24];
          iVar22 = FUN_0040c4b0((&DAT_0057958c)[iVar22 * 0x40],(&DAT_00579590)[iVar22 * 0x40],
                                (&DAT_00575ac8)[cVar6 * 0x82],(&DAT_00575acc)[cVar6 * 0x82]);
          iVar17 = FUN_0040c4b0((&DAT_0057958c)[local_6c * 0x40],(&DAT_00579590)[local_6c * 0x40],
                                (&DAT_00575ac8)[cVar2 * 0x82],(&DAT_00575acc)[cVar2 * 0x82]);
          local_8 = (uint)(iVar17 < iVar22);
        }
        if (((((&DAT_0057958c)[local_6c * 0x40] == 0) || ((&DAT_005794d8)[iVar24] == '\0')) ||
            (bVar33)) || (((&DAT_005794c8)[local_6c * 0x40] & 0x20000000) != 0)) {
          local_44 = 0;
          local_60 = -1;
          local_58 = 0;
          if ((((_DAT_0059e7b8 & 0x200000) != 0) || (((&DAT_005794d0)[iVar24] & 0xe0) == 0x20)) &&
             ((short)(&DAT_0057955c)[local_6c * 0x80] < 0)) {
            (&DAT_0057955c)[local_6c * 0x80] = 0;
          }
          if ((((&DAT_0057953c)[iVar24] == '\0') &&
              (((&DAT_005794c8)[local_6c * 0x40] & 0x20000000) == 0)) &&
             ((short)(&DAT_0057955c)[local_6c * 0x80] < 0)) {
            DAT_0051a068._0_1_ = 0;
            FUN_004676e0(local_6c,0);
            switch((&DAT_0057953d)[iVar24] & 0x7f) {
            case 4:
              pcVar26 = s_will_be_looking_for_a_tougher_co_004c7678;
              break;
            default:
              pcVar26 = s_is_leaving_the_course_in_disgust_004c750c;
              break;
            case 8:
            case 0x17:
            case 0x1e:
              pcVar26 = s_thinks_your_course_needs_improve_004c7538;
              break;
            case 9:
              pcVar26 = s_has_punched_out_another_golfer_a_004c7654;
              break;
            case 0xc:
              uVar23 = 0xffffffff;
              pcVar26 = s_has_wrapped_004c7620;
              do {
                pcVar31 = pcVar26;
                if (uVar23 == 0) break;
                uVar23 = uVar23 - 1;
                pcVar31 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar31;
              } while (cVar6 != '\0');
              uVar23 = ~uVar23;
              iVar22 = -1;
              pcVar26 = (char *)&DAT_0051a068;
              do {
                pcVar30 = pcVar26;
                if (iVar22 == 0) break;
                iVar22 = iVar22 + -1;
                pcVar30 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar30;
              } while (cVar6 != '\0');
              pcVar26 = pcVar31 + -uVar23;
              pcVar31 = pcVar30 + -1;
              for (uVar32 = uVar23 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
                *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar31 = pcVar31 + 4;
              }
              for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                *pcVar31 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar31 = pcVar31 + 1;
              }
              iVar22 = FUN_0046c940(local_6c);
              ppuVar28 = &PTR_DAT_004c4f94;
              if (iVar22 == 0) {
                ppuVar28 = (undefined **)&DAT_004c4f90;
              }
              uVar23 = 0xffffffff;
              do {
                ppuVar29 = ppuVar28;
                if (uVar23 == 0) break;
                uVar23 = uVar23 - 1;
                ppuVar29 = (undefined **)((int)ppuVar28 + 1);
                cVar6 = *(char *)ppuVar28;
                ppuVar28 = ppuVar29;
              } while (cVar6 != '\0');
              uVar23 = ~uVar23;
              iVar22 = -1;
              pcVar26 = (char *)&DAT_0051a068;
              do {
                pcVar31 = pcVar26;
                if (iVar22 == 0) break;
                iVar22 = iVar22 + -1;
                pcVar31 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar31;
              } while (cVar6 != '\0');
              pcVar26 = (char *)((int)ppuVar29 - uVar23);
              pcVar31 = pcVar31 + -1;
              for (uVar32 = uVar23 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
                *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar31 = pcVar31 + 4;
              }
              for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                *pcVar31 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar31 = pcVar31 + 1;
              }
              pcVar26 = s_club_around_a_tree_on_004c7608;
              break;
            case 0xd:
              uVar23 = 0xffffffff;
              pcVar26 = s_has_thrown_004c75f8;
              do {
                pcVar31 = pcVar26;
                if (uVar23 == 0) break;
                uVar23 = uVar23 - 1;
                pcVar31 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar31;
              } while (cVar6 != '\0');
              uVar23 = ~uVar23;
              iVar22 = -1;
              pcVar26 = (char *)&DAT_0051a068;
              do {
                pcVar30 = pcVar26;
                if (iVar22 == 0) break;
                iVar22 = iVar22 + -1;
                pcVar30 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar30;
              } while (cVar6 != '\0');
              pcVar26 = pcVar31 + -uVar23;
              pcVar31 = pcVar30 + -1;
              for (uVar32 = uVar23 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
                *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar31 = pcVar31 + 4;
              }
              for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                *pcVar31 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar31 = pcVar31 + 1;
              }
              iVar22 = FUN_0046c940(local_6c);
              ppuVar28 = &PTR_DAT_004c4f94;
              if (iVar22 == 0) {
                ppuVar28 = (undefined **)&DAT_004c4f90;
              }
              uVar23 = 0xffffffff;
              do {
                ppuVar29 = ppuVar28;
                if (uVar23 == 0) break;
                uVar23 = uVar23 - 1;
                ppuVar29 = (undefined **)((int)ppuVar28 + 1);
                cVar6 = *(char *)ppuVar28;
                ppuVar28 = ppuVar29;
              } while (cVar6 != '\0');
              uVar23 = ~uVar23;
              iVar22 = -1;
              pcVar26 = (char *)&DAT_0051a068;
              do {
                pcVar31 = pcVar26;
                if (iVar22 == 0) break;
                iVar22 = iVar22 + -1;
                pcVar31 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar31;
              } while (cVar6 != '\0');
              pcVar26 = (char *)((int)ppuVar29 - uVar23);
              pcVar31 = pcVar31 + -1;
              for (uVar32 = uVar23 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
                *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar31 = pcVar31 + 4;
              }
              for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                *pcVar31 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar31 = pcVar31 + 1;
              }
              pcVar26 = s_clubs_into_the_lake_on_004c75dc;
              break;
            case 0xe:
              pcVar26 = s_is_too_thirsty_to_play_any_more_a_004c758c;
              break;
            case 0xf:
              pcVar26 = s_is_too_hungry_to_keep_playing_af_004c75b4;
              break;
            case 0x15:
              pcVar26 = s_has_insulted_another_golfer_at_004c7630;
              break;
            case 0x1a:
              pcVar26 = s_is_too_tired_to_continue_after_004c7568;
            }
            uVar23 = 0xffffffff;
            do {
              pcVar31 = pcVar26;
              if (uVar23 == 0) break;
              uVar23 = uVar23 - 1;
              pcVar31 = pcVar26 + 1;
              cVar6 = *pcVar26;
              pcVar26 = pcVar31;
            } while (cVar6 != '\0');
            uVar23 = ~uVar23;
            iVar22 = -1;
            pcVar26 = (char *)&DAT_0051a068;
            do {
              pcVar30 = pcVar26;
              if (iVar22 == 0) break;
              iVar22 = iVar22 + -1;
              pcVar30 = pcVar26 + 1;
              cVar6 = *pcVar26;
              pcVar26 = pcVar30;
            } while (cVar6 != '\0');
            pcVar26 = pcVar31 + -uVar23;
            pcVar31 = pcVar30 + -1;
            for (uVar32 = uVar23 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
              *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
              pcVar26 = pcVar26 + 4;
              pcVar31 = pcVar31 + 4;
            }
            cVar6 = (&DAT_005794d9)[iVar24];
            for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
              *pcVar31 = *pcVar26;
              pcVar26 = pcVar26 + 1;
              pcVar31 = pcVar31 + 1;
            }
            if (cVar6 < '\x13') {
              uVar23 = 0xffffffff;
              pcVar26 = s_hole_004c7504;
              do {
                pcVar31 = pcVar26;
                if (uVar23 == 0) break;
                uVar23 = uVar23 - 1;
                pcVar31 = pcVar26 + 1;
                cVar2 = *pcVar26;
                pcVar26 = pcVar31;
              } while (cVar2 != '\0');
              uVar23 = ~uVar23;
              iVar22 = -1;
              pcVar26 = (char *)&DAT_0051a068;
              do {
                pcVar30 = pcVar26;
                if (iVar22 == 0) break;
                iVar22 = iVar22 + -1;
                pcVar30 = pcVar26 + 1;
                cVar2 = *pcVar26;
                pcVar26 = pcVar30;
              } while (cVar2 != '\0');
              pcVar26 = pcVar31 + -uVar23;
              pcVar31 = pcVar30 + -1;
              for (uVar32 = uVar23 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
                *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar31 = pcVar31 + 4;
              }
              for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                *pcVar31 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar31 = pcVar31 + 1;
              }
              pcVar26 = (char *)FUN_004ad425((int)cVar6,&DAT_0058a528,10);
              uVar23 = 0xffffffff;
              do {
                pcVar31 = pcVar26;
                if (uVar23 == 0) break;
                uVar23 = uVar23 - 1;
                pcVar31 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar31;
              } while (cVar6 != '\0');
              uVar23 = ~uVar23;
              iVar22 = -1;
              pcVar26 = (char *)&DAT_0051a068;
              do {
                pcVar30 = pcVar26;
                if (iVar22 == 0) break;
                iVar22 = iVar22 + -1;
                pcVar30 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar30;
              } while (cVar6 != '\0');
              pcVar26 = pcVar31 + -uVar23;
              pcVar31 = pcVar30 + -1;
              for (uVar32 = uVar23 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
                *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar31 = pcVar31 + 4;
              }
              for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                *pcVar31 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar31 = pcVar31 + 1;
              }
            }
            else {
              uVar23 = 0xffffffff;
              pcVar26 = s_today_s_round_004c74f4;
              do {
                pcVar31 = pcVar26;
                if (uVar23 == 0) break;
                uVar23 = uVar23 - 1;
                pcVar31 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar31;
              } while (cVar6 != '\0');
              uVar23 = ~uVar23;
              iVar22 = -1;
              pcVar26 = (char *)&DAT_0051a068;
              do {
                pcVar30 = pcVar26;
                if (iVar22 == 0) break;
                iVar22 = iVar22 + -1;
                pcVar30 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar30;
              } while (cVar6 != '\0');
              pcVar26 = pcVar31 + -uVar23;
              pcVar31 = pcVar30 + -1;
              for (uVar32 = uVar23 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
                *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar31 = pcVar31 + 4;
              }
              for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                *pcVar31 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar31 = pcVar31 + 1;
              }
            }
            uVar23 = 0xffffffff;
            pcVar26 = &DAT_004c4e60;
            do {
              pcVar31 = pcVar26;
              if (uVar23 == 0) break;
              uVar23 = uVar23 - 1;
              pcVar31 = pcVar26 + 1;
              cVar6 = *pcVar26;
              pcVar26 = pcVar31;
            } while (cVar6 != '\0');
            uVar23 = ~uVar23;
            iVar22 = -1;
            pcVar26 = (char *)&DAT_0051a068;
            do {
              pcVar30 = pcVar26;
              if (iVar22 == 0) break;
              iVar22 = iVar22 + -1;
              pcVar30 = pcVar26 + 1;
              cVar6 = *pcVar26;
              pcVar26 = pcVar30;
            } while (cVar6 != '\0');
            pcVar26 = pcVar31 + -uVar23;
            pcVar31 = pcVar30 + -1;
            for (uVar32 = uVar23 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
              *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
              pcVar26 = pcVar26 + 4;
              pcVar31 = pcVar31 + 4;
            }
            sVar9 = (&DAT_0057956e)[local_6c * 0x80];
            for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
              *pcVar31 = *pcVar26;
              pcVar26 = pcVar26 + 1;
              pcVar31 = pcVar31 + 1;
            }
            iVar22 = sVar9 * 0x2c;
            if (1 < (*(byte *)((int)&DAT_005849e0 + iVar22 + 2) & 7)) {
              uVar23 = 0xffffffff;
              pcVar26 = &DAT_004c3f70;
              do {
                pcVar31 = pcVar26;
                if (uVar23 == 0) break;
                uVar23 = uVar23 - 1;
                pcVar31 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar31;
              } while (cVar6 != '\0');
              uVar23 = ~uVar23;
              iVar22 = -1;
              pcVar26 = (char *)&DAT_0051a068;
              do {
                pcVar30 = pcVar26;
                if (iVar22 == 0) break;
                iVar22 = iVar22 + -1;
                pcVar30 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar30;
              } while (cVar6 != '\0');
              pcVar26 = pcVar31 + -uVar23;
              pcVar31 = pcVar30 + -1;
              for (uVar32 = uVar23 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
                *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar31 = pcVar31 + 4;
              }
              for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                *pcVar31 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar31 = pcVar31 + 1;
              }
              FUN_004676e0(local_6c,0);
              uVar23 = 0xffffffff;
              pcVar26 = s_resigns_004c74e8;
              do {
                pcVar31 = pcVar26;
                if (uVar23 == 0) break;
                uVar23 = uVar23 - 1;
                pcVar31 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar31;
              } while (cVar6 != '\0');
              uVar23 = ~uVar23;
              iVar22 = -1;
              pcVar26 = (char *)&DAT_0051a068;
              do {
                pcVar30 = pcVar26;
                if (iVar22 == 0) break;
                iVar22 = iVar22 + -1;
                pcVar30 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar30;
              } while (cVar6 != '\0');
              pcVar26 = pcVar31 + -uVar23;
              pcVar31 = pcVar30 + -1;
              for (uVar32 = uVar23 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
                *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar31 = pcVar31 + 4;
              }
              for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                *pcVar31 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar31 = pcVar31 + 1;
              }
              iVar22 = FUN_0046c940(local_6c);
              ppuVar28 = &PTR_DAT_004c4f94;
              if (iVar22 == 0) {
                ppuVar28 = (undefined **)&DAT_004c4f90;
              }
              uVar23 = 0xffffffff;
              do {
                ppuVar29 = ppuVar28;
                if (uVar23 == 0) break;
                uVar23 = uVar23 - 1;
                ppuVar29 = (undefined **)((int)ppuVar28 + 1);
                cVar6 = *(char *)ppuVar28;
                ppuVar28 = ppuVar29;
              } while (cVar6 != '\0');
              uVar23 = ~uVar23;
              iVar22 = -1;
              pcVar26 = (char *)&DAT_0051a068;
              do {
                pcVar31 = pcVar26;
                if (iVar22 == 0) break;
                iVar22 = iVar22 + -1;
                pcVar31 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar31;
              } while (cVar6 != '\0');
              pcVar26 = (char *)((int)ppuVar29 - uVar23);
              pcVar31 = pcVar31 + -1;
              for (uVar32 = uVar23 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
                *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar31 = pcVar31 + 4;
              }
              for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                *pcVar31 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar31 = pcVar31 + 1;
              }
              uVar23 = 0xffffffff;
              pcVar26 = s_membership__004c74d8;
              do {
                pcVar31 = pcVar26;
                if (uVar23 == 0) break;
                uVar23 = uVar23 - 1;
                pcVar31 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar31;
              } while (cVar6 != '\0');
              uVar23 = ~uVar23;
              iVar22 = -1;
              pcVar26 = (char *)&DAT_0051a068;
              do {
                pcVar30 = pcVar26;
                if (iVar22 == 0) break;
                iVar22 = iVar22 + -1;
                pcVar30 = pcVar26 + 1;
                cVar6 = *pcVar26;
                pcVar26 = pcVar30;
              } while (cVar6 != '\0');
              pcVar26 = pcVar31 + -uVar23;
              pcVar31 = pcVar30 + -1;
              for (uVar32 = uVar23 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
                *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                pcVar26 = pcVar26 + 4;
                pcVar31 = pcVar31 + 4;
              }
              sVar9 = (&DAT_0057956e)[local_6c * 0x80];
              for (uVar23 = uVar23 & 3; uVar23 != 0; uVar23 = uVar23 - 1) {
                *pcVar31 = *pcVar26;
                pcVar26 = pcVar26 + 1;
                pcVar31 = pcVar31 + 1;
              }
              iVar22 = sVar9 * 0x2c;
              *(undefined1 *)((int)&DAT_005849e0 + iVar22 + 2) = 0;
            }
            DAT_00569498 = '\0';
            *(byte *)((char)(&DAT_005794d9)[iVar24] + 0x5849e3 + iVar22) =
                 *(byte *)((char)(&DAT_005794d9)[iVar24] + 0x5849e3 + iVar22) | 4;
            (&DAT_00584a09)[iVar22] = 0xff;
            FUN_0040cb00(0x80000000,0,local_6c);
            FUN_004481b0(0x29,100,0,0,0);
            cVar6 = (&DAT_005794d9)[iVar24];
            (&DAT_00579556)[local_6c * 0x80] = 0xff9d;
            (&DAT_005794d5)[iVar24] = 0xd;
            (&DAT_005794d9)[iVar24] = 0x13;
            (&DAT_0057958c)[local_6c * 0x40] = 0;
            uVar23 = (&DAT_005794c8)[local_6c * 0x40];
            *(short *)(&DAT_00575c0a + cVar6 * 0x208) =
                 *(short *)(&DAT_00575c0a + cVar6 * 0x208) + 1;
            (&DAT_005794c8)[local_6c * 0x40] = uVar23 & 0xfffeffff | 0x20000000;
            (&DAT_00579562)[local_6c * 0x80] = 0;
            (&DAT_005794ee)[iVar24] = 0xfd;
            if (((&DAT_005794c8)[local_6c * 0x40] & 0x200) != 0) {
              DAT_005a59f8 = 0xffffffff;
            }
          }
          if (((&DAT_005794c8)[local_6c * 0x40] & 0x20000000) == 0) {
            if (((&DAT_005794d9)[iVar24] == '\x13') &&
               ((((iVar18 == _DAT_00578150 && (iVar14 == _DAT_00578154)) ||
                 (((&DAT_005794c8)[local_6c * 0x40] & 0x200) != 0)) ||
                ((&DAT_005794c0)[local_6c * 0x40] == -1)))) {
              (&DAT_0057953c)[iVar24] = 0;
              (&DAT_005794d9)[iVar24] = 0;
              if ((((&DAT_005794c8)[local_6c * 0x40] & 0x200) != 0) ||
                 (((&DAT_005794c8)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] & 0x200) != 0)) {
                if (((&DAT_005794d9)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x100] != '\0') &&
                   ((&DAT_005794d9)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x100] != '\x13'))
                goto LAB_00429ed2;
                if (local_6c == DAT_005a59f8) {
                  DAT_005a59f8 = 0xffffffff;
                }
              }
              FUN_00426670(local_6c);
              goto LAB_00429ed2;
            }
            if (*(char *)(&DAT_00575ab0 + (char)(&DAT_005794d9)[iVar24] * 0x82) == '\0') {
              (&DAT_005794d9)[iVar24] = 0x13;
            }
            if ((&DAT_005794da)[iVar24] == '\0') {
              uVar23 = 0;
              pcVar26 = &DAT_005794d9;
              iVar22 = DAT_0056a51c;
              do {
                if ((('\0' < *pcVar26) && (uVar23 != local_6c)) &&
                   ((*pcVar26 == (&DAT_005794d9)[iVar24] &&
                    (((pcVar26[1] == '\0' &&
                      (iVar22 - (short)(&DAT_00579576)[local_6c * 0x80] <=
                       iVar22 - *(short *)(pcVar26 + 0x9d))) &&
                     (uVar23 != (int)(short)(&DAT_0057955a)[local_6c * 0x80])))))) {
                  if (((local_6c == DAT_005a59f8) ||
                      ((int)(short)(&DAT_0057955a)[local_6c * 0x80] == DAT_005a59f8)) &&
                     ((_DAT_0059e7b8 & 0x4200000) == 0)) {
                    FUN_004266b0(uVar23);
                    FUN_004266b0(uVar23 ^ 1);
                    iVar22 = DAT_0056a51c;
                  }
                  else {
                    local_44 = local_44 + 1;
                  }
                }
                pcVar26 = pcVar26 + 0x100;
                uVar23 = uVar23 + 1;
              } while ((int)pcVar26 < 0x582cd9);
            }
            if ((&DAT_0057958c)[local_6c * 0x40] != 0) {
              local_4 = FUN_004672d0(((&DAT_00575ac8)[(char)(&DAT_005794d9)[iVar24] * 0x82] * 0x400
                                     - (&DAT_0057958c)[local_6c * 0x40]) + 0x200,
                                     ((&DAT_00575acc)[(char)(&DAT_005794d9)[iVar24] * 0x82] * 0x400
                                     - (&DAT_00579590)[local_6c * 0x40]) + 0x200);
            }
            if ((&DAT_0057958c)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] != 0) {
              FUN_004672d0(((&DAT_00575ac8)[(char)(&DAT_005794d9)[iVar24] * 0x82] * 0x400 -
                           (&DAT_0057958c)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40]) + 0x200,
                           ((&DAT_00575acc)[(char)(&DAT_005794d9)[iVar24] * 0x82] * 0x400 -
                           (&DAT_00579590)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40]) + 0x200)
              ;
            }
            if ((&DAT_0057958c)[local_6c * 0x40] != 0) {
              iVar22 = (int)(short)(&DAT_0057955a)[local_6c * 0x80];
              if (((&DAT_0057958c)[iVar22 * 0x40] != 0) &&
                 ((&DAT_005794d9)[iVar24] == (&DAT_005794d9)[iVar22 * 0x100])) {
                iVar17 = (int)(char)(&DAT_005794d9)[iVar24];
                local_c = (char)(&DAT_005794d9)[iVar24] * 0x208;
                iVar22 = FUN_0040c4b0((&DAT_0057958c)[iVar22 * 0x40],(&DAT_00579590)[iVar22 * 0x40],
                                      (&DAT_00575ac8)[iVar17 * 0x82],(&DAT_00575acc)[iVar17 * 0x82])
                ;
                iVar17 = FUN_0040c4b0((&DAT_0057958c)[local_6c * 0x40],
                                      (&DAT_00579590)[local_6c * 0x40],
                                      (&DAT_00575ac8)[iVar17 * 0x82],(&DAT_00575acc)[iVar17 * 0x82])
                ;
                if (iVar17 < iVar22) {
                  iVar22 = FUN_0040bfa0((&DAT_0057958c)
                                        [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40],
                                        (&DAT_00579590)
                                        [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40]);
                  iVar17 = FUN_0040acd0((&DAT_005794b8)[local_6c * 0x40] -
                                        (&DAT_0057958c)
                                        [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40],
                                        (&DAT_005794bc)[local_6c * 0x40] -
                                        (&DAT_00579590)
                                        [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40]);
                  iVar16 = FUN_0040acd0((&DAT_005794b8)[local_6c * 0x40] -
                                        (&DAT_0057958c)[local_6c * 0x40],
                                        (&DAT_005794bc)[local_6c * 0x40] -
                                        (&DAT_00579590)[local_6c * 0x40]);
                  if ((iVar17 < iVar16) || (iVar22 == 1)) {
                    iVar17 = (int)(char)(&DAT_005794d9)[iVar24];
                    local_c = (char)(&DAT_005794d9)[iVar24] * 0x208;
                    local_c = FUN_0040c4b0((&DAT_0057958c)
                                           [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40],
                                           (&DAT_00579590)
                                           [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40],
                                           (&DAT_00575ac8)[iVar17 * 0x82],
                                           (&DAT_00575acc)[iVar17 * 0x82]);
                    iVar17 = FUN_0040c4b0((&DAT_005794b8)[local_6c * 0x40],
                                          (&DAT_005794bc)[local_6c * 0x40],
                                          (&DAT_00575ac8)[iVar17 * 0x82],
                                          (&DAT_00575acc)[iVar17 * 0x82]);
                    if (local_c < iVar17) {
                      local_58 = 1;
                    }
                  }
                  if ((((char)(&DAT_00578372)[local_68 * 0x30] < '\x01') &&
                      ('\0' < (char)(&DAT_00578372)[iVar22 * 0x30])) ||
                     (((&DAT_005794c8)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] & 0x40000) !=
                      0)) {
                    local_58 = 0;
                  }
                  if (local_68 != 1) {
                    iVar22 = FUN_0040acd0((&DAT_0057958c)[local_6c * 0x40] -
                                          (&DAT_0057958c)
                                          [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40],
                                          (&DAT_00579590)[local_6c * 0x40] -
                                          (&DAT_00579590)
                                          [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40]);
                    if (iVar22 < 0x600) {
                      local_58 = 1;
                    }
                    iVar22 = FUN_0040acd0((&DAT_0057958c)[local_6c * 0x40] -
                                          (&DAT_005794b8)
                                          [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40],
                                          (&DAT_00579590)[local_6c * 0x40] -
                                          (&DAT_005794bc)
                                          [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40]);
                    if (iVar22 < 0x200) {
                      local_58 = 1;
                    }
                  }
                }
              }
            }
            if (((&DAT_005794c8)[local_6c * 0x40] & 0x4000) != 0) {
              local_58 = 0;
            }
            if ((&DAT_0057958c)[local_6c * 0x40] == 0) {
              local_58 = local_6c & 1;
            }
            if (((local_68 == 1) ||
                (iVar22 = (int)(short)(&DAT_0057955a)[local_6c * 0x80],
                (&DAT_005794d9)[iVar22 * 0x100] == '\0')) ||
               (iVar22 = FUN_0040acd0((&DAT_005794b8)[local_6c * 0x40] -
                                      (&DAT_005794b8)[iVar22 * 0x40],
                                      (&DAT_005794bc)[local_6c * 0x40] -
                                      (&DAT_005794bc)[iVar22 * 0x40]),
               0x9fff < (int)(iVar22 * 0x19 & 0xfffffc00U))) {
LAB_00429eee:
              local_18 = (&DAT_0057958c)[local_6c * 0x40];
              if ((local_18 != 0) && (!bVar33)) {
                local_14 = (&DAT_00579590)[local_6c * 0x40];
                uVar23 = (local_4 >> 0x1c) + 1 >> 1;
                uVar32 = uVar23 & 7;
                if (local_58 == 0) {
                  local_58 = 0;
                  if (local_68 == 1) {
                    uVar23 = (uint)(~(byte)uVar32 & 1 | 2);
                  }
                  else {
                    uVar23 = (-(uint)((uVar23 & 1) != 0) & 0xfffffffe) + 5;
                  }
                  iVar22 = local_18 - (&DAT_004c2878)[uVar32] * uVar23 * 0x40;
                  iVar17 = local_14 - (&DAT_004c2898)[uVar32] * uVar23 * 0x40;
                }
                else {
                  if ((local_68 == 1) &&
                     (iVar22 = FUN_0040bfa0((&DAT_0057958c)
                                            [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40],
                                            (&DAT_00579590)
                                            [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40]),
                     iVar22 == 1)) {
                    iVar17 = (&DAT_00579590)[local_6c * 0x40];
                    iVar22 = (&DAT_0057958c)[local_6c * 0x40] -
                             ((&DAT_004c2878)[uVar32] * 0x400 + 0x200) / 2;
                    iVar16 = ((&DAT_004c2898)[uVar32] * 0x400 + 0x200) / 2;
                  }
                  else {
                    iVar22 = FUN_004672d0(((&DAT_00575ac8)[(char)(&DAT_005794d9)[iVar24] * 0x82] *
                                           0x400 - (&DAT_0057958c)
                                                   [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40])
                                          + 0x200,((&DAT_00575acc)
                                                   [(char)(&DAT_005794d9)[iVar24] * 0x82] * 0x400 -
                                                  (&DAT_00579590)
                                                  [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40])
                                                  + 0x200);
                    uVar23 = ((iVar22 >> 0x1c) + 1 >> 1 & 7U) - (((local_6c & 1) != 0) + 1) & 7;
                    iVar17 = (&DAT_00579590)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40];
                    iVar22 = (&DAT_0057958c)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] +
                             (&DAT_004c2878)[uVar23] * -0x400;
                    iVar16 = (&DAT_004c2898)[uVar23] << 10;
                  }
                  iVar17 = iVar17 - iVar16;
                  iVar16 = FUN_0040bfa0(iVar22,iVar17);
                  if (iVar16 == 0x11) {
                    iVar22 = (&DAT_0057958c)[local_6c * 0x40];
                    iVar17 = (&DAT_00579590)[local_6c * 0x40];
                  }
                }
                goto LAB_0042a818;
              }
              if ((((byte)(&DAT_005794d1)[iVar24] < 5) && ((&DAT_005794d1)[iVar24] != 3)) &&
                 ((&DAT_005794d0)[iVar24] == '\0')) {
                iVar16 = (char)(&DAT_005794d9)[iVar24] * 0x208;
                iVar22 = *(int *)(&DAT_00575ac0 + iVar16);
                iVar17 = *(int *)(&DAT_00575ac4 + iVar16);
              }
              else {
                iVar17 = (int)(char)(&DAT_005794d9)[iVar24];
                iVar16 = iVar17 * 0x208;
                iVar22 = (&DAT_00575ab8)[iVar17 * 0x82];
                iVar17 = (&DAT_00575abc)[iVar17 * 0x82];
              }
              iVar22 = iVar22 * 0x400 + 0x200;
              iVar17 = iVar17 * 0x400 + 0x200;
              local_18 = iVar22;
              local_14 = iVar17;
              iVar16 = FUN_004672d0((*(int *)((int)&DAT_00575ac8 + iVar16) * 0x400 - iVar22) + 0x200
                                    ,(*(int *)((int)&DAT_00575acc + iVar16) * 0x400 - iVar17) +
                                     0x200);
              uVar23 = (iVar16 >> 0x1c) + 1 >> 1;
              uVar32 = uVar23 & 7;
              iVar16 = ((-(uint)((uVar23 & 1) != 0) & 0xfffffffe) + 5) * 0x40;
              iVar22 = iVar22 - (&DAT_004c2878)[uVar32] * iVar16;
              iVar17 = iVar17 - (&DAT_004c2898)[uVar32] * iVar16;
              if (local_44 != 0) {
                uVar23 = (uint)*(byte *)((int)&DAT_00575ab0 +
                                        (char)(&DAT_005794d9)[iVar24] * 0x208 + 1) + (local_6c & 1)
                         & 7;
                iVar22 = iVar22 + (&DAT_004c2878)[uVar23] * -0x400;
                iVar17 = iVar17 + (&DAT_004c2898)[uVar23] * -0x400;
              }
              uVar23 = (&DAT_005794c8)[local_6c * 0x40];
              if ((((int)*(short *)(&DAT_0057955e + iVar24) <
                    (int)((-(uint)((uVar23 & 0x2000) != 0) & 0xfffffffc) + 8 + local_44 * -2)) ||
                  (*(short *)(&DAT_0057955e + iVar24) < 2)) &&
                 (((int)(short)(&DAT_00579560)[local_6c * 0x80] <
                   (int)(((~uVar23 & 0x1000000 | 0x2000000) >> 0x16) + local_44 * -2) ||
                  ((short)(&DAT_00579560)[local_6c * 0x80] < 3)))) {
                (&DAT_005794c8)[local_6c * 0x40] = uVar23 & 0xffffdfff;
LAB_0042a2a3:
                if (((6 - local_44 <= (int)(short)(&DAT_00579562)[local_6c * 0x80] / 0x14) ||
                    (((&DAT_005794c8)[local_6c * 0x40] & 0x1000) != 0)) &&
                   (((&DAT_00579562)[local_6c * 0x80] != 0 && ((&DAT_005794da)[iVar24] == '\0')))) {
                  FUN_0040de70((&DAT_005794b8)[local_6c * 0x40],(&DAT_005794bc)[local_6c * 0x40],
                               (-(((&DAT_005794c8)[local_6c * 0x40] & 0x2000000) != 0) & 2U) + 2);
                  if (DAT_0056a91c != -1) {
                    iVar22 = DAT_0056a91c * 0x400 + 0x200;
                    local_60 = -2;
                    iVar17 = DAT_0056a920 * 0x400 + 0x200;
                    (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 0x2000000;
                    goto LAB_0042a450;
                  }
                  local_60 = -1;
                  (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] & 0xfdffffff;
                }
                local_c = (short)(&DAT_0057955a)[local_6c * 0x80] * 0x100;
                if (((DAT_0056a51c - (short)(&DAT_00579576)[local_6c * 0x80] <
                      DAT_0056a51c -
                      (short)(&DAT_00579576)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x80]) ||
                    ((&DAT_005794da)[local_c] != '\0')) &&
                   (((&DAT_005794c8)[local_6c * 0x40] & 0x4000000) == 0)) {
                  local_60 = FUN_0040ddb0(3,(&DAT_005794b8)[local_6c * 0x40],
                                          (&DAT_005794bc)[local_6c * 0x40]);
                  if (DAT_00568d0c < 0xc00) {
                    iVar22 = (&DAT_0058bcba)[local_60 * 8] * 0x400 + 0x200;
                    iVar17 = (&DAT_0058bcbc)[local_60 * 8] * 0x400 + 0x200;
                    goto LAB_0042a531;
                  }
                  local_60 = -1;
                }
                else {
LAB_0042a531:
                  if (local_60 != -1) goto LAB_0042a450;
                }
                if ((&DAT_005794da)[iVar24] != '\0') goto LAB_0042a450;
                (&DAT_005794d4)[iVar24] = 0;
                if ((((*(byte *)(&DAT_005794c8 + local_6c * 0x40) & 0x10) == 0) &&
                    (((&DAT_005794d1)[iVar24] & 4) != 0)) &&
                   (((&DAT_005794d0)[iVar24] == '\0' && (DAT_00543cb8 != 0)))) {
                  local_60 = FUN_0040ddb0(6,(&DAT_005794b8)[local_6c * 0x40],
                                          (&DAT_005794bc)[local_6c * 0x40]);
                  uVar23 = (&DAT_005794c8)[local_6c * 0x40];
                  if ((int)((uint)(byte)(((byte)uVar23 & 0x40 | 0xa0) >> 5) * 0x400) <= DAT_00568d0c
                     ) {
                    local_60 = -1;
                    (&DAT_005794c8)[local_6c * 0x40] = uVar23 & 0xffffffbf;
                    goto LAB_0042a467;
                  }
                  iVar22 = ((&DAT_0058bcba)[local_60 * 8] + 1 + (local_6c & 1)) * 0x400;
                  iVar17 = ((&DAT_0058bcbc)[local_60 * 8] + 1 + (local_6c & 1)) * 0x400;
                  uVar23 = uVar23 | 0x40;
                  goto LAB_0042a458;
                }
LAB_0042a467:
                if ((&DAT_005794da)[iVar24] != '\0') goto LAB_0042a616;
                if ((((*(byte *)(&DAT_005794c8 + local_6c * 0x40) & 8) == 0) &&
                    (((&DAT_005794d1)[iVar24] & 2) != 0)) &&
                   (((&DAT_005794d0)[iVar24] == '\0' && (DAT_00543cc0 != 0)))) {
                  local_60 = FUN_0040ddb0(8,(&DAT_005794b8)[local_6c * 0x40],
                                          (&DAT_005794bc)[local_6c * 0x40]);
                  uVar23 = (&DAT_005794c8)[local_6c * 0x40];
                  if ((int)(((uVar23 & 0x100 | 0x280) >> 7) * 0x400) <= DAT_00568d0c) {
                    local_60 = -1;
                    (&DAT_005794c8)[local_6c * 0x40] = uVar23 & 0xfffffeff;
                    goto LAB_0042a62e;
                  }
                  iVar22 = ((int)(&DAT_0058bcba)[local_60 * 8] + (local_6c & 1)) * 0x400 + 0x200;
                  iVar17 = ((int)(&DAT_0058bcbc)[local_60 * 8] + (local_6c & 1)) * 0x400 + 0x200;
                  uVar23 = uVar23 | 0x100;
                  goto LAB_0042a61f;
                }
LAB_0042a62e:
                if ((&DAT_005794da)[iVar24] != '\0') goto LAB_0042a6fe;
                if (((((*(byte *)(&DAT_005794c8 + local_6c * 0x40) & 4) == 0) &&
                     (((&DAT_005794d1)[iVar24] & 1) != 0)) && ((&DAT_005794d0)[iVar24] == '\0')) &&
                   (DAT_00543cc8 != 0)) {
                  local_60 = FUN_0040ddb0(10,(&DAT_005794b8)[local_6c * 0x40],
                                          (&DAT_005794bc)[local_6c * 0x40]);
                  uVar23 = (&DAT_005794c8)[local_6c * 0x40];
                  if ((int)(((-(uint)((uVar23 & 0x20) != 0) & 3) + 6) * 0x400) <= DAT_00568d0c) {
                    local_60 = -1;
                    (&DAT_005794c8)[local_6c * 0x40] = uVar23 & 0xffffffdf;
                    goto LAB_0042a715;
                  }
                  iVar22 = ((int)(&DAT_0058bcba)[local_60 * 8] + (local_6c & 1)) * 0x400 + 0xa00;
                  iVar17 = ((int)(&DAT_0058bcbc)[local_60 * 8] + (local_6c & 1)) * 0x400 + 0xa00;
                  (&DAT_005794c8)[local_6c * 0x40] = uVar23 | 0x20;
                  goto LAB_0042a70c;
                }
              }
              else {
                local_60 = FUN_0040ddb0(7,(&DAT_005794b8)[local_6c * 0x40],
                                        (&DAT_005794bc)[local_6c * 0x40]);
                uVar23 = (&DAT_005794c8)[local_6c * 0x40];
                if ((int)((uint)(byte)(((byte)(uVar23 >> 8) & 0x20 | 0x80) >> 4) * 0x400) <=
                    DAT_00568d0c) {
                  (&DAT_005794c8)[local_6c * 0x40] = uVar23 & 0xffffdfff;
                  local_60 = -1;
                  goto LAB_0042a2a3;
                }
                (&DAT_005794c8)[local_6c * 0x40] = uVar23 | 0x2000;
                iVar22 = (&DAT_0058bcba)[local_60 * 8] * 0x400 + 0x200;
                iVar17 = (&DAT_0058bcbc)[local_60 * 8] * 0x400 + 0x200;
                if (local_60 == -1) goto LAB_0042a2a3;
                (&DAT_005794c8)[local_6c * 0x40] = uVar23 & 0xfdffffff | 0x2000;
LAB_0042a450:
                uVar23 = (&DAT_005794c8)[local_6c * 0x40] & 0xffffffbf;
LAB_0042a458:
                (&DAT_005794c8)[local_6c * 0x40] = uVar23;
                if (local_60 == -1) goto LAB_0042a467;
LAB_0042a616:
                uVar23 = (&DAT_005794c8)[local_6c * 0x40] & 0xfffffeff;
LAB_0042a61f:
                (&DAT_005794c8)[local_6c * 0x40] = uVar23;
                if (local_60 == -1) goto LAB_0042a62e;
LAB_0042a6fe:
                (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] & 0xffffffdf;
LAB_0042a70c:
                if (local_60 != -1) goto LAB_0042a818;
              }
LAB_0042a715:
              iVar16 = (int)(short)(&DAT_0057955a)[local_6c * 0x80];
              cVar6 = (&DAT_005794d9)[iVar16 * 0x100];
              if ((((cVar6 != '\0') && (cVar2 = (&DAT_005794d9)[iVar24], cVar6 <= cVar2)) &&
                  ((int)local_6c < iVar16)) &&
                 (((((&DAT_005794c8)[iVar16 * 0x40] & 0x400) == 0 || (cVar6 < cVar2)) ||
                  ((&DAT_005794d5)[iVar16 * 0x100] == '\f')))) {
                bVar34 = false;
                uVar23 = *(byte *)((int)&DAT_00575ab0 + cVar2 * 0x208 + 1) - 1 & 7;
                iVar22 = iVar22 + ((&DAT_004c2878)[uVar23] * -0x400) / 2;
                iVar17 = iVar17 + ((&DAT_004c2898)[uVar23] * -0x400) / 2;
                (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 0x800;
              }
              if (((&DAT_005794d9)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x100] != '\0') &&
                 (bVar33)) {
                bVar34 = false;
                uVar23 = *(byte *)((int)&DAT_00575ab0 + (char)(&DAT_005794d9)[iVar24] * 0x208 + 1) &
                         7;
                iVar22 = iVar22 + ((&DAT_004c2878)[uVar23] * -0x400) / 2;
                iVar17 = iVar17 + ((&DAT_004c2898)[uVar23] * -0x400) / 2;
                (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 0x800;
              }
              goto LAB_0042a818;
            }
            iVar22 = (int)(short)(&DAT_0057955a)[local_6c * 0x80];
            if (((&DAT_00579594)[iVar22 * 0x40] == 0) ||
               ((((((&DAT_005794c8)[iVar22 * 0x40] & 0x40000) == 0 &&
                  (cVar6 = (&DAT_005794d5)[iVar22 * 0x100], '\n' < cVar6)) &&
                 ((cVar6 != '\x10' && ((cVar6 != '\f' && (cVar6 != '\r')))))) ||
                (iVar22 = FUN_004672d0((&DAT_0057958c)[iVar22 * 0x40] -
                                       (&DAT_005794b8)[local_6c * 0x40],
                                       (&DAT_00579590)[iVar22 * 0x40] -
                                       (&DAT_005794bc)[local_6c * 0x40]),
                uVar23 = iVar22 - *(int *)(&DAT_00579598 +
                                          (short)(&DAT_0057955a)[local_6c * 0x80] * 0x100) >> 0x1f,
                0x4aaaaaa9 <
                (int)((iVar22 - *(int *)(&DAT_00579598 +
                                        (short)(&DAT_0057955a)[local_6c * 0x80] * 0x100) ^ uVar23) -
                     uVar23))))) goto LAB_00429eee;
            (&DAT_005794d5)[iVar24] = 0xb;
            (&DAT_005794d2)[iVar24] = (byte)((int)((iVar22 >> 0x1c & 0xfU) + 1) >> 1) & 7;
            sVar9 = FUN_0045c1e0(4);
            (&DAT_00579556)[local_6c * 0x80] = -sVar9;
          }
          else {
            if ((int)(local_6c * 0x23 + DAT_00834170) % 100 == 0) {
              FUN_00467a00(local_6c,0x23,0x14);
              (&DAT_005794d5)[iVar24] = 0xd;
              sVar9 = FUN_0045c1e0(2);
              if (sVar9 == 0) {
                uVar13 = (&DAT_005794c8)[local_6c * 0x40] & 0xfffdffff;
              }
              else {
                uVar13 = (&DAT_005794c8)[local_6c * 0x40] | 0x20000;
              }
              (&DAT_005794c8)[local_6c * 0x40] = uVar13;
              (&DAT_00579556)[local_6c * 0x80] = 0xff9d;
              (&DAT_0057955c)[local_6c * 0x80] = (&DAT_0057955c)[local_6c * 0x80] + -1;
              if ((short)(&DAT_0057955c)[local_6c * 0x80] < -10) {
                (&DAT_005794d9)[iVar24] = 0;
              }
              goto LAB_00429ed2;
            }
            iVar22 = _DAT_00578150 * 0x400 + 0x200;
            iVar17 = _DAT_00578154 * 0x400 + 0x200;
LAB_0042a818:
            if (((&DAT_0057958c)[local_6c * 0x40] != 0) &&
               (iVar16 = FUN_0040bfa0(iVar22,iVar17), iVar16 == 0x11)) {
              iVar22 = (&DAT_0057958c)[local_6c * 0x40];
              iVar17 = (&DAT_00579590)[local_6c * 0x40];
            }
            iVar16 = (&DAT_005794b8)[local_6c * 0x40];
            local_10 = iVar17 - (&DAT_005794bc)[local_6c * 0x40];
            local_c = FUN_0040acd0(iVar22 - iVar16,local_10);
            if ((local_60 == -1) || (iVar19 = 8, (&DAT_0058bcb8)[local_60 * 8] == 1)) {
              iVar19 = 2;
            }
            if (local_c < iVar19 * 0x40) {
              (&DAT_005794d5)[iVar24] = 0xb;
              if ((&DAT_0057958c)[local_6c * 0x40] != 0) {
                iVar20 = FUN_004672d0((&DAT_0057958c)
                                      [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] -
                                      (&DAT_005794b8)[local_6c * 0x40],
                                      (&DAT_00579590)
                                      [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] -
                                      (&DAT_005794bc)[local_6c * 0x40]);
                (&DAT_005794d2)[iVar24] = (byte)((int)((iVar20 >> 0x1c & 0xfU) + 1) >> 1) & 7;
              }
              uVar13 = (&DAT_005794c8)[local_6c * 0x40];
              if ((uVar13 & 0x40000) != 0) goto LAB_0042c661;
              cVar6 = (&DAT_005794d9)[iVar24];
              if (cVar6 == '\x13') {
                (&DAT_005794d9)[iVar24] = 0;
              }
              else if (local_60 == -2) {
                iVar25 = (short)(&DAT_00579562)[local_6c * 0x80] * -8;
                (&DAT_00579556)[local_6c * 0x80] =
                     ((short)(iVar25 / 0x14) + (short)(iVar25 >> 0x1f)) -
                     (short)((longlong)iVar25 * 0x66666667 >> 0x3f);
                (&DAT_005794d5)[iVar24] = 0x11;
                (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] & 0xffffefff;
                FUN_00467a00(local_6c,0x1b,0x14);
                do {
                  uVar11 = FUN_0045c1e0(4);
                  uVar13 = (uint)uVar11;
                  iVar25 = FUN_00407400(iVar18,iVar14,uVar13 * 2);
                  if (iVar25 == 0) {
                    (&DAT_00579562)[local_6c * 0x80] = (&DAT_00579562)[local_6c * 0x80] + -1;
                  }
                  else {
                    iVar25 = (&DAT_004c2898)[uVar13 * 2];
                    (&DAT_005794b8)[local_6c * 0x40] =
                         (&DAT_004c2878)[uVar13 * 2] * 0x1ff + 0x200 + iVar18 * 0x400;
                    (&DAT_005794bc)[local_6c * 0x40] = iVar25 * 0x1ff + 0x200 + iVar14 * 0x400;
                    (&DAT_00579562)[local_6c * 0x80] = 0;
                    (&DAT_005794d2)[iVar24] = (char)(uVar13 * 2);
                  }
                } while ((&DAT_00579562)[local_6c * 0x80] != 0);
                (&DAT_005794d8)[iVar24] = 0;
              }
              else {
                if (local_60 == -1) {
                  iVar18 = (int)(short)(&DAT_0057955a)[local_6c * 0x80];
                  iVar14 = iVar18 * 0x100;
                  cVar2 = (&DAT_005794d9)[iVar14];
                  if (cVar2 != '\0') {
                    if ((((&DAT_0057958c)[local_6c * 0x40] == 0) &&
                        ((&DAT_0057958c)[iVar18 * 0x40] != 0)) && (cVar2 < cVar6)) {
                      (&DAT_005794d5)[iVar24] = 0xb;
                      iVar18 = FUN_004672d0((&DAT_005794b8)
                                            [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] -
                                            (&DAT_005794b8)[local_6c * 0x40],
                                            (&DAT_005794bc)
                                            [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] -
                                            (&DAT_005794bc)[local_6c * 0x40]);
                      (&DAT_005794d2)[iVar24] = (byte)((int)((iVar18 >> 0x1c & 0xfU) + 1) >> 1) & 7;
                      goto LAB_00429ec9;
                    }
                    if ((((cVar2 != '\0') && (cVar6 == cVar2)) &&
                        ((&DAT_0057959c)[local_6c * 0x40] == 0)) &&
                       (((((int)local_6c < iVar18 && ((&DAT_005794da)[iVar14] == '\0')) &&
                         ((uVar13 & 0x4000) == 0)) ||
                        (((iVar18 < (int)local_6c && ((uVar13 & 0x400) != 0)) &&
                         ((&DAT_005794da)[iVar14] == '\0')))))) {
                      (&DAT_005794d5)[iVar24] = 0xb;
                      iVar18 = FUN_004672d0((&DAT_005794b8)
                                            [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] -
                                            (&DAT_005794b8)[local_6c * 0x40],
                                            (&DAT_005794bc)
                                            [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] -
                                            (&DAT_005794bc)[local_6c * 0x40]);
                      (&DAT_005794d2)[iVar24] = (byte)((int)((iVar18 >> 0x1c & 0xfU) + 1) >> 1) & 7;
                      *(undefined2 *)(&DAT_005794cc + iVar24) = 0;
                      sVar9 = FUN_0045c1e0(4);
                      (&DAT_00579556)[local_6c * 0x80] = -4 - sVar9;
                      goto LAB_00429ed2;
                    }
                  }
                  iVar18 = (&DAT_00575acc)[cVar6 * 0x82] * 0x400 + 0x200;
                  if (((cVar2 != cVar6) || ((&DAT_005794da)[iVar14] == '\0')) ||
                     (((&DAT_0057958c)[local_6c * 0x40] == 0 ||
                      (iVar14 = FUN_0040acd0((&DAT_0057958c)[local_6c * 0x40] -
                                             ((&DAT_00575ac8)[cVar6 * 0x82] * 0x400 + 0x200),
                                             (&DAT_00579590)[local_6c * 0x40] - iVar18),
                      (&DAT_00579590)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] - iVar18 <=
                      iVar14)))) {
                    *(undefined4 *)(&DAT_00579584 + iVar24) = 0;
                    if (((!bVar33) && (bVar34)) && (local_44 == 0)) {
                      if ((&DAT_0057958c)[local_6c * 0x40] == 0) {
                        (&DAT_0057958c)[local_6c * 0x40] = local_18;
                        (&DAT_00579590)[local_6c * 0x40] = local_14;
                      }
                      (&DAT_005794d8)[iVar24] = 1;
                    }
                    *(undefined2 *)(&DAT_005794cc + iVar24) = 0;
                    *(undefined4 *)(&DAT_005795a0 + iVar24) = 0;
                    (&DAT_0057959c)[local_6c * 0x40] = 0;
                    (&DAT_00579594)[local_6c * 0x40] = 0;
                    goto LAB_0042bc75;
                  }
                  (&DAT_005794d5)[iVar24] = 0xb;
                  iVar18 = FUN_004672d0((&DAT_005794b8)
                                        [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] -
                                        (&DAT_005794b8)[local_6c * 0x40],
                                        (&DAT_005794bc)
                                        [(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] -
                                        (&DAT_005794bc)[local_6c * 0x40]);
                  (&DAT_005794d2)[iVar24] = (byte)((int)((iVar18 >> 0x1c & 0xfU) + 1) >> 1) & 7;
                  goto LAB_0042c379;
                }
                if ((&DAT_0058bcb8)[local_60 * 8] == 7) {
                  FUN_00467a00(local_6c,0x12,0x14);
                  (&DAT_00579560)[local_6c * 0x80] = 0;
                  *(undefined2 *)(&DAT_0057955e + iVar24) = 0;
                  (&DAT_00579556)[local_6c * 0x80] = 0xffd0;
                  (&DAT_005794d5)[iVar24] = 0xb;
                  FUN_0040c500(0x29,(&DAT_005794b8)[local_6c * 0x40],
                               (&DAT_005794bc)[local_6c * 0x40],0);
                  DAT_00571fd4 = DAT_00571fd4 + 5;
                  FUN_0040c890(5,(&DAT_005794b8)[local_6c * 0x40],(&DAT_005794bc)[local_6c * 0x40],
                               0xffffffff);
                  *(short *)(&DAT_00584214 + ((int)DAT_005a6d3c % 100) * 5) =
                       *(short *)(&DAT_00584214 + ((int)DAT_005a6d3c % 100) * 5) + 5;
                }
                if ((&DAT_0058bcb8)[local_60 * 8] == 3) {
                  sVar9 = FUN_0045c1e0(8);
                  (&DAT_00579556)[local_6c * 0x80] = -0xc - sVar9;
                  (&DAT_005794d5)[iVar24] = 0x13;
                  (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 0x4000000;
                  FUN_00467a00(local_6c,0x29,0x14);
                  sVar9 = (&DAT_0058bcba)[local_60 * 8];
                  sVar10 = (&DAT_0058bcbc)[local_60 * 8];
                  (&DAT_0057953c)[iVar24] = (&DAT_0057953c)[iVar24] + '\x03';
                  iVar18 = (int)sVar10 + sVar9 * 0x32;
                  pbVar1 = (byte *)((int)&DAT_0053caf0 + iVar18 * 2 + 1);
                  *pbVar1 = *pbVar1 | 0x40;
                  (&DAT_00578804)[iVar18] = 0;
                }
                if ((&DAT_0058bcb8)[local_60 * 8] == 6) {
                  sVar9 = FUN_0045c1e0(9);
                  iVar18 = DAT_005a8c50;
                  (&DAT_00579556)[local_6c * 0x80] = -0x10 - sVar9;
                  (&DAT_005794d4)[iVar24] = 0xd;
                  (&DAT_005794d5)[iVar24] = 0;
                  (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 0x10;
                  uVar13 = ((((iVar18 < 2) - 1 & 4) + 4) * 100) / 100;
                  DAT_00571fd4 = DAT_00571fd4 + uVar13;
                  FUN_0040c890(uVar13,(&DAT_005794b8)[local_6c * 0x40],
                               (&DAT_005794bc)[local_6c * 0x40],0xffffffff);
                  *(short *)(&DAT_00584214 + ((int)DAT_005a6d3c % 100) * 5) =
                       *(short *)(&DAT_00584214 + ((int)DAT_005a6d3c % 100) * 5) + (short)uVar13;
                  FUN_00467a00(local_6c,0x35,0x14);
                }
                if ((&DAT_0058bcb8)[local_60 * 8] == 8) {
                  sVar9 = FUN_0045c1e0(9);
                  (&DAT_00579556)[local_6c * 0x80] = -0x10 - sVar9;
                  (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 8;
                  FUN_00467a00(local_6c,0x34,0x14);
                  uVar13 = ((((DAT_005a8c58 < 2) - 1 & 4) + 6) * 100) / 100;
                  DAT_00571fd4 = DAT_00571fd4 + uVar13;
                  FUN_0040c890(uVar13,(&DAT_005794b8)[local_6c * 0x40],
                               (&DAT_005794bc)[local_6c * 0x40],0xffffffff);
                  *(short *)(&DAT_00584214 + ((int)DAT_005a6d3c % 100) * 5) =
                       *(short *)(&DAT_00584214 + ((int)DAT_005a6d3c % 100) * 5) + (short)uVar13;
                }
                if ((&DAT_0058bcb8)[local_60 * 8] == 10) {
                  sVar9 = FUN_0045c1e0(9);
                  (&DAT_00579556)[local_6c * 0x80] = -0x10 - sVar9;
                  (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 4;
                  FUN_00467a00(local_6c,0x33,0x14);
                  uVar13 = ((((DAT_005a8c60 < 2) - 1 & 4) + 8) * 100) / 100;
                  DAT_00571fd4 = DAT_00571fd4 + uVar13;
                  FUN_0040c890(uVar13,(&DAT_005794b8)[local_6c * 0x40],
                               (&DAT_005794bc)[local_6c * 0x40],0xffffffff);
                  *(short *)(&DAT_00584214 + ((int)DAT_005a6d3c % 100) * 5) =
                       *(short *)(&DAT_00584214 + ((int)DAT_005a6d3c % 100) * 5) + (short)uVar13;
                }
              }
              goto LAB_00429ed2;
            }
            bVar3 = (&DAT_005794d2)[iVar24];
            if (local_c < 0x400) {
              uVar8 = FUN_004671a0((iVar22 - iVar16) + local_c / 2,local_10 + local_c / 2);
              (&DAT_005794d2)[iVar24] = uVar8;
              *(undefined2 *)(&DAT_005794cc + iVar24) = 0;
            }
            else if (*(short *)(&DAT_005794cc + iVar24) < 1) {
              if ((((*(char *)((int)&DAT_005722e8 + iVar20) == '\x11') &&
                   (uVar11 = (&DAT_0053caf0)[iVar20], (uVar11 & 0x20) != 0)) &&
                  ((uVar11 & 0x100) != 0)) && (((&DAT_0057953d)[iVar24] & 0x7f) != 7)) {
                FUN_00467a00(local_6c,7,0);
                bVar7 = FUN_0045c1e0(5);
                (&DAT_00579574)[iVar24] =
                     ~('\x01' << (bVar7 & 0x1f)) & (&DAT_00579574)[iVar24] |
                     '\x01' << ((byte)uVar11 & 7);
              }
              _DAT_0059e7b8 = _DAT_0059e7b8 & 0xfff7ffff;
              bVar7 = FUN_0042e7e0(iVar22,iVar17,(&DAT_005794b8)[local_6c * 0x40],
                                   (&DAT_005794bc)[local_6c * 0x40],local_6c);
              _DAT_0059e7b8 = _DAT_0059e7b8 & 0xffffefff;
              (&DAT_005794d2)[iVar24] = bVar7;
              if ((iVar15 != 0) && (bVar7 == (bVar3 ^ 4))) {
                (&DAT_005794d2)[iVar24] = ((-((DAT_00834170 & 0x10) != 0) & 2U) - 1) + bVar7 & 7;
              }
              uVar5 = (ushort)((int)(&DAT_005794b8)[local_6c * 0x40] >> 6) & 0xf;
              uVar11 = (ushort)((int)(&DAT_005794bc)[local_6c * 0x40] >> 6) & 0xf;
              if ((&DAT_004c2878)[(char)(&DAT_005794d2)[iVar24]] == 0) {
                if ((&DAT_004c2898)[(char)(&DAT_005794d2)[iVar24]] == 1) {
                  sVar9 = 0x18 - uVar11;
                }
                else {
                  sVar9 = uVar11 + 8;
                }
                *(short *)(&DAT_005794cc + iVar24) = sVar9;
              }
              else if ((&DAT_004c2878)[(char)(&DAT_005794d2)[iVar24]] == 1) {
                *(ushort *)(&DAT_005794cc + iVar24) = 0x18 - uVar5;
              }
              else {
                *(ushort *)(&DAT_005794cc + iVar24) = uVar5 + 8;
              }
              if ((((&DAT_005794d2)[iVar24] & 1) != 0) &&
                 (0x10 < *(short *)(&DAT_005794cc + iVar24))) {
                *(undefined2 *)(&DAT_005794cc + iVar24) = 0x10;
              }
              uVar23 = _DAT_0059e7b8;
              *(short *)(&DAT_005794cc + iVar24) = *(short *)(&DAT_005794cc + iVar24) + -1;
              if ((uVar23 & 0x80000) != 0) {
                *(undefined2 *)(&DAT_005794cc + iVar24) = 3;
              }
              bVar34 = DAT_00822c88 == 0;
              *(short *)(&DAT_005794cc + iVar24) = *(short *)(&DAT_005794cc + iVar24) << 6;
              if ((((((bVar34) || ('\x01' < (char)(&DAT_005794da)[iVar24])) ||
                    ((&DAT_005794d9)[iVar24] == '\x13')) ||
                   (('\0' < (char)(&DAT_00578372)[local_68 * 0x30] ||
                    (((&DAT_005794da)[iVar24] != '\0' &&
                     (((&DAT_005794c8)[local_6c * 0x40] & 0x800) != 0)))))) ||
                  ((*(byte *)(&DAT_0053caf0 + iVar20) & 0x20) != 0)) ||
                 ((iVar15 == 0x16 || ((char)(&DAT_00578372)[iVar15 * 0x30] < '\x02')))) {
LAB_0042b533:
                uVar23 = (&DAT_005794c8)[local_6c * 0x40] & 0xbfffffff;
LAB_0042b53e:
                (&DAT_005794c8)[local_6c * 0x40] = uVar23;
              }
              else if ((((&DAT_005794d2)[iVar24] & 1) == 0) && (iVar15 != 7)) {
                if ((((&DAT_005794c8)[local_6c * 0x40] & 0x40000000) != 0) &&
                   ((&DAT_0057953d)[iVar24] != '\n')) {
                  FUN_00467a00(local_6c,10,iVar15);
                  goto LAB_0042b533;
                }
                uVar23 = (&DAT_005794c8)[local_6c * 0x40] | 0x40000000;
                goto LAB_0042b53e;
              }
              if (((((&DAT_005794d9)[iVar24] != '\x13') &&
                   (((&DAT_005794c8)[local_6c * 0x40] & 0x10000) == 0)) &&
                  ((&DAT_0057953d)[iVar24] != '+')) &&
                 ((((&DAT_005794d2)[iVar24] & 1) == 0 &&
                  (iVar16 = FUN_0040c450((&DAT_005794b8)[local_6c * 0x40],
                                         (&DAT_005794bc)[local_6c * 0x40],
                                         (int)(char)(&DAT_005794d2)[iVar24]), 2 < iVar16)))) {
                uVar35 = FUN_0040c450((&DAT_005794b8)[local_6c * 0x40],
                                      (&DAT_005794bc)[local_6c * 0x40],
                                      (int)(char)(&DAT_005794d2)[iVar24]);
                FUN_00467a00(local_6c,0x2b,uVar35);
              }
            }
            if ((iVar15 != 0) && ((&DAT_005794d2)[iVar24] == (bVar3 ^ 4))) {
              sVar9 = FUN_0045c1e0(4);
              (&DAT_00579556)[local_6c * 0x80] = -8 - sVar9;
              (&DAT_005794d5)[iVar24] = 0xb;
            }
            local_60 = DAT_005a5a24;
            local_38 = 0;
            bVar34 = false;
            if (((&DAT_005794c8)[local_6c * 0x40] & 0x21002000) == 0) {
              do {
                local_60 = (int)(local_60 + 1) % 0x98;
                iVar16 = local_60 * 0x100;
                if (((((&DAT_005794c8)[local_60 * 0x40] & 0x20000000) == 0) ||
                    ((&DAT_005794d9)[iVar16] == '\0')) || (local_6c == local_60)) {
                  cVar6 = (&DAT_005794d9)[iVar16];
                  if ('\0' < cVar6) {
                    if (local_60 == local_6c) break;
                    if (((cVar6 <= (char)(&DAT_005794d9)[iVar24]) &&
                        (DAT_0056a51c - (short)(&DAT_00579576)[local_6c * 0x80] <=
                         DAT_0056a51c - (short)(&DAT_00579576)[local_60 * 0x80])) &&
                       ((uVar23 = (uint)(short)(&DAT_0057955a)[local_6c * 0x80], local_60 != uVar23
                        || ((((&DAT_005794d2)[iVar24] == (&DAT_005794d2)[uVar23 * 0x100] &&
                             ((&DAT_005794d5)[uVar23 * 0x100] != '\v')) &&
                            ((local_60 != uVar23 || (local_58 != 0)))))))) {
                      if ((cVar6 == (&DAT_005794d9)[iVar24]) && ((&DAT_005794da)[iVar16] == '\0')) {
                        local_38 = local_38 + 1;
                      }
                      goto LAB_0042b13a;
                    }
                  }
                }
                else {
LAB_0042b13a:
                  local_10 = (&DAT_005794bc)[local_60 * 0x40] - (&DAT_005794bc)[local_6c * 0x40];
                  iVar19 = (&DAT_005794b8)[local_60 * 0x40] - (&DAT_005794b8)[local_6c * 0x40];
                  iVar16 = FUN_0040acd0(iVar19,local_10);
                  if (iVar16 < (int)((((-(uint)(((&DAT_005794c8)[local_60 * 0x40] & 0x20000000) != 0
                                               ) & 3) + 1) * 0x400) / 2)) {
                    uVar23 = FUN_004671a0(iVar19,local_10);
                    uVar32 = (uint)(char)(&DAT_005794d2)[iVar24];
                    if ((((uVar32 == uVar23) ||
                         (local_60 == (int)(short)(&DAT_0057955a)[local_6c * 0x80])) ||
                        (uVar32 == (uVar23 + 1 & 7))) || (uVar32 == (uVar23 - 1 & 7))) {
                      sVar9 = FUN_0045c1e0(4);
                      bVar34 = true;
                      (&DAT_00579556)[local_6c * 0x80] = -4 - sVar9;
                      (&DAT_005794d5)[iVar24] = 0xb;
                    }
                    if (((&DAT_00579528)[iVar24] != '$') &&
                       (((&DAT_005794c8)[local_60 * 0x40] & 0x20000000) != 0)) {
                      uVar35 = FUN_0046c940(local_60);
                      FUN_00467a00(local_6c,0x24,uVar35);
                      sVar9 = FUN_0045c1e0(4);
                      (&DAT_00579556)[local_6c * 0x80] = -4 - sVar9;
                      (&DAT_005794d5)[iVar24] = 0xb;
                      uVar8 = FUN_004671a0(iVar19,local_10);
                      (&DAT_005794d2)[iVar24] = uVar8;
                      bVar34 = true;
                    }
                  }
                }
              } while (local_60 != local_6c);
              if (((bVar34) && ((&DAT_005794da)[iVar24] == '\0')) &&
                 ((3 < local_38 &&
                  (uVar23 = (&DAT_005794c8)[local_6c * 0x40], (uVar23 & 0x6000) == 0)))) {
                if ((uVar23 & 0x1000) == 0) {
                  (&DAT_005794c8)[local_6c * 0x40] = uVar23 | 0x1000;
                }
                else {
                  FUN_00467a00(local_6c,0x15,0x14);
                  (&DAT_00579562)[local_6c * 0x80] = (&DAT_00579562)[local_6c * 0x80] + 1;
                }
                sVar9 = FUN_0045c1e0(0x40);
                bVar34 = DAT_00822c88 == 0;
                (&DAT_00579556)[local_6c * 0x80] = -0x20 - sVar9;
                if (bVar34) {
                  sVar9 = FUN_0045c1e0(0x1c);
                  (&DAT_00579556)[local_6c * 0x80] = -100 - sVar9;
                  (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 0x4000;
                }
                (&DAT_005794d5)[iVar24] = 0xb;
                if (((short)(&DAT_0057955c)[local_6c * 0x80] < 0) &&
                   (((&DAT_005794d0)[iVar24] & 0xe0) != 0x20)) {
                  DAT_0051a068._0_1_ = 0;
                  FUN_004676e0(local_6c,0);
                  uVar13 = 0xffffffff;
                  pcVar26 = &DAT_004c6af4;
                  do {
                    pcVar31 = pcVar26;
                    if (uVar13 == 0) break;
                    uVar13 = uVar13 - 1;
                    pcVar31 = pcVar26 + 1;
                    cVar6 = *pcVar26;
                    pcVar26 = pcVar31;
                  } while (cVar6 != '\0');
                  uVar13 = ~uVar13;
                  iVar18 = -1;
                  pcVar26 = (char *)&DAT_0051a068;
                  do {
                    pcVar30 = pcVar26;
                    if (iVar18 == 0) break;
                    iVar18 = iVar18 + -1;
                    pcVar30 = pcVar26 + 1;
                    cVar6 = *pcVar26;
                    pcVar26 = pcVar30;
                  } while (cVar6 != '\0');
                  pcVar26 = pcVar31 + -uVar13;
                  pcVar31 = pcVar30 + -1;
                  for (uVar23 = uVar13 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
                    *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                    pcVar26 = pcVar26 + 4;
                    pcVar31 = pcVar31 + 4;
                  }
                  sVar9 = (&DAT_0057955a)[local_6c * 0x80];
                  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                    *pcVar31 = *pcVar26;
                    pcVar26 = pcVar26 + 1;
                    pcVar31 = pcVar31 + 1;
                  }
                  FUN_004676e0((int)sVar9,0);
                  uVar13 = 0xffffffff;
                  pcVar26 = s_are_leaving_the_course_at_hole_004c74b4;
                  do {
                    pcVar31 = pcVar26;
                    if (uVar13 == 0) break;
                    uVar13 = uVar13 - 1;
                    pcVar31 = pcVar26 + 1;
                    cVar6 = *pcVar26;
                    pcVar26 = pcVar31;
                  } while (cVar6 != '\0');
                  uVar13 = ~uVar13;
                  iVar18 = -1;
                  pcVar26 = (char *)&DAT_0051a068;
                  do {
                    pcVar30 = pcVar26;
                    if (iVar18 == 0) break;
                    iVar18 = iVar18 + -1;
                    pcVar30 = pcVar26 + 1;
                    cVar6 = *pcVar26;
                    pcVar26 = pcVar30;
                  } while (cVar6 != '\0');
                  pcVar26 = pcVar31 + -uVar13;
                  pcVar31 = pcVar30 + -1;
                  for (uVar23 = uVar13 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
                    *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                    pcVar26 = pcVar26 + 4;
                    pcVar31 = pcVar31 + 4;
                  }
                  cVar6 = (&DAT_005794d9)[iVar24];
                  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                    *pcVar31 = *pcVar26;
                    pcVar26 = pcVar26 + 1;
                    pcVar31 = pcVar31 + 1;
                  }
                  pcVar26 = (char *)FUN_004ad425((int)cVar6,&DAT_0058a528,10);
                  uVar13 = 0xffffffff;
                  do {
                    pcVar31 = pcVar26;
                    if (uVar13 == 0) break;
                    uVar13 = uVar13 - 1;
                    pcVar31 = pcVar26 + 1;
                    cVar6 = *pcVar26;
                    pcVar26 = pcVar31;
                  } while (cVar6 != '\0');
                  uVar13 = ~uVar13;
                  iVar18 = -1;
                  pcVar26 = (char *)&DAT_0051a068;
                  do {
                    pcVar30 = pcVar26;
                    if (iVar18 == 0) break;
                    iVar18 = iVar18 + -1;
                    pcVar30 = pcVar26 + 1;
                    cVar6 = *pcVar26;
                    pcVar26 = pcVar30;
                  } while (cVar6 != '\0');
                  pcVar26 = pcVar31 + -uVar13;
                  pcVar31 = pcVar30 + -1;
                  for (uVar23 = uVar13 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
                    *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                    pcVar26 = pcVar26 + 4;
                    pcVar31 = pcVar31 + 4;
                  }
                  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                    *pcVar31 = *pcVar26;
                    pcVar26 = pcVar26 + 1;
                    pcVar31 = pcVar31 + 1;
                  }
                  uVar13 = 0xffffffff;
                  pcVar26 = s____Arghh__I_am_so_tired_of_waiti_004c747c;
                  do {
                    pcVar31 = pcVar26;
                    if (uVar13 == 0) break;
                    uVar13 = uVar13 - 1;
                    pcVar31 = pcVar26 + 1;
                    cVar6 = *pcVar26;
                    pcVar26 = pcVar31;
                  } while (cVar6 != '\0');
                  uVar13 = ~uVar13;
                  iVar18 = -1;
                  pcVar26 = (char *)&DAT_0051a068;
                  do {
                    pcVar30 = pcVar26;
                    if (iVar18 == 0) break;
                    iVar18 = iVar18 + -1;
                    pcVar30 = pcVar26 + 1;
                    cVar6 = *pcVar26;
                    pcVar26 = pcVar30;
                  } while (cVar6 != '\0');
                  pcVar26 = pcVar31 + -uVar13;
                  pcVar31 = pcVar30 + -1;
                  for (uVar23 = uVar13 >> 2; uVar23 != 0; uVar23 = uVar23 - 1) {
                    *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                    pcVar26 = pcVar26 + 4;
                    pcVar31 = pcVar31 + 4;
                  }
                  DAT_00569498 = '\0';
                  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                    *pcVar31 = *pcVar26;
                    pcVar26 = pcVar26 + 1;
                    pcVar31 = pcVar31 + 1;
                  }
                  FUN_0040cb00(0x80000000,0,local_6c);
                  FUN_004481b0(0x29,100,0,0,0);
                  cVar6 = (&DAT_005794d9)[iVar24];
                  (&DAT_00579556)[local_6c * 0x80] = 0;
                  *(short *)(&DAT_00575c0a + cVar6 * 0x208) =
                       *(short *)(&DAT_00575c0a + cVar6 * 0x208) + 1;
                  iVar18 = (short)(&DAT_0057956e)[local_6c * 0x80] * 0x2c;
                  *(byte *)((char)(&DAT_005794d9)[iVar24] + 0x5849e3 + iVar18) =
                       *(byte *)((char)(&DAT_005794d9)[iVar24] + 0x5849e3 + iVar18) | 4;
                  (&DAT_00584a09)[iVar18] = 0xff;
                  (&DAT_0057958c)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] = 0;
                  (&DAT_005794b8)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x40] = 0;
                  FUN_004266b0((int)(short)(&DAT_0057955a)[local_6c * 0x80]);
                  (&DAT_005794d9)[iVar24] = 0x13;
                  (&DAT_005794c8)[local_6c * 0x40] =
                       (&DAT_005794c8)[local_6c * 0x40] & 0xfffeffff | 0x20000000;
                  (&DAT_00579562)[local_6c * 0x80] = 0;
                  (&DAT_005794ee)[iVar24] = 0xfd;
                  goto LAB_00429ed2;
                }
              }
            }
            if ((-1 < (short)(&DAT_00579556)[local_6c * 0x80]) && ((&DAT_005794d2)[iVar24] != -1)) {
              local_10 = iVar15 * 0x30;
              local_44 = FUN_00467130(6 - (char)(&DAT_00578375)[local_10],3,
                                      (((short)(&DAT_00579562)[local_6c * 0x80] < 0xa0) - 1 &
                                      0xfffffffe) + 5);
              if ((local_6c == DAT_005a59f8) ||
                 ((((int)(short)(&DAT_0057955a)[local_6c * 0x80] == DAT_005a59f8 ||
                   (((&DAT_005794c8)[local_6c * 0x40] & 0x4000) != 0)) ||
                  ((_DAT_0059e7b8 & 0x200000) != 0)))) {
                local_44 = local_44 + 1;
              }
              if (((*(byte *)(&DAT_0053caf0 + iVar20) & 0x20) != 0) || ((uVar13 & 0x8000) != 0)) {
                if (((*(byte *)(&DAT_0053caf0 +
                               (&DAT_004c2898)[(char)(&DAT_005794d2)[iVar24]] +
                               ((&DAT_004c2878)[(char)(&DAT_005794d2)[iVar24]] + iVar18) * 0x32 +
                               iVar14) & 0x20) != 0) ||
                   ((*(byte *)(&DAT_0053caf0 +
                              ((iVar18 - (&DAT_004c2878)[(char)(&DAT_005794d2)[iVar24]]) * 0x32 -
                              (&DAT_004c2898)[(char)(&DAT_005794d2)[iVar24]]) + iVar14) & 0x20) != 0
                   )) {
                  local_44 = 6;
                  if (((&DAT_005794c8)[local_6c * 0x40] & 0x10000) != 0) {
                    if (((&DAT_005794da)[iVar24] == '\0') && ((uVar13 & 0x8000) != 0)) {
                      cVar6 = -1;
                    }
                    else {
                      cVar6 = '\0';
                    }
                    if (cVar6 < (char)(&DAT_00578372)[local_10]) {
                      (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 0x8000;
                    }
                  }
                }
              }
              if (((int)DAT_00834170 >> 4 & 3U) == (local_6c & 3)) {
                local_44 = local_44 + 1;
              }
              if (((((&DAT_005794c8)[local_6c * 0x40] & 0x10000) != 0) &&
                  ((char)(&DAT_005794da)[iVar24] < '\x02')) &&
                 ((char)(&DAT_005794da)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x100] < '\x02'))
              {
                (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 0x8000;
              }
              if (((iVar15 == 1) || (iVar15 == 0)) || (local_c < 0x400)) {
                (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] & 0xffff7fff;
              }
              if (((&DAT_005794c8)[local_6c * 0x40] & 0x8000) != 0) {
                local_44 = DAT_00543ccc * 4 + 8;
                if (0x28 < (short)(&DAT_00579562)[local_6c * 0x80]) {
                  (&DAT_00579562)[local_6c * 0x80] = 0x28;
                }
                if ((((&DAT_005794c8)[local_6c * 0x40] & 0x8000) != 0) && ((uVar13 & 0x8000) == 0))
                {
                  FUN_0040c500(0x31,(&DAT_005794b8)[local_6c * 0x40],
                               (&DAT_005794bc)[local_6c * 0x40],0);
                }
              }
              if ((_DAT_0059e7b8 & 0x20000) != 0) {
                iVar18 = (int)((ulonglong)((longlong)local_44 * 0x55555555) >> 0x20) - local_44;
                local_44 = local_44 + ((iVar18 >> 1) - (iVar18 >> 0x1f));
              }
              iVar18 = FUN_00467130(local_44,0,
                                    (int)(local_c * 7 + (local_c * 7 >> 0x1f & 0x7fU)) >> 7);
              if (DAT_00822c88 == 0) {
                iVar14 = (-(uint)(((&DAT_005794d2)[iVar24] & 1) != 0) & 3) + 7;
              }
              else {
                iVar14 = (-(uint)(((&DAT_005794d2)[iVar24] & 1) != 0) & 3) + 5;
              }
              iVar14 = (int)(((DAT_0059b04c != 0) + 1) * 0x40 * iVar18) / iVar14;
              if (iVar14 < 0x1e) {
                uVar13 = (&DAT_005794c8)[local_6c * 0x40] | 0x80000;
              }
              else {
                uVar13 = (&DAT_005794c8)[local_6c * 0x40] & 0xfff7ffff;
              }
              (&DAT_005794c8)[local_6c * 0x40] = uVar13;
              (&DAT_005794b8)[local_6c * 0x40] =
                   (&DAT_005794b8)[local_6c * 0x40] +
                   (&DAT_004c2878)[(char)(&DAT_005794d2)[iVar24]] * iVar14;
              (&DAT_005794bc)[local_6c * 0x40] =
                   (&DAT_005794bc)[local_6c * 0x40] +
                   (&DAT_004c2898)[(char)(&DAT_005794d2)[iVar24]] * iVar14;
              *(short *)(&DAT_005794cc + iVar24) =
                   *(short *)(&DAT_005794cc + iVar24) - (short)iVar14;
              if ((*(char *)((int)&DAT_005722e8 + iVar20) != '\x11') &&
                 (iVar18 = FUN_0040bfa0((&DAT_005794b8)[local_6c * 0x40],
                                        (&DAT_005794bc)[local_6c * 0x40]), iVar18 == 0x11)) {
                *(undefined2 *)(&DAT_005794cc + iVar24) = 0;
              }
              if (((int)(DAT_00834170 + local_6c * 0xb) % 0x18 == 0) &&
                 ((&DAT_005794d9)[iVar24] != '\x13')) {
                sVar9 = (&DAT_00579562)[local_6c * 0x80];
                if ((*(byte *)(&DAT_0053caf0 + iVar20) & 0x20) == 0) {
                  sVar10 = (short)(char)(&DAT_00578375)[local_10];
                }
                else {
                  sVar10 = 1;
                }
                (&DAT_00579562)[local_6c * 0x80] = (&DAT_00579562)[local_6c * 0x80] + sVar10;
                sVar10 = ((short)((ulonglong)
                                  ((longlong)(int)(char)(&DAT_005794d9)[iVar24] * 0x2aaaaaab) >>
                                 0x20) -
                         (short)((longlong)(int)(char)(&DAT_005794d9)[iVar24] * 0x2aaaaaab >> 0x3f))
                         + (&DAT_00579562)[local_6c * 0x80];
                (&DAT_00579562)[local_6c * 0x80] = sVar10;
                if ((0x9f < sVar10) && ((int)sVar10 / 0x28 != (int)sVar9 / 0x28)) {
                  if (((&DAT_005794d0)[iVar24] & 0xe0) == 0x20) {
                    (&DAT_00579562)[local_6c * 0x80] = 0xa0;
                  }
                  else {
                    FUN_00467a00(local_6c,0x1a,*(short *)(&DAT_00579566 + iVar24) == 3);
                  }
                }
              }
              if ((_DAT_0059e7b8 & 0x10) != 0) {
                (&DAT_005794b8)[local_6c * 0x40] = iVar22;
                (&DAT_005794bc)[local_6c * 0x40] = iVar17;
                *(undefined2 *)(&DAT_005794cc + iVar24) = 0;
              }
              if (((char)(&DAT_005794d5)[iVar24] < '\a') ||
                 (cVar6 = (&DAT_005794d5)[iVar24] + '\x01', (&DAT_005794d5)[iVar24] = cVar6,
                 '\n' < cVar6)) {
                (&DAT_005794d5)[iVar24] = 7;
              }
LAB_0042bc75:
              if ((&DAT_0057959c)[local_6c * 0x40] != 0) {
                if (!bVar33) goto LAB_0042bc8f;
                goto LAB_0042db2b;
              }
              goto LAB_00429ed2;
            }
          }
LAB_00429ec9:
          *(undefined2 *)(&DAT_005794cc + iVar24) = 0;
        }
        else {
LAB_0042bc8f:
          if (((&DAT_0057959c)[local_6c * 0x40] == 0) && (local_8 != 0)) {
LAB_0042db2b:
            sVar9 = FUN_0045c1e0(8);
            (&DAT_00579556)[local_6c * 0x80] = -sVar9;
            (&DAT_005794d8)[iVar24] = 0;
            (&DAT_005794d5)[iVar24] = 0xb;
          }
          else if ((&DAT_0057959c)[local_6c * 0x40] == 0) {
            (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] & 0xffffe7ff;
            iVar18 = (int)(short)(&DAT_0057955a)[local_6c * 0x80];
            if (((&DAT_005794d9)[iVar18 * 0x100] == '\0') ||
               ((int)(7 - (uint)((&DAT_005794da)[iVar24] != '\0')) <=
                (int)(char)(&DAT_005794d5)[iVar18 * 0x100])) {
              if ((((&DAT_005794d0)[iVar24] & 0xe0) == 0x20) ||
                 (iVar18 = FUN_0040acd0((&DAT_0057958c)[local_6c * 0x40] +
                                        (&DAT_00575ac8)[(char)(&DAT_005794d9)[iVar24] * 0x82] *
                                        -0x400 + -0x200,
                                        (&DAT_00579590)[local_6c * 0x40] +
                                        (&DAT_00575acc)[(char)(&DAT_005794d9)[iVar24] * 0x82] *
                                        -0x400 + -0x200), 0xff < iVar18)) {
                if (((((&DAT_005794c8)[local_6c * 0x40] & 0x200) == 0) || (local_68 == 1)) ||
                   (iVar18 = FUN_0040c4b0((&DAT_0057958c)[local_6c * 0x40],
                                          (&DAT_00579590)[local_6c * 0x40],
                                          (&DAT_00575ac8)[(char)(&DAT_005794d9)[iVar24] * 0x82],
                                          (&DAT_00575acc)[(char)(&DAT_005794d9)[iVar24] * 0x82]),
                   iVar18 < 0x19)) {
                  if (DAT_0059b738 == 0) {
                    uVar35 = 0;
                    goto LAB_0042bff0;
                  }
                }
                else {
                  if (*(int *)(&DAT_00579584 + iVar24) == 0) {
                    if ((&DAT_005794c0)[local_6c * 0x40] == -1) {
                      DAT_004c2ba0 = (int)(&DAT_005794b8)[local_6c * 0x40] >> 10;
                      DAT_004c2ba4 = (int)(&DAT_005794bc)[local_6c * 0x40] >> 10;
                    }
                    *(undefined4 *)(&DAT_00579584 + iVar24) = 0xffffffff;
                    DAT_0058f330 = 0;
                    DAT_005a34e4 = 10;
                    if ((((&DAT_005794d9)[iVar24] == '\x01') &&
                        (((&DAT_005794d0)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x100] & 0xe0)
                         == 0x20)) &&
                       (((&DAT_005794da)[iVar24] == '\0' && ((_DAT_0059e7b8 & 0x200000) == 0)))) {
                      FUN_004481b0(0x2a,100,0,0,0);
                      uVar23 = local_6c ^ 1;
                      DAT_0051a068._0_1_ = 0;
                      FUN_004676e0(uVar23,0);
                      uVar13 = 0xffffffff;
                      pcVar26 = &DAT_004c7474;
                      do {
                        pcVar31 = pcVar26;
                        if (uVar13 == 0) break;
                        uVar13 = uVar13 - 1;
                        pcVar31 = pcVar26 + 1;
                        cVar6 = *pcVar26;
                        pcVar26 = pcVar31;
                      } while (cVar6 != '\0');
                      uVar13 = ~uVar13;
                      iVar18 = -1;
                      pcVar26 = (char *)&DAT_0051a068;
                      do {
                        pcVar30 = pcVar26;
                        if (iVar18 == 0) break;
                        iVar18 = iVar18 + -1;
                        pcVar30 = pcVar26 + 1;
                        cVar6 = *pcVar26;
                        pcVar26 = pcVar30;
                      } while (cVar6 != '\0');
                      pcVar26 = pcVar31 + -uVar13;
                      pcVar31 = pcVar30 + -1;
                      for (uVar32 = uVar13 >> 2; uVar32 != 0; uVar32 = uVar32 - 1) {
                        *(undefined4 *)pcVar31 = *(undefined4 *)pcVar26;
                        pcVar26 = pcVar26 + 4;
                        pcVar31 = pcVar31 + 4;
                      }
                      sVar9 = *(short *)(&DAT_005794ce + uVar23 * 0x100);
                      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                        *pcVar31 = *pcVar26;
                        pcVar26 = pcVar26 + 1;
                        pcVar31 = pcVar31 + 1;
                      }
                      FUN_0045f0f0(&DAT_0051a068,(int)sVar9,0xffffffff,uVar23,0);
                      DAT_0051a068._0_1_ = 0;
                      FUN_004676e0(local_6c,0);
                      FUN_0045f0f0(&DAT_0051a068,(int)*(short *)(&DAT_005794ce + iVar24),0xffffffff,
                                   local_6c,0x15e);
                      FUN_00480c80(0);
                      FUN_0045c0c0(0);
                    }
                  }
                  if (*(int *)(&DAT_00579584 + iVar24) == -1) {
                    DAT_00567afc = 3;
                    DAT_005a59f8 = local_6c;
                    DAT_00561254 = 0;
                    (&DAT_005794d5)[iVar24] = 0xb;
                  }
                  else {
                    uVar35 = 1;
LAB_0042bff0:
                    FUN_00424120(local_6c,uVar35,0xffffffff,0,0);
                    (&DAT_005794d2)[iVar24] =
                         (byte)((int)((*(int *)(&DAT_00579598 + iVar24) >> 0x1c & 0xfU) + 1) >> 1) &
                         7;
                    if (local_68 == 1) {
                      iVar18 = (int)(char)(&DAT_00579572)[iVar24] +
                               ((byte)(&DAT_005794d1)[iVar24] & 7) * 4;
                      *(int *)(&DAT_0056ae7c + iVar18 * 0xb8) =
                           *(int *)(&DAT_0056ae7c + iVar18 * 0xb8) + 1;
                      *(short *)(&DAT_00575c12 + (char)(&DAT_005794d9)[iVar24] * 0x208) =
                           *(short *)(&DAT_00575c12 + (char)(&DAT_005794d9)[iVar24] * 0x208) + 1;
                      if ((*(byte *)(&DAT_0053caf0 + iVar27 + iVar25 * 0x32) & 0x80) == 0) {
                        (&DAT_00579556)[local_6c * 0x80] = 0xffe7;
                        (&DAT_005794d6)[iVar24] = 0;
                      }
                    }
                    (&DAT_0057957c)[local_6c * 0x40] = (&DAT_0057958c)[local_6c * 0x40];
                    (&DAT_00579580)[local_6c * 0x40] = (&DAT_00579590)[local_6c * 0x40];
                    if ((&DAT_005794d5)[iVar24] != '\x0e') {
                      (&DAT_005794d5)[iVar24] = 0xb;
                    }
                    (&DAT_005794d8)[iVar24] = 1;
                  }
                }
              }
              else {
                (&DAT_005794da)[iVar24] = (&DAT_005794da)[iVar24] + '\x01';
                iVar18 = (int)(char)(&DAT_00579572)[iVar24] +
                         ((byte)(&DAT_005794d1)[iVar24] & 7) * 4;
                *(int *)(&DAT_0056ae7c + iVar18 * 0xb8) =
                     *(int *)(&DAT_0056ae7c + iVar18 * 0xb8) + 1;
                *(short *)(&DAT_00575c12 + (char)(&DAT_005794d9)[iVar24] * 0x208) =
                     *(short *)(&DAT_00575c12 + (char)(&DAT_005794d9)[iVar24] * 0x208) + 1;
                FUN_00427380(local_6c);
              }
            }
            else {
              iVar18 = FUN_004672d0((&DAT_005794b8)[iVar18 * 0x40] -
                                    (&DAT_005794b8)[local_6c * 0x40],
                                    (&DAT_005794bc)[iVar18 * 0x40] -
                                    (&DAT_005794bc)[local_6c * 0x40]);
              (&DAT_005794d2)[iVar24] = (byte)((int)((iVar18 >> 0x1c & 0xfU) + 1) >> 1) & 7;
              (&DAT_005794d5)[iVar24] = 0xb;
              *(undefined2 *)(&DAT_005794cc + iVar24) = 0;
            }
          }
          else {
            cVar6 = (&DAT_005794d8)[iVar24];
            if (cVar6 == '\0') {
LAB_0042c661:
              if ((&DAT_0057959c)[local_6c * 0x40] != 0) {
                if (*(int *)(&DAT_0056962c + local_6c * 4) == 0) {
                  *(uint *)(&DAT_0056962c + local_6c * 4) = DAT_00834170;
                }
                iVar18 = FUN_0042fa30((&DAT_0057958c)[local_6c * 0x40],
                                      (&DAT_00579590)[local_6c * 0x40]);
                uVar13 = FUN_00467270(*(undefined4 *)(&DAT_00579598 + iVar24),
                                      (int)((&DAT_0057959c)[local_6c * 0x40] +
                                           ((int)(&DAT_0057959c)[local_6c * 0x40] >> 0x1f & 0xfU))
                                      >> 4);
                local_8 = uVar13;
                local_c = FUN_004672b0(*(undefined4 *)(&DAT_00579598 + iVar24),
                                       (int)((&DAT_0057959c)[local_6c * 0x40] +
                                            ((int)(&DAT_0057959c)[local_6c * 0x40] >> 0x1f & 0xfU))
                                       >> 4);
                (&DAT_0057958c)[local_6c * 0x40] = (&DAT_0057958c)[local_6c * 0x40] + uVar13;
                (&DAT_00579590)[local_6c * 0x40] = (&DAT_00579590)[local_6c * 0x40] - local_c;
                iVar14 = (&DAT_00579594)[local_6c * 0x40] +
                         ((int)(*(int *)(&DAT_005795a0 + iVar24) +
                               (*(int *)(&DAT_005795a0 + iVar24) >> 0x1f & 0x1fU)) >> 5);
                (&DAT_00579594)[local_6c * 0x40] = iVar14;
                if ((iVar14 != 0) || (*(int *)(&DAT_005795a0 + iVar24) != 0)) {
                  if ((local_4c != -1) &&
                     ((0 < *(int *)(&DAT_005795a0 + iVar24) &&
                      (*(int *)(&DAT_005795a0 + iVar24) < 0x40)))) {
                    FUN_00409950(local_4c);
                  }
                  *(int *)(&DAT_005795a0 + iVar24) = *(int *)(&DAT_005795a0 + iVar24) + -0x40;
                }
                if ((local_4c != -1) && ((DAT_00834170 & 7) == 0)) {
                  FUN_00409950(local_4c);
                }
                iVar14 = (&DAT_0057958c)[local_6c * 0x40];
                iVar20 = (&DAT_00579590)[local_6c * 0x40];
                uVar13 = iVar14 >> 6 & 0xf;
                uVar23 = iVar20 >> 6 & 0xf;
                local_60 = 0;
                if ((uVar13 < 2) && ((char)(&DAT_005722b6)[iVar25 * 0x32 + iVar27] != local_68)) {
                  local_60 = 8;
                }
                if ((uVar23 < 2) && ((char)(&DAT_005722e7)[iVar25 * 0x32 + iVar27] != local_68)) {
                  local_60 = local_60 | 1;
                }
                if ((0xd < uVar13) && ((char)(&DAT_0057231a)[iVar25 * 0x32 + iVar27] != local_68)) {
                  local_60 = local_60 | 2;
                }
                if ((0xd < uVar23) && (*(char *)(iVar27 + 0x5722e9 + iVar25 * 0x32) != local_68)) {
                  local_60 = local_60 | 4;
                }
                uVar32 = (*(int *)(&DAT_00579598 + iVar24) >> 0x1c) + 1 >> 1 & 7;
                if ((int)(&DAT_00579594)[local_6c * 0x40] < 2) {
                  iVar18 = FUN_0040c450(iVar14,iVar20,uVar32,0,99);
                  iVar18 = FUN_00467130((char)(&DAT_00578371)[local_68 * 0x30] - iVar18);
                  iVar14 = FUN_0040c450((&DAT_0057958c)[local_6c * 0x40],
                                        (&DAT_00579590)[local_6c * 0x40],uVar32 + 2 & 7);
                  if ((iVar18 < 2) && (local_60 != 0)) {
                    iVar18 = 2;
                  }
                  if (*(char *)((int)&DAT_005722e8 +
                               ((int)(&DAT_0057957c)[local_6c * 0x40] >> 10) * 0x32 +
                               ((int)(&DAT_00579580)[local_6c * 0x40] >> 10)) == '\x01') {
                    iVar18 = (int)(char)(&DAT_00578371)[local_68 * 0x30];
                    iVar14 = 0;
                  }
                  if ((4 < iVar18) &&
                     (0x80 < (int)(DAT_00834170 - *(int *)(&DAT_0056962c + local_6c * 4)))) {
                    iVar18 = 4;
                  }
                  *(int *)(&DAT_00579598 + iVar24) =
                       *(int *)(&DAT_00579598 + iVar24) - (iVar14 * 0x4000000) / 2;
                  if (iVar18 < 5) {
                    (&DAT_0057959c)[local_6c * 0x40] =
                         (&DAT_0057959c)[local_6c * 0x40] -
                         ((int)(&DAT_0057959c)[local_6c * 0x40] >> ((byte)iVar18 & 0x1f)) / 2;
                  }
                  else if (4 < iVar18) {
                    (&DAT_0057959c)[local_6c * 0x40] =
                         (0x40 - ((int)(&DAT_0057959c)[local_6c * 0x40] >> 5)) / 2 +
                         (&DAT_0057959c)[local_6c * 0x40];
                  }
                  iVar18 = iVar25 * 0x32;
                  if (((*(char *)((int)&DAT_005722e8 + iVar27 + iVar18) == '\x01') &&
                      (uVar21 = DAT_00834170 & 7,
                      *(int *)(&DAT_00579598 + iVar24) =
                           *(int *)(&DAT_00579598 + iVar24) + *(int *)(&DAT_005795a4 + iVar24) / 2,
                      uVar21 == 0)) && (sVar9 = FUN_0045c1e0(8), sVar9 == 0)) {
                    *(int *)(&DAT_005795a4 + iVar24) = -*(int *)(&DAT_005795a4 + iVar24);
                  }
                  if (local_68 == 0x11) {
                    if (local_60 == 0) {
LAB_0042cc30:
                      (&DAT_0057959c)[local_6c * 0x40] = (int)(&DAT_0057959c)[local_6c * 0x40] / 2;
                    }
                  }
                  else if (local_68 == 10) {
                    uVar21 = (int)(8 - uVar13) >> 0x1f;
                    if ((int)((8 - uVar13 ^ uVar21) - uVar21) < 3) {
                      uVar21 = (int)(8 - uVar23) >> 0x1f;
                      bVar4 = (int)((8 - uVar23 ^ uVar21) - uVar21) < 3;
                      if (uVar23 < 8) {
                        bVar4 = (&DAT_005722e7)[iVar27 + iVar18] == '\n' || bVar4;
                      }
                      if ((8 < uVar23) && (*(char *)(iVar18 + 0x5722e9 + iVar27) == '\n')) {
                        bVar4 = true;
                      }
                    }
                    uVar21 = (int)(8 - uVar23) >> 0x1f;
                    if ((int)((8 - uVar23 ^ uVar21) - uVar21) < 3) {
                      if ((uVar13 < 8) && ((&DAT_005722b6)[iVar27 + iVar18] == '\n')) {
                        bVar4 = true;
                      }
                      if ((8 < uVar13) && ((&DAT_0057231a)[iVar27 + iVar18] == '\n')) {
                        bVar4 = true;
                        goto LAB_0042cc30;
                      }
                    }
                    if (bVar4) goto LAB_0042cc30;
                  }
                  iVar14 = FUN_0040bf60(iVar25,iVar27);
                  if ((((iVar14 == 0) && ((*(byte *)(&DAT_0053caf0 + iVar18 + iVar27) & 0x80) != 0))
                      && ((int)(&DAT_0057959c)[local_6c * 0x40] < 0x140)) &&
                     (iVar14 = FUN_0040acd0((&DAT_0057958c)[local_6c * 0x40] + iVar25 * -0x400 +
                                            -0x200,(&DAT_00579590)[local_6c * 0x40] +
                                                   iVar27 * -0x400 + -0x200),
                     iVar14 < (int)((0x400U / (ulonglong)
                                              (longlong)
                                              (int)((-(uint)((&DAT_005794d4)[iVar24] != '\r') & 2) +
                                                   1)) /
                                   (ulonglong)
                                   (longlong)
                                   (int)((-(uint)((_DAT_0059e7b8 & 0x200000) != 0) & 10) + 0x14))))
                  {
                    FUN_0040c500(4,(&DAT_0057958c)[local_6c * 0x40],(&DAT_00579590)[local_6c * 0x40]
                                 ,0);
                    (&DAT_0057958c)[local_6c * 0x40] = iVar25 * 0x400 + 0x200;
                    (&DAT_00579590)[local_6c * 0x40] = iVar27 * 0x400 + 0x200;
                    if (local_4c != -1) {
                      FUN_00409620(local_4c);
                    }
                    (&DAT_005794da)[iVar24] = (&DAT_005794da)[iVar24] + '\x01';
                    FUN_00427380(local_6c);
                    (&DAT_0057959c)[local_6c * 0x40] = 0;
                    (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] & 0xfffbffff
                    ;
                    goto LAB_00429ed2;
                  }
                  if ((iVar25 != (int)(&DAT_0057958c)[local_6c * 0x40] >> 10) &&
                     (((((int)local_8 < 1) - 1 & 0xffffffc4) + 0x40 &
                      (int)(char)(&DAT_005619a0)[iVar27 + iVar18]) != 0)) {
                    FUN_0040c500(6,(&DAT_0057958c)[local_6c * 0x40],(&DAT_00579590)[local_6c * 0x40]
                                 ,0);
                    *(int *)(&DAT_00579598 + iVar24) = -*(int *)(&DAT_00579598 + iVar24);
                  }
                  if ((iVar27 != (int)(&DAT_00579590)[local_6c * 0x40] >> 10) &&
                     ((((local_c < 1) - 1 & 0xfffffff1) + 0x10 &
                      (int)(char)(&DAT_005619a0)[iVar27 + iVar18]) != 0)) {
                    FUN_0040c500(6,(&DAT_0057958c)[local_6c * 0x40],(&DAT_00579590)[local_6c * 0x40]
                                 ,0);
                    *(int *)(&DAT_00579598 + iVar24) =
                         -0x80000000 - *(int *)(&DAT_00579598 + iVar24);
                  }
                }
                else {
                  iVar14 = FUN_0042fa30(iVar14,iVar20);
                  (&DAT_00579594)[local_6c * 0x40] =
                       (&DAT_00579594)[local_6c * 0x40] + (iVar18 - iVar14);
                  (&DAT_0057959c)[local_6c * 0x40] =
                       (&DAT_0057959c)[local_6c * 0x40] -
                       ((int)(&DAT_0057959c)[local_6c * 0x40] >> 4) / 2;
                  *(int *)(&DAT_00579598 + iVar24) =
                       *(int *)(&DAT_00579598 + iVar24) + *(int *)(&DAT_005795a4 + iVar24) / 2;
                  iVar18 = FUN_004070b0(local_68,(&DAT_00579594)[local_6c * 0x40],iVar25,iVar27);
                  if ((iVar18 != 0) && ((*(byte *)(&DAT_005794c8 + local_6c * 0x40) & 2) == 0)) {
                    iVar18 = FUN_0040acd0((&DAT_0057958c)[local_6c * 0x40] + iVar25 * -0x400 +
                                          -0x200,(&DAT_00579590)[local_6c * 0x40] + iVar27 * -0x400
                                                 + -0x200);
                    if (((&DAT_005794d0)[iVar24] != '\0') &&
                       ((*(ushort *)(&DAT_005794ce + iVar24) & 0x200) != 0)) {
                      iVar18 = iVar18 + ((int)((uint)(byte)(&DAT_005795b1)[iVar24] * iVar18 +
                                              ((int)((uint)(byte)(&DAT_005795b1)[iVar24] * iVar18)
                                               >> 0x1f & 3U)) >> 2);
                    }
                    uVar13 = FUN_0045c1e0(0x180);
                    if (iVar18 < (int)(uVar13 & 0xffff)) {
                      uVar13 = FUN_0045c1e0(0x80);
                      *(uint *)(&DAT_00579598 + iVar24) =
                           *(int *)(&DAT_00579598 + iVar24) + ((uVar13 & 0xffff) + 0x40) * 0x1000000
                      ;
                      uVar13 = FUN_0045c1e0((&DAT_0057959c)[local_6c * 0x40]);
                      (&DAT_0057959c)[local_6c * 0x40] =
                           (&DAT_0057959c)[local_6c * 0x40] - (uVar13 & 0xffff);
                      uVar13 = FUN_0045c1e0(3);
                      FUN_0040c500((uVar13 & 0xffff) + 6,(&DAT_0057958c)[local_6c * 0x40],
                                   (&DAT_00579590)[local_6c * 0x40],0);
                      if ((*(byte *)(&DAT_005794c8 + local_6c * 0x40) & 2) == 0) {
                        FUN_00467a00(local_6c,0xc,local_68);
                      }
                      (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 2;
                    }
                  }
                }
                if (((int)(&DAT_00579594)[local_6c * 0x40] < 1) &&
                   (*(int *)(&DAT_005795a0 + iVar24) < 0)) {
                  local_8 = local_68 * 0x30;
                  iVar18 = (int)(char)(&DAT_00578370)[local_8];
                  if ((iVar18 < 2) && (local_60 != 0)) {
                    iVar18 = 2;
                  }
                  if (*(int *)(&DAT_005795a0 + iVar24) < -0x100) {
                    FUN_0040c500((local_68 == 7) + '6',(&DAT_0057958c)[local_6c * 0x40],
                                 (&DAT_00579590)[local_6c * 0x40],0);
                  }
                  iVar18 = FUN_00467130(-0x40 - (*(int *)(&DAT_005795a0 + iVar24) * iVar18) / 0xc,0,
                                        9999);
                  *(int *)(&DAT_005795a0 + iVar24) = iVar18;
                  if (iVar18 < 0x80) {
                    *(undefined4 *)(&DAT_005795a0 + iVar24) = 0;
                  }
                  (&DAT_00579594)[local_6c * 0x40] = 0;
                  if (((local_68 == 1) && (*(int *)(&DAT_005795a0 + iVar24) < -0xc0)) &&
                     ((*(byte *)((int)&DAT_0056988c + iVar25 * 0x32 + iVar27) & 0x80) != 0)) {
                    sVar9 = FUN_0045c1e0(2);
                    *(uint *)(&DAT_00579598 + iVar24) =
                         *(int *)(&DAT_00579598 + iVar24) +
                         (-(uint)(sVar9 != 0) & 0x15555554) + 0xf5555556;
                  }
                  if (local_4c != -1) {
                    FUN_00409950(local_4c);
                  }
                  if (((&DAT_005794c8)[local_6c * 0x40] & 0x100) != 0) {
                    *(uint *)(&DAT_00579598 + iVar24) =
                         *(uint *)(&DAT_00579598 + iVar24) ^ 0x80000000;
                    (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] & 0xfffffeff
                    ;
                  }
                  if ((*(byte *)(&DAT_005794c8 + local_6c * 0x40) & 0x80) != 0) {
                    (&DAT_0057959c)[local_6c * 0x40] = (int)(&DAT_0057959c)[local_6c * 0x40] / 2;
                    (&DAT_005794c8)[local_6c * 0x40] =
                         (&DAT_005794c8)[local_6c * 0x40] & 0xffffff7f | 0x100;
                  }
                  iVar18 = *(int *)(&DAT_005795a0 + iVar24);
                  iVar25 = FUN_0040c450((&DAT_0057958c)[local_6c * 0x40],
                                        (&DAT_00579590)[local_6c * 0x40],
                                        ((*(int *)(&DAT_00579598 + iVar24) >> 0x1d) + 1U &
                                        0xfffffffe) + 2 & 7);
                  *(int *)(&DAT_00579598 + iVar24) =
                       *(int *)(&DAT_00579598 + iVar24) - iVar25 * iVar18 * 0xaec33;
                  uVar35 = FUN_0040c450((&DAT_0057958c)[local_6c * 0x40],
                                        (&DAT_00579590)[local_6c * 0x40],uVar32,0xfffffffe,2);
                  iVar18 = FUN_00467130(uVar35);
                  (&DAT_0057959c)[local_6c * 0x40] =
                       (&DAT_0057959c)[local_6c * 0x40] +
                       iVar18 * *(int *)(&DAT_005795a0 + iVar24) * -2;
                  iVar18 = *(int *)(&DAT_005795a0 + iVar24);
                  uVar35 = FUN_0040c450((&DAT_0057958c)[local_6c * 0x40],
                                        (&DAT_00579590)[local_6c * 0x40],uVar32,0xfffffffe,2);
                  iVar25 = FUN_00467130(uVar35);
                  *(int *)(&DAT_005795a0 + iVar24) = (iVar25 * iVar18) / 2 + iVar18;
                  if ('\0' < (char)(&DAT_00578372)[local_8]) {
                    iVar18 = FUN_00467130((int)(char)(&DAT_00578372)[local_8],1,3);
                    uVar11 = FUN_0045c1e0(iVar18 * 0xaaaa);
                    *(uint *)(&DAT_00579598 + iVar24) =
                         *(int *)(&DAT_00579598 + iVar24) +
                         ((uint)uVar11 - (iVar18 * 0xaaaaaaa) / 2);
                  }
                  iVar18 = FUN_0040bfa0((&DAT_0057958c)[local_6c * 0x40],
                                        (&DAT_00579590)[local_6c * 0x40]);
                  if ((iVar18 == 0x11) && (local_60 == 0)) {
                    *(undefined4 *)(&DAT_005795a0 + iVar24) = 0;
                    (&DAT_0057959c)[local_6c * 0x40] = 0;
                    DAT_005787fc = (&DAT_0057958c)[local_6c * 0x40];
                    DAT_00578800 = (&DAT_00579590)[local_6c * 0x40];
                    DAT_004c2e28 = 0;
                  }
                  if (local_68 == 0xc) {
                    if (0x100 < (int)(&DAT_0057959c)[local_6c * 0x40]) {
                      if (local_60 == 0) {
                        if (((&DAT_005794d0)[iVar24] == '\0') ||
                           ((*(ushort *)(&DAT_005794ce + iVar24) & 0x200) == 0)) {
                          uVar13 = FUN_0045c1e0(0xa0);
                          iVar18 = *(int *)(&DAT_00579598 + iVar24) +
                                   (0x50 - (uVar13 & 0xffff)) * 0x1000000;
                        }
                        else {
                          uVar13 = FUN_0045c1e0(0x50);
                          iVar18 = *(int *)(&DAT_00579598 + iVar24) +
                                   (0x28 - (uVar13 & 0xffff)) * 0x1000000;
                        }
                        *(int *)(&DAT_00579598 + iVar24) = iVar18;
                        uVar13 = FUN_0045c1e0(3);
                        FUN_0040c500((uVar13 & 0xffff) + 6,(&DAT_0057958c)[local_6c * 0x40],
                                     (&DAT_00579590)[local_6c * 0x40],0);
                      }
                      goto LAB_0042d1c2;
                    }
                  }
                  else {
LAB_0042d1c2:
                    if ((((0x100 < (int)(&DAT_0057959c)[local_6c * 0x40]) &&
                         ((&DAT_005794d0)[iVar24] != '\0')) &&
                        (uVar11 = FUN_0045c1e0(100), uVar11 < (byte)(&DAT_005795b1)[iVar24])) &&
                       ((iVar18 = FUN_0040c4b0((&DAT_0057958c)[local_6c * 0x40],
                                               (&DAT_00579590)[local_6c * 0x40],
                                               (&DAT_00575ac8)[(char)(&DAT_005794d9)[iVar24] * 0x82]
                                               ,(&DAT_00575acc)
                                                [(char)(&DAT_005794d9)[iVar24] * 0x82]),
                        iVar18 < 0x4b && ((char)(&DAT_00578372)[local_8] < '\x01')))) {
                      FUN_0040c500(0x18,(&DAT_0057958c)[local_6c * 0x40],
                                   (&DAT_00579590)[local_6c * 0x40],0);
                      iVar18 = FUN_004672d0(((&DAT_00575ac8)[(char)(&DAT_005794d9)[iVar24] * 0x82] *
                                             0x400 - (&DAT_0057958c)[local_6c * 0x40]) + 0x200,
                                            ((&DAT_00575acc)[(char)(&DAT_005794d9)[iVar24] * 0x82] *
                                             0x400 - (&DAT_00579590)[local_6c * 0x40]) + 0x200);
                      *(int *)(&DAT_00579598 + iVar24) =
                           ((iVar18 - *(int *)(&DAT_00579598 + iVar24)) * 4) / 5 +
                           *(int *)(&DAT_00579598 + iVar24);
                      FUN_00467a00(local_6c,0x2a,0x14);
                    }
                  }
                  if (200 < *(int *)(&DAT_005795a0 + iVar24)) {
                    iVar18 = 0;
                    pcVar26 = &DAT_005794d9;
                    do {
                      cVar6 = *pcVar26;
                      if (((cVar6 != '\0') && (*(int *)(pcVar26 + 0xb3) != 0)) &&
                         ((cVar6 != (&DAT_005794d9)[iVar24] &&
                          ((cVar6 != '\x13' &&
                           (iVar25 = FUN_0040acd0((&DAT_0057958c)[local_6c * 0x40] -
                                                  *(int *)(pcVar26 + -0x21),
                                                  (&DAT_00579590)[local_6c * 0x40] -
                                                  *(int *)(pcVar26 + -0x1d)),
                           iVar25 < ((DAT_00822c88 + 2) * 0x400) / 2)))))) {
                        FUN_00467a00(iVar18,9,0x14);
                      }
                      pcVar26 = pcVar26 + 0x100;
                      iVar18 = iVar18 + 1;
                    } while ((int)pcVar26 < 0x582cd9);
                  }
                }
                if ((((int)(&DAT_0057959c)[local_6c * 0x40] < 0x40) &&
                    ((&DAT_00579594)[local_6c * 0x40] == 0)) &&
                   (*(int *)(&DAT_005795a0 + iVar24) == 0)) {
                  (&DAT_0057959c)[local_6c * 0x40] = 0;
                  (&DAT_00579556)[local_6c * 0x80] = 0;
                  (&DAT_005794d8)[iVar24] = 0;
                  uVar13 = (&DAT_005794c8)[local_6c * 0x40];
                  (&DAT_005794c8)[local_6c * 0x40] = uVar13 & 0xfffbffff;
                  iVar25 = (int)(&DAT_0057958c)[local_6c * 0x40] >> 10;
                  iVar18 = (int)(&DAT_00579590)[local_6c * 0x40] >> 10;
                  iVar27 = iVar25 * 0x32;
                  local_8 = iVar27 + iVar18;
                  iVar14 = (int)*(char *)((int)&DAT_005722e8 + local_8);
                  if (iVar14 != 2) {
                    (&DAT_005794c8)[local_6c * 0x40] = uVar13 & 0xfbfbffff;
                  }
                  if ((&DAT_005794da)[iVar24] == '\0') {
                    bVar3 = (&DAT_005794d1)[iVar24];
                    iVar15 = (&DAT_0057957c)[local_6c * 0x40];
                    *(int *)(&DAT_00575ad0 + (char)(&DAT_005794d9)[iVar24] * 0x208) =
                         *(int *)(&DAT_00575ad0 + (char)(&DAT_005794d9)[iVar24] * 0x208) + 1;
                    iVar20 = (int)(char)(&DAT_00579572)[iVar24] + (bVar3 & 7) * 4;
                    iVar22 = (&DAT_00579580)[local_6c * 0x40];
                    *(int *)(&DAT_0056ae80 + iVar20 * 0xb8) =
                         *(int *)(&DAT_0056ae80 + iVar20 * 0xb8) + 1;
                    iVar20 = FUN_0040acd0((&DAT_0057958c)[local_6c * 0x40] - iVar15,
                                          (&DAT_00579590)[local_6c * 0x40] - iVar22);
                    iVar15 = (int)(iVar20 * 0x19 + (iVar20 * 0x19 >> 0x1f & 0x3ffU)) >> 10;
                    iVar20 = (int)(char)(&DAT_00579572)[iVar24] +
                             ((byte)(&DAT_005794d1)[iVar24] & 7) * 4;
                    (&DAT_0056ae70)[iVar20 * 0x2e] = (&DAT_0056ae70)[iVar20 * 0x2e] + iVar15;
                    if (*(int *)(&DAT_0056ae84 + iVar20 * 0xb8) < iVar15) {
                      *(int *)(&DAT_0056ae84 + iVar20 * 0xb8) = iVar15;
                    }
                    iVar22 = (char)(&DAT_005794d9)[iVar24] * 0x208;
                    *(short *)(&DAT_00575c0c + iVar22) =
                         *(short *)(&DAT_00575c0c + iVar22) + (short)iVar15;
                    if (*(short *)(&DAT_00575c16 + iVar22) < iVar15) {
                      *(short *)(&DAT_00575c16 + iVar22) = (short)iVar15;
                    }
                    if ((char)(&DAT_00578372)[iVar14 * 0x30] < '\x01') {
                      iVar15 = (&DAT_0056ae74)[iVar20 * 0x2e];
                      *(short *)(&DAT_00575c0e + iVar22) = *(short *)(&DAT_00575c0e + iVar22) + 1;
                      (&DAT_0056ae74)[iVar20 * 0x2e] = iVar15 + 1;
                    }
                  }
                  cVar6 = (&DAT_005794da)[iVar24];
                  (&DAT_005794da)[iVar24] = cVar6 + '\x01';
                  if (((int)(char)(cVar6 + '\x01') ==
                       *(char *)(&DAT_00575ab0 + (char)(&DAT_005794d9)[iVar24] * 0x82) + -2) &&
                     (iVar14 == 1)) {
                    iVar20 = (int)(char)(&DAT_00579572)[iVar24] +
                             ((byte)(&DAT_005794d1)[iVar24] & 7) * 4;
                    iVar15 = *(int *)(&DAT_0056ae78 + iVar20 * 0xb8);
                    *(short *)(&DAT_00575c10 + (char)(&DAT_005794d9)[iVar24] * 0x208) =
                         *(short *)(&DAT_00575c10 + (char)(&DAT_005794d9)[iVar24] * 0x208) + 1;
                    *(int *)(&DAT_0056ae78 + iVar20 * 0xb8) = iVar15 + 1;
                  }
                  iVar20 = FUN_0040bf60(iVar25,iVar18);
                  if ((iVar20 == 0) &&
                     (cVar6 = *(char *)((int)&DAT_0053ea24 + iVar18 + iVar27), cVar6 != -1)) {
                    *(char *)((int)&DAT_0053ea24 + iVar18 + iVar27) = cVar6 + '\x01';
                  }
                  cVar6 = (&DAT_00579528)[iVar24];
                  pcVar26 = &DAT_00578372 + iVar14 * 0x30;
                  if (((char)(&DAT_00578372)[iVar14 * 0x30] < '\x01') &&
                     (iVar27 = FUN_0040bf60(iVar25,iVar18), iVar27 == 0)) {
                    if ('\b' < (char)(&DAT_005794d3)[iVar24]) {
                      iVar27 = (int)(char)(&DAT_005794d9)[iVar24];
                      local_c = (char)(&DAT_005794d9)[iVar24] * 0x208;
                      iVar20 = FUN_0040acd0(((int)(&DAT_0057957c)[local_6c * 0x40] >> 10) -
                                            (&DAT_00575ac8)[iVar27 * 0x82],
                                            ((int)(&DAT_00579580)[local_6c * 0x40] >> 10) -
                                            (&DAT_00575acc)[iVar27 * 0x82]);
                      iVar27 = FUN_0040acd0(iVar25 - (&DAT_00575ac8)[iVar27 * 0x82],
                                            iVar18 - (&DAT_00575acc)[iVar27 * 0x82]);
                      if (iVar27 < iVar20) {
                        (&DAT_005794d5)[iVar24] = 0xc;
                        (&DAT_00579556)[local_6c * 0x80] = 0xff9d;
                        (&DAT_005794d2)[iVar24] = (&DAT_005794d2)[iVar24] - 2 & 7;
                        FUN_00467a00(local_6c,1,iVar14);
                      }
                    }
                  }
                  else {
                    if (((int)(char)(&DAT_005794d3)[iVar24] < DAT_00822c88 + 3) &&
                       (((*(byte *)(&DAT_005794c8 + local_6c * 0x40) & 2) == 0 &&
                        (((&DAT_0053caf0)[local_8] & 0x100) == 0)))) {
                      (&DAT_005794d5)[iVar24] = 0xd;
                      (&DAT_00579556)[local_6c * 0x80] = 0xff9d;
                      (&DAT_005794d2)[iVar24] = (&DAT_005794d2)[iVar24] - 2 & 7;
                      FUN_00467a00(local_6c,2,iVar14);
                    }
                    iVar27 = (int)*(char *)((int)&DAT_005722e8 +
                                           ((int)(&DAT_0057957c)[local_6c * 0x40] >> 10) * 0x32 +
                                           ((int)(&DAT_00579580)[local_6c * 0x40] >> 10));
                    if ((('\0' < (char)(&DAT_00578372)[iVar27 * 0x30]) &&
                        ((char)(&DAT_00578372)[iVar27 * 0x30] <= *pcVar26)) &&
                       (((&DAT_0053caf0)[local_8] & 0x100) == 0)) {
                      if ((&DAT_005794d5)[iVar24] != '\r') {
                        (&DAT_005794d5)[iVar24] = 0xd;
                        (&DAT_005794d2)[iVar24] = (&DAT_005794d2)[iVar24] - 2 & 7;
                      }
                      (&DAT_00579556)[local_6c * 0x80] = 0xff9d;
                      FUN_00467a00(local_6c,(iVar14 != iVar27) + '\x02',iVar14);
                      (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 0x20000;
                    }
                    if (iVar14 == 0x11) {
LAB_0042d7ff:
                      FUN_0040c500(5,(&DAT_0057958c)[local_6c * 0x40],
                                   (&DAT_005794bc)[local_6c * 0x40],0);
                      FUN_00467a00(local_6c,0xd,iVar14);
                      local_c = FUN_004672d0((&DAT_0057958c)[local_6c * 0x40] -
                                             (&DAT_0057957c)[local_6c * 0x40],
                                             (&DAT_00579590)[local_6c * 0x40] -
                                             (&DAT_00579580)[local_6c * 0x40]);
                      iVar27 = FUN_0040acd0((&DAT_0057958c)[local_6c * 0x40] -
                                            (&DAT_0057957c)[local_6c * 0x40],
                                            (&DAT_00579590)[local_6c * 0x40] -
                                            (&DAT_00579580)[local_6c * 0x40]);
                      local_10 = FUN_0040c4b0((&DAT_0057958c)[local_6c * 0x40],
                                              (&DAT_00579590)[local_6c * 0x40],
                                              (&DAT_00575ac8)[(char)(&DAT_005794d9)[iVar24] * 0x82],
                                              (&DAT_00575acc)[(char)(&DAT_005794d9)[iVar24] * 0x82])
                      ;
                      (&DAT_0057958c)[local_6c * 0x40] = (&DAT_0057957c)[local_6c * 0x40];
                      iVar20 = 0;
                      (&DAT_00579590)[local_6c * 0x40] = (&DAT_00579580)[local_6c * 0x40];
                      local_8 = 0xffffff9d;
                      if (0 < iVar27) {
                        do {
                          iVar15 = local_c;
                          iVar22 = FUN_00467270(local_c,iVar20);
                          iVar22 = iVar22 + (&DAT_0057957c)[local_6c * 0x40];
                          iVar15 = FUN_004672b0(iVar15,iVar20);
                          iVar15 = (&DAT_00579580)[local_6c * 0x40] - iVar15;
                          if (((iVar20 == 0) ||
                              (iVar17 = FUN_0040c4b0(iVar22,iVar15,
                                                     (&DAT_00575ac8)
                                                     [(char)(&DAT_005794d9)[iVar24] * 0x82],
                                                     (&DAT_00575acc)
                                                     [(char)(&DAT_005794d9)[iVar24] * 0x82]),
                              local_10 <= iVar17)) &&
                             ((iVar17 = FUN_0040bfa0(iVar22,iVar15), iVar17 != 0x11 &&
                              (iVar17 = FUN_0040bfa0(iVar22,iVar15), iVar17 != 10)))) {
                            iVar17 = FUN_0040bfa0(iVar22,iVar15);
                            uVar13 = iVar20 + (char)(&DAT_00578372)[iVar17 * 0x30] * -4;
                            if ((int)local_8 < (int)uVar13) {
                              (&DAT_0057958c)[local_6c * 0x40] = iVar22;
                              (&DAT_00579590)[local_6c * 0x40] = iVar15;
                              local_8 = uVar13;
                              if (iVar20 != 0) {
                                (&DAT_005794c8)[local_6c * 0x40] =
                                     (&DAT_005794c8)[local_6c * 0x40] | 0x400;
                              }
                            }
                          }
                          iVar20 = iVar20 + 0x200;
                        } while (iVar20 < iVar27);
                      }
                    }
                    else {
                      iVar27 = FUN_0040bf60(iVar25,iVar18);
                      if ((iVar27 == 0) && (!bVar4)) goto LAB_0042d9ff;
                      if (bVar4) goto LAB_0042d7ff;
                      FUN_00467a00(local_6c,2,iVar14);
                      (&DAT_0057958c)[local_6c * 0x40] = (&DAT_0057957c)[local_6c * 0x40];
                      (&DAT_00579590)[local_6c * 0x40] = (&DAT_00579580)[local_6c * 0x40];
                    }
                    if ((&DAT_005794d5)[iVar24] != '\r') {
                      (&DAT_005794d5)[iVar24] = 0xd;
                      (&DAT_005794d2)[iVar24] = (&DAT_005794d2)[iVar24] - 2 & 7;
                    }
                    (&DAT_00579556)[local_6c * 0x80] = 0xff9d;
                    (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 1;
                    if ((char)(&DAT_005794da)[iVar24] < '\b') {
                      (&DAT_005794da)[iVar24] = (&DAT_005794da)[iVar24] + '\x01';
                    }
                  }
LAB_0042d9ff:
                  if (((iVar14 != 0x11) && (iVar18 = FUN_0040bf60(iVar25,iVar18), iVar18 == 0)) &&
                     ((&DAT_005794c8)[local_6c * 0x40] =
                           (&DAT_005794c8)[local_6c * 0x40] & 0xfffffffe | 0x400, local_4c != -1)) {
                    FUN_00409620(local_4c);
                  }
                  if (((*pcVar26 < '\x01') && (cVar6 == (&DAT_00579528)[iVar24])) &&
                     ((char)(&DAT_005794d9)[iVar24] < '\x04')) {
                    iVar18 = FUN_0040acd0((&DAT_0057957c)[local_6c * 0x40] -
                                          (&DAT_0057958c)[local_6c * 0x40],
                                          (&DAT_00579580)[local_6c * 0x40] -
                                          (&DAT_00579590)[local_6c * 0x40]);
                    if ((((&DAT_005794da)[iVar24] == '\x01') &&
                        ((*(byte *)(&DAT_005794c8 + local_6c * 0x40) & 4) != 0)) &&
                       ((iVar25 = FUN_00422530(local_6c),
                        iVar25 < (int)(iVar18 * 0x19 + (iVar18 * 0x19 >> 0x1f & 0x3ffU)) >> 10 &&
                        ((char)(&DAT_005794d9)[iVar24] < '\x06')))) {
                      FUN_00467a00(local_6c,0x33,0x14);
                    }
                  }
                  if (((&DAT_0057953c)[iVar24] == '\0') && ('\0' < *pcVar26)) {
                    if ((*(byte *)(&DAT_005794c8 + local_6c * 0x40) & 0x20) != 0) {
                      FUN_00467a00(local_6c,0x11,0x14);
                    }
                    if ((*(byte *)(&DAT_005794c8 + local_6c * 0x40) & 0x40) != 0) {
                      FUN_00467a00(local_6c,0x10,0x14);
                    }
                  }
                }
              }
            }
            else if (cVar6 == '\x01') {
              if ((&DAT_005794d5)[iVar24] != '\x10') {
                (&DAT_005794d5)[iVar24] = 0xb;
                if (((((&DAT_005794da)[iVar24] != '\0') || ((local_6c & 1) == 0)) ||
                    ((short)(&DAT_00579556)[(short)(&DAT_0057955a)[local_6c * 0x80] * 0x80] < 0)) &&
                   (DAT_0059b04c == 0)) {
                  if (local_68 == 1) {
                    iVar18 = 0;
                  }
                  else {
                    iVar18 = (char)(&DAT_005794d9)[iVar24] + 4;
                  }
                  sVar9 = FUN_0045c1e0(iVar18);
                  if ((sVar9 != 0) && (((&DAT_005794c8)[local_6c * 0x40] & 0x4200) == 0))
                  goto LAB_00429ed2;
                }
                bVar4 = true;
                local_2c = 0;
                psVar12 = &DAT_00579576;
                (&DAT_005794d2)[iVar24] =
                     (byte)((int)((*(int *)(&DAT_00579598 + iVar24) >> 0x1c & 0xfU) + 1) >> 1) & 7;
                do {
                  cVar6 = (&DAT_005794d9)[iVar24];
                  if (((*(char *)((int)psVar12 + -0x9d) == cVar6) &&
                      (DAT_0056a51c - (short)(&DAT_00579576)[local_6c * 0x80] <=
                       DAT_0056a51c - *psVar12)) &&
                     ((local_2c != (int)(short)(&DAT_0057955a)[local_6c * 0x80] &&
                      (((local_2c != local_6c && ((*(uint *)(psVar12 + -0x57) & 0x400) != 0)) &&
                       ((char)(&DAT_005794da)[iVar24] < (char)psVar12[-0x4e])))))) {
                    iVar18 = FUN_0040c4b0(*(undefined4 *)(psVar12 + -0x5f),
                                          *(undefined4 *)(psVar12 + -0x5d),
                                          (&DAT_00575ab8)[cVar6 * 0x82],
                                          (&DAT_00575abc)[cVar6 * 0x82]);
                    if (99 < iVar18) {
                      iVar18 = FUN_0040c4b0(*(undefined4 *)(psVar12 + 0xb),
                                            *(undefined4 *)(psVar12 + 0xd),
                                            *(undefined4 *)(&DAT_00579584 + iVar24),
                                            *(undefined4 *)(&DAT_00579588 + iVar24));
                      if (iVar18 < 0x25) {
                        bVar4 = false;
                      }
                      iVar18 = FUN_0040c4b0(*(undefined4 *)(psVar12 + -0x5f),
                                            *(undefined4 *)(psVar12 + -0x5d),
                                            *(undefined4 *)(&DAT_00579584 + iVar24),
                                            *(undefined4 *)(&DAT_00579588 + iVar24));
                      if (0x24 < iVar18) {
                        if (bVar4) {
                          iVar18 = FUN_0040c4b0(*(undefined4 *)(psVar12 + -0x5f),
                                                *(undefined4 *)(psVar12 + -0x5d),
                                                (&DAT_00575ab8)
                                                [(char)(&DAT_005794d9)[iVar24] * 0x82],
                                                (&DAT_00575abc)
                                                [(char)(&DAT_005794d9)[iVar24] * 0x82]);
                          iVar25 = FUN_0040c4b0((&DAT_005794b8)[local_6c * 0x40],
                                                (&DAT_005794bc)[local_6c * 0x40],
                                                *(undefined4 *)(&DAT_00579584 + iVar24),
                                                *(undefined4 *)(&DAT_00579588 + iVar24));
                          if (iVar18 < iVar25) {
                            iVar18 = FUN_004672d0(*(int *)(psVar12 + -0x5f) -
                                                  (&DAT_005794b8)[local_6c * 0x40],
                                                  *(int *)(psVar12 + -0x5d) -
                                                  (&DAT_005794bc)[local_6c * 0x40]);
                            iVar25 = FUN_004672d0((*(int *)(&DAT_00579584 + iVar24) * 0x400 -
                                                  (&DAT_005794b8)[local_6c * 0x40]) + 0x200,
                                                  (*(int *)(&DAT_00579588 + iVar24) * 0x400 -
                                                  (&DAT_005794bc)[local_6c * 0x40]) + 0x200);
                            uVar13 = iVar18 - iVar25 >> 0x1f;
                            if ((int)((iVar18 - iVar25 ^ uVar13) - uVar13) < 0xaaaaaaa)
                            goto LAB_0042c346;
                          }
                        }
                        goto LAB_0042c348;
                      }
                    }
LAB_0042c346:
                    bVar4 = false;
                  }
LAB_0042c348:
                  psVar12 = psVar12 + 0x80;
                  local_2c = local_2c + 1;
                } while ((int)psVar12 < 0x582d76);
                if ((((&DAT_005794c8)[local_6c * 0x40] & 0x200) != 0) || (bVar4)) {
                  (&DAT_005794d5)[iVar24] = 0x10;
                  (&DAT_005794d6)[iVar24] = 0;
                  (&DAT_005794b8)[local_6c * 0x40] = (&DAT_0057958c)[local_6c * 0x40];
                  (&DAT_005794bc)[local_6c * 0x40] = (&DAT_00579590)[local_6c * 0x40];
                  (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] & 0xfffdffff;
                }
                else {
                  (&DAT_005794d5)[iVar24] = 0xb;
LAB_0042c379:
                  *(undefined2 *)(&DAT_005794cc + iVar24) = 0;
                  sVar9 = FUN_0045c1e0(4);
                  (&DAT_00579556)[local_6c * 0x80] = -sVar9;
                }
              }
            }
            else {
              if (cVar6 == '\x02') {
                if ((&DAT_005794d4)[iVar24] != '\r') {
                  (&DAT_005794d2)[iVar24] = (&DAT_005794d2)[iVar24] + 2 & 7;
                }
                (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 0x800;
                (&DAT_005794d6)[iVar24] = 0;
              }
              cVar6 = (&DAT_005794d8)[iVar24];
              (&DAT_005794d8)[iVar24] = cVar6 + '\x01';
              uVar8 = FUN_00467130((char)(cVar6 + '\x01') + -3,0,6);
              (&DAT_005794d5)[iVar24] = uVar8;
              if ('x' < (char)(&DAT_005794d8)[iVar24]) {
                (&DAT_005794d8)[iVar24] = 0x78;
              }
              if ((&DAT_005794d5)[iVar24] == '\x05') {
                bVar3 = (&DAT_005794d1)[iVar24];
                uVar35 = 0xbe;
                if ((bVar3 & 1) == 0) {
                  uVar35 = 0xc1;
                }
                if ((bVar3 & 2) == 0) {
                  uVar35 = 0xbf;
                }
                if ((bVar3 & 4) == 0) {
                  uVar35 = 0xc0;
                }
                if (((&DAT_005794c8)[local_6c * 0x40] & 0x400000) != 0) {
                  uVar35 = 0xbd;
                  FUN_00467a00(local_6c,0x28,0);
                  (&DAT_0057953c)[iVar24] = 3;
                }
                if ('\t' < (char)(&DAT_005794d4)[iVar24]) {
                  uVar35 = 2;
                }
                if (local_68 == 1) {
                  uVar35 = 3;
                }
                if ((((&DAT_005794c8)[local_6c * 0x40] & 0x40000) == 0) &&
                   (FUN_0040c500(uVar35,(&DAT_005794b8)[local_6c * 0x40],
                                 (&DAT_005794bc)[local_6c * 0x40],0), local_68 == 2)) {
                  FUN_00409a90(local_6c);
                }
                (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 0x40000;
                if ((&DAT_005794c0)[local_6c * 0x40] != -1) {
                  FUN_004099f0(local_6c);
                }
                if (((((&DAT_005794d1)[iVar24] & 0xf0) != 0) && (local_68 != 1)) &&
                   (local_6c == DAT_005a59f8)) {
                  FUN_0040c500(0x2e,(&DAT_005794b8)[local_6c * 0x40],
                               (&DAT_005794bc)[local_6c * 0x40],1000);
                }
                *(uint *)(&DAT_0056962c + local_6c * 4) = DAT_00834170;
              }
              if (('\x04' < (char)(&DAT_005794d5)[iVar24]) ||
                 (((&DAT_005794c8)[local_6c * 0x40] & 0x40000) != 0)) {
                if (((&DAT_005794d8)[iVar24] == ' ') &&
                   (((&DAT_005794c8)[local_6c * 0x40] & 0x4000) != 0)) {
                  (&DAT_005794c8)[local_6c * 0x40] = (&DAT_005794c8)[local_6c * 0x40] | 0x400;
                  (&DAT_005794d8)[iVar24] = 0;
                }
                if ((&DAT_005794d8)[iVar24] == '\0') {
                  bVar3 = (&DAT_005794d2)[iVar24];
                  if (local_68 == 1) {
                    (&DAT_005794b8)[local_6c * 0x40] =
                         (&DAT_0057957c)[local_6c * 0x40] -
                         (&DAT_004c2878)[bVar3 + 2 & 7] * (uint)(~bVar3 & 1 | 2) * 0x40;
                    bVar3 = (&DAT_005794d2)[iVar24];
                    iVar18 = (uint)(~bVar3 & 1 | 2) << 6;
                  }
                  else {
                    (&DAT_005794b8)[local_6c * 0x40] =
                         (&DAT_0057957c)[local_6c * 0x40] -
                         (&DAT_004c2878)[bVar3 + 2 & 7] * (uint)(~bVar3 & 1 | 2) * 0x80;
                    bVar3 = (&DAT_005794d2)[iVar24];
                    iVar18 = (uint)(~bVar3 & 1 | 2) << 7;
                  }
                  (&DAT_005794bc)[local_6c * 0x40] =
                       (&DAT_00579580)[local_6c * 0x40] - (&DAT_004c2898)[bVar3 + 2 & 7] * iVar18;
                }
                goto LAB_0042c661;
              }
            }
          }
        }
      }
    }
LAB_00429ed2:
    local_6c = local_6c + 1;
    if (0x97 < (int)local_6c) {
      return;
    }
  } while( true );
}

