/* Ghidra decompiled: golf.exe */
/* Function: FUN_004266b0 @ 0x004266B0 */


void FUN_004266b0(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined2 uVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  iVar3 = param_1;
  iVar11 = param_1 * 0x100;
  iVar12 = iVar3;
  if (((&DAT_005794d0)[iVar11] & 0xe0) == 0x60) {
    uVar7 = 0xffffffff;
    pcVar5 = s_Corporate_CEO_004c71b0;
    do {
      pcVar13 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar5 = pcVar13 + -uVar7;
    pcVar13 = (char *)&DAT_0051a068;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_004676e0(param_1,0);
    DAT_00572cac = DAT_00572cac & 0xffffff7f;
    if (((&DAT_00575ab0)[(char)(&DAT_005794d9)[iVar11] * 0x208] == '\0') &&
       (2 < (short)(&DAT_0057955c)[iVar3 * 0x80])) {
      if ((int)(DAT_00572cac * 2) < (int)(char)(&DAT_005794d9)[iVar11]) {
        FUN_0040c6f0(0x100,(&DAT_005794d0)[iVar11] & 0x1f);
        uVar7 = (((4 < (short)(&DAT_0057955c)[iVar3 * 0x80]) + 1) * 5000) / 100;
        uVar8 = 0xffffffff;
        pcVar5 = &DAT_004c7124;
        do {
          pcVar13 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        iVar12 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar5;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        pcVar5 = pcVar13 + -uVar8;
        pcVar13 = pcVar14 + -1;
        for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar13 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0042dc00(uVar7 * 100);
        uVar8 = 0xffffffff;
        pcVar5 = s_for_a_seat_on_the_board__he_says_004c7100;
        do {
          pcVar13 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        DAT_00569498 = 0;
        iVar12 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar5;
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        pcVar5 = pcVar13 + -uVar8;
        pcVar13 = pcVar14 + -1;
        for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar13 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0040cb00(0x80001204,1,param_1);
        DAT_00571fd4 = DAT_00571fd4 + uVar7;
        *(short *)(&DAT_0058421e + ((int)DAT_005a6d3c % 100) * 0x14) =
             *(short *)(&DAT_0058421e + ((int)DAT_005a6d3c % 100) * 0x14) + (short)uVar7;
        FUN_004481b0(0x19,100,0,0,0);
        iVar12 = param_1;
      }
      else {
        uVar7 = 0xffffffff;
        pcVar5 = s_has_decided_not_to_invest_in_you_004c715c;
        do {
          pcVar13 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar9 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar5;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        pcVar5 = pcVar13 + -uVar7;
        pcVar13 = pcVar14 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0040cb00(0x80006000,1,iVar3);
        DAT_00572cac = DAT_00572cac - 1;
      }
    }
    else {
      uVar7 = 0xffffffff;
      pcVar5 = s_has_decided_not_to_invest_in_you_004c70d0;
      do {
        pcVar13 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar5 = pcVar13 + -uVar7;
      pcVar13 = pcVar14 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      sVar2 = (&DAT_0057955c)[iVar3 * 0x80];
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
      if (2 < sVar2) {
        uVar7 = 0xffffffff;
        pcVar5 = s_My_partner_004c70c4;
        do {
          pcVar13 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar9 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar5;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        pcVar5 = pcVar13 + -uVar7;
        pcVar13 = pcVar14 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar13 = pcVar13 + 4;
        }
        sVar2 = (&DAT_0057955a)[iVar3 * 0x80];
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_004676e0((int)sVar2,0);
        uVar7 = 0xffffffff;
        pcVar5 = s_has_quit__even_though_004c70ac;
        do {
          pcVar13 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar9 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar5;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        pcVar5 = pcVar13 + -uVar7;
        pcVar13 = pcVar14 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      FUN_00469a20((int)(short)(&DAT_0057955c)[iVar3 * 0x80],0);
      uVar7 = 0xffffffff;
      pcVar5 = s___he_fumes__004c70a0;
      do {
        pcVar13 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar5 = pcVar13 + -uVar7;
      pcVar13 = pcVar14 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_0040cb00(0x80006000,1,iVar3);
    }
  }
  if (((&DAT_005794d0)[iVar11] & 0xe0) == 0x40) {
    uVar7 = 0xffffffff;
    pcVar5 = s_County_commissioner_004c7088;
    do {
      pcVar13 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar5 = pcVar13 + -uVar7;
    pcVar13 = (char *)&DAT_0051a068;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_004676e0(iVar12,0);
    DAT_0053a450 = DAT_0053a450 & 0xffffff7f;
    if (((&DAT_00575ab0)[(char)(&DAT_005794d9)[iVar11] * 0x208] == '\0') &&
       (2 < (short)(&DAT_0057955c)[iVar3 * 0x80])) {
      uVar7 = 0xffffffff;
      pcVar5 = s_has_decided_to_approve_an_expans_004c7058;
      do {
        pcVar13 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar5 = pcVar13 + -uVar7;
      pcVar13 = pcVar14 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar5 = s__I_ll_be_back_again_if_your_004c7038;
      do {
        pcVar13 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar5 = pcVar13 + -uVar7;
      pcVar13 = pcVar14 + -1;
      for (uVar8 = uVar7 >> 2; iVar9 = DAT_00822c88, uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
      if (iVar9 < 2) {
        uVar7 = 0xffffffff;
        pcVar5 = s_fun_rating_is_over_004c7024;
        do {
          pcVar13 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar9 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar5;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        pcVar5 = pcVar13 + -uVar7;
        pcVar13 = pcVar14 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar13 = pcVar13 + 4;
        }
        iVar9 = DAT_00822c88 + 2;
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar13 = pcVar13 + 1;
        }
        pcVar5 = (char *)FUN_004ad425(iVar9 * (DAT_0053a450 + 3) * 0x32,&DAT_0058a528,10);
        uVar7 = 0xffffffff;
        do {
          pcVar13 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar9 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar5;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        pcVar5 = pcVar13 + -uVar7;
        pcVar13 = pcVar14 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      else {
        uVar7 = 0xffffffff;
        pcVar5 = s_skill_rating_is_over_004c700c;
        do {
          pcVar13 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar9 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar5;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        pcVar5 = pcVar13 + -uVar7;
        pcVar13 = pcVar14 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar13 = pcVar13 + 4;
        }
        iVar9 = DAT_00822c88 + 2;
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_0042dd50(iVar9 * (DAT_0053a450 + 3) * 0x32);
      }
      uVar7 = 0xffffffff;
      pcVar5 = s____he_says__004c7000;
      do {
        pcVar13 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar5 = pcVar13 + -uVar7;
      pcVar13 = pcVar14 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      DAT_00569498 = 0;
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
      DAT_005a9ccc = 3;
      FUN_0040cb00(0x80001204,1,iVar12);
      FUN_004481b0(0x2f,100,0,0,0);
      DAT_00567a1c = DAT_00567a1c | 1;
    }
    else {
      uVar7 = 0xffffffff;
      pcVar5 = s_has_decided_not_to_approve_your_e_004c6fc8;
      do {
        pcVar13 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar5 = pcVar13 + -uVar7;
      pcVar13 = pcVar14 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      sVar2 = (&DAT_0057955c)[iVar3 * 0x80];
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
      if (2 < sVar2) {
        uVar7 = 0xffffffff;
        pcVar5 = s_My_partner_004c70c4;
        do {
          pcVar13 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar9 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar5;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        pcVar5 = pcVar13 + -uVar7;
        pcVar13 = pcVar14 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar13 = pcVar13 + 4;
        }
        sVar2 = (&DAT_0057955a)[iVar3 * 0x80];
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_004676e0((int)sVar2,0);
        uVar7 = 0xffffffff;
        pcVar5 = s_has_quit__even_though_004c70ac;
        do {
          pcVar13 = pcVar5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar9 = -1;
        pcVar5 = (char *)&DAT_0051a068;
        do {
          pcVar14 = pcVar5;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar14 = pcVar5 + 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar14;
        } while (cVar1 != '\0');
        pcVar5 = pcVar13 + -uVar7;
        pcVar13 = pcVar14 + -1;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar13 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      FUN_00469a20((int)(short)(&DAT_0057955c)[iVar3 * 0x80],0);
      uVar7 = 0xffffffff;
      pcVar5 = s___he_comments__004c6fb8;
      do {
        pcVar13 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar5 = pcVar13 + -uVar7;
      pcVar13 = pcVar14 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_0040cb00(0x80006000,1,iVar12);
    }
  }
  if (((&DAT_005794d0)[iVar11] & 0xe0) != 0x80) goto LAB_0042710e;
  uVar7 = 0xffffffff;
  pcVar5 = s_Wealthy_Heiress_004c6fa4;
  do {
    pcVar13 = pcVar5;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar5 = pcVar13 + -uVar7;
  pcVar13 = (char *)&DAT_0051a068;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar13 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar13 = pcVar13 + 1;
  }
  FUN_004676e0(iVar12,0);
  if (((&DAT_00575ab0)[(char)(&DAT_005794d9)[iVar11] * 0x208] != '\0') ||
     ((short)(&DAT_0057955c)[iVar3 * 0x80] < 3)) {
    uVar7 = 0xffffffff;
    pcVar5 = s_has_decided_not_to_donate_a_land_004c6dc0;
    do {
      pcVar13 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar9 = -1;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar5;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar14 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar14;
    } while (cVar1 != '\0');
    pcVar5 = pcVar13 + -uVar7;
    pcVar13 = pcVar14 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    sVar2 = (&DAT_0057955c)[iVar3 * 0x80];
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    if (2 < sVar2) {
      uVar7 = 0xffffffff;
      pcVar5 = s_My_partner_004c70c4;
      do {
        pcVar13 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar5 = pcVar13 + -uVar7;
      pcVar13 = pcVar14 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      sVar2 = (&DAT_0057955a)[iVar3 * 0x80];
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_004676e0((int)sVar2,0);
      uVar7 = 0xffffffff;
      pcVar5 = s_has_quit__even_though_004c70ac;
      do {
        pcVar13 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar5 = pcVar13 + -uVar7;
      pcVar13 = pcVar14 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    FUN_00469a20((int)(short)(&DAT_0057955c)[iVar3 * 0x80],0);
    uVar7 = 0xffffffff;
    pcVar5 = s___she_comments___I_ll_be_back_in_004c6d90;
    do {
      pcVar13 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar9 = -1;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar5;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar14 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar14;
    } while (cVar1 != '\0');
    pcVar5 = pcVar13 + -uVar7;
    pcVar13 = pcVar14 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_0040cb00(0x80006000,1,iVar12);
    goto LAB_0042710e;
  }
  iVar12 = (int)(short)(&DAT_0057955c)[iVar3 * 0x80];
  do {
    uVar16 = 0xf;
    uVar15 = 0;
    uVar4 = FUN_0045c1e0(iVar12);
    uVar7 = FUN_00467130(uVar4,uVar15,uVar16);
    if ((1 << ((byte)uVar7 & 0x1f) & DAT_00543cfc) == 0) break;
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x19);
  uVar8 = 0xffffffff;
  pcVar5 = s_has_decided_to_donate_a_004c6f88;
  do {
    pcVar13 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar12 = -1;
  pcVar5 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar5;
    if (iVar12 == 0) break;
    iVar12 = iVar12 + -1;
    pcVar14 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar1 != '\0');
  pcVar5 = pcVar13 + -uVar8;
  pcVar13 = pcVar14 + -1;
  for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar13 = pcVar13 + 1;
  }
  FUN_004074a0(uVar7,1);
  uVar8 = 0xffffffff;
  pcVar5 = s_to_your_course__In_the_area_near_004c6f54;
  do {
    pcVar13 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar12 = -1;
  pcVar5 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar5;
    if (iVar12 == 0) break;
    iVar12 = iVar12 + -1;
    pcVar14 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar1 != '\0');
  pcVar5 = pcVar13 + -uVar8;
  pcVar13 = pcVar14 + -1;
  for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar13 = pcVar13 + 1;
  }
  switch(uVar7 & 3) {
  case 0:
    pcVar5 = s_golfers_will_have_happy_thoughts_004c6f30;
    break;
  case 1:
    pcVar5 = s_no_dandelions_will_appear__004c6f14;
    break;
  case 2:
    uVar8 = 0xffffffff;
    pcVar5 = s_Gary_Golf_004d6098;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar12 = -1;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar5;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar14 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar14;
    } while (cVar1 != '\0');
    pcVar5 = pcVar13 + -uVar8;
    pcVar13 = pcVar14 + -1;
    for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    pcVar5 = s__s_skills_will_improve_rapidly__004c6ef4;
    break;
  case 3:
    pcVar5 = s_golfer_stories_will_proceed_happ_004c6ecc;
    break;
  default:
    goto switchD_00426da6_default;
  }
  uVar8 = 0xffffffff;
  do {
    pcVar13 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar12 = -1;
  pcVar5 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar5;
    if (iVar12 == 0) break;
    iVar12 = iVar12 + -1;
    pcVar14 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar1 != '\0');
  pcVar5 = pcVar13 + -uVar8;
  pcVar13 = pcVar14 + -1;
  for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar13 = pcVar13 + 1;
  }
switchD_00426da6_default:
  uVar8 = 0xffffffff;
  pcVar5 = s_Go_to__Landmarks__under_the_Impr_004c6e78;
  do {
    pcVar13 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar12 = -1;
  pcVar5 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar5;
    if (iVar12 == 0) break;
    iVar12 = iVar12 + -1;
    pcVar14 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar1 != '\0');
  pcVar5 = pcVar13 + -uVar8;
  pcVar13 = pcVar14 + -1;
  for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar13 = pcVar13 + 1;
  }
  FUN_004074a0(uVar7,0);
  uVar8 = 0xffffffff;
  pcVar5 = s_s_can_be_added_to_your_course_fo_004c6e54;
  do {
    pcVar13 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar12 = -1;
  pcVar5 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar5;
    if (iVar12 == 0) break;
    iVar12 = iVar12 + -1;
    pcVar14 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar1 != '\0');
  pcVar5 = pcVar13 + -uVar8;
  pcVar13 = pcVar14 + -1;
  for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar13 = pcVar13 + 1;
  }
  FUN_0042dc00((uVar7 * 5 + 5) * 200);
  uVar8 = 0xffffffff;
  pcVar5 = s____I_ll_be_back_if_your_004c6e38;
  do {
    pcVar13 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  iVar12 = -1;
  pcVar5 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar5;
    if (iVar12 == 0) break;
    iVar12 = iVar12 + -1;
    pcVar14 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar1 != '\0');
  pcVar5 = pcVar13 + -uVar8;
  pcVar13 = pcVar14 + -1;
  for (uVar10 = uVar8 >> 2; iVar12 = DAT_00822c88, uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; iVar9 = DAT_0059aaf8, uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar13 = pcVar13 + 1;
  }
  DAT_0059aaf8 = DAT_0059aaf8 + 1;
  if (iVar12 < 2) {
    uVar8 = 0xffffffff;
    pcVar5 = s_fun_rating_is_up_to_004c6e20;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar12 = -1;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar5;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar14 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar14;
    } while (cVar1 != '\0');
    pcVar5 = pcVar13 + -uVar8;
    pcVar13 = pcVar14 + -1;
    for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    iVar9 = iVar9 + 2;
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    pcVar5 = (char *)FUN_004ad425(iVar9 * iVar9 * 0x19,&DAT_0058a528,10);
    uVar8 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar12 = -1;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar5;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar14 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar14;
    } while (cVar1 != '\0');
    pcVar5 = pcVar13 + -uVar8;
    pcVar13 = pcVar14 + -1;
    for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
  }
  else {
    uVar8 = 0xffffffff;
    pcVar5 = s_skill_rating_is_up_to_004c6e08;
    do {
      pcVar13 = pcVar5;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar12 = -1;
    pcVar5 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar5;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar14 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar14;
    } while (cVar1 != '\0');
    pcVar5 = pcVar13 + -uVar8;
    pcVar13 = pcVar14 + -1;
    for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    iVar9 = iVar9 + 2;
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_0042dd50(iVar9 * iVar9 * 0x19);
  }
  uVar8 = 0xffffffff;
  pcVar5 = s____she_says__004c6df8;
  do {
    pcVar13 = pcVar5;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar13 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar13;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  DAT_00569498 = 0;
  iVar12 = -1;
  pcVar5 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar5;
    if (iVar12 == 0) break;
    iVar12 = iVar12 + -1;
    pcVar14 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar14;
  } while (cVar1 != '\0');
  pcVar5 = pcVar13 + -uVar8;
  pcVar13 = pcVar14 + -1;
  for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar13 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar13 = pcVar13 + 1;
  }
  FUN_0040cb00(0x80001204,1,param_1);
  FUN_004481b0(0x2f,100,0,0,0);
  FUN_0040c6f0(0x160,uVar7);
  uVar7 = 1 << ((byte)uVar7 & 0x1f);
  DAT_00543cfc = DAT_00543cfc | uVar7;
  DAT_00822c70 = DAT_00822c70 | uVar7;
  iVar12 = param_1;
LAB_0042710e:
  if (((byte)(&DAT_005794d0)[iVar11] & 0xe0) == 0x100) {
    uVar7 = 0xffffffff;
    pcVar5 = s_International_celebrity_004c6d74;
    do {
      pcVar13 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar5 = pcVar13 + -uVar7;
    pcVar13 = (char *)&DAT_0051a068;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_004676e0(iVar12,0);
    pcVar5 = &DAT_004c6d70;
    if (((&DAT_005794d0)[iVar11] & 1) == 0) {
      pcVar5 = &DAT_004c6d6c;
    }
    uVar7 = 0xffffffff;
    do {
      pcVar13 = pcVar5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar13;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar13 = pcVar13 + -uVar7;
    pcVar5 = (char *)register0x00000010;
    for (uVar8 = uVar7 >> 2; pcVar5 = pcVar5 + 4, uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
    }
    cVar1 = (&DAT_005794d9)[iVar11];
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar5 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar5 = pcVar5 + 1;
    }
    if (((&DAT_00575ab0)[cVar1 * 0x208] == '\0') && (1 < (short)(&DAT_0057955c)[iVar3 * 0x80])) {
      uVar7 = 0xffffffff;
      pcVar5 = s_has_decided_to_buy_a_vacation_ho_004c6d24;
      do {
        pcVar13 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar5 = pcVar13 + -uVar7;
      pcVar13 = pcVar14 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      DAT_00569498 = 0;
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar5 = (char *)&param_1;
      do {
        pcVar13 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar5 = pcVar13 + -uVar7;
      pcVar13 = pcVar14 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar5 = &DAT_004c6d1c;
      do {
        pcVar13 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar5 = pcVar13 + -uVar7;
      pcVar13 = pcVar14 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_0040cb00(0x80004010,1,iVar12);
      FUN_0040c6f0(0xc0,(&DAT_005794d0)[iVar11] & 0x1f);
      FUN_004481b0(0x2c,100,0,0,0);
      iVar12 = 0;
      piVar6 = &DAT_0058bcc0;
      do {
        if (((short)piVar6[-2] == 5) && (*piVar6 == -1)) {
          (&DAT_0058bcc0)[iVar12 * 4] = (byte)(&DAT_005794d0)[iVar11] & 0xffffff1f;
          break;
        }
        piVar6 = piVar6 + 4;
        iVar12 = iVar12 + 1;
      } while ((int)piVar6 < 0x58ccc0);
    }
    else {
      uVar7 = 0xffffffff;
      pcVar5 = s_has_decided_not_to_buy_a_vacatio_004c6ccc;
      do {
        pcVar13 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar5 = pcVar13 + -uVar7;
      pcVar13 = pcVar14 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      DAT_00569498 = 0;
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar5 = (char *)&param_1;
      do {
        pcVar13 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar5 = pcVar13 + -uVar7;
      pcVar13 = pcVar14 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar7 = 0xffffffff;
      pcVar5 = &DAT_004c6d1c;
      do {
        pcVar13 = pcVar5;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar5 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar5;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar14;
      } while (cVar1 != '\0');
      pcVar5 = pcVar13 + -uVar7;
      pcVar13 = pcVar14 + -1;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_0040cb00(0x80006000,1,iVar12);
    }
  }
  (&DAT_0057958c)[iVar3 * 0x40] = 0;
  (&DAT_005794d9)[iVar11] = 0x13;
  if (((&DAT_005794c8)[iVar3 * 0x40] & 0x200) != 0) {
    DAT_005a59f8 = 0xffffffff;
  }
  return;
}

