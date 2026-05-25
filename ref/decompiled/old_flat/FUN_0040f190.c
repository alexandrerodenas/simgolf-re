/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040f190 @ 0x0040F190 */


void FUN_0040f190(int param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined1 uVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  undefined4 *puVar18;
  char *pcVar19;
  undefined2 local_c;
  
  FUN_004481b0(0x2f,100,0,0,0);
  iVar9 = 0;
  do {
    if ((&DAT_005a5a04)[iVar9] != '\0') {
      DAT_004c2c9c = DAT_004c2c9c | (ushort)(1 << ((byte)iVar9 & 0x1f));
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0xc);
  if (DAT_004c2c9c == 0) {
    FUN_004065c0();
  }
  iVar9 = DAT_004c2e14;
  if ((DAT_0059ae7c & 2) != 0) {
    DAT_0059ae7c = (int)(DAT_0059ae7c + 2) % 0x98;
  }
  iVar13 = 0;
  pcVar16 = &DAT_005794d9;
  do {
    if (((*pcVar16 == '\x01') && (pcVar16[1] == '\0')) || (*pcVar16 == -1)) {
      FUN_00426670(iVar13);
    }
    pcVar16 = pcVar16 + 0x100;
    iVar13 = iVar13 + 1;
  } while ((int)pcVar16 < 0x582cd9);
  uVar8 = FUN_00421bc0(0);
  if ((uVar8 & 1) != 0) {
    uVar8 = FUN_00421bc0(0);
  }
  if (uVar8 != 0xffffffff) {
    DAT_005a5a24 = uVar8;
  }
  iVar13 = FUN_00421bc0(0);
  local_c = (undefined2)uVar8;
  iVar14 = uVar8 * 0x100;
  iVar15 = iVar13 * 0x100;
  DAT_005a5a24 = iVar13;
  (&DAT_0057955a)[uVar8 * 0x80] = (short)iVar13;
  (&DAT_0057955a)[iVar13 * 0x80] = local_c;
  (&DAT_00579556)[uVar8 * 0x80] = 0;
  (&DAT_00579556)[iVar13 * 0x80] = 6;
  if (param_1 != 0) {
    (&DAT_005794d0)[iVar14] = 0x20;
    (&DAT_00579573)[iVar14] = (char)iVar9;
    uVar10 = 0xffffffff;
    iVar9 = iVar9 * 0x38;
    pcVar16 = &DAT_0058dd50 + iVar9;
    do {
      pcVar19 = pcVar16;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar19 = pcVar16 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar19;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    (&DAT_0057956e)[uVar8 * 0x80] = 0x4c;
    pcVar16 = pcVar19 + -uVar10;
    pcVar19 = (char *)&DAT_0051a068;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar19 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar19 = pcVar19 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar16 = &DAT_004c5948;
    do {
      pcVar19 = pcVar16;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar19 = pcVar16 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar19;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    iVar12 = -1;
    pcVar16 = (char *)&DAT_0051a068;
    do {
      pcVar17 = pcVar16;
      if (iVar12 == 0) break;
      iVar12 = iVar12 + -1;
      pcVar17 = pcVar16 + 1;
      cVar1 = *pcVar16;
      pcVar16 = pcVar17;
    } while (cVar1 != '\0');
    pcVar16 = pcVar19 + -uVar10;
    pcVar19 = pcVar17 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
      pcVar16 = pcVar16 + 4;
      pcVar19 = pcVar19 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar19 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      pcVar19 = pcVar19 + 1;
    }
    iVar12 = FUN_00437fa0(&DAT_0051a068,0x4c,0xffffffff);
    if (iVar12 == 0) {
      DAT_004e06e9 = '\t';
      puVar18 = &DAT_0055b028;
      for (iVar12 = 0x138; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar18 = 0;
        puVar18 = puVar18 + 1;
      }
      DAT_004e06ec = (&DAT_0058dd73)[iVar9];
      DAT_004e06ef = (&DAT_0058dd71)[iVar9];
      *(undefined2 *)puVar18 = 0;
      DAT_004e06ed = (&DAT_0058dd74)[iVar9];
      DAT_004e06eb = ((&DAT_0058dd70)[iVar9] & 3) << 4 | (&DAT_0058dd72)[iVar9];
      if (((&DAT_0058dd70)[iVar9] & 4) != 0) {
        DAT_004e06e9 = -0x77;
      }
      bVar5 = FUN_0045c1e0(5);
      DAT_004e06e8 = '\x01' << (bVar5 & 0x1f);
      uVar10 = 0xffffffff;
      pcVar16 = &DAT_0058dd50 + iVar9;
      do {
        pcVar19 = pcVar16;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar19 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar19;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar16 = pcVar19 + -uVar10;
      pcVar19 = s_Gary_Golf_004e06d8;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar19 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar19 = pcVar19 + 1;
      }
      uVar10 = 0xffffffff;
      pcVar16 = s_Golf_Pro_004c593c;
      do {
        pcVar19 = pcVar16;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar19 = pcVar16 + 1;
        cVar1 = *pcVar16;
        pcVar16 = pcVar19;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar16 = pcVar19 + -uVar10;
      pcVar19 = (char *)&DAT_004e06c8;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
        pcVar16 = pcVar16 + 4;
        pcVar19 = pcVar19 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar19 = *pcVar16;
        pcVar16 = pcVar16 + 1;
        pcVar19 = pcVar19 + 1;
      }
    }
    *(short *)(&DAT_00579570 + iVar14) = (short)DAT_004e06e9;
    (&DAT_005794c8)[uVar8 * 0x40] = (&DAT_005794c8)[uVar8 * 0x40] & 0xffffffe3;
    uVar6 = FUN_00467130(DAT_00822c88,0,2);
    cVar1 = (char)DAT_0059b730;
    (&DAT_00579572)[iVar14] = uVar6;
    (&DAT_005794d1)[iVar14] = cVar1 * '\x10' + '\a';
    *(undefined2 *)(&DAT_005794ce + iVar14) = 0xe0;
    iVar12 = 0;
    do {
      cVar1 = (&DAT_0058dd75)[iVar12 + iVar9];
      (&DAT_005795a8)[iVar12 + iVar14] = cVar1;
      if (cVar1 != '\0') {
        *(ushort *)(&DAT_005794ce + iVar14) =
             *(ushort *)(&DAT_005794ce + iVar14) | (ushort)(1 << ((byte)iVar12 & 0x1f));
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0xc);
    DAT_004c2e14 = -1;
  }
  DAT_0059e7b8 = DAT_0059e7b8 & 0xffff9fff;
  (&DAT_005794c8)[iVar13 * 0x40] = (&DAT_005794c8)[iVar13 * 0x40] & 0xffffffe3;
  (&DAT_005794d0)[iVar15] = 0x24;
  sVar7 = (short)DAT_004d60a9;
  (&DAT_0057956e)[iVar13 * 0x80] = 0;
  *(short *)(&DAT_00579570 + iVar15) = sVar7;
  uVar3 = DAT_00834170;
  (&DAT_005794d9)[iVar15] = 1;
  (&DAT_005794d9)[iVar14] = 1;
  *(undefined4 *)(&DAT_00579578 + iVar15) = uVar3;
  *(undefined4 *)(&DAT_00579578 + iVar14) = uVar3;
  (&DAT_00579568)[iVar13 * 0x80] = 0xffff;
  (&DAT_00579568)[uVar8 * 0x80] = 0xffff;
  *(undefined2 *)(&DAT_00579566 + iVar15) = 0;
  *(undefined2 *)(&DAT_00579566 + iVar14) = 0;
  uVar2 = DAT_004c2c9c;
  (&DAT_005794c8)[uVar8 * 0x40] = (&DAT_005794c8)[uVar8 * 0x40] & 0xffefffff;
  (&DAT_005794c8)[iVar13 * 0x40] = (&DAT_005794c8)[iVar13 * 0x40] & 0xffefffe3;
  (&DAT_00579572)[iVar15] = 2;
  (&DAT_005794d1)[iVar15] = 0x47;
  *(ushort *)(&DAT_005794ce + iVar15) = uVar2;
  iVar9 = 0;
  do {
    if (((int)*(short *)(&DAT_005794ce + iVar15) & 1 << ((byte)iVar9 & 0x1f)) != 0) {
      (&DAT_005795a8)[iVar15 + iVar9] = (&DAT_005a5a04)[iVar9];
    }
    uVar4 = DAT_00585854;
    uVar3 = DAT_00585850;
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0xc);
  DAT_005a59f8 = iVar13;
  (&DAT_005794c8)[iVar13 * 0x40] = (&DAT_005794c8)[iVar13 * 0x40] | 0x200;
  uVar6 = DAT_00585866;
  (&DAT_005794b8)[iVar13 * 0x40] = uVar3;
  (&DAT_005794bc)[iVar13 * 0x40] = uVar4;
  (&DAT_00579556)[iVar13 * 0x80] = 0;
  (&DAT_005794d2)[iVar15] = uVar6;
  return;
}

