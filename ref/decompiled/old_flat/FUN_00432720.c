/* Ghidra decompiled: golf.exe */
/* Function: FUN_00432720 @ 0x00432720 */


undefined4 FUN_00432720(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  uVar2 = FUN_004326a0(param_1,param_2);
  switch(uVar2) {
  case 0:
    DAT_00567afc = (-(uint)(DAT_00567afc != 0) & 0xfffffffb) + 5;
    break;
  case 1:
    DAT_00567afc = (-(uint)(DAT_00567afc != 1) & 0xfffffffc) + 5;
    break;
  case 2:
    DAT_00567afc = (-(uint)(DAT_00567afc != 2) & 0xfffffffd) + 5;
    break;
  case 3:
    if (DAT_00822d68 != 2) {
      uVar3 = 0xffffffff;
      pcVar6 = s_Information____Repeat_Last_Messa_004c7d80;
      do {
        pcVar8 = pcVar6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar6 = pcVar8 + -uVar3;
      pcVar8 = (char *)&DAT_0051a068;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar3 = 0xffffffff;
      pcVar6 = s_SGA_Evaluation_Financial_Report_M_004c7d00;
      do {
        pcVar8 = pcVar6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar5 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar7 = pcVar6;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      pcVar6 = pcVar8 + -uVar3;
      pcVar8 = pcVar7 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar2 = FUN_0046d6e0(200,0xfa,1,1,0);
      switch(uVar2) {
      case 0:
        goto switchD_00432739_caseD_6;
      case 1:
        break;
      case 2:
        return 0xffffff8f;
      case 3:
        return 0x52;
      case 4:
        return 0xffffff8e;
      case 5:
        return 0xffffff8a;
      case 6:
        return 0xffffff8d;
      case 7:
        return 0xffffff88;
      case 8:
        return 0xffffff87;
      case 9:
        return 0x57;
      case 10:
        FUN_00455a30();
        return 0xffffffff;
      case 0xb:
        FUN_00473470();
        return 0xffffffff;
      default:
        goto switchD_00432739_default;
      }
    }
    return 0xffffff90;
  case 4:
    return 0x50;
  case 5:
    uVar3 = 0xffffffff;
    pcVar6 = s_Save_the_Current_Game_Load_a_Pre_004c7cac;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = (char *)&DAT_0051a068;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar6 = s_Gary_Golf_004d6098;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar7 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar6 = s_for_Championship_Rename_Your_Cou_004c7c48;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar7 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar3 = FUN_0046d6e0(0xfa,0x154,1,1,0);
    if (7 < uVar3) {
      return 0xffffffff;
    }
    while( true ) {
      switch((&switchD_00432936::switchdataD_00432b80)[uVar3]) {
      case (undefined *)0x4329f4:
        return 0x53;
      case (undefined *)0x4329fc:
        return 0x4c;
      case (undefined *)0x432a04:
        return 0x43;
      case (undefined *)0x432a74:
        DAT_0051a068._0_1_ = '\0';
        FUN_0040daa0(0xffffffff);
        FUN_0045b2c0(s_Rename_Course____004c5bf8,200,0x14c,0x20);
        if (((char)DAT_0051a068 != '\0') && (iVar5 = FUN_00405ac0(&DAT_0051a068), iVar5 != 0)) {
          FUN_0045b8b0(0);
          return 0xffffffff;
        }
        FUN_004481b0(0x18,100,0,0,0);
        return 0xffffffff;
      case (undefined *)0x432add:
        FUN_00432560();
        return 0xffffffff;
      case (undefined *)0x432ae8:
        return 0x6e;
      case (undefined *)0x432af0:
        DAT_0059b734 = 1;
        return 0x1b;
      }
      iVar5 = FUN_00437910(0,1,1);
      if (iVar5 != 0) break;
      uVar3 = 0xffffffff;
      pcVar6 = s_Save_the_Current_Game_Load_a_Pre_004c7cac;
      do {
        pcVar8 = pcVar6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar6 = pcVar8 + -uVar3;
      pcVar8 = (char *)&DAT_0051a068;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar3 = 0xffffffff;
      pcVar6 = s_Gary_Golf_004d6098;
      do {
        pcVar8 = pcVar6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar5 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar7 = pcVar6;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      pcVar6 = pcVar8 + -uVar3;
      pcVar8 = pcVar7 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar3 = 0xffffffff;
      pcVar6 = s_for_Championship_Rename_Your_Cou_004c7c48;
      do {
        pcVar8 = pcVar6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar5 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar7 = pcVar6;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
      } while (cVar1 != '\0');
      pcVar6 = pcVar8 + -uVar3;
      pcVar8 = pcVar7 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar3 = FUN_0046d6e0(0xfa,0x154,1,1,0);
      if (7 < uVar3) {
        return 0xffffffff;
      }
    }
    uVar3 = 0xffffffff;
    pcVar6 = s_Gary_Golf_004d6098;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = (char *)&DAT_0051a068;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar6 = s_saved_for_championship_play__004c5f18;
    do {
      pcVar8 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar7 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_0040cb00(0x80006000,0,0xffffffff);
    return 0xffffffff;
  case 6:
switchD_00432739_caseD_6:
    return 0x3f;
  case 7:
    return 0x7a;
  case 8:
    return 0x78;
  case 9:
    return 0xffffffdc;
  case 10:
    return 0xffffffdf;
  default:
    goto switchD_00432739_default;
  }
  DAT_004c2848 = 0xffffffff;
  DAT_0053df54 = 0;
  DAT_004c2854 = 0xffffffff;
switchD_00432739_default:
  return 0xffffffff;
}

