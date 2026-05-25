/* Ghidra decompiled: golf.exe */
/* Function: FUN_00433190 @ 0x00433190 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00433190(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint uVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_78;
  char local_70 [32];
  int aiStack_50 [20];
  
  if (DAT_0055e924 != 0) {
    FUN_00434cf0(param_1,param_2);
    return;
  }
  iVar5 = 0;
  do {
    aiStack_50[(char)(&DAT_004c79a0)[iVar5]] = iVar5;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  puVar6 = &DAT_004c79ea;
  puVar9 = (undefined2 *)(&DAT_004c7a2c + DAT_005a34e0 * 0x18);
  do {
    puVar6[-1] = puVar9[-2];
    *puVar6 = *puVar9;
    puVar6 = puVar6 + 2;
    puVar9 = puVar9 + 4;
  } while ((int)puVar6 < 0x4c79f3);
  iVar5 = FUN_00432f90(param_1,param_2);
  FUN_004762d0(&DAT_00519fd8,0,0,0);
  if ((((iVar5 == DAT_005a9f54) && (iVar5 != -1)) && (iVar5 < 0x14)) && (10 < DAT_005aa554)) {
    iVar7 = FUN_00467130((&DAT_004c79b4)[iVar5 * 2] + 0x20,0x50,0x2d0);
    FUN_0040cef0(iVar7 + -0x50,0x192,0xa0,0x70,1);
    FUN_00473f60(&DAT_0058b998,PTR_DAT_004c1570,iVar7 + -0x5c,0x185,0);
    iVar13 = 0;
    iVar14 = iVar7 + -0x4c;
    do {
      FUN_00473f60(&DAT_0058b998 + ((iVar13 == 7) + 1) * 0x2c,PTR_DAT_004c1570,iVar14,0x185,0);
      iVar13 = iVar13 + 1;
      iVar14 = iVar14 + 0x10;
    } while (iVar13 < 8);
    cVar2 = (&DAT_004c79a0)[iVar5];
    uVar10 = 0xffffffff;
    iVar14 = cVar2 * 0x30;
    pcVar8 = (char *)(&DAT_00578350 + cVar2 * 0xc);
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar8 = &DAT_004c7fdc;
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    iVar13 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar15 = pcVar8;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar15 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar15;
    } while (cVar1 != '\0');
    cVar1 = (&DAT_00578373)[iVar14];
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = pcVar15 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    pcVar8 = (char *)FUN_004ad425(cVar1 * 100,&DAT_005a9f6c,10);
    uVar10 = 0xffffffff;
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    iVar13 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar15 = pcVar8;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar15 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar15;
    } while (cVar1 != '\0');
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = pcVar15 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    DAT_0051a068._0_1_ = (char)DAT_0051a068 + -0x20;
    FUN_004762d0(&DAT_0051b360,0,0,0);
    FUN_00404b70(&DAT_0051a068,iVar7 + -0xc,0x18a,0x80000000);
    FUN_004762d0(&DAT_00519fd8,0,0,0);
    puVar4 = PTR_DAT_004c1570;
    FUN_00467130((4 - (char)(&DAT_00578372)[iVar14]) * 2,1,10);
    FUN_00473cb0(puVar4,iVar7 + -0x5a,0x187,1,1,1,0);
    uVar10 = 0xffffffff;
    pcVar8 = (char *)&DAT_004c61dc;
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar8 = (char *)(&DAT_00578350 + cVar2 * 0xc);
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar13 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar15 = pcVar8;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar15 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar15;
    } while (cVar2 != '\0');
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = pcVar15 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = local_70;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    DAT_0051a068._0_1_ = '\0';
    switch(DAT_005a34e0) {
    case '\0':
      pcVar8 = s_interface_parkland_txt_004c7fc4;
      break;
    case '\x01':
      pcVar8 = s_interface_desert_txt_004c7f98;
      break;
    case '\x02':
      pcVar8 = s_interface_tropical_txt_004c7f80;
      break;
    case '\x03':
      pcVar8 = s_interface_links_txt_004c7fb0;
      break;
    default:
      goto switchD_004334c9_default;
    }
    FUN_0045b660(pcVar8,local_70);
switchD_004334c9_default:
    FUN_0045b0d0(0x10,iVar7 + -0x46,0x19a,0x80007fff);
    uVar10 = 0xffffffff;
    pcVar8 = &DAT_004c60e0;
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    uVar3 = (&DAT_00578372)[iVar14];
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    switch(uVar3) {
    case 1:
      pcVar8 = &DAT_004c7f70;
      break;
    case 2:
      pcVar8 = &DAT_004c7f6c;
      break;
    case 3:
      pcVar8 = s_buried_004c7f64;
      break;
    case 4:
      pcVar8 = s_obstructed_004c7f58;
      break;
    case 0xff:
    case 0:
      pcVar8 = &DAT_004c7f78;
      break;
    default:
      pcVar8 = s_impossible_004c7f4c;
    }
    uVar10 = 0xffffffff;
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar13 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar15 = pcVar8;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar15 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar15;
    } while (cVar2 != '\0');
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = pcVar15 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    iVar13 = iVar7 + 0x40;
    FUN_00478b80(iVar13,0x1a9,iVar13,0x1d2,0x80006318);
    FUN_00478b80(iVar13,(char)(&DAT_00578370)[iVar14] * -6 + 0x1d2,iVar13,0x1d2,0x80004210);
    FUN_00478b80(iVar7 + 0x3c,0x1d2,iVar7 + 0x44,0x1d2,0x80001284);
    FUN_00473e60(PTR_DAT_004c1570,iVar7 + 0x3c,(char)(&DAT_00578370)[iVar14] * -6 + 0x1cd,0);
    if ((&DAT_00578371)[iVar14] != 0) {
      FUN_00478b80(iVar7 + -0x48,0x1ea,(6 << ((&DAT_00578371)[iVar14] & 0x1f)) + -0x48 + iVar7,0x1ea
                   ,0x80004210);
    }
    FUN_00473e60(PTR_DAT_004c1570,(6 << ((&DAT_00578371)[iVar14] & 0x1f)) + -0x4a + iVar7,0x1e2,0);
  }
  FUN_00473f60(&DAT_0058b3bc,PTR_DAT_004c1570,0xd8,0x1e2,0);
  if (iVar5 == 0x15) {
    uVar18 = 0x232;
    uVar17 = 0xf6;
LAB_00433702:
    FUN_00473cb0(PTR_DAT_004c1570,uVar17,uVar18,1,1,1,0);
  }
  else if (iVar5 == 0x16) {
    uVar18 = 0x1fe;
    uVar17 = 0xdc;
    goto LAB_00433702;
  }
  iVar14 = 0;
  do {
    FUN_00473cb0(PTR_DAT_004c1570,(int)(&DAT_004c79b4)[iVar14 * 2],(int)(&DAT_004c79b6)[iVar14 * 2],
                 1,1,1,0);
    iVar14 = iVar14 + 1;
  } while (iVar14 < 0x10);
  if (((&DAT_00575ab8)[DAT_005685f0 * 0x82] != 0) || (0x12 < DAT_005685f0)) {
    FUN_00473cb0(PTR_DAT_004c1570,(int)DAT_004c79b4,(int)DAT_004c79b6,1,1,1,0);
  }
  if (((&DAT_00575ac8)[DAT_005685f0 * 0x82] == 0) && (DAT_005685f0 < 0x13)) {
    if (DAT_004c2848 == 1) {
      iVar14 = DAT_00834170 % (int)(&DAT_0053fa0c)[DAT_005a34e0];
    }
    else {
      iVar14 = 0;
    }
    _DAT_005aa6c4 = FUN_0043d6f0(DAT_005a34e0 + 0x189,iVar14,3);
    FUN_004628d0(DAT_004c79b8 + 0x1f,DAT_004c79ba + 0x18,0,0x28,0x28,_DAT_005aa6c4,4,99);
  }
  FUN_004762d0(&DAT_00519fd8,0,0,0);
  local_78 = 0;
  psVar12 = &DAT_004c79b4;
  do {
    uVar10 = 0xffffffff;
    cVar2 = (&DAT_004c79a0)[local_78];
    pcVar8 = (char *)(&DAT_00578350 + cVar2 * 0xc);
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; iVar14 = DAT_00822c88, uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    DAT_0051a068._0_1_ = (char)DAT_0051a068 + -0x20;
    if ((iVar14 == 0) || (DAT_004c2848 == cVar2)) {
      FUN_00404b70(&DAT_0051a068,*psVar12 + 0x20,psVar12[1] + 4,0x80007fff);
    }
    psVar12 = psVar12 + 2;
    local_78 = local_78 + 1;
  } while ((int)psVar12 < 0x4c79f1);
  if (iVar5 != DAT_005a9f54) {
    DAT_005aa554 = 0;
    DAT_005a9f54 = iVar5;
    return;
  }
  DAT_005aa554 = DAT_005aa554 + 1;
  if (iVar5 < 0x14) {
    return;
  }
  if (DAT_005aa554 < 0xb) {
    return;
  }
  uVar10 = 0xffffffff;
  iVar14 = (char)(&DAT_004c79a0)[iVar5] * 0x30;
  pcVar8 = (char *)(&DAT_00578350 + (char)(&DAT_004c79a0)[iVar5] * 0xc);
  do {
    pcVar16 = pcVar8;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar16 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  pcVar8 = pcVar16 + -uVar10;
  pcVar16 = (char *)&DAT_0051a068;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar16 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar16 = pcVar16 + 1;
  }
  DAT_0051a068._0_1_ = (char)DAT_0051a068 + -0x20;
  uVar10 = 0xffffffff;
  pcVar8 = s___Cost__004c7f40;
  do {
    pcVar16 = pcVar8;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar16 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  iVar7 = -1;
  pcVar8 = (char *)&DAT_0051a068;
  do {
    pcVar15 = pcVar8;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar15 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar15;
  } while (cVar2 != '\0');
  cVar2 = (&DAT_00578373)[iVar14];
  pcVar8 = pcVar16 + -uVar10;
  pcVar16 = pcVar15 + -1;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar16 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar16 = pcVar16 + 1;
  }
  pcVar8 = (char *)FUN_004ad425(cVar2 * 100,&DAT_005a9f6c,10);
  uVar10 = 0xffffffff;
  do {
    pcVar16 = pcVar8;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar16 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  iVar7 = -1;
  pcVar8 = (char *)&DAT_0051a068;
  do {
    pcVar15 = pcVar8;
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    pcVar15 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar15;
  } while (cVar2 != '\0');
  pcVar8 = pcVar16 + -uVar10;
  pcVar16 = pcVar15 + -1;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar16 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar16 = pcVar16 + 1;
  }
  if (iVar5 == 0x14) {
    pcVar8 = s_Info_Cursor_004c7f34;
LAB_004339fb:
    uVar10 = 0xffffffff;
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
  }
  else {
    if (iVar5 != 0x15) {
      if (iVar5 != 0x16) goto LAB_00433a1b;
      pcVar8 = s_Improvements_004c7f1c;
      goto LAB_004339fb;
    }
    uVar10 = 0xffffffff;
    pcVar8 = &DAT_004c7f2c;
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar16 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar16 = pcVar16 + 1;
  }
LAB_00433a1b:
  uVar10 = 0xffffffff;
  pcVar8 = (char *)&DAT_0051a068;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  iVar7 = (&DAT_004c79b6)[iVar5 * 2] + 1;
  FUN_004493d0((&DAT_004c79b4)[iVar5 * 2] + 0x14 + (~uVar10 - 1) * -3,iVar7,
               (~uVar10 - 1) * 3 + (&DAT_004c79b4)[iVar5 * 2] + 0x14,iVar7,0x80000000,10,5);
  FUN_00404b70(&DAT_0051a068,(&DAT_004c79b4)[iVar5 * 2] + 0x14,(&DAT_004c79b6)[iVar5 * 2] + -4,
               0x80007fff);
  uVar10 = 0xffffffff;
  pcVar8 = &DAT_004c60e0;
  do {
    pcVar16 = pcVar8;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar16 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  pcVar8 = pcVar16 + -uVar10;
  pcVar16 = (char *)&DAT_0051a068;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar16 = pcVar16 + 4;
  }
  uVar3 = (&DAT_00578372)[iVar14];
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar16 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar16 = pcVar16 + 1;
  }
  switch(uVar3) {
  case 1:
    uVar10 = 0xffffffff;
    pcVar8 = &DAT_004c7f70;
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar5 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar15 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar15 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar15;
    } while (cVar2 != '\0');
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = pcVar15 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    return;
  case 2:
    uVar10 = 0xffffffff;
    pcVar8 = &DAT_004c7f6c;
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar5 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar15 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar15 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar15;
    } while (cVar2 != '\0');
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = pcVar15 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    return;
  case 3:
    uVar10 = 0xffffffff;
    pcVar8 = s_buried_004c7f64;
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar5 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar15 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar15 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar15;
    } while (cVar2 != '\0');
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = pcVar15 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    return;
  case 4:
    uVar10 = 0xffffffff;
    pcVar8 = s_obstructed_004c7f58;
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar5 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar15 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar15 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar15;
    } while (cVar2 != '\0');
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = pcVar15 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    return;
  case 0xff:
  case 0:
    uVar10 = 0xffffffff;
    pcVar8 = &DAT_004c7f78;
    break;
  default:
    uVar10 = 0xffffffff;
    pcVar8 = s_impossible_004c7f4c;
    do {
      pcVar16 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar16 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar16;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar5 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar15 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar15 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar15;
    } while (cVar2 != '\0');
    pcVar8 = pcVar16 + -uVar10;
    pcVar16 = pcVar15 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar16 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar16 = pcVar16 + 1;
    }
    return;
  }
  do {
    pcVar16 = pcVar8;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar16 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  iVar5 = -1;
  pcVar8 = (char *)&DAT_0051a068;
  do {
    pcVar15 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar15 = pcVar8 + 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar15;
  } while (cVar2 != '\0');
  pcVar8 = pcVar16 + -uVar10;
  pcVar16 = pcVar15 + -1;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar16 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar16 = pcVar16 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar16 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar16 = pcVar16 + 1;
  }
  return;
}

