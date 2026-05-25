/* Ghidra decompiled: golf.exe */
/* Function: FUN_004659a0 @ 0x004659A0 */


void FUN_004659a0(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  short sVar10;
  undefined1 *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  char *pcVar15;
  int local_108;
  undefined4 local_104;
  char local_100 [256];
  
  FUN_00437fa0(s_Joe_Pro_glf_004e1920,0x4c,0xffffffff);
  FUN_00437fa0(s_I_M_Picky_glf_004e1910,0x4d,0xffffffff);
  FUN_00437fa0(s_Ivana_Richman_glf_004e18fc,0x4e,0xffffffff);
  FUN_00437fa0(s_J_P_Bigdome_glf_004e18ec,0x4f,0xffffffff);
  puVar4 = &DAT_0053a454;
  for (iVar5 = 0x4e2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar6 = 0xffffffff;
  DAT_0059e7b8 = DAT_0059e7b8 & 0xefffffff;
  pcVar12 = s_Themes__004c84e8;
  do {
    pcVar3 = pcVar12;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar12 = pcVar3 + -uVar6;
  pcVar3 = (char *)&DAT_0051a068;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar12 = &DAT_00567328;
  do {
    pcVar3 = pcVar12;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar12 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar12;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
  } while (cVar1 != '\0');
  pcVar12 = pcVar3 + -uVar6;
  pcVar3 = pcVar13 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar12 = &DAT_004e18e4;
  do {
    pcVar3 = pcVar12;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar12 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar12;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
  } while (cVar1 != '\0');
  pcVar12 = pcVar3 + -uVar6;
  pcVar3 = pcVar13 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar3 = pcVar3 + 1;
  }
  iVar5 = FUN_0043d2a0(&DAT_0051a068,&DAT_004e9a84,&DAT_004e9a84);
  if (iVar5 == 0) {
    FUN_0043d2a0(s_Themes_Standard___txt_004e18cc,&DAT_004e9a84,&DAT_004e9a84);
    DAT_0059e7b8 = DAT_0059e7b8 | 0x10000000;
  }
  puVar4 = (undefined4 *)&DAT_0080b130;
  puVar14 = &DAT_0053a454;
  for (iVar5 = 0x4e2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar14 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar14 = puVar14 + 1;
  }
  iVar5 = 0;
  pcVar12 = &DAT_0080b130;
  do {
    pcVar3 = _strstr(pcVar12,s_OpeningDay_004e18c0);
    iVar8 = iVar5;
    if (pcVar3 != (char *)0x0) break;
    pcVar12 = pcVar12 + 100;
    iVar5 = iVar5 + 1;
    iVar8 = DAT_00838a9c;
  } while ((int)pcVar12 < 0x80d840);
  DAT_00838a9c = iVar8;
  puVar4 = &DAT_00838228;
  do {
    *puVar4 = 0xffffffff;
    puVar4 = puVar4 + 0x43;
  } while ((int)puVar4 < 0x838a88);
  uVar6 = 0xffffffff;
  pcVar12 = s_Themes__004c84e8;
  do {
    pcVar3 = pcVar12;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  DAT_00838220._0_2_ = 0;
  pcVar12 = pcVar3 + -uVar6;
  pcVar3 = (char *)&DAT_0051a068;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar12 = &DAT_00567328;
  do {
    pcVar3 = pcVar12;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar12 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar12;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
  } while (cVar1 != '\0');
  pcVar12 = pcVar3 + -uVar6;
  pcVar3 = pcVar13 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar12 = s__celebrities_dta_004e18ac;
  do {
    pcVar3 = pcVar12;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar12 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar12;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
  } while (cVar1 != '\0');
  pcVar12 = pcVar3 + -uVar6;
  pcVar3 = pcVar13 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar3 = pcVar3 + 1;
  }
  iVar5 = FUN_004a614d(&DAT_0051a068,&DAT_004d3884);
  if ((iVar5 == 0) &&
     (iVar5 = FUN_004a614d(s_Themes_Standard_celebrities_dta_004e188c,&DAT_004d3884), iVar5 == 0)) {
    uVar6 = 0xffffffff;
    pcVar12 = s___file_not_found__004e1878;
    do {
      pcVar3 = pcVar12;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar5 = -1;
    pcVar12 = (char *)&DAT_0051a068;
    do {
      pcVar13 = pcVar12;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar13 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar1 != '\0');
    pcVar12 = pcVar3 + -uVar6;
    pcVar3 = pcVar13 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar3 = pcVar3 + 1;
    }
    FUN_0046de70(&DAT_0051a068,100,0x32);
  }
  else {
    puVar11 = &DAT_0055d758;
    do {
      *puVar11 = 0xff;
      puVar11 = puVar11 + 0x25;
    } while ((int)puVar11 < 0x55e5cc);
    iVar8 = FUN_004a65ee(local_100,0xfa,iVar5);
    if (iVar8 != 0) {
      pcVar12 = &DAT_0055d759;
      do {
        pcVar3 = pcVar12;
        if (local_100[0] != '*') {
          uVar6 = 0xffffffff;
          pcVar13 = local_100;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar1 != '\0');
          if (9 < ~uVar6 - 1) {
            uVar6 = 0xffffffff;
            pcVar3 = local_100;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
            local_100[~uVar6 - 2] = '\0';
            pcVar3 = (char *)FUN_004a678b(local_100,&DAT_004c76a8);
            uVar6 = 0xffffffff;
            do {
              pcVar13 = pcVar3;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar13 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar13;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar3 = pcVar13 + -uVar6;
            pcVar13 = (char *)&DAT_0051a068;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar13 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar13 = pcVar13 + 1;
            }
            uVar6 = 0xffffffff;
            pcVar3 = (char *)&DAT_0051a068;
            do {
              pcVar13 = pcVar3;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar13 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar13;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar3 = pcVar13 + -uVar6;
            pcVar13 = pcVar12 + -0x21;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar13 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar13 = pcVar13 + 1;
            }
            pcVar3 = (char *)FUN_004a678b(0,&DAT_004c76a8);
            uVar6 = 0xffffffff;
            do {
              pcVar13 = pcVar3;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar13 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar13;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar3 = pcVar13 + -uVar6;
            pcVar13 = (char *)&DAT_0051a068;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar13 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar13 = pcVar13 + 1;
            }
            pcVar12[-1] = (char)(((char)DAT_0051a068 + -0x41) % 0xb);
            pcVar3 = (char *)FUN_004a678b(0,&DAT_004c76a8);
            uVar6 = 0xffffffff;
            do {
              pcVar13 = pcVar3;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar13 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar13;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar3 = pcVar13 + -uVar6;
            pcVar13 = (char *)&DAT_0051a068;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar13 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar13 = pcVar13 + 1;
            }
            if (((char)DAT_0051a068 < '1') || ('3' < (char)DAT_0051a068)) {
              *pcVar12 = '\0';
            }
            else {
              *pcVar12 = (char)DAT_0051a068 + -0x30;
            }
            pcVar3 = (char *)FUN_004a678b(0,&DAT_004c76a8);
            uVar6 = 0xffffffff;
            do {
              pcVar13 = pcVar3;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar13 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar13;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar3 = pcVar13 + -uVar6;
            pcVar13 = (char *)&DAT_0051a068;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar13 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar13 = pcVar13 + 1;
            }
            pcVar12[1] = (char)(((char)DAT_0051a068 + -0x30) % 10);
            pcVar3 = (char *)FUN_004a678b(0,&DAT_004c76a8);
            uVar6 = 0xffffffff;
            do {
              pcVar13 = pcVar3;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar13 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar13;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar3 = pcVar13 + -uVar6;
            pcVar13 = (char *)&DAT_0051a068;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + 4;
              pcVar13 = pcVar13 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar13 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar13 = pcVar13 + 1;
            }
            pcVar12[2] = (char)(((char)DAT_0051a068 + -0x30) % 10);
            pcVar3 = (char *)FUN_004a678b(0,&DAT_004c76a8);
            uVar6 = 0xffffffff;
            do {
              pcVar13 = pcVar3;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar13 = pcVar3 + 1;
              cVar1 = *pcVar3;
              pcVar3 = pcVar13;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar3 = pcVar12 + 0x25;
            pcVar13 = pcVar13 + -uVar6;
            pcVar15 = (char *)&DAT_0051a068;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
              pcVar13 = pcVar13 + 4;
              pcVar15 = pcVar15 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar15 = *pcVar13;
              pcVar13 = pcVar13 + 1;
              pcVar15 = pcVar15 + 1;
            }
            pcVar12[3] = (char)(((char)DAT_0051a068 + -0x30) % 10);
            if (0x55e5cc < (int)pcVar3) break;
          }
        }
        iVar8 = FUN_004a65ee(local_100,0xfa,iVar5);
        pcVar12 = pcVar3;
      } while (iVar8 != 0);
    }
    FUN_004a609f(iVar5);
  }
  uVar6 = 0xffffffff;
  pcVar12 = s_Themes__004c84e8;
  do {
    pcVar3 = pcVar12;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar12 = pcVar3 + -uVar6;
  pcVar3 = (char *)&DAT_0051a068;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar12 = &DAT_00567328;
  do {
    pcVar3 = pcVar12;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar12 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar12;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
  } while (cVar1 != '\0');
  pcVar12 = pcVar3 + -uVar6;
  pcVar3 = pcVar13 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar12 = s__progolfers_dta_004e1868;
  do {
    pcVar3 = pcVar12;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar12 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar12;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
  } while (cVar1 != '\0');
  pcVar12 = pcVar3 + -uVar6;
  pcVar3 = pcVar13 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar3 = pcVar3 + 1;
  }
  iVar5 = FUN_004a614d(&DAT_0051a068,&DAT_004d3884);
  local_108 = 0;
  if ((iVar5 == 0) &&
     (local_104 = iVar5,
     iVar5 = FUN_004a614d(s_Themes_Standard_progolfers_dta_004e1848,&DAT_004d3884), iVar5 == 0)) {
    uVar6 = 0xffffffff;
    pcVar12 = s___file_not_found__004e1878;
    do {
      pcVar3 = pcVar12;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar3 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar3;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar8 = -1;
    pcVar12 = (char *)&DAT_0051a068;
    do {
      pcVar13 = pcVar12;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar13 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar1 != '\0');
    pcVar12 = pcVar3 + -uVar6;
    pcVar3 = pcVar13 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar3 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar3 = pcVar3 + 1;
    }
    local_104 = iVar5;
    FUN_0046de70(&DAT_0051a068,100,0x32);
  }
  else {
    puVar11 = &DAT_0058dd70;
    do {
      *puVar11 = 0xff;
      puVar11 = puVar11 + 0x38;
    } while ((int)puVar11 < 0x58f350);
    local_108 = 0;
    local_104 = iVar5;
    iVar8 = FUN_004a65ee(local_100,0xfa,iVar5);
    if (iVar8 != 0) {
      puVar11 = &DAT_0058dd70;
      do {
        if (local_100[0] != '*') {
          uVar6 = 0xffffffff;
          pcVar12 = local_100;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          if (9 < ~uVar6 - 1) {
            uVar6 = 0xffffffff;
            pcVar12 = local_100;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar1 != '\0');
            local_100[~uVar6 - 2] = '\0';
            pcVar12 = (char *)FUN_004a678b(local_100,&DAT_004c76a8);
            uVar6 = 0xffffffff;
            do {
              pcVar3 = pcVar12;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar3 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar3;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar12 = pcVar3 + -uVar6;
            pcVar3 = (char *)&DAT_0051a068;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar3 = pcVar3 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar3 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar3 = pcVar3 + 1;
            }
            uVar6 = 0xffffffff;
            pcVar12 = (char *)&DAT_0051a068;
            do {
              pcVar3 = pcVar12;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar3 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar3;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar12 = pcVar3 + -uVar6;
            pcVar3 = puVar11 + -0x20;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar3 = pcVar3 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar3 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar3 = pcVar3 + 1;
            }
            pcVar12 = (char *)FUN_004a678b(0,&DAT_004c76a8);
            uVar6 = 0xffffffff;
            do {
              pcVar3 = pcVar12;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar3 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar3;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar12 = pcVar3 + -uVar6;
            pcVar3 = (char *)&DAT_0051a068;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar3 = pcVar3 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar3 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar3 = pcVar3 + 1;
            }
            uVar6 = (int)(char)DAT_0051a068 - 0x30U & 0x80000007;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
            }
            *puVar11 = (char)uVar6;
            pcVar12 = (char *)FUN_004a678b(0,&DAT_004c76a8);
            uVar6 = 0xffffffff;
            do {
              pcVar3 = pcVar12;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar3 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar3;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar12 = pcVar3 + -uVar6;
            pcVar3 = (char *)&DAT_0051a068;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar3 = pcVar3 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar3 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar3 = pcVar3 + 1;
            }
            uVar6 = (int)(char)DAT_0051a068 - 0x30U & 0x80000003;
            if ((int)uVar6 < 0) {
              uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
            }
            puVar11[1] = (char)uVar6;
            pcVar12 = (char *)FUN_004a678b(0,&DAT_004c76a8);
            uVar6 = 0xffffffff;
            do {
              pcVar3 = pcVar12;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar3 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar3;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar12 = pcVar3 + -uVar6;
            pcVar3 = (char *)&DAT_0051a068;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar3 = pcVar3 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar3 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar3 = pcVar3 + 1;
            }
            puVar11[2] = (char)(((char)DAT_0051a068 + -0x30) % 10);
            pcVar12 = (char *)FUN_004a678b(0,&DAT_004c76a8);
            uVar6 = 0xffffffff;
            do {
              pcVar3 = pcVar12;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar3 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar3;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar12 = pcVar3 + -uVar6;
            pcVar3 = (char *)&DAT_0051a068;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar3 = pcVar3 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar3 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar3 = pcVar3 + 1;
            }
            puVar11[3] = (char)(((char)DAT_0051a068 + -0x30) % 10);
            pcVar12 = (char *)FUN_004a678b(0,&DAT_004c76a8);
            uVar6 = 0xffffffff;
            sVar10 = 0;
            do {
              pcVar3 = pcVar12;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar3 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar3;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar12 = pcVar3 + -uVar6;
            pcVar3 = (char *)&DAT_0051a068;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar3 = pcVar3 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar3 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar3 = pcVar3 + 1;
            }
            puVar11[4] = (char)(((char)DAT_0051a068 + -0x30) % 10);
            pcVar12 = (char *)FUN_004a678b(0,&DAT_004c76a8);
            uVar6 = 0xffffffff;
            do {
              pcVar3 = pcVar12;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar3 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar3;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar12 = pcVar3 + -uVar6;
            pcVar3 = (char *)&DAT_0051a068;
            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar3 = pcVar3 + 4;
            }
            for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *pcVar3 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar3 = pcVar3 + 1;
            }
            iVar5 = 0;
            do {
              cVar1 = *(char *)((int)&DAT_0051a068 + iVar5);
              if ((cVar1 < '0') || ('9' < cVar1)) {
                if ((cVar1 < 'A') || ('Z' < cVar1)) {
                  iVar8 = cVar1 + -0x61;
                }
                else {
                  iVar8 = cVar1 + -0x41;
                }
                bVar9 = (char)(iVar8 % 10) + 10;
              }
              else {
                bVar9 = (byte)((cVar1 + -0x30) % 10);
              }
              puVar11[iVar5 + 5] = bVar9;
              sVar10 = sVar10 + (ushort)bVar9;
              iVar5 = iVar5 + 1;
            } while (iVar5 < 10);
            *(short *)(puVar11 + 0x16) = sVar10;
            puVar11 = puVar11 + 0x38;
            local_108 = local_108 + 1;
            iVar5 = local_104;
            if (0x58f34f < (int)puVar11) break;
          }
        }
        iVar8 = FUN_004a65ee(local_100,0xfa,iVar5);
      } while (iVar8 != 0);
    }
    FUN_004a609f(iVar5);
  }
  uVar6 = 0xffffffff;
  pcVar12 = s_Themes__004c84e8;
  do {
    pcVar3 = pcVar12;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar12 = pcVar3 + -uVar6;
  pcVar3 = (char *)&DAT_0051a068;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar12 = &DAT_00567328;
  do {
    pcVar3 = pcVar12;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar12 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar12;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
  } while (cVar1 != '\0');
  pcVar12 = pcVar3 + -uVar6;
  pcVar3 = pcVar13 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar3 = pcVar3 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar12 = &DAT_004c8574;
  do {
    pcVar3 = pcVar12;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar3 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar3;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar12 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar12;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar13 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar13;
  } while (cVar1 != '\0');
  pcVar12 = pcVar3 + -uVar6;
  pcVar3 = pcVar13 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar12;
    pcVar12 = pcVar12 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar3 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    pcVar3 = pcVar3 + 1;
  }
  iVar5 = FUN_0043d2a0(&DAT_0051a068,&DAT_004e9a84,&DAT_004e9a84);
  if (0 < iVar5) {
    puVar11 = &DAT_0080b130;
    pcVar12 = &DAT_0058dd70 + local_108 * 0x38;
    local_108 = iVar5;
    do {
      FUN_00437fa0(puVar11,0x4c,0x4c);
      cVar1 = DAT_004e06ef;
      uVar6 = 0xffffffff;
      pcVar3 = s_Gary_Golf_004e06d8;
      do {
        pcVar13 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar13 = pcVar3 + 1;
        cVar2 = *pcVar3;
        pcVar3 = pcVar13;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      pcVar3 = pcVar13 + -uVar6;
      pcVar13 = pcVar12 + -0x20;
      for (uVar7 = uVar6 >> 2; bVar9 = DAT_004e06eb, uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar13 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar13 = pcVar13 + 1;
      }
      *pcVar12 = (char)bVar9 >> 4;
      cVar2 = DAT_004e06ed;
      pcVar12[1] = cVar1;
      pcVar12[2] = bVar9 & 0xf;
      sVar10 = 0;
      pcVar12[3] = DAT_004e06ec;
      pcVar12[4] = cVar2;
      iVar5 = 0;
      do {
        bVar9 = (&DAT_0057e1a8)[iVar5];
        (pcVar12 + 0x38)[iVar5 + 5] = bVar9;
        sVar10 = sVar10 + (ushort)bVar9;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 10);
      puVar11 = puVar11 + 100;
      local_108 = local_108 + -1;
      *(short *)(pcVar12 + 0x4e) = sVar10;
      pcVar12 = pcVar12 + 0x38;
    } while (local_108 != 0);
  }
  return;
}

