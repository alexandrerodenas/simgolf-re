/* Ghidra decompiled: golf.exe */
/* Function: FUN_00455ed0 @ 0x00455ED0 */
/* Body size: 1996 addresses */


void FUN_00455ed0(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int iStack_8;
  int iStack_4;
  
  FUN_00474440(&DAT_00519cd4,0,0,0x3e800000,0,1);
  FUN_00473f60(&DAT_00821c24,&DAT_00519cd4,0,0,0);
  FUN_00476310(0x80000000,0xffffffff,2,2);
  uVar7 = 0xffffffff;
  pcVar6 = s_HISTOGRAPH_004d3354;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821020,s_HISTOGRAPH_004d3354,0x177,0x14,~uVar7 - 1);
  FUN_004762d0(&DAT_00821ee8,0,0,0);
  FUN_00404b70(s_Skill_004d334c,0xb1,0x21e,0x80000000);
  FUN_00404b70(&DAT_004c88e8,0x14c,0x21e,0x80000000);
  FUN_00404b70(&PTR_DAT_004d2120,0x1e8,0x21e,0x80000000);
  FUN_00404b70(s_Event_004d3344,0x284,0x21e,0x80000000);
  local_34 = 1;
  if (0x9c4 < DAT_00571fd4) {
    local_34 = 2;
  }
  if (5000 < DAT_00571fd4) {
    local_34 = 4;
  }
  if (10000 < DAT_00571fd4) {
    local_34 = 10;
  }
  if (25000 < DAT_00571fd4) {
    local_34 = 0x14;
  }
  if (50000 < DAT_00571fd4) {
    local_34 = 0x28;
  }
  if (100000 < DAT_00571fd4) {
    local_34 = 0x50;
  }
  iVar8 = 1;
  local_24 = 1;
  if (0x9c4 < DAT_00541cd8) {
    local_24 = 2;
    iVar8 = 2;
  }
  local_28 = 0;
  local_2c = 0;
  iVar14 = 0x202;
  iVar13 = local_34 * -200;
  iVar5 = iVar8 * -2000;
  do {
    DAT_0051a068._0_1_ = 0;
    iVar10 = iVar5;
    if (0x107 < iVar14) {
      iVar10 = local_2c;
    }
    FUN_0042dd50(iVar10);
    FUN_00404b70(&DAT_0051a068,0x4d,iVar14,0x80004010);
    uVar7 = 0xffffffff;
    pcVar6 = &DAT_004c61e0;
    do {
      pcVar16 = pcVar6;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar16 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar6 = pcVar16 + -uVar7;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar16 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar16 = pcVar16 + 1;
    }
    iVar10 = iVar13;
    if (0x107 < iVar14) {
      iVar10 = local_28;
    }
    pcVar6 = (char *)FUN_004ad425(iVar10,&DAT_00821c50,10);
    uVar7 = 0xffffffff;
    do {
      pcVar16 = pcVar6;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar16 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar10 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar17 = pcVar6;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar17 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar1 != '\0');
    pcVar6 = pcVar16 + -uVar7;
    pcVar16 = pcVar17 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar16 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar16 = pcVar16 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar6 = &DAT_004d3340;
    do {
      pcVar16 = pcVar6;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar16 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar16;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar10 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar17 = pcVar6;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar17 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar1 != '\0');
    pcVar6 = pcVar16 + -uVar7;
    pcVar16 = pcVar17 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar16 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar16 = pcVar16 + 1;
    }
    FUN_00404b70(&DAT_0051a068,0x2d7,iVar14,0x80000000);
    iVar5 = iVar5 + iVar8 * 500;
    iVar14 = iVar14 + -0x32;
    local_2c = local_2c + iVar8 * 100;
    iVar13 = iVar13 + local_34 * 0x32;
    local_28 = local_28 + local_34 * 10;
  } while (0xe < iVar14);
  iVar8 = FUN_00467130((int)(600 / (longlong)
                                   (((int)(DAT_00834170 + (DAT_00834170 >> 0x1f & 0x3ffU)) >> 10) +
                                   1)),1,4);
  FUN_004762d0(&DAT_00519fd8,0,0,0);
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_1c = 0;
  local_20 = 0;
  FUN_00475b20(0x6a,0x48,0x256,0x1c2);
  local_18 = 1;
  if (0 < (int)(DAT_00834170 + (DAT_00834170 >> 0x1f & 0x3ffU)) >> 10) {
    iVar5 = iVar8 + 0x6b;
    local_14 = 0x6b;
    local_10 = 0;
    do {
      iVar13 = (int)*(short *)((int)&DAT_005409ae + local_10) / local_24;
      if (iVar13 < 0x1f5) {
        iVar13 = iVar13 / 2;
      }
      else {
        iVar13 = iVar13 / 10 + 200;
      }
      FUN_00478b80(local_14,0x209 - local_28,iVar5,0x209 - iVar13,0x80004010);
      uVar7 = (int)*(short *)((int)&DAT_0051b38a + local_10) / local_34;
      if ((int)uVar7 < 0x1f5) {
        iVar14 = (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f)) / 2;
      }
      else {
        iVar14 = (int)uVar7 / 10 + 200;
      }
      FUN_00478b80(local_14,0x209 - local_2c,iVar5,0x209 - iVar14,
                   ((*(short *)((int)&DAT_0051b38a + local_10) < 0) - 1 & 0xffff82f8) + 0x80007d08);
      sVar2 = *(short *)((int)&DAT_0053e63e + local_10);
      if (sVar2 < 0x1f5) {
        iVar10 = (int)sVar2 / 2;
      }
      else {
        iVar10 = (int)sVar2 / 10 + 200;
      }
      FUN_00478b80(local_14,0x209 - local_30,iVar5,0x209 - iVar10,0x800003e0);
      sVar2 = *(short *)((int)&DAT_00520642 + local_10);
      FUN_00478b80(local_14,0x209 - local_20,iVar5,sVar2 * -4 + 0x209,0x80000210);
      sVar3 = *(short *)((int)&DAT_00568600 + local_10 + 2);
      if (sVar3 == 0) goto LAB_004568d5;
      uVar7 = CONCAT31((int3)(char)((ushort)sVar3 >> 8),(char)sVar3) & 0xffffffe0;
      uVar9 = (int)sVar3 & 0x1f;
      if ((int)uVar7 < 0xc1) {
        if (uVar7 == 0xc0) {
          uVar7 = 0xffffffff;
          pcVar6 = (char *)((int)&DAT_0055d738 + uVar9 * 0x25);
          do {
            pcVar16 = pcVar6;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar16 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar16;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          pcVar6 = pcVar16 + -uVar7;
          pcVar16 = (char *)&DAT_0051a068;
          for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar16 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar16 = pcVar16 + 1;
          }
          uVar7 = 0xffffffff;
          pcVar6 = s_buys_a_home__004d2904;
          do {
            pcVar16 = pcVar6;
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            pcVar16 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar16;
          } while (cVar1 != '\0');
          uVar7 = ~uVar7;
          pcVar16 = pcVar16 + -uVar7;
          iVar12 = -1;
          pcVar6 = (char *)&DAT_0051a068;
          do {
            pcVar17 = pcVar6;
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            pcVar17 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar17;
          } while (cVar1 != '\0');
          pcVar17 = pcVar17 + -1;
        }
        else {
          switch(uVar7) {
          case 0x20:
            uVar7 = 0xffffffff;
            pcVar6 = s_Hole_004c4978;
            do {
              pcVar16 = pcVar6;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar16 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar6 = pcVar16 + -uVar7;
            pcVar16 = (char *)&DAT_0051a068;
            for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar16 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar16 = pcVar16 + 1;
            }
            pcVar6 = (char *)FUN_004ad425(uVar9,&DAT_00821c50,10);
            uVar7 = 0xffffffff;
            do {
              pcVar16 = pcVar6;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar16 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            iVar12 = -1;
            pcVar6 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar6;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar17 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar17;
            } while (cVar1 != '\0');
            pcVar6 = pcVar16 + -uVar7;
            pcVar16 = pcVar17 + -1;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar16 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar16 = pcVar16 + 1;
            }
            uVar7 = 0xffffffff;
            pcVar6 = s_opened__004d294c;
            do {
              pcVar16 = pcVar6;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar16 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar16 = pcVar16 + -uVar7;
            iVar12 = -1;
            pcVar6 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar6;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar17 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar17;
            } while (cVar1 != '\0');
            pcVar17 = pcVar17 + -1;
            break;
          case 0x40:
            uVar7 = 0xffffffff;
            pcVar6 = s_Pathway_004c26b0 + uVar9 * 0x14;
            do {
              pcVar16 = pcVar6;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar16 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar6 = pcVar16 + -uVar7;
            pcVar16 = (char *)&DAT_0051a068;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar16 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar16 = pcVar16 + 1;
            }
            uVar7 = 0xffffffff;
            pcVar6 = s_built__004d2944;
            do {
              pcVar16 = pcVar6;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar16 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar16 = pcVar16 + -uVar7;
            iVar12 = -1;
            pcVar6 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar6;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar17 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar17;
            } while (cVar1 != '\0');
            pcVar17 = pcVar17 + -1;
            break;
          case 0x60:
            uVar7 = 0xffffffff;
            pcVar6 = s_Won_match_vs__004d2914;
            do {
              pcVar16 = pcVar6;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar16 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar6 = pcVar16 + -uVar7;
            pcVar16 = (char *)&DAT_0051a068;
            for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar16 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar16 = pcVar16 + 1;
            }
            uVar7 = 0xffffffff;
            pcVar6 = (char *)(&DAT_0058dd50 + uVar9 * 0xe);
            do {
              pcVar16 = pcVar6;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar16 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar16 = pcVar16 + -uVar7;
            iVar12 = -1;
            pcVar6 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar6;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar17 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar17;
            } while (cVar1 != '\0');
            pcVar17 = pcVar17 + -1;
            break;
          case 0x80:
            uVar7 = 0xffffffff;
            pcVar6 = s_Hole_004c4978;
            do {
              pcVar16 = pcVar6;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar16 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar6 = pcVar16 + -uVar7;
            pcVar16 = (char *)&DAT_0051a068;
            for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar16 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar16 = pcVar16 + 1;
            }
            pcVar6 = (char *)FUN_004ad425(uVar9,&DAT_00821c50,10);
            uVar7 = 0xffffffff;
            do {
              pcVar16 = pcVar6;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar16 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            iVar12 = -1;
            pcVar6 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar6;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar17 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar17;
            } while (cVar1 != '\0');
            pcVar6 = pcVar16 + -uVar7;
            pcVar16 = pcVar17 + -1;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar16 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar16 = pcVar16 + 1;
            }
            uVar7 = 0xffffffff;
            pcVar6 = s_rated_top_100__004d2934;
            do {
              pcVar16 = pcVar6;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar16 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar16 = pcVar16 + -uVar7;
            iVar12 = -1;
            pcVar6 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar6;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar17 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar17;
            } while (cVar1 != '\0');
            pcVar17 = pcVar17 + -1;
            break;
          case 0xa0:
            uVar7 = 0xffffffff;
            pcVar6 = s_Hole_004c4978;
            do {
              pcVar16 = pcVar6;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar16 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar6 = pcVar16 + -uVar7;
            pcVar16 = (char *)&DAT_0051a068;
            for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar16 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar16 = pcVar16 + 1;
            }
            pcVar6 = (char *)FUN_004ad425(uVar9,&DAT_00821c50,10);
            uVar7 = 0xffffffff;
            do {
              pcVar16 = pcVar6;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar16 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            iVar12 = -1;
            pcVar6 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar6;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar17 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar17;
            } while (cVar1 != '\0');
            pcVar6 = pcVar16 + -uVar7;
            pcVar16 = pcVar17 + -1;
            for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar16 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar16 = pcVar16 + 1;
            }
            uVar7 = 0xffffffff;
            pcVar6 = s_rated_top_18__004d2924;
            do {
              pcVar16 = pcVar6;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar16 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar16;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar16 = pcVar16 + -uVar7;
            iVar12 = -1;
            pcVar6 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar6;
              if (iVar12 == 0) break;
              iVar12 = iVar12 + -1;
              pcVar17 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar17;
            } while (cVar1 != '\0');
            pcVar17 = pcVar17 + -1;
            break;
          default:
            goto LAB_00456849;
          }
        }
        goto LAB_0045683d;
      }
      switch(uVar7) {
      case 0xe0:
        uVar7 = 0xffffffff;
        pcVar6 = s_Gary_Golf_004d6098;
        do {
          pcVar16 = pcVar6;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar16 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar6 = pcVar16 + -uVar7;
        pcVar16 = (char *)&DAT_0051a068;
        for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar16 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar7 = 0xffffffff;
        pcVar6 = s_places_004d28f8;
        do {
          pcVar16 = pcVar6;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar16 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar12 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar17 = pcVar6;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pcVar17 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar17;
        } while (cVar1 != '\0');
        pcVar6 = pcVar16 + -uVar7;
        pcVar16 = pcVar17 + -1;
        for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar16 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar16 = pcVar16 + 1;
        }
        pcVar6 = (char *)FUN_004ad425(uVar9,&DAT_00821c50,10);
        uVar7 = 0xffffffff;
        do {
          pcVar16 = pcVar6;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar16 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar12 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar17 = pcVar6;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pcVar17 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar17;
        } while (cVar1 != '\0');
        pcVar6 = pcVar16 + -uVar7;
        pcVar16 = pcVar17 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar16 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar7 = 0xffffffff;
        pcVar6 = s_in_tournament__004d28e8;
        do {
          pcVar16 = pcVar6;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar16 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar16 = pcVar16 + -uVar7;
        iVar12 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar17 = pcVar6;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pcVar17 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar17;
        } while (cVar1 != '\0');
        pcVar17 = pcVar17 + -1;
        break;
      case 0x100:
        uVar7 = 0xffffffff;
        pcVar6 = PTR_s_J_P_Bigdome_004c2c18;
        do {
          pcVar16 = pcVar6;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar16 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar6 = pcVar16 + -uVar7;
        pcVar16 = (char *)&DAT_0051a068;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar16 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar7 = 0xffffffff;
        pcVar6 = s_joins_the_board__004d28d4;
        do {
          pcVar16 = pcVar6;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar16 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar16 = pcVar16 + -uVar7;
        iVar12 = -1;
        pcVar6 = (char *)&DAT_0051a068;
        do {
          pcVar17 = pcVar6;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pcVar17 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar17;
        } while (cVar1 != '\0');
        pcVar17 = pcVar17 + -1;
        break;
      case 0x120:
        uVar7 = 0xffffffff;
        pcVar6 = s_Happy_Ending__004d3330;
        do {
          pcVar16 = pcVar6;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar16 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar16 = pcVar16 + -uVar7;
        pcVar17 = (char *)&DAT_0051a068;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar17 = pcVar17 + 4;
        }
        goto LAB_00456844;
      case 0x140:
        uVar7 = 0xffffffff;
        pcVar6 = s_Additional_land_purchased__004d2894;
        do {
          pcVar16 = pcVar6;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar16 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar16 = pcVar16 + -uVar7;
        pcVar17 = (char *)&DAT_0051a068;
        break;
      case 0x160:
        uVar7 = 0xffffffff;
        pcVar6 = s_Ivana_donates_a_004d28b0;
        do {
          pcVar16 = pcVar6;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar16 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar16;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar6 = pcVar16 + -uVar7;
        pcVar16 = (char *)&DAT_0051a068;
        for (uVar11 = uVar7 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar16 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar16 = pcVar16 + 1;
        }
        FUN_004074a0(uVar9,0);
      default:
        goto LAB_00456849;
      }
LAB_0045683d:
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar17 = pcVar17 + 4;
      }
LAB_00456844:
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar17 = pcVar17 + 1;
      }
LAB_00456849:
      local_1c = local_1c % 0x1c2 + 10;
      FUN_00480b00(iVar5 + 10,0x209 - iVar13,2,2,0x80000210);
      iVar15 = -local_1c + 0x209;
      iVar12 = iVar5 + 0xb;
      FUN_00478b80(iVar12,0x209 - iVar13,iVar12,iVar15,0x800003ff);
      FUN_00480b00(iVar12,iVar15,2,2,0x80000210);
      FUN_004049d0(&DAT_0051a068,iVar5 + 0xe,-local_1c + 0x206,0x80000210);
LAB_004568d5:
      local_14 = local_14 + iVar8;
      iVar5 = iVar5 + iVar8;
      local_18 = local_18 + 1;
      local_10 = local_10 + 2;
      local_30 = iVar10;
      local_2c = iVar14;
      local_28 = iVar13;
      local_20 = sVar2 * 4;
    } while (local_18 <= (int)(DAT_00834170 + (DAT_00834170 >> 0x1f & 0x3ffU)) >> 10);
  }
  if (DAT_00519cd8 != (int *)0x0) {
    (**(code **)(*DAT_00519cd8 + 0xc4))();
  }
  bVar4 = false;
  FUN_00473e60(&DAT_00519cd4,0x2c0,0x227,0);
  FUN_00480c80(0);
  FUN_0045bf80(10,0);
  FUN_00483d30();
  do {
    FUN_0045bf80(1,0);
    FUN_0047ab50(&iStack_8,&iStack_4);
    if ((((iStack_8 < 0x2c0) || (0x2eb < iStack_8)) || (iStack_4 < 0x227)) || (0x252 < iStack_4)) {
      if (bVar4) {
        bVar4 = false;
        goto LAB_004569f1;
      }
    }
    else if (!bVar4) {
      bVar4 = true;
LAB_004569f1:
      FUN_00473e60(&DAT_00519cd4,0x2c0,0x227,0);
      FUN_00480c80(0);
    }
    FUN_0045c030();
    if ((DAT_00822d68 != 0) || (iVar8 = FUN_0045ae70(), iVar8 != 0)) {
      DAT_00569498 = 0;
      FUN_0045c150();
      return;
    }
  } while( true );
}

