/* Ghidra decompiled: golf.exe */
/* Function: FUN_00437fa0 @ 0x00437FA0 */
/* Body size: 702 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00437fa0(char *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char local_40 [64];
  
  uVar3 = 0xffffffff;
  do {
    pcVar6 = param_1;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar6 + -uVar3;
  pcVar9 = local_40;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  if (param_2 < 0x4d) {
    uVar3 = 0xffffffff;
    pcVar6 = s_Themes__004c84e8;
    do {
      pcVar9 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar9 + -uVar3;
    pcVar9 = (char *)&DAT_0051a068;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_00567328;
    do {
      pcVar9 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar8 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    pcVar6 = pcVar9 + -uVar3;
    pcVar9 = pcVar8 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar9 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_004c84e4;
    do {
      pcVar9 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar8 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    pcVar6 = pcVar9 + -uVar3;
    pcVar9 = pcVar8 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar9 = pcVar9 + 4;
    }
  }
  else {
    uVar3 = 0xffffffff;
    pcVar6 = s_Themes_Standard__004c84f4;
    do {
      pcVar9 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar9 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar9 + -uVar3;
    pcVar9 = (char *)&DAT_0051a068;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar9 = pcVar9 + 4;
    }
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar3 = 0xffffffff;
  pcVar6 = local_40;
  do {
    pcVar9 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar9 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar9;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar5 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar8 = pcVar6;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  pcVar6 = pcVar9 + -uVar3;
  pcVar9 = pcVar8 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar9 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar5 = FUN_004a614d(&DAT_0051a068,&DAT_004c84f0);
  if (iVar5 != 0) {
    iVar7 = param_2 * 0x230;
    FUN_004a63a1(&DAT_004d6088 + param_2 * 0x8c,0x230,1,iVar5);
    FUN_004a63a1((int)&DAT_00543d10 + param_2 * 0x4e2,0x4e2,1,iVar5);
    FUN_004a63a1(&local_50,0x10,1,iVar5);
    if ((param_3 != -1) && ((param_2 != 0 || ((_DAT_0059e7b8 & 0x4000000) != 0)))) {
      param_3 = param_3 * 0x100;
      *(undefined4 *)(&DAT_005795a8 + param_3) = local_50;
      *(undefined4 *)(&DAT_005795ac + param_3) = local_4c;
      *(undefined4 *)(&DAT_005795b0 + param_3) = local_48;
      *(undefined4 *)(&DAT_005795b4 + param_3) = local_44;
      if (param_2 == 0) {
        DAT_005a5a04 = local_50;
        DAT_005a5a08 = local_4c;
        DAT_005a5a0c = local_48;
        DAT_005a5a10 = local_44;
      }
    }
    FUN_004a63a1(&local_50,8,1,iVar5);
    FUN_00485790(iVar5);
    uVar3 = ~(uint)(byte)(&DAT_004d60a9)[iVar7] >> 7 & 1;
    if (('\x13' < (char)(&DAT_004d60aa)[iVar7]) && (iVar2 = (&DAT_0059b76c)[uVar3], iVar2 < 0x48)) {
      (&DAT_004d60aa)[iVar7] = (char)iVar2;
      (&DAT_0059b76c)[uVar3] = iVar2 + 1;
      FUN_00473bf0(&DAT_005a7148,0,0,0x8c,0x8c,1,1);
      FUN_00473bf0(&DAT_005a7148,0,0x8c,0x8c,0x8c,1,1);
      FUN_00473bf0(&DAT_005a7148,0,0x118,0x8c,0x8c,1,1);
    }
    FUN_004a609f(iVar5);
    return 1;
  }
  return 0;
}

