/* Ghidra decompiled: golf.exe */
/* Function: FUN_004725b0 @ 0x004725B0 */
/* Body size: 3355 addresses */


void FUN_004725b0(void)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  HANDLE pvVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  byte *pbVar14;
  short *psVar15;
  char *pcVar16;
  char *pcVar17;
  undefined4 *unaff_FS_OFFSET;
  bool bVar18;
  int local_74c;
  int iStack_748;
  int local_744;
  int iStack_740;
  char *pcStack_73c;
  int iStack_738;
  short local_734 [6];
  int local_728 [5];
  int local_714 [4];
  char local_704 [140];
  byte abStack_678 [100];
  undefined1 local_614 [176];
  undefined1 local_564 [352];
  undefined1 local_404 [696];
  _WIN32_FIND_DATAA local_14c;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b7b07;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  local_734[0] = 0x15a;
  local_734[1] = 0x1b4;
  local_734[2] = 0x20e;
  local_734[3] = 0x268;
  local_734[4] = 0x2c2;
  local_744 = FUN_004724c0();
  local_74c = 0;
  if (0 < local_744) {
    pcVar11 = &DAT_0056e928;
    do {
      uVar7 = 0xffffffff;
      abStack_678[local_74c] = 0;
      pcVar13 = s_Themes__004c84e8;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = local_704;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar13 = pcVar11;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar13 = local_704;
      do {
        pcVar16 = pcVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar16 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar1 != '\0');
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = pcVar16 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar13 = &DAT_004e18e4;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar13 = local_704;
      do {
        pcVar16 = pcVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar16 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar1 != '\0');
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = pcVar16 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      pvVar4 = FindFirstFileA(local_704,&local_14c);
      if (pvVar4 != (HANDLE)0xffffffff) {
        abStack_678[local_74c] = 1;
      }
      uVar7 = 0xffffffff;
      pcVar13 = s_Themes__004c84e8;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = local_704;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar13 = pcVar11;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar13 = local_704;
      do {
        pcVar16 = pcVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar16 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar1 != '\0');
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = pcVar16 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar13 = &DAT_004c856c;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar13 = local_704;
      do {
        pcVar16 = pcVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar16 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar1 != '\0');
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = pcVar16 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      pvVar4 = FindFirstFileA(local_704,&local_14c);
      if (pvVar4 != (HANDLE)0xffffffff) {
        abStack_678[local_74c] = abStack_678[local_74c] | 2;
      }
      uVar7 = 0xffffffff;
      pcVar13 = s_Themes__004c84e8;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = local_704;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar13 = pcVar11;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar13 = local_704;
      do {
        pcVar16 = pcVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar16 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar1 != '\0');
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = pcVar16 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar13 = s__celebrities_dta_004e18ac;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar13 = local_704;
      do {
        pcVar16 = pcVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar16 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar1 != '\0');
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = pcVar16 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      pvVar4 = FindFirstFileA(local_704,&local_14c);
      if (pvVar4 != (HANDLE)0xffffffff) {
        abStack_678[local_74c] = abStack_678[local_74c] | 4;
      }
      uVar7 = 0xffffffff;
      pcVar13 = s_Themes__004c84e8;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = local_704;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar13 = pcVar11;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar13 = local_704;
      do {
        pcVar16 = pcVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar16 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar1 != '\0');
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = pcVar16 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar13 = s__progolfers_dta_004e1868;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar13 = local_704;
      do {
        pcVar16 = pcVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar16 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar1 != '\0');
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = pcVar16 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      pvVar4 = FindFirstFileA(local_704,&local_14c);
      if (pvVar4 != (HANDLE)0xffffffff) {
        abStack_678[local_74c] = abStack_678[local_74c] | 8;
      }
      uVar7 = 0xffffffff;
      pcVar13 = s_Themes__004c84e8;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = local_704;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar13 = pcVar11;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar13 = local_704;
      do {
        pcVar16 = pcVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar16 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar1 != '\0');
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = pcVar16 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar13 = &DAT_004e4140;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar13 = local_704;
      do {
        pcVar16 = pcVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar16 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar1 != '\0');
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = pcVar16 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      pvVar4 = FindFirstFileA(local_704,&local_14c);
      if (pvVar4 != (HANDLE)0xffffffff) {
        abStack_678[local_74c] = abStack_678[local_74c] | 0x20;
      }
      uVar7 = 0xffffffff;
      pcVar13 = s_Themes__004c84e8;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = local_704;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar13 = pcVar11;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar13 = local_704;
      do {
        pcVar16 = pcVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar16 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar1 != '\0');
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = pcVar16 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar13 = s__landmark__flc_004e4130;
      do {
        pcVar17 = pcVar13;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar17 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar17;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar13 = local_704;
      do {
        pcVar16 = pcVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar16 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar16;
      } while (cVar1 != '\0');
      pcVar13 = pcVar17 + -uVar7;
      pcVar17 = pcVar16 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar17 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar17 = pcVar17 + 1;
      }
      pvVar4 = FindFirstFileA(local_704,&local_14c);
      if (pvVar4 != (HANDLE)0xffffffff) {
        abStack_678[local_74c] = abStack_678[local_74c] | 0x40;
      }
      local_74c = local_74c + 1;
      pcVar11 = pcVar11 + 0x32;
    } while (local_74c < local_744);
  }
  local_714[0] = 0x245;
  local_714[1] = 0x2d6;
  local_714[2] = 0x301;
  local_714[3] = 0x301;
  local_728[0] = 0x208;
  local_728[1] = 0x215;
  local_728[2] = 0x51;
  local_728[3] = 0x1d7;
  FUN_004a55d2(local_564,0x2c,8,FUN_00473ab0,&LAB_004041f0);
  local_4 = 0;
  FUN_004a55d2(local_614,0x2c,4,FUN_00473ab0,&LAB_004041f0);
  local_4._0_1_ = 1;
  FUN_00474ae0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00475840(s_interface_Title_ThemePacks_MO_004e4110,0,0,0x100,2);
  FUN_00473bf0(local_404,1,1,0x57,0x1f,1,1);
  FUN_00473bf0(local_404,0x59,1,0x57,0x1f,1,1);
  FUN_00473bf0(local_404,0xb1,1,0x57,0x1f,1,1);
  FUN_00473bf0(local_404,1,0x21,0xdd,0x1f,1,1);
  FUN_00473bf0(local_404,0x109,1,0x47,0x50,1,1);
  FUN_00473bf0(local_404,0x151,1,0x30,0x31,1,1);
  FUN_00473bf0(local_404,0x182,1,0x13,0x23,1,1);
  FUN_00473bf0(local_404,0x196,1,0x13,0x23,1,1);
  FUN_00475840(s_interface_Title_ThemePacks_004e40f4,0,0,0x100,2);
  FUN_00473bf0(local_404,0x245,0x208,0x47,0x50,1,1);
  FUN_00473bf0(local_404,0x2d6,0x215,0x30,0x31,1,1);
  FUN_00473bf0(local_404,0x301,0x51,0x13,0x23,1,1);
  FUN_00473bf0(local_404,0x301,0x1d7,0x13,0x23,1,1);
  FUN_00483d30();
  DAT_00822d68 = 0;
LAB_00472c5a:
  do {
    FUN_004762d0(&DAT_0051a028,0,0,0);
    FUN_00475c60(&DAT_00519cd4,0,0,0,0,800,600);
    FUN_004049d0(s_Select_a_Theme_Pack_004e40e0,0x4e,0x22,0x80000000);
    FUN_004762d0(&DAT_0051b360,0,0,0);
    FUN_00404b70(s_Stories_004e40d8,0x15a,0x3e,0x80000000);
    FUN_00404b70(s_Characters_004e40cc,0x1b4,0x25,0x80000000);
    FUN_00404b70(s_Celebrities_004e40c0,0x20e,0x3e,0x80000000);
    FUN_00404b70(s_Pro_Golfers_004e40b4,0x268,0x25,0x80000000);
    FUN_00404b70(s_Courses_004e40ac,0x2c2,0x3e,0x80000000);
    FUN_004762d0(&DAT_0051a028,0,0,0);
    iStack_738 = -1;
    local_74c = 0;
    if (0 < local_744) {
      iVar9 = 0x5c;
      pcStack_73c = &DAT_0056e928;
      do {
        uVar7 = 0xffffffff;
        pcVar11 = pcStack_73c;
        do {
          pcVar13 = pcVar11;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pbVar5 = (byte *)&DAT_0051a068;
        pcVar11 = pcVar13 + -uVar7;
        pcVar13 = (char *)&DAT_0051a068;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        pbVar14 = &DAT_00567328;
        do {
          bVar2 = *pbVar5;
          bVar18 = bVar2 < *pbVar14;
          if (bVar2 != *pbVar14) {
LAB_00472dd2:
            iVar6 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
            goto LAB_00472dd7;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar18 = bVar2 < pbVar14[1];
          if (bVar2 != pbVar14[1]) goto LAB_00472dd2;
          pbVar5 = pbVar5 + 2;
          pbVar14 = pbVar14 + 2;
        } while (bVar2 != 0);
        iVar6 = 0;
LAB_00472dd7:
        if (iVar6 != 0) {
          FUN_004049d0(&DAT_0051a068,0x49,iVar9 + 0xb,0x80004210);
        }
        else {
          FUN_00473e60(PTR_DAT_004c1570,0x48,iVar9,0);
          FUN_004049d0(&DAT_0051a068,0x49,iVar9 + 0xb,0x80000000);
          iStack_738 = local_74c;
        }
        iVar10 = 0;
        psVar15 = local_734;
        local_728[4] = (int)(char)abStack_678[local_74c];
        do {
          if ((local_728[4] & 1 << ((byte)iVar10 & 0x1f)) == 0) {
            if (iVar6 == 0) {
              sVar3 = *psVar15;
              goto LAB_00472ea9;
            }
          }
          else {
            sVar3 = *psVar15;
LAB_00472ea9:
            FUN_00473cb0(PTR_DAT_004c1570,sVar3 + -0x2b,iVar9,1,1,1,0);
          }
          iVar10 = iVar10 + 1;
          psVar15 = psVar15 + 1;
        } while (iVar10 < 6);
        iVar9 = iVar9 + 0x20;
        local_74c = local_74c + 1;
        pcStack_73c = pcStack_73c + 0x32;
      } while (local_74c < local_744);
    }
    FUN_00480c80(0);
    iVar6 = 0;
    iVar9 = -1;
    do {
      FUN_0045bf80(2,0);
      FUN_0045c030();
      FUN_0047ab50(&iStack_748,&iStack_740);
      iVar12 = -1;
      iVar10 = FUN_00467170(iStack_748 + -0x267,iStack_740 + -0x22b);
      if (iVar10 < 0x1a) {
        iVar12 = 0;
      }
      iVar10 = FUN_00467170(iStack_748 + -0x2ed,iStack_740 + -0x22c);
      if (iVar10 < 0x18) {
        iVar12 = 1;
      }
      iVar10 = FUN_00467170(iStack_748 + -0x30a,iStack_740 + -99);
      if (iVar10 < 0x14) {
        iVar12 = 2;
      }
      iVar10 = FUN_00467170(iStack_748 + -0x30a,iStack_740 + -0x1e7);
      if (iVar10 < 0x14) {
        iVar12 = 3;
      }
      if (iVar12 == iVar9) {
        iVar6 = iVar6 + 1;
        if ((0x1e < iVar6) && (iVar12 != -1)) {
          FUN_004762d0(&DAT_0051b360,0,0,0);
          DAT_0051a068._0_1_ = 0;
          if (iVar12 == 0) {
            pcVar11 = &DAT_004e9a84;
            if (iStack_738 != -1) {
              pcVar11 = &DAT_004c87e4;
            }
            uVar7 = 0xffffffff;
            do {
              pcVar13 = pcVar11;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar13 = pcVar11 + 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar13;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar11 = pcVar13 + -uVar7;
            pcVar13 = (char *)&DAT_0051a068;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar13 = pcVar13 + 4;
            }
LAB_004730a2:
            for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar13 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar13 = pcVar13 + 1;
            }
          }
          else if (iVar12 == 1) {
            uVar7 = 0xffffffff;
            pcVar11 = s_Cancel_004c8590;
            do {
              pcVar13 = pcVar11;
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              pcVar13 = pcVar11 + 1;
              cVar1 = *pcVar11;
              pcVar11 = pcVar13;
            } while (cVar1 != '\0');
            uVar7 = ~uVar7;
            pcVar11 = pcVar13 + -uVar7;
            pcVar13 = (char *)&DAT_0051a068;
            for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
              pcVar11 = pcVar11 + 4;
              pcVar13 = pcVar13 + 4;
            }
            goto LAB_004730a2;
          }
          if (iVar6 == 0x1f) {
            FUN_0040ca10(local_714[iVar12],local_728[iVar12] + 0xe,0x30,0x10,0);
          }
          FUN_00404bc0(&DAT_0051a068,local_714[iVar12] + 0x18,local_728[iVar12] + 0x10,0x80007fff);
          FUN_00480c80(0);
        }
      }
      else {
        if (iVar9 != -1) {
          FUN_00473e60(PTR_DAT_004c1570,local_714[iVar9],local_728[iVar9],0);
        }
        if (iVar12 != -1) {
          FUN_00473e60(PTR_DAT_004c1570,local_714[iVar12],local_728[iVar12],0);
        }
        FUN_00480c80(0);
        iVar6 = 0;
      }
      if (DAT_00822d68 != 0) goto LAB_0047311b;
      iVar10 = FUN_0045ae70();
      iVar9 = iVar12;
    } while (iVar10 == 0);
    if (DAT_00822d68 == 0) {
      iVar12 = 1;
    }
    else {
LAB_0047311b:
      if (iVar12 == -1) {
        if (((DAT_00822d68 == 0) ||
            (iVar9 = (int)(DAT_00822d64 + -0x5b + (DAT_00822d64 + -0x5b >> 0x1f & 0x1fU)) >> 5,
            iVar9 < 0)) || (local_744 <= iVar9)) {
          local_4._0_1_ = 1;
          FUN_00474c40();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004a5713(local_614,0x2c,4,&LAB_004041f0);
          goto LAB_004732ad;
        }
        uVar7 = 0xffffffff;
        pcVar11 = &DAT_0056e928 + iVar9 * 0x32;
        do {
          pcVar13 = pcVar11;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar11 + 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar11 = pcVar13 + -uVar7;
        pcVar13 = &DAT_00567328;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar13 = pcVar13 + 1;
        }
        goto LAB_00472c5a;
      }
    }
    DAT_00822d68 = 0;
    if (iVar12 == 0) {
      local_4._0_1_ = 1;
      FUN_00474c40();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004a5713(local_614,0x2c,4,&LAB_004041f0);
      goto LAB_004732ad;
    }
  } while (iVar12 != 1);
  uVar7 = 0xffffffff;
  local_4._0_1_ = 1;
  pcVar11 = s_Standard_004c6c10;
  do {
    pcVar13 = pcVar11;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar13 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar13;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar11 = pcVar13 + -uVar7;
  pcVar13 = &DAT_00567328;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar13 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar13 = pcVar13 + 1;
  }
  FUN_00474c40();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004a5713(local_614,0x2c,4,&LAB_004041f0);
LAB_004732ad:
  local_4 = 0xffffffff;
  FUN_004a5713(local_564,0x2c,8,&LAB_004041f0);
  *unaff_FS_OFFSET = uStack_c;
  return;
}

