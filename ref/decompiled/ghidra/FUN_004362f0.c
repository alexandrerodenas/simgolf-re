/* Ghidra decompiled: golf.exe */
/* Function: FUN_004362f0 @ 0x004362F0 */
/* Body size: 1673 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004362f0(undefined4 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  undefined *puVar12;
  int local_14;
  undefined4 local_10;
  undefined **local_8;
  
  if ((DAT_00561254 != 0) && (DAT_00567afc != 3)) {
    FUN_00436e50(param_1,param_2);
    return;
  }
  FUN_00473f60(&DAT_0058b46c,PTR_DAT_004c1570,0xd6,0x1da,0);
  iVar3 = FUN_00435f00(param_1,param_2);
  if (iVar3 != -1) {
    if ((iVar3 < 4) || (8 < iVar3)) {
      FUN_00473e60(PTR_DAT_004c1570,(int)*(short *)(&DAT_004c7ac0 + iVar3 * 4),
                   (int)*(short *)(&DAT_004c7ac2 + iVar3 * 4),0);
    }
    else {
      FUN_00473f60(&DAT_00586f50,PTR_DAT_004c1570,(int)*(short *)(&DAT_004c7ac0 + iVar3 * 4),
                   (int)*(short *)(&DAT_004c7ac2 + iVar3 * 4),0);
    }
  }
  if (DAT_005a59f8 == -1) {
    if (DAT_005685f0 < 2) {
      FUN_00473e60(PTR_DAT_004c1570,(int)DAT_004c7ac4,(int)DAT_004c7ac6,0);
    }
    if ((((_DAT_0059e7b8 & 0x2000) == 0) || (DAT_005685f0 < 2)) || (DAT_004c2e14 == -1)) {
      FUN_00473e60(PTR_DAT_004c1570,(int)DAT_004c7ac8,(int)DAT_004c7aca,0);
    }
    if ((_DAT_0059e7b8 & 0x400000) == 0) {
      FUN_00473e60(PTR_DAT_004c1570,(int)DAT_004c7acc,(int)DAT_004c7ace,0);
    }
    FUN_004762d0(&DAT_00519fd8,0,0,0);
    local_10 = 0x1ee;
    iVar4 = 0x21c;
    local_14 = 0;
    local_8 = &PTR_s_Power_Hitter_004c2c3c;
    do {
      cVar2 = *(char *)((int)&DAT_005a5a04 + local_14);
      if (cVar2 != '\0') {
        uVar6 = 0xffffffff;
        pcVar5 = *local_8;
        do {
          pcVar10 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar10;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar5 = pcVar10 + -uVar6;
        pcVar10 = (char *)&DAT_0051a068;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar10 = pcVar10 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar5 = (char *)&DAT_004c60c8;
        do {
          pcVar10 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar10;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar8 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar9 = pcVar5;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar9 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar9;
        } while (cVar1 != '\0');
        pcVar5 = pcVar10 + -uVar6;
        pcVar10 = pcVar9 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar10 = pcVar10 + 1;
        }
        pcVar5 = (char *)FUN_004ad425(cVar2 * 10,&DAT_005a9f6c,10);
        uVar6 = 0xffffffff;
        do {
          pcVar10 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar5 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar10;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        iVar8 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar9 = pcVar5;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar9 = pcVar5 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar9;
        } while (cVar2 != '\0');
        pcVar5 = pcVar10 + -uVar6;
        pcVar10 = pcVar9 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar10 = pcVar10 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar5 = &DAT_004c60c4;
        do {
          pcVar10 = pcVar5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar5 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar10;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        iVar8 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar9 = pcVar5;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar9 = pcVar5 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar9;
        } while (cVar2 != '\0');
        pcVar5 = pcVar10 + -uVar6;
        pcVar10 = pcVar9 + -1;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar10 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar10 = pcVar10 + 1;
        }
        FUN_004049d0(&DAT_0051a068,local_10,iVar4,0x80007fff);
        iVar4 = iVar4 + 0xc;
        if (599 < iVar4) {
          local_10 = 0x281;
          iVar4 = 0x21c;
        }
      }
      local_8 = local_8 + 1;
      local_14 = local_14 + 1;
    } while ((int)local_8 < 0x4c2c64);
  }
  else {
    FUN_00473e60(PTR_DAT_004c1570,(int)DAT_004c7ac4,(int)DAT_004c7ac6,0);
    FUN_00473e60(PTR_DAT_004c1570,(int)DAT_004c7ac8,(int)DAT_004c7aca,0);
    FUN_00473e60(PTR_DAT_004c1570,(int)DAT_004c7acc,(int)DAT_004c7ace,0);
    if (*(int *)(&DAT_00579584 + DAT_005a59f8 * 0x100) == -1) {
      iVar4 = FUN_0040bfa0((&DAT_0057958c)[DAT_005a59f8 * 0x40],(&DAT_005794bc)[DAT_005a59f8 * 0x40]
                          );
      cVar2 = (&DAT_00578372)[iVar4 * 0x30];
      if (DAT_0058f330 == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = (uint)(iVar3 != 4);
      }
      FUN_00473f60(&DAT_00586f50 + uVar6 * 0x2c,PTR_DAT_004c1570,(int)DAT_004c7ad0,(int)DAT_004c7ad2
                   ,0);
      if (cVar2 < '\x01') {
        if (DAT_0058f330 == -1) {
          uVar6 = 1;
        }
        else {
          uVar6 = (uint)(iVar3 != 4);
        }
        FUN_00473f60(&DAT_00586f50 + uVar6 * 0x2c,PTR_DAT_004c1570,(int)DAT_004c7ad4,
                     (int)DAT_004c7ad6,0);
        if (DAT_0058f330 == 1) {
          uVar6 = 1;
        }
        else {
          uVar6 = (uint)(iVar3 != 4);
        }
        FUN_00473f60(&DAT_00586f50 + uVar6 * 0x2c,PTR_DAT_004c1570,(int)DAT_004c7ad8,
                     (int)DAT_004c7ada,0);
        if (DAT_0058f330 == 3) {
          uVar6 = 1;
        }
        else {
          uVar6 = (uint)(iVar3 != 4);
        }
        puVar12 = &DAT_00586f50 + uVar6 * 0x2c;
      }
      else {
        FUN_00473f60(&DAT_00586f7c,PTR_DAT_004c1570,(int)DAT_004c7ad4,(int)DAT_004c7ad6,0);
        FUN_00473f60(&DAT_00586f7c,PTR_DAT_004c1570,(int)DAT_004c7ad8,(int)DAT_004c7ada,0);
        puVar12 = &DAT_00586f7c;
      }
      FUN_00473f60(puVar12,PTR_DAT_004c1570,(int)DAT_004c7adc,(int)DAT_004c7ade,0);
      if (DAT_0058f330 == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = (uint)(iVar3 != 4);
      }
      FUN_00473f60(&DAT_00586f50 + uVar6 * 0x2c,PTR_DAT_004c1570,(int)DAT_004c7ae0,(int)DAT_004c7ae2
                   ,0);
    }
    else {
      FUN_00473e60(PTR_DAT_004c1570,0x129,0x1ed,0);
      FUN_00461110(DAT_005a59f8);
    }
  }
  if (iVar3 != DAT_005a9f54) {
    DAT_005aa554 = 0;
    DAT_005a9f54 = iVar3;
    return;
  }
  DAT_005aa554 = DAT_005aa554 + 1;
  if (iVar3 == -1) {
    return;
  }
  if (DAT_005aa554 < 0xb) {
    return;
  }
  DAT_0051a068._0_1_ = 0;
  switch(iVar3) {
  case 1:
    pcVar5 = s_Practice_Round_004c836c;
    break;
  case 2:
    uVar6 = 0xffffffff;
    pcVar5 = &DAT_004c8364;
    do {
      pcVar10 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    pcVar5 = pcVar10 + -uVar6;
    pcVar10 = (char *)&DAT_0051a068;
    for (uVar7 = uVar6 >> 2; iVar3 = DAT_004c2e14, uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar10 = pcVar10 + 4;
    }
    bVar11 = DAT_004c2e14 == -1;
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar10 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar10 = pcVar10 + 1;
    }
    if (bVar11) {
      uVar6 = 0xffffffff;
      pcVar5 = s_vs__a_pro_004c8358;
      do {
        pcVar10 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar10;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar10 + -uVar6;
      iVar3 = -1;
      pcVar9 = (char *)&DAT_0051a068;
      do {
        pcVar5 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar5 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar5;
      } while (cVar2 != '\0');
      pcVar5 = pcVar5 + -1;
    }
    else {
      uVar6 = 0xffffffff;
      pcVar5 = (char *)(&DAT_0058dd50 + iVar3 * 0xe);
      do {
        pcVar10 = pcVar5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar10 = pcVar5 + 1;
        cVar2 = *pcVar5;
        pcVar5 = pcVar10;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar10 + -uVar6;
      iVar3 = -1;
      pcVar9 = (char *)&DAT_0051a068;
      do {
        pcVar5 = pcVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar5 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar5;
      } while (cVar2 != '\0');
      pcVar5 = pcVar5 + -1;
    }
    goto LAB_00436a91;
  case 3:
    uVar6 = 0xffffffff;
    pcVar5 = s_Begin_Tournament_004c8344;
    do {
      pcVar10 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar10 + -uVar6;
    pcVar5 = (char *)&DAT_0051a068;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar5 = pcVar5 + 4;
    }
    goto LAB_00436a98;
  case 4:
    pcVar5 = s_Straight_shot_004c8334;
    break;
  case 5:
    uVar6 = 0xffffffff;
    pcVar5 = s_Fade_shot__L_to_R_004c8320;
    do {
      pcVar10 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar10 + -uVar6;
    pcVar5 = (char *)&DAT_0051a068;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar5 = pcVar5 + 4;
    }
    goto LAB_00436a98;
  case 6:
    pcVar5 = s_Draw_shot__R_to_L_004c830c;
    break;
  case 7:
    uVar6 = 0xffffffff;
    pcVar5 = s_High_backspin_shot_004c82f8;
    do {
      pcVar10 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar10 + -uVar6;
    pcVar5 = (char *)&DAT_0051a068;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar5 = pcVar5 + 4;
    }
    goto LAB_00436a98;
  case 8:
    pcVar5 = s_Low_punch_shot_004c82e8;
    break;
  case 9:
    uVar6 = 0xffffffff;
    pcVar5 = s_Golfers_004c5dc8;
    do {
      pcVar10 = pcVar5;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar10 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar10 + -uVar6;
    pcVar5 = (char *)&DAT_0051a068;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar5 = pcVar5 + 4;
    }
    goto LAB_00436a98;
  case 10:
    pcVar5 = s_Hire_employee_004c82d8;
    break;
  default:
    goto LAB_00436a9d;
  }
  uVar6 = 0xffffffff;
  do {
    pcVar10 = pcVar5;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar5 + 1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar10;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar10 = pcVar10 + -uVar6;
  pcVar5 = (char *)&DAT_0051a068;
LAB_00436a91:
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar5 = pcVar5 + 4;
  }
LAB_00436a98:
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar5 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar5 = pcVar5 + 1;
  }
LAB_00436a9d:
  FUN_00432620(param_1,param_2 + -5);
  return;
}

