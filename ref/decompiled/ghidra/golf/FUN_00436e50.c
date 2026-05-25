/* Ghidra decompiled: golf.exe */
/* Function: FUN_00436e50 @ 0x00436E50 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00436e50(undefined4 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  int local_c;
  int local_8;
  
  FUN_00473f60(&DAT_0058b4c4,PTR_DAT_004c1570,0xd7,0x1da,0);
  if (0 < DAT_005aa558) {
    if (DAT_005aa6c0 < 7) {
      DAT_005aa558 = DAT_005aa558 + -2;
    }
    if (0 < DAT_005aa558) {
      FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c7af8,(int)DAT_004c7afa,1,1,1,0);
    }
  }
  if (8 < DAT_005aa6c0) {
    FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c7afc,(int)DAT_004c7afe,1,1,1,0);
  }
  local_c = FUN_00436b00(param_1,param_2);
  if (local_c == 2) {
    if (DAT_005aa558 == 0) {
      local_c = -1;
    }
    else {
LAB_00436fae:
      iVar12 = (int)(&DAT_004c7af2)[local_c * 2];
      iVar7 = (int)(&DAT_004c7af0)[local_c * 2];
LAB_00437015:
      FUN_00473cb0(PTR_DAT_004c1570,iVar7,iVar12,1,1,1,0);
    }
  }
  else if (local_c == 3) {
    if (8 < DAT_005aa6c0) goto LAB_00436fae;
    local_c = -1;
  }
  else if (local_c != -1) {
    if (local_c < 0) {
      if (local_c == -2) {
        iVar12 = 0x1db;
        iVar7 = 0x10e;
      }
      else {
        if (local_c != -3) goto LAB_0043701a;
        iVar12 = 0x1ee;
        iVar7 = 0xf0;
      }
    }
    else {
      if (local_c < 8) goto LAB_00436fae;
      iVar12 = (int)(&DAT_004c7af2)[local_c * 2];
      iVar7 = (int)(&DAT_004c7af0)[local_c * 2];
    }
    goto LAB_00437015;
  }
LAB_0043701a:
  FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c7af4,(int)DAT_004c7af6,1,1,1,0);
  if (DAT_004c7aec != -1) {
    FUN_00473cb0(PTR_DAT_004c1570,(int)*(short *)(&DAT_004c7b10 + DAT_004c7aec * 4),
                 (int)*(short *)(&DAT_004c7b12 + DAT_004c7aec * 4),1,1,1,0);
    iVar7 = *(int *)(&DAT_005aa5b8 + DAT_004c7aec * 4) * 0x4c;
    cVar2 = (&DAT_00585863)[iVar7];
    iVar12 = (-(uint)(cVar2 != -4) & 0xfffffffe) + 6;
    if ((cVar2 == -4) && (((&DAT_00585862)[iVar7] & 8) != 0)) {
      iVar12 = 8;
    }
    switch(cVar2) {
    case -5:
      uVar8 = 0x800003ff;
      break;
    case -4:
      uVar8 = 0x80007ff0;
      break;
    case -3:
      uVar8 = 0x80000018;
      break;
    default:
      uVar8 = 0x80006318;
    }
    DAT_004c2844 = DAT_005a34e8;
    FUN_00407c60((char)(&DAT_00585860)[iVar7] * 0x400 + 0x200,
                 (char)(&DAT_00585861)[iVar7] * 0x400 + 0x200,iVar12 * 0x19,uVar8);
    DAT_004c2844 = 4;
  }
  local_8 = 0;
  iVar12 = -DAT_005aa558;
  pcVar13 = &DAT_00585863;
  iVar7 = DAT_004c7aec;
  DAT_005aa6c0 = iVar12;
  do {
    cVar2 = *pcVar13;
    if (((cVar2 < '\0') && (pcVar13[-1] != 0)) && (cVar2 != -6)) {
      if (iVar12 < 0) {
        iVar12 = iVar12 + 1;
        DAT_005aa6c0 = iVar12;
      }
      else if (iVar12 < 8) {
        iVar9 = DAT_005685f4 - (uint)(byte)pcVar13[3];
        iVar7 = -(int)cVar2 + -2;
        if ((pcVar13[-1] & 8U) != 0) {
          iVar7 = -(int)cVar2 + 2;
        }
        sVar5 = *(short *)(pcVar13 + 0xb);
        if (sVar5 < 0xb) {
          iVar14 = 0x20e;
        }
        else {
          iVar14 = 0x216;
          if (sVar5 == 0xc) {
            iVar14 = 0x21e;
          }
        }
        iVar6 = (&DAT_0053f3e8)[iVar14 + iVar7];
        if (((int)*(short *)(pcVar13 + 9) % iVar6 == 0) && (sVar5 == 0xc)) {
          pcVar13[0xb] = '\v';
          pcVar13[0xc] = '\0';
        }
        sVar5 = *(short *)(&DAT_004c7b10 + iVar12 * 4);
        sVar4 = *(short *)(&DAT_004c7b12 + iVar12 * 4);
        _DAT_005aa6c4 =
             FUN_0043d6f0(iVar14 + iVar7,(int)*(short *)(pcVar13 + 9) % iVar6,iVar9 - 2U & 7);
        FUN_004628d0(sVar5 + 0x1e,sVar4 + 0x18,sVar4 + 0x18,0x1e,0x28,_DAT_005aa6c4,4,iVar7 + 0x82);
        iVar7 = DAT_004c7aec;
        *(int *)(&DAT_005aa5b8 + DAT_005aa6c0 * 4) = local_8;
        iVar12 = DAT_005aa6c0 + 1;
        DAT_005aa6c0 = iVar12;
      }
      else {
        iVar12 = iVar12 + 1;
        DAT_005aa6c0 = iVar12;
      }
    }
    pcVar13 = pcVar13 + 0x4c;
    local_8 = local_8 + 1;
  } while ((int)pcVar13 < 0x586b63);
  if (iVar7 == -1) {
    FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c7b00,(int)DAT_004c7b02,1,1,1,0);
    FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c7b04,(int)DAT_004c7b06,1,1,1,0);
    FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c7b08,(int)DAT_004c7b0a,1,1,1,0);
    goto LAB_00437688;
  }
  iVar7 = *(int *)(&DAT_005aa5b8 + iVar7 * 4);
  iVar12 = iVar7 * 0x4c;
  if ((&DAT_00585862)[iVar12] == '\0') {
    DAT_004c7aec = 0xffffffff;
    return;
  }
  FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c7b00,(int)DAT_004c7b02,1,1,1,0);
  if (DAT_004c2e10 == iVar7) {
    FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c7b00,(int)DAT_004c7b02,1,1,1,0);
  }
  FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c7b04,(int)DAT_004c7b06,1,1,1,0);
  FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c7b08,(int)DAT_004c7b0a,1,1,1,0);
  cVar2 = (&DAT_00585863)[iVar12];
  bVar3 = (&DAT_00585862)[iVar12];
  DAT_0051a068._0_1_ = 0;
  FUN_00467600(iVar7);
  FUN_00404b70(&DAT_0051a068,700,0x216,0x80000000);
  FUN_004762d0(&DAT_00519fd8,0,0,0);
  uVar10 = 0xffffffff;
  pcVar13 = s_Hired__004c849c;
  do {
    pcVar16 = pcVar13;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar16 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar16;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  pcVar13 = pcVar16 + -uVar10;
  pcVar16 = (char *)&DAT_0051a068;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar16 = pcVar16 + 4;
  }
  sVar5 = (&DAT_00585872)[iVar7 * 0x26];
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar16 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar16 = pcVar16 + 1;
  }
  FUN_0040d7b0((int)sVar5 << 10);
  FUN_00404b70(&DAT_0051a068,700,0x222,0x80000000);
  uVar10 = 0xffffffff;
  pcVar13 = &DAT_004c8494;
  do {
    pcVar16 = pcVar13;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar16 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar16;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  sVar5 = (&DAT_00585874)[iVar7 * 0x26];
  pcVar13 = pcVar16 + -uVar10;
  pcVar16 = (char *)&DAT_0051a068;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar16 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar16 = pcVar16 + 1;
  }
  FUN_0042dc00(sVar5 * 100);
  FUN_00404b70(&DAT_0051a068,700,0x22e,0x80000000);
  switch(((bVar3 & 8) >> 3) - (cVar2 * 2 + 4)) {
  case 0:
    uVar10 = 0xffffffff;
    pcVar13 = s_Players_greeted__004c8480;
    do {
      pcVar16 = pcVar13;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar13 = pcVar16 + -uVar10;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar16 = pcVar16 + 4;
    }
    break;
  case 1:
    pcVar13 = s_Players_cheered__004c846c;
    goto LAB_0043754c;
  case 2:
    uVar10 = 0xffffffff;
    pcVar13 = s_Players_rushed__004c845c;
    do {
      pcVar16 = pcVar13;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar13 = pcVar16 + -uVar10;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar16 = pcVar16 + 4;
    }
    break;
  case 3:
    pcVar13 = s_Slackers_intimidated__004c8444;
    goto LAB_0043754c;
  case 4:
    uVar10 = 0xffffffff;
    pcVar13 = s_Weeds_destroyed__004c8430;
    do {
      pcVar16 = pcVar13;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar13 = pcVar16 + -uVar10;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar16 = pcVar16 + 4;
    }
    break;
  case 5:
    pcVar13 = s_Weeds_eradicated__004c841c;
    goto LAB_0043754c;
  case 6:
    uVar10 = 0xffffffff;
    pcVar13 = s_Beverages_served__004c8408;
    do {
      pcVar16 = pcVar13;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar13 = pcVar16 + -uVar10;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar16 = pcVar16 + 4;
    }
    break;
  case 7:
    pcVar13 = s_Satisfied_customers__004c83f0;
LAB_0043754c:
    uVar10 = 0xffffffff;
    do {
      pcVar16 = pcVar13;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar13 = pcVar16 + -uVar10;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar16 = pcVar16 + 4;
    }
    break;
  default:
    goto switchD_004374a0_default;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar16 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar16 = pcVar16 + 1;
  }
switchD_004374a0_default:
  FUN_00404b70(&DAT_0051a068,700,0x23c,0x80000000);
  FUN_004762d0(&DAT_0051b360,0,0,0);
  DAT_0051a068._0_1_ = 0;
  pcVar13 = (char *)FUN_004ad425((int)(short)(&DAT_00585876)[iVar7 * 0x26],&DAT_005a9f6c,10);
  uVar10 = 0xffffffff;
  do {
    pcVar16 = pcVar13;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar16 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar16;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  iVar7 = -1;
  pcVar13 = (char *)&DAT_0051a068;
  do {
    pcVar15 = pcVar13;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar15 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar15;
  } while (cVar2 != '\0');
  pcVar13 = pcVar16 + -uVar10;
  pcVar16 = pcVar15 + -1;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar16 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar16 = pcVar16 + 1;
  }
  FUN_00404b70(&DAT_0051a068,700,0x248,0x80000000);
  FUN_0040d7b0(DAT_00834170);
LAB_00437688:
  if (0x13 < DAT_005aa6c0 + DAT_005aa558) {
    FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c7af0,(int)DAT_004c7af2,1,1,1,0);
  }
  if (DAT_0059ca54 == 0) {
    FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c7af0,(int)DAT_004c7af2,1,1,1,0);
    if (DAT_005aa6c0 + DAT_005aa558 < 0x14) {
      FUN_0040aa80();
    }
    else {
      FUN_004481b0(0x18,100,0,0,0);
    }
    DAT_0059ca54 = 1;
  }
  if (local_c != DAT_005a9f54) {
    DAT_005aa554 = 0;
    DAT_005a9f54 = local_c;
    return;
  }
  DAT_005aa554 = DAT_005aa554 + 1;
  if (local_c == -1) {
    return;
  }
  if (DAT_005aa554 < 0xb) {
    return;
  }
  DAT_0051a068._0_1_ = 0;
  switch(local_c) {
  case 0:
    pcVar13 = s_Hire_employees_004c83e0;
    break;
  case 1:
    uVar10 = 0xffffffff;
    pcVar13 = s_View_employees_004c83d0;
    do {
      pcVar16 = pcVar13;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar13 = pcVar16 + -uVar10;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar16 = pcVar16 + 4;
    }
    goto LAB_0043780d;
  case 4:
    pcVar13 = s_Move_this_employee_004c83bc;
    break;
  case 5:
    pcVar13 = s_Fire_this_employee_004c8390;
    break;
  case 6:
    uVar10 = 0xffffffff;
    pcVar13 = s_Rename_this_employee_004c83a4;
    do {
      pcVar16 = pcVar13;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar13 = pcVar16 + -uVar10;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar16 = pcVar16 + 4;
    }
    goto LAB_0043780d;
  case -3:
    uVar10 = 0xffffffff;
    pcVar13 = s_Gary_Golf_004d6098;
    do {
      pcVar16 = pcVar13;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar13 + 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar13 = pcVar16 + -uVar10;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar16 = pcVar16 + 4;
    }
    goto LAB_0043780d;
  case -2:
    pcVar13 = s_Golfers_004c5dc8;
    break;
  default:
    goto switchD_0043776b_caseD_ffffffff;
  }
  uVar10 = 0xffffffff;
  do {
    pcVar16 = pcVar13;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar16 = pcVar13 + 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar16;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  pcVar13 = pcVar16 + -uVar10;
  pcVar16 = (char *)&DAT_0051a068;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar13;
    pcVar13 = pcVar13 + 4;
    pcVar16 = pcVar16 + 4;
  }
LAB_0043780d:
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar16 = *pcVar13;
    pcVar13 = pcVar13 + 1;
    pcVar16 = pcVar16 + 1;
  }
switchD_0043776b_caseD_ffffffff:
  FUN_00432620(param_1,param_2 + -5);
  return;
}

