/* Ghidra decompiled: golf.exe */
/* Function: FUN_00434350 @ 0x00434350 */
/* Body size: 1293 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434350(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if (DAT_0055e928 != 0) {
    FUN_00433e50(param_1,param_2);
    return;
  }
  iVar2 = FUN_004340a0(param_1,param_2);
  if (((iVar2 != DAT_005a9f54) || (iVar2 < 0)) || (DAT_005aa554 < 0xb)) goto LAB_0043464f;
  iVar4 = 0x187;
  if (4 < iVar2) {
    iVar4 = 0x1af;
  }
  iVar3 = FUN_00467130((iVar2 % 5) * 0x50 + iVar4,0x50,0x2d0);
  FUN_0040d0b0(iVar3 + -0x50,0x1cc,0xa0,100,1);
  FUN_004762d0(&DAT_00519fd8,0,0,0);
  iVar4 = iVar2 + 6;
  DAT_0051a068._0_1_ = 0;
  if ((iVar4 != 7) && ((&DAT_005a8c38)[iVar4] != 0)) {
    uVar5 = 0xffffffff;
    pcVar10 = s_Upgraded_004c69a8;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar10 = pcVar11 + -uVar5;
    pcVar11 = (char *)&DAT_0051a068;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  uVar5 = 0xffffffff;
  iVar8 = iVar2 * 0x14;
  pcVar10 = s_Putting_Green_004c2728 + iVar8;
  do {
    pcVar11 = pcVar10;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    pcVar9 = pcVar10;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar9 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar9;
  } while (cVar1 != '\0');
  pcVar10 = pcVar11 + -uVar5;
  pcVar11 = pcVar9 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  FUN_00404b70(&DAT_0051a068,iVar3,0x1ce,0x80000000);
  uVar5 = 0xffffffff;
  pcVar10 = s_Cost__004c81f8;
  do {
    pcVar11 = pcVar10;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar10 = pcVar11 + -uVar5;
  pcVar11 = (char *)&DAT_0051a068;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  if ((iVar4 == 7) || ((&DAT_005a8c38)[iVar4] == 0)) {
    iVar4 = *(short *)(&DAT_004c273a + iVar8) * 100;
  }
  else {
    iVar4 = (*(short *)(&DAT_004c273a + iVar8) * 300) / 2;
  }
  FUN_0042dc00(iVar4);
  FUN_00404b70(&DAT_0051a068,iVar3,0x1d8,0x80000000);
  DAT_0051a068._0_1_ = 0;
  switch(iVar2) {
  case 0:
    uVar5 = 0xffffffff;
    pcVar10 = s_Helps_imaginative_golfers_004c81dc;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar10 = pcVar11 + -uVar5;
    pcVar11 = (char *)&DAT_0051a068;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    break;
  case 1:
    uVar5 = 0xffffffff;
    pcVar10 = s_Feeds_hungry_golfers_004c81b0;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar10 = pcVar11 + -uVar5;
    pcVar11 = (char *)&DAT_0051a068;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    break;
  case 2:
    pcVar10 = s_Improves_accurate_golfers_004c8194;
    goto LAB_00434613;
  case 3:
    pcVar10 = s_Golfers_become_members_004c8138;
    goto LAB_00434613;
  case 4:
    pcVar10 = s_Helps_long_hitters_004c81c8;
    goto LAB_00434613;
  case 5:
    pcVar10 = s_Golfers_play_faster_004c816c;
    goto LAB_00434613;
  case 6:
    uVar5 = 0xffffffff;
    pcVar10 = s_Increases_property_values_004c8150;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar10 = pcVar11 + -uVar5;
    pcVar11 = (char *)&DAT_0051a068;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    break;
  case 7:
    uVar5 = 0xffffffff;
    pcVar10 = s_Golfers_stay_happier_004c8120;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar10 = pcVar11 + -uVar5;
    pcVar11 = (char *)&DAT_0051a068;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    break;
  case 8:
    pcVar10 = s_Higher_greens_fees_004c810c;
LAB_00434613:
    uVar5 = 0xffffffff;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar10 = pcVar11 + -uVar5;
    pcVar11 = (char *)&DAT_0051a068;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    break;
  case -1:
    uVar5 = 0xffffffff;
    pcVar10 = s_Sell_lot_for_cash_004c8180;
    do {
      pcVar11 = pcVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar10 = pcVar11 + -uVar5;
    pcVar11 = (char *)&DAT_0051a068;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    break;
  default:
    goto LAB_00434633;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
LAB_00434633:
  FUN_00404b70(&DAT_0051a068,iVar3,0x1e2,0x80000000);
LAB_0043464f:
  FUN_00473f60(&DAT_0058b3e8,PTR_DAT_004c1570,0xd8,0x1e2,0);
  FUN_004762d0(&DAT_00519fd8,0,0,0);
  if (iVar2 == -2) {
    uVar14 = 0x1fe;
    uVar13 = 0xdc;
  }
  else {
    if (iVar2 != -3) goto LAB_004346c7;
    uVar14 = 0x229;
    uVar13 = 0x105;
  }
  FUN_00473e60(PTR_DAT_004c1570,uVar13,uVar14,0);
LAB_004346c7:
  if ((_DAT_0059e7b8 & 0x8000000) != 0) {
    FUN_00473e60(PTR_DAT_004c1570,0x105,0x229,0);
  }
  iVar3 = 0x157;
  iVar4 = 0x1f5;
  iVar8 = 0;
  do {
    if (((iVar8 + 6 < DAT_005a6364 - (&DAT_005a8c50)[iVar8]) && ((int)(&DAT_005a8c50)[iVar8] < 2))
       && (FUN_00473cb0(PTR_DAT_004c1570,iVar3,iVar4,1,1,1,0), iVar8 == iVar2)) {
      FUN_00473cb0(PTR_DAT_004c1570,iVar3,iVar4,1,1,1,0);
    }
    if (iVar8 + 6 == DAT_004c2854) {
      FUN_00473cb0(PTR_DAT_004c1570,iVar3,iVar4,1,1,1,0);
    }
    if (iVar8 == 4) {
      iVar4 = iVar4 + 0x29;
      iVar3 = iVar3 + -0x117;
    }
    else {
      iVar3 = iVar3 + 0x50;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 9);
  FUN_004762d0(&DAT_00519fd8,0,0,0);
  iVar4 = 0;
  piVar12 = &DAT_005a8c50;
  do {
    iVar3 = 0;
    if (((iVar4 == iVar2) && (iVar4 + 6 < DAT_005a6364 - *piVar12)) && (*piVar12 < 2)) {
      iVar3 = -1;
    }
    FUN_00473cb0(PTR_DAT_004c1570,(iVar4 / 5 + (iVar4 % 5) * 2) * 0x28 + 0x158,
                 iVar3 + 0x1c5 + (iVar4 / 5) * 0x28,1,1,1,0);
    piVar12 = piVar12 + 1;
    iVar4 = iVar4 + 1;
  } while ((int)piVar12 < 0x5a8c74);
  if (iVar2 == DAT_005a9f54) {
    DAT_005aa554 = DAT_005aa554 + 1;
    if (iVar2 == -2) {
      uVar5 = 0xffffffff;
      pcVar10 = s_Elevation_004c8100;
      do {
        pcVar11 = pcVar10;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar10 = pcVar11 + -uVar5;
      pcVar11 = (char *)&DAT_0051a068;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_00432620(param_1,param_2);
      return;
    }
    if (iVar2 == -3) {
      uVar5 = 0xffffffff;
      pcVar10 = &DAT_004c7f2c;
      do {
        pcVar11 = pcVar10;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar10 = pcVar11 + -uVar5;
      pcVar11 = (char *)&DAT_0051a068;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_00432620(param_1,param_2);
      return;
    }
  }
  else {
    DAT_005aa554 = 0;
    DAT_005a9f54 = iVar2;
  }
  return;
}

