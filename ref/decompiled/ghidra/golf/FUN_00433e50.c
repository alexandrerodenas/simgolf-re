/* Ghidra decompiled: golf.exe */
/* Function: FUN_00433e50 @ 0x00433E50 */
/* Body size: 396 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00433e50(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = FUN_00433c60(param_1,param_2);
  FUN_00473f60(&DAT_0058b4f0,PTR_DAT_004c1570,0xd7,0x1e2,0);
  FUN_004762d0(&DAT_00519fd8,0,0,0);
  if (iVar2 == -2) {
    FUN_00473e60(PTR_DAT_004c1570,0xfe,0x1e3,0);
  }
  if ((_DAT_0059e7b8 & 0x8000000) != 0) {
    FUN_00473e60(PTR_DAT_004c1570,0xfd,0x222,0);
  }
  if (iVar2 == -3) {
    iVar8 = 0x222;
    iVar7 = 0xfd;
LAB_00433f34:
    FUN_00473e60(PTR_DAT_004c1570,iVar7,iVar8,0);
  }
  else if (-1 < iVar2) {
    iVar8 = (int)*(short *)(&DAT_004c7a8a + iVar2 * 4);
    iVar7 = (int)*(short *)(&DAT_004c7a88 + iVar2 * 4);
    goto LAB_00433f34;
  }
  FUN_00473e60(PTR_DAT_004c1570,(int)*(short *)(&DAT_004c7a88 + DAT_00542f20 * 4),
               (int)*(short *)(&DAT_004c7a8a + DAT_00542f20 * 4),0);
  if (iVar2 != DAT_005a9f54) {
    DAT_005aa554 = 0;
    DAT_005a9f54 = iVar2;
    return;
  }
  DAT_005aa554 = DAT_005aa554 + 1;
  if (iVar2 == -1) {
    return;
  }
  if (DAT_005aa554 < 0xb) {
    return;
  }
  DAT_0051a068._0_1_ = 0;
  switch(iVar2) {
  case 0:
    uVar3 = 0xffffffff;
    pcVar5 = s_Raise_lower_vertex_004c801c;
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = (char *)&DAT_0051a068;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    break;
  case 1:
    pcVar5 = s_Raise_lower_square_004c8008;
    goto LAB_0043402d;
  case 2:
    uVar3 = 0xffffffff;
    pcVar5 = s_Raise_lower_area_004c7ff4;
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = (char *)&DAT_0051a068;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    break;
  case 3:
    pcVar5 = s_Analyze_Golf_Shot_004c7fe0;
LAB_0043402d:
    uVar3 = 0xffffffff;
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = (char *)&DAT_0051a068;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    break;
  case -3:
    uVar3 = 0xffffffff;
    pcVar5 = &DAT_004c7f2c;
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = (char *)&DAT_0051a068;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    break;
  case -2:
    pcVar5 = s_Buildings_004c8030;
    goto LAB_0043402d;
  default:
    goto LAB_0043404d;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
LAB_0043404d:
  FUN_00432620(param_1,param_2 + -5);
  return;
}

