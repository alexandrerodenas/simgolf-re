/* Ghidra decompiled: golf.exe */
/* Function: FUN_00469b00 @ 0x00469B00 */
/* Body size: 798 addresses */


void FUN_00469b00(int param_1,uint param_2,int param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  undefined4 uVar17;
  char local_4c0 [64];
  char local_480 [64];
  char local_440 [64];
  char local_400 [1024];
  
  param_3 = param_3 / 0xb;
  iVar6 = 0;
  DAT_005409a8 = 0;
  if (param_4 == 0x98) {
    puVar12 = &DAT_00582cb8;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
  }
  else {
    cVar5 = DAT_004c2d10;
    if ((int)param_4 < 0x98) {
      do {
        if ((cVar5 == param_1) &&
           (*(char *)((int)&DAT_00543d10 +
                     (iVar6 + (short)(&DAT_0057956e)[param_4 * 0x80] * 0x19) * 0x32) != '\0')) {
          uVar9 = 0xffffffff;
          pcVar15 = (char *)((int)&DAT_00543d10 +
                            (iVar6 + (short)(&DAT_0057956e)[param_4 * 0x80] * 0x19) * 0x32);
          goto code_r0x00469c4d;
        }
        cVar5 = (&DAT_004c2d11)[iVar6];
        iVar6 = iVar6 + 1;
      } while (cVar5 != -1);
    }
  }
  DAT_0058b198 = 0x80006318;
  switch(param_1) {
  case 1:
    bVar2 = *(byte *)(&DAT_0057956e + param_4 * 0x80);
    if (((&DAT_00579566)[param_4 * 0x100] & 1) == 0) {
      if ((bVar2 & 1) == 0) {
        if (((bVar2 & 2) == 0) && (param_4 != 0xffffffff)) {
          uVar9 = 0xffffffff;
          pcVar15 = s_How_d_you_like_that_shot__004e3804;
          do {
            pcVar13 = pcVar15;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar13 = pcVar15 + 1;
            cVar5 = *pcVar15;
            pcVar15 = pcVar13;
          } while (cVar5 != '\0');
          uVar9 = ~uVar9;
          iVar6 = -1;
          pcVar15 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar15;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar16 = pcVar15 + 1;
            cVar5 = *pcVar15;
            pcVar15 = pcVar16;
          } while (cVar5 != '\0');
          pcVar15 = pcVar13 + -uVar9;
          pcVar13 = pcVar16 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar13 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar13 = pcVar13 + 1;
          }
          pcVar15 = s_PARTNER__004e37f8;
        }
        else {
          pcVar15 = s_Oh_yeah__nothin__but_DATA__004e37dc;
        }
      }
      else {
        pcVar15 = s_Oh_yeah__I_rock__004e3834;
        if ((bVar2 & 2) == 0) {
          pcVar15 = s_Whoa__I_am_so_GOOD__004e3820;
        }
      }
      uVar9 = 0xffffffff;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      DAT_0058b198 = 0x800023e8;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      uVar9 = 0xffffffff;
      pcVar15 = s_MYNAME_004d395c;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      iVar6 = (int)(short)(&DAT_0057955a)[param_4 * 0x80];
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      if ((*(byte *)(&DAT_0057956e + iVar6 * 0x80) & 1) == 0) {
        iVar6 = FUN_0046c940(iVar6);
        pcVar15 = s___you_are_soooo_GOOD__004e3868;
        if (iVar6 != 0) {
          pcVar15 = s___I_couldn_t_do_it_any_better__004e3848;
        }
      }
      else {
        iVar6 = FUN_0046c940(iVar6);
        pcVar15 = s___you_truly_rock__004e3898;
        if (iVar6 != 0) {
          pcVar15 = s___what_a_great_shot__004e3880;
        }
      }
      uVar9 = 0xffffffff;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      DAT_005409a8 = 1;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      DAT_0058b198 = 0x800023e8;
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    break;
  case 2:
    if (*(short *)(&DAT_00579566 + param_4 * 0x100) == 2) {
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_004e37ac;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_004676e0(param_4,0);
      pcVar15 = s___you_re_DATA_004e379c;
    }
    else {
      if (*(short *)(&DAT_00579566 + param_4 * 0x100) != 4) {
        uVar9 = 0xffffffff;
        DAT_0058b198 = 0x80007d08;
        pcVar15 = s_Darn__I_m_DATA__004e37cc;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
        break;
      }
      uVar9 = 0xffffffff;
      pcVar15 = s_Oh_darn__you_re_DATA_004e37b4;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_00467560(param_4);
      pcVar15 = &DAT_004c4e60;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    DAT_005409a8 = 1;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    DAT_0058b198 = 0x80007d08;
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 3:
    sVar3 = *(short *)(&DAT_00579566 + param_4 * 0x100);
    if (sVar3 == 2) {
      uVar9 = 0xffffffff;
      pcVar15 = s_You_look_even_better_DATA_004e3718;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_004c3f70;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_004676e0(param_4,0);
      pcVar15 = &DAT_004c4944;
LAB_0046a713:
      uVar9 = 0xffffffff;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      DAT_005409a8 = 1;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      DAT_0058b198 = 0x80007d08;
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      break;
    }
    if (sVar3 == 3) {
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_004e3748;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_004676e0(param_4,0);
      pcVar15 = s___now_you_re_DATA__004e3734;
      goto LAB_0046a713;
    }
    if (sVar3 == 4) {
      pcVar15 = s_You_prefer_being_DATA__do_you__004e374c;
      goto LAB_0046a713;
    }
    switch(*(byte *)(&DAT_0057956e + param_4 * 0x80) & 3) {
    case 0:
      pcVar15 = s_Great_004e3794;
      break;
    case 1:
      pcVar15 = s_Oh_no_004e378c;
      break;
    case 2:
      pcVar15 = &DAT_004e3784;
      break;
    case 3:
      pcVar15 = s_Lovely_004e377c;
      break;
    default:
      goto LAB_0046a628;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
LAB_0046a628:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x80007d08;
    pcVar15 = s___now_I_m_DATA__004e376c;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 4:
    if (*(short *)(&DAT_00579566 + param_4 * 0x100) == 4) {
      uVar9 = 0xffffffff;
      pcVar15 = s_Only_you_could_miss_this_shot_004e3a80;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_004676e0(param_4,0);
      DAT_005409a8 = 1;
      DAT_0058b198 = 0x80007d08;
    }
    else {
      uVar9 = 0xffffffff;
      DAT_0058b198 = 0x80007d08;
      pcVar15 = s_This_shot_looks_pretty_easy__004e3a60;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    break;
  case 5:
  case 0x25:
  case 0x26:
    switch(*(undefined2 *)(&DAT_00579566 + param_4 * 0x100)) {
    case 0:
    case 4:
      if (param_1 == 5) {
        pcVar15 = s_Eeek__I_gotta_stay_away_from_the_004e3944;
LAB_0046a159:
        uVar9 = 0xffffffff;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      else {
        if (param_1 == 0x25) {
          pcVar15 = s_Eeek__I_gotta_hit_it_past_the_004e3968;
          goto LAB_0046a159;
        }
        if (param_1 == 0x26) {
          pcVar15 = s_Eeek__I_gotta_watch_out_for_the_004e3988;
          goto LAB_0046a159;
        }
      }
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_004e393c;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      break;
    case 1:
      uVar9 = 0xffffffff;
      pcVar15 = s_Careful_of_the_DATA_004e3910;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_00467560(param_4);
      goto LAB_0046a2bd;
    case 2:
      if ((param_4 & 1) == 0) {
        uVar9 = 0xffffffff;
        pcVar15 = s_Say_hello_to_Mr__DATA_004e38dc;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
        pcVar15 = s_for_me_004e38d4;
      }
      else {
        pcVar15 = s_You_re_going_into_the_DATA_004e38f4;
      }
      uVar9 = 0xffffffff;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      uVar17 = 0;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_004c3f70;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      goto LAB_0046a2b4;
    case 3:
    case 5:
      uVar9 = 0xffffffff;
      uVar17 = 1;
      pcVar15 = s_Watch_out_for_the_DATA_004e3924;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
LAB_0046a2b4:
      FUN_004676e0(param_4,uVar17);
LAB_0046a2bd:
      DAT_005409a8 = 1;
    }
    uVar9 = 0xffffffff;
    pcVar15 = &DAT_004c4944;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 6:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x800023e8;
    pcVar15 = s_I_ll_use_the_slope_on_this_shot__004e36d4;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 7:
    if (param_2 != 0) {
      uVar9 = 0xffffffff;
      pcVar15 = s_I_think_I_ve_seen_this_bridge_be_004e2ff0;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = (char *)&DAT_0051a068;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      break;
    }
    if (((&DAT_005794c8)[param_4 * 0x40] & 0x10000) == 0) {
      uVar9 = 0xffffffff;
      DAT_0058b198 = 0x800023e8;
      pcVar15 = s_I_love_walking_over_this_scenic_b_004e3018;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = (char *)&DAT_0051a068;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      uVar9 = 0xffffffff;
      DAT_0058b198 = 0x800023e8;
      pcVar15 = s_I_love_riding_over_this_scenic_b_004e3040;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = (char *)&DAT_0051a068;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    goto LAB_0046c478;
  case 8:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x80007d08;
    pcVar15 = s_Who_designed_this_______course__004e36f8;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 9:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x80007d08;
    pcVar15 = s_Hey__that_ball_almost_hit_me__004e36b4;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 10:
    uVar9 = 0xffffffff;
    pcVar15 = s_Must_I_walk_through_004e369c;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar15 = (char *)(&DAT_00578350 + param_2 * 0xc);
    pcVar13 = pcVar15;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar5 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar5 != '\0');
    pcVar13 = s_this_004e3694;
    if (pcVar15[~uVar9 - 2] == 's') {
      pcVar13 = s_these_004e368c;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar16 = pcVar13;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar16 = pcVar13 + 1;
      cVar5 = *pcVar13;
      pcVar13 = pcVar16;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    DAT_0058b198 = 0x80007d08;
    iVar6 = -1;
    pcVar13 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar13;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar14 = pcVar13 + 1;
      cVar5 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar5 != '\0');
    pcVar13 = pcVar16 + -uVar9;
    pcVar16 = pcVar14 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar16 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar16 = pcVar16 + 1;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar15 = &DAT_004c5c0c;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0xb:
    pcVar15 = s_Check_out_this_004e2f5c;
    sVar3 = *(short *)(&DAT_00579566 + param_4 * 0x100);
    if (sVar3 == 1) {
      pcVar15 = s_Look_at_this_004e2f4c;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    pcVar15 = s_nice_004e2f44;
    if ((param_2 & 0x100) == 0) {
      pcVar15 = s_beautiful_004e2f38;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar15 = &DAT_004e393c;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    if (sVar3 == 1) {
      FUN_00467560((int)(short)(&DAT_0057955a)[param_4 * 0x80]);
      DAT_0058b198 = 0x800023e8;
    }
    else {
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_004c4e60;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      DAT_0058b198 = 0x800023e8;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    break;
  case 0xc:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x80007d08;
    pcVar15 = s_Darn_that_stupid_DATA__004e2f20;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0xd:
    if ((*(short *)(&DAT_00579566 + param_4 * 0x100) == 2) ||
       (*(short *)(&DAT_00579566 + param_4 * 0x100) == 4)) {
      uVar9 = 0xffffffff;
      pcVar15 = s_Did_I_hear_a_splash_004e2ebc;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_004676e0(param_4,0);
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_004c5c0c;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      DAT_005409a8 = 1;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
LAB_0046bb15:
      DAT_0058b198 = 0x80007d08;
    }
    else {
      iVar6 = (int)(short)(&DAT_0057956e)[param_4 * 0x80] % 3;
      if (iVar6 == 0) {
        uVar9 = 0xffffffff;
        DAT_0058b198 = 0x80007d08;
        pcVar15 = s_Argh__I_drowned_it__004e2ed4;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      else if (iVar6 == 1) {
        uVar9 = 0xffffffff;
        DAT_0058b198 = 0x80007d08;
        pcVar15 = s_Did_my_ball_go_for_a_swim__004e2ee8;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      else {
        if (iVar6 != 2) goto LAB_0046bb15;
        uVar9 = 0xffffffff;
        DAT_0058b198 = 0x80007d08;
        pcVar15 = s_Nooooo__I_m_in_the_drink__004e2f04;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
    }
    break;
  case 0xe:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x80007d08;
    pcVar15 = s_I_m_getting_a_little_thirsty__004e2e9c;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0xf:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x80007d08;
    pcVar15 = s_I_m_starting_to_get_hungry__004e2e80;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x10:
    uVar9 = 0xffffffff;
    pcVar15 = s_Gosh__I_kinda_hooked_that_shot__004e2e2c;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x11:
    uVar9 = 0xffffffff;
    pcVar15 = s_Oops__I_really_sliced_that_shot__004e2e08;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x12:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x800023e8;
    pcVar15 = s_There_s_nothing_like_a_good_snac_004e2de4;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x13:
  case 0x17:
    iVar6 = param_4 * 0x100;
    cVar5 = (&DAT_005794db)[param_3 + iVar6];
    iVar11 = (int)cVar5 - (int)*(char *)(&DAT_00575ab0 + param_3 * 0x82);
    switch(iVar11) {
    case 0:
      pcVar15 = s_Par__004e2bc8;
      break;
    case 1:
      pcVar15 = s_Bogey__004e2bc0;
      break;
    case 2:
      pcVar15 = s_Double_Bogey__004e2bb0;
      break;
    case 3:
      pcVar15 = s_Triple_Bogey__004e2ba0;
      break;
    case -4:
      pcVar15 = s_Triple_Eagle__004e2bf4;
      break;
    case -3:
      pcVar15 = s_Double_Eagle__004e2be4;
      break;
    case -2:
      pcVar15 = s_Eagle__004e2bdc;
      break;
    case -1:
      pcVar15 = s_Birdie__004e2bd0;
      break;
    default:
      pcVar15 = &DAT_004e2b98;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    uVar10 = (&DAT_00575cb0)[param_3 * 0x82];
    iVar7 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar16 = pcVar15 + 1;
      cVar1 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar1 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    if (((uVar10 & 4) == 0) || ((iVar11 < 2 && (param_4 != 0x98)))) {
      if (((uVar10 & 8) == 0) || ((-1 < iVar11 && (param_4 != 0x98)))) {
        if (param_1 != 0x17) {
          uVar8 = 0;
          uVar9 = param_4 + param_3 & 3;
          if (uVar9 == 0) {
            if (((&DAT_005794d1)[iVar6] & 1) != 0) {
              uVar8 = 0x100;
            }
          }
          else if (uVar9 == 1) {
            if (((&DAT_005794d1)[iVar6] & 2) != 0) {
              uVar8 = 0x200;
            }
          }
          else if ((uVar9 == 2) && (((&DAT_005794d1)[iVar6] & 4) != 0)) {
            uVar8 = 0x400;
          }
          if (((uVar8 & uVar10) == 0) || (0 < iVar11)) {
            if (((*(short *)(&DAT_00579566 + iVar6) != 2) &&
                (*(short *)(&DAT_00579566 + iVar6) != 4)) ||
               ((&DAT_005794db)[param_3 + (short)(&DAT_0057955a)[param_4 * 0x80] * 0x100] == '\0'))
            {
              FUN_00469a20(param_2,iVar11);
              break;
            }
            pcVar15 = s_take_that_loser__004e2acc;
            if ((char)(&DAT_005794db)[param_3 + (short)(&DAT_0057955a)[param_4 * 0x80] * 0x100] <=
                cVar5) {
              pcVar15 = s_you_were_lucky_on_this_hole__004e2aac;
            }
          }
          else if (uVar8 == 0x100) {
            pcVar15 = s_My_length_skill_helps_on_this_ho_004e2ae0;
          }
          else if (uVar8 == 0x200) {
            pcVar15 = s_This_hole_rewards_my_accuracy__004e2b04;
          }
          else {
            if (uVar8 != 0x400) break;
            pcVar15 = s_I_had_to_use_some_imaginative_sh_004e2b24;
          }
          goto LAB_0046c43b;
        }
        uVar9 = 0xffffffff;
        DAT_0058b198 = 0x80007d08;
        pcVar15 = s_This_hole_is_too_hard_easy__004e2b4c;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      else {
        uVar9 = 0xffffffff;
        DAT_0058b198 = 0x80007d08;
        pcVar15 = s_This_hole_is_too_easy__004e2b68;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
    }
    else {
      uVar9 = 0xffffffff;
      DAT_0058b198 = 0x80007d08;
      pcVar15 = s_This_hole_is_too_hard__004e2b80;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    break;
  case 0x14:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x80007d08;
    pcVar15 = s_Gee_what_an_ugly_DATA_004e3650;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar15 = &DAT_004c4944;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x15:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x80007d08;
    pcVar15 = s_I_m_tired_of_waiting_for_these_b_004e3600;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x16:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x800023e8;
    pcVar15 = s_Hey_that_s_004e35f4;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar15 = (char *)((int)&DAT_0055d738 + param_2 * 0x25);
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar15 = s__s_house__004e35e8;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x18:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x80007d08;
    pcVar15 = s_Yuck__there_s_something_growing_h_004e3628;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x19:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x800023e8;
    pcVar15 = s_Ahhh__a_cool_foamy_beverage__004e2dc4;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x1a:
    uVar4 = *(ushort *)(&DAT_00579566 + param_4 * 0x100);
    if ((uVar4 & 1) == 0) {
      pcVar15 = s_I_m_starting_to_get_tired__004e2e4c;
LAB_0046c43b:
      uVar9 = 0xffffffff;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      uVar9 = 0xffffffff;
      pcVar15 = s_You_look_a_bit_tired_004e2e68;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      if (uVar4 == 1) {
        FUN_00467560(param_4);
      }
      else {
        FUN_004676e0((int)(short)(&DAT_0057955a)[param_4 * 0x80],1);
      }
      uVar9 = 0xffffffff;
      DAT_005409a8 = 1;
      pcVar15 = &DAT_004c4944;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    break;
  case 0x1b:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x800023e8;
    pcVar15 = s_This_bench_is_so_comfortable__004e2da4;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x1c:
    sVar3 = *(short *)(&DAT_00579566 + param_4 * 0x100);
    if (((sVar3 == 1) || (sVar3 == 3)) || (sVar3 == 5)) {
      uVar9 = 0xffffffff;
      pcVar15 = s_Look_at_that_lovely_DATA_004e2f6c;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      if (sVar3 == 1) {
        FUN_00467560((int)(short)(&DAT_0057955a)[param_4 * 0x80]);
      }
      else {
        FUN_004676e0((int)(short)(&DAT_0057955a)[param_4 * 0x80],1);
      }
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_004c4944;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      DAT_0058b198 = 0x800023e8;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      iVar6 = FUN_0046c940(param_4);
      if (iVar6 == 0) {
        if ((*(byte *)(&DAT_0057956e + param_4 * 0x80) & 1) == 0) {
          uVar9 = 0xffffffff;
          DAT_0058b198 = 0x800023e8;
          pcVar15 = s_My__that_s_a_lovely_DATA__004e2f88;
          do {
            pcVar13 = pcVar15;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar13 = pcVar15 + 1;
            cVar5 = *pcVar15;
            pcVar15 = pcVar13;
          } while (cVar5 != '\0');
          uVar9 = ~uVar9;
          iVar6 = -1;
          pcVar15 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar15;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar16 = pcVar15 + 1;
            cVar5 = *pcVar15;
            pcVar15 = pcVar16;
          } while (cVar5 != '\0');
          pcVar15 = pcVar13 + -uVar9;
          pcVar13 = pcVar16 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar13 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar13 = pcVar13 + 1;
          }
        }
        else {
          uVar9 = 0xffffffff;
          DAT_0058b198 = 0x800023e8;
          pcVar15 = s_Oh__what_a_nice_DATA__004e2fa4;
          do {
            pcVar13 = pcVar15;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar13 = pcVar15 + 1;
            cVar5 = *pcVar15;
            pcVar15 = pcVar13;
          } while (cVar5 != '\0');
          uVar9 = ~uVar9;
          iVar6 = -1;
          pcVar15 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar15;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar16 = pcVar15 + 1;
            cVar5 = *pcVar15;
            pcVar15 = pcVar16;
          } while (cVar5 != '\0');
          pcVar15 = pcVar13 + -uVar9;
          pcVar13 = pcVar16 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar13 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar13 = pcVar13 + 1;
          }
        }
      }
      else if ((*(byte *)(&DAT_0057956e + param_4 * 0x80) & 1) == 0) {
        uVar9 = 0xffffffff;
        DAT_0058b198 = 0x800023e8;
        pcVar15 = s_I_am_liking_that_DATA__004e2fbc;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      else {
        uVar9 = 0xffffffff;
        DAT_0058b198 = 0x800023e8;
        pcVar15 = s_Gee__that_s_a_cool_DATA__004e2fd4;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
    }
    break;
  case 0x1d:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x800023e8;
    pcVar15 = s_I_like_the_variety_on_this_cours_004e3528;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x1e:
    iVar6 = param_3 * 0x208;
    if ((((&DAT_00575cb0)[param_3 * 0x82] & 0x20) == 0) || (((&DAT_00575aa8)[iVar6] & 0x20) == 0)) {
      if ((((&DAT_00575cb0)[param_3 * 0x82] & 0x40) == 0) || (((&DAT_00575aa8)[iVar6] & 0x40) == 0))
      {
        cVar5 = *(char *)(&DAT_00575ab0 + param_3 * 0x82);
        if (cVar5 == (&DAT_005758a8)[iVar6]) {
          uVar9 = 0xffffffff;
          pcVar15 = s_Wow__yet_another_par_004e34d8;
          do {
            pcVar13 = pcVar15;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar13 = pcVar15 + 1;
            cVar1 = *pcVar15;
            pcVar15 = pcVar13;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          iVar6 = -1;
          pcVar15 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar15;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar16 = pcVar15 + 1;
            cVar1 = *pcVar15;
            pcVar15 = pcVar16;
          } while (cVar1 != '\0');
          pcVar15 = pcVar13 + -uVar9;
          pcVar13 = pcVar16 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar13 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar13 = pcVar13 + 1;
          }
          pcVar15 = (char *)FUN_004ad425((int)cVar5,&DAT_00838d9c,10);
          uVar9 = 0xffffffff;
          do {
            pcVar13 = pcVar15;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar13 = pcVar15 + 1;
            cVar5 = *pcVar15;
            pcVar15 = pcVar13;
          } while (cVar5 != '\0');
          uVar9 = ~uVar9;
          iVar6 = -1;
          pcVar15 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar15;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar16 = pcVar15 + 1;
            cVar5 = *pcVar15;
            pcVar15 = pcVar16;
          } while (cVar5 != '\0');
          pcVar15 = pcVar13 + -uVar9;
          pcVar13 = pcVar16 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar13 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar13 = pcVar13 + 1;
          }
          pcVar15 = &DAT_004c4944;
        }
        else {
          pcVar15 = s_This_hole_is_like_the_last_hole__004e34b4;
        }
      }
      else {
        pcVar15 = s_Yawn__another_dogleg_right__004e34f0;
      }
    }
    else {
      pcVar15 = s_Great__another_dogleg_left__004e350c;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    DAT_0058b198 = 0x80007d08;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x1f:
    switch(*(byte *)(&DAT_0057956e + param_4 * 0x80) & 3) {
    case 0:
      uVar9 = 0xffffffff;
      pcVar15 = s_I_ve_never_seen_such_DATA__004e39f4;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      break;
    case 1:
      uVar9 = 0xffffffff;
      pcVar15 = s_I_see_a_ton_of_DATA__004e3a48;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      break;
    case 2:
      uVar9 = 0xffffffff;
      pcVar15 = s_Look_at_all_the_DATA__004e3a10;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      break;
    case 3:
      uVar9 = 0xffffffff;
      pcVar15 = s_Could_there_be_any_more_DATA__004e3a28;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    break;
  case 0x20:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x800023e8;
    pcVar15 = s_Should_I_go_long_or_play_it_safe_004e39d0;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x21:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x800023e8;
    pcVar15 = s_Hmmm__should_I_go_left_or_right__004e39ac;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x22:
    if (param_2 == 0) {
      pcVar15 = s_Great__thanks_for_asking__004e3234;
LAB_0046b26c:
      uVar9 = 0xffffffff;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      if (param_2 == 1) {
        pcVar15 = s_Good__thanks_for_noticing__004e3250;
        goto LAB_0046b26c;
      }
      if (param_2 == 2) {
        pcVar15 = s_Thanks_for_the_encouragement__004e326c;
        goto LAB_0046b26c;
      }
    }
    DAT_0058b198 = 0x800023e8;
    break;
  case 0x23:
    switch((int)(DAT_00834170 + param_4 * 0x2d) / 0x50 & 3) {
    case 0:
      pcVar15 = s_I_will_never_play_this_game_agai_004e3210;
      break;
    case 1:
      pcVar15 = s_I_hate_my_clubs__I_hate_my_hat__I_004e31e0;
      break;
    case 2:
      pcVar15 = s_I_am_so_mad_I_could_just_scream__004e31bc;
      break;
    case 3:
      pcVar15 = s_Come_on__you_want_a_piece_of_me__004e3198;
      break;
    default:
      goto LAB_0046b315;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
LAB_0046b315:
    DAT_0058b198 = 0x80007d08;
    break;
  case 0x24:
    pcVar15 = s_That_guy_s_gone_crazy__004e3180;
    if (param_2 == 0) {
      pcVar15 = s_Whoa__she_s_flipped_out__004e3164;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    DAT_0058b198 = 0x80007d08;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x27:
    iVar6 = FUN_0046c940(param_4);
    pcVar15 = s_I_guess_I_scared_that_little_DAT_004e3090;
    if (iVar6 == 0) {
      pcVar15 = s_I_think_I_frightened_that_poor_D_004e3068;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    DAT_0058b198 = 0x800023e8;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x28:
    uVar9 = (int)(short)(&DAT_0057956e)[param_4 * 0x80] & 0x80000007;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
    }
    switch(uVar9) {
    case 0:
      pcVar15 = s_Oh_mama__004e3158;
      break;
    case 1:
      pcVar15 = s_Ohh_baby__004e314c;
      break;
    case 2:
      pcVar15 = &DAT_004e3144;
      break;
    case 3:
      pcVar15 = s_Gadzooks__004e3138;
      break;
    case 4:
      pcVar15 = s_Oh_yeah__004e312c;
      break;
    case 5:
      pcVar15 = s_A_smoker__004e3120;
      break;
    case 6:
      pcVar15 = s_A_screamer__004e3114;
      break;
    case 7:
      pcVar15 = s_Nailed_it__004e3108;
      break;
    default:
      goto LAB_0046b3f2;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
LAB_0046b3f2:
    if (0 < (int)param_2) {
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_004c4974;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_00407700(0,0,param_2);
      uVar9 = 0xffffffff;
      pcVar15 = &DAT_004c59e0;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    break;
  case 0x29:
    if ((param_4 & 1) == 0) {
      uVar9 = 0xffffffff;
      pcVar15 = s_Clean_and_shiny__004e30b4;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      uVar9 = 0xffffffff;
      pcVar15 = s_Now_I_ll_hit_it_straight__004e30c8;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    break;
  case 0x2a:
    uVar9 = 0xffffffff;
    pcVar15 = s_Lucky_bounce__004e30f8;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_004676e0(param_4,0);
    DAT_005409a8 = 1;
    break;
  case 0x2b:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x80007d08;
    pcVar15 = s_Must_I_walk_up_this_steep_slope__004e3668;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x2c:
    uVar9 = 0xffffffff;
    pcVar15 = s_Never_mind___nice_004e30e4;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_00407700(0,0,param_2);
    uVar9 = 0xffffffff;
    pcVar15 = &DAT_004c59e0;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    DAT_0058b198 = 0x800023e8;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x2d:
    uVar9 = 0xffffffff;
    pcVar15 = s_Hmmm__a_tricky_uphill_shot__004e3b3c;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x2e:
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x800023e8;
    pcVar15 = s_OK__a_nice_downhill_shot__004e3b20;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x2f:
    switch(*(byte *)(&DAT_0057956e + param_4 * 0x80) & 3) {
    case 0:
      pcVar15 = s_PARTNER__your_attitude_stinks__004e3b00;
      break;
    case 1:
      pcVar15 = s_Stop_whining_and_play__PARTNER__004e3ae0;
      break;
    case 2:
      pcVar15 = s_Talk_to_the_hand__PARTNER__004e3ac4;
      break;
    case 3:
      pcVar15 = s_Quiet_PARTNER__I_m_concentrating_004e3aa0;
      break;
    default:
      goto LAB_00469f0e;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
LAB_00469f0e:
    DAT_0058b198 = 0x80007d08;
    break;
  case 0x30:
    uVar9 = 0xffffffff;
    pcVar15 = s_So_what_do_you_do__PARTNER__004e2c0c;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x31:
    uVar9 = 0xffffffff;
    pcVar15 = &DAT_004e2c04;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar15 = (char *)(&DAT_004d6088 + (short)(&DAT_0057956e)[param_4 * 0x80] * 0x8c);
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar15 = &DAT_004c4944;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x32:
    DAT_0051a068._0_1_ = 0;
    FUN_00466b70((int)(short)(&DAT_00579568)[param_4 * 0x80],param_2 & 0xf,(int)param_2 >> 4,
                 (uint)(&DAT_005794c8)[param_4 * 0x40] >> 0x14 & 1);
    break;
  case 0x33:
    if ((DAT_00834170 + param_4 * 5 & 8) == 0) {
      uVar9 = 0xffffffff;
      pcVar15 = s_really_helped_my_distance__004e2d2c;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else if (DAT_005a8c60 == 1) {
      uVar9 = 0xffffffff;
      pcVar15 = s_This_new_driving_range_has_004e2d48;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else if (DAT_005a8c60 == 2) {
      uVar9 = 0xffffffff;
      pcVar15 = s_This_upgraded_driving_range_has_004e2d64;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else if (DAT_005a8c60 == 3) {
      uVar9 = 0xffffffff;
      pcVar15 = s_Our_deluxe_driving_range_has_004e2d84;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    break;
  case 0x34:
    if ((DAT_00834170 + param_4 * 5 & 8) == 0) {
      uVar9 = 0xffffffff;
      pcVar15 = s_really_improved_my_accuracy__004e2c28;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else if (DAT_005a8c58 == 1) {
      uVar9 = 0xffffffff;
      pcVar15 = s_This_new_pro_shop_has_004e2c48;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else if (DAT_005a8c58 == 2) {
      uVar9 = 0xffffffff;
      pcVar15 = s_This_upgraded_pro_shop_has_004e2c60;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else if (DAT_005a8c58 == 3) {
      uVar9 = 0xffffffff;
      pcVar15 = s_Our_deluxe_pro_shop_has_004e2c7c;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    break;
  case 0x35:
    if ((DAT_00834170 + param_4 * 5 & 8) == 0) {
      uVar9 = 0xffffffff;
      pcVar15 = s_really_improved_my_putting__004e2cb4;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else if (DAT_005a8c50 == 1) {
      uVar9 = 0xffffffff;
      pcVar15 = s_This_new_putting_green_has_004e2cd0;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else if (DAT_005a8c50 == 2) {
      uVar9 = 0xffffffff;
      pcVar15 = s_This_upgraded_putting_green_has_004e2cec;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else if (DAT_005a8c50 == 3) {
      uVar9 = 0xffffffff;
      pcVar15 = s_Our_deluxe_putting_green_has_004e2d0c;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    break;
  case 0x36:
    uVar9 = 0xffffffff;
    pcVar15 = s_I_ll_use_my_004e2ca4;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    FUN_0040a9a0(param_2);
    uVar9 = 0xffffffff;
    pcVar15 = s_for_this_shot__004e2c94;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; iVar6 = DAT_00822c88, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    if (iVar6 < 2) {
      DAT_0058b198 = 0x800023e8;
    }
    break;
  case 0x37:
    uVar9 = 0xffffffff;
    pcVar15 = s_I_ll_draw_this_shot_from_right_t_004e3598;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x38:
    uVar9 = 0xffffffff;
    pcVar15 = s_I_ll_fade_this_shot_from_left_to_004e35c0;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x39:
    uVar9 = 0xffffffff;
    pcVar15 = s_I_ll_bring_this_ball_in_high_and_004e3570;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x3a:
    if (param_2 == 0) {
      uVar9 = 0xffffffff;
      pcVar15 = s_Hey__I_m_trying_to_play_golf_her_004e345c;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else if (param_2 == 1) {
      uVar9 = 0xffffffff;
      pcVar15 = s_Ummm__fine_thanks__004e3480;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    else {
      if (param_2 != 2) break;
      uVar9 = 0xffffffff;
      pcVar15 = s_Lousy__now_that_you_mention_it__004e3494;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    goto LAB_0046c478;
  case 0x3b:
    sVar3 = (&DAT_0057956e)[param_4 * 0x80];
    if (*(char *)(sVar3 * 0x2c + 0x5849e3 + param_3) == '\0') {
      if (((&DAT_00575cb0)[param_3 * 0x82] & 1) == 0) {
        uVar9 = 0xffffffff;
        pcVar15 = s_I_had_a_004e32a8;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        cVar5 = (&DAT_005849f6)[param_3 + sVar3 * 0x2c];
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
        pcVar15 = (char *)FUN_004ad425((int)cVar5,&DAT_00838d9c,10);
        uVar9 = 0xffffffff;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
        pcVar15 = s_on_this_hole_last_time__004e328c;
      }
      else if (((&DAT_00575cb0)[param_3 * 0x82] & 2) == 0) {
        uVar9 = 0xffffffff;
        pcVar15 = s_You_know_004e32e0;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
        FUN_004676e0(param_4 ^ 1,0);
        uVar9 = 0xffffffff;
        pcVar15 = &DAT_004c52b8;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        bVar2 = *(byte *)(&DAT_0057956e + param_4 * 0x80);
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
        if ((bVar2 & 1) == 0) {
          uVar9 = 0xffffffff;
          pcVar15 = s_they_call_this_hole_004e32b4;
          do {
            pcVar13 = pcVar15;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar13 = pcVar15 + 1;
            cVar5 = *pcVar15;
            pcVar15 = pcVar13;
          } while (cVar5 != '\0');
          uVar9 = ~uVar9;
          iVar6 = -1;
          pcVar15 = (char *)&DAT_0051a068;
          do {
            pcVar16 = pcVar15;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar16 = pcVar15 + 1;
            cVar5 = *pcVar15;
            pcVar15 = pcVar16;
          } while (cVar5 != '\0');
          pcVar15 = pcVar13 + -uVar9;
          pcVar13 = pcVar16 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
            pcVar15 = pcVar15 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar13 = *pcVar15;
            pcVar15 = pcVar15 + 1;
            pcVar13 = pcVar13 + 1;
          }
          FUN_00407280(param_3);
          pcVar15 = &DAT_004c4944;
        }
        else {
          FUN_00407280(param_3);
          pcVar15 = s_is_a_top_100_hole__004e32cc;
        }
      }
      else {
        pcVar15 = s_This_hole_is_rated_in_the_top_18_004e32ec;
      }
      goto LAB_0046c43b;
    }
    uVar9 = 0xffffffff;
    DAT_0058b198 = 0x800023e8;
    pcVar15 = s_I_ve_always_liked_this_hole__004e3310;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x3c:
    uVar9 = 0xffffffff;
    pcVar15 = s_I_ll_run_this_ball_low_004e3558;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    if ((&DAT_00578376)[param_2 * 0x30] == '\r') {
      uVar9 = 0xffffffff;
      pcVar15 = s_under_the_004e354c;
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar15 = (char *)(&DAT_00578350 + param_2 * 0xc);
      do {
        pcVar13 = pcVar15;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar13 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar13;
      } while (cVar5 != '\0');
      uVar9 = ~uVar9;
      iVar6 = -1;
      pcVar15 = (char *)&DAT_0051a068;
      do {
        pcVar16 = pcVar15;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar16 = pcVar15 + 1;
        cVar5 = *pcVar15;
        pcVar15 = pcVar16;
      } while (cVar5 != '\0');
      pcVar15 = pcVar13 + -uVar9;
      pcVar13 = pcVar16 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
        pcVar15 = pcVar15 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar13 = *pcVar15;
        pcVar15 = pcVar15 + 1;
        pcVar13 = pcVar13 + 1;
      }
    }
    uVar9 = 0xffffffff;
    pcVar15 = &DAT_004c4944;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x3d:
    switch(param_2) {
    case 3:
      if ((param_4 & 1) == 0) {
        uVar9 = 0xffffffff;
        pcVar15 = s_Fine__004e3438;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      else {
        uVar9 = 0xffffffff;
        pcVar15 = s_How_are_you_today__PARTNER__004e3440;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      break;
    case 4:
      if ((param_4 & 1) == 0) {
        uVar9 = 0xffffffff;
        pcVar15 = s_They_belong_to_my_brother_in_law_004e33fc;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      else {
        uVar9 = 0xffffffff;
        pcVar15 = s_Are_those_new_clubs__004e3420;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      break;
    case 5:
      if ((param_4 & 1) == 0) {
        uVar9 = 0xffffffff;
        pcVar15 = s_Sure_does__004e33cc;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      else {
        uVar9 = 0xffffffff;
        pcVar15 = s_Looks_like_a_great_day_for_golf__004e33d8;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      break;
    case 6:
      if ((param_4 & 1) == 0) {
        uVar9 = 0xffffffff;
        pcVar15 = s_It_doesn_t_get_any_better_than_t_004e33a4;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      else {
        uVar9 = 0xffffffff;
        pcVar15 = s_Listen_to_those_birds_singing__004e3384;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      break;
    case 7:
      if ((param_4 & 1) == 0) {
        uVar9 = 0xffffffff;
        pcVar15 = s_It_s_magic_time__004e3358;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      else {
        uVar9 = 0xffffffff;
        pcVar15 = s_Prepare_to_be_amazed__004e336c;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      break;
    default:
      if ((param_4 & 1) == 0) {
        uVar9 = 0xffffffff;
        pcVar15 = s_I_don_t_care__004e3330;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
      else {
        uVar9 = 0xffffffff;
        pcVar15 = s_Shall_I_tee_off_first__004e3340;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
    }
    break;
  case 0x3e:
    iVar11 = (int)(char)(&DAT_004d60aa)[(short)(&DAT_0057956e)[param_4 * 0x80] * 0x230];
    iVar6 = FUN_0046c940(param_4);
    if (iVar6 == 0) {
      iVar11 = iVar11 + 0x14;
    }
    uVar9 = 0xffffffff;
    pcVar15 = s_Praise_the_Lord_for_this_fabulou_004d55ec + iVar11 * 0x44;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    break;
  case 0x3f:
    if (((&DAT_005794d0)[param_4 * 0x100] & 0xe0) == 0x20) {
      switch(param_4 & 3) {
      case 0:
        uVar9 = 0xffffffff;
        pcVar15 = s_I_brought_my_A_game_today__004e3c78;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
        break;
      case 1:
        uVar9 = 0xffffffff;
        pcVar15 = s_Might_as_well_just_give_me_the_t_004e3c50;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
        break;
      case 2:
        uVar9 = 0xffffffff;
        pcVar15 = s_I_hope_my_caddie_counted_my_club_004e3c2c;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
        break;
      case 3:
        uVar9 = 0xffffffff;
        pcVar15 = s_You_losers_might_as_well_go_home_004e3c08;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
    }
    else {
      switch(param_4 & 3) {
      case 0:
        uVar9 = 0xffffffff;
        pcVar15 = s_It_s_good_to_be_back_on_the_cour_004e3be4;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
        break;
      case 1:
        uVar9 = 0xffffffff;
        pcVar15 = s_Wasn_t_that_a_great_tournament__P_004e3bb8;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
        break;
      case 2:
        uVar9 = 0xffffffff;
        pcVar15 = s_I_ve_already_got_tickets_for_the_004e3b84;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
        break;
      case 3:
        uVar9 = 0xffffffff;
        pcVar15 = s_I_think_I_could_have_won_that_to_004e3b58;
        do {
          pcVar13 = pcVar15;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar13 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar13;
        } while (cVar5 != '\0');
        uVar9 = ~uVar9;
        iVar6 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar16 = pcVar15;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar16 = pcVar15 + 1;
          cVar5 = *pcVar15;
          pcVar15 = pcVar16;
        } while (cVar5 != '\0');
        pcVar15 = pcVar13 + -uVar9;
        pcVar13 = pcVar16 + -1;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar13 = pcVar13 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar13 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar13 = pcVar13 + 1;
        }
      }
    }
    break;
  case 0x41:
    uVar9 = 0xffffffff;
    pcVar15 = s_I_didn_t_see_where_that_shot_lan_004e38ac;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; iVar6 = DAT_00822c88, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    if (1 < iVar6) {
      DAT_0058b198 = 0x80007d08;
    }
  }
LAB_0046c46a:
  if (param_2 == 0xffffffff) {
    return;
  }
LAB_0046c478:
  uVar9 = 0xffffffff;
  pcVar15 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar15;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar13 = pcVar15 + 1;
    cVar5 = *pcVar15;
    pcVar15 = pcVar13;
  } while (cVar5 != '\0');
  uVar9 = ~uVar9;
  pcVar15 = pcVar13 + -uVar9;
  pcVar13 = local_400;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar13 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar13 = pcVar13 + 1;
  }
  DAT_0051a068._0_1_ = 0;
  FUN_004676e0(param_4,0);
  uVar9 = 0xffffffff;
  pcVar15 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar15;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar13 = pcVar15 + 1;
    cVar5 = *pcVar15;
    pcVar15 = pcVar13;
  } while (cVar5 != '\0');
  uVar9 = ~uVar9;
  pcVar15 = pcVar13 + -uVar9;
  pcVar13 = local_4c0;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar13 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar13 = pcVar13 + 1;
  }
  DAT_0051a068._0_1_ = 0;
  FUN_004676e0(param_4 ^ 1,0);
  uVar9 = 0xffffffff;
  pcVar15 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar15;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar13 = pcVar15 + 1;
    cVar5 = *pcVar15;
    pcVar15 = pcVar13;
  } while (cVar5 != '\0');
  uVar9 = ~uVar9;
  pcVar15 = pcVar13 + -uVar9;
  pcVar13 = local_440;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar13 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar13 = pcVar13 + 1;
  }
  DAT_0051a068._0_1_ = 0;
  if (0x98 < (int)param_4) {
    uVar9 = 0xffffffff;
    pcVar15 = &DAT_004e2aa4;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
  }
  switch(param_1) {
  case 2:
  case 3:
    if ((&DAT_00578376)[param_2 * 0x30] == '\r') {
      pcVar15 = s_under_the_004e2a90;
    }
    else {
      pcVar15 = s_in_the_004e2a9c;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
    pcVar15 = (char *)(&DAT_00578350 + param_2 * 0xc);
    break;
  default:
    pcVar15 = &DAT_00578360 + param_2 * 0x30;
    if ((&DAT_00578376)[param_2 * 0x30] != '\r') {
      pcVar15 = (char *)(&DAT_00578350 + param_2 * 0xc);
    }
    break;
  case 0xb:
  case 0x14:
  case 0x1c:
    FUN_00407700((int)param_2 % 0x32,(int)param_2 / 0x32,0xffffffff);
    goto LAB_0046c66d;
  case 0xc:
    pcVar15 = (char *)(&DAT_00578350 + param_2 * 0xc);
    break;
  case 0x27:
    pcVar15 = &DAT_004c1998 + param_2 * 0x12;
  }
  uVar9 = 0xffffffff;
  do {
    pcVar13 = pcVar15;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar13 = pcVar15 + 1;
    cVar5 = *pcVar15;
    pcVar15 = pcVar13;
  } while (cVar5 != '\0');
  uVar9 = ~uVar9;
  iVar6 = -1;
  pcVar15 = (char *)&DAT_0051a068;
  do {
    pcVar16 = pcVar15;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar16 = pcVar15 + 1;
    cVar5 = *pcVar15;
    pcVar15 = pcVar16;
  } while (cVar5 != '\0');
  pcVar15 = pcVar13 + -uVar9;
  pcVar13 = pcVar16 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar13 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar13 = pcVar13 + 1;
  }
LAB_0046c66d:
  if (0x98 < (int)param_4) {
    uVar9 = 0xffffffff;
    pcVar15 = &DAT_004c59e0;
    do {
      pcVar13 = pcVar15;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar5 != '\0');
    uVar9 = ~uVar9;
    iVar6 = -1;
    pcVar15 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar15;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar16 = pcVar15 + 1;
      cVar5 = *pcVar15;
      pcVar15 = pcVar16;
    } while (cVar5 != '\0');
    pcVar15 = pcVar13 + -uVar9;
    pcVar13 = pcVar16 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
      pcVar15 = pcVar15 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar15;
      pcVar15 = pcVar15 + 1;
      pcVar13 = pcVar13 + 1;
    }
  }
  uVar9 = 0xffffffff;
  pcVar15 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar15;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar13 = pcVar15 + 1;
    cVar5 = *pcVar15;
    pcVar15 = pcVar13;
  } while (cVar5 != '\0');
  uVar9 = ~uVar9;
  pcVar15 = pcVar13 + -uVar9;
  pcVar13 = local_480;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar13 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar13 = pcVar13 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar15 = local_400;
  do {
    pcVar13 = pcVar15;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar13 = pcVar15 + 1;
    cVar5 = *pcVar15;
    pcVar15 = pcVar13;
  } while (cVar5 != '\0');
  uVar9 = ~uVar9;
  pcVar15 = pcVar13 + -uVar9;
  pcVar13 = (char *)&DAT_0051a068;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar13 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar13 = pcVar13 + 1;
  }
  FUN_0045b7c0(s_MYNAME_004d395c,local_4c0);
  FUN_0045b7c0(s_PARTNER_004d3954,local_440);
  FUN_0045b7c0(&DAT_004e393c,local_480);
  return;
  while( true ) {
    uVar9 = uVar9 - 1;
    pcVar13 = pcVar15 + 1;
    cVar5 = *pcVar15;
    pcVar15 = pcVar13;
    if (cVar5 == '\0') break;
code_r0x00469c4d:
    pcVar13 = pcVar15;
    if (uVar9 == 0) break;
  }
  uVar9 = ~uVar9;
  iVar6 = -1;
  pcVar15 = (char *)&DAT_0051a068;
  do {
    pcVar16 = pcVar15;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar16 = pcVar15 + 1;
    cVar5 = *pcVar15;
    pcVar15 = pcVar16;
  } while (cVar5 != '\0');
  pcVar15 = pcVar13 + -uVar9;
  pcVar13 = pcVar16 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar13 = *(undefined4 *)pcVar15;
    pcVar15 = pcVar15 + 4;
    pcVar13 = pcVar13 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar13 = *pcVar15;
    pcVar15 = pcVar15 + 1;
    pcVar13 = pcVar13 + 1;
  }
  goto LAB_0046c46a;
}

