/* Ghidra decompiled: golf.exe */
/* Function: FUN_00435760 @ 0x00435760 */


void FUN_00435760(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint *local_c;
  int local_4;
  
  iVar11 = 0;
  if (DAT_00561254 != 0) {
    FUN_00436e50(param_1,param_2);
    return;
  }
  FUN_00473f60(&DAT_0058b440,PTR_DAT_004c1570,0xd7,0x1da,0);
  iVar5 = FUN_00435570(param_1,param_2);
  if (iVar5 == -3) {
    uVar19 = 0x1ee;
    uVar18 = 0xf0;
LAB_00435830:
    FUN_00473e60(PTR_DAT_004c1570,uVar18,uVar19,0);
  }
  else {
    if (iVar5 == -4) {
      uVar19 = 0x20a;
      uVar18 = 0xd9;
      goto LAB_00435830;
    }
    if (iVar5 == -5) {
      uVar19 = 0x24b;
      uVar18 = 0x135;
      goto LAB_00435830;
    }
    if (iVar5 == -6) {
      uVar19 = 0x24b;
      uVar18 = 0x2f4;
      goto LAB_00435830;
    }
  }
  puVar12 = &DAT_005a9cf0;
  for (iVar5 = 0x98; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  local_28 = 0x136;
  iVar5 = 0x1f2;
  local_24 = 0;
  FUN_004762d0(&DAT_00519fd8,0,0,0);
  local_14 = 0x19c;
  local_4 = 0;
  local_18 = 0x146;
  local_20 = 0x156;
  local_1c = 0x145;
  local_c = &DAT_005a9cf0;
  do {
    puVar4 = PTR_DAT_004c1570;
    uVar9 = ((DAT_005a5a24 - local_4) + 0x98) % 0x98;
    iVar10 = uVar9 * 0x100;
    sVar3 = (&DAT_0057955a)[uVar9 * 0x80];
    if (((((sVar3 != -1) && ((int)(short)(&DAT_0057955a)[sVar3 * 0x80] == uVar9)) &&
         ('\0' < (char)(&DAT_005794d9)[sVar3 * 0x100])) || ('\0' < (char)(&DAT_005794d9)[iVar10]))
       && (iVar11 = iVar11 + 1, DAT_005aa6c8 < iVar11)) {
      if (DAT_004c2844 < 4) {
        bVar17 = local_24 == 6;
        local_24 = local_24 + 1;
        if (bVar17) {
          local_24 = 1;
          local_28 = local_28 + 0x3c;
          local_1c = local_1c + 0x3c;
          local_20 = local_20 + 0x3c;
          local_18 = local_18 + 0x3c;
          local_14 = local_14 + 0x3c;
          iVar5 = 0x1f2;
          if (0x2f3 < local_1c) goto LAB_00435d32;
        }
        uVar18 = 0x80000000;
        if (0xa0 < (short)(&DAT_00579562)[uVar9 * 0x80]) {
          uVar18 = 0x80004210;
        }
        if (0x10 < (short)(&DAT_00579560)[uVar9 * 0x80]) {
          uVar18 = 0x80000018;
        }
        if (0x10 < *(short *)(&DAT_0057955e + iVar10)) {
          uVar18 = 0x80006000;
        }
        if (((&DAT_005794c8)[uVar9 * 0x40] & 0x20000000) != 0) {
          uVar18 = 0x80007d08;
        }
        FUN_00467130((short)(&DAT_0057955c)[uVar9 * 0x80] + 2,1,10);
        FUN_00473cb0(puVar4,local_28,iVar5,1,1,1,0);
        DAT_0051a068._0_1_ = 0;
        FUN_004676e0(uVar9,0);
        FUN_004049d0(&DAT_0051a068,local_1c,iVar5 + 1,uVar18);
        *local_c = uVar9;
        local_c = local_c + 1;
        iVar5 = iVar5 + 0xe;
      }
      else {
        bVar17 = local_24 == 4;
        local_24 = local_24 + 1;
        if (bVar17) {
          local_24 = 1;
          local_28 = local_28 + 0x79;
          local_1c = local_1c + 0x79;
          local_20 = local_20 + 0x79;
          local_18 = local_18 + 0x79;
          local_14 = local_14 + 0x79;
          iVar5 = 0x1f2;
          if (0x2b7 < local_1c) goto LAB_00435d32;
        }
        FUN_004762d0(&DAT_00519fd8,0,0,0);
        if ((uVar9 & 1) != 0) {
          FUN_00473cb0(PTR_DAT_004c1570,local_28,iVar5,1,1,1,0);
          DAT_0051a068._0_1_ = 0;
          pcVar16 = (char *)FUN_004ad425((int)(char)(&DAT_005794d9)[iVar10],&DAT_005a9f6c,10);
          uVar8 = 0xffffffff;
          do {
            pcVar14 = pcVar16;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar14 = pcVar16 + 1;
            cVar2 = *pcVar16;
            pcVar16 = pcVar14;
          } while (cVar2 != '\0');
          uVar8 = ~uVar8;
          iVar6 = -1;
          pcVar16 = (char *)&DAT_0051a068;
          do {
            pcVar13 = pcVar16;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar13 = pcVar16 + 1;
            cVar2 = *pcVar16;
            pcVar16 = pcVar13;
          } while (cVar2 != '\0');
          pcVar16 = pcVar14 + -uVar8;
          pcVar14 = pcVar13 + -1;
          for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
            pcVar16 = pcVar16 + 4;
            pcVar14 = pcVar14 + 4;
          }
          cVar2 = (&DAT_005794d9)[iVar10];
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar14 = *pcVar16;
            pcVar16 = pcVar16 + 1;
            pcVar14 = pcVar14 + 1;
          }
          if (cVar2 == '\x13') {
            uVar8 = 0xffffffff;
            pcVar16 = &DAT_004c61e4;
            do {
              pcVar14 = pcVar16;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar14 = pcVar16 + 1;
              cVar1 = *pcVar16;
              pcVar16 = pcVar14;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            pcVar16 = pcVar14 + -uVar8;
            pcVar14 = (char *)&DAT_0051a068;
            for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
              pcVar16 = pcVar16 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar14 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              pcVar14 = pcVar14 + 1;
            }
          }
          if (cVar2 < '\x01') {
            DAT_0051a068._0_1_ = 0;
            pcVar16 = (char *)FUN_004ad425((int)(char)(&DAT_005794d9)
                                                      [(short)(&DAT_0057955a)[uVar9 * 0x80] * 0x100]
                                           ,&DAT_005a9f6c,10);
            uVar8 = 0xffffffff;
            do {
              pcVar14 = pcVar16;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar14 = pcVar16 + 1;
              cVar2 = *pcVar16;
              pcVar16 = pcVar14;
            } while (cVar2 != '\0');
            uVar8 = ~uVar8;
            iVar6 = -1;
            pcVar16 = (char *)&DAT_0051a068;
            do {
              pcVar13 = pcVar16;
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              pcVar13 = pcVar16 + 1;
              cVar2 = *pcVar16;
              pcVar16 = pcVar13;
            } while (cVar2 != '\0');
            pcVar16 = pcVar14 + -uVar8;
            pcVar14 = pcVar13 + -1;
            for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
              pcVar16 = pcVar16 + 4;
              pcVar14 = pcVar14 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar14 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              pcVar14 = pcVar14 + 1;
            }
          }
          FUN_004049d0(&DAT_0051a068,(('\t' < (char)(&DAT_005794d9)[iVar10]) - 1 & 3) + 5 + local_28
                       ,iVar5 + 0xf,0x80000000);
          if ((&DAT_00579568)[uVar9 * 0x80] != -1) {
            iVar15 = 4;
            iVar6 = local_20;
            do {
              FUN_00473cb0(PTR_DAT_004c1570,iVar6,iVar5 + 0x11,1,1,1,0);
              iVar6 = iVar6 + 10;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            iVar15 = 0;
            iVar6 = local_20;
            if (0 < (short)(&DAT_0057956a)[uVar9 * 0x80]) {
              do {
                FUN_00473cb0(PTR_DAT_004c1570,iVar6,iVar5 + 0x11,1,1,1,0);
                iVar15 = iVar15 + 1;
                iVar6 = iVar6 + 10;
              } while (iVar15 < (short)(&DAT_0057956a)[uVar9 * 0x80]);
            }
          }
        }
        FUN_004762d0(&DAT_0051b360,0,0,0);
        uVar18 = 0x80000000;
        if (0xa0 < (short)(&DAT_00579562)[uVar9 * 0x80]) {
          uVar18 = 0x80004210;
        }
        if (0x10 < (short)(&DAT_00579560)[uVar9 * 0x80]) {
          uVar18 = 0x80000018;
        }
        if (0x10 < *(short *)(&DAT_0057955e + iVar10)) {
          uVar18 = 0x80006000;
        }
        if (((&DAT_005794c8)[uVar9 * 0x40] & 0x20000000) != 0) {
          uVar18 = 0x80007d08;
        }
        DAT_0051a068._0_1_ = 0;
        FUN_004676e0(uVar9,0);
        if ('\0' < (char)(&DAT_005794d9)[iVar10]) {
          FUN_004049d0(&DAT_0051a068,local_18,iVar5 + 5,uVar18);
          puVar4 = PTR_DAT_004c1570;
          FUN_00467130((short)(&DAT_0057955c)[uVar9 * 0x80] + 2,1,10);
          FUN_00473cb0(puVar4,local_14,iVar5 + 2,1,1,1,0);
        }
        *local_c = uVar9;
        local_c = local_c + 1;
        iVar5 = iVar5 + 0x15;
      }
    }
LAB_00435d32:
    local_4 = local_4 + 1;
  } while (local_4 < 0x98);
  if (iVar11 != 0) {
    iVar5 = FUN_00467130((DAT_005aa6c8 * 400) / iVar11,0,399);
    iVar10 = FUN_00467130((int)((((3 < DAT_004c2844) - 1 & 0x20) + 0x10 + DAT_005aa6c8) * 400) /
                          iVar11,1,400);
    FUN_00480b00(iVar5 + 0x15f,0x24e,(iVar10 - iVar5) + -1,6,0x8000739f);
    if (iVar11 < DAT_005aa6c8) {
      DAT_005aa6c8 = DAT_005aa6c8 + -0x10;
    }
  }
  FUN_004762d0(&DAT_00519fd8,0,0,0);
  iVar11 = FUN_00435570(param_1,param_2);
  if (iVar11 != DAT_005a9f54) {
    DAT_005aa554 = 0;
    DAT_005a9f54 = iVar11;
    return;
  }
  DAT_005aa554 = DAT_005aa554 + 1;
  if (iVar11 == -1) {
    return;
  }
  if (DAT_005aa554 < 0xb) {
    return;
  }
  DAT_0051a068._0_1_ = 0;
  if (iVar11 == -4) {
    pcVar16 = s_Hire_Employees_004c82c8;
LAB_00435e77:
    uVar9 = 0xffffffff;
    do {
      pcVar14 = pcVar16;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar14 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar14;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar16 = pcVar14 + -uVar9;
    pcVar14 = (char *)&DAT_0051a068;
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar14 = pcVar14 + 4;
    }
  }
  else {
    if (iVar11 != -3) {
      if (iVar11 != -2) goto LAB_00435e97;
      pcVar16 = s_Golfers_004c5dc8;
      goto LAB_00435e77;
    }
    uVar9 = 0xffffffff;
    pcVar16 = s_Gary_Golf_004d6098;
    do {
      pcVar14 = pcVar16;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar14 = pcVar16 + 1;
      cVar2 = *pcVar16;
      pcVar16 = pcVar14;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar16 = pcVar14 + -uVar9;
    pcVar14 = (char *)&DAT_0051a068;
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar14 = pcVar14 + 4;
    }
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar14 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar14 = pcVar14 + 1;
  }
LAB_00435e97:
  uVar9 = 0xffffffff;
  pcVar16 = (char *)&DAT_0051a068;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar16;
    pcVar16 = pcVar16 + 1;
  } while (cVar2 != '\0');
  FUN_004493d0(param_1 + (~uVar9 - 1) * -3,param_2 + -5,(~uVar9 - 1) * 3 + param_1,param_2 + -5,
               0x80000000,10,5);
  FUN_00404b70(&DAT_0051a068,param_1,param_2 + -10,0x80007fff);
  return;
}

