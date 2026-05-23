/* Ghidra decompiled: golf.exe */
/* Function: FUN_0043d740 @ 0x0043D740 */
/* Body size: 1182 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043d740(int param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  iVar3 = param_4;
  DAT_00820ecc = DAT_00820ecc + 1;
  if (DAT_00820ecc % 100 == 0) {
    if (DAT_00822c88 == -1) {
      FUN_00406250((int)(DAT_00820ecc + (DAT_00820ecc >> 0x1f & 3U)) >> 2);
      FUN_00480c80(0);
    }
    FUN_0045bf80(10,0);
  }
  FUN_00483bd0();
  if (param_4 == -1) {
    param_3 = 1;
  }
  FUN_00478af0(0,0,0x1e0,0x1e0,0xff);
  iVar8 = param_1 + DAT_00820b6c;
  uVar4 = 0xffffffff;
  pcVar10 = param_2;
  do {
    pcVar12 = pcVar10;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar12 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar10 = pcVar12 + -uVar4;
  pcVar12 = (char *)((int)&DAT_008156d0 + iVar8 * 0x32);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
  if (param_5 != 0) {
    uVar4 = 0xffffffff;
    pcVar10 = &DAT_004c8a64;
    do {
      pcVar12 = pcVar10;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar12 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4;
    pcVar10 = pcVar12 + -uVar4;
    pcVar12 = (char *)&DAT_0051a068;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar12 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar10 = param_2;
    do {
      pcVar12 = pcVar10;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar12 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar10 = (char *)&DAT_0051a068;
    do {
      pcVar11 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar11 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    pcVar10 = pcVar12 + -uVar4;
    pcVar12 = pcVar11 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar12 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar10 = s_Shadow_flc_004c8a58;
    do {
      pcVar12 = pcVar10;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar12 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar12;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4;
    iVar6 = -1;
    pcVar10 = (char *)&DAT_0051a068;
    do {
      pcVar11 = pcVar10;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar11 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar2 != '\0');
    pcVar10 = pcVar12 + -uVar4;
    pcVar12 = pcVar11 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar12 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar12 = pcVar12 + 1;
    }
    iVar6 = FUN_004378a0(&DAT_0051a068);
    if (iVar6 == 0) {
      param_5 = 0;
    }
    else {
      _DAT_00820ec8 = FUN_00404120(&DAT_0051a068,0x24e,&DAT_0053f3e8 + iVar8);
      FUN_00473e60(&DAT_005aa778,0,0,0);
    }
  }
  uVar4 = 0xffffffff;
  pcVar10 = &DAT_004c8a64;
  do {
    pcVar12 = pcVar10;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar12 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  pcVar10 = pcVar12 + -uVar4;
  pcVar12 = (char *)&DAT_0051a068;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar10 = param_2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = param_2 + 1;
    cVar2 = *param_2;
    param_2 = pcVar10;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar12 = (char *)&DAT_0051a068;
  do {
    pcVar11 = pcVar12;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar11 = pcVar12 + 1;
    cVar2 = *pcVar12;
    pcVar12 = pcVar11;
  } while (cVar2 != '\0');
  pcVar10 = pcVar10 + -uVar4;
  pcVar12 = pcVar11 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar10 = &DAT_004c8a50;
  do {
    pcVar12 = pcVar10;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar12 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar12;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar10 = (char *)&DAT_0051a068;
  do {
    pcVar11 = pcVar10;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar11 = pcVar10 + 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar2 != '\0');
  pcVar10 = pcVar12 + -uVar4;
  pcVar12 = pcVar11 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar12 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar12 = pcVar12 + 1;
  }
  piVar1 = &DAT_0053f3e8 + iVar8;
  _DAT_00820ec8 = FUN_00404120(&DAT_0051a068,iVar8,piVar1);
  FUN_00473e60(&DAT_005aa778,0,0,0);
  iVar6 = DAT_00820ec0;
  bVar13 = DAT_00820b70 == -2;
  *(int *)(&DAT_005a5a2c + iVar8 * 4) = param_3;
  param_1 = iVar6;
  if (bVar13) {
    param_1 = -1;
  }
  else {
    iVar6 = FUN_0043d5d0(param_3 * *piVar1);
    DAT_00820ec0 = iVar6;
  }
  iVar7 = param_1;
  if (iVar6 == -1) {
    param_1 = -1;
    DAT_00820ec0 = iVar7;
    iVar6 = iVar7;
  }
  iVar7 = *piVar1;
  if (iVar7 * param_3 + iVar6 < 0xdd40) {
    bVar13 = true;
    (&DAT_005a9370)[iVar8] = iVar6;
    param_4 = 0;
    if (0 < param_3) {
      do {
        iVar9 = 0;
        if (0 < iVar7) {
          do {
            if (!bVar13) {
              if (iVar3 == 0) {
                uVar17 = 0x3c;
                uVar16 = 0x3c;
                uVar15 = 200;
                uVar14 = 0xd2;
              }
              else {
                uVar17 = 0x1e0;
                uVar16 = 0x1e0;
                uVar14 = 0;
                uVar15 = 0;
              }
              FUN_00478af0(uVar14,uVar15,uVar16,uVar17,0xff);
              if (param_5 != 0) {
                _DAT_00820ec8 = FUN_00404090(0x24e);
                FUN_00473e60(&DAT_005aa778,0,0,0);
              }
              _DAT_00820ec8 = FUN_00404090(iVar8);
              FUN_00473e60(&DAT_005aa778,0,0,0);
              iVar6 = DAT_00820ec0;
            }
            if (iVar3 == 0) {
              uVar17 = 0x3c;
              uVar16 = 0x3c;
              uVar15 = 200;
              uVar14 = 0xd2;
LAB_0043db7b:
              DAT_00820ec0 = iVar6 + 1;
              FUN_00473bf0(&DAT_005aa778,uVar14,uVar15,uVar16,uVar17,1,1);
            }
            else {
              if ((iVar3 == 1) || (iVar3 == -1)) {
                uVar17 = 0xf0;
                uVar16 = 0x118;
                uVar15 = 100;
                uVar14 = 100;
                goto LAB_0043db7b;
              }
              if (iVar3 == 0xf0) {
                uVar17 = 0x1e0;
                uVar16 = 0x1e0;
                uVar15 = 0;
                uVar14 = 0;
                goto LAB_0043db7b;
              }
              DAT_00820ec0 = iVar6 + 1;
              FUN_00473bf0(&DAT_005aa778,0xf0 - iVar3,0xf0 - iVar3,iVar3 * 2,(iVar3 * 3) / 2,1,1);
            }
            bVar13 = false;
            if (iVar3 == -1) goto LAB_0043dbb8;
            iVar7 = *piVar1;
            iVar9 = iVar9 + 1;
            iVar6 = DAT_00820ec0;
          } while (iVar9 < iVar7);
        }
      } while ((iVar3 != -1) && (param_4 = param_4 + 1, param_4 < param_3));
    }
  }
  else {
    FUN_0046de70(s_Too_many_flics__004c8a3c,100,100);
  }
LAB_0043dbb8:
  FUN_004041c0(iVar8);
  FUN_004041c0(0x24e);
  if (param_1 != -1) {
    DAT_00820ec0 = param_1;
  }
  return;
}

