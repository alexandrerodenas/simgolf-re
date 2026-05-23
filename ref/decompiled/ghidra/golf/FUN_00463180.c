/* Ghidra decompiled: golf.exe */
/* Function: FUN_00463180 @ 0x00463180 */
/* Body size: 464 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00463180(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 int param_7)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  bool bVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 *puVar20;
  int local_40;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c [11];
  
  iVar10 = param_7;
  local_38 = 4;
  local_2c[0] = 0;
  local_34 = (DAT_00834170 + param_1 * 0x11) % 1000;
  iVar12 = param_7 * 0x10;
  iVar11 = (int)(DAT_004c2844 * 0x14 + (DAT_004c2844 * 0x14 >> 0x1f & 3U)) >> 2;
  iVar13 = (int)(short)(&DAT_0058bcba)[param_7 * 8];
  param_7 = (int)(short)(&DAT_0058bcbc)[param_7 * 8];
  local_2c[1] = 100;
  local_2c[2] = 0xb4;
  local_2c[3] = 300;
  local_2c[4] = 0x1ae;
  local_2c[5] = 500;
  local_2c[6] = 0x226;
  local_2c[7] = 700;
  local_2c[8] = 0x32a;
  local_2c[9] = 900;
  local_2c[10] = 1000;
  iVar4 = 0;
  piVar8 = local_2c;
  do {
    if (local_34 < *piVar8) {
      local_34 = local_34 - local_2c[iVar4 + -1];
      break;
    }
    iVar4 = iVar4 + 1;
    piVar8 = piVar8 + 1;
  } while (iVar4 < 0xb);
  local_2c[0] = -0x30333537;
  iVar4 = param_7 + iVar13 * 0x32;
  local_2c[1] = 0xe5ded8d3;
  local_2c[2] = 0xfc00f6ed;
  local_2c[3] = 0xfcf9f8f9;
  local_2c[4] = 0xfe00;
  local_2c[5] = 0;
  if ((((&DAT_0053caf0)[iVar4] & 0x4000) != 0) &&
     (local_40 = (int)*(char *)((int)local_2c + (uint)(byte)(&DAT_00578804)[iVar4]),
     0x13 < (byte)(&DAT_00578804)[iVar4])) {
    (&DAT_0053caf0)[iVar4] = (&DAT_0053caf0)[iVar4] & 0xbfff;
  }
  FUN_004762d0(&DAT_0051b360,0,0,0);
  iVar3 = param_2;
  iVar14 = param_1 + 0x90;
  switch(param_1) {
  case 3:
    uVar6 = 0;
    if ((((&DAT_0053caf0)[iVar4] & 0x4000) != 0) &&
       (uVar6 = (uint)(byte)(&DAT_00578804)[iVar4], DAT_0053f9f4 <= (int)uVar6)) {
      uVar6 = 0;
      (&DAT_0053caf0)[iVar4] = (&DAT_0053caf0)[iVar4] & 0xbfff;
    }
    DAT_00838204 = FUN_0043d6f0(0x183,uVar6,
                                (uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2 & 3);
    FUN_00462a30(param_3,param_4,param_4,0x1e,0x28,DAT_00838204,4,0x3d);
    return;
  case 4:
    iVar10 = (&DAT_0058bcc0)[iVar10 * 4];
    param_2 = (iVar13 + DAT_00834170) % (int)(&DAT_0053f3e8)[iVar10 + 0x168];
    if (iVar10 == 3) {
      uVar6 = (uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4;
    }
    else {
      uVar6 = (uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2;
    }
    DAT_00838204 = FUN_0043d6f0(iVar10 + 0x168,param_2,uVar6 & 3);
    if (((&DAT_0053caf0)[iVar4] & 0x4000) == 0) {
      FUN_00462a30(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,4,iVar10 + 100);
      return;
    }
    puVar20 = (undefined4 *)(&DAT_0081ec70 + iVar10 * 0x58);
    param_2 = (uint)(byte)(&DAT_00578804)[iVar4];
    fVar19 = (float)param_2 * (float)_DAT_004ba480 + (float)_DAT_004ba478;
    goto LAB_00465055;
  case 5:
    iVar10 = FUN_0040df80(iVar13,param_7);
    param_2 = iVar10 * 0x10;
    if ((&DAT_0058bcc0)[iVar10 * 4] == 0) {
      DAT_0051a068._0_1_ = 0;
      pcVar7 = (char *)FUN_004ad425((&DAT_0058bcc4)[iVar10 * 4],&DAT_00834164,10);
      uVar6 = 0xffffffff;
      do {
        pcVar16 = pcVar7;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar16 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar16;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar10 = -1;
      pcVar7 = (char *)&DAT_0051a068;
      do {
        pcVar15 = pcVar7;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar15 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar15;
      } while (cVar1 != '\0');
      pcVar7 = pcVar16 + -uVar6;
      pcVar16 = pcVar15 + -1;
      for (uVar9 = uVar6 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar16 = pcVar16 + 4;
      }
      bVar2 = DAT_0059e7b8 & 0x20;
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar16 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar16 = pcVar16 + 1;
      }
      if (bVar2 != 0) {
        FUN_00404bc0(&DAT_0051a068,param_3,param_4 + 0xe,0x800023e8);
      }
      uVar5 = FUN_0040e5b0(*(undefined4 *)((int)&DAT_0058bcc4 + param_2));
      switch(uVar5) {
      case 0:
        DAT_00838204 = FUN_0043d6f0(0x1c8,0,DAT_005685f4 / 2 + iVar13 & 3);
        uVar5 = 0xf;
        break;
      case 1:
        DAT_00838204 = FUN_0043d6f0(0x1c9,0,DAT_005685f4 / 2 + iVar13 & 3);
        uVar5 = 0x13;
        goto LAB_004653af;
      case 2:
        DAT_00838204 = FUN_0043d6f0(0x1ca,0,DAT_005685f4 / 2 + iVar13 & 3);
        FUN_00462a30(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,4,0x60);
        return;
      case 4:
        FUN_004628d0(param_3 - DAT_004c2840,param_4,param_4,0x13,0xd,&DAT_0053ba48,8,0xffffffff);
        FUN_004628d0(DAT_004c2840 + param_3,param_4,param_4,0x13,0xd,&DAT_0053ba48,8,0xffffffff);
        FUN_004628d0(param_3,param_4 - iVar11,param_4,0x13,0xd,&DAT_0053ba48,8,0xffffffff);
        FUN_004628d0(param_3,iVar11 + param_4,param_4,0x13,0xd,&DAT_0053ba48,8,0xffffffff);
      case 3:
        DAT_00838204 = FUN_0043d6f0(0x1ca,0,DAT_005685f4 / 2 + iVar13 & 3);
        uVar5 = 0x60;
        break;
      default:
        goto LAB_00465504;
      }
      FUN_00462a30(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,4,uVar5);
    }
    break;
  case 6:
    uVar6 = (DAT_005a8c50 != 2) - 1 & 3;
    DAT_00838204 = FUN_0043d6f0(uVar6 + 0x1f1,DAT_00834170 % *(int *)(&DAT_0053fbac + uVar6 * 4),
                                DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
    iVar10 = param_6;
    uVar5 = param_5;
    if ((DAT_005a34e0 == '\x01') || (DAT_005a34e0 == '\x03')) {
      iVar11 = 0;
    }
    else {
      iVar11 = iVar11 + param_6;
    }
    FUN_00462a30(param_5,param_6,iVar11,0x28,0x28,DAT_00838204,4,0x14);
    DAT_00838204 = FUN_0043d6f0(uVar6 + 0x1f0,0,
                                DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
    FUN_00462a30(uVar5,iVar10,iVar10,0x28,0x28,DAT_00838204,4,0x14);
    if (uVar6 != 0) {
      FUN_0042f940(iVar13 + 1,param_7 + 1,&param_1,&param_2);
      DAT_00838204 = FUN_0043d6f0(0x1f5,DAT_00834170 % DAT_0053fbbc,
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      if (DAT_005a34e0 == '\x01') {
        uVar18 = 0x78;
        uVar5 = 0x78;
      }
      else {
        uVar18 = 0x28;
        uVar5 = 0x28;
      }
      FUN_00462a30(param_1,param_2,param_2,uVar5,uVar18,DAT_00838204,4,0x14);
    }
    if (0 < DAT_005a8c50 * 2 + 3) {
      iVar4 = 0;
      iVar10 = 3;
      do {
        iVar11 = FUN_00467270(iVar4,iVar10 * DAT_004c2844 * 2);
        iVar11 = iVar11 + param_3;
        iVar12 = FUN_004672b0(iVar4,iVar10 * DAT_004c2844);
        iVar12 = iVar12 + param_4;
        DAT_00838204 = FUN_0043d6f0(0x191,DAT_00834170 % DAT_0053fa2c,0);
        FUN_00462a30(iVar11,iVar12,iVar12,0x28,0x28,DAT_00838204,4,0x14);
        iVar4 = iVar4 + 0x4aaaaaa6;
        iVar11 = iVar10 + -2;
        iVar10 = iVar10 + 1;
      } while (iVar11 < DAT_005a8c50 * 2 + 3);
      return;
    }
    break;
  case 7:
    if (((&DAT_0053caf0)[iVar4] & 0x4000) == 0) {
      if (10 < DAT_005685f0) {
        if ((DAT_005a34e0 != '\x02') && (DAT_005a34e0 != '\x01')) {
          DAT_00838204 = FUN_0043d6f0(0x1ef,0,(uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2
                                              & 3);
          FUN_004628d0(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,4,0x97);
        }
        DAT_00838204 = FUN_0043d6f0(0x1ee,DAT_00834170 % DAT_0053fb98,
                                    DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
        FUN_00462a30(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,4,0x97);
        if (DAT_005a34e0 == '\x02') {
          DAT_00838204 = FUN_0043d6f0(0x1ef,DAT_00834170 % DAT_0053fba4,
                                      DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
          FUN_00462a30(param_3,param_4,param_4 + 1,0x8c,0x8c,DAT_00838204,4,0x97);
        }
        if (DAT_005a34e0 != '\0') {
          return;
        }
        DAT_00838204 = FUN_0043d6f0(0x1d0,DAT_00834170 % DAT_0053fb28,
                                    DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
        FUN_00462a30(param_3,param_4,param_4 + 1,0x8c,0x8c,DAT_00838204,4,0x97);
        return;
      }
      if (DAT_005a34e0 != '\x02') {
        DAT_00838204 = FUN_0043d6f0(0x1ed,0,(uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2 &
                                            3);
        FUN_004628d0(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,4,0x10);
      }
      DAT_00838204 = FUN_0043d6f0(0x1ec,DAT_00834170 % DAT_0053fb98,
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      FUN_00462a30(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,4,0x10);
      if (DAT_005a34e0 != '\0') {
        return;
      }
      DAT_00838204 = FUN_0043d6f0(0x1d3,DAT_00834170 % DAT_0053fb34,
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      uVar5 = 0x10;
LAB_004653af:
      FUN_00462a30(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,4,uVar5);
      return;
    }
    DAT_00838204 = FUN_0043d6f0(0x1ec,0,(uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2 & 3);
    bVar2 = (&DAT_00578804)[iVar4];
    puVar20 = (undefined4 *)&DAT_0081cf90;
    goto LAB_004634f3;
  case 8:
    if (param_2 == 0) {
      iVar14 = 0xe;
    }
    iVar10 = param_2;
    if ((&DAT_0081b490)[param_2 * 0x32] == '\0') {
      iVar10 = 0;
      local_38 = 5;
    }
    if (((&DAT_0053caf0)[iVar4] & 0x4000) == 0) {
      if (((&DAT_0081b526)[iVar10 * 0x32] != '\0') && ((DAT_005a34e0 != '\x02' || (iVar10 == 0)))) {
        DAT_00838204 = FUN_0043d6f0(iVar10 + 0x1e3,DAT_00834170 % (int)(&DAT_0053fb74)[iVar10],
                                    (uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2 & 3);
        if ((DAT_005a34e0 == '\x02') && (iVar10 != 0)) {
          iVar11 = iVar11 + param_4;
        }
        else {
          iVar11 = 0;
        }
        FUN_00462a30(param_3,param_4,iVar11,0x8c,0x8c,DAT_00838204,local_38,iVar14);
      }
      DAT_00838204 = FUN_0043d6f0(iVar10 + 0x1e0,DAT_00834170 % (int)(&DAT_0053fb68)[iVar10],
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      FUN_00462a30(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,local_38,iVar14);
      if (DAT_005a34e0 == '\0') {
        if (iVar10 == 0) {
          return;
        }
        DAT_00838204 = FUN_0043d6f0(0x1e2,DAT_00834170 % DAT_0053fb70,
                                    DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
        FUN_00462a30(param_3,param_4,param_4 + 1,0x8c,0x8c,DAT_00838204,4,iVar14);
        DAT_00838204 = FUN_0043d6f0(0x1e5,DAT_00834170 % DAT_0053fb7c,
                                    DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
        FUN_00462a30(param_3,param_4,param_4 + 1,0x8c,0x8c,DAT_00838204,4,iVar14);
      }
      if (DAT_005a34e0 == '\x02') {
        if (iVar10 != 0) {
          return;
        }
        DAT_00838204 = FUN_0043d6f0(0x1e4,DAT_00834170 % DAT_0053fb78,
                                    DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
        FUN_00462a30(param_3,param_4,param_4 + 1,0x8c,0x8c,DAT_00838204,4,iVar14);
      }
      if (DAT_005a34e0 != '\x03') {
        return;
      }
      if (iVar10 == 0) {
        uVar6 = DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12];
        uVar5 = 0x1e2;
        iVar10 = DAT_0053fb70;
      }
      else {
        uVar6 = DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12];
        uVar5 = 0x1e5;
        iVar10 = DAT_0053fb7c;
      }
      DAT_00838204 = FUN_0043d6f0(uVar5,DAT_00834170 % iVar10,uVar6 & 3);
LAB_0046434a:
      FUN_00462a30(param_3,param_4,param_4 + 2,0x8c,0x8c,DAT_00838204,local_38,iVar14);
      return;
    }
    DAT_00838204 = FUN_0043d6f0(iVar10 + 0x1e0,0,
                                (uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2 & 3);
    puVar20 = &DAT_0081ca10 + iVar14 * 0x16;
    param_2 = (uint)(byte)(&DAT_00578804)[iVar4];
    fVar19 = (float)param_2;
    goto LAB_00465044;
  case 9:
    if (param_2 == 0) {
      iVar14 = 0x1c;
    }
    if (((&DAT_0053caf0)[iVar4] & 0x4000) == 0) {
      if ((DAT_005a34e0 != '\0') && (DAT_005a34e0 != '\x01')) {
        DAT_00838204 = FUN_0043d6f0(param_2 + 0x1d7,
                                    DAT_00834170 % *(int *)(&DAT_0053fb44 + param_2 * 4),
                                    (uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2 & 3);
        if (DAT_005a34e0 == '\x02') {
          iVar10 = param_4 + 1;
        }
        else {
          iVar10 = 0;
        }
        FUN_00462a30(param_3,param_4,iVar10,0x8c,0x8c,DAT_00838204,4,iVar14);
      }
      DAT_00838204 = FUN_0043d6f0(iVar3 + 0x1d4,DAT_00834170 % *(int *)(&DAT_0053fb38 + iVar3 * 4),
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      FUN_00462a30(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,4,iVar14);
      if (DAT_005a34e0 != '\x03') {
        return;
      }
      if (iVar3 == 0) {
        return;
      }
      DAT_00838204 = FUN_0043d6f0(0x1d9,DAT_00834170 % DAT_0053fb4c,
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      local_38 = 4;
      goto LAB_0046434a;
    }
    DAT_00838204 = FUN_0043d6f0(param_2 + 0x1d4,0,
                                (uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2 & 3);
    puVar20 = &DAT_0081ca10 + iVar14 * 0x16;
    param_2 = (uint)(byte)(&DAT_00578804)[iVar4];
    fVar19 = (float)param_2;
    goto LAB_00465044;
  case 10:
    if (param_2 == 0) {
      iVar14 = 0x1a;
    }
    iVar10 = param_2 + 5;
    (&DAT_0058bcbe)[iVar12] = 0;
    bVar17 = param_2 != -5;
    param_2 = 0;
    if (bVar17 && -1 < iVar10) {
      do {
        iVar10 = 0;
        if (iVar3 != -5 && -1 < iVar3 + 5) {
          param_6 = param_2 + iVar13;
          param_1 = param_6 * 0x400;
          do {
            iVar4 = FUN_0042fb90(param_1 + 0x200,(param_7 + iVar10) * 0x400 + 0x200,&param_3,
                                 &param_4,0);
            if (iVar4 != 0) {
              if (param_2 == 0) {
                if (iVar10 == 0) {
                  DAT_00838204 = FUN_0043d6f0(iVar3 + 0x1b6,0,
                                              DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12]
                                              & 3);
                  FUN_00462a30(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,4,iVar14);
                  if ((iVar3 != 0) && (DAT_005a34e0 != '\x01')) {
                    DAT_00838204 = FUN_0043d6f0(0x1bf,DAT_00834170 % DAT_0053fae4,
                                                DAT_005685f4 / 2 +
                                                (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
                    FUN_00462a30(param_3,param_4,param_4 + 1,0x8c,0x8c,DAT_00838204,4,iVar14);
                  }
                }
                else {
                  DAT_00838204 = FUN_0043d6f0((-(uint)(iVar3 != 0) & 8) + 0x1b8,0,
                                              DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12]
                                              & 3);
                  FUN_00462a30(param_3,param_4,param_4,0x28,0x28,DAT_00838204,4,iVar14);
                  DAT_00838204 = FUN_0043d6f0((-(uint)(iVar3 != 0) & 8) + 0x1b9,0,
                                              DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12]
                                              & 3);
                  FUN_004628d0(param_3,param_4,param_4,0x28,0x28,DAT_00838204,4,iVar14);
                }
              }
              else {
                iVar4 = param_7;
                if (iVar10 != 0) {
                  if (iVar10 != iVar3 + 4) goto LAB_00464816;
                  iVar4 = param_7 + 5 + iVar3;
                }
                FUN_0042fb90(param_1 + 0x200,iVar4 << 10,&param_3,&param_4,0);
                DAT_00838204 = FUN_0043d6f0(0x1be,0,DAT_005685f4 / 2 +
                                                    (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
                FUN_00462a30(param_3,param_4,param_4,0x28,0x28,DAT_00838204,4,0x1a);
                iVar4 = param_7;
                if (iVar10 != 0) {
                  iVar4 = param_7 + 5 + iVar3;
                }
                FUN_0042fb90(param_1,iVar4 << 10,&param_3,&param_4,0);
                FUN_00462a30(param_3,param_4,param_4,0x28,0x28,DAT_00838204,4,0x1a);
              }
LAB_00464816:
              if (*(char *)((int)&DAT_005722e8 + param_7 + iVar10 + param_6 * 0x32) == '\x01') {
                DAT_00838204 = FUN_0043d6f0(0x1bd,(int)(param_2 + iVar10 + DAT_00834170) %
                                                  DAT_0053fadc,0);
                uVar5 = 3;
              }
              else {
                if (iVar10 * 2 + -2 != param_2) goto LAB_00464912;
                if (param_2 == 2) {
                  uVar6 = DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3;
                  uVar5 = 0x1ba;
                }
                else if (param_2 == 4) {
                  uVar6 = DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3;
                  uVar5 = 0x1bb;
                }
                else {
                  if (param_2 != 6) goto LAB_00464912;
                  uVar6 = DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3;
                  uVar5 = 0x1bc;
                }
                DAT_00838204 = FUN_0043d6f0(uVar5,0,uVar6);
                uVar5 = 4;
              }
              FUN_00462a30(param_3,param_4,param_4,0x28,0x28,DAT_00838204,uVar5,0x1a);
            }
LAB_00464912:
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar3 + 5);
        }
        param_2 = param_2 + 1;
        if (iVar3 + 5 <= (int)param_2) {
          return;
        }
      } while( true );
    }
    break;
  case 0xb:
    if (param_2 == 0) {
      iVar14 = 0x17;
    }
    if (((&DAT_0053caf0)[iVar4] & 0x4000) == 0) {
      DAT_00838204 = FUN_0043d6f0(param_2 + 0x1c5,0,
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      FUN_004628d0(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,0xfffffff9,iVar14);
      DAT_00838204 = FUN_0043d6f0(iVar3 + 0x1c2,0,
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      FUN_00462a30(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,4,iVar14);
      if (DAT_005a34e0 == '\0') {
        iVar10 = (-(uint)(iVar3 != 0) & 3) + 0x1c4;
        DAT_00838204 = FUN_0043d6f0(iVar10,DAT_00834170 % (int)(&DAT_0053f3e8)[iVar10],
                                    DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
        FUN_00462a30(param_3,param_4,param_4 + 1,0x8c,0x8c,DAT_00838204,4,iVar14);
      }
      if (DAT_005a34e0 != '\x01') {
        return;
      }
      if (iVar3 == 0) {
        return;
      }
      DAT_00838204 = FUN_0043d6f0(0x1c7,DAT_00834170 % DAT_0053fb04,
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      FUN_00462a30(param_3,param_4,param_4 + 1,0x8c,0x8c,DAT_00838204,4,iVar14);
      return;
    }
    DAT_00838204 = FUN_0043d6f0(param_2 + 0x1c2,0,
                                (uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2 & 3);
    puVar20 = &DAT_0081ca10 + iVar14 * 0x16;
    param_2 = (uint)(byte)(&DAT_00578804)[iVar4];
    fVar19 = (float)param_2;
    goto LAB_00465044;
  case 0xc:
    if (param_2 == 0) {
      iVar14 = 0x1b;
    }
    if (((&DAT_0053caf0)[iVar4] & 0x4000) == 0) {
      if (DAT_005a34e0 != '\0') {
        DAT_00838204 = FUN_0043d6f0(param_2 + 0x1d1,
                                    DAT_00834170 % *(int *)(&DAT_0053fb2c + param_2 * 4),
                                    (uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2 & 3);
        FUN_004628d0(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,4,iVar14);
      }
      DAT_00838204 = FUN_0043d6f0(iVar3 + 0x1ce,0,
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      FUN_00462a30(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,4,iVar14);
      if (DAT_005a34e0 == '\x01') {
        if (iVar3 == 0) {
          return;
        }
        DAT_00838204 = FUN_0043d6f0(0x1d0,DAT_00834170 % DAT_0053fb28,
                                    DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
        FUN_00462a30(param_3,param_4,param_4 + 1,0x8c,0x8c,DAT_00838204,4,iVar14);
        iVar10 = (iVar13 * 7 + DAT_00834170 + param_7 * 0xd) % (DAT_0053fb34 * 10);
        if (DAT_0053fb34 * 4 <= iVar10) {
          iVar10 = (DAT_0053fb34 * 5 - iVar10) + -1;
        }
        uVar5 = FUN_00467130(iVar10,0,DAT_0053fb34 + -1);
        DAT_00838204 = FUN_0043d6f0(0x1d3,uVar5,
                                    DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
        FUN_00462a30(param_3,param_4,param_4 + 2,0x8c,0x8c,DAT_00838204,4,iVar14);
      }
      if (DAT_005a34e0 != '\0') {
        return;
      }
      DAT_00838204 = FUN_0043d6f0(iVar3 + 0x1d1,DAT_00834170 % (int)(&DAT_0053f3e8)[iVar3 + 0x1d1],
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      FUN_004628d0(param_3,param_4,param_4,0x8c,0x8c,DAT_00838204,4,iVar14);
      return;
    }
    DAT_00838204 = FUN_0043d6f0(param_2 + 0x1ce,0,
                                (uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2 & 3);
    puVar20 = &DAT_0081ca10 + iVar14 * 0x16;
    param_2 = (uint)(byte)(&DAT_00578804)[iVar4];
    fVar19 = (float)param_2;
LAB_00465044:
    fVar19 = fVar19 * (float)_DAT_004ba818;
LAB_00465055:
    FUN_00474440(PTR_DAT_004c1570,param_3 + -0x8c,param_4 + (local_40 + -0x1c) * 5,fVar19,puVar20,1)
    ;
    return;
  case 0xd:
    if (param_2 == 0) {
      iVar14 = 0x11;
    }
    if (((&DAT_0053caf0)[iVar4] & 0x4000) != 0) {
      DAT_00838204 = FUN_0043d6f0(param_2 + 0x1e6,0,
                                  (uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2 & 3);
      param_2 = (uint)(byte)(&DAT_00578804)[iVar4];
      FUN_00474440(PTR_DAT_004c1570,param_3 + -0xf0,param_4 + (local_40 + -0x30) * 5,
                   (float)param_2 * (float)_DAT_004ba818,&DAT_0081ca10 + iVar14 * 0x16,1);
      return;
    }
    DAT_00838204 = FUN_0043d6f0(param_2 + 0x1e9,0,
                                DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
    FUN_00462a30(param_3,param_4,0,0xf0,0xf0,DAT_00838204,4,iVar14);
    DAT_00838204 = FUN_0043d6f0(iVar3 + 0x1e6,0,
                                DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
    FUN_00462a30(param_3,param_4,param_4,0xf0,0xf0,DAT_00838204,4,iVar14);
    if (DAT_005a34e0 == '\0') {
      iVar10 = (-(uint)(iVar3 != 0) & 3) + 0x1e8;
      DAT_00838204 = FUN_0043d6f0(iVar10,DAT_00834170 % (int)(&DAT_0053f3e8)[iVar10],
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      FUN_00462a30(param_3,param_4,param_4 + 1,0xf0,0xf0,DAT_00838204,4,iVar14);
    }
    if (DAT_005a34e0 == '\x02') {
      if (iVar3 == 0) {
        return;
      }
      DAT_00838204 = FUN_0043d6f0(0x1eb,DAT_00834170 % DAT_0053fb94,
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      FUN_00462a30(param_3,param_4,param_4 + 1,0xf0,0xf0,DAT_00838204,4,iVar14);
    }
    if (DAT_005a34e0 == '\x01') {
      if (iVar3 == 0) {
        DAT_00838204 = FUN_0043d6f0(0x1e8,DAT_00834170 % DAT_0053fb88,
                                    DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
        FUN_00462a30(param_3,param_4,param_4 + 1,0xf0,0xf0,DAT_00838204,4,iVar14);
      }
      else {
        iVar10 = (iVar13 * 7 + DAT_00834170 + param_7 * 0xd) % (DAT_0053fb94 * 10);
        if (DAT_0053fb94 * 4 <= iVar10) {
          iVar10 = (DAT_0053fb94 * 5 - iVar10) + -1;
        }
        uVar5 = FUN_00467130(iVar10,0,DAT_0053fb94 + -1);
        DAT_00838204 = FUN_0043d6f0(0x1eb,uVar5,
                                    DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
        FUN_00462a30(param_3,param_4,param_4 + 1,0xf0,0xf0,DAT_00838204,4,iVar14);
        DAT_00838204 = FUN_0043d6f0(0x1ea,DAT_00834170 % DAT_0053fb90,
                                    DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
        FUN_00462a30(param_3,param_4,param_4 + 1,0xf0,0xf0,DAT_00838204,4,iVar14);
      }
    }
    if (DAT_005a34e0 == '\x03') {
      if (iVar3 == 0) {
        uVar6 = DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3;
        iVar10 = DAT_00834170 % DAT_0053fb88;
        uVar5 = 0x1e8;
      }
      else {
        uVar6 = DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3;
        iVar10 = DAT_00834170 % DAT_0053fb94;
        uVar5 = 0x1eb;
      }
LAB_00464f9b:
      DAT_00838204 = FUN_0043d6f0(uVar5,iVar10,uVar6);
      FUN_00462a30(param_3,param_4,param_4 + 2,0xf0,0xf0,DAT_00838204,4,iVar14);
      return;
    }
    break;
  case 0xe:
    if (param_2 == 0) {
      iVar14 = 0x12;
    }
    if (((&DAT_0053caf0)[iVar4] & 0x4000) != 0) {
      DAT_00838204 = FUN_0043d6f0(param_2 + 0x1da,0,
                                  (uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2 & 3);
      param_2 = (uint)(byte)(&DAT_00578804)[iVar4];
      FUN_00474440(PTR_DAT_004c1570,param_3 + -0xf0,param_4 + (local_40 + -0x30) * 5,
                   (float)param_2 * (float)_DAT_004ba818,&DAT_0081ca10 + iVar14 * 0x16,1);
      return;
    }
    if (DAT_005a34e0 != '\x02') {
      DAT_00838204 = FUN_0043d6f0(param_2 + 0x1dd,0,
                                  (uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2 & 3);
      FUN_00462a30(param_3,param_4,0,0xf0,0xf0,DAT_00838204,4,iVar14);
    }
    DAT_00838204 = FUN_0043d6f0(iVar3 + 0x1da,0,
                                DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
    FUN_00462a30(param_3,param_4,param_4,0xf0,0xf0,DAT_00838204,4,iVar14);
    if (DAT_005a34e0 == '\0') {
      iVar10 = (-(uint)(iVar3 != 0) & 3) + 0x1dc;
      DAT_00838204 = FUN_0043d6f0(iVar10,DAT_00834170 % (int)(&DAT_0053f3e8)[iVar10],
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      FUN_00462a30(param_3,param_4,param_4 + 1,0xf0,0xf0,DAT_00838204,4,iVar14);
    }
    if (DAT_005a34e0 == '\x02') {
      if (iVar3 == 0) {
        iVar10 = FUN_00463170(local_34,DAT_0053fb58);
      }
      else {
        iVar10 = DAT_00834170 % (&DAT_0053fb58)[iVar3];
      }
      if (iVar10 != -1) {
        DAT_00838204 = FUN_0043d6f0(iVar3 + 0x1dc,iVar10,
                                    DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
        FUN_00462a30(param_3,param_4,param_4 + 1,0xf0,0xf0,DAT_00838204,4,iVar14);
      }
      iVar10 = FUN_00463170(local_34,(&DAT_0053fb60)[iVar3]);
      if (iVar3 == 0) {
        iVar10 = FUN_00463170(DAT_00834170 % 0x28,DAT_0053fb60);
      }
      if (iVar10 != -1) {
        DAT_00838204 = FUN_0043d6f0(iVar3 + 0x1de,iVar10,
                                    DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
        FUN_00462a30(param_3,param_4,param_4 + 1,0xf0,0xf0,DAT_00838204,4,iVar14);
      }
    }
    if (DAT_005a34e0 == '\x03') {
      if (iVar3 != 1) {
        return;
      }
      DAT_00838204 = FUN_0043d6f0(0x1dc,DAT_00834170 % DAT_0053fb58,
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      FUN_00462a30(param_3,param_4,param_4 + 1,0xf0,0xf0,DAT_00838204,4,iVar14);
    }
    if (DAT_005a34e0 == '\x01') {
      if (iVar3 == 0) {
        DAT_00838204 = FUN_0043d6f0(0x1dc,DAT_00834170 % DAT_0053fb58,
                                    DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
        FUN_00462a30(param_3,param_4,param_4 + 1,0xf0,0xf0,DAT_00838204,4,iVar14);
        return;
      }
      DAT_00838204 = FUN_0043d6f0(0x1de,DAT_00834170 % DAT_0053fb60,
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      FUN_004628d0(param_3,param_4,param_4,0xf0,0xf0,DAT_00838204,4,iVar14);
      DAT_00838204 = FUN_0043d6f0(0x1df,DAT_00834170 % DAT_0053fb64,
                                  DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3);
      FUN_00462a30(param_3,param_4,param_4 + 1,0xf0,0xf0,DAT_00838204,4,iVar14);
      uVar6 = DAT_005685f4 / 2 + (uint)(byte)(&DAT_0058bcbe)[iVar12] & 3;
      iVar10 = DAT_00834170 % DAT_0053fb4c;
      uVar5 = 0x1d9;
      goto LAB_00464f9b;
    }
    break;
  case 0xf:
    if (((&DAT_0053caf0)[iVar4] & 0x4000) == 0) {
      uVar6 = (uint)(10 < DAT_005685f0);
      if (uVar6 == 0) {
        iVar14 = 0x19;
      }
      if (DAT_005a34e0 == '\x02') {
        if (uVar6 == 0) goto LAB_0046357e;
      }
      else if ((DAT_005a34e0 == '\x01') && (uVar6 != 0)) goto LAB_0046357e;
      DAT_00838204 = FUN_0043d6f0(0x1f9 - (uint)(uVar6 != 0),0,DAT_005685f4 / 2);
      FUN_00462a30(param_3,param_4,0,0x8c,0x8c,DAT_00838204,4,iVar14);
LAB_0046357e:
      DAT_00838204 = FUN_0043d6f0(uVar6 + 0x1f6,0,DAT_005685f4 / 2);
      FUN_00462a30(param_3,param_4,iVar11 + param_4,0x8c,0x8c,DAT_00838204,4,iVar14);
      if (DAT_005a34e0 == '\x01') {
        return;
      }
      DAT_00838204 = FUN_0043d6f0(uVar6 + 0x1fa,DAT_00834170 % (int)(&DAT_0053f3e8)[uVar6 + 0x1fa],
                                  DAT_005685f4 / 2);
      FUN_00462a30(param_3,param_4,iVar11 + 1 + param_4,0x8c,0x8c,DAT_00838204,4,iVar14);
      return;
    }
    DAT_00838204 = FUN_0043d6f0(0x1f6,0,(uint)(byte)(&DAT_0058bcbe)[iVar12] + DAT_005685f4 / 2 & 3);
    bVar2 = (&DAT_00578804)[iVar4];
    puVar20 = (undefined4 *)&DAT_0081d2a8;
LAB_004634f3:
    param_2 = (uint)bVar2;
    fVar19 = (float)param_2 * (float)_DAT_004ba818;
    goto LAB_00465055;
  case 0x11:
    DAT_00838204 = FUN_0043d6f0(0x246,0,(DAT_005685f4 / 2 - (uint)(byte)(&DAT_0058bcbe)[iVar12]) - 1
                                        & 3);
    FUN_00462a30(param_3,param_4,param_4,0x50,0x50,DAT_00838204,4,0xb3);
    iVar10 = (DAT_00834170 / 2 + param_7 * 0xd + iVar13 * 7) % (DAT_0053fd04 * 4);
    if (DAT_0053fd04 * 2 <= iVar10) {
      iVar10 = (DAT_0053fd04 * 3 - iVar10) + -1;
    }
    uVar5 = FUN_00467130(iVar10,0,DAT_0053fd04 + -1);
    DAT_00838204 = FUN_0043d6f0(0x247,uVar5,
                                (DAT_005685f4 / 2 - (uint)(byte)(&DAT_0058bcbe)[iVar12]) - 1 & 3);
    uVar18 = 0x50;
    uVar5 = 0x50;
    goto LAB_004637c3;
  case 0x12:
    DAT_00838204 = FUN_0043d6f0(0x248,0,(DAT_005685f4 / 2 - (uint)(byte)(&DAT_0058bcbe)[iVar12]) - 1
                                        & 3);
    FUN_00462a30(param_3,param_4,param_4,0x3c,0x3c,DAT_00838204,4,0xb3);
    iVar10 = (DAT_00834170 / 2 + param_7 * 0xd + iVar13 * 7) % (DAT_0053fd0c * 4);
    if (DAT_0053fd0c * 2 <= iVar10) {
      iVar10 = (DAT_0053fd0c * 3 - iVar10) + -1;
    }
    uVar5 = FUN_00467130(iVar10,0,DAT_0053fd0c + -1);
    DAT_00838204 = FUN_0043d6f0(0x249,uVar5,
                                (DAT_005685f4 / 2 - (uint)(byte)(&DAT_0058bcbe)[iVar12]) - 1 & 3);
    uVar18 = 0x3c;
    uVar5 = 0x3c;
LAB_004637c3:
    FUN_00462a30(param_3,param_4,param_4 + 1,uVar5,uVar18,DAT_00838204,4,0xb3);
    return;
  }
LAB_00465504:
  return;
}

