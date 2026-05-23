/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040b9b0 @ 0x0040B9B0 */
/* Body size: 576 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b9b0(char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  byte local_78 [120];
  
  cVar3 = DAT_005a34e0;
  uVar8 = _DAT_0059e7b8;
  uVar5 = 0xffffffff;
  do {
    pcVar9 = param_1;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar9 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar9;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pbVar4 = (byte *)(pcVar9 + -uVar5);
  pbVar10 = local_78;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar4;
    pbVar4 = pbVar4 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar10 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    pbVar10 = pbVar10 + 1;
  }
  if (param_4 == 0) {
    uVar5 = 0xffffffff;
    pcVar9 = s_saved_games__004c3f4c;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = (char *)&DAT_0051a068;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
  }
  else {
    uVar5 = 0xffffffff;
    pcVar9 = s_Themes_Championship__004c5328;
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = (char *)&DAT_0051a068;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar11 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar11 = pcVar11 + 1;
  }
  uVar5 = 0xffffffff;
  pbVar4 = local_78;
  do {
    pbVar10 = pbVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pbVar10 = pbVar4 + 1;
    bVar2 = *pbVar4;
    pbVar4 = pbVar10;
  } while (bVar2 != 0);
  uVar5 = ~uVar5;
  iVar7 = -1;
  pcVar9 = (char *)&DAT_0051a068;
  do {
    pcVar11 = pcVar9;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  pbVar4 = pbVar10 + -uVar5;
  pbVar10 = (byte *)(pcVar11 + -1);
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pbVar10 = *(undefined4 *)pbVar4;
    pbVar4 = pbVar4 + 4;
    pbVar10 = pbVar10 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar10 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    pbVar10 = pbVar10 + 1;
  }
  DAT_00568d08 = FUN_004a5d48(&DAT_0051a068,0x8000);
  DAT_0051a068._0_1_ = 0;
  FUN_004a583a(DAT_00568d08,&DAT_0051a068,100);
  if (param_4 != 0) {
    FUN_004a583a(DAT_00568d08,&DAT_0051a068,100);
  }
  if (param_3 != 0) {
    FUN_004a5a78(DAT_00568d08);
    return;
  }
  FUN_0040afa0(1);
  FUN_004a5a78(DAT_00568d08);
  _DAT_0059e7b8 = _DAT_0059e7b8 & 0xfffffff3 | uVar8 & 4 | 0x40000000;
  DAT_00567afc = 0;
  DAT_004c2854 = 0xffffffff;
  DAT_004c2848 = 0xffffffff;
  FUN_0042f7a0();
  FUN_0042f340();
  FUN_0042f2c0();
  if (param_2 != 0) {
    pcVar9 = s_While_Browsing_sve_004c5314;
    pbVar4 = local_78;
    do {
      bVar2 = *pbVar4;
      bVar12 = bVar2 < (byte)*pcVar9;
      if (bVar2 != *pcVar9) {
LAB_0040bb68:
        iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_0040bb6c;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar12 = bVar2 < (byte)pcVar9[1];
      if (bVar2 != pcVar9[1]) goto LAB_0040bb68;
      pbVar4 = pbVar4 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar2 != 0);
    iVar7 = 0;
LAB_0040bb6c:
    if (iVar7 != 0) {
      uVar8 = 0xffffffff;
      pcVar9 = s_Loading_Game_004c5304;
      do {
        pcVar11 = pcVar9;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar11 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar9 = pcVar11 + -uVar8;
      pcVar11 = (char *)&DAT_0051a068;
      for (uVar5 = uVar8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      DAT_004c2e08 = 0xffffffff;
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_0040d320(200,200,0x80001284,0xfffffffe);
      FUN_00480c80(0);
    }
    FUN_00449400((int)DAT_005a34e0);
    if (DAT_005a34e0 != cVar3) {
      FUN_0043dbe0();
    }
    FUN_00449520();
  }
  return;
}

