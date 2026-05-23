/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045a090 @ 0x0045A090 */
/* Body size: 3355 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045a090(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int *piVar12;
  undefined *puVar13;
  char *pcVar14;
  char *pcVar15;
  int local_280;
  char *local_27c;
  int *local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260 [152];
  
  piVar12 = local_260;
  for (iVar5 = 0x98; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar12 = -1;
    piVar12 = piVar12 + 1;
  }
  local_270 = 0;
  FUN_004762d0(&DAT_00519fd8,0,0,0);
  local_278 = local_260;
  local_27c = (char *)0x0;
  puVar13 = &DAT_005794db;
  do {
    iVar5 = (int)local_27c / 2 + 1;
    if ((iVar5 < 0x13) && (*(char *)(&DAT_00575ab0 + iVar5 * 0x82) != '\0')) {
      if (puVar13[-2] != '\0') {
        local_270 = 1;
      }
      iVar9 = 0;
      iVar5 = 1;
      pcVar11 = &DAT_00575cb8;
      do {
        if (((*pcVar11 != '\0') && (puVar13[iVar5] != '\0')) && ((char)puVar13[-2] != iVar5)) {
          iVar9 = iVar9 + ((int)(char)puVar13[iVar5] - (int)*pcVar11);
        }
        pcVar11 = pcVar11 + 0x208;
        iVar5 = iVar5 + 1;
      } while ((int)pcVar11 < 0x578148);
      *local_278 = iVar9;
    }
    puVar13 = puVar13 + 0x100;
    local_27c = local_27c + 1;
    local_278 = local_278 + 1;
  } while ((int)puVar13 < 0x582cdb);
  local_26c = 0;
  local_278 = (int *)0x6;
  if (local_270 == 0) {
    FUN_00474440(&DAT_00519cd4,0,0,0x3e800000,0,1);
    FUN_00473f60(&DAT_00821ce4,&DAT_00519cd4,0,0,0);
    FUN_004762d0(&DAT_00821020,0,0,0);
    pcVar11 = s_TOURNAMENT_SCORES_004d3798;
    if (DAT_005795d9 == '\0') {
      pcVar11 = s_TOURNAMENT_RESULTS_004d3784;
    }
    FUN_00404b70(pcVar11,0x140,0x10,0x80000000);
    FUN_004762d0(&DAT_00821ee8,0,0,0);
    FUN_004049d0(s_Ranking_004d377c,0x19,0x32,0x80000000);
    local_278 = (int *)0x94;
    iVar5 = 1;
    iVar9 = 0xaf;
    local_27c = &DAT_00575cb8;
    do {
      if (*local_27c != '\0') {
        DAT_0051a068._0_1_ = 0;
        pcVar11 = (char *)FUN_004ad425(iVar5,&DAT_00821c50,10);
        uVar6 = 0xffffffff;
        do {
          pcVar10 = pcVar11;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar10;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar3 = -1;
        pcVar11 = (char *)&DAT_0051a068;
        do {
          pcVar4 = pcVar11;
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          pcVar4 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar4;
        } while (cVar1 != '\0');
        pcVar11 = pcVar10 + -uVar6;
        pcVar10 = pcVar4 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar10 = pcVar10 + 1;
        }
        FUN_00404b70(&DAT_0051a068,iVar9,0x32,0x80000000);
      }
      local_27c = local_27c + 0x208;
      iVar5 = iVar5 + 1;
      iVar9 = iVar9 + 0x1b;
    } while ((int)local_27c < 0x578148);
    FUN_00404b70(&DAT_004d3778,0x29b,0x32,0x80000000);
    FUN_004049d0(s_Prize_004d3770,700,0x32,0x80000000);
    local_280 = 0x4d;
    goto LAB_0045a5d2;
  }
  FUN_0040cef0(0,8,0x90,DAT_005685f0 * 0x16 + 0x10,1);
  if ((_DAT_0059e7b8 & 0x4000000) == 0) {
    FUN_00404b70(s_LEADER_BOARD_of_004d37c4,0x48,9,0x80007ff0);
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_004d37bc;
    do {
      pcVar10 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar11 = pcVar10 + -uVar6;
    pcVar10 = (char *)&DAT_0051a068;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar11 = (char *)FUN_004ad425(DAT_00567b04,&DAT_00821c50,10);
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar11 = (char *)&DAT_0051a068;
    do {
      pcVar4 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar4 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar4;
    } while (cVar1 != '\0');
    pcVar11 = pcVar10 + -uVar6;
    pcVar10 = pcVar4 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_004d37b4;
    do {
      pcVar10 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar11 = (char *)&DAT_0051a068;
    do {
      pcVar4 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar4 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar4;
    } while (cVar1 != '\0');
    pcVar11 = pcVar10 + -uVar6;
    pcVar10 = pcVar4 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_00404b70(&DAT_0051a068,0x48,0x15,0x80007ff0);
    DAT_0051a068._0_1_ = 0;
    pcVar11 = (char *)FUN_004ad425(DAT_005a6d3c + 0x7d1,&DAT_00821c50,10);
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar11 = (char *)&DAT_0051a068;
    do {
      pcVar4 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar4 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar4;
    } while (cVar1 != '\0');
    pcVar11 = pcVar10 + -uVar6;
    pcVar10 = pcVar4 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar11 = &DAT_004c3f70;
    do {
      pcVar10 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar11 = (char *)&DAT_0051a068;
    do {
      pcVar4 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar4 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar4;
    } while (cVar1 != '\0');
    pcVar11 = pcVar10 + -uVar6;
    pcVar10 = pcVar4 + -1;
    for (uVar7 = uVar6 >> 2; iVar5 = DAT_0059bf90, uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar11 = (char *)((int)&DAT_00571fd8 + iVar5 * 0x2e);
    do {
      pcVar10 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar11 = (char *)&DAT_0051a068;
    do {
      pcVar4 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar4 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar4;
    } while (cVar1 != '\0');
    pcVar11 = pcVar10 + -uVar6;
    pcVar10 = pcVar4 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar11 = s_Open_004d37ac;
    do {
      pcVar10 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar11 = (char *)&DAT_0051a068;
    do {
      pcVar4 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar4 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar4;
    } while (cVar1 != '\0');
    pcVar11 = pcVar10 + -uVar6;
    pcVar10 = pcVar4 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_00404b70(&DAT_0051a068,0x48,0x21,0x80007ff0);
    local_280 = 0x2d;
    goto LAB_0045a5d2;
  }
  FUN_00404b70(s_LEADER_BOARD_of_the_004d3820,0x48,9,0x80007ff0);
  switch(DAT_00822c88) {
  case 0:
    uVar6 = 0xffffffff;
    pcVar11 = s_SGA_Qualifying_School_004d2e88;
    do {
      pcVar10 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar11 = pcVar10 + -uVar6;
    pcVar10 = (char *)&DAT_0051a068;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    break;
  case 1:
    pcVar11 = s_SGA_Jr__Championship_004d3808;
    goto LAB_0045a231;
  case 2:
    uVar6 = 0xffffffff;
    pcVar11 = s_SGA_Tour_Championship_004d37f0;
    do {
      pcVar10 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar11 = pcVar10 + -uVar6;
    pcVar10 = (char *)&DAT_0051a068;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    break;
  case 3:
    pcVar11 = s_SGA_Open_Championship_004d37d8;
LAB_0045a231:
    uVar6 = 0xffffffff;
    do {
      pcVar10 = pcVar11;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar11 = pcVar10 + -uVar6;
    pcVar10 = (char *)&DAT_0051a068;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    break;
  default:
    goto LAB_0045a251;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar10 = pcVar10 + 1;
  }
LAB_0045a251:
  FUN_00404b70(&DAT_0051a068,0x48,0x15,0x80007ff0);
  uVar6 = 0xffffffff;
  pcVar11 = &DAT_004d37d4;
  do {
    pcVar10 = pcVar11;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar11 = pcVar10 + -uVar6;
  pcVar10 = (char *)&DAT_0051a068;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar10 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar10 = pcVar10 + 1;
  }
  FUN_0040daa0(0xffffffff);
  FUN_00404b70(&DAT_0051a068,0x48,0x21,0x80007ff0);
  local_280 = 0x2d;
LAB_0045a5d2:
  if (DAT_00567b04 == 0) {
    DAT_00567b04 = DAT_005685f0 * 0x14 + -0x14;
  }
  local_268 = -100;
  iVar5 = DAT_005685f0;
  do {
    local_274 = 0;
    do {
      iVar9 = local_270;
      iVar3 = local_274 / 2 + 1;
      if ((iVar3 < 0x13) && (*(char *)(&DAT_00575ab0 + iVar3 * 0x82) != '\0')) {
        if (local_260[local_274] == local_268) {
          iVar3 = local_26c + 1;
          local_26c = iVar3;
          if (local_270 == 0) {
            if (iVar3 < iVar5) {
              if (iVar3 == 0) goto LAB_0045a6c8;
              iVar5 = local_280 + -7;
              puVar13 = &DAT_00821d3c;
            }
            else if (iVar3 == iVar5) {
              iVar5 = local_280 + -8;
              puVar13 = &DAT_00821d94;
            }
            else {
              iVar5 = local_280 + -4;
              puVar13 = &DAT_00821dec;
            }
            FUN_00473f60(puVar13,&DAT_00519cd4,0,iVar5,0);
          }
LAB_0045a6c8:
          DAT_0051a068._0_1_ = 0;
          pcVar11 = (char *)FUN_004ad425(iVar3,&DAT_00821c50,10);
          uVar6 = 0xffffffff;
          do {
            pcVar10 = pcVar11;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar10 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar10;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar5 = -1;
          pcVar11 = (char *)&DAT_0051a068;
          do {
            pcVar4 = pcVar11;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar4 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar4;
          } while (cVar1 != '\0');
          pcVar11 = pcVar10 + -uVar6;
          pcVar10 = pcVar4 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar10 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar10 = pcVar10 + 1;
          }
          uVar6 = 0xffffffff;
          pcVar11 = &DAT_004d3414;
          do {
            pcVar10 = pcVar11;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar10 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar10;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar5 = -1;
          pcVar11 = (char *)&DAT_0051a068;
          do {
            pcVar4 = pcVar11;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar4 = pcVar11 + 1;
            cVar1 = *pcVar11;
            pcVar11 = pcVar4;
          } while (cVar1 != '\0');
          pcVar11 = pcVar10 + -uVar6;
          pcVar10 = pcVar4 + -1;
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar10 = pcVar10 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar10 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar10 = pcVar10 + 1;
          }
          FUN_004676e0(local_274,0);
          if (iVar9 != 0) {
            uVar6 = 0xffffffff;
            pcVar11 = &DAT_004c4974;
            do {
              pcVar10 = pcVar11;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar10 = pcVar11 + 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar10;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            iVar5 = -1;
            pcVar11 = (char *)&DAT_0051a068;
            do {
              pcVar4 = pcVar11;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar4 = pcVar11 + 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar4;
            } while (cVar1 != '\0');
            pcVar11 = pcVar10 + -uVar6;
            pcVar10 = pcVar4 + -1;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar10 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar10 = pcVar10 + 1;
            }
            if (local_268 == 0) {
              pcVar11 = &DAT_004d376c;
            }
            else {
              if (0 < local_268) {
                uVar6 = 0xffffffff;
                pcVar11 = &DAT_004c5340;
                do {
                  pcVar10 = pcVar11;
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  pcVar10 = pcVar11 + 1;
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar10;
                } while (cVar1 != '\0');
                uVar6 = ~uVar6;
                iVar5 = -1;
                pcVar11 = (char *)&DAT_0051a068;
                do {
                  pcVar4 = pcVar11;
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  pcVar4 = pcVar11 + 1;
                  cVar1 = *pcVar11;
                  pcVar11 = pcVar4;
                } while (cVar1 != '\0');
                pcVar11 = pcVar10 + -uVar6;
                pcVar10 = pcVar4 + -1;
                for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
                  pcVar11 = pcVar11 + 4;
                  pcVar10 = pcVar10 + 4;
                }
                for (uVar6 = uVar6 & 3; iVar9 = local_270, uVar6 != 0; uVar6 = uVar6 - 1) {
                  *pcVar10 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                  pcVar10 = pcVar10 + 1;
                }
              }
              pcVar11 = (char *)FUN_004ad425(local_268,&DAT_00821c50,10);
            }
            uVar6 = 0xffffffff;
            do {
              pcVar10 = pcVar11;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar10 = pcVar11 + 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar10;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            iVar5 = -1;
            pcVar11 = (char *)&DAT_0051a068;
            do {
              pcVar4 = pcVar11;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar4 = pcVar11 + 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar4;
            } while (cVar1 != '\0');
            pcVar11 = pcVar10 + -uVar6;
            pcVar10 = pcVar4 + -1;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar10 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar10 = pcVar10 + 1;
            }
            uVar6 = 0xffffffff;
            pcVar11 = &DAT_004c59e0;
            do {
              pcVar10 = pcVar11;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar10 = pcVar11 + 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar10;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            iVar5 = -1;
            pcVar11 = (char *)&DAT_0051a068;
            do {
              pcVar4 = pcVar11;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar4 = pcVar11 + 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar4;
            } while (cVar1 != '\0');
            pcVar11 = pcVar10 + -uVar6;
            pcVar10 = pcVar4 + -1;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar10 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar10 = pcVar10 + 1;
            }
          }
          if (local_274 == 1) {
            iVar5 = (-(uint)(iVar9 != 0) & 0x1164) + 0x80001284;
LAB_0045a832:
            if (iVar9 == 0) goto LAB_0045a869;
            if (iVar3 < 10) {
              iVar3 = (int)local_278 + 1;
            }
            else {
              iVar3 = (int)local_278 + -5;
            }
          }
          else {
            if (iVar9 != 0) {
              iVar5 = -0x7fff8001;
              goto LAB_0045a832;
            }
            iVar5 = ((DAT_005685f0 <= iVar3) - 1 & 0xffffbdf0) + 0x80004210;
LAB_0045a869:
            iVar3 = 0x19;
          }
          FUN_004049d0(&DAT_0051a068,iVar3,local_280,iVar5);
          if (iVar9 == 0) {
            pcVar11 = &DAT_00575cb8;
            pcVar10 = &DAT_005794dc + local_274 * 0x100;
            local_264 = (int)local_278 + 0x1b;
            local_27c = (char *)0x0;
            do {
              cVar1 = *pcVar10;
              if (cVar1 != '\0') {
                local_27c = local_27c + cVar1;
                DAT_0051a068._0_1_ = 0;
                pcVar4 = (char *)FUN_004ad425((int)cVar1,&DAT_00821c50,10);
                uVar6 = 0xffffffff;
                do {
                  pcVar15 = pcVar4;
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  pcVar15 = pcVar4 + 1;
                  cVar1 = *pcVar4;
                  pcVar4 = pcVar15;
                } while (cVar1 != '\0');
                uVar6 = ~uVar6;
                iVar5 = -1;
                pcVar4 = (char *)&DAT_0051a068;
                do {
                  pcVar14 = pcVar4;
                  if (iVar5 == 0) break;
                  iVar5 = iVar5 + -1;
                  pcVar14 = pcVar4 + 1;
                  cVar1 = *pcVar4;
                  pcVar4 = pcVar14;
                } while (cVar1 != '\0');
                pcVar4 = pcVar15 + -uVar6;
                pcVar15 = pcVar14 + -1;
                for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
                  pcVar4 = pcVar4 + 4;
                  pcVar15 = pcVar15 + 4;
                }
                cVar1 = *pcVar10;
                uVar8 = 0x80000000;
                for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *pcVar15 = *pcVar4;
                  pcVar4 = pcVar4 + 1;
                  pcVar15 = pcVar15 + 1;
                }
                if (cVar1 < *pcVar11) {
                  uVar8 = 0x80006000;
                }
                if (*pcVar11 < cVar1) {
                  uVar8 = 0x80000018;
                }
                FUN_00404b70(&DAT_0051a068,local_264,local_280,uVar8);
              }
              pcVar11 = pcVar11 + 0x208;
              pcVar10 = pcVar10 + 1;
              local_264 = local_264 + 0x1b;
            } while ((int)pcVar11 < 0x578148);
            uVar8 = 0x80000000;
            if (0 < local_268) {
              uVar8 = 0x80006000;
            }
            if (local_268 < 0) {
              uVar8 = 0x80000018;
            }
            DAT_0051a068._0_1_ = 0;
            pcVar11 = (char *)FUN_004ad425(local_27c,&DAT_00821c50,10);
            uVar6 = 0xffffffff;
            do {
              pcVar10 = pcVar11;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar10 = pcVar11 + 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar10;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            iVar5 = -1;
            pcVar11 = (char *)&DAT_0051a068;
            do {
              pcVar4 = pcVar11;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar4 = pcVar11 + 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar4;
            } while (cVar1 != '\0');
            pcVar11 = pcVar10 + -uVar6;
            pcVar10 = pcVar4 + -1;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar10 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar10 = pcVar10 + 1;
            }
            FUN_00404b70(&DAT_0051a068,0x29d,local_280,uVar8);
            iVar5 = local_26c;
            if ((local_26c < DAT_005685f0) && (DAT_005795d9 == '\0')) {
              FUN_004762d0(&DAT_00821ee8,0,0,0);
              uVar6 = 0xffffffff;
              pcVar11 = &DAT_004c61e0;
              do {
                pcVar10 = pcVar11;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar10 = pcVar11 + 1;
                cVar1 = *pcVar11;
                pcVar11 = pcVar10;
              } while (cVar1 != '\0');
              uVar6 = ~uVar6;
              pcVar11 = pcVar10 + -uVar6;
              pcVar10 = (char *)&DAT_0051a068;
              for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar10 = pcVar10 + 4;
              }
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pcVar10 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar10 = pcVar10 + 1;
              }
              FUN_0042dc00(DAT_00567b04);
              uVar6 = 0xffffffff;
              pcVar11 = &DAT_004d37b4;
              do {
                pcVar10 = pcVar11;
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                pcVar10 = pcVar11 + 1;
                cVar1 = *pcVar11;
                pcVar11 = pcVar10;
              } while (cVar1 != '\0');
              uVar6 = ~uVar6;
              iVar9 = -1;
              pcVar11 = (char *)&DAT_0051a068;
              do {
                pcVar4 = pcVar11;
                if (iVar9 == 0) break;
                iVar9 = iVar9 + -1;
                pcVar4 = pcVar11 + 1;
                cVar1 = *pcVar11;
                pcVar11 = pcVar4;
              } while (cVar1 != '\0');
              pcVar11 = pcVar10 + -uVar6;
              pcVar10 = pcVar4 + -1;
              for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
                pcVar11 = pcVar11 + 4;
                pcVar10 = pcVar10 + 4;
              }
              for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pcVar10 = *pcVar11;
                pcVar11 = pcVar11 + 1;
                pcVar10 = pcVar10 + 1;
              }
              FUN_00476310(0x80001284,0xffffffff,2,2);
              uVar6 = 0xffffffff;
              pcVar11 = (char *)&DAT_0051a068;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar1 = *pcVar11;
                pcVar11 = pcVar11 + 1;
              } while (cVar1 != '\0');
              FUN_00478140(&DAT_0051a068,0x30c,local_280,~uVar6 - 1);
              if (local_274 == 1) {
                FUN_0040c6f0(0xe0,iVar5);
                DAT_00571fd4 = DAT_00571fd4 + (DAT_00567b04 * 1000) / 100;
                *(short *)(&DAT_0058421e + ((int)DAT_005a6d3c % 100) * 0x14) =
                     *(short *)(&DAT_0058421e + ((int)DAT_005a6d3c % 100) * 0x14) +
                     (short)DAT_00567b04 * 10;
                if (iVar5 < 4) {
                  DAT_005787cc = DAT_005787cc + (4 - iVar5);
                }
                else {
                  DAT_005787cc = DAT_005787cc + 1;
                }
                if (iVar5 == 1) {
                  if (9 < DAT_005685f0) {
                    FUN_0046e7b0(0xb,DAT_005795b8,DAT_005795bc);
                  }
                  if (((0x12 < DAT_005685f0) &&
                      (FUN_0046e7b0(0xf,DAT_005795b8,DAT_005795bc), 0x12 < DAT_005685f0)) &&
                     (100000 < DAT_00567b04)) {
                    FUN_0046e7b0(DAT_005a34e0 + 0x11,DAT_005795b8,DAT_005795d6);
                  }
                }
              }
              local_280 = local_280 + DAT_00821d2c;
              DAT_00567b04 = (DAT_00567b04 * 2) / 3;
            }
            else {
              local_280 = local_280 + _DAT_00821ddc;
            }
          }
          else {
            local_280 = local_280 + 0xb;
          }
        }
        iVar5 = DAT_005685f0;
        if ((0x224 < local_280) || ((int)((-(uint)(local_270 != 0) & 0x12) + 0x12) <= local_26c))
        break;
      }
      local_274 = local_274 + 1;
    } while (local_274 < 0x98);
    local_268 = local_268 + 1;
  } while (local_268 < 0x65);
  if ((local_270 == 0) && (DAT_005795d9 == '\0')) {
    if ((local_26c == 0x12) && (iVar5 == 0x13)) {
      FUN_00473f60(&DAT_00821e44,&DAT_00519cd4,0,local_280 + -7,0);
      iVar5 = local_280 + -0x36 + DAT_00821e34;
    }
    else {
      FUN_00473f60(&DAT_00821e9c,&DAT_00519cd4,0,local_280 + -4,0);
      iVar5 = local_280 + -0x33 + DAT_00821e8c;
    }
    FUN_004481b0(0x38,100,0,0,0);
    FUN_00473e60(&DAT_00519cd4,0x2dc,iVar5,0);
    FUN_00480c80(0);
    FUN_0045bf80(0x78,0);
    FUN_00483d30();
    bVar2 = false;
    do {
      FUN_0045bf80(1,0);
      FUN_0047ab50(&local_27c,&local_264);
      if (((((int)local_27c < 0x2dc) || (DAT_00820f58 + 0x2dc <= (int)local_27c)) ||
          (local_264 < iVar5)) || (DAT_00820f5c + iVar5 <= local_264)) {
        if (bVar2) {
          FUN_00473e60(&DAT_00519cd4,0x2dc,iVar5,0);
          bVar2 = false;
          goto LAB_0045adc4;
        }
      }
      else if (!bVar2) {
        bVar2 = true;
        FUN_00473e60(&DAT_00519cd4,0x2dc,iVar5,0);
LAB_0045adc4:
        FUN_00480c80(0);
      }
      FUN_0045c030();
    } while ((DAT_00822d68 == 0) && (iVar9 = FUN_0045ae70(), iVar9 == 0));
    DAT_00569498 = 0;
    FUN_0045c150();
    _DAT_0059e7b8 = _DAT_0059e7b8 & 0xffdfffff;
    FUN_0046d0c0();
    DAT_00567b04 = 0;
  }
  return;
}

