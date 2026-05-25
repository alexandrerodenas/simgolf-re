/* Ghidra decompiled: golf.exe */
/* Function: FUN_004315e0 @ 0x004315E0 */


void FUN_004315e0(void)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *local_4;
  
  puVar7 = &DAT_005a8c38;
  for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = &DAT_00543ca0;
  for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = (undefined4 *)&DAT_00578804;
  for (iVar9 = 0x271; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = &DAT_005794b8;
  for (iVar9 = 0x2700; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = (undefined4 *)&DAT_00575ab0;
  for (iVar9 = 0xa28; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = &DAT_00585850;
  for (iVar9 = 0x4c0; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = (undefined4 *)&DAT_0058bcb8;
  for (iVar9 = 0x400; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  pcVar13 = s_1st_Challenge_hole_004c1578;
  for (iVar9 = 0x108; iVar9 != 0; iVar9 = iVar9 + -1) {
    pcVar13[0] = '\0';
    pcVar13[1] = '\0';
    pcVar13[2] = '\0';
    pcVar13[3] = '\0';
    pcVar13 = pcVar13 + 4;
  }
  puVar5 = &DAT_0058bcb8;
  do {
    *puVar5 = 0xffff;
    puVar5 = puVar5 + 8;
  } while ((int)puVar5 < 0x58ccb8);
  puVar7 = (undefined4 *)&DAT_005689e8;
  for (iVar9 = 200; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  puVar7 = &DAT_005419d0;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  puVar7 = (undefined4 *)&DAT_0053caf0;
  for (iVar9 = 0x4e2; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = &DAT_0056988c;
  for (iVar9 = 0x271; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = &DAT_005849e0;
  for (iVar9 = 0x39c; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = &DAT_00567b34;
  for (iVar9 = 0x98; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  puVar7 = &DAT_005830b8;
  for (iVar9 = 0x271; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  puVar7 = &DAT_0056a524;
  for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = &DAT_0059ae80;
  for (iVar9 = 0x72; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  DAT_004c2c9c = 0;
  puVar7 = (undefined4 *)&DAT_0053ea24;
  for (iVar9 = 0x271; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  FUN_0045b880();
  puVar7 = &DAT_00568600;
  for (iVar9 = 0xfa; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar5 = &DAT_0057955a;
  do {
    *puVar5 = 0xffff;
    puVar5 = puVar5 + 0x80;
  } while ((int)puVar5 < 0x582d5a);
  iVar9 = 0;
LAB_00431719:
  do {
    uVar2 = FUN_0045c1e0(0x4c);
    uVar6 = (uint)uVar2;
    if (((&DAT_004d60a9)[uVar6 * 0x230] & 0x80) == 0) {
      uVar12 = 1;
      if (((&DAT_004d60a8)[uVar6 * 0x230] & 0x11) != 0) {
        uVar12 = 3;
      }
      if (((&DAT_004d60a8)[uVar6 * 0x230] & 0xc) != 0) {
        uVar12 = uVar12 | 4;
      }
      if (uVar12 == 1) {
        uVar12 = (-(uint)((uVar2 & 1) != 0) & 0xfffffffe) + 4 | 1;
      }
    }
    else {
      uVar12 = 6;
    }
    switch(iVar9 / 3) {
    case 0:
      if (uVar12 != 5) goto LAB_00431719;
      break;
    case 1:
      if (uVar12 != 3) goto LAB_00431719;
      break;
    case 2:
      if (uVar12 != 6) goto LAB_00431719;
      break;
    case 3:
      if (uVar12 != 7) goto LAB_00431719;
    }
    if (*(char *)((int)&DAT_005849e0 + uVar6 * 0x2c + 2) != '\0' || uVar6 % 3 != iVar9 % 3)
    goto LAB_00431719;
    iVar9 = iVar9 + 1;
    *(undefined1 *)((int)&DAT_005849e0 + uVar6 * 0x2c + 2) = 1;
  } while (iVar9 < 0xc);
  local_4 = (char *)&DAT_004d60b8;
  do {
    uVar2 = FUN_0045c1e0(0x28);
    uVar11 = (uint)uVar2;
    uVar6 = FUN_0045c1e0(0x27);
    uVar12 = 0xffffffff;
    iVar9 = (uVar6 & 0xffff) + 1;
    pcVar13 = local_4 + -0x20;
    do {
      pcVar15 = pcVar13;
      if (uVar12 == 0) break;
      uVar12 = uVar12 - 1;
      pcVar15 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar1 != '\0');
    uVar12 = ~uVar12;
    pcVar13 = pcVar15 + -uVar12;
    pcVar15 = (char *)&DAT_0051a068;
    for (uVar6 = uVar12 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar15 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar15 = pcVar15 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar13 = s_likes_004c7820;
    do {
      pcVar15 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar15 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar10 = -1;
    pcVar13 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar13;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    pcVar13 = pcVar15 + -uVar6;
    pcVar15 = pcVar14 + -1;
    for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar15 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar15 = pcVar15 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar13 = (&PTR_s_puppies_004c2fd4)[uVar11];
    do {
      pcVar15 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar15 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar10 = -1;
    pcVar13 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar13;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    pcVar13 = pcVar15 + -uVar6;
    pcVar15 = pcVar14 + -1;
    for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar15 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar15 = pcVar15 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar13 = &DAT_004c52b8;
    do {
      pcVar15 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar15 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar10 = -1;
    pcVar13 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar13;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    pcVar13 = pcVar15 + -uVar6;
    pcVar15 = pcVar14 + -1;
    for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar15 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar15 = pcVar15 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar13 = (&PTR_s_puppies_004c2fd4)[(iVar9 + uVar11) % 0x28];
    do {
      pcVar15 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar15 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar10 = -1;
    pcVar13 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar13;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    pcVar13 = pcVar15 + -uVar6;
    pcVar15 = pcVar14 + -1;
    for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar15 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar15 = pcVar15 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar13 = s___and_004c7818;
    do {
      pcVar15 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar15 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar10 = -1;
    pcVar13 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar13;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    pcVar13 = pcVar15 + -uVar6;
    pcVar15 = pcVar14 + -1;
    for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar15 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar15 = pcVar15 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar13 = (&PTR_s_puppies_004c2fd4)[(uVar11 + iVar9 * 2) % 0x28];
    do {
      pcVar15 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar15 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar13 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar13;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    pcVar13 = pcVar15 + -uVar6;
    pcVar15 = pcVar14 + -1;
    for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar15 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar15 = pcVar15 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar13 = &DAT_004c4944;
    do {
      pcVar15 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar15 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar9 = -1;
    pcVar13 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar13;
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      pcVar14 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar1 != '\0');
    pcVar13 = pcVar15 + -uVar6;
    pcVar15 = pcVar14 + -1;
    for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar15 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      pcVar15 = pcVar15 + 1;
    }
    sVar3 = FUN_0045c1e0(2);
    if (sVar3 != 0) {
      pcVar13 = &DAT_004c7810;
      if (0x4ddd67 < (int)local_4) {
        pcVar13 = &DAT_004c7808;
      }
      uVar6 = 0xffffffff;
      do {
        pcVar15 = pcVar13;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar15 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar15;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar9 = -1;
      pcVar13 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar13 = pcVar15 + -uVar6;
      pcVar15 = pcVar14 + -1;
      for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar15 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar15 = pcVar15 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar13 = s_favorite_color_is_004c77f4;
      do {
        pcVar15 = pcVar13;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar15 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar15;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar9 = -1;
      pcVar13 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar13 = pcVar15 + -uVar6;
      pcVar15 = pcVar14 + -1;
      for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar15 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar15 = pcVar15 + 1;
      }
      uVar4 = FUN_0045c1e0(10);
      switch(uVar4) {
      case 0:
        pcVar13 = &DAT_004c77ec;
        break;
      case 1:
        pcVar13 = s_blue__004c77e4;
        break;
      case 2:
        pcVar13 = s_purple__004c77dc;
        break;
      case 3:
        pcVar13 = s_pink__004c77d4;
        break;
      case 4:
        pcVar13 = s_yellow__004c77cc;
        break;
      case 5:
        pcVar13 = s_lavender__004c77c0;
        break;
      case 6:
        pcVar13 = s_plaid__004c77b8;
        break;
      case 7:
        pcVar13 = s_black__004c77b0;
        break;
      case 8:
        pcVar13 = s_orange__004c77a8;
        break;
      case 9:
        pcVar13 = &DAT_004c77a0;
        break;
      default:
        goto switchD_00431a4e_default;
      }
      uVar6 = 0xffffffff;
      do {
        pcVar15 = pcVar13;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar15 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar15;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar9 = -1;
      pcVar13 = (char *)&DAT_0051a068;
      do {
        pcVar14 = pcVar13;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar14 = pcVar13 + 1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar14;
      } while (cVar1 != '\0');
      pcVar13 = pcVar15 + -uVar6;
      pcVar15 = pcVar14 + -1;
      for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar15 = *(undefined4 *)pcVar13;
        pcVar13 = pcVar13 + 4;
        pcVar15 = pcVar15 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar15 = *pcVar13;
        pcVar13 = pcVar13 + 1;
        pcVar15 = pcVar15 + 1;
      }
    }
switchD_00431a4e_default:
    uVar6 = 0xffffffff;
    pcVar13 = (char *)&DAT_0051a068;
    do {
      pcVar15 = pcVar13;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar15 = pcVar13 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar14 = local_4 + 0x230;
    pcVar13 = pcVar15 + -uVar6;
    for (uVar12 = uVar6 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)local_4 = *(undefined4 *)pcVar13;
      pcVar13 = pcVar13 + 4;
      local_4 = local_4 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_4 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      local_4 = local_4 + 1;
    }
    local_4 = pcVar14;
    if (0x4e06f7 < (int)pcVar14) {
      DAT_005419dd = 0;
      DAT_005419ed = 1;
      DAT_005419fd = 3;
      DAT_00541a0d = 2;
      puVar7 = &DAT_005736b8;
      do {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 9;
      } while ((int)puVar7 < 0x575ab8);
      puVar5 = &DAT_0059fc60;
      do {
        *puVar5 = 0xffff;
        puVar5 = puVar5 + 0x1c4;
      } while ((int)puVar5 < 0x5a34e0);
      puVar8 = &DAT_00572cc2;
      do {
        *puVar8 = 0xff;
        puVar8 = puVar8 + 0x14;
      } while ((int)puVar8 < 0x5736c2);
      DAT_005685f0 = 1;
      DAT_00567b04 = 0;
      DAT_00572cac = 0;
      DAT_0059b730 = 0;
      DAT_004c284c = 0;
      DAT_0059aaf8 = 0;
      DAT_0053a450 = 0;
      DAT_005787cc = 0;
      DAT_00561258 = 0;
      DAT_0056a51c = 0;
      DAT_0059ae7c = 0;
      DAT_004c2e28 = 0xffffffff;
      DAT_005a59f8 = 0xffffffff;
      FUN_00401750();
      return;
    }
  } while( true );
}

