/* Ghidra decompiled: golf.exe */
/* Function: FUN_004546b0 @ 0x004546B0 */
/* Body size: 1433 addresses */


void FUN_004546b0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  bool bVar14;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int iStack_204;
  int local_200 [64];
  int aiStack_100 [64];
  
  FUN_00474440(&DAT_00519cd4,0,0,0x3e800000,0,1);
  FUN_00473f60(&DAT_008223ec,&DAT_00519cd4,0x94,0x2d,0);
  iVar9 = DAT_008223dc;
  iVar7 = DAT_008223dc + 0x16;
  FUN_00476310(0x80000000,0xffffffff,2,2);
  uVar4 = 0xffffffff;
  pcVar3 = s_PLAYER_COMMENTS_REPORT_004d3288;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821020,s_PLAYER_COMMENTS_REPORT_004d3288,0x185,0x3d,~uVar4 - 1);
  uVar4 = 0xffffffff;
  pcVar3 = s_Comments_004d3198;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00476650(&DAT_00821ee8,s_Comments_004d3198,0xb6,0x60,~uVar4 - 1);
  uVar4 = 0xffffffff;
  pcVar3 = &DAT_004c88a8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,&DAT_004c88a8,0x1f8,0x60,~uVar4 - 1);
  uVar4 = 0xffffffff;
  pcVar3 = s_Frequency_004d327c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00476700(&DAT_00821ee8,s_Frequency_004d327c,0x256,0x60,~uVar4 - 1);
  local_214 = 0;
  iVar2 = 0;
  do {
    iVar11 = 1;
    local_218 = 0;
    local_200[iVar2] = 0;
    piVar8 = &DAT_00575cd8;
    psVar10 = &DAT_00575d90 + iVar2;
    do {
      iVar5 = (int)*psVar10;
      local_200[iVar2] = local_200[iVar2] + iVar5;
      if (iVar2 == 0) {
        local_214 = local_214 + *piVar8;
      }
      if (local_218 < iVar5) {
        aiStack_100[iVar2] = iVar11;
        local_218 = iVar5;
      }
      piVar8 = piVar8 + 0x82;
      iVar11 = iVar11 + 1;
      psVar10 = psVar10 + 0x104;
    } while ((int)piVar8 < 0x578168);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40);
  local_218 = iVar9 + 0x18;
  local_20c = 0x14;
  iVar9 = local_208;
  local_210 = iVar7;
  do {
    iVar2 = 0;
    iVar11 = 0;
    piVar8 = local_200;
    do {
      if ((iVar11 < 0x32) && (iVar2 < *piVar8)) {
        iVar2 = *piVar8;
        iVar9 = iVar11;
      }
      iVar11 = iVar11 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar11 < 0x40);
    if ((iVar2 != 0) && (local_214 != 0)) {
      FUN_00473f60(&DAT_00822444,&DAT_00519cd4,0x94,iVar7,0);
      uVar4 = 0xffffffff;
      iVar7 = aiStack_100[iVar9];
      pcVar3 = &DAT_004c4e54;
      do {
        pcVar13 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar13 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar13;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar3 = pcVar13 + -uVar4;
      pcVar13 = (char *)&DAT_0051a068;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar13 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_00469b00(iVar9,*(ushort *)(&DAT_00575c1c + (iVar9 + iVar7 * 0x104) * 2) & 0x3fff,
                   0xffffffff,0x98);
      uVar4 = 0xffffffff;
      pcVar3 = &DAT_004c4e54;
      do {
        pcVar13 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar13 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar13;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar2 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar12 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar13 + -uVar4;
      pcVar13 = pcVar12 + -1;
      for (uVar6 = uVar4 >> 2; iVar2 = DAT_0058b198, uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar13 = pcVar13 + 4;
      }
      bVar14 = DAT_0058b198 == -0x7fffdc18;
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar13 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar13 = pcVar13 + 1;
      }
      if (bVar14) {
        iVar2 = -0x7fffed7c;
      }
      else {
        iVar2 = (-(uint)(iVar2 != -0x7fff82f8) & 0xffff82f8) + 0x80007d08;
      }
      FUN_00476310(iVar2,0xffffffff,2,2);
      uVar4 = 0xffffffff;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0xb6,local_218,~uVar4 - 1);
      DAT_0051a068._0_1_ = 0;
      pcVar3 = (char *)FUN_004ad425((local_200[iVar9] * 100) / local_214,&DAT_00821c50,10);
      uVar4 = 0xffffffff;
      do {
        pcVar13 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar13 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar13;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar2 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar12 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar13 + -uVar4;
      pcVar13 = pcVar12 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar13 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar3 = &DAT_004c60c4;
      do {
        pcVar13 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar13 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar13;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar2 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar12 = pcVar3;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar13 + -uVar4;
      pcVar13 = pcVar12 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar13 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x256,local_218,~uVar4 - 1);
      DAT_0051a068._0_1_ = 0;
      pcVar3 = (char *)FUN_004ad425(iVar7,&DAT_00821c50,10);
      uVar4 = 0xffffffff;
      do {
        pcVar13 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar13 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar13;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar7 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar12 = pcVar3;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      pcVar3 = pcVar13 + -uVar4;
      pcVar13 = pcVar12 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar13 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x1f8,local_218,~uVar4 - 1);
      local_200[iVar9] = 0;
      iVar7 = local_210 + 0xf;
      local_218 = local_218 + 0xf;
      local_210 = iVar7;
    }
    local_20c = local_20c + -1;
  } while (local_20c != 0);
  FUN_00476310(0x80000000,0xffffffff,2,2);
  FUN_00473f60(&DAT_0082249c,&DAT_00519cd4,0x94,iVar7,0);
  iVar9 = iVar7 + 0xe;
  bVar14 = false;
  FUN_00473e60(&DAT_00519cd4,0x24f,iVar9,0);
  FUN_00480c80(0);
  FUN_0045bf80(10,0);
  FUN_00483d30();
  do {
    FUN_0045bf80(1,0);
    FUN_0047ab50(&iStack_204,&local_208);
    if ((((iStack_204 < 0x24f) || (0x27a < iStack_204)) || (local_208 < iVar9)) ||
       (iVar7 + 0x3a <= local_208)) {
      if (bVar14) {
        bVar14 = false;
        goto LAB_00454c07;
      }
    }
    else if (!bVar14) {
      bVar14 = true;
LAB_00454c07:
      FUN_00473e60(&DAT_00519cd4,0x24f,iVar9,0);
      FUN_00480c80(0);
    }
    FUN_0045c030();
    if ((DAT_00822d68 != 0) || (iVar2 = FUN_0045ae70(), iVar2 != 0)) {
      DAT_00569498 = 0;
      FUN_0045c150();
      return;
    }
  } while( true );
}

