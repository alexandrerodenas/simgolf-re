/* Ghidra decompiled: golf.exe */
/* Function: FUN_00455a30 @ 0x00455A30 */
/* Body size: 1182 addresses */


void FUN_00455a30(void)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  int *local_c;
  int iStack_8;
  int iStack_4;
  
  FUN_00474440(&DAT_00519cd4,0,0,0x3e800000,0,1);
  FUN_00473f60(&DAT_008222e4,&DAT_00519cd4,0xc3,0x2d,0);
  FUN_00476310(0x80000000,0xffffffff,2,2);
  uVar4 = 0xffffffff;
  pcVar3 = s_Best_004d3328;
  do {
    pcVar10 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = pcVar10 + -uVar4;
  pcVar10 = (char *)&DAT_0051a068;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
  pcVar3 = (char *)FUN_004ad425(DAT_005685f0 + -1,&DAT_00821c50,10);
  uVar4 = 0xffffffff;
  do {
    pcVar10 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar3 = (char *)&DAT_0051a068;
  do {
    pcVar9 = pcVar3;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar3 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar3 = s_Hole_Scores_004d3318;
  do {
    pcVar10 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar3 = (char *)&DAT_0051a068;
  do {
    pcVar9 = pcVar3;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  pcVar3 = pcVar10 + -uVar4;
  pcVar10 = pcVar9 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar3 = (char *)&DAT_0051a068;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821020,&DAT_0051a068,0x19d,0x3b,~uVar4 - 1);
  uVar4 = 0xffffffff;
  pcVar3 = s_Golfer_004d3310;
  do {
    pcVar10 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = pcVar10 + -uVar4;
  pcVar10 = (char *)&DAT_0051a068;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar3 = (char *)&DAT_0051a068;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0xec,0x60,~uVar4 - 1);
  uVar4 = 0xffffffff;
  pcVar3 = s_Score_004d3308;
  do {
    pcVar10 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = pcVar10 + -uVar4;
  pcVar10 = (char *)&DAT_0051a068;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar10 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar10 = pcVar10 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar3 = (char *)&DAT_0051a068;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x227,0x60,~uVar4 - 1);
  iVar6 = 0;
  local_c = &DAT_0056a524;
  do {
    if (*local_c == 0) break;
    iVar8 = DAT_0082232c * iVar6 + 0x2d + DAT_008222d4;
    FUN_00473f60(&DAT_0082233c,&DAT_00519cd4,0xc3,iVar8,0);
    DAT_0051a068._0_1_ = 0;
    pcVar3 = (char *)FUN_004ad425(*local_c,&DAT_00821c50,10);
    uVar4 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar7 = -1;
    pcVar3 = (char *)&DAT_0051a068;
    do {
      pcVar9 = pcVar3;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    pcVar3 = pcVar10 + -uVar4;
    pcVar10 = pcVar9 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar3 = (char *)&DAT_0051a068;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x227,iVar8,~uVar4 - 1);
    DAT_0051a068._0_1_ = 0;
    pcVar3 = (char *)FUN_004ad425(iVar6 + 1,&DAT_00821c50,10);
    uVar4 = 0xffffffff;
    do {
      pcVar10 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar7 = -1;
    pcVar3 = (char *)&DAT_0051a068;
    do {
      pcVar9 = pcVar3;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    pcVar3 = pcVar10 + -uVar4;
    pcVar10 = pcVar9 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar3 = &DAT_004d3304;
    do {
      pcVar10 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar7 = -1;
    pcVar3 = (char *)&DAT_0051a068;
    do {
      pcVar9 = pcVar3;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    pcVar3 = pcVar10 + -uVar4;
    pcVar10 = pcVar9 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_0045b9f0(iVar6 + 0x14);
    uVar4 = 0xffffffff;
    pcVar3 = (char *)&DAT_0051a068;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0xf6,iVar8,~uVar4 - 1);
    iVar6 = iVar6 + 1;
    local_c = local_c + 1;
  } while ((int)local_c < 0x56a54c);
  iVar6 = DAT_0082232c * iVar6 + 0x2d + DAT_008222d4;
  FUN_00473f60(&DAT_00822394,&DAT_00519cd4,0xc3,iVar6,0);
  iVar8 = iVar6 + 0xe;
  bVar2 = false;
  FUN_00473e60(&DAT_00519cd4,0x220,iVar8,0);
  FUN_00480c80(0);
  FUN_0045bf80(10,0);
  FUN_00483d30();
  do {
    FUN_0045bf80(1,0);
    FUN_0047ab50(&iStack_8,&iStack_4);
    if ((((iStack_8 < 0x220) || (0x24b < iStack_8)) || (iStack_4 < iVar8)) ||
       (iVar6 + 0x3a <= iStack_4)) {
      if (bVar2) {
        bVar2 = false;
        goto LAB_00455e90;
      }
    }
    else if (!bVar2) {
      bVar2 = true;
LAB_00455e90:
      FUN_00473e60(&DAT_00519cd4,0x220,iVar8,0);
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

