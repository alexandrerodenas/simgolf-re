/* Ghidra decompiled: golf.exe */
/* Function: FUN_00455ed0 @ 0x00455ED0 */


void FUN_00455ed0(void)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
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
  uVar6 = 0xffffffff;
  pcVar5 = s_HISTOGRAPH_004d3354;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821020,s_HISTOGRAPH_004d3354,0x177,0x14,~uVar6 - 1);
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
  iVar7 = 1;
  local_24 = 1;
  if (0x9c4 < DAT_00541cd8) {
    local_24 = 2;
    iVar7 = 2;
  }
  local_28 = 0;
  local_2c = 0;
  iVar13 = 0x202;
  iVar12 = local_34 * -200;
  iVar4 = iVar7 * -2000;
  do {
    DAT_0051a068._0_1_ = 0;
    iVar9 = iVar4;
    if (0x107 < iVar13) {
      iVar9 = local_2c;
    }
    FUN_0042dd50(iVar9);
    FUN_00404b70(&DAT_0051a068,0x4d,iVar13,0x80004010);
    uVar6 = 0xffffffff;
    pcVar5 = &DAT_004c61e0;
    do {
      pcVar16 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar16 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar16;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar5 = pcVar16 + -uVar6;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar16 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar16 = pcVar16 + 1;
    }
    iVar9 = iVar12;
    if (0x107 < iVar13) {
      iVar9 = local_28;
    }
    pcVar5 = (char *)FUN_004ad425(iVar9,&DAT_00821c50,10);
    uVar6 = 0xffffffff;
    do {
      pcVar16 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar16 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar16;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      pcVar17 = pcVar5;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar17 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar17;
    } while (cVar1 != '\0');
    pcVar5 = pcVar16 + -uVar6;
    pcVar16 = pcVar17 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar16 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar16 = pcVar16 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar5 = &DAT_004d3340;
    do {
      pcVar16 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar16 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar16;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      pcVar17 = pcVar5;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar17 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar17;
    } while (cVar1 != '\0');
    pcVar5 = pcVar16 + -uVar6;
    pcVar16 = pcVar17 + -1;
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar16 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar16 = pcVar16 + 1;
    }
    FUN_00404b70(&DAT_0051a068,0x2d7,iVar13,0x80000000);
    iVar4 = iVar4 + iVar7 * 500;
    iVar13 = iVar13 + -0x32;
    local_2c = local_2c + iVar7 * 100;
    iVar12 = iVar12 + local_34 * 0x32;
    local_28 = local_28 + local_34 * 10;
  } while (0xe < iVar13);
  iVar7 = FUN_00467130((int)(600 / (longlong)
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
    iVar4 = iVar7 + 0x6b;
    local_14 = 0x6b;
    local_10 = 0;
    do {
      iVar12 = (int)*(short *)((int)&DAT_005409ac + local_10 + 2) / local_24;
      if (iVar12 < 0x1f5) {
        iVar12 = iVar12 / 2;
      }
      else {
        iVar12 = iVar12 / 10 + 200;
      }
      FUN_00478b80(local_14,0x209 - local_28,iVar4,0x209 - iVar12,0x80004010);
      sVar2 = *(short *)((int)&DAT_0051b388 + local_10 + 2);
      uVar6 = (int)sVar2 / local_34;
      if ((int)uVar6 < 0x1f5) {
        iVar13 = (int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) / 2;
      }
      else {
        iVar13 = (int)uVar6 / 10 + 200;
      }
      FUN_00478b80(local_14,0x209 - local_2c,iVar4,0x209 - iVar13,
                   ((sVar2 < 0) - 1 & 0xffff82f8) + 0x80007d08);
      sVar2 = *(short *)((int)&DAT_0053e63c + local_10 + 2);
      if (sVar2 < 0x1f5) {
        iVar9 = (int)sVar2 / 2;
      }
      else {
        iVar9 = (int)sVar2 / 10 + 200;
      }
      FUN_00478b80(local_14,0x209 - local_30,iVar4,0x209 - iVar9,0x800003e0);
      iVar14 = (int)*(short *)((int)&DAT_00520640 + local_10 + 2);
      FUN_00478b80(local_14,0x209 - local_20,iVar4,iVar14 * -4 + 0x209,0x80000210);
      sVar2 = *(short *)((int)&DAT_00568600 + local_10 + 2);
      if (sVar2 == 0) goto LAB_004568d5;
      uVar6 = CONCAT31((int3)(char)((ushort)sVar2 >> 8),(char)sVar2) & 0xffffffe0;
      uVar8 = (int)sVar2 & 0x1f;
      if ((int)uVar6 < 0xc1) {
        if (uVar6 == 0xc0) {
          uVar6 = 0xffffffff;
          pcVar5 = (char *)((int)&DAT_0055d738 + uVar8 * 0x25);
          do {
            pcVar16 = pcVar5;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar16 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar16;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          pcVar5 = pcVar16 + -uVar6;
          pcVar16 = (char *)&DAT_0051a068;
          for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar16 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar16 = pcVar16 + 1;
          }
          uVar6 = 0xffffffff;
          pcVar5 = s_buys_a_home__004d2904;
          do {
            pcVar16 = pcVar5;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar16 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar16;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          pcVar16 = pcVar16 + -uVar6;
          iVar11 = -1;
          pcVar5 = (char *)&DAT_0051a068;
          do {
            pcVar17 = pcVar5;
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            pcVar17 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar17;
          } while (cVar1 != '\0');
          pcVar17 = pcVar17 + -1;
        }
        else {
          switch(uVar6) {
          case 0x20:
            uVar6 = 0xffffffff;
            pcVar5 = s_Hole_004c4978;
            do {
              pcVar16 = pcVar5;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar16 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar16;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar5 = pcVar16 + -uVar6;
            pcVar16 = (char *)&DAT_0051a068;
            for (uVar10 = uVar6 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar16 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar16 = pcVar16 + 1;
            }
            pcVar5 = (char *)FUN_004ad425(uVar8,&DAT_00821c50,10);
            uVar6 = 0xffffffff;
            do {
              pcVar16 = pcVar5;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar16 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar16;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            iVar11 = -1;
            pcVar5 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar5;
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              pcVar17 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar17;
            } while (cVar1 != '\0');
            pcVar5 = pcVar16 + -uVar6;
            pcVar16 = pcVar17 + -1;
            for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar16 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar16 = pcVar16 + 1;
            }
            uVar6 = 0xffffffff;
            pcVar5 = s_opened__004d294c;
            do {
              pcVar16 = pcVar5;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar16 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar16;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar16 = pcVar16 + -uVar6;
            iVar11 = -1;
            pcVar5 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar5;
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              pcVar17 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar17;
            } while (cVar1 != '\0');
            pcVar17 = pcVar17 + -1;
            break;
          case 0x40:
            uVar6 = 0xffffffff;
            pcVar5 = s_Pathway_004c26b0 + uVar8 * 0x14;
            do {
              pcVar16 = pcVar5;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar16 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar16;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar5 = pcVar16 + -uVar6;
            pcVar16 = (char *)&DAT_0051a068;
            for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar16 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar16 = pcVar16 + 1;
            }
            uVar6 = 0xffffffff;
            pcVar5 = s_built__004d2944;
            do {
              pcVar16 = pcVar5;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar16 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar16;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar16 = pcVar16 + -uVar6;
            iVar11 = -1;
            pcVar5 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar5;
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              pcVar17 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar17;
            } while (cVar1 != '\0');
            pcVar17 = pcVar17 + -1;
            break;
          case 0x60:
            uVar6 = 0xffffffff;
            pcVar5 = s_Won_match_vs__004d2914;
            do {
              pcVar16 = pcVar5;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar16 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar16;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar5 = pcVar16 + -uVar6;
            pcVar16 = (char *)&DAT_0051a068;
            for (uVar10 = uVar6 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar16 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar16 = pcVar16 + 1;
            }
            uVar6 = 0xffffffff;
            pcVar5 = &DAT_0058dd50 + uVar8 * 0x38;
            do {
              pcVar16 = pcVar5;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar16 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar16;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar16 = pcVar16 + -uVar6;
            iVar11 = -1;
            pcVar5 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar5;
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              pcVar17 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar17;
            } while (cVar1 != '\0');
            pcVar17 = pcVar17 + -1;
            break;
          case 0x80:
            uVar6 = 0xffffffff;
            pcVar5 = s_Hole_004c4978;
            do {
              pcVar16 = pcVar5;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar16 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar16;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar5 = pcVar16 + -uVar6;
            pcVar16 = (char *)&DAT_0051a068;
            for (uVar10 = uVar6 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar16 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar16 = pcVar16 + 1;
            }
            pcVar5 = (char *)FUN_004ad425(uVar8,&DAT_00821c50,10);
            uVar6 = 0xffffffff;
            do {
              pcVar16 = pcVar5;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar16 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar16;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            iVar11 = -1;
            pcVar5 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar5;
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              pcVar17 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar17;
            } while (cVar1 != '\0');
            pcVar5 = pcVar16 + -uVar6;
            pcVar16 = pcVar17 + -1;
            for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar16 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar16 = pcVar16 + 1;
            }
            uVar6 = 0xffffffff;
            pcVar5 = s_rated_top_100__004d2934;
            do {
              pcVar16 = pcVar5;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar16 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar16;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar16 = pcVar16 + -uVar6;
            iVar11 = -1;
            pcVar5 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar5;
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              pcVar17 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar17;
            } while (cVar1 != '\0');
            pcVar17 = pcVar17 + -1;
            break;
          case 0xa0:
            uVar6 = 0xffffffff;
            pcVar5 = s_Hole_004c4978;
            do {
              pcVar16 = pcVar5;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar16 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar16;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar5 = pcVar16 + -uVar6;
            pcVar16 = (char *)&DAT_0051a068;
            for (uVar10 = uVar6 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar16 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar16 = pcVar16 + 1;
            }
            pcVar5 = (char *)FUN_004ad425(uVar8,&DAT_00821c50,10);
            uVar6 = 0xffffffff;
            do {
              pcVar16 = pcVar5;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar16 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar16;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            iVar11 = -1;
            pcVar5 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar5;
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              pcVar17 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar17;
            } while (cVar1 != '\0');
            pcVar5 = pcVar16 + -uVar6;
            pcVar16 = pcVar17 + -1;
            for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
              pcVar5 = pcVar5 + 4;
              pcVar16 = pcVar16 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar16 = *pcVar5;
              pcVar5 = pcVar5 + 1;
              pcVar16 = pcVar16 + 1;
            }
            uVar6 = 0xffffffff;
            pcVar5 = s_rated_top_18__004d2924;
            do {
              pcVar16 = pcVar5;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar16 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar16;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar16 = pcVar16 + -uVar6;
            iVar11 = -1;
            pcVar5 = (char *)&DAT_0051a068;
            do {
              pcVar17 = pcVar5;
              if (iVar11 == 0) break;
              iVar11 = iVar11 + -1;
              pcVar17 = pcVar5 + 1;
              cVar1 = *pcVar5;
              pcVar5 = pcVar17;
            } while (cVar1 != '\0');
            pcVar17 = pcVar17 + -1;
            break;
          default:
            goto switchD_00456434_default;
          }
        }
        goto LAB_0045683d;
      }
      switch(uVar6) {
      case 0xe0:
        uVar6 = 0xffffffff;
        pcVar5 = s_Gary_Golf_004d6098;
        do {
          pcVar16 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar5 = pcVar16 + -uVar6;
        pcVar16 = (char *)&DAT_0051a068;
        for (uVar10 = uVar6 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar5 = s_places_004d28f8;
        do {
          pcVar16 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar11 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar17 = pcVar5;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pcVar17 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar17;
        } while (cVar1 != '\0');
        pcVar5 = pcVar16 + -uVar6;
        pcVar16 = pcVar17 + -1;
        for (uVar10 = uVar6 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        pcVar5 = (char *)FUN_004ad425(uVar8,&DAT_00821c50,10);
        uVar6 = 0xffffffff;
        do {
          pcVar16 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar11 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar17 = pcVar5;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pcVar17 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar17;
        } while (cVar1 != '\0');
        pcVar5 = pcVar16 + -uVar6;
        pcVar16 = pcVar17 + -1;
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar5 = s_in_tournament__004d28e8;
        do {
          pcVar16 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar16 = pcVar16 + -uVar6;
        iVar11 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar17 = pcVar5;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pcVar17 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar17;
        } while (cVar1 != '\0');
        pcVar17 = pcVar17 + -1;
        break;
      case 0x100:
        uVar6 = 0xffffffff;
        pcVar5 = PTR_s_J_P_Bigdome_004c2c18;
        do {
          pcVar16 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar5 = pcVar16 + -uVar6;
        pcVar16 = (char *)&DAT_0051a068;
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar5 = s_joins_the_board__004d28d4;
        do {
          pcVar16 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar16 = pcVar16 + -uVar6;
        iVar11 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar17 = pcVar5;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pcVar17 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar17;
        } while (cVar1 != '\0');
        pcVar17 = pcVar17 + -1;
        break;
      case 0x120:
        uVar6 = 0xffffffff;
        pcVar5 = s_Happy_Ending__004d3330;
        do {
          pcVar16 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar16 = pcVar16 + -uVar6;
        pcVar17 = (char *)&DAT_0051a068;
        for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
          pcVar16 = pcVar16 + 4;
          pcVar17 = pcVar17 + 4;
        }
        goto LAB_00456844;
      case 0x140:
        uVar6 = 0xffffffff;
        pcVar5 = s_Additional_land_purchased__004d2894;
        do {
          pcVar16 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar16 = pcVar16 + -uVar6;
        pcVar17 = (char *)&DAT_0051a068;
        break;
      case 0x160:
        uVar6 = 0xffffffff;
        pcVar5 = s_Ivana_donates_a_004d28b0;
        do {
          pcVar16 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar16 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar5 = pcVar16 + -uVar6;
        pcVar16 = (char *)&DAT_0051a068;
        for (uVar10 = uVar6 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        FUN_004074a0(uVar8,0);
      default:
        goto switchD_00456434_default;
      }
LAB_0045683d:
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar17 = pcVar17 + 4;
      }
LAB_00456844:
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar17 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar17 = pcVar17 + 1;
      }
switchD_00456434_default:
      local_1c = local_1c % 0x1c2 + 10;
      FUN_00480b00(iVar4 + 10,0x209 - iVar12,2,2,0x80000210);
      iVar15 = -local_1c + 0x209;
      iVar11 = iVar4 + 0xb;
      FUN_00478b80(iVar11,0x209 - iVar12,iVar11,iVar15,0x800003ff);
      FUN_00480b00(iVar11,iVar15,2,2,0x80000210);
      FUN_004049d0(&DAT_0051a068,iVar4 + 0xe,-local_1c + 0x206,0x80000210);
LAB_004568d5:
      local_14 = local_14 + iVar7;
      iVar4 = iVar4 + iVar7;
      local_18 = local_18 + 1;
      local_10 = local_10 + 2;
      local_30 = iVar9;
      local_2c = iVar13;
      local_28 = iVar12;
      local_20 = iVar14 * 4;
    } while (local_18 <= (int)(DAT_00834170 + (DAT_00834170 >> 0x1f & 0x3ffU)) >> 10);
  }
  if (DAT_00519cd8 != (int *)0x0) {
    (**(code **)(*DAT_00519cd8 + 0xc4))();
  }
  bVar3 = false;
  FUN_00473e60(&DAT_00519cd4,0x2c0,0x227,0);
  FUN_00480c80(0);
  FUN_0045bf80(10,0);
  FUN_00483d30();
  do {
    FUN_0045bf80(1,0);
    FUN_0047ab50(&iStack_8,&iStack_4);
    if ((((iStack_8 < 0x2c0) || (0x2eb < iStack_8)) || (iStack_4 < 0x227)) || (0x252 < iStack_4)) {
      if (bVar3) {
        bVar3 = false;
        goto LAB_004569f1;
      }
    }
    else if (!bVar3) {
      bVar3 = true;
LAB_004569f1:
      FUN_00473e60(&DAT_00519cd4,0x2c0,0x227,0);
      FUN_00480c80(0);
    }
    FUN_0045c030();
    if ((DAT_00822d68 != 0) || (iVar7 = FUN_0045ae70(), iVar7 != 0)) {
      DAT_00569498 = 0;
      FUN_0045c150();
      return;
    }
  } while( true );
}

