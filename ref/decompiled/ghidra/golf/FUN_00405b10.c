/* Ghidra decompiled: golf.exe */
/* Function: FUN_00405b10 @ 0x00405B10 */


void FUN_00405b10(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char local_64 [100];
  
  FUN_0040cc00(0x36,0x50,0x274,0x50,0);
  FUN_004762d0(&DAT_0051b360,0,0,0);
  FUN_00404bc0(s_SAVE_GAME__edit_name_then_press_E_004c3f74,0x180,0x58,0x80007fff);
  DAT_0051a068._0_1_ = '\0';
  FUN_0040daa0(0xffffffff);
  uVar4 = 0xffffffff;
  pcVar3 = &DAT_004c3f70;
  do {
    pcVar8 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar3 = (char *)&DAT_0051a068;
  do {
    pcVar7 = pcVar3;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar3 = pcVar8 + -uVar4;
  pcVar8 = pcVar7 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  uVar6 = DAT_00834170 & 0x800003ff;
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffc00) + 1;
  }
  pcVar3 = (char *)FUN_004ad425(((int)(uVar6 * 0x1e + ((int)(uVar6 * 0x1e) >> 0x1f & 0x3ffU)) >> 10)
                                + 1,&DAT_0058a528,10);
  uVar4 = 0xffffffff;
  do {
    pcVar8 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar3 = (char *)&DAT_0051a068;
  do {
    pcVar7 = pcVar3;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar3 = pcVar8 + -uVar4;
  pcVar8 = pcVar7 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar3 = &DAT_004c3f70;
  do {
    pcVar8 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar3 = (char *)&DAT_0051a068;
  do {
    pcVar7 = pcVar3;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar3 = pcVar8 + -uVar4;
  pcVar8 = pcVar7 + -1;
  for (uVar6 = uVar4 >> 2; uVar2 = DAT_00834170, uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  FUN_0040d7b0(uVar2);
  FUN_0045b2c0(s_Save_File_Name____004c3f5c,0x40,0x66,0x30);
  if (((char)DAT_0051a068 != '\0') && (iVar5 = FUN_00405ac0(&DAT_0051a068), iVar5 != 0)) {
    uVar4 = 0xffffffff;
    pcVar3 = (char *)&DAT_0051a068;
    do {
      pcVar8 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar8 + -uVar4;
    pcVar8 = local_64;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar3 = s_saved_games__004c3f4c;
    do {
      pcVar8 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar8 + -uVar4;
    pcVar8 = (char *)&DAT_0051a068;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar3 = local_64;
    do {
      pcVar8 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar3 = (char *)&DAT_0051a068;
    do {
      pcVar7 = pcVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar7;
    } while (cVar1 != '\0');
    pcVar3 = pcVar8 + -uVar4;
    pcVar8 = pcVar7 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar8 = pcVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar3 = &DAT_004c3f44;
    do {
      pcVar8 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar3 = (char *)&DAT_0051a068;
    do {
      pcVar7 = pcVar3;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar7 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar7;
    } while (cVar1 != '\0');
    pcVar3 = pcVar8 + -uVar4;
    pcVar8 = pcVar7 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar8 = pcVar8 + 1;
    }
    iVar5 = FUN_004378a0(&DAT_0051a068);
    if (iVar5 != 0) {
      uVar4 = 0xffffffff;
      pcVar3 = local_64;
      do {
        pcVar8 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar3 = pcVar8 + -uVar4;
      pcVar8 = (char *)&DAT_0051a068;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
      uVar4 = 0xffffffff;
      pcVar3 = s_already_exists__Overwrite_the_ol_004c3f0c;
      do {
        pcVar8 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      iVar5 = -1;
      pcVar3 = (char *)&DAT_0051a068;
      do {
        pcVar7 = pcVar3;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar7;
      } while (cVar1 != '\0');
      pcVar3 = pcVar8 + -uVar4;
      pcVar8 = pcVar7 + -1;
      for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar8 = pcVar8 + 1;
      }
      iVar5 = FUN_0046d6e0(400,0x8c,1,1,0);
      if (iVar5 != 0) {
        return;
      }
    }
    uVar4 = 0xffffffff;
    pcVar3 = local_64;
    do {
      pcVar8 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar8 + -uVar4;
    pcVar8 = (char *)&DAT_0051a068;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_0040b4a0(&DAT_0051a068);
    uVar4 = 0xffffffff;
    pcVar3 = s_Game_Saved__004c3f00;
    do {
      pcVar8 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar8 + -uVar4;
    pcVar8 = (char *)&DAT_0051a068;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_0040cb00(0x80001284,1,0xfffffffc);
    return;
  }
  uVar4 = 0xffffffff;
  pcVar3 = s_Invalid_File_Name_004c3eec;
  do {
    pcVar8 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar3 = pcVar8 + -uVar4;
  pcVar8 = (char *)&DAT_0051a068;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  FUN_0040cb00(0x80001284,1,0xfffffffc);
  return;
}

