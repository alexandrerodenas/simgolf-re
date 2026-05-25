/* Ghidra decompiled: golf.exe */
/* Function: FUN_00453330 @ 0x00453330 */


void FUN_00453330(int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  DWORD DVar4;
  char *pcVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  char *pcVar19;
  bool bVar20;
  int local_178;
  int local_174;
  int local_170;
  int local_168;
  int local_164;
  uint local_160;
  int local_15c;
  int local_158;
  int iStack_14c;
  int iStack_148;
  int local_144;
  int local_140 [5];
  int local_12c;
  int local_128;
  int local_124;
  int local_120 [5];
  int local_10c;
  int local_108;
  int local_104;
  int local_100 [64];
  
  iVar14 = param_1 * 0x208;
  iVar10 = *(int *)(&DAT_00575ad0 + iVar14);
  bVar2 = true;
  DVar4 = timeGetTime();
  local_160 = (DVar4 >> 10) % ((-(uint)(iVar10 != 0) & 2) + 3);
  FUN_00474440(&DAT_00519cd4,0,0,0x3e800000,0,1);
  bVar3 = false;
  do {
    local_170 = *(int *)(&DAT_00575ad0 + iVar14);
    FUN_00473f60(&DAT_0082122c,&DAT_00519cd4,0,0,0);
    local_178 = DAT_0082121c;
    FUN_00476310(0x80000000,0xffffffff,2,2);
    uVar8 = 0xffffffff;
    pcVar5 = s_HOLE_STATS_for_004d326c;
    do {
      pcVar19 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar19 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar19;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar5 = pcVar19 + -uVar8;
    pcVar19 = (char *)&DAT_0051a068;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar19 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar19 = pcVar19 + 1;
    }
    FUN_00407280(param_1);
    if ((*(byte *)(&DAT_00575cb0 + param_1 * 0x82) & 0x81) != 0) {
      uVar8 = 0xffffffff;
      pcVar5 = &DAT_004c4974;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar5;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar18 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar18;
      } while (cVar1 != '\0');
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = pcVar18 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      pcVar5 = (char *)FUN_004ad425(param_1,&DAT_00821c50,10);
      uVar8 = 0xffffffff;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar5;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar18 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar18;
      } while (cVar1 != '\0');
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = pcVar18 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar5 = &DAT_004c59e0;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar5;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar18 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar18;
      } while (cVar1 != '\0');
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = pcVar18 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
    }
    uVar8 = 0xffffffff;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00476700(&DAT_00821020,&DAT_0051a068,0x181,0x30,~uVar8 - 1);
    uVar8 = 0xffffffff;
    pcVar5 = &DAT_004c88f0;
    do {
      pcVar19 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar19 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar19;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar5 = pcVar19 + -uVar8;
    pcVar19 = (char *)&DAT_0051a068;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar19 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar19 = pcVar19 + 1;
    }
    uVar8 = 0xffffffff;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1b9,0x53,~uVar8 - 1);
    DAT_0051a068._0_1_ = 0;
    pcVar5 = (char *)FUN_004ad425((int)*(short *)(&DAT_00575ab4 + param_1 * 0x82),&DAT_00821c50,10);
    uVar8 = 0xffffffff;
    do {
      pcVar19 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar19 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar19;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar10 = -1;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      pcVar18 = pcVar5;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar18 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar18;
    } while (cVar1 != '\0');
    pcVar5 = pcVar19 + -uVar8;
    pcVar19 = pcVar18 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar19 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar19 = pcVar19 + 1;
    }
    uVar8 = 0xffffffff;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x218,0x53,~uVar8 - 1);
    if (*(int *)(&DAT_00575ad0 + iVar14) == 0) goto switchD_0045360c_default;
    pcVar5 = &DAT_005794da;
    do {
      if ((pcVar5[-1] == param_1) && ('\0' < *pcVar5)) {
        local_170 = local_170 + -1;
      }
      pcVar5 = pcVar5 + 0x100;
    } while ((int)pcVar5 < 0x582cda);
    if (local_170 == 0) {
      local_170 = 1;
    }
    switch(local_160) {
    case 0:
      uVar8 = 0xffffffff;
      pcVar5 = s_Avg__Drive__004d325c;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = (char *)&DAT_0051a068;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1b9,0x68,~uVar8 - 1);
      iVar10 = (int)*(short *)(&DAT_00575c0c + iVar14) / *(int *)(&DAT_00575ad0 + iVar14);
      goto LAB_004536f4;
    case 1:
      uVar8 = 0xffffffff;
      pcVar5 = s_Longest_Drive_004d324c;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = (char *)&DAT_0051a068;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1b9,0x68,~uVar8 - 1);
      iVar10 = (int)*(short *)(&DAT_00575c16 + iVar14);
LAB_004536f4:
      DAT_0051a068._0_1_ = 0;
      pcVar5 = (char *)FUN_004ad425(iVar10,&DAT_00821c50,10);
      uVar8 = 0xffffffff;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar5;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar18 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar18;
      } while (cVar1 != '\0');
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = pcVar18 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar5 = &DAT_004c60cc;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar5;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar18 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar18;
      } while (cVar1 != '\0');
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = pcVar18 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      break;
    case 2:
      uVar8 = 0xffffffff;
      pcVar5 = s_Fairways_hit_004d323c;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = (char *)&DAT_0051a068;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1b9,0x68,~uVar8 - 1);
      DAT_0051a068._0_1_ = 0;
      pcVar5 = (char *)FUN_004ad425((*(short *)(&DAT_00575c0e + iVar14) * 100) /
                                    *(int *)(&DAT_00575ad0 + iVar14),&DAT_00821c50,10);
      uVar8 = 0xffffffff;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar5;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar18 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar18;
      } while (cVar1 != '\0');
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = pcVar18 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar5 = &DAT_004c60c4;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar5;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar18 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar18;
      } while (cVar1 != '\0');
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = pcVar18 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      break;
    case 3:
      uVar8 = 0xffffffff;
      pcVar5 = s_Greens_in_Reg_004d322c;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = (char *)&DAT_0051a068;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1b9,0x68,~uVar8 - 1);
      DAT_0051a068._0_1_ = 0;
      pcVar5 = (char *)FUN_004ad425((*(short *)(&DAT_00575c10 + iVar14) * 100) / local_170,
                                    &DAT_00821c50,10);
      uVar8 = 0xffffffff;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar5;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar18 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar18;
      } while (cVar1 != '\0');
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = pcVar18 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar5 = &DAT_004c60c4;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar5;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar18 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar18;
      } while (cVar1 != '\0');
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = pcVar18 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      break;
    case 4:
      uVar8 = 0xffffffff;
      pcVar5 = s_Average_Putts_004d321c;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = (char *)&DAT_0051a068;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1b9,0x68,~uVar8 - 1);
      DAT_0051a068._0_1_ = 0;
      FUN_0042dd50((*(short *)(&DAT_00575c12 + iVar14) * 100) / local_170);
      break;
    default:
      goto switchD_0045360c_default;
    }
    uVar8 = 0xffffffff;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x24f,0x68,~uVar8 - 1);
switchD_0045360c_default:
    uVar8 = 0xffffffff;
    pcVar5 = &DAT_004c64d0;
    do {
      pcVar19 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar19 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar19;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar5 = pcVar19 + -uVar8;
    pcVar19 = (char *)&DAT_0051a068;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar19 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar19 = pcVar19 + 1;
    }
    uVar8 = 0xffffffff;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1b9,0x7d,~uVar8 - 1);
    DAT_0051a068._0_1_ = 0;
    pcVar5 = (char *)FUN_004ad425((int)(char)(&DAT_00575ab0)[iVar14],&DAT_00821c50,10);
    uVar8 = 0xffffffff;
    do {
      pcVar19 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar19 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar19;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar10 = -1;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      pcVar18 = pcVar5;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar18 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar18;
    } while (cVar1 != '\0');
    pcVar5 = pcVar19 + -uVar8;
    pcVar19 = pcVar18 + -1;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar19 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar19 = pcVar19 + 1;
    }
    uVar8 = 0xffffffff;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x218,0x7d,~uVar8 - 1);
    uVar8 = 0xffffffff;
    pcVar5 = s_Average_shots_on_this_hole_004d3200;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00476650(&DAT_00821ee8,s_Average_shots_on_this_hole_004d3200,0xbe,0xb0,~uVar8 - 1);
    cVar1 = (&DAT_00575ab0)[iVar14];
    local_158 = 0;
    local_174 = 0;
    piVar13 = local_120;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar13 = cVar1 * 8;
      piVar13 = piVar13 + 1;
    }
    piVar13 = local_140;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar13 = 8;
      piVar13 = piVar13 + 1;
    }
    iVar10 = cVar1 + -2;
    if (iVar10 < 1) {
      iVar10 = 1;
    }
    iVar12 = iVar10 + 5;
    if (iVar10 <= iVar12) {
      local_15c = iVar10 * 0x22;
      local_164 = iVar10;
      do {
        DAT_0051a068._0_1_ = 0;
        pcVar5 = (char *)FUN_004ad425(local_164,&DAT_00821c50,10);
        uVar8 = 0xffffffff;
        do {
          pcVar19 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar11 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar18 = pcVar5;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pcVar18 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar18;
        } while (cVar1 != '\0');
        pcVar5 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar19 = pcVar19 + 1;
        }
        if (local_164 == iVar12) {
          uVar8 = 0xffffffff;
          pcVar5 = &DAT_004c5340;
          do {
            pcVar19 = pcVar5;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar19 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar19;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          iVar11 = -1;
          pcVar5 = (char *)&DAT_0051a068;
          do {
            pcVar18 = pcVar5;
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            pcVar18 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar18;
          } while (cVar1 != '\0');
          pcVar5 = pcVar19 + -uVar8;
          pcVar19 = pcVar18 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar19 = pcVar19 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar19 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar19 = pcVar19 + 1;
          }
        }
        uVar8 = 0xffffffff;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00476700(&DAT_00821ee8,&DAT_0051a068,local_15c + iVar10 * -0x22 + 0x1bd,0xa8,~uVar8 - 1)
        ;
        iVar15 = 0;
        iVar17 = 0;
        iVar16 = 0;
        iVar11 = local_164;
        do {
          while( true ) {
            iVar6 = 9;
            if (local_164 != iVar12) {
              iVar6 = local_164;
            }
            if (iVar6 < iVar11) break;
            iVar6 = (int)*(short *)(&DAT_00575ad8 + (iVar17 + param_1 * 0x104 + iVar11) * 2);
            local_158 = local_158 + iVar6;
            iVar15 = iVar15 + iVar6;
            local_174 = local_174 + iVar6 * iVar11;
            *(int *)((int)local_140 + iVar16) = *(int *)((int)local_140 + iVar16) + iVar6;
            *(int *)((int)local_120 + iVar16) = *(int *)((int)local_120 + iVar16) + iVar6 * iVar11;
            iVar11 = iVar11 + 1;
          }
          iVar17 = iVar17 + 0xb;
          iVar16 = iVar16 + 4;
          iVar11 = local_164;
        } while (iVar17 < 0x58);
        DAT_0051a068._0_1_ = 0;
        pcVar5 = (char *)FUN_004ad425(iVar15,&DAT_00821c50,10);
        uVar8 = 0xffffffff;
        do {
          pcVar19 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar11 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar18 = pcVar5;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pcVar18 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar18;
        } while (cVar1 != '\0');
        pcVar5 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar19 = pcVar19 + 1;
        }
        if (iVar15 != 0) {
          uVar8 = 0xffffffff;
          pcVar5 = (char *)&DAT_0051a068;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 != '\0');
          FUN_00476700(&DAT_00821ee8,&DAT_0051a068,local_15c + iVar10 * -0x22 + 0x1bd,0xbc,
                       ~uVar8 - 1);
        }
        local_164 = local_164 + 1;
        local_15c = local_15c + 0x22;
      } while (local_164 <= iVar12);
      if (local_158 != 0) {
        uVar8 = 0xffffffff;
        pcVar5 = s_Stroke_average_004d31f0;
        do {
          pcVar19 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar5 = pcVar19 + -uVar8;
        pcVar19 = (char *)&DAT_0051a068;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00476650(&DAT_00821ee8,&DAT_0051a068,0x1b9,0x92,~uVar8 - 1);
        DAT_0051a068._0_1_ = 0;
        FUN_0042dd50((local_174 * 100) / local_158);
        uVar8 = 0xffffffff;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x24f,0x92,~uVar8 - 1);
      }
    }
    uVar8 = 0xffffffff;
    pcVar5 = s_Fun_Factor_004d3064;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00476650(&DAT_00821ee8,s_Fun_Factor_004d3064,0xbe,0x53,~uVar8 - 1);
    if (*(int *)(&DAT_00575ad4 + iVar14) != 0) {
      iVar10 = (*(short *)(&DAT_00575c08 + iVar14) * 100) /
               (*(int *)(&DAT_00575ad4 + iVar14) / 2 + 4 + *(int *)(&DAT_00575ad0 + iVar14));
      DAT_0051a068._0_1_ = 0;
      pcVar5 = (char *)FUN_004ad425(iVar10,&DAT_00821c50,10);
      uVar8 = 0xffffffff;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar12 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar5;
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        pcVar18 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar18;
      } while (cVar1 != '\0');
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = pcVar18 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar5 = &DAT_004d31ec;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar12 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar5;
        if (iVar12 == 0) break;
        iVar12 = iVar12 + -1;
        pcVar18 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar18;
      } while (cVar1 != '\0');
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = pcVar18 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      if (iVar10 < 0) {
        pcVar5 = &DAT_004d31e4;
      }
      else {
        iVar12 = iVar10 >> 0x1f;
        iVar10 = iVar10 / 0x14 + iVar12;
        iVar11 = iVar10 - iVar12;
        if (iVar10 == iVar12) {
          pcVar5 = s__fair__004d31b8;
        }
        else if (iVar11 == 1) {
          pcVar5 = s__good__004d31c0;
        }
        else if (iVar11 == 2) {
          pcVar5 = s__very_good__004d31c8;
        }
        else {
          pcVar5 = s__outstanding__004d31d4;
        }
      }
      uVar8 = 0xffffffff;
      do {
        pcVar19 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar19 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar19;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar10 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar5;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar18 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar18;
      } while (cVar1 != '\0');
      pcVar5 = pcVar19 + -uVar8;
      pcVar19 = pcVar18 + -1;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar19 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar19 = pcVar19 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x164,0x53,~uVar8 - 1);
    }
    uVar8 = 0xffffffff;
    pcVar5 = s_Length_004d31b0;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00476650(&DAT_00821ee8,s_Length_004d31b0,0xbe,0x68,~uVar8 - 1);
    uVar8 = 0xffffffff;
    pcVar5 = s_Accuracy_004d31a4;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00476650(&DAT_00821ee8,s_Accuracy_004d31a4,0xbe,0x7d,~uVar8 - 1);
    uVar8 = 0xffffffff;
    pcVar5 = s_Imagination_004c88b0;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00476650(&DAT_00821ee8,s_Imagination_004c88b0,0xbe,0x92,~uVar8 - 1);
    iVar10 = local_104;
    if (local_124 != 0) {
      if (local_128 != 0) {
        uVar8 = 0xffffffff;
        pcVar5 = &DAT_004c5340;
        do {
          pcVar19 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar5 = pcVar19 + -uVar8;
        pcVar19 = (char *)&DAT_0051a068;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar19 = pcVar19 + 1;
        }
        FUN_0042dd50((local_108 * 100) / local_128 - (local_104 * 100) / local_124);
        FUN_004532a0(DAT_00569628);
        uVar8 = 0xffffffff;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x164,0x68,~uVar8 - 1);
      }
      if (local_12c != 0) {
        uVar8 = 0xffffffff;
        pcVar5 = &DAT_004c5340;
        do {
          pcVar19 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar5 = pcVar19 + -uVar8;
        pcVar19 = (char *)&DAT_0051a068;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar19 = pcVar19 + 1;
        }
        FUN_0042dd50((local_10c * 100) / local_12c - (iVar10 * 100) / local_124);
        FUN_004532a0(DAT_00569628);
        uVar8 = 0xffffffff;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x164,0x7d,~uVar8 - 1);
      }
      if (local_140[3] != 0) {
        uVar8 = 0xffffffff;
        pcVar5 = &DAT_004c5340;
        do {
          pcVar19 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar5 = pcVar19 + -uVar8;
        pcVar19 = (char *)&DAT_0051a068;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar19 = pcVar19 + 1;
        }
        FUN_0042dd50((local_120[3] * 100) / local_140[3] - (iVar10 * 100) / local_124);
        FUN_004532a0(DAT_00569628);
        uVar8 = 0xffffffff;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00476700(&DAT_00821ee8,&DAT_0051a068,0x164,0x92,~uVar8 - 1);
      }
    }
    uVar8 = 0xffffffff;
    pcVar5 = s_Comments_004d3198;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00476650(&DAT_00821ee8,s_Comments_004d3198,0xbe,0xca,~uVar8 - 1);
    if ((&DAT_00575ab0)[iVar14] == '\0') {
      FUN_00473f60(&DAT_00821284,&DAT_00519cd4,0,local_178,0);
      DVar4 = timeGetTime();
      if ((DVar4 & 0x200) != 0) {
        FUN_00476310(0x80007d08,0xffffffff,2,2);
        uVar8 = 0xffffffff;
        pcVar5 = s_Under_Construction__004d3184;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00476700(&DAT_00821ee8,s_Under_Construction__004d3184,400,local_178,~uVar8 - 1);
      }
      local_178 = local_178 + DAT_00821274;
    }
    piVar13 = local_100;
    psVar7 = (short *)(&DAT_00575b88 + iVar14);
    iVar10 = 0x40;
    do {
      *piVar13 = (int)*psVar7;
      psVar7 = psVar7 + 1;
      piVar13 = piVar13 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    local_168 = 5;
    iVar10 = local_144;
    do {
      iVar12 = 0;
      iVar11 = 0;
      piVar13 = local_100;
      do {
        if ((iVar11 < 0x32) && (iVar12 < *piVar13)) {
          iVar12 = *piVar13;
          iVar10 = iVar11;
        }
        iVar11 = iVar11 + 1;
        piVar13 = piVar13 + 1;
      } while (iVar11 < 0x40);
      if ((iVar12 != 0) && (*(int *)(&DAT_00575ad0 + iVar14) != 0)) {
        FUN_00473f60(&DAT_00821284,&DAT_00519cd4,0,local_178,0);
        DAT_0051a068._0_1_ = 0;
        pcVar5 = (char *)FUN_004ad425((local_100[iVar10] * 100) / *(int *)(&DAT_00575ad0 + iVar14),
                                      &DAT_00821c50,10);
        uVar8 = 0xffffffff;
        do {
          pcVar19 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar12 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar18 = pcVar5;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pcVar18 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar18;
        } while (cVar1 != '\0');
        pcVar5 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar5 = &DAT_004d317c;
        do {
          pcVar19 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar12 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar18 = pcVar5;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pcVar18 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar18;
        } while (cVar1 != '\0');
        pcVar5 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar19 = pcVar19 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar5 = &DAT_004c4e54;
        do {
          pcVar19 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar12 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar18 = pcVar5;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pcVar18 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar18;
        } while (cVar1 != '\0');
        pcVar5 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar19 = pcVar19 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar19 = pcVar19 + 1;
        }
        FUN_00469b00(iVar10,*(ushort *)(&DAT_00575c1c + (iVar10 + param_1 * 0x104) * 2) & 0x3fff,
                     param_1 * 0xb,0x98);
        uVar8 = 0xffffffff;
        pcVar5 = &DAT_004c4e54;
        do {
          pcVar19 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar19 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar19;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar12 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar18 = pcVar5;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pcVar18 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar18;
        } while (cVar1 != '\0');
        pcVar5 = pcVar19 + -uVar8;
        pcVar19 = pcVar18 + -1;
        for (uVar9 = uVar8 >> 2; iVar12 = DAT_0058b198, uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar19 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar19 = pcVar19 + 4;
        }
        bVar20 = DAT_0058b198 == -0x7fffdc18;
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar19 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar19 = pcVar19 + 1;
        }
        if (bVar20) {
          iVar12 = -0x7fffed7c;
        }
        else {
          iVar12 = (-(uint)(iVar12 != -0x7fff82f8) & 0xffff82f8) + 0x80007d08;
        }
        FUN_00476310(iVar12,0xffffffff,2,2);
        uVar8 = 0xffffffff;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00476700(&DAT_00821ee8,&DAT_0051a068,400,local_178,~uVar8 - 1);
        local_178 = local_178 + DAT_00821274;
        local_100[iVar10] = 0;
      }
      local_168 = local_168 + -1;
    } while (local_168 != 0);
    local_144 = iVar10;
    FUN_00473f60(&DAT_008212dc,&DAT_00519cd4,0,local_178,0);
    iVar10 = local_178 + 8;
    FUN_00473e60(&DAT_00519cd4,0x23e,iVar10,0);
    FUN_00480c80(0);
    if (bVar2) {
      FUN_0045bf80(10,0);
      FUN_00483d30();
      bVar2 = false;
    }
    FUN_0045bf80(1,0);
    FUN_0047ab50(&iStack_14c,&iStack_148);
    uVar8 = (-(uint)(local_170 != 0) & 2) + 3;
    uVar9 = timeGetTime();
    bVar20 = bVar3;
    while (local_160 == (uVar9 >> 10) % uVar8) {
      if ((((iStack_14c < 0x23e) || (0x269 < iStack_14c)) || (iStack_148 < iVar10)) ||
         (local_178 + 0x34 <= iStack_148)) {
        if (bVar3) {
          bVar3 = false;
          bVar20 = false;
          goto LAB_00454603;
        }
      }
      else if (!bVar3) {
        bVar3 = true;
        bVar20 = true;
LAB_00454603:
        FUN_00473e60(&DAT_00519cd4,0x23e,iVar10,0);
        FUN_00480c80(0);
      }
      FUN_0045c030();
      if ((DAT_00822d68 != 0) || (iVar12 = FUN_0045ae70(), iVar12 != 0)) {
        DAT_0053df54 = 0;
        FUN_0045c150();
        return;
      }
      FUN_0045bf80(1,0);
      FUN_0047ab50(&iStack_14c,&iStack_148);
      uVar9 = timeGetTime();
    }
    DVar4 = timeGetTime();
    local_160 = (DVar4 >> 10) % uVar8;
    bVar3 = bVar20;
  } while( true );
}

