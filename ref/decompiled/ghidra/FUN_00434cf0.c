/* Ghidra decompiled: golf.exe */
/* Function: FUN_00434cf0 @ 0x00434CF0 */
/* Body size: 1517 addresses */


void FUN_00434cf0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int local_4;
  
  FUN_00473f60(&DAT_0058b414,PTR_DAT_004c1570,0xd6,0x1e2,0);
  iVar4 = FUN_00434980(param_1,param_2);
  if (-1 < iVar4) {
    FUN_00473e60(PTR_DAT_004c1570,(int)*(short *)(&DAT_004c7a98 + iVar4 * 4),
                 (int)*(short *)(&DAT_004c7a9a + iVar4 * 4),0);
  }
  if (iVar4 == -2) {
    FUN_00473e60(PTR_DAT_004c1570,0xfe,0x1e3,0);
  }
  iVar9 = -1;
  if (DAT_004c2854 == 3) {
    iVar9 = 0;
  }
  else if (DAT_004c2854 == 0) {
    iVar9 = 1;
  }
  else if (DAT_004c2854 == 5) {
    iVar9 = 2;
  }
  else if (DAT_004c2854 == 1) {
    iVar9 = 3;
  }
  else if (DAT_004c2854 == 4) {
    iVar9 = 4;
  }
  else if (DAT_004c2854 == 2) {
    iVar9 = 5;
  }
  if ((DAT_004c2848 == 0x10) || (DAT_004c2854 == 0x10)) {
    iVar9 = 6;
  }
  if (DAT_004c2854 == 0x13) {
    iVar9 = 9;
LAB_00434def:
    FUN_00473e60(PTR_DAT_004c1570,(int)*(short *)(&DAT_004c7a98 + iVar9 * 4),
                 (int)*(short *)(&DAT_004c7a9a + iVar9 * 4),0);
  }
  else if (iVar9 != -1) goto LAB_00434def;
  if (DAT_0056d1b0 < 1) {
    FUN_00473e60(PTR_DAT_004c1570,(int)DAT_004c7aa0,(int)DAT_004c7aa2,0);
  }
  if (DAT_004c2854 == 1) {
    uVar5 = FUN_00432200(0xffffffac,0x208,5,1,0xaa,4,param_1,param_2,0x28,0,0);
    if (uVar5 != 0xffffffff) {
      DAT_005a9f50 = uVar5;
    }
    FUN_00473e60(PTR_DAT_004c1570,(int)*(short *)(&DAT_004c7a98 + iVar9 * 4),
                 (int)*(short *)(&DAT_004c7a9a + iVar9 * 4),0);
  }
  if (DAT_004c2854 != 4) goto LAB_00435090;
  if ((DAT_00543cfc == 0) ||
     (uVar5 = FUN_00432200(0,0x168,0xe,1,100,0xfffffffc,param_1,param_2,0xffffffff,DAT_00543cfc,0),
     uVar5 == 0xffffffff)) goto LAB_0043505d;
  DAT_0051a068._0_1_ = '\0';
  DAT_005a9f50 = uVar5;
  FUN_004074a0(uVar5,0);
  if ('Z' < (char)DAT_0051a068) {
    DAT_0051a068._0_1_ = (char)DAT_0051a068 + -0x20;
  }
  uVar6 = 0xffffffff;
  pcVar10 = &DAT_004c52b8;
  do {
    pcVar12 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar10 + 1;
    cVar3 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar3 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    pcVar11 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar11 = pcVar10 + 1;
    cVar3 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar3 != '\0');
  pcVar10 = pcVar12 + -uVar6;
  pcVar12 = pcVar11 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
  if ((DAT_00822c70 & 1 << ((byte)uVar5 & 0x1f)) == 0) {
    pcVar10 = (char *)FUN_004ad425((uVar5 * 5 + 0x19) * 200,&DAT_005a9f6c,10);
  }
  else {
    pcVar10 = &DAT_004c82c0;
  }
  uVar6 = 0xffffffff;
  do {
    pcVar12 = pcVar10;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar10 + 1;
    cVar3 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar3 != '\0');
  uVar6 = ~uVar6;
  iVar7 = -1;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    pcVar11 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar11 = pcVar10 + 1;
    cVar3 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar3 != '\0');
  pcVar10 = pcVar12 + -uVar6;
  pcVar12 = pcVar11 + -1;
  for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
  FUN_00432620(param_1,param_2 + -0xc);
  switch(uVar5 & 3) {
  case 0:
    uVar5 = 0xffffffff;
    pcVar10 = s_Happy_Golfers_004c82b0;
    do {
      pcVar12 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar12 = pcVar10 + 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar3 != '\0');
    uVar5 = ~uVar5;
    pcVar10 = pcVar12 + -uVar5;
    pcVar12 = (char *)&DAT_0051a068;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar12 = pcVar12 + 4;
    }
    break;
  case 1:
    pcVar10 = s_No_Dandelions_004c82a0;
    goto LAB_0043501c;
  case 2:
    uVar5 = 0xffffffff;
    pcVar10 = s_Skill_Upgrade_004c8290;
    do {
      pcVar12 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar12 = pcVar10 + 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar3 != '\0');
    uVar5 = ~uVar5;
    pcVar10 = pcVar12 + -uVar5;
    pcVar12 = (char *)&DAT_0051a068;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar12 = pcVar12 + 4;
    }
    break;
  case 3:
    pcVar10 = s_Happy_Endings_004c8280;
LAB_0043501c:
    uVar5 = 0xffffffff;
    do {
      pcVar12 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar12 = pcVar10 + 1;
      cVar3 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar3 != '\0');
    uVar5 = ~uVar5;
    pcVar10 = pcVar12 + -uVar5;
    pcVar12 = (char *)&DAT_0051a068;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar12 = pcVar12 + 4;
    }
    break;
  default:
    goto LAB_0043503c;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
LAB_0043503c:
  FUN_00432620(param_1,param_2 + -2);
LAB_0043505d:
  FUN_00473e60(PTR_DAT_004c1570,(int)*(short *)(&DAT_004c7a98 + iVar9 * 4),
               (int)*(short *)(&DAT_004c7a9a + iVar9 * 4),0);
LAB_00435090:
  if (DAT_004c2854 == 0x13) {
    uVar5 = FUN_00432200(0xfffffff0,0x226,8,1,0xa9,4,param_1,param_2,0x28,0,0);
    if (uVar5 != 0xffffffff) {
      DAT_005a9f50 = uVar5;
    }
    FUN_00473e60(PTR_DAT_004c1570,(int)*(short *)(&DAT_004c7a98 + iVar9 * 4),
                 (int)*(short *)(&DAT_004c7a9a + iVar9 * 4),0);
  }
  if (DAT_004c2854 == 2) {
    uVar5 = FUN_00432200(0xd,0x1a3,5,0,0x2d,0xfffffffa,param_1,param_2,0x28,0,0);
    if (uVar5 != 0xffffffff) {
      DAT_005a9f50 = uVar5;
    }
    FUN_00473e60(PTR_DAT_004c1570,(int)*(short *)(&DAT_004c7a98 + iVar9 * 4),
                 (int)*(short *)(&DAT_004c7a9a + iVar9 * 4),0);
  }
  if (DAT_004c2854 == 0x10) {
    uVar5 = FUN_00432200(100,0x12f,7,1,0xb4,2,param_1,param_2,100,0,0);
    if (uVar5 != 0xffffffff) {
      DAT_005a9f50 = uVar5;
    }
    FUN_00473e60(PTR_DAT_004c1570,(int)*(short *)(&DAT_004c7a98 + iVar9 * 4),
                 (int)*(short *)(&DAT_004c7a9a + iVar9 * 4),0);
  }
  FUN_004762d0(&DAT_00519fd8,0,0,0);
  if (iVar4 == DAT_005a9f54) {
    DAT_005aa554 = DAT_005aa554 + 1;
    if ((iVar4 != -1) && (10 < DAT_005aa554)) {
      DAT_0051a068._0_1_ = '\0';
      local_4 = (int)*(short *)(&DAT_004c7a98 + iVar4 * 4);
      iVar9 = (int)*(short *)(&DAT_004c7a9a + iVar4 * 4);
      iVar7 = 0;
      switch(iVar4) {
      case 0:
        uVar5 = 0xffffffff;
        pcVar10 = s_Ballwasher_004c8264;
        do {
          pcVar12 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar10 + 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar3 != '\0');
        uVar5 = ~uVar5;
        pcVar10 = pcVar12 + -uVar5;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        iVar7 = (int)DAT_004c26fe;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        break;
      case 1:
        uVar5 = 0xffffffff;
        pcVar10 = s_Pathway_004c825c;
        do {
          pcVar12 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar10 + 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar3 != '\0');
        uVar5 = ~uVar5;
        pcVar10 = pcVar12 + -uVar5;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        iVar7 = (int)DAT_004c26c2;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        break;
      case 2:
        uVar5 = 0xffffffff;
        pcVar10 = s_Building_Lot_004c824c;
        do {
          pcVar12 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar10 + 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar3 != '\0');
        uVar5 = ~uVar5;
        pcVar10 = pcVar12 + -uVar5;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        iVar7 = (int)DAT_004c2726;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        break;
      case 3:
        uVar5 = 0xffffffff;
        pcVar10 = s_Benches_004c8244;
        do {
          pcVar12 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar10 + 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar3 != '\0');
        uVar5 = ~uVar5;
        pcVar10 = pcVar12 + -uVar5;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        iVar7 = (int)DAT_004c26d6;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        break;
      case 4:
        uVar5 = 0xffffffff;
        pcVar10 = s_Landmarks_004c8238;
        do {
          pcVar12 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar10 + 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar3 != '\0');
        uVar5 = ~uVar5;
        pcVar10 = pcVar12 + -uVar5;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        iVar7 = (int)DAT_004c2712;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        break;
      case 5:
        uVar5 = 0xffffffff;
        pcVar10 = s_Flower_Bed_004c822c;
        do {
          pcVar12 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar10 + 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar3 != '\0');
        uVar5 = ~uVar5;
        pcVar10 = pcVar12 + -uVar5;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        iVar7 = (int)DAT_004c26ea;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        break;
      case 6:
        uVar5 = 0xffffffff;
        pcVar10 = s_Scenic_Trees_004c821c;
        do {
          pcVar12 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar10 + 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar3 != '\0');
        uVar5 = ~uVar5;
        pcVar10 = pcVar12 + -uVar5;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        iVar7 = (int)DAT_00578673;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        break;
      case 7:
      case 8:
        uVar5 = 0xffffffff;
        pcVar10 = &DAT_004c7f2c;
        do {
          pcVar12 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar10 + 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar3 != '\0');
        uVar5 = ~uVar5;
        pcVar10 = pcVar12 + -uVar5;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        iVar7 = 0;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        break;
      case 9:
        uVar5 = 0xffffffff;
        pcVar10 = s_Scenic_Bridge_004c820c;
        do {
          pcVar12 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar10 + 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar3 != '\0');
        uVar5 = ~uVar5;
        pcVar10 = pcVar12 + -uVar5;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        iVar7 = (int)DAT_004c283e;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        break;
      case -2:
        uVar5 = 0xffffffff;
        pcVar10 = s_Course_Terrain_004c8270;
        do {
          pcVar12 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar10 + 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar3 != '\0');
        uVar5 = ~uVar5;
        local_4 = param_1;
        pcVar10 = pcVar12 + -uVar5;
        pcVar12 = (char *)&DAT_0051a068;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar5 = uVar5 & 3; iVar9 = param_2, uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      uVar5 = 0xffffffff;
      pcVar10 = (char *)&DAT_0051a068;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      iVar2 = (~uVar5 - 1) * 3 + 0x14 + local_4;
      iVar1 = local_4 + (~uVar5 - 1) * -3 + 0x14;
      FUN_004493d0(iVar1,iVar9 + 10,iVar2,iVar9 + 10,0x80000000,10,5);
      FUN_00404b70(&DAT_0051a068,local_4 + 0x14,iVar9 + 5,0x80007fff);
      if (iVar7 != 0) {
        FUN_004493d0(iVar1,iVar9 + 0x14,iVar2,iVar9 + 0x14,0x80000000,10,5);
        DAT_0051a068._0_1_ = 0;
        pcVar10 = (char *)FUN_004ad425(iVar7 * 100,&DAT_005a9f6c,10);
        uVar5 = 0xffffffff;
        do {
          pcVar12 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar10 + 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar3 != '\0');
        uVar5 = ~uVar5;
        iVar7 = -1;
        pcVar10 = (char *)&DAT_0051a068;
        do {
          pcVar11 = pcVar10;
          if (iVar7 == 0) break;
          iVar7 = iVar7 + -1;
          pcVar11 = pcVar10 + 1;
          cVar3 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar3 != '\0');
        pcVar10 = pcVar12 + -uVar5;
        pcVar12 = pcVar11 + -1;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        if (iVar4 == 4) {
          uVar5 = 0xffffffff;
          pcVar10 = &DAT_004c8200;
          do {
            pcVar12 = pcVar10;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar12 = pcVar10 + 1;
            cVar3 = *pcVar10;
            pcVar10 = pcVar12;
          } while (cVar3 != '\0');
          uVar5 = ~uVar5;
          pcVar10 = pcVar12 + -uVar5;
          pcVar12 = (char *)&DAT_0051a068;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
            pcVar10 = pcVar10 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar12 = *pcVar10;
            pcVar10 = pcVar10 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
        FUN_00404b70(&DAT_0051a068,local_4 + 0x14,iVar9 + 0xf,0x80007fff);
        return;
      }
    }
  }
  else {
    DAT_005aa554 = 0;
    DAT_005a9f54 = iVar4;
  }
  return;
}

