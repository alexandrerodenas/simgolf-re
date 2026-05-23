/* Ghidra decompiled: golf.exe */
/* Function: FUN_00454c50 @ 0x00454C50 */
/* Body size: 3329 addresses */


void FUN_00454c50(void)

{
  char cVar1;
  short *psVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  int *piVar16;
  bool bVar17;
  int local_7c;
  uint uStack_78;
  int local_74;
  byte *pbStack_70;
  char *pcStack_6c;
  int iStack_68;
  int iStack_64;
  byte abStack_60 [8];
  char acStack_58 [4];
  char acStack_54 [4];
  char acStack_50 [2];
  char cStack_4e;
  int aiStack_4c [19];
  
  local_74 = 0;
  psVar2 = &DAT_00584a0a;
  local_7c = 0;
  do {
    if (((*(byte *)(psVar2 + -0x14) & 0x80) == 0) && (*psVar2 != 0)) {
      local_74 = local_74 + 1;
    }
    psVar2 = psVar2 + 0x16;
  } while ((int)psVar2 < 0x58571a);
  if (local_74 == 0) {
    local_74 = 1;
  }
  if (DAT_0083ad50 != (int *)0x0) {
    (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
  }
  FUN_00474440(&DAT_00519cd4,0,0,0x3e800000,0,1);
LAB_00454ccb:
  do {
    pcStack_6c = (char *)0x0;
    FUN_00473f60(&DAT_00821f74,&DAT_00519cd4,0,0,0);
    FUN_00476310(0x80000000,0xffffffff,2,2);
    uVar5 = 0xffffffff;
    pcVar3 = s_Membership_Roster_004d32f0;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00476650(&DAT_00821020,s_Membership_Roster_004d32f0,0xd4,0x13,~uVar5 - 1);
    uVar5 = 0xffffffff;
    pcVar3 = s_Member_004c8674;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00476650(&DAT_00821ee8,s_Member_004c8674,0x21,0x3c,~uVar5 - 1);
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_004d32ec;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_004d32ec,0xaa,0x3c,~uVar5 - 1);
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_004d32e8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_004d32e8,0xd1,0x3c,~uVar5 - 1);
    uVar5 = 0xffffffff;
    pcVar3 = &DAT_004d32e0;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_004d32e0,0xf9,0x3c,~uVar5 - 1);
    uVar5 = 0xffffffff;
    pcVar3 = s_Status_004d32d8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00476700(&DAT_00821ee8,s_Status_004d32d8,0x140,0x3c,~uVar5 - 1);
    iVar10 = 1;
    iVar11 = 0x17d;
    do {
      DAT_0051a068._0_1_ = 0;
      pcVar3 = (char *)FUN_004ad425(iVar10,&DAT_00821c50,10);
      uVar5 = 0xffffffff;
      do {
        pcVar14 = pcVar3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar14 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar14;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar6 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar13 = pcVar3;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar13 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar13;
      } while (cVar1 != '\0');
      pcVar3 = pcVar14 + -uVar5;
      pcVar14 = pcVar13 + -1;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar14 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar14 = pcVar14 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_004766a0(&DAT_00821ee8,&DAT_0051a068,iVar11,0x3c,0x13,~uVar5 - 1);
      iVar11 = iVar11 + 0x15;
      iVar10 = iVar10 + 1;
    } while (iVar11 < 0x2f7);
    if (0x16 < local_74) {
      iVar11 = (local_7c * 0x16c) / local_74;
      FUN_00473e60(&DAT_00519cd4,0x2ff,0x50,0);
      iVar10 = (int)(0x1f48 / (longlong)local_74);
      iVar6 = 0x16c - iVar11;
      if (iVar6 <= iVar10) {
        iVar10 = iVar6;
      }
      FUN_00480b00(0x305,iVar11 + 0x7a,6,iVar10,0x80007fff);
    }
    iVar10 = 0x59;
    do {
      acStack_58[0] = s_zzzzzzzzzzzzzzzzzz_004d32c4[8];
      acStack_58[1] = s_zzzzzzzzzzzzzzzzzz_004d32c4[9];
      acStack_58[2] = s_zzzzzzzzzzzzzzzzzz_004d32c4[10];
      acStack_58[3] = s_zzzzzzzzzzzzzzzzzz_004d32c4[0xb];
      abStack_60[0] = s_zzzzzzzzzzzzzzzzzz_004d32c4[0];
      abStack_60[1] = s_zzzzzzzzzzzzzzzzzz_004d32c4[1];
      abStack_60[2] = s_zzzzzzzzzzzzzzzzzz_004d32c4[2];
      abStack_60[3] = s_zzzzzzzzzzzzzzzzzz_004d32c4[3];
      abStack_60[4] = s_zzzzzzzzzzzzzzzzzz_004d32c4[4];
      abStack_60[5] = s_zzzzzzzzzzzzzzzzzz_004d32c4[5];
      abStack_60[6] = s_zzzzzzzzzzzzzzzzzz_004d32c4[6];
      abStack_60[7] = s_zzzzzzzzzzzzzzzzzz_004d32c4[7];
      cStack_4e = s_zzzzzzzzzzzzzzzzzz_004d32c4[0x12];
      acStack_54[0] = s_zzzzzzzzzzzzzzzzzz_004d32c4[0xc];
      acStack_54[1] = s_zzzzzzzzzzzzzzzzzz_004d32c4[0xd];
      acStack_54[2] = s_zzzzzzzzzzzzzzzzzz_004d32c4[0xe];
      acStack_54[3] = s_zzzzzzzzzzzzzzzzzz_004d32c4[0xf];
      acStack_50[0] = s_zzzzzzzzzzzzzzzzzz_004d32c4[0x10];
      acStack_50[1] = s_zzzzzzzzzzzzzzzzzz_004d32c4[0x11];
      uVar5 = -1;
      uStack_78 = 0;
      pbStack_70 = (byte *)s_Gary_Golf_004d6098;
      psVar2 = &DAT_00584a0a;
      do {
        if (((*(byte *)(psVar2 + -0x14) & 0x80) == 0) && (*psVar2 != 0)) {
          pbVar4 = abStack_60;
          pbVar12 = pbStack_70;
          do {
            bVar9 = *pbVar4;
            bVar17 = bVar9 < *pbVar12;
            if (bVar9 != *pbVar12) {
LAB_00454fad:
              iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_00454fb2;
            }
            if (bVar9 == 0) break;
            bVar9 = pbVar4[1];
            bVar17 = bVar9 < pbVar12[1];
            if (bVar9 != pbVar12[1]) goto LAB_00454fad;
            pbVar4 = pbVar4 + 2;
            pbVar12 = pbVar12 + 2;
          } while (bVar9 != 0);
          iVar11 = 0;
LAB_00454fb2:
          if (-1 < iVar11) {
            uVar7 = 0xffffffff;
            pbVar4 = pbStack_70;
            do {
              pbVar12 = pbVar4;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pbVar12 = pbVar4 + 1;
              bVar9 = *pbVar4;
              pbVar4 = pbVar12;
            } while (bVar9 != 0);
            uVar7 = ~uVar7;
            pbVar4 = pbVar12 + -uVar7;
            pbVar12 = abStack_60;
            for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined4 *)pbVar12 = *(undefined4 *)pbVar4;
              pbVar4 = pbVar4 + 4;
              pbVar12 = pbVar12 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar5 = uStack_78, uVar7 != 0; uVar7 = uVar7 - 1) {
              *pbVar12 = *pbVar4;
              pbVar4 = pbVar4 + 1;
              pbVar12 = pbVar12 + 1;
            }
          }
        }
        psVar2 = psVar2 + 0x16;
        uStack_78 = uStack_78 + 1;
        pbStack_70 = pbStack_70 + 0x230;
      } while ((int)psVar2 < 0x58571a);
      if (uVar5 == -1) break;
      iVar11 = uVar5 * 0x2c;
      bVar9 = *(byte *)((int)&DAT_005849e0 + iVar11 + 2) | 0x80;
      *(byte *)((int)&DAT_005849e0 + iVar11 + 2) = bVar9;
      if ((int)pcStack_6c < local_7c) {
        pcStack_6c = (char *)((int)pcStack_6c + 1);
      }
      else {
        uStack_78 = bVar9 & 7;
        if ((&DAT_00584a09)[iVar11] == -1) {
          uStack_78 = 0xffffffff;
        }
        uVar7 = 0xffffffff;
        pcVar3 = s_Gary_Golf_004d6098 + uVar5 * 0x230;
        do {
          pcVar14 = pcVar3;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar14 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar14;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar3 = pcVar14 + -uVar7;
        pcVar14 = (char *)&DAT_0051a068;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar14 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar7 = 0xffffffff;
        pcVar3 = (char *)&DAT_0051a068;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1c,iVar10,~uVar7 - 1);
        if (uStack_78 != 1) {
          FUN_00473e60(&DAT_00519cd4,0x7a,iVar10 + -4,0);
        }
        DAT_0051a068._0_1_ = 0;
        if (*(char *)(&DAT_005849e0 + uVar5 * 0xb) == '\0') {
          pcVar3 = &DAT_004c52bc;
        }
        else {
          pcVar3 = (char *)FUN_004ad425(*(char *)(&DAT_005849e0 + uVar5 * 0xb),&DAT_00821c50,10);
        }
        uVar7 = 0xffffffff;
        do {
          pcVar14 = pcVar3;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar14 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar14;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar6 = -1;
        pcVar3 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar3;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar13 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar13;
        } while (cVar1 != '\0');
        pcVar3 = pcVar14 + -uVar7;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar14 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar7 = 0xffffffff;
        pcVar3 = (char *)&DAT_0051a068;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0xaa,iVar10,~uVar7 - 1);
        cVar1 = *(char *)((int)&DAT_005849e0 + iVar11 + 1);
        DAT_0051a068._0_1_ = 0;
        if (cVar1 < '\x01') {
          pcVar3 = &DAT_004c52bc;
        }
        else {
          pcVar3 = (char *)FUN_004ad425((int)cVar1,&DAT_00821c50,10);
        }
        uVar7 = 0xffffffff;
        do {
          pcVar14 = pcVar3;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar14 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar14;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar6 = -1;
        pcVar3 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar3;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar13 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar13;
        } while (cVar1 != '\0');
        pcVar3 = pcVar14 + -uVar7;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar14 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar7 = 0xffffffff;
        pcVar3 = (char *)&DAT_0051a068;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0xd1,iVar10,~uVar7 - 1);
        DAT_0051a068._0_1_ = 0;
        if ((&DAT_00584a0a)[uVar5 * 0x16] == 0) {
          pcVar3 = &DAT_004c52bc;
        }
        else {
          pcVar3 = (char *)FUN_004ad425((int)(short)(&DAT_00584a0a)[uVar5 * 0x16],&DAT_00821c50,10);
        }
        uVar5 = 0xffffffff;
        do {
          pcVar14 = pcVar3;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar14 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar14;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar6 = -1;
        pcVar3 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar3;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar13 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar13;
        } while (cVar1 != '\0');
        pcVar3 = pcVar14 + -uVar5;
        pcVar14 = pcVar13 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar14 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar14 = pcVar14 + 1;
        }
        uVar5 = 0xffffffff;
        pcVar3 = (char *)&DAT_0051a068;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0xf9,iVar10,~uVar5 - 1);
        iVar6 = 1;
        iVar15 = 0x17d;
        do {
          if ((*(byte *)(iVar11 + 0x5849e3 + iVar6) & 3) != 0) {
            FUN_00473e60(&DAT_00519cd4,iVar15,iVar10 + -4,0);
          }
          if ((*(byte *)(iVar11 + 0x5849e3 + iVar6) & 4) != 0) {
            FUN_00473e60(&DAT_00519cd4,iVar15,iVar10 + -4,0);
          }
          iVar15 = iVar15 + 0x15;
          iVar6 = iVar6 + 1;
        } while (iVar15 < 0x2f7);
        switch(uStack_78) {
        default:
          goto LAB_00455411;
        case 1:
          uVar5 = 0xffffffff;
          pcVar3 = s_Visitor_004c3ac0;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          iVar11 = ~uVar5 - 1;
          pcVar3 = s_Visitor_004c3ac0;
          break;
        case 2:
          uVar5 = 0xffffffff;
          pcVar3 = s_Member_004c8674;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          iVar11 = ~uVar5 - 1;
          pcVar3 = s_Member_004c8674;
          break;
        case 3:
          uVar5 = 0xffffffff;
          pcVar3 = s_Silver_Member_004c8664;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          iVar11 = ~uVar5 - 1;
          pcVar3 = s_Silver_Member_004c8664;
          break;
        case 4:
          uVar5 = 0xffffffff;
          pcVar3 = s_Gold_Member_004c8658;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          iVar11 = ~uVar5 - 1;
          pcVar3 = s_Gold_Member_004c8658;
          break;
        case 0xffffffff:
          uVar5 = 0xffffffff;
          pcVar3 = s_Resigned_004c867c;
          do {
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          iVar11 = ~uVar5 - 1;
          pcVar3 = s_Resigned_004c867c;
        }
        FUN_00476700(&DAT_00821ee8,pcVar3,0x140,iVar10,iVar11);
LAB_00455411:
        iVar10 = iVar10 + 0x14;
      }
    } while (iVar10 < 0x211);
    uVar5 = 0xffffffff;
    pcVar3 = s_Member_004c8674;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00476700(&DAT_00821ee8,s_Member_004c8674,0x52,0x218,~uVar5 - 1);
    uVar5 = 0xffffffff;
    pcVar3 = s_Silver_Member_004c8664;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00476700(&DAT_00821ee8,s_Silver_Member_004c8664,0xd0,0x218,~uVar5 - 1);
    uVar5 = 0xffffffff;
    pcVar3 = s_Gold_Member_004c8658;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00476700(&DAT_00821ee8,s_Gold_Member_004c8658,0x146,0x218,~uVar5 - 1);
    uVar5 = 0xffffffff;
    pcVar3 = s_Resigned_004c867c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00476700(&DAT_00821ee8,s_Resigned_004c867c,0x1c2,0x218,~uVar5 - 1);
    uVar5 = 0xffffffff;
    pcVar3 = s_Photo_Opp_004d32b8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00476700(&DAT_00821ee8,s_Photo_Opp_004d32b8,0x23d,0x218,~uVar5 - 1);
    uVar5 = 0xffffffff;
    pcVar3 = s_Happy_Ending_004d32a8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00476700(&DAT_00821ee8,s_Happy_Ending_004d32a8,0x2b5,0x218,~uVar5 - 1);
    piVar16 = aiStack_4c;
    for (iVar10 = 0x13; iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar16 = 0;
      piVar16 = piVar16 + 1;
    }
    pcStack_6c = s_Gary_Golf_004d6098;
    iVar11 = 0x5849e3;
    iVar10 = 0;
    do {
      iVar6 = iVar10;
      if (*(char *)(iVar11 + 0x26) == -1) {
        iVar6 = 1;
        piVar16 = aiStack_4c;
        do {
          piVar16 = piVar16 + 1;
          if ((*(byte *)(iVar11 + iVar6) & 4) != 0) {
            *piVar16 = *piVar16 + 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x13);
        iVar6 = iVar10 + 1;
        if (iVar10 != 0) {
          uVar5 = 0xffffffff;
          pcVar3 = &DAT_004c52b8;
          do {
            pcVar14 = pcVar3;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar14 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar14;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          iVar10 = -1;
          pcVar3 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar3;
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            pcVar13 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar13;
          } while (cVar1 != '\0');
          pcVar3 = pcVar14 + -uVar5;
          pcVar14 = pcVar13 + -1;
          for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar14 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar14 = pcVar14 + 1;
          }
        }
        uVar5 = 0xffffffff;
        pcVar3 = pcStack_6c;
        do {
          pcVar14 = pcVar3;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar14 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar14;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar10 = -1;
        pcVar3 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar3;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar13 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar13;
        } while (cVar1 != '\0');
        pcVar3 = pcVar14 + -uVar5;
        pcVar14 = pcVar13 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar14 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar14 = pcVar14 + 1;
        }
        if (9 < iVar6) {
          uVar5 = 0xffffffff;
          pcVar3 = (char *)&DAT_004c76a8;
          do {
            pcVar14 = pcVar3;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar14 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar14;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          iVar10 = -1;
          pcVar3 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar3;
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            pcVar13 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar13;
          } while (cVar1 != '\0');
          pcVar3 = pcVar14 + -uVar5;
          pcVar14 = pcVar13 + -1;
          for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar14 = pcVar14 + 4;
          }
          iVar6 = 0;
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar14 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar14 = pcVar14 + 1;
          }
          uVar5 = 0xffffffff;
          pcVar3 = &DAT_004c3f70;
          do {
            pcVar14 = pcVar3;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar14 = pcVar3 + 1;
            cVar1 = *pcVar3;
            pcVar3 = pcVar14;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar3 = pcVar14 + -uVar5;
          pcVar14 = (char *)&DAT_0051a068;
          for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
            pcVar3 = pcVar3 + 4;
            pcVar14 = pcVar14 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar14 = *pcVar3;
            pcVar3 = pcVar3 + 1;
            pcVar14 = pcVar14 + 1;
          }
        }
      }
      iVar11 = iVar11 + 0x2c;
      pcStack_6c = pcStack_6c + 0x230;
      iVar10 = iVar6;
    } while (iVar11 < 0x5856f3);
    if (iVar6 == 0) {
      uVar5 = 0xffffffff;
      pcVar3 = s_none_004d32a0;
      do {
        pcVar14 = pcVar3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar14 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar14;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar10 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar13 = pcVar3;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar13;
      } while (cVar1 != '\0');
      pcVar3 = pcVar14 + -uVar5;
      pcVar14 = pcVar13 + -1;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar14 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
    uVar5 = 0xffffffff;
    piVar16 = aiStack_4c;
    pcVar3 = &DAT_004c4944;
    do {
      pcVar14 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar14 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar14;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar11 = 0x12;
    iVar10 = -1;
    pcVar3 = (char *)&DAT_0051a068;
    do {
      pcVar13 = pcVar3;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar13 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar13;
    } while (cVar1 != '\0');
    pcVar3 = pcVar14 + -uVar5;
    pcVar14 = pcVar13 + -1;
    for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar14 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar14 = pcVar14 + 1;
    }
    do {
      piVar16 = piVar16 + 1;
      if (*piVar16 != 0) {
        DAT_0051a068._0_1_ = 0;
        pcVar3 = (char *)FUN_004ad425(*piVar16,&DAT_00821c50,10);
        uVar5 = 0xffffffff;
        do {
          pcVar14 = pcVar3;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar14 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar14;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        iVar10 = -1;
        pcVar3 = (char *)&DAT_0051a068;
        do {
          pcVar13 = pcVar3;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar13 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar13;
        } while (cVar1 != '\0');
        pcVar3 = pcVar14 + -uVar5;
        pcVar14 = pcVar13 + -1;
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar14 = pcVar14 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar14 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar14 = pcVar14 + 1;
        }
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    pbVar4 = (byte *)((int)&DAT_005849e0 + 2);
    do {
      pbVar12 = pbVar4 + 0x2c;
      *pbVar4 = *pbVar4 & 0x7f;
      pbVar4 = pbVar12;
    } while ((int)pbVar12 < 0x5856f2);
    FUN_0047ab50(&iStack_68,&iStack_64);
    iVar10 = -1;
    FUN_00473e60(&DAT_00519cd4,0x2dc,0x224,0);
    FUN_00480c80(0);
    FUN_0045bf80(10,0);
    FUN_00483d30();
    bVar17 = false;
LAB_00455785:
    FUN_0045bf80(1,0);
    FUN_0047ab50(&iStack_68,&iStack_64);
    if ((((0x2db < iStack_68) && (iStack_68 < 0x308)) && (0x223 < iStack_64)) && (iStack_64 < 0x250)
       ) {
      if (iVar10 == 0) goto LAB_00455945;
      if (iVar10 < 1) {
        iVar10 = 0;
        FUN_00473e60(&DAT_00519cd4,0x2dc,0x224,0);
        goto LAB_00455939;
      }
      bVar17 = true;
      iVar10 = 0;
      goto LAB_0045597e;
    }
    if ((0x2fe < iStack_68) && (iStack_68 < 0x311)) {
      if ((iStack_64 < 0x50) || (0x74 < iStack_64)) {
        if (((0x310 < iStack_68) || (iStack_64 < 0x1ea)) || (0x20e < iStack_64)) goto LAB_00455905;
        if (iVar10 != 2) {
          if (iVar10 == 0) {
            FUN_00473e60(&DAT_00519cd4,0x2dc,0x224,0);
          }
          else if (0 < iVar10) {
            bVar17 = true;
            iVar10 = 2;
            goto LAB_0045597e;
          }
          iVar10 = 2;
          FUN_00473e60(&DAT_00519cd4,0x2ff,0x1ea,0);
          goto LAB_00455939;
        }
      }
      else if (iVar10 != 1) {
        if (iVar10 == 0) {
          FUN_00473e60(&DAT_00519cd4,0x2dc,0x224,0);
        }
        else if (0 < iVar10) {
          bVar17 = true;
          iVar10 = 1;
          goto LAB_0045597e;
        }
        iVar10 = 1;
        FUN_00473e60(&DAT_00519cd4,0x2ff,0x50,0);
        goto LAB_00455939;
      }
      goto LAB_00455945;
    }
LAB_00455905:
    if (iVar10 == -1) goto LAB_00455945;
    if (iVar10 == 0) {
      FUN_00473e60(&DAT_00519cd4,0x2dc,0x224,0);
LAB_00455936:
      iVar10 = -1;
LAB_00455939:
      FUN_00480c80(0);
LAB_00455945:
      FUN_0045c030();
      if ((DAT_00822d68 != 0) || (iVar11 = FUN_0045ae70(), iVar11 != 0)) goto LAB_0045597e;
      goto LAB_00455785;
    }
    if (iVar10 < 1) goto LAB_00455936;
    bVar17 = true;
    iVar10 = -1;
LAB_0045597e:
    if (DAT_00822d68 == 1) {
      if (iVar10 == 0) goto LAB_004559fc;
      if (iVar10 == 1) {
        if (0 < local_7c) {
          iVar10 = FUN_00467130(local_7c,1,3);
          local_7c = local_7c - iVar10;
        }
      }
      else if ((iVar10 == 2) && (local_7c < local_74 + -0x16)) {
        iVar10 = FUN_00467130((local_74 - local_7c) + -0x16,1,3);
        local_7c = local_7c + iVar10;
      }
      goto LAB_00454ccb;
    }
    if (!bVar17) {
LAB_004559fc:
      DAT_00569498 = 0;
      FUN_0045c150();
      return;
    }
  } while( true );
}

