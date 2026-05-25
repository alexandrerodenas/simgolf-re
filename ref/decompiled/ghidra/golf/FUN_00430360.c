/* Ghidra decompiled: golf.exe */
/* Function: FUN_00430360 @ 0x00430360 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430360(void)

{
  char cVar1;
  short sVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  ushort uVar6;
  undefined2 uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  undefined4 extraout_ECX;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  short *psVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  char *pcVar19;
  char *pcVar20;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  char local_4 [4];
  
  local_20 = 0;
  psVar15 = &DAT_00572cbe;
  do {
    if (((char)psVar15[2] != -1) && ((DAT_005a5a00 & 0x20) != 0)) {
      if ('\b' < (char)psVar15[2]) {
        *(undefined1 *)(psVar15 + 2) = 1;
      }
      if (*(int *)(psVar15 + -3) < 0) {
        *psVar15 = 0x103;
        local_24 = 0;
        uVar16 = (uint)*(char *)((int)psVar15 + 3);
      }
      else {
        local_24 = (int)(char)psVar15[1];
        if ((DAT_0059e7b8 & 4) == 0) {
          local_24 = (&DAT_0053f3e8)[(int)(char)psVar15[2] + (int)*psVar15];
          if (local_24 == 0) {
            local_24 = 0;
          }
          else {
            cVar3 = (char)psVar15[1] + '\x01';
            *(char *)(psVar15 + 1) = cVar3;
            local_24 = (int)cVar3 % local_24;
          }
          if (*psVar15 == 0x103) {
            iVar18 = (int)((&DAT_004c2878)[*(char *)((int)psVar15 + 3)] << 10) / 3 +
                     *(int *)(psVar15 + -7) >> 10;
            iVar12 = (int)((&DAT_004c2898)[*(char *)((int)psVar15 + 3)] << 10) / 3 +
                     *(int *)(psVar15 + -5) >> 10;
            iVar8 = FUN_0040bf60(iVar18,iVar12);
            if (((iVar8 != 0) ||
                (cVar3 = *(char *)((int)&DAT_005722e8 + iVar18 * 0x32 + iVar12), cVar3 == '\x11'))
               || (cVar3 == '\x16')) {
              *(byte *)((int)psVar15 + 3) = *(char *)((int)psVar15 + 3) + 1U & 7;
              sVar5 = FUN_0045c1e0(100);
              if (sVar5 == 0) {
                *(undefined1 *)(psVar15 + 2) = 0xff;
              }
            }
            if (((*(byte *)(psVar15 + -3) & 2) == 0) &&
               ((psVar15[-1] == -1 || ((*(byte *)(&DAT_00572cb8 + psVar15[-1] * 5) & 2) == 0)))) {
              *(int *)(psVar15 + -7) =
                   *(int *)(psVar15 + -7) +
                   (int)((&DAT_004c2878)[*(char *)((int)psVar15 + 3)] << 6) /
                   (int)((-(uint)((char)psVar15[2] != '\0') & 2) + 2);
              *(int *)(psVar15 + -5) =
                   *(int *)(psVar15 + -5) +
                   (int)((&DAT_004c2898)[*(char *)((int)psVar15 + 3)] << 6) /
                   (int)((-(uint)((char)psVar15[2] != '\0') & 2) + 2);
            }
            else {
              *(int *)(psVar15 + -7) =
                   *(int *)(psVar15 + -7) + (&DAT_004c2878)[*(char *)((int)psVar15 + 3)] * 0x40;
              *(int *)(psVar15 + -5) =
                   *(int *)(psVar15 + -5) + (&DAT_004c2898)[*(char *)((int)psVar15 + 3)] * 0x40;
            }
          }
          if (local_24 == 0) {
            sVar5 = psVar15[-1];
            if ((sVar5 == -1) && (DAT_00572cac._2_1_ != -1)) {
              sVar5 = FUN_0045c1e0(3);
              if (sVar5 == 0) {
                *(uint *)(psVar15 + -3) = *(uint *)(psVar15 + -3) & 0xfffffffd;
              }
              iVar8 = 0;
              piVar17 = &DAT_0057959c;
              do {
                if ((*(char *)((int)piVar17 + -0xc3) != -1) &&
                   ((iVar18 = FUN_0040acd0(piVar17[-0x39] - *(int *)(psVar15 + -7),
                                           piVar17[-0x38] - *(int *)(psVar15 + -5)), iVar18 < 0x800
                    || (((0 < *piVar17 && (piVar17[-2] < 0x96)) &&
                        (iVar18 = FUN_0040acd0(piVar17[-4] - *(int *)(psVar15 + -7),
                                               piVar17[-3] - *(int *)(psVar15 + -5)), iVar18 < 0x800
                        )))))) {
                  if ((((*(byte *)(psVar15 + -3) & 2) == 0) && ((char)piVar17[-0x18] == '\0')) &&
                     (*(char *)((int)piVar17 + -0x5f) != '\'')) {
                    FUN_00467a00(iVar8,0x27,(int)(char)psVar15[2]);
                  }
                  iVar18 = piVar17[-0x38];
                  *(uint *)(psVar15 + -3) = *(uint *)(psVar15 + -3) | 2;
                  uVar4 = FUN_004671a0(*(int *)(psVar15 + -7) - piVar17[-0x39],
                                       *(int *)(psVar15 + -5) - iVar18);
                  *(undefined1 *)((int)psVar15 + 3) = uVar4;
                  sVar5 = FUN_0045c1e0(3);
                  if (sVar5 == 0) {
                    FUN_00405a00((int)(char)psVar15[2],*(undefined4 *)(psVar15 + -7),
                                 *(undefined4 *)(psVar15 + -5));
                  }
                }
                piVar17 = piVar17 + 0x40;
                iVar8 = iVar8 + 1;
              } while ((int)piVar17 < 0x582d9c);
              uVar6 = FUN_0045c1e0(8);
              uVar16 = (uint)uVar6;
              if ((*psVar15 == 0x103) && (sVar5 = FUN_0045c1e0(3), sVar5 != 0)) {
                uVar16 = (uint)*(char *)((int)psVar15 + 3);
              }
              iVar8 = FUN_0040bfa0((&DAT_004c2878)[uVar16] * 0x400 + *(int *)(psVar15 + -7),
                                   (&DAT_004c2898)[uVar16] * 0x400 + *(int *)(psVar15 + -5));
              if (((iVar8 != (char)(&DAT_004c19a8)[(char)psVar15[2] * 0x12]) &&
                  (iVar8 = FUN_0040bfa0((&DAT_004c2878)[uVar16] * 0x400 + *(int *)(psVar15 + -7),
                                        (&DAT_004c2898)[uVar16] * 0x400 + *(int *)(psVar15 + -5)),
                  iVar8 != 4)) &&
                 (iVar8 = FUN_0040bfa0(*(undefined4 *)(psVar15 + -7),*(undefined4 *)(psVar15 + -5)),
                 iVar8 == (char)(&DAT_004c19a8)[(char)psVar15[2] * 0x12])) {
                uVar16 = 0xffffffff;
              }
              if ((*(byte *)(psVar15 + -3) & 2) != 0) {
                uVar16 = FUN_0045c1e0(3);
                uVar16 = (*(byte *)((int)psVar15 + 3) - 1) + (uVar16 & 0xffff) & 7;
                *(char *)((int)psVar15 + 3) = (char)uVar16;
                *psVar15 = 0x103;
              }
            }
            else {
              iVar8 = *(int *)(psVar15 + -7);
              iVar18 = (&DAT_00572cb0)[sVar5 * 5];
              iVar12 = (&DAT_00572cb4)[sVar5 * 5];
              iVar14 = *(int *)(psVar15 + -5);
              local_1c = FUN_0040acd0(iVar18 - iVar8,iVar12 - iVar14);
              if ((*(byte *)(&DAT_00572cb8 + psVar15[-1] * 5) & 2) != 0) {
                *psVar15 = 0x103;
                local_1c = 0x2800;
              }
              if ((int)((((*psVar15 != 0x103) + 2) * 0x400) / (((char)psVar15[2] != '\0') + 2)) <
                  local_1c) {
                uVar16 = FUN_004671a0(iVar18 - iVar8,iVar12 - iVar14);
                if (local_1c < 0x800) {
                  uVar16 = local_20 % 3 + -1 + uVar16 & 7;
                }
                *(char *)((int)psVar15 + 3) = (char)uVar16;
              }
              else {
                uVar16 = 0xffffffff;
              }
            }
            if ((*psVar15 == 0x11e) && (sVar5 = FUN_0045c1e0(2), sVar5 != 0)) {
              *psVar15 = 0x115;
              uVar16 = *(uint *)(psVar15 + -3) | 1;
            }
            else {
              if (*psVar15 != 0x115) {
                if ((*psVar15 == 0x10c) && (sVar5 = FUN_0045c1e0(10), sVar5 == 0)) {
                  *psVar15 = 0x115;
                }
                if (((*psVar15 == 0x10c) && (sVar5 = FUN_0045c1e0(2), sVar5 == 0)) &&
                   (uVar16 != 0xffffffff)) {
                  *psVar15 = 0x103;
                  *(char *)((int)psVar15 + 3) = (char)uVar16;
                }
                if ((*psVar15 == 0x103) &&
                   ((sVar5 = FUN_0045c1e0(5), sVar5 == 0 ||
                    ((int)*(char *)((int)psVar15 + 3) != uVar16)))) {
                  *psVar15 = 0x10c;
                }
                goto LAB_004308b7;
              }
              *psVar15 = (-(ushort)((*(uint *)(psVar15 + -3) & 1) != 0) & 0xffee) + 0x11e;
              uVar16 = *(uint *)(psVar15 + -3) & 0xfffffffe;
            }
            *(uint *)(psVar15 + -3) = uVar16;
          }
        }
LAB_004308b7:
        *(char *)(psVar15 + 1) = (char)local_24;
        if ((*psVar15 == 0x115) && ((*(byte *)(psVar15 + -3) & 1) != 0)) {
          local_24 = ((&DAT_0053f3e8)[(char)psVar15[2] + 0x115] - local_24) + -1;
        }
        uVar16 = (DAT_005685f4 - (uint)*(byte *)((int)psVar15 + 3)) - 2 & 7;
        if ((*psVar15 != 0x103) && ((char)psVar15[2] != '\x04')) {
          uVar16 = uVar16 / 2;
        }
      }
      sVar2 = psVar15[2];
      sVar5 = *psVar15;
      if (((char)sVar2 != -1) &&
         (iVar8 = FUN_0042fb90(*(undefined4 *)(psVar15 + -7),*(undefined4 *)(psVar15 + -5),&local_28
                               ,&local_2c,0), iVar8 != 0)) {
        uVar13 = 4;
        if ((psVar15[-1] != -1) && (uVar13 = 3, (char)psVar15[2] == '\x04')) {
          uVar13 = 2;
        }
        DAT_005a9cc8 = FUN_0043d6f0((int)(char)sVar2 + (int)sVar5,local_24,uVar16);
        iVar8 = *(int *)(psVar15 + -3);
        local_18 = 0xc9;
        local_17 = 0xca;
        local_16 = 0xcc;
        local_15 = 0xcf;
        local_14 = 0xd3;
        local_13 = 0xd8;
        local_12 = 0xde;
        local_11 = 0xe5;
        local_10 = 0xed;
        local_f = 0xf6;
        local_e = 0;
        local_d = 0xfc;
        local_c = 0xf9;
        local_b = 0xf8;
        local_a = 0xf9;
        local_9 = 0xfc;
        local_8 = 0;
        local_7 = 0xfe;
        local_6 = 0;
        local_5 = 0;
        local_4[0] = '\0';
        local_4[1] = 0;
        local_4[2] = 0;
        if (iVar8 < 0) {
          local_1c = iVar8 + 0x14;
          FUN_00474440(PTR_DAT_004c1570,local_28 + -0x1e,local_2c + -0x28 + local_4[iVar8] * 4,
                       (float)local_1c * (float)_DAT_004ba480 + (float)_DAT_004ba478,
                       &DAT_0081f350 + (char)psVar15[2] * 0x58,1);
          iVar8 = *(int *)(psVar15 + -3);
          *(int *)(psVar15 + -3) = iVar8 + 1;
          if (iVar8 + 1 == 0) {
            FUN_00405a00((int)(char)psVar15[2],*(undefined4 *)(psVar15 + -7),
                         *(undefined4 *)(psVar15 + -5));
          }
        }
        else {
          FUN_00462a30(local_28,local_2c,local_2c,0x1e,0x28,DAT_005a9cc8,uVar13,
                       (char)psVar15[2] + 0x78);
        }
        if ((DAT_0059e7b8 & 0x20) != 0) {
          DAT_0051a068._0_1_ = 0;
          pcVar9 = (char *)FUN_004ad425(local_20,&DAT_0058a528,10);
          uVar16 = 0xffffffff;
          do {
            pcVar20 = pcVar9;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            pcVar20 = pcVar9 + 1;
            cVar3 = *pcVar9;
            pcVar9 = pcVar20;
          } while (cVar3 != '\0');
          uVar16 = ~uVar16;
          iVar8 = -1;
          pcVar9 = (char *)&DAT_0051a068;
          do {
            pcVar19 = pcVar9;
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            pcVar19 = pcVar9 + 1;
            cVar3 = *pcVar9;
            pcVar9 = pcVar19;
          } while (cVar3 != '\0');
          pcVar9 = pcVar20 + -uVar16;
          pcVar20 = pcVar19 + -1;
          for (uVar11 = uVar16 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar20 = *(undefined4 *)pcVar9;
            pcVar9 = pcVar9 + 4;
            pcVar20 = pcVar20 + 4;
          }
          for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *pcVar20 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            pcVar20 = pcVar20 + 1;
          }
          FUN_00404bc0(&DAT_0051a068,local_28,local_2c + 4,0x80007fff);
        }
      }
      iVar8 = FUN_0040bfa0(*(undefined4 *)(psVar15 + -7),*(undefined4 *)(psVar15 + -5));
      if (iVar8 == 0x14) {
        *(undefined1 *)(psVar15 + 2) = 0xff;
      }
    }
    psVar15 = psVar15 + 10;
    local_20 = local_20 + 1;
  } while ((int)psVar15 < 0x5736be);
  DAT_0059e7b8 = DAT_0059e7b8 | 1;
  local_20 = 0;
  do {
    iVar8 = local_20;
    uVar16 = DAT_00834170;
    iVar18 = local_20 * 0x10;
    switch((&DAT_005419dd)[iVar18]) {
    case 0:
      if ((&DAT_005419d0)[local_20 * 4] == -1) {
        sVar5 = FUN_0045c1e0(100);
        if ((sVar5 == 0) && (0x2000 < (int)DAT_00834170)) {
          (&DAT_005419d0)[iVar8 * 4] = 0;
          uVar16 = FUN_0045c1e0(0x32);
          (&DAT_005419d4)[iVar8 * 4] = (uVar16 & 0xffff) << 10;
          *(undefined4 *)(&DAT_005419d8 + iVar18) = 0x28;
        }
      }
      else {
        iVar12 = FUN_0042fb90((&DAT_005419d0)[local_20 * 4],(&DAT_005419d4)[local_20 * 4],&local_28,
                              &local_2c,0);
        if ((iVar12 != 0) &&
           (iVar12 = FUN_0040bfa0((&DAT_005419d0)[iVar8 * 4],(&DAT_005419d4)[iVar8 * 4]),
           iVar12 != 0x14)) {
          DAT_005a9cc8 = FUN_0043d6f0(0xf1,0,(int)DAT_00834170 / 1000 & 3);
          FUN_00462a30(*(int *)(&DAT_005419d8 + iVar18) / 2 + -0x16 + local_28,
                       local_2c - *(int *)(&DAT_005419d8 + iVar18) / 2,local_2c + -1,0x8c,0x8c,
                       DAT_005a9cc8,4,0x54);
          DAT_005a9cc8 = FUN_0043d6f0(0xf0,0,(int)(&DAT_005419d4)[iVar8 * 4] >> 10 & 3);
          FUN_00462a30(local_28,(local_2c - *(int *)(&DAT_005419d8 + iVar18)) + 0x16,local_2c,0x8c,
                       0x8c,DAT_005a9cc8,4,0x54);
        }
        if ((DAT_0059e7b8 & 4) == 0) {
          iVar12 = FUN_00467130(*(undefined4 *)(&DAT_005419d8 + iVar18),0,0x28);
          iVar12 = (&DAT_005419d0)[iVar8 * 4] + (iVar12 << 6) / 200;
          (&DAT_005419d0)[iVar8 * 4] = iVar12;
          if (0xcc00 < iVar12) {
            (&DAT_005419d0)[iVar8 * 4] = 0xffffffff;
          }
          iVar14 = (&DAT_005419d0)[iVar8 * 4];
          iVar10 = iVar14 >> 10;
          iVar12 = (int)(&DAT_005419d4)[iVar8 * 4] >> 10;
          if ((DAT_00834170 & 3) == 0) {
            switch(((int)DAT_00834170 / (iVar12 * 4 + 0x100)) % 5) {
            case 0:
              if (*(int *)(&DAT_005419d8 + iVar18) == 0) {
                FUN_0040c500(0x39,iVar14,(&DAT_005419d4)[iVar8 * 4],0);
              }
              iVar14 = *(int *)(&DAT_005419d8 + iVar18);
              iVar12 = FUN_0040c170(iVar10,iVar12,0);
              if (iVar14 < iVar12 * DAT_004c2e00 + 0x3c) {
                *(int *)(&DAT_005419d8 + iVar18) = iVar14 + 1;
              }
              break;
            case 1:
            case 4:
              if (*(int *)(&DAT_005419d8 + iVar18) == 0) {
                FUN_0040c500(0x39,iVar14,(&DAT_005419d4)[iVar8 * 4],0);
              }
              iVar14 = *(int *)(&DAT_005419d8 + iVar18);
              iVar12 = FUN_0040c170(iVar10,iVar12,0);
              if (iVar14 < iVar12 * DAT_004c2e00 + 0x28) {
                *(int *)(&DAT_005419d8 + iVar18) = iVar14 + 1;
              }
              break;
            case 2:
            case 3:
              iVar12 = iVar12 + iVar10 * 0x32;
              cVar3 = *(char *)((int)&DAT_005722e8 + iVar12);
              if ((((((&DAT_00578376)[cVar3 * 0x30] == '\r') ||
                    (cVar1 = (&DAT_0057231a)[iVar12], (&DAT_00578376)[cVar1 * 0x30] == '\r')) ||
                   (cVar3 == '\x16')) || ((cVar1 == '\x16' || (cVar3 == '\x15')))) ||
                 ((cVar1 == '\x15' ||
                  (((&DAT_00578376)[cVar3 * 0x30] == '\x11' ||
                   ((char)(&DAT_00578372)[cVar3 * 0x30] < '\x01')))))) {
                if (*(int *)(&DAT_005419d8 + iVar18) < 0x28) {
                  iVar12 = *(int *)(&DAT_005419d8 + iVar18) + 1;
                  goto LAB_00430dfb;
                }
              }
              else if (0 < *(int *)(&DAT_005419d8 + iVar18)) {
                iVar12 = *(int *)(&DAT_005419d8 + iVar18) + -1;
LAB_00430dfb:
                *(int *)(&DAT_005419d8 + iVar18) = iVar12;
              }
            }
          }
          if (0xcc00 < (int)(&DAT_005419d4)[iVar8 * 4]) {
            (&DAT_005419d0)[iVar8 * 4] = 0xffffffff;
          }
        }
      }
      break;
    case 1:
      if ((&DAT_005419d0)[local_20 * 4] == -1) {
        sVar5 = FUN_0045c1e0(100);
        if (sVar5 == 0) {
          uVar16 = FUN_0045c1e0(0x32);
          if ((&DAT_00578376)[*(char *)((int)&DAT_005722e8 + (uVar16 & 0xffff) * 0x32) * 0x30] ==
              '\x11') {
            (&DAT_005419d0)[iVar8 * 4] = (uVar16 & 0xffff) * 0x400 + 0x200;
            (&DAT_005419d4)[iVar8 * 4] = 0x200;
            (&DAT_005419dc)[iVar18] = 4;
          }
        }
      }
      else {
        if ((DAT_0059e7b8 & 4) == 0) {
          iVar12 = (int)(0x80 / (ulonglong)(longlong)(int)(((int)DAT_00834170 >> 8 & 3U) + 3));
          (&DAT_005419d0)[local_20 * 4] =
               (&DAT_004c2878)[(char)(&DAT_005419dc)[iVar18]] * iVar12 +
               (&DAT_005419d0)[local_20 * 4];
          iVar12 = (&DAT_005419d4)[local_20 * 4] +
                   (&DAT_004c2898)[(char)(&DAT_005419dc)[iVar18]] * iVar12;
          (&DAT_005419d4)[local_20 * 4] = iVar12;
          if (((uVar16 & 7) == 0) &&
             (((cVar3 = (&DAT_005419dc)[iVar18], cVar3 != '\0' || (0x800 < iVar12)) &&
              (iVar12 = FUN_0040bfa0((&DAT_004c2878)[cVar3] * 0x600 + (&DAT_005419d0)[local_20 * 4],
                                     (&DAT_004c2898)[cVar3] * 0x600 + iVar12), iVar12 != 0x11)))) {
            local_1c = (int)(char)(&DAT_005419dc)[iVar18];
            iVar12 = 99;
            iVar14 = 0;
            do {
              if (((iVar14 != (char)(&DAT_005419dc)[iVar18]) &&
                  (iVar10 = FUN_0040bfa0((&DAT_004c2878)[iVar14] * 0x400 +
                                         (&DAT_005419d0)[iVar8 * 4],
                                         (&DAT_004c2898)[iVar14] * 0x400 +
                                         (&DAT_005419d4)[iVar8 * 4]), iVar10 == 0x11)) &&
                 (iVar10 = FUN_0040bfa0((&DAT_004c2878)[iVar14] * 0x800 + (&DAT_005419d0)[iVar8 * 4]
                                        ,(&DAT_004c2898)[iVar14] * 0x800 +
                                         (&DAT_005419d4)[iVar8 * 4]), iVar10 == 0x11)) {
                uVar16 = (uint)(byte)(&DAT_005419dc)[iVar18] - iVar14 & 7;
                if (4 < uVar16) {
                  uVar16 = 8 - uVar16;
                }
                uVar11 = FUN_0045c1e0(0xf);
                iVar10 = (uVar11 & 0xffff) + uVar16 * 0x10;
                if (iVar10 < iVar12) {
                  iVar12 = iVar10;
                  local_1c = iVar14;
                }
              }
              iVar14 = iVar14 + 2;
            } while (iVar14 < 8);
            (&DAT_005419dc)[iVar18] = (undefined1)local_1c;
          }
          if (((int)(&DAT_005419d4)[iVar8 * 4] < 0x200) &&
             ((&DAT_004c2898)[(char)(&DAT_005419dc)[iVar18]] == -1)) {
            (&DAT_005419d0)[iVar8 * 4] = 0xffffffff;
          }
        }
        iVar12 = FUN_0042fb90((&DAT_005419d0)[iVar8 * 4],(&DAT_005419d4)[iVar8 * 4],&local_28,
                              &local_2c,0);
        if (iVar12 == 0) {
          sVar5 = FUN_0045c1e0(200);
          if (sVar5 == 0) {
            (&DAT_005419d0)[iVar8 * 4] = 0xffffffff;
          }
        }
        else {
          if (DAT_005a60b0 == 8) {
            uVar16 = (DAT_005685f4 - (uint)(byte)(&DAT_005419dc)[iVar18]) - 2 & 7;
          }
          else {
            uVar16 = (DAT_005685f4 -
                     CONCAT31((int3)((uint)extraout_ECX >> 8),(&DAT_005419dc)[iVar18])) + -2 >> 1 &
                     3;
          }
          DAT_005a9cc8 = FUN_0043d6f0(0x1a1,((int)DAT_00834170 / 2) % DAT_0053fa6c,uVar16);
          FUN_00462a30(local_28,local_2c,local_2c,0x50,0x50,DAT_005a9cc8,4,0x53);
          if ((DAT_00834170 & 0x7f) == 0) {
            FUN_0040c500(0xd1,(&DAT_005419d0)[iVar8 * 4],(&DAT_005419d4)[iVar8 * 4],0);
          }
        }
      }
      break;
    case 2:
      if ((&DAT_005419d0)[local_20 * 4] == -1) {
        sVar5 = FUN_0045c1e0(100);
        if ((sVar5 == 0) && (0x2000 < (int)DAT_00834170)) {
          (&DAT_005419d0)[iVar8 * 4] = 0;
          uVar16 = FUN_0045c1e0(0x32);
          (&DAT_005419d4)[iVar8 * 4] = (uVar16 & 0xffff) << 10;
          *(undefined4 *)(&DAT_005419d8 + iVar18) = 0x50;
        }
      }
      else {
        iVar12 = FUN_0042fb90((&DAT_005419d0)[local_20 * 4],(&DAT_005419d4)[local_20 * 4],&local_28,
                              &local_2c,0);
        if ((iVar12 != 0) &&
           (iVar12 = FUN_0040bfa0((&DAT_005419d0)[iVar8 * 4],(&DAT_005419d4)[iVar8 * 4]),
           iVar12 != 0x14)) {
          DAT_005a9cc8 = FUN_0043d6f0(0xf3,0,DAT_005685f4 / 2 - 2U & 3);
          FUN_00462a30(local_28 + -0x2c,local_2c,local_2c + -1,0xf0,0xf0,DAT_005a9cc8,4,0x3a);
          DAT_005a9cc8 = FUN_0043d6f0(0xf2,0,DAT_005685f4 / 2 - 2U & 3);
          iVar12 = (*(int *)(&DAT_005419d8 + iVar18) + -0x20) * DAT_004c2844;
          FUN_00462a30(local_28,local_2c - ((int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2),local_2c,
                       0xf0,0xf0,DAT_005a9cc8,4,0x3a);
        }
        if ((DAT_0059e7b8 & 4) == 0) {
          iVar18 = FUN_00467130(*(undefined4 *)(&DAT_005419d8 + iVar18),0,0x28);
          iVar18 = (&DAT_005419d0)[iVar8 * 4] +
                   ((int)(iVar18 * 0x40 + (iVar18 * 0x40 >> 0x1f & 0x7fU)) >> 7);
          (&DAT_005419d0)[iVar8 * 4] = iVar18;
          if (0xcc00 < iVar18) {
            (&DAT_005419d0)[iVar8 * 4] = 0xffffffff;
          }
          if (0xcc00 < (int)(&DAT_005419d4)[iVar8 * 4]) {
            (&DAT_005419d0)[iVar8 * 4] = 0xffffffff;
          }
        }
      }
      break;
    case 3:
      if ((&DAT_005419d0)[local_20 * 4] == -1) {
        sVar5 = FUN_0045c1e0(100);
        if (sVar5 == 0) {
          uVar7 = FUN_0045c1e0(4);
          switch(uVar7) {
          case 0:
            (&DAT_005419d0)[iVar8 * 4] = 0;
            uVar16 = FUN_0045c1e0(0x32);
            (&DAT_005419d4)[iVar8 * 4] = (uVar16 & 0xffff) << 10;
            (&DAT_005419dc)[iVar18] = 2;
            break;
          case 1:
            (&DAT_005419d4)[iVar8 * 4] = 0;
            uVar16 = FUN_0045c1e0(0x32);
            (&DAT_005419d0)[iVar8 * 4] = (uVar16 & 0xffff) << 10;
            (&DAT_005419dc)[iVar18] = 4;
            break;
          case 2:
            (&DAT_005419d0)[iVar8 * 4] = 0xc800;
            uVar16 = FUN_0045c1e0(0x32);
            (&DAT_005419d4)[iVar8 * 4] = (uVar16 & 0xffff) << 10;
            (&DAT_005419dc)[iVar18] = 6;
            break;
          case 3:
            (&DAT_005419d4)[iVar8 * 4] = 0xc800;
            uVar16 = FUN_0045c1e0(0x32);
            (&DAT_005419d0)[iVar8 * 4] = (uVar16 & 0xffff) << 10;
            (&DAT_005419dc)[iVar18] = 0;
          }
        }
      }
      else {
        iVar12 = FUN_0042fb90((&DAT_005419d0)[local_20 * 4],(&DAT_005419d4)[local_20 * 4],&local_28,
                              &local_2c,0);
        if ((iVar12 != 0) &&
           (iVar12 = FUN_0040bfa0((&DAT_005419d0)[iVar8 * 4],(&DAT_005419d4)[iVar8 * 4]),
           iVar12 != 0x14)) {
          uVar13 = 0x206;
          if ((int)DAT_00834170 % 0x30 < DAT_0053fc04 * 2) {
            uVar13 = 0x207;
            iVar12 = ((int)DAT_00834170 % 0x30) % DAT_0053fc04;
          }
          else {
            iVar12 = (int)DAT_00834170 % DAT_0053fc00;
          }
          DAT_005a9cc8 = FUN_0043d6f0(uVar13,iVar12,
                                      (DAT_005685f4 / 2 - (int)(char)(&DAT_005419dc)[iVar18] / 2) -
                                      1U & 3);
          FUN_00462a30(local_28,local_2c,DAT_004c2840 + local_2c,0x8c,0x8c,DAT_005a9cc8,4,0x3c);
        }
        if ((DAT_0059e7b8 & 4) == 0) {
          (&DAT_005419d0)[iVar8 * 4] =
               (&DAT_005419d0)[iVar8 * 4] + (&DAT_004c2878)[(char)(&DAT_005419dc)[iVar18]] * 0x80;
          (&DAT_005419d4)[iVar8 * 4] =
               (&DAT_005419d4)[iVar8 * 4] + (&DAT_004c2898)[(char)(&DAT_005419dc)[iVar18]] * 0x80;
          if ((0xcc00 < (int)(&DAT_005419d0)[iVar8 * 4]) || ((int)(&DAT_005419d0)[iVar8 * 4] < 0)) {
            (&DAT_005419d0)[iVar8 * 4] = 0xffffffff;
          }
          if ((0xcc00 < (int)(&DAT_005419d4)[iVar8 * 4]) || ((int)(&DAT_005419d4)[iVar8 * 4] < 0)) {
            (&DAT_005419d0)[iVar8 * 4] = 0xffffffff;
          }
        }
      }
    }
    local_20 = local_20 + 1;
    if (3 < local_20) {
      DAT_0059e7b8 = DAT_0059e7b8 & 0xfffffffe;
      return;
    }
  } while( true );
}

