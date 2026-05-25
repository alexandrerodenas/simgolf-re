/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045f870 @ 0x0045F870 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045f870(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  char *pcVar13;
  char *pcVar14;
  char local_19;
  int local_18;
  int local_14;
  char local_c [12];
  
  iVar9 = DAT_005a6d3c * 0xc + 0x113;
  iVar2 = -(iVar9 / 2);
  FUN_00480b00(iVar2 + 0x176,0xf,iVar9,0xe8,0x80007fff);
  FUN_00480b00(iVar2 + 0x178,0x11,iVar9,0xe8,0x80000000);
  FUN_00480b00(iVar2 + 0x177,0x10,iVar9,0xe8,0x80004090);
  FUN_004762d0(&DAT_00519928,0,0,0);
  uVar5 = 0xffffffff;
  pcVar4 = s_Top_10_Golf_Courses_004d3ca4;
  do {
    pcVar14 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar4 = pcVar14 + -uVar5;
  pcVar14 = (char *)&DAT_0051a068;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar14 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar14 = pcVar14 + 1;
  }
  FUN_00404bc0(&DAT_0051a068,0x177,0x1a,0x80007fff);
  FUN_004762d0(&DAT_0051b360,0,0,0);
  local_c[0] = '\0';
  local_c[1] = '\0';
  local_c[2] = '\0';
  local_c[3] = '\0';
  _DAT_005423d0 = DAT_005a9cac;
  local_c[4] = '\0';
  local_c[5] = '\0';
  local_c[6] = '\0';
  local_c[7] = '\0';
  _DAT_005423d8 = DAT_005a9cb4;
  local_c[8] = '\0';
  local_c[9] = '\0';
  _DAT_005423d4 = DAT_005a9cb0;
  _DAT_005423dc = DAT_005a9cb8;
  _DAT_005423e0 = DAT_00561258;
  local_14 = 0;
  _DAT_005423e4 = DAT_00561258 + DAT_005a9cb8 + DAT_005a9cb4 + DAT_005a9cb0 + DAT_005a9cac;
  iVar9 = 0x32;
  do {
    iVar8 = iVar9;
    iVar9 = 0;
    iVar3 = 0;
    piVar7 = &DAT_0054230c;
    do {
      if ((local_c[iVar3] == '\0') && (iVar9 <= *piVar7)) {
        iVar9 = *piVar7;
        local_18 = iVar3;
      }
      piVar7 = piVar7 + 6;
      iVar3 = iVar3 + 1;
    } while ((int)piVar7 < 0x5423fc);
    local_c[local_18] = '\x01';
    if (local_18 < 9) {
      uVar5 = 0xffffffff;
      pcVar4 = (&PTR_s_Pebble_Beach_004c2a60)[local_18];
      do {
        pcVar14 = pcVar4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar14 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar14;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar4 = pcVar14 + -uVar5;
      pcVar14 = (char *)&DAT_0051a068;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar14 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar14 = pcVar14 + 1;
      }
    }
    else {
      DAT_0051a068._0_1_ = 0;
      FUN_0040daa0(0);
      local_19 = (char)local_14 + '\x01';
    }
    FUN_00404ad0(&DAT_0051a068,iVar2 + 0x187,iVar8,(-(uint)(local_18 != 9) & 0x3e0) + 0x80007c1f);
    iVar9 = iVar2 + 0x1ff;
    iVar3 = 0;
    iVar10 = local_18 * 0x18;
    if (0 < (int)(&DAT_005422f8)[local_18 * 6]) {
      do {
        FUN_00473e60(PTR_DAT_004c1570,iVar9,iVar8,0);
        iVar9 = iVar9 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(&DAT_005422f8)[local_18 * 6]);
    }
    iVar3 = 0;
    if (0 < (int)(&DAT_005422fc)[local_18 * 6]) {
      do {
        FUN_00473e60(PTR_DAT_004c1570,iVar9,iVar8,0);
        iVar9 = iVar9 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(&DAT_005422fc)[local_18 * 6]);
    }
    iVar3 = 0;
    if (0 < *(int *)(iVar10 + 0x542300)) {
      do {
        FUN_00473e60(PTR_DAT_004c1570,iVar9,iVar8,0);
        iVar9 = iVar9 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar10 + 0x542300));
    }
    iVar3 = 0;
    if (0 < *(int *)(iVar10 + 0x542304)) {
      do {
        FUN_00473e60(PTR_DAT_004c1570,iVar9,iVar8,0);
        iVar9 = iVar9 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar10 + 0x542304));
    }
    iVar3 = 0;
    if (0 < *(int *)(iVar10 + 0x542308)) {
      do {
        FUN_00473e60(PTR_DAT_004c1570,iVar9,iVar8,0);
        iVar9 = iVar9 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(iVar10 + 0x542308));
    }
    iVar3 = DAT_00834170;
    local_14 = local_14 + 1;
    iVar9 = iVar8 + 0xe;
  } while (local_14 < 10);
  uVar5 = 0xffffffff;
  pcVar4 = s_After_004d3c9c;
  do {
    pcVar14 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar4 = pcVar14 + -uVar5;
  pcVar14 = (char *)&DAT_0051a068;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar14 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pcVar4 = (char *)FUN_004ad425((int)(iVar3 + (iVar3 >> 0x1f & 0x1fffU)) >> 0xd,&DAT_00824134,10);
  uVar5 = 0xffffffff;
  do {
    pcVar14 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar9 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar4;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = pcVar14 + -uVar5;
  pcVar14 = pcVar13 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar14 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar14 = pcVar14 + 1;
  }
  uVar5 = 0xffffffff;
  pcVar4 = s_years_of_operation_your_course_004d3c7c;
  do {
    pcVar14 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar9 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar4;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = pcVar14 + -uVar5;
  pcVar14 = pcVar13 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar14 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar14 = pcVar14 + 1;
  }
  FUN_00404bc0(&DAT_0051a068,0x177,iVar8 + 0x15,0x80007c1f);
  uVar5 = 0xffffffff;
  pcVar4 = &DAT_004d3c74;
  do {
    pcVar14 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar4 = pcVar14 + -uVar5;
  pcVar14 = (char *)&DAT_0051a068;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar14 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar14 = pcVar14 + 1;
  }
  switch(local_19) {
  case '\x01':
    ppuVar11 = &PTR_DAT_004c3e88;
    break;
  case '\x02':
    ppuVar11 = &PTR_DAT_004c3e84;
    break;
  case '\x03':
    ppuVar11 = &PTR_DAT_004c3e80;
    break;
  case '\x04':
    ppuVar11 = &PTR_DAT_004c3e7c;
    break;
  case '\x05':
    ppuVar11 = &PTR_DAT_004c3e78;
    break;
  case '\x06':
    ppuVar11 = &PTR_DAT_004c3e74;
    break;
  case '\a':
    ppuVar11 = &PTR_DAT_004c3e70;
    break;
  case '\b':
    ppuVar11 = &PTR_DAT_004c3e6c;
    break;
  case '\t':
    ppuVar11 = &PTR_DAT_004c3e68;
    break;
  case '\n':
    ppuVar11 = (undefined **)&DAT_004c3e60;
    break;
  default:
    goto switchD_0045fc57_default;
  }
  uVar5 = 0xffffffff;
  do {
    ppuVar12 = ppuVar11;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    ppuVar12 = (undefined **)((int)ppuVar11 + 1);
    cVar1 = *(char *)ppuVar11;
    ppuVar11 = ppuVar12;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar9 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar14 = pcVar4;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  pcVar4 = (char *)((int)ppuVar12 - uVar5);
  pcVar14 = pcVar14 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar14 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar14 = pcVar14 + 1;
  }
switchD_0045fc57_default:
  uVar5 = 0xffffffff;
  pcVar4 = s_on_the_list_of_great_courses_004d3c54;
  do {
    pcVar14 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar9 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar4;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = pcVar14 + -uVar5;
  pcVar14 = pcVar13 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar14 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar14 = pcVar14 + 1;
  }
  pcVar4 = &DAT_004c4e60;
  if (local_19 != '\x01') {
    pcVar4 = &DAT_004c4944;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar14 = pcVar4;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar14 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar14;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar9 = -1;
  pcVar4 = (char *)&DAT_0051a068;
  do {
    pcVar13 = pcVar4;
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    pcVar13 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar13;
  } while (cVar1 != '\0');
  pcVar4 = pcVar14 + -uVar5;
  pcVar14 = pcVar13 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar14 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar14 = pcVar14 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar14 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar14 = pcVar14 + 1;
  }
  FUN_00404bc0(&DAT_0051a068,0x177,iVar8 + 0x23,0x80007c1f);
  return;
}

