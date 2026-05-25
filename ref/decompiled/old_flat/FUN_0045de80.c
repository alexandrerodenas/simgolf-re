/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045de80 @ 0x0045DE80 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0045de80(uint param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  char *pcVar19;
  bool bVar20;
  uint local_14;
  int local_c;
  int local_8;
  int local_4;
  
  iVar14 = param_1 * 0x100;
  (&DAT_005794d9)[iVar14] = 1;
  (&DAT_0057955a)[param_1 * 0x80] = (short)param_2;
  iVar15 = param_2 * 0x100;
  (&DAT_005794d9)[iVar15] = 1;
  (&DAT_0057955a)[param_2 * 0x80] = (short)param_1;
  uVar12 = DAT_00834170;
  *(uint *)(&DAT_00579578 + iVar15) = DAT_00834170;
  *(uint *)(&DAT_00579578 + iVar14) = uVar12;
  (&DAT_00579576)[param_1 * 0x80] = (short)DAT_0056a51c;
  (&DAT_00579576)[param_2 * 0x80] = (short)DAT_0056a51c + 1;
  DAT_0056a51c = DAT_0056a51c + 2;
  sVar3 = FUN_0045c1e0(6);
  (&DAT_00579556)[param_1 * 0x80] = -6 - sVar3;
  (&DAT_00579556)[param_2 * 0x80] = 0;
  (&DAT_00579568)[param_2 * 0x80] = 0xffff;
  (&DAT_00579568)[param_1 * 0x80] = 0xffff;
  *(undefined2 *)(&DAT_00579566 + iVar15) = 0;
  *(undefined2 *)(&DAT_00579566 + iVar14) = 0;
  (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] & 0xffefffff;
  bVar20 = DAT_00543ccc != 0;
  (&DAT_005794c8)[param_2 * 0x40] = (&DAT_005794c8)[param_2 * 0x40] & 0xffefffff;
  if (bVar20) {
    (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] | 0x10000;
    (&DAT_005794c8)[param_2 * 0x40] = (&DAT_005794c8)[param_2 * 0x40] | 0x10000;
  }
  iVar17 = 5;
  local_4 = 0;
  do {
    if (((int)(char)((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_2 * 0x80] * 0x230] ^
                    (&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230]) &
        1 << ((byte)local_4 & 0x1f)) != 0) {
      iVar17 = iVar17 + -1;
    }
    local_4 = local_4 + 1;
  } while (local_4 < 5);
  local_8 = 0;
  do {
    FUN_0045c1e0(100);
    iVar16 = 0;
    do {
      uVar4 = FUN_0045c1e0(100);
      uVar12 = (uint)uVar4;
      iVar16 = iVar16 + 1;
      if (99 < iVar16) break;
    } while ((*(char *)((int)&DAT_0053a454 + uVar12 * 0x32) == '\0') || (uVar12 == DAT_00838a9c));
    bVar20 = iVar16 < 100;
    iVar16 = uVar12 * 0x32;
    FUN_004a6650((int)*(char *)((int)&DAT_0053a454 + iVar16));
    if (!bVar20) goto LAB_0045e6ba;
    uVar6 = FUN_004a6650((int)*(char *)((int)&DAT_0053a454 + iVar16 + 1));
    switch(uVar6) {
    case 0x46:
      iVar7 = FUN_0046c940(param_1);
      if (iVar7 != 0) goto LAB_0045e6ba;
      break;
    case 0x4d:
      iVar7 = FUN_0046c940(param_1);
      if (iVar7 == 0) goto LAB_0045e6ba;
      break;
    case 0x4f:
      iVar7 = FUN_0046c940(param_1);
      iVar8 = FUN_0046c940(param_2);
      if (iVar7 == iVar8) goto LAB_0045e6ba;
      break;
    case 0x53:
      iVar7 = FUN_0046c940(param_1);
      iVar8 = FUN_0046c940(param_2);
      if (iVar7 != iVar8) goto LAB_0045e6ba;
    }
    uVar6 = FUN_004a6650((int)*(char *)((int)&DAT_0053a454 + iVar16 + 2));
    switch(uVar6) {
    case 0x44:
      bVar1 = (&DAT_00579570)[iVar14] & 0x20;
      break;
    default:
      goto switchD_0045e114_caseD_45;
    case 0x4d:
      bVar1 = (&DAT_00579570)[iVar14] & 0x10;
      break;
    case 0x4e:
      if (((&DAT_00579570)[iVar14] & 0x10) != 0) goto LAB_0045e6ba;
      goto switchD_0045e114_caseD_45;
    case 0x53:
      bVar1 = (&DAT_00579570)[iVar14] & 8;
      break;
    case 0x57:
      bVar1 = (&DAT_00579570)[iVar14] & 0x40;
    }
    if (bVar1 == 0) goto LAB_0045e6ba;
switchD_0045e114_caseD_45:
    uVar6 = FUN_004a6650((int)*(char *)((int)&DAT_0053a454 + iVar16 + 3));
    switch(uVar6) {
    case 0x41:
      bVar1 = (&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230] & 4;
      break;
    case 0x42:
      if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230] & 8) != 0)
      goto LAB_0045e6ba;
    default:
      goto switchD_0045e188_caseD_43;
    case 0x47:
      bVar1 = (&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230] & 0x10;
      goto joined_r0x0045e1d4;
    case 0x4c:
      bVar1 = (&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230] & 4;
      goto joined_r0x0045e1d4;
    case 0x4d:
      bVar1 = (&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230] & 1;
      goto joined_r0x0045e1d4;
    case 0x4e:
      bVar1 = (&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230] & 0x10;
      break;
    case 0x4f:
      bVar1 = (&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230] & 2;
      break;
    case 0x50:
      bVar1 = (&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230] & 8;
      break;
    case 0x53:
      bVar1 = (&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230] & 2;
joined_r0x0045e1d4:
      if (bVar1 == 0) goto switchD_0045e188_caseD_43;
      goto LAB_0045e6ba;
    case 0x54:
      bVar1 = (&DAT_004d60a8)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x230] & 1;
    }
    if (bVar1 == 0) goto LAB_0045e6ba;
switchD_0045e188_caseD_43:
    iVar7 = FUN_004a6650((int)*(char *)((int)&DAT_0053a458 + iVar16));
    if (iVar7 == 0x4f) {
      iVar7 = FUN_00453260(param_2);
      iVar8 = FUN_00453260(param_1);
      if (iVar8 < iVar7 + 10) goto LAB_0045e6ba;
    }
    else if (iVar7 == 0x53) {
      iVar7 = FUN_00453260(param_1);
      iVar8 = FUN_00453260(param_2);
      uVar13 = iVar7 - iVar8 >> 0x1f;
      iVar9 = FUN_00453260(param_1);
      if (iVar9 / 3 < (int)((iVar7 - iVar8 ^ uVar13) - uVar13)) goto LAB_0045e6ba;
    }
    else if (iVar7 == 0x59) {
      iVar7 = FUN_00453260(param_2);
      iVar8 = FUN_00453260(param_1);
      if (iVar7 + -10 < iVar8) goto LAB_0045e6ba;
    }
    uVar6 = FUN_004a6650((int)*(char *)((int)&DAT_0053a458 + iVar16 + 1));
    switch(uVar6) {
    case 0x46:
      iVar7 = FUN_0046c940(param_2);
      if (iVar7 != 0) goto LAB_0045e6ba;
      break;
    case 0x4d:
      iVar7 = FUN_0046c940(param_2);
      if (iVar7 == 0) goto LAB_0045e6ba;
      break;
    case 0x4f:
      iVar7 = FUN_0046c940(param_1);
      iVar8 = FUN_0046c940(param_2);
      if (iVar7 == iVar8) goto LAB_0045e6ba;
      break;
    case 0x53:
      iVar7 = FUN_0046c940(param_1);
      iVar8 = FUN_0046c940(param_2);
      if (iVar7 != iVar8) goto LAB_0045e6ba;
    }
    uVar6 = FUN_004a6650((int)*(char *)((int)&DAT_0053a458 + iVar16 + 2));
    switch(uVar6) {
    case 0x44:
      bVar1 = (&DAT_00579570)[iVar15] & 0x20;
      break;
    default:
      goto switchD_0045e48b_caseD_45;
    case 0x4d:
      bVar1 = (&DAT_00579570)[iVar15] & 0x10;
      break;
    case 0x4e:
      if (((&DAT_00579570)[iVar15] & 0x10) != 0) goto LAB_0045e6ba;
      goto switchD_0045e48b_caseD_45;
    case 0x53:
      bVar1 = (&DAT_00579570)[iVar15] & 8;
      break;
    case 0x57:
      bVar1 = (&DAT_00579570)[iVar15] & 0x40;
    }
    if (bVar1 != 0) {
switchD_0045e48b_caseD_45:
      uVar6 = FUN_004a6650((int)*(char *)((int)&DAT_0053a458 + iVar16 + 3));
      switch(uVar6) {
      case 0x41:
        if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_2 * 0x80] * 0x230] & 4) != 0) break;
        bVar20 = false;
        goto LAB_0045e692;
      case 0x42:
        if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_2 * 0x80] * 0x230] & 8) != 0) {
          bVar20 = false;
          goto LAB_0045e692;
        }
        break;
      case 0x47:
        if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_2 * 0x80] * 0x230] & 0x10) != 0) {
          bVar20 = false;
          goto LAB_0045e692;
        }
        break;
      case 0x4c:
        if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_2 * 0x80] * 0x230] & 4) != 0) {
          bVar20 = false;
          goto LAB_0045e692;
        }
        break;
      case 0x4d:
        if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_2 * 0x80] * 0x230] & 1) != 0) {
          bVar20 = false;
          goto LAB_0045e692;
        }
        break;
      case 0x4e:
        if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_2 * 0x80] * 0x230] & 0x10) == 0) {
          bVar20 = false;
          goto LAB_0045e692;
        }
        break;
      case 0x4f:
        if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_2 * 0x80] * 0x230] & 2) == 0) {
          bVar20 = false;
          goto LAB_0045e692;
        }
        break;
      case 0x50:
        if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_2 * 0x80] * 0x230] & 8) == 0) {
          bVar20 = false;
          goto LAB_0045e692;
        }
        break;
      case 0x53:
        if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_2 * 0x80] * 0x230] & 2) != 0) {
          bVar20 = false;
          goto LAB_0045e692;
        }
        break;
      case 0x54:
        if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[param_2 * 0x80] * 0x230] & 1) == 0) {
          bVar20 = false;
          goto LAB_0045e692;
        }
      }
LAB_0045e692:
      psVar10 = &DAT_00579568;
      do {
        if (('\0' < *(char *)((int)psVar10 + -0x8f)) && ((int)*psVar10 == uVar12)) {
          bVar20 = false;
        }
        psVar10 = psVar10 + 0x80;
      } while ((int)psVar10 < 0x582d68);
      if (bVar20) {
        (&DAT_00579568)[param_2 * 0x80] = uVar4;
        (&DAT_00579568)[param_1 * 0x80] = uVar4;
        (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] | 0x100000;
        break;
      }
    }
LAB_0045e6ba:
    local_8 = local_8 + 1;
  } while (local_8 < 3);
  if (((int)param_1 < 2) && ((int)DAT_00834170 < 0x800)) {
    uVar5 = (undefined2)DAT_00838a9c;
    (&DAT_00579568)[param_2 * 0x80] = uVar5;
    (&DAT_00579568)[param_1 * 0x80] = uVar5;
    (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] | 0x100000;
  }
  iVar16 = DAT_00541cd8;
  local_14 = 0;
  if (((&DAT_005794c8)[param_2 * 0x40] & 0x20000) == 0) {
    psVar10 = &DAT_0057956e;
    local_4 = 0x98;
    do {
      if (('\0' < *(char *)((int)psVar10 + -0x95)) && (0x4b < *psVar10)) {
        local_14 = local_14 | 1 << ((char)*psVar10 + 0xb4U & 0x1f);
      }
      psVar10 = psVar10 + 0x80;
    } while ((int)psVar10 < 0x582d6e);
    if ((DAT_0059e7b8 & 0x1000000) != 0) {
      local_14 = 0xffffffff;
    }
    local_c = DAT_00541cd8;
    if (DAT_00822c88 < 2) {
      uVar12 = 0xffffffff;
      pcVar11 = s_Your_Fun_Rating_is_up_to_004d3b98;
      do {
        pcVar19 = pcVar11;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar19 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar19;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      pcVar11 = pcVar19 + -uVar12;
      pcVar19 = (char *)&DAT_0051a068;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar19 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar19 = pcVar19 + 1;
      }
      pcVar11 = (char *)FUN_004ad425(DAT_0059ae78,&DAT_00824134,10);
      uVar12 = 0xffffffff;
      do {
        pcVar19 = pcVar11;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar19 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar19;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      iVar16 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar11;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar18 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar18;
      } while (cVar2 != '\0');
      pcVar11 = pcVar19 + -uVar12;
      pcVar19 = pcVar18 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar19 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar19 = pcVar19 + 1;
      }
      uVar12 = 0xffffffff;
      pcVar11 = s_and_your_fame_is_spreading__004d3b78;
      do {
        pcVar19 = pcVar11;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar19 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar19;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      iVar16 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar11;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar18 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar18;
      } while (cVar2 != '\0');
      pcVar11 = pcVar19 + -uVar12;
      pcVar19 = pcVar18 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar19 = pcVar19 + 4;
      }
      local_c = DAT_0059ae78;
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar19 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar19 = pcVar19 + 1;
      }
    }
    else {
      uVar12 = 0xffffffff;
      pcVar11 = s_Your_Skill_Rating_is_up_to_004d3b5c;
      do {
        pcVar19 = pcVar11;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar19 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar19;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      pcVar11 = pcVar19 + -uVar12;
      pcVar19 = (char *)&DAT_0051a068;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar19 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar19 = pcVar19 + 1;
      }
      FUN_0042dd50(iVar16);
      uVar12 = 0xffffffff;
      pcVar11 = s_and_your_fame_is_spreading__004d3b78;
      do {
        pcVar19 = pcVar11;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar19 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar19;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      iVar16 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar11;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar18 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar18;
      } while (cVar2 != '\0');
      pcVar11 = pcVar19 + -uVar12;
      pcVar19 = pcVar18 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar19 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar19 = pcVar19 + 1;
      }
    }
    iVar16 = ((int)param_2 / 2) % 6;
    if ((((iVar16 == 1) && ((local_14 & 4) == 0)) && ((int)DAT_00572cac < 8)) &&
       ((&DAT_00575ec0)[DAT_00572cac * 0x410] != '\0')) {
      uVar12 = 0xffffffff;
      pcVar11 = s_Corporate_CEO_004c71b0;
      do {
        pcVar19 = pcVar11;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar19 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar19;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      (&DAT_005794d0)[iVar15] = (char)DAT_00572cac + '`';
      pcVar11 = pcVar19 + -uVar12;
      pcVar19 = (char *)&DAT_0051a068;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar19 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar19 = pcVar19 + 1;
      }
      FUN_004676e0(param_2,0);
      uVar12 = 0xffffffff;
      (&DAT_0057956e)[param_2 * 0x80] = 0x4f;
      pcVar11 = s_is_playing_your_course_today__If_004d3af0;
      do {
        pcVar19 = pcVar11;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar19 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar19;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      iVar7 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar11;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar18 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar18;
      } while (cVar2 != '\0');
      pcVar11 = pcVar19 + -uVar12;
      pcVar19 = pcVar18 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar19 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar19 = pcVar19 + 1;
      }
      iVar7 = FUN_0040cb00(0x80002108,1,param_2);
      if (iVar7 == 0) {
        (&DAT_005794d0)[iVar15] = 0;
      }
      else {
        cVar2 = (char)DAT_00572cac;
        (&DAT_005794d1)[iVar15] = 7;
        (&DAT_005794d0)[iVar15] = cVar2 + '`';
        bVar1 = FUN_0045c1e0(9);
        *(short *)(&DAT_005794ce + iVar15) = (short)(1 << (bVar1 & 0x1f));
        bVar1 = FUN_0045c1e0(9);
        *(ushort *)(&DAT_005794ce + iVar15) =
             *(ushort *)(&DAT_005794ce + iVar15) | (ushort)(1 << (bVar1 & 0x1f));
        bVar1 = FUN_0045c1e0(9);
        *(ushort *)(&DAT_005794ce + iVar15) =
             *(ushort *)(&DAT_005794ce + iVar15) | (ushort)(1 << (bVar1 & 0x1f));
        bVar1 = FUN_0045c1e0(9);
        *(ushort *)(&DAT_005794ce + iVar15) =
             *(ushort *)(&DAT_005794ce + iVar15) | (ushort)(1 << (bVar1 & 0x1f)) | 0xe00;
        DAT_00572cac = DAT_00572cac + 1 | 0x80;
        FUN_004481b0(0x26,100,0,0,0);
        *(undefined2 *)(&DAT_00579566 + iVar15) = 0;
        *(undefined2 *)(&DAT_00579566 + iVar14) = 0;
      }
    }
    if (((iVar16 == 3) && ((local_14 & 2) == 0)) &&
       (((&DAT_00571ff7)[DAT_0059bf90 * 0x2e] != '\x02' &&
        ((DAT_0053a450 + 2) * (DAT_00822c88 + 2) * 0x32 < local_c)))) {
      uVar12 = 0xffffffff;
      pcVar11 = s_County_commissioner_004c7088;
      do {
        pcVar19 = pcVar11;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar19 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar19;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      iVar7 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar11;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar18 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar18;
      } while (cVar2 != '\0');
      cVar2 = (char)DAT_0053a450;
      pcVar11 = pcVar19 + -uVar12;
      pcVar19 = pcVar18 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar19 = pcVar19 + 4;
      }
      (&DAT_005794d0)[iVar15] = cVar2 + '@';
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar19 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar19 = pcVar19 + 1;
      }
      FUN_004676e0(param_2,0);
      uVar12 = 0xffffffff;
      (&DAT_0057956e)[param_2 * 0x80] = 0x4d;
      pcVar11 = s_is_playing_your_course_today__If_004d3a88;
      do {
        pcVar19 = pcVar11;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar19 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar19;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      iVar7 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar11;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar18 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar18;
      } while (cVar2 != '\0');
      pcVar11 = pcVar19 + -uVar12;
      pcVar19 = pcVar18 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar19 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar19 = pcVar19 + 1;
      }
      iVar7 = FUN_0040cb00(0x80002108,1,param_2);
      if (iVar7 == 0) {
        (&DAT_005794d0)[iVar15] = 0;
      }
      else {
        (&DAT_005794d1)[iVar15] = 7;
        bVar1 = FUN_0045c1e0(0xc);
        *(short *)(&DAT_005794ce + iVar15) = (short)(1 << (bVar1 & 0x1f));
        bVar1 = FUN_0045c1e0(0xc);
        *(ushort *)(&DAT_005794ce + iVar15) =
             *(ushort *)(&DAT_005794ce + iVar15) | (ushort)(1 << (bVar1 & 0x1f));
        bVar1 = FUN_0045c1e0(0xc);
        *(ushort *)(&DAT_005794ce + iVar15) =
             *(ushort *)(&DAT_005794ce + iVar15) | (ushort)(1 << (bVar1 & 0x1f));
        bVar1 = FUN_0045c1e0(0xc);
        *(ushort *)(&DAT_005794ce + iVar15) =
             *(ushort *)(&DAT_005794ce + iVar15) | (ushort)(1 << (bVar1 & 0x1f)) | 0x38;
        FUN_004481b0(0x26,100,0,0,0);
        *(undefined2 *)(&DAT_00579566 + iVar15) = 0;
        *(undefined2 *)(&DAT_00579566 + iVar14) = 0;
        (&DAT_00579568)[param_2 * 0x80] = 0xffff;
        (&DAT_00579568)[param_1 * 0x80] = 0xffff;
      }
    }
    if (((iVar16 == 5) && ((local_14 & 4) == 0)) &&
       (((DAT_0059aaf8 + 1) * (DAT_0059aaf8 + 1) * 0x19 < local_c && (DAT_00543cfc < 0xffff)))) {
      uVar12 = 0xffffffff;
      (&DAT_005794d0)[iVar15] = 0x80;
      pcVar11 = s_Wealthy_Heiress_004c6fa4;
      do {
        pcVar19 = pcVar11;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar19 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar19;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      iVar16 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar11;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar18 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar18;
      } while (cVar2 != '\0');
      pcVar11 = pcVar19 + -uVar12;
      pcVar19 = pcVar18 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar19 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar19 = pcVar19 + 1;
      }
      FUN_004676e0(param_2,0);
      uVar12 = 0xffffffff;
      (&DAT_0057956e)[param_2 * 0x80] = 0x4e;
      pcVar11 = s_is_playing_your_course_today__If_004d3a14;
      do {
        pcVar19 = pcVar11;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar19 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar19;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      iVar16 = -1;
      pcVar11 = (char *)&DAT_0051a068;
      do {
        pcVar18 = pcVar11;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar18 = pcVar11 + 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar18;
      } while (cVar2 != '\0');
      pcVar11 = pcVar19 + -uVar12;
      pcVar19 = pcVar18 + -1;
      for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *pcVar19 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar19 = pcVar19 + 1;
      }
      iVar16 = FUN_0040cb00(0x80002108,1,param_2);
      if (iVar16 == 0) {
        (&DAT_005794d0)[iVar15] = 0;
      }
      else {
        (&DAT_005794d1)[iVar15] = 6;
        bVar1 = FUN_0045c1e0(0xc);
        *(short *)(&DAT_005794ce + iVar15) = (short)(1 << (bVar1 & 0x1f));
        bVar1 = FUN_0045c1e0(0xc);
        *(ushort *)(&DAT_005794ce + iVar15) =
             *(ushort *)(&DAT_005794ce + iVar15) | (ushort)(1 << (bVar1 & 0x1f));
        bVar1 = FUN_0045c1e0(0xc);
        *(ushort *)(&DAT_005794ce + iVar15) =
             *(ushort *)(&DAT_005794ce + iVar15) | (ushort)(1 << (bVar1 & 0x1f));
        bVar1 = FUN_0045c1e0(0xc);
        *(ushort *)(&DAT_005794ce + iVar15) =
             *(ushort *)(&DAT_005794ce + iVar15) | (ushort)(1 << (bVar1 & 0x1f)) | 0x300;
        FUN_004481b0(0x26,100,0,0,0);
        *(undefined2 *)(&DAT_00579566 + iVar15) = 0;
        *(undefined2 *)(&DAT_00579566 + iVar14) = 0;
        (&DAT_00579568)[param_2 * 0x80] = 0xffff;
        (&DAT_00579568)[param_1 * 0x80] = 0xffff;
      }
    }
  }
  if ((&DAT_005794d0)[iVar15] != '\0') {
    iVar16 = 0;
    do {
      if (((int)*(short *)(&DAT_005794ce + iVar15) & 1 << ((byte)iVar16 & 0x1f)) != 0) {
        cVar2 = FUN_0045c1e0(8);
        (&DAT_005795a8)[iVar15 + iVar16] = cVar2 + '\x01';
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < 0xc);
  }
  sVar3 = (short)iVar17 + 2;
  (&DAT_0057955c)[param_2 * 0x80] = sVar3;
  (&DAT_0057955c)[param_1 * 0x80] = sVar3;
  if ((&DAT_00571ff4)[DAT_0059bf90 * 0x2e] == '\x03') {
    (&DAT_0057955c)[local_4 * 0x80] = (&DAT_0057955c)[local_4 * 0x80] + 1;
  }
  sVar3 = (short)iVar17 * 2;
  *(short *)(&DAT_0057956c + iVar15) = sVar3;
  *(short *)(&DAT_0057956c + iVar14) = sVar3;
  if (((&DAT_005794c8)[param_1 * 0x40] & 0x100000) == 0) {
    (&DAT_005794f0)[iVar15] = (char)iVar17 << 1;
  }
  else {
    (&DAT_005794f0)[iVar14] = (char)iVar17 << 1;
  }
  uVar4 = FUN_0045c1e0(DAT_00561258);
  if (((6 < uVar4) && (((&DAT_005794c8)[param_1 * 0x40] & 0x20000) == 0)) ||
     ((&DAT_005794d0)[iVar15] != '\0')) {
    (&DAT_00579568)[param_2 * 0x80] = 0xffff;
    (&DAT_00579568)[param_1 * 0x80] = 0xffff;
    *(undefined2 *)(&DAT_00579566 + iVar15) = 0;
    *(undefined2 *)(&DAT_00579566 + iVar14) = 0;
  }
  if (iVar17 < 2) {
    iVar16 = FUN_0046c940(param_1);
    iVar7 = FUN_0046c940(param_2);
    if (iVar16 == iVar7) {
      *(undefined2 *)(&DAT_00579566 + iVar15) = 2;
      *(undefined2 *)(&DAT_00579566 + iVar14) = 2;
    }
  }
  if (iVar17 == 5) {
    *(undefined2 *)(&DAT_00579566 + iVar15) = 3;
    *(undefined2 *)(&DAT_00579566 + iVar14) = 3;
  }
  else if (iVar17 < 4) goto LAB_0045eef3;
  iVar17 = FUN_0046c940(param_1);
  iVar16 = FUN_0046c940(param_2);
  if (((iVar17 != iVar16) && (((&DAT_00579570)[iVar14] & 0x10) != 0)) &&
     (((&DAT_00579570)[iVar15] & 0x10) != 0)) {
    *(undefined2 *)(&DAT_00579566 + iVar15) = 1;
    *(undefined2 *)(&DAT_00579566 + iVar14) = 1;
  }
LAB_0045eef3:
  (&DAT_00579515)[iVar14] = *(undefined1 *)(&DAT_0057955c + param_1 * 0x80);
  (&DAT_00579515)[iVar15] = *(undefined1 *)(&DAT_0057955c + param_2 * 0x80);
  if ((&DAT_005794d0)[iVar14] == '\0') {
    (&DAT_00584a0a)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x16] =
         (&DAT_00584a0a)[(short)(&DAT_0057956e)[param_1 * 0x80] * 0x16] + 1;
  }
  if ((&DAT_005794d0)[iVar15] == '\0') {
    (&DAT_00584a0a)[(short)(&DAT_0057956e)[param_2 * 0x80] * 0x16] =
         (&DAT_00584a0a)[(short)(&DAT_0057956e)[param_2 * 0x80] * 0x16] + 1;
  }
  (&DAT_005794c8)[param_1 * 0x40] = (&DAT_005794c8)[param_1 * 0x40] & 0xfffdffff;
  uVar12 = DAT_00834170 & 0x40;
  (&DAT_005794c8)[param_2 * 0x40] = (&DAT_005794c8)[param_2 * 0x40] & 0xfffdffff;
  if (uVar12 != 0) {
    FUN_00467a00(param_1,0x3d,(int)(short)(&DAT_0057955c)[param_1 * 0x80]);
    FUN_00467a00(param_2,0x3d,(int)(short)(&DAT_0057955c)[param_2 * 0x80]);
    iVar14 = (param_2 & 0xffe) * 0x100;
    (&DAT_0057953c)[iVar14] = (&DAT_0057953c)[iVar14] + '\n';
    (&DAT_0057963c)[(param_1 & 0xffe) * 0x100] = (&DAT_0057963c)[(param_1 & 0xffe) * 0x100] + '\b';
  }
  return;
}

