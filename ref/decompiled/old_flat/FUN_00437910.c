/* Ghidra decompiled: golf.exe */
/* Function: FUN_00437910 @ 0x00437910 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00437910(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined1 local_2c4 [696];
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar5 = DAT_004c7b34;
  local_c = *unaff_FS_OFFSET;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b738b;
  *unaff_FS_OFFSET = &local_c;
  if (iVar5 != 0) {
    FUN_00483030();
    DAT_004c7b34 = 0;
  }
  uVar3 = 0xffffffff;
  pcVar8 = s_Themes__004c84e8;
  do {
    pcVar10 = pcVar8;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar8 = pcVar10 + -uVar3;
  pcVar10 = (char *)&DAT_0051a068;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  if (param_2 == -2) {
    uVar3 = 0xffffffff;
    pcVar8 = s_Default_004c84d4;
    do {
      pcVar10 = pcVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar9 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    pcVar8 = pcVar10 + -uVar3;
    pcVar10 = pcVar9 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
LAB_00437a27:
    pcVar8 = &DAT_004c5948;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar8 = &DAT_00567328;
    do {
      pcVar10 = pcVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar9 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    pcVar8 = pcVar10 + -uVar3;
    pcVar10 = pcVar9 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar8 = &DAT_004c84e4;
    do {
      pcVar10 = pcVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar9 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    pcVar8 = pcVar10 + -uVar3;
    pcVar10 = pcVar9 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar8 = s_Gary_Golf_004d6098 + param_1 * 0x230;
    do {
      pcVar10 = pcVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar9 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    pcVar8 = pcVar10 + -uVar3;
    pcVar10 = pcVar9 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcVar8 = &DAT_004c84dc;
    if (param_2 != -1) goto LAB_00437a27;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar10 = pcVar8;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar5 = -1;
  pcVar8 = (char *)&DAT_0051a068;
  do {
    pcVar9 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar3;
  pcVar10 = pcVar9 + -1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar10 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  }
  if (param_3 != 0) {
    uVar3 = 0xffffffff;
    pcVar8 = s_Themes_Championship__004c5328;
    do {
      pcVar10 = pcVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar8 = pcVar10 + -uVar3;
    pcVar10 = (char *)&DAT_0051a068;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar8 = s_Gary_Golf_004d6098 + param_1 * 0x230;
    do {
      pcVar10 = pcVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar9 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    pcVar8 = pcVar10 + -uVar3;
    pcVar10 = pcVar9 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    uVar3 = 0xffffffff;
    pcVar8 = &DAT_004c5948;
    do {
      pcVar10 = pcVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar9 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    pcVar8 = pcVar10 + -uVar3;
    pcVar10 = pcVar9 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
  }
  iVar5 = FUN_004378a0(&DAT_0051a068);
  if ((iVar5 != 0) && (param_2 != -2)) {
    uVar3 = 0xffffffff;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = 0xffffffff;
    pcVar8 = s_already_exists__Overwrite_the_ol_004c3f0c;
    do {
      pcVar10 = pcVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar5 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar9 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    pcVar8 = pcVar10 + -uVar4;
    pcVar10 = pcVar9 + -1;
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar5 = FUN_0046d6e0(200,0x1e,1,1,0);
    if (iVar5 != 0) {
      uVar2 = 0;
      goto LAB_00437f86;
    }
    (&DAT_0051a067)[~uVar3] = 0;
  }
  iVar7 = param_1 * 0x230;
  iVar5 = FUN_00405ac0(s_Gary_Golf_004d6098 + iVar7);
  if (iVar5 == 0) {
    uVar3 = 0xffffffff;
    pcVar8 = s_Invalid_file_name__004c84bc;
    do {
      pcVar10 = pcVar8;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar8 = (char *)&DAT_0051a068;
    do {
      pcVar9 = pcVar8;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    pcVar8 = pcVar10 + -uVar3;
    pcVar10 = pcVar9 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    FUN_0046de70(&DAT_0051a068,0x1e,0x1e);
    uVar2 = 0;
  }
  else {
    iVar5 = FUN_004a614d(&DAT_0051a068,&DAT_004c7828);
    if (iVar5 == 0) {
      uVar3 = 0xffffffff;
      pcVar8 = s_Invalid_file_path__004c84a4;
      do {
        pcVar10 = pcVar8;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar10 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      iVar5 = -1;
      pcVar8 = (char *)&DAT_0051a068;
      do {
        pcVar9 = pcVar8;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      pcVar8 = pcVar10 + -uVar3;
      pcVar10 = pcVar9 + -1;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_0046de70(&DAT_0051a068,0x1e,0x1e);
      uVar2 = 0;
    }
    else {
      FUN_004a6268(&DAT_004d6088 + param_1 * 0x8c,0x230,1,iVar5);
      FUN_004a6268((int)&DAT_00543d10 + param_1 * 0x4e2,0x4e2,1,iVar5);
      local_2d4 = 0;
      local_2d0 = 0;
      local_2cc = 0;
      local_2c8 = 0;
      if (param_2 != -1) {
        param_2 = param_2 * 0x100;
        local_2d4 = *(undefined4 *)(&DAT_005795a8 + param_2);
        local_2d0 = *(undefined4 *)(&DAT_005795ac + param_2);
        local_2cc = *(undefined4 *)(&DAT_005795b0 + param_2);
        local_2c8 = *(undefined4 *)(&DAT_005795b4 + param_2);
      }
      if (param_1 == 0) {
        local_2d4 = _DAT_005a5a04;
        local_2d0 = DAT_005a5a08;
        local_2cc = DAT_005a5a0c;
        local_2c8 = DAT_005a5a10;
      }
      FUN_004a6268(&local_2d4,0x10,1,iVar5);
      FUN_004a6268(s__PCXFILE_004c52c0,8,1,iVar5);
      FUN_00474ae0();
      local_4 = 0;
      FUN_00474dd0(0x8c,0x1a4,8,1,0,0);
      FUN_00478af0(0,0,0x8c,0x1a4,0xff);
      cVar1 = (&DAT_004d60aa)[iVar7];
      if (cVar1 < '\x14') {
        _DAT_005aa564 =
             (**(code **)(**(int **)(&DAT_00562918 +
                                    ((int)cVar1 +
                                    (~(uint)(byte)(&DAT_004d60a9)[iVar7] >> 7 & 1) * 0x48) * 0x84) +
                         0x14))();
        FUN_004789f0(&DAT_005aa560);
        FUN_00473cb0(local_2c4,0,0,1,1,1,0);
        FUN_00473cb0(local_2c4,0,0x8c,1,1,1,0);
      }
      else {
        _DAT_005aa564 =
             (**(code **)(**(int **)(&DAT_00563368 +
                                    (cVar1 + -0x14 +
                                    (~(uint)(byte)(&DAT_004d60a9)[iVar7] >> 7 & 1) * 0x48) * 0x84) +
                         0x14))();
        FUN_004789f0(&DAT_005aa560);
        FUN_00473cb0(local_2c4,0,0,1,1,1,0);
        FUN_00473cb0(local_2c4,0,0x8c,1,1,1,0);
      }
      FUN_00473cb0(local_2c4,0,0x118,1,1,1,0);
      FUN_00485aa0(iVar5);
      FUN_004a609f(iVar5);
      local_4 = 0xffffffff;
      FUN_00474c40();
      uVar2 = 1;
    }
  }
LAB_00437f86:
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}

