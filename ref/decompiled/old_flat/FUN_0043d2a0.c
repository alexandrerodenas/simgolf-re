/* Ghidra decompiled: golf.exe */
/* Function: FUN_0043d2a0 @ 0x0043D2A0 */


int FUN_0043d2a0(LPCSTR param_1,char *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  HANDLE hFindFile;
  char *pcVar3;
  char *pcVar4;
  BOOL BVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  CHAR *pCVar10;
  undefined4 *puVar11;
  CHAR *pCVar12;
  char *pcVar13;
  int local_1ac;
  char local_1a4 [100];
  _WIN32_FIND_DATAA local_140;
  
  puVar11 = (undefined4 *)&DAT_0080b130;
  for (iVar6 = 0x9c4; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_1ac = 0;
  hFindFile = FindFirstFileA(param_1,&local_140);
  if (hFindFile == (HANDLE)0xffffffff) {
    return 0;
  }
  pcVar9 = &DAT_0080b130;
  do {
    uVar7 = 0xffffffff;
    pCVar10 = local_140.cFileName;
    do {
      pCVar12 = pCVar10;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pCVar12 = pCVar10 + 1;
      cVar1 = *pCVar10;
      pCVar10 = pCVar12;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    bVar2 = true;
    pCVar10 = pCVar12 + -uVar7;
    pcVar3 = local_1a4;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pCVar10;
      pCVar10 = pCVar10 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar3 = *pCVar10;
      pCVar10 = pCVar10 + 1;
      pcVar3 = pcVar3 + 1;
    }
    if (*param_2 != '\0') {
      pcVar3 = _strstr(local_1a4,param_2);
      if (pcVar3 == (char *)0x0) {
        bVar2 = false;
      }
    }
    if (*param_3 != '\0') {
      pcVar3 = _strstr(local_1a4,param_3);
      if (pcVar3 != (char *)0x0) {
        bVar2 = false;
      }
    }
    pcVar3 = _strstr(local_1a4,s_Shadow_004c8a34);
    if (pcVar3 != (char *)0x0) {
      bVar2 = false;
    }
    pcVar4 = _strstr(local_1a4,s_shadow_004c8a2c);
    pcVar3 = pcVar9;
    if ((pcVar4 == (char *)0x0) && (bVar2)) {
      uVar7 = 0xffffffff;
      pcVar3 = local_1a4;
      do {
        pcVar4 = pcVar3;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar4 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar4;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar6 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar13 = pcVar3;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar13 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar13;
      } while (cVar1 != '\0');
      pcVar3 = pcVar4 + -uVar7;
      pcVar4 = pcVar13 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar4 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar3 = &DAT_004c8a28;
      do {
        pcVar4 = pcVar3;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar4 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar4;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar6 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar13 = pcVar3;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar13 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar13;
      } while (cVar1 != '\0');
      pcVar4 = pcVar4 + -uVar7;
      pcVar13 = pcVar13 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar13 = pcVar13 + 4;
      }
      pcVar3 = pcVar9 + 100;
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar13 = pcVar13 + 1;
      }
      local_1ac = local_1ac + 1;
      uVar7 = 0xffffffff;
      pcVar4 = local_1a4;
      do {
        pcVar13 = pcVar4;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar4 = pcVar13 + -uVar7;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar9 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar9 = pcVar9 + 1;
      }
    }
    BVar5 = FindNextFileA(hFindFile,&local_140);
    pcVar9 = pcVar3;
    if (BVar5 == 0) {
      FindClose(hFindFile);
      return local_1ac;
    }
  } while( true );
}

