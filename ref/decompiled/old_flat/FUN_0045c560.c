/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045c560 @ 0x0045C560 */


void FUN_0045c560(uint param_1,int param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined **ppuVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  ushort *puVar16;
  undefined *puVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  int local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  undefined **local_c;
  char *local_8;
  uint local_4;
  
  iVar12 = param_1 * 0x100;
  local_4 = 0;
  if ((&DAT_005794d0)[iVar12] != '\0') {
    DAT_0051a068._0_1_ = 0;
    FUN_004676e0(param_1,0);
    FUN_0045f0f0(&DAT_0051a068,(int)*(short *)(&DAT_005794ce + iVar12),0xffffffff,param_1,0xffffffce
                );
  }
  if (((&DAT_00579568)[param_1 * 0x80] == -1) || (DAT_00824144 == 0)) {
    FUN_004740f0(PTR_DAT_004c1570,0xec,0x1a,DAT_00822c74,0);
    uVar19 = 0x1a;
    puVar17 = &DAT_0058b51c;
  }
  else {
    local_4 = 1;
    FUN_00473e60(PTR_DAT_004c1570,0xec,0x1a,0);
    uVar19 = 0xa5;
    puVar17 = &DAT_0058b548;
  }
  FUN_00473f60(puVar17,PTR_DAT_004c1570,0xec,uVar19,0);
  FUN_00473f60(&DAT_0058bb7c,PTR_DAT_004c1570,0xac,0xfffffffe,0);
  FUN_0045c200(param_1,0xac,0xfffffffe,0xffffffff);
  FUN_004762d0(&DAT_00519928,0,0,0);
  DAT_0051a068._0_1_ = 0;
  FUN_004676e0(param_1,0);
  uVar7 = 0xffffffff;
  pcVar4 = &DAT_004c4974;
  do {
    pcVar15 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar8 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar4;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  pcVar4 = pcVar15 + -uVar7;
  pcVar15 = pcVar14 + -1;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar4 = (char *)(&DAT_004d6088 + (short)(&DAT_0057956e)[param_1 * 0x80] * 0x8c);
  do {
    pcVar15 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar8 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar4;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  pcVar4 = pcVar15 + -uVar7;
  pcVar15 = pcVar14 + -1;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar4 = &DAT_004c59e0;
  do {
    pcVar15 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar8 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar4;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  pcVar4 = pcVar15 + -uVar7;
  pcVar15 = pcVar14 + -1;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  FUN_00404bc0(&DAT_0051a068,0x1a4,0x28,0x80000210);
  FUN_004762d0(&DAT_0051b360,0,0,0);
  uVar3 = *(ushort *)(&DAT_00579570 + iVar12);
  DAT_0051a068._0_1_ = 0;
  if ((uVar3 & 8) != 0) {
    uVar7 = 0xffffffff;
    pcVar4 = s_Single_004c86d4;
    do {
      pcVar15 = pcVar4;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar15 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar15;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar4 = pcVar15 + -uVar7;
    pcVar15 = (char *)&DAT_0051a068;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar15 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar15 = pcVar15 + 1;
    }
  }
  if ((uVar3 & 0x10) != 0) {
    uVar7 = 0xffffffff;
    pcVar4 = s_Married_004c86cc;
    do {
      pcVar15 = pcVar4;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar15 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar15;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar4 = pcVar15 + -uVar7;
    pcVar15 = (char *)&DAT_0051a068;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar15 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar15 = pcVar15 + 1;
    }
  }
  if ((uVar3 & 0x20) != 0) {
    uVar7 = 0xffffffff;
    pcVar4 = s_Divorced_004c86c0;
    do {
      pcVar15 = pcVar4;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar15 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar15;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar4 = pcVar15 + -uVar7;
    pcVar15 = (char *)&DAT_0051a068;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar15 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar15 = pcVar15 + 1;
    }
  }
  if ((uVar3 & 0x40) != 0) {
    uVar7 = 0xffffffff;
    pcVar4 = s_Widowed_004c86b8;
    do {
      pcVar15 = pcVar4;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar15 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar15;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar4 = pcVar15 + -uVar7;
    pcVar15 = (char *)&DAT_0051a068;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar15 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar15 = pcVar15 + 1;
    }
  }
  uVar7 = 0xffffffff;
  pcVar4 = s___age_004d3a0c;
  do {
    pcVar15 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar8 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar4;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  pcVar4 = pcVar15 + -uVar7;
  pcVar15 = pcVar14 + -1;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  uVar19 = FUN_00453260(param_1,&DAT_00824134,10);
  pcVar4 = (char *)FUN_004ad425(uVar19);
  uVar7 = 0xffffffff;
  do {
    pcVar15 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar8 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar4;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  pcVar4 = pcVar15 + -uVar7;
  pcVar15 = pcVar14 + -1;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  FUN_00404b70(&DAT_0051a068,0x1a4,0x3e,0x80000210);
  DAT_0051a068._0_1_ = 0;
  local_c = &PTR_DAT_004c2864;
  uVar7 = (uint)(char)(&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230];
  local_14 = 0;
  iVar8 = 0;
  do {
    uVar9 = 1 << ((byte)local_14 & 0x1f);
    iVar13 = iVar8;
    if ((uVar7 & uVar9) != 0) {
      uVar7 = uVar7 - uVar9;
      iVar13 = iVar8 + 1;
      if (iVar8 != 0) {
        pcVar4 = &DAT_004c52b8;
        if (uVar7 == 0) {
          pcVar4 = &DAT_004c6af4;
        }
        uVar9 = 0xffffffff;
        do {
          pcVar15 = pcVar4;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar15 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar15;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        iVar8 = -1;
        pcVar4 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar4;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar14 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar14;
        } while (cVar1 != '\0');
        pcVar4 = pcVar15 + -uVar9;
        pcVar15 = pcVar14 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar15 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar15 = pcVar15 + 1;
        }
      }
      uVar9 = 0xffffffff;
      pcVar4 = *local_c;
      do {
        pcVar15 = pcVar4;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar15 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar15;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      iVar8 = -1;
      pcVar4 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar4;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar14 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar14;
      } while (cVar1 != '\0');
      pcVar4 = pcVar15 + -uVar9;
      pcVar15 = pcVar14 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar9 = uVar9 & 3; local_10 = (ushort *)iVar13, local_8 = (char *)uVar7, uVar9 != 0;
          uVar9 = uVar9 - 1) {
        *pcVar15 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar15 = pcVar15 + 1;
      }
    }
    local_c = local_c + 1;
    local_14 = local_14 + 1;
    iVar8 = iVar13;
  } while ((int)local_c < 0x4c2878);
  FUN_00404b70(&DAT_0051a068,0x1a4,0x4b,0x80000210);
  uVar7 = 0xffffffff;
  pcVar4 = &DAT_004c4e54;
  do {
    pcVar15 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar4 = pcVar15 + -uVar7;
  pcVar15 = (char *)&DAT_0051a068;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  FUN_00469a20((int)(short)(&DAT_0057955c)[param_1 * 0x80],0);
  uVar7 = 0xffffffff;
  pcVar4 = &DAT_004c4e54;
  do {
    pcVar15 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar8 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar4;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  pcVar4 = pcVar15 + -uVar7;
  pcVar15 = pcVar14 + -1;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  FUN_00404bc0(&DAT_0051a068,0x1a4,0x5b,0x80004210);
  DAT_0051a068._0_1_ = '\0';
  local_8 = (char *)(uint)(byte)(&DAT_005794d1)[iVar12];
  local_14 = 0;
  local_c = &PTR_s_length_004c2858;
  do {
    if (((uint)local_8 & 1 << ((byte)local_14 & 0x1f)) != 0) {
      if ((char)DAT_0051a068 != '\0') {
        uVar7 = 0xffffffff;
        pcVar4 = &DAT_004c52b8;
        do {
          pcVar15 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar15 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar15;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar8 = -1;
        pcVar4 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar4;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar14 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar14;
        } while (cVar1 != '\0');
        pcVar4 = pcVar15 + -uVar7;
        pcVar15 = pcVar14 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar15 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar15 = pcVar15 + 1;
        }
      }
      uVar7 = 0xffffffff;
      pcVar4 = *local_c;
      do {
        pcVar15 = pcVar4;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar15 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar15;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar8 = -1;
      pcVar4 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar4;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar14 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar14;
      } while (cVar1 != '\0');
      pcVar4 = pcVar15 + -uVar7;
      pcVar15 = pcVar14 + -1;
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar15 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar15 = pcVar15 + 1;
      }
    }
    local_c = local_c + 1;
    local_14 = local_14 + 1;
  } while ((int)local_c < 0x4c2864);
  if ((&DAT_00579572)[iVar12] == '\x01') {
    uVar7 = 0xffffffff;
    pcVar4 = &DAT_004c5340;
    do {
      pcVar15 = pcVar4;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar15 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar15;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar8 = -1;
    pcVar4 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar4;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar14 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar14;
    } while (cVar1 != '\0');
    pcVar4 = pcVar15 + -uVar7;
    pcVar15 = pcVar14 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar15 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar15 = pcVar15 + 1;
    }
  }
  if ((&DAT_00579572)[iVar12] == '\x02') {
    uVar7 = 0xffffffff;
    pcVar4 = &DAT_004d3a08;
    do {
      pcVar15 = pcVar4;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar15 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar15;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar8 = -1;
    pcVar4 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar4;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar14 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar14;
    } while (cVar1 != '\0');
    pcVar4 = pcVar15 + -uVar7;
    pcVar15 = pcVar14 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar15 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar15 = pcVar15 + 1;
    }
  }
  FUN_00404b70(&DAT_0051a068,0x1a4,0x69,0x80000210);
  FUN_004762d0(&DAT_00519fd8,0,0,0);
  FUN_00404b70(&PTR_DAT_004d2120,0x24a,0x2c,0x80000000);
  iVar8 = FUN_00467130((8 - (short)(&DAT_0057955c)[param_1 * 0x80]) * 10,0,0x50);
  FUN_00480b00(0x222,0x36,0x50,4,((0x28 < iVar8) - 1 & 0xffffa6e0) + 0x80007d08);
  FUN_00480b00(0x272 - iVar8,0x36,iVar8,4,((0x28 < iVar8) - 1 & 0xffffb284) + 0x80006000);
  iVar8 = FUN_0045c420(param_1,0,0x50);
  iVar8 = FUN_00467130((4 - iVar8) * 10);
  FUN_00404b70(s_Attitude_004d39fc,0x24a,0x3c,0x80000000);
  FUN_00480b00(0x222,0x46,0x50,4,((0x28 < iVar8) - 1 & 0xffffa6e0) + 0x80007d08);
  FUN_00480b00(0x272 - iVar8,0x46,iVar8,4,((0x28 < iVar8) - 1 & 0xffffb284) + 0x80006000);
  FUN_00404b70(s_Energy_004d39f4,0x24a,0x4c,0x80000000);
  iVar8 = FUN_00467130((int)((int)(short)(&DAT_00579562)[param_1 * 0x80] +
                            ((int)(short)(&DAT_00579562)[param_1 * 0x80] >> 0x1f & 3U)) >> 2,0,0x50)
  ;
  FUN_00480b00(0x222,0x56,0x50,4,((0x28 < iVar8) - 1 & 0xffffa6e0) + 0x80007d08);
  FUN_00480b00(0x272 - iVar8,0x56,iVar8,4,((0x28 < iVar8) - 1 & 0xffffb284) + 0x80006000);
  FUN_00404b70(s_Hunger_004d39ec,0x24a,0x5c,0x80000000);
  iVar8 = FUN_00467130((*(short *)(&DAT_0057955e + iVar12) * 5) / 2,0,0x50);
  FUN_00480b00(0x222,0x66,0x50,4,((0x28 < iVar8) - 1 & 0xffffa6e0) + 0x80007d08);
  FUN_00480b00(0x272 - iVar8,0x66,iVar8,4,((0x28 < iVar8) - 1 & 0xffffb284) + 0x80006000);
  FUN_00404b70(s_Thirst_004d39e4,0x24a,0x6c,0x80000000);
  iVar8 = FUN_00467130(((short)(&DAT_00579560)[param_1 * 0x80] * 5) / 2,0,0x50);
  FUN_00480b00(0x222,0x76,0x50,4,((0x28 < iVar8) - 1 & 0xffffa6e0) + 0x80007d08);
  FUN_00480b00(0x272 - iVar8,0x76,iVar8,4,((0x28 < iVar8) - 1 & 0xffffb284) + 0x80006000);
  bVar6 = 0;
  DAT_0051a068._0_1_ = 0;
  ppuVar11 = &PTR_DAT_004c2960;
  do {
    if (((int)*(short *)(&DAT_00579558 + iVar12) & 1 << (bVar6 & 0x1f)) == 0) {
      pcVar4 = &DAT_004c4944;
    }
    else {
      pcVar4 = *ppuVar11;
    }
    uVar7 = 0xffffffff;
    do {
      pcVar15 = pcVar4;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar15 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar15;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    ppuVar11 = ppuVar11 + 1;
    iVar8 = -1;
    pcVar4 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar4;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar14 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar14;
    } while (cVar1 != '\0');
    pcVar4 = pcVar15 + -uVar7;
    pcVar15 = pcVar14 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar15 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar15 = pcVar15 + 1;
    }
    bVar6 = bVar6 + 1;
  } while ((int)ppuVar11 < 0x4c2998);
  cVar1 = (&DAT_005794d9)[iVar12];
  if (cVar1 == -1) {
    return;
  }
  uVar7 = 0xffffffff;
  pcVar4 = (&PTR_s_Drive_004c28b8)[cVar1];
  do {
    pcVar15 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  pcVar4 = pcVar15 + -uVar7;
  pcVar15 = (char *)&DAT_0051a068;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar4 = &DAT_004d39dc;
  do {
    pcVar15 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  iVar8 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar4;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar14 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar2 != '\0');
  pcVar4 = pcVar15 + -uVar7;
  pcVar15 = pcVar14 + -1;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar4 = (&PTR_s_Drive_004c28b8)[(char)(&DAT_005794da)[iVar12]];
  do {
    pcVar15 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  iVar8 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar4;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar14 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar2 != '\0');
  pcVar4 = pcVar15 + -uVar7;
  pcVar15 = pcVar14 + -1;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  uVar7 = 0xffffffff;
  pcVar4 = &DAT_004c7250;
  do {
    pcVar15 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar2 != '\0');
  uVar7 = ~uVar7;
  iVar8 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar4;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar14 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar2 != '\0');
  pcVar4 = pcVar15 + -uVar7;
  pcVar15 = pcVar14 + -1;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  if (cVar1 < '\x13') {
    (&DAT_00579515)[iVar12 + cVar1] = *(undefined1 *)(&DAT_0057955c + param_1 * 0x80);
  }
  local_c = (undefined **)0x0;
  local_14 = 1;
  local_8 = &DAT_00575cb8;
  iVar8 = 0x10a;
  do {
    FUN_004762d0(&DAT_0051b360,0,0,0);
    DAT_0051a068._0_1_ = 0;
    pcVar4 = (char *)FUN_004ad425(local_14,&DAT_00824134,10);
    uVar7 = 0xffffffff;
    do {
      pcVar15 = pcVar4;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar15 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar15;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar13 = -1;
    pcVar4 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar4;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar14 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar14;
    } while (cVar1 != '\0');
    pcVar4 = pcVar15 + -uVar7;
    pcVar15 = pcVar14 + -1;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar15 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar15 = pcVar15 + 1;
    }
    FUN_00404b70(&DAT_0051a068,iVar8,0x84,0x80000000);
    cVar1 = (&DAT_005794db)[iVar12 + local_14];
    if (cVar1 != '\0') {
      local_10 = (ushort *)0x80000000;
      cVar2 = *local_8;
      if (cVar1 < cVar2) {
        local_10 = (ushort *)0x80007d08;
      }
      iVar13 = (int)cVar1;
      if (iVar13 < cVar2 + -1) {
        local_10 = (ushort *)0x80007ff0;
      }
      if (cVar2 < cVar1) {
        local_10 = (ushort *)0x8000211f;
      }
      if (cVar2 + 1 < iVar13) {
        local_10 = (ushort *)0x80004010;
      }
      DAT_0051a068._0_1_ = 0;
      pcVar4 = (char *)FUN_004ad425(iVar13,&DAT_00824134,10);
      uVar7 = 0xffffffff;
      do {
        pcVar15 = pcVar4;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar15 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar15;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar13 = -1;
      pcVar4 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar4;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar14 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar14;
      } while (cVar1 != '\0');
      pcVar4 = pcVar15 + -uVar7;
      pcVar15 = pcVar14 + -1;
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar15 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar15 = pcVar15 + 1;
      }
      FUN_004762d0(&DAT_00519928,0,0,0);
      FUN_00404b70(&DAT_0051a068,iVar8,0x94,local_10);
      local_c = (undefined **)((int)local_c + (int)(char)(&DAT_005794db)[iVar12 + local_14]);
    }
    if ((char)(&DAT_005794d9)[iVar12] == local_14) {
      DAT_0051a068._0_1_ = 0;
      pcVar4 = (char *)FUN_004ad425((int)(char)(&DAT_005794da)[iVar12],&DAT_00824134,10);
      uVar7 = 0xffffffff;
      do {
        pcVar15 = pcVar4;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar15 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar15;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar13 = -1;
      pcVar4 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar4;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar14 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar14;
      } while (cVar1 != '\0');
      pcVar4 = pcVar15 + -uVar7;
      pcVar15 = pcVar14 + -1;
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar15 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar15 = pcVar15 + 1;
      }
      FUN_004762d0(&DAT_00519928,0,0,0);
      FUN_00404b70(&DAT_0051a068,iVar8,0x94,0x80004210);
      local_c = (undefined **)((int)local_c + (int)(char)(&DAT_005794da)[iVar12]);
    }
    iVar8 = iVar8 + 0x12;
    local_14 = local_14 + 1;
    local_8 = local_8 + 0x208;
  } while (iVar8 < 0x24e);
  FUN_004762d0(&DAT_00519928,0,0,0);
  DAT_0051a068._0_1_ = 0;
  pcVar4 = (char *)FUN_004ad425(local_c,&DAT_00824134,10);
  uVar7 = 0xffffffff;
  do {
    pcVar15 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  iVar8 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar4;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  pcVar4 = pcVar15 + -uVar7;
  pcVar15 = pcVar14 + -1;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
  FUN_00404b70(&DAT_0051a068,0x256,0x94,0x80000000);
  iVar8 = DAT_00824130;
  local_10 = (ushort *)DAT_00824130;
  DAT_00824130 = -1;
  FUN_004762d0(&DAT_0051b360,0,0,0);
  if (local_4 != 0) {
    local_8 = (char *)0x118;
    uVar7 = param_1 ^ 1;
    local_4 = uVar7;
    do {
      FUN_004762d0(&DAT_00519fd8,0,0,0);
      DAT_0051a068._0_1_ = 0;
      FUN_00466b70((int)(short)(&DAT_00579568)[param_1 * 0x80],0xffffffff,0,0);
      uVar9 = 0xffffffff;
      DAT_0051a068._0_1_ = 0x27;
      pcVar4 = s___with_004d39d4;
      do {
        pcVar15 = pcVar4;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar15 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar15;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      iVar8 = -1;
      pcVar4 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar4;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar14 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar14;
      } while (cVar1 != '\0');
      pcVar4 = pcVar15 + -uVar9;
      pcVar15 = pcVar14 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar15 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar15 = pcVar15 + 1;
      }
      FUN_004676e0(param_1,0);
      uVar9 = 0xffffffff;
      pcVar4 = &DAT_004c6af4;
      do {
        pcVar15 = pcVar4;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar15 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar15;
      } while (cVar1 != '\0');
      uVar9 = ~uVar9;
      iVar8 = -1;
      pcVar4 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar4;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar14 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar14;
      } while (cVar1 != '\0');
      pcVar4 = pcVar15 + -uVar9;
      pcVar15 = pcVar14 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar15 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar15 = pcVar15 + 1;
      }
      FUN_004676e0(uVar7,0);
      FUN_00478b80(0x148,0xaf,0x210,0xaf,0x80000210);
      FUN_00404b70(&DAT_0051a068,0x1ac,0xa7,0x800003ff);
      iVar8 = 0xb3;
      param_2 = 1;
      if ('\0' < (char)(&DAT_005794d9)[iVar12]) {
        local_c = (undefined **)0xf8;
        do {
          if ((&DAT_005794ef)[iVar12 + param_2] != '\0') {
            uVar7 = local_4;
            if (((&DAT_005794c8)[param_1 * 0x40] & 0x100000) == 0) {
              uVar7 = param_1;
            }
            DAT_0051a068._0_1_ = 0;
            iVar13 = FUN_004668f0((int)(short)(&DAT_00579568)[param_1 * 0x80],param_2,uVar7 ^ 1);
            if (iVar13 != 0) {
              FUN_0045c460(uVar7 ^ 1);
              FUN_004049d0(&DAT_0051a068,local_c,iVar8,
                           (-(uint)(param_1 != uVar7) & 0x3a0f) + 0x80004210);
              iVar8 = iVar8 + 9;
            }
            DAT_0051a068._0_1_ = 0;
            iVar13 = FUN_004668f0((int)(short)(&DAT_00579568)[param_1 * 0x80],param_2,uVar7);
            if (iVar13 != 0) {
              FUN_0045c460(uVar7);
              FUN_004049d0(&DAT_0051a068,local_c,iVar8,
                           (-(uint)(param_1 != uVar7) & 0xffffc5f1) + 0x80007c1f);
              iVar8 = iVar8 + 10;
            }
          }
          param_2 = param_2 + 1;
          local_c = (undefined **)((int)local_c + 10);
          uVar7 = local_4;
        } while (param_2 <= (char)(&DAT_005794d9)[iVar12]);
      }
      if (iVar8 <= (int)local_8) goto LAB_0045d484;
      local_8 = (char *)((int)local_8 + 0x13);
    } while( true );
  }
  FUN_0047ab50(&local_18,&local_1c);
  iVar13 = FUN_00467170(0x13e - local_18,0x106 - local_1c);
  if (iVar13 < 0x19) {
    DAT_00824130 = 0;
  }
  iVar13 = FUN_00467170(0x17f - local_18,0x106 - local_1c);
  if (iVar13 < 0x19) {
    DAT_00824130 = 1;
  }
  iVar13 = FUN_00467170(0x1c0 - local_18,0x106 - local_1c);
  if (iVar13 < 0x19) {
    DAT_00824130 = 2;
  }
  iVar13 = FUN_00467170(0x201 - local_18,0x106 - local_1c);
  if (iVar13 < 0x19) {
    DAT_00824130 = 3;
  }
  iVar13 = FUN_00467170(0x253 - local_18,0x106 - local_1c);
  if (iVar13 < 0x19) {
    DAT_00824130 = 4;
  }
  FUN_00473f60(&DAT_00567390 + (uint)(DAT_00824130 == 0) * 0x2c,PTR_DAT_004c1570,0x125,0xed,0);
  FUN_00473f60(&DAT_00567498 + (uint)(DAT_00824130 == 1) * 0x2c,PTR_DAT_004c1570,0x166,0xed,0);
  FUN_00473f60(&DAT_0056751c + (uint)(DAT_00824130 == 2) * 0x2c,PTR_DAT_004c1570,0x1a7,0xed,0);
  if ((&DAT_00579568)[param_1 * 0x80] != -1) {
    FUN_00473f60(&DAT_005675a0 + (uint)(DAT_00824130 == 3) * 0x2c,PTR_DAT_004c1570,0x1e8,0xed,0);
  }
  FUN_00473f60((uint)(DAT_00824130 == 4) * 0x2c + 0x567624,PTR_DAT_004c1570,0x23a,0xed,0);
  if (DAT_00824130 != iVar8) {
    DAT_00823768 = 0;
    goto LAB_0045daf3;
  }
  DAT_00823768 = DAT_00823768 + 1;
  if ((DAT_00823768 < 7) || (DAT_00824130 == -1)) goto LAB_0045daf3;
  DAT_0051a068._0_1_ = 0;
  switch(DAT_00824130) {
  case 0:
    pcVar4 = s_Customize_004d39c8;
    break;
  case 1:
    pcVar4 = s_Move_Eject_Golfer_004d39b4;
    goto LAB_0045da95;
  case 2:
    pcVar4 = s_Take_Snapshot_004d39a4;
    break;
  case 3:
    pcVar4 = s_View_Story_004d3978;
LAB_0045da95:
    uVar7 = 0xffffffff;
    do {
      pcVar15 = pcVar4;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar15 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar15;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar4 = pcVar15 + -uVar7;
    pcVar15 = (char *)&DAT_0051a068;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar15 = pcVar15 + 4;
    }
    goto LAB_0045dad0;
  default:
    goto switchD_0045da74_caseD_4;
  case 5:
    pcVar4 = s_Next_Chapter_004d3984;
  }
  uVar7 = 0xffffffff;
  do {
    pcVar15 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar4 = pcVar15 + -uVar7;
  pcVar15 = (char *)&DAT_0051a068;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
LAB_0045dad0:
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
switchD_0045da74_caseD_4:
  FUN_00432620(local_18,local_1c);
LAB_0045daf3:
  local_14 = 0;
  FUN_004762d0(&DAT_0051b360,0,0,0);
  local_c = (undefined **)0xaa;
  iVar8 = (-(uint)(param_2 != 0) & 5) + 4;
  do {
    cVar1 = (&DAT_00579528)[iVar12 + iVar8];
    local_4 = CONCAT31(local_4._1_3_,cVar1);
    if (cVar1 != '\0') {
      local_8 = (char *)(uint)(byte)(&DAT_00579532)[iVar12 + iVar8];
      uVar7 = 0xffffffff;
      pcVar4 = (&PTR_s_Drive_004c28b8)[(uint)local_8 / 0xb];
      do {
        pcVar15 = pcVar4;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar15 = pcVar4 + 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar15;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      pcVar4 = pcVar15 + -uVar7;
      pcVar15 = (char *)&DAT_0051a068;
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar15 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar15 = pcVar15 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar4 = &DAT_004d3970;
      do {
        pcVar15 = pcVar4;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar15 = pcVar4 + 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar15;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      iVar13 = -1;
      pcVar4 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar4;
        if (iVar13 == 0) break;
        iVar13 = iVar13 + -1;
        pcVar14 = pcVar4 + 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar14;
      } while (cVar2 != '\0');
      pcVar4 = pcVar15 + -uVar7;
      pcVar15 = pcVar14 + -1;
      for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar15 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar15 = pcVar15 + 1;
      }
      if (cVar1 != '\x13') {
        uVar7 = 0xffffffff;
        pcVar4 = (&PTR_s_Drive_004c28b8)[(uint)local_8 % 0xb];
        do {
          pcVar15 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar15 = pcVar4 + 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar15;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar13 = -1;
        pcVar4 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar4;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar14 = pcVar4 + 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar14;
        } while (cVar2 != '\0');
        pcVar4 = pcVar15 + -uVar7;
        pcVar15 = pcVar14 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar15 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar15 = pcVar15 + 1;
        }
        uVar7 = 0xffffffff;
        pcVar4 = &DAT_004d3968;
        do {
          pcVar15 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar15 = pcVar4 + 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar15;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7;
        iVar13 = -1;
        pcVar4 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar4;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar14 = pcVar4 + 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar14;
        } while (cVar2 != '\0');
        pcVar4 = pcVar15 + -uVar7;
        pcVar15 = pcVar14 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar15 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar15 = pcVar15 + 1;
        }
      }
      uVar7 = 0xffffffff;
      pcVar4 = (char *)&DAT_0051a068;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      puVar16 = &DAT_00579540 + param_1 * 0x80 + iVar8;
      local_10 = puVar16;
      FUN_00469b00(cVar1,*puVar16 & 0x3fff,local_8,param_1);
      if (DAT_005409a8 != 0) {
        uVar9 = 0xffffffff;
        (&DAT_0051a067)[~uVar7] = 0;
        pcVar4 = &DAT_004d3964;
        do {
          pcVar15 = pcVar4;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar15 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar15;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9;
        iVar13 = -1;
        pcVar4 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar4;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar14 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar14;
        } while (cVar1 != '\0');
        pcVar4 = pcVar15 + -uVar9;
        pcVar15 = pcVar14 + -1;
        for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar15 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar15 = pcVar15 + 1;
        }
        FUN_00469b00((&DAT_00579528)[iVar12 + iVar8],*local_10 & 0x3fff,
                     (&DAT_00579532)[iVar12 + iVar8],param_1);
        uVar7 = 0xffffffff;
        pcVar4 = &DAT_004d3964;
        do {
          pcVar15 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar15 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar15;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar13 = -1;
        pcVar4 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar4;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar14 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar14;
        } while (cVar1 != '\0');
        pcVar4 = pcVar15 + -uVar7;
        pcVar15 = pcVar14 + -1;
        for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
          pcVar4 = pcVar4 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar7 = uVar7 & 3; puVar16 = local_10, uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar15 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          pcVar15 = pcVar15 + 1;
        }
      }
      iVar13 = -0x7fff9ce8;
      if ((*puVar16 & 0xc000) == 0x4000) {
        iVar13 = -0x7fffdc18;
      }
      if ((*puVar16 & 0xc000) == 0xc000) {
        iVar13 = -0x7fff82f8;
      }
      if ((&DAT_00579528)[iVar12 + iVar8] == '2') {
        iVar13 = -0x7fff83e1;
      }
      if ((param_2 == 0) || (iVar13 == -0x7fff82f8)) {
        iVar5 = FUN_00477250(&DAT_0051a068);
        if (iVar5 < 0x181) {
LAB_0045dda4:
          puVar18 = &DAT_0051a068;
        }
        else {
          if ((&DAT_00579528)[iVar12 + iVar8] == '2') {
            FUN_004762d0(&DAT_00519fd8,0,0,0);
            goto LAB_0045dda4;
          }
          puVar18 = (undefined4 *)&DAT_0051a07a;
        }
        FUN_00404ad0(puVar18,0xf8,local_c,iVar13);
        local_c = (undefined **)((int)local_c + 0xd);
        FUN_004762d0(&DAT_0051b360,0,0,0);
        local_14 = local_14 + 1;
        if (4 < local_14) {
          return;
        }
      }
    }
    iVar8 = iVar8 + -1;
    if (iVar8 < 0) {
      return;
    }
  } while( true );
LAB_0045d484:
  FUN_0047ab50(&local_18,&local_1c);
  iVar12 = FUN_00467170(0x126 - local_18,0x11f - local_1c);
  if (iVar12 < 0x19) {
    DAT_00824130 = 0;
  }
  iVar12 = FUN_00467170(0x167 - local_18,0x11f - local_1c);
  if (iVar12 < 0x19) {
    DAT_00824130 = 5;
  }
  iVar12 = FUN_00467170(0x1a8 - local_18,0x11f - local_1c);
  if (iVar12 < 0x19) {
    DAT_00824130 = 2;
  }
  iVar12 = FUN_00467170(0x1e9 - local_18,0x11f - local_1c);
  if (iVar12 < 0x19) {
    DAT_00824130 = 3;
  }
  iVar12 = FUN_00467170(0x221 - local_18,0x11f - local_1c);
  if (iVar12 < 0x19) {
    DAT_00824130 = 4;
  }
  if ((((&DAT_0057956a)[param_1 * 0x80] == 4) &&
      ((&DAT_0057956a)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x80] == 4)) && (DAT_00824130 == 5))
  {
    DAT_00824130 = -1;
  }
  FUN_00473f60(&DAT_00567390 + (uint)(DAT_00824130 == 0) * 0x2c,PTR_DAT_004c1570,0x10d,0x10e,0);
  if (((&DAT_0057956a)[param_1 * 0x80] != 4) ||
     ((&DAT_0057956a)[(short)(&DAT_0057955a)[param_1 * 0x80] * 0x80] != 4)) {
    FUN_00473f60(&DAT_005676a8 + (uint)(DAT_00824130 == 5) * 0x2c,PTR_DAT_004c1570,0x14e,0x110,0);
  }
  FUN_00473f60(&DAT_005677b0 + (uint)(DAT_00824130 == 2) * 0x2c,PTR_DAT_004c1570,399,0x110,0);
  FUN_00473f60(&DAT_0056772c + (uint)(DAT_00824130 == 3) * 0x2c,PTR_DAT_004c1570,0x1d0,0x110,0);
  FUN_00473f60((uint)(DAT_00824130 == 4) * 0x2c + 0x567834,PTR_DAT_004c1570,0x20e,0x110,0);
  FUN_00473f60(&DAT_0058bb7c,PTR_DAT_004c1570,0x228,0xb0,0);
  FUN_0045c200(uVar7,0x228,0xb0,0xffffffff);
  if ((ushort *)DAT_00824130 != local_10) {
    DAT_00823768 = 0;
    return;
  }
  DAT_00823768 = DAT_00823768 + 1;
  if (DAT_00823768 < 7) {
    DAT_0051a068._0_1_ = 0;
    return;
  }
  DAT_0051a068._0_1_ = 0;
  switch(DAT_00824130) {
  case 0:
    pcVar4 = s_Customize_004d39c8;
    break;
  case 1:
    uVar7 = 0xffffffff;
    pcVar4 = s_Move_Eject_Golfer_004d39b4;
    do {
      pcVar15 = pcVar4;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar15 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar15;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar4 = pcVar15 + -uVar7;
    pcVar15 = (char *)&DAT_0051a068;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar15 = pcVar15 + 4;
    }
    goto LAB_0045d7d9;
  case 2:
    pcVar4 = s_Take_Snapshot_004d39a4;
    break;
  case 3:
    uVar7 = 0xffffffff;
    pcVar4 = s_Golfer_Comments_004d3994;
    do {
      pcVar15 = pcVar4;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar15 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar15;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar4 = pcVar15 + -uVar7;
    pcVar15 = (char *)&DAT_0051a068;
    for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar15 = pcVar15 + 4;
    }
    goto LAB_0045d7d9;
  default:
    goto switchD_0045d760_caseD_4;
  case 5:
    pcVar4 = s_Next_Chapter_004d3984;
  }
  uVar7 = 0xffffffff;
  do {
    pcVar15 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar15 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar15;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar4 = pcVar15 + -uVar7;
  pcVar15 = (char *)&DAT_0051a068;
  for (uVar9 = uVar7 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar15 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar15 = pcVar15 + 4;
  }
LAB_0045d7d9:
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar15 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar15 = pcVar15 + 1;
  }
switchD_0045d760_caseD_4:
  FUN_00432620(local_18,local_1c);
  return;
}

