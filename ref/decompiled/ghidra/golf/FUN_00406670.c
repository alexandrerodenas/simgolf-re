/* Ghidra decompiled: golf.exe */
/* Function: FUN_00406670 @ 0x00406670 */


void FUN_00406670(uint param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  short *psVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  char *pcVar13;
  char *pcVar14;
  
  DAT_0051a068._0_1_ = 0;
  (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] & 0x7fffffff;
  bVar5 = *(char *)((int)&DAT_005849e0 + (short)(&DAT_0057956e)[param_1 * 0x80] * 0x2c + 2) + 1;
  *(byte *)((int)&DAT_005849e0 + (short)(&DAT_0057956e)[param_1 * 0x80] * 0x2c + 2) = bVar5;
  uVar3 = bVar5 & 7;
  FUN_004676e0(param_1,0);
  if (uVar3 < 3) {
    pcVar10 = s_applies_for_004c48e8;
  }
  else {
    uVar6 = 0xffffffff;
    pcVar10 = s_has_decided_to_upgrade_to_a_004c4924;
    do {
      pcVar14 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar14 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar14;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar10 = (char *)&DAT_0051a068;
    do {
      pcVar13 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar13 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar13;
    } while (cVar1 != '\0');
    pcVar10 = pcVar14 + -uVar6;
    pcVar14 = pcVar13 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar14 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar14 = pcVar14 + 1;
    }
    if (uVar3 == 3) {
      pcVar10 = s_prestigious_004c48f8;
LAB_0040671a:
      uVar6 = 0xffffffff;
      do {
        pcVar14 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar14 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar14;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar7 = -1;
      pcVar10 = (char *)&DAT_0051a068;
      do {
        pcVar13 = pcVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar13 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar13;
      } while (cVar1 != '\0');
      pcVar10 = pcVar14 + -uVar6;
      pcVar14 = pcVar13 + -1;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar14 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
    else {
      if (uVar3 == 4) {
        pcVar10 = s_coveted_004c4908;
        goto LAB_0040671a;
      }
      if (uVar3 == 5) {
        pcVar10 = s_n_exclusive_004c4914;
        goto LAB_0040671a;
      }
    }
    pcVar10 = (&PTR_DAT_004c2a88)[uVar3];
  }
  uVar6 = 0xffffffff;
  do {
    pcVar14 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar14 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar14;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar13;
  } while (cVar1 != '\0');
  pcVar10 = pcVar14 + -uVar6;
  pcVar14 = pcVar13 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar14 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar10 = s_membership_at_your_club__004c48cc;
  do {
    pcVar14 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar14 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar14;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar13;
  } while (cVar1 != '\0');
  pcVar10 = pcVar14 + -uVar6;
  pcVar14 = pcVar13 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar14 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar14 = pcVar14 + 1;
  }
  if (uVar3 == 3) {
    uVar3 = 0xffffffff;
    pcVar10 = PTR_s_Silver_004c2a94;
    do {
      pcVar14 = pcVar10;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar14 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar14;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar7 = -1;
    pcVar10 = (char *)&DAT_0051a068;
    do {
      pcVar13 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar13 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar13;
    } while (cVar1 != '\0');
    pcVar10 = pcVar14 + -uVar3;
    pcVar14 = pcVar13 + -1;
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar14 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar14 = pcVar14 + 1;
    }
    pcVar10 = s_members_will_pay_big_bucks_for_a_004c4884;
LAB_00406889:
    uVar3 = 0xffffffff;
    do {
      pcVar14 = pcVar10;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar14 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar14;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar7 = -1;
    pcVar10 = (char *)&DAT_0051a068;
    do {
      pcVar13 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar13 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar13;
    } while (cVar1 != '\0');
    pcVar10 = pcVar14 + -uVar3;
    pcVar14 = pcVar13 + -1;
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar14 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar14 = pcVar14 + 1;
    }
  }
  else if (3 < uVar3) {
    uVar6 = 0xffffffff;
    pcVar10 = (&PTR_DAT_004c2a88)[uVar3];
    do {
      pcVar14 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar14 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar14;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar10 = (char *)&DAT_0051a068;
    do {
      pcVar13 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar13 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar13;
    } while (cVar1 != '\0');
    pcVar10 = pcVar14 + -uVar6;
    pcVar14 = pcVar13 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar14 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar14 = pcVar14 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_004c483c;
    do {
      pcVar14 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar14 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar14;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar7 = -1;
    pcVar10 = (char *)&DAT_0051a068;
    do {
      pcVar13 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar13 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar13;
    } while (cVar1 != '\0');
    pcVar10 = pcVar14 + -uVar6;
    pcVar14 = pcVar13 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar14 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar14 = pcVar14 + 1;
    }
    pcVar10 = (char *)FUN_004ad425((-(uVar3 != 4) & 3U) + 2,&DAT_0058a528,10);
    uVar3 = 0xffffffff;
    do {
      pcVar14 = pcVar10;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar14 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar14;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar7 = -1;
    pcVar10 = (char *)&DAT_0051a068;
    do {
      pcVar13 = pcVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar13 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar13;
    } while (cVar1 != '\0');
    pcVar10 = pcVar14 + -uVar3;
    pcVar14 = pcVar13 + -1;
    for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar14 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar14 = pcVar14 + 1;
    }
    pcVar10 = s_00_extra_greens_fees_per_hole__004c481c;
    goto LAB_00406889;
  }
  iVar7 = 0;
  do {
    uVar2 = FUN_0045c1e0(0x4b);
    iVar9 = uVar2 + 1;
    if (*(char *)((int)&DAT_005849e0 + iVar9 * 0x2c + 2) == '\0') {
      if (iVar7 < 1000) {
        *(undefined1 *)((int)&DAT_005849e0 + iVar9 * 0x2c + 2) = 1;
        iVar7 = FUN_0046c940(param_1);
        ppuVar11 = &PTR_DAT_004c4818;
        if (iVar7 == 0) {
          ppuVar11 = (undefined **)&DAT_004c4810;
        }
        uVar3 = 0xffffffff;
        goto code_r0x00406922;
      }
      break;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 1000);
LAB_00406a17:
  uVar3 = 0xffffffff;
  pcVar10 = s_Current_membership____004c47a4;
  do {
    pcVar14 = pcVar10;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar14 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar14;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  uVar6 = 5;
  iVar7 = -1;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar13;
  } while (cVar1 != '\0');
  pcVar10 = pcVar14 + -uVar3;
  pcVar14 = pcVar13 + -1;
  for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar14 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar14 = pcVar14 + 1;
  }
  do {
    if (uVar6 != 0) {
      iVar7 = 0;
      psVar4 = &DAT_00584a0a;
      do {
        if (((*psVar4 != 0) && (*psVar4 != 0)) && ((*(byte *)(psVar4 + -0x14) & 7) == uVar6)) {
          iVar7 = iVar7 + 1;
        }
        if ((*(char *)((int)psVar4 + -1) == -1) && (uVar6 == 0xffffffff)) {
          iVar7 = iVar7 + 1;
        }
        psVar4 = psVar4 + 0x16;
      } while ((int)psVar4 < 0x58571a);
      if (iVar7 != 0) {
        if (uVar6 == 0xffffffff) {
          pcVar10 = s_Resigned__004c4798;
        }
        else {
          uVar3 = 0xffffffff;
          pcVar10 = (&PTR_DAT_004c2a88)[uVar6];
          do {
            pcVar14 = pcVar10;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar14 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar14;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          iVar9 = -1;
          pcVar10 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar10;
            if (iVar9 == 0) break;
            iVar9 = iVar9 + -1;
            pcVar13 = pcVar10 + 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar13;
          } while (cVar1 != '\0');
          pcVar10 = pcVar14 + -uVar3;
          pcVar14 = pcVar13 + -1;
          for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pcVar14 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar14 = pcVar14 + 1;
          }
          if (uVar6 == 2) {
            uVar3 = 0xffffffff;
            pcVar10 = s_Basic_004c4790;
            do {
              pcVar14 = pcVar10;
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              pcVar14 = pcVar10 + 1;
              cVar1 = *pcVar10;
              pcVar10 = pcVar14;
            } while (cVar1 != '\0');
            uVar3 = ~uVar3;
            iVar9 = -1;
            pcVar10 = (char *)&DAT_0051a068;
            do {
              pcVar13 = pcVar10;
              if (iVar9 == 0) break;
              iVar9 = iVar9 + -1;
              pcVar13 = pcVar10 + 1;
              cVar1 = *pcVar10;
              pcVar10 = pcVar13;
            } while (cVar1 != '\0');
            pcVar10 = pcVar14 + -uVar3;
            pcVar14 = pcVar13 + -1;
            for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pcVar14 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar14 = pcVar14 + 1;
            }
            pcVar10 = s_members__004c4784;
          }
          else if ((int)uVar6 < 2) {
            pcVar10 = &DAT_004c4780;
          }
          else {
            pcVar10 = s_members__004c4784;
          }
        }
        uVar3 = 0xffffffff;
        do {
          pcVar14 = pcVar10;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar14 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar14;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        iVar9 = -1;
        pcVar10 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar10;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar13 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar1 != '\0');
        pcVar10 = pcVar14 + -uVar3;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar14 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar14 = pcVar14 + 1;
        }
        pcVar10 = (char *)FUN_004ad425(iVar7,&DAT_0058a528,10);
        uVar3 = 0xffffffff;
        do {
          pcVar14 = pcVar10;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar14 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar14;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        iVar7 = -1;
        pcVar10 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar10;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar1 != '\0');
        pcVar10 = pcVar14 + -uVar3;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar14 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar3 = 0xffffffff;
        pcVar10 = &DAT_004c4778;
        do {
          pcVar14 = pcVar10;
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar14 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar14;
        } while (cVar1 != '\0');
        uVar3 = ~uVar3;
        iVar7 = -1;
        pcVar10 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar10;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar13 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar13;
        } while (cVar1 != '\0');
        pcVar10 = pcVar14 + -uVar3;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar3 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar14 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar14 = pcVar14 + 1;
        }
      }
    }
    uVar6 = uVar6 - 1;
    if ((int)uVar6 < -1) {
      if ((DAT_005a5a00 & 8) != 0) {
        if (DAT_004c2e0c == (param_1 | 0x100)) {
          DAT_005a9ccc = 3;
          DAT_00569498 = 0;
        }
        iVar7 = FUN_0040cb00(0x80004010,0,param_1);
        if (iVar7 != 0) {
          FUN_004481b0(0x38,0x46,0,0,0);
        }
      }
      return;
    }
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    ppuVar12 = (undefined **)((int)ppuVar11 + 1);
    cVar1 = *(char *)ppuVar11;
    ppuVar11 = ppuVar12;
    if (cVar1 == '\0') break;
code_r0x00406922:
    ppuVar12 = ppuVar11;
    if (uVar3 == 0) break;
  }
  uVar3 = ~uVar3;
  iVar7 = -1;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar14 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar14;
  } while (cVar1 != '\0');
  pcVar10 = (char *)((int)ppuVar12 - uVar3);
  pcVar14 = pcVar14 + -1;
  for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar14 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar10 = s_is_also_planning_to_invite_004c47f0;
  do {
    pcVar14 = pcVar10;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar14 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar14;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar7 = -1;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar13;
  } while (cVar1 != '\0');
  pcVar10 = pcVar14 + -uVar3;
  pcVar14 = pcVar13 + -1;
  for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar14 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar14 = pcVar14 + 1;
  }
  iVar7 = FUN_0046c940(param_1);
  pcVar10 = s_his_friend_004c47e4;
  if (iVar7 == 0) {
    pcVar10 = s_her_friend_004c47d8;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar14 = pcVar10;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar14 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar14;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar7 = -1;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar13;
  } while (cVar1 != '\0');
  pcVar10 = pcVar14 + -uVar3;
  pcVar14 = pcVar13 + -1;
  for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar14 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar10 = s_Gary_Golf_004d6098 + iVar9 * 0x230;
  do {
    pcVar14 = pcVar10;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar14 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar14;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar7 = -1;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar13;
  } while (cVar1 != '\0');
  pcVar10 = pcVar14 + -uVar3;
  pcVar14 = pcVar13 + -1;
  for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar14 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar10 = s_to_play_your_course__004c47c0;
  do {
    pcVar14 = pcVar10;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar14 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar14;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar7 = -1;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar13 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar13;
  } while (cVar1 != '\0');
  pcVar10 = pcVar14 + -uVar3;
  pcVar14 = pcVar13 + -1;
  for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar14 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar14 = pcVar14 + 1;
  }
  goto LAB_00406a17;
}

