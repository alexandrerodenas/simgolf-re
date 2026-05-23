/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040f190 @ 0x0040F190 */
/* Body size: 1068 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  undefined4 *puVar19;
  char *pcVar20;
  undefined2 local_c;
  
  FUN_004481b0(0x2f,100,0,0,0);
  iVar10 = 0;
  do {
    if (*(char *)((int)&DAT_005a5a04 + iVar10) != '\0') {
      DAT_004c2c9c = DAT_004c2c9c | (ushort)(1 << ((byte)iVar10 & 0x1f));
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0xc);
  if (DAT_004c2c9c == 0) {
    FUN_004065c0();
  }
  iVar10 = DAT_004c2e14;
  if ((DAT_0059ae7c & 2) != 0) {
    DAT_0059ae7c = (int)(DAT_0059ae7c + 2) % 0x98;
  }
  iVar14 = 0;
  pcVar17 = &DAT_005794d9;
  do {
    if (((*pcVar17 == '\x01') && (pcVar17[1] == '\0')) || (*pcVar17 == -1)) {
      FUN_00426670(iVar14);
    }
    pcVar17 = pcVar17 + 0x100;
    iVar14 = iVar14 + 1;
  } while ((int)pcVar17 < 0x582cd9);
  uVar8 = FUN_00421bc0(0);
  if ((uVar8 & 1) != 0) {
    uVar8 = FUN_00421bc0(0);
  }
  if (uVar8 != 0xffffffff) {
    DAT_005a5a24 = uVar8;
  }
  iVar14 = FUN_00421bc0(0);
  local_c = (undefined2)uVar8;
  iVar15 = uVar8 * 0x100;
  iVar16 = iVar14 * 0x100;
  DAT_005a5a24 = iVar14;
  (&DAT_0057955a)[uVar8 * 0x80] = (short)iVar14;
  (&DAT_0057955a)[iVar14 * 0x80] = local_c;
  (&DAT_00579556)[uVar8 * 0x80] = 0;
  (&DAT_00579556)[iVar14 * 0x80] = 6;
  if (param_1 != 0) {
    (&DAT_005794d0)[iVar15] = 0x20;
    (&DAT_00579573)[iVar15] = (char)iVar10;
    uVar11 = 0xffffffff;
    iVar9 = iVar10 * 0x38;
    pcVar17 = (char *)(&DAT_0058dd50 + iVar10 * 0xe);
    do {
      pcVar20 = pcVar17;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar20 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    (&DAT_0057956e)[uVar8 * 0x80] = 0x4c;
    pcVar17 = pcVar20 + -uVar11;
    pcVar20 = (char *)&DAT_0051a068;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar20 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar20 = pcVar20 + 1;
    }
    uVar11 = 0xffffffff;
    pcVar17 = &DAT_004c5948;
    do {
      pcVar20 = pcVar17;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar20 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar1 != '\0');
    uVar11 = ~uVar11;
    iVar13 = -1;
    pcVar17 = (char *)&DAT_0051a068;
    do {
      pcVar18 = pcVar17;
      if (iVar13 == 0) break;
      iVar13 = iVar13 + -1;
      pcVar18 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar18;
    } while (cVar1 != '\0');
    pcVar17 = pcVar20 + -uVar11;
    pcVar20 = pcVar18 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
      pcVar17 = pcVar17 + 4;
      pcVar20 = pcVar20 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar20 = *pcVar17;
      pcVar17 = pcVar17 + 1;
      pcVar20 = pcVar20 + 1;
    }
    iVar13 = FUN_00437fa0(&DAT_0051a068,0x4c,0xffffffff);
    if (iVar13 == 0) {
      DAT_004e06e9 = '\t';
      puVar19 = &DAT_0055b028;
      for (iVar13 = 0x138; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar19 = 0;
        puVar19 = puVar19 + 1;
      }
      DAT_004e06ec = (&DAT_0058dd73)[iVar9];
      DAT_004e06ef = (&DAT_0058dd71)[iVar9];
      *(undefined2 *)puVar19 = 0;
      DAT_004e06ed = (&DAT_0058dd74)[iVar9];
      DAT_004e06eb = ((&DAT_0058dd70)[iVar9] & 3) << 4 | (&DAT_0058dd72)[iVar9];
      if (((&DAT_0058dd70)[iVar9] & 4) != 0) {
        DAT_004e06e9 = -0x77;
      }
      bVar5 = FUN_0045c1e0(5);
      DAT_004e06e8 = '\x01' << (bVar5 & 0x1f);
      uVar11 = 0xffffffff;
      pcVar17 = (char *)(&DAT_0058dd50 + iVar10 * 0xe);
      do {
        pcVar20 = pcVar17;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar20 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      pcVar17 = pcVar20 + -uVar11;
      pcVar20 = s_Gary_Golf_004e06d8;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar20 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar20 = pcVar20 + 1;
      }
      uVar11 = 0xffffffff;
      pcVar17 = s_Golf_Pro_004c593c;
      do {
        pcVar20 = pcVar17;
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        pcVar20 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar1 != '\0');
      uVar11 = ~uVar11;
      pcVar17 = pcVar20 + -uVar11;
      pcVar20 = (char *)&DAT_004e06c8;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
        pcVar17 = pcVar17 + 4;
        pcVar20 = pcVar20 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pcVar20 = *pcVar17;
        pcVar17 = pcVar17 + 1;
        pcVar20 = pcVar20 + 1;
      }
    }
    *(short *)(&DAT_00579570 + iVar15) = (short)DAT_004e06e9;
    (&DAT_005794c8)[uVar8 * 0x40] = (&DAT_005794c8)[uVar8 * 0x40] & 0xffffffe3;
    uVar6 = FUN_00467130(DAT_00822c88,0,2);
    cVar1 = (char)DAT_0059b730;
    (&DAT_00579572)[iVar15] = uVar6;
    (&DAT_005794d1)[iVar15] = cVar1 * '\x10' + '\a';
    *(undefined2 *)(&DAT_005794ce + iVar15) = 0xe0;
    iVar10 = 0;
    do {
      cVar1 = (&DAT_0058dd75)[iVar10 + iVar9];
      (&DAT_005795a8)[iVar10 + iVar15] = cVar1;
      if (cVar1 != '\0') {
        *(ushort *)(&DAT_005794ce + iVar15) =
             *(ushort *)(&DAT_005794ce + iVar15) | (ushort)(1 << ((byte)iVar10 & 0x1f));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0xc);
    DAT_004c2e14 = -1;
  }
  _DAT_0059e7b8 = _DAT_0059e7b8 & 0xffff9fff;
  (&DAT_005794c8)[iVar14 * 0x40] = (&DAT_005794c8)[iVar14 * 0x40] & 0xffffffe3;
  (&DAT_005794d0)[iVar16] = 0x24;
  sVar7 = (short)DAT_004d60a9;
  (&DAT_0057956e)[iVar14 * 0x80] = 0;
  *(short *)(&DAT_00579570 + iVar16) = sVar7;
  uVar3 = DAT_00834170;
  (&DAT_005794d9)[iVar16] = 1;
  (&DAT_005794d9)[iVar15] = 1;
  *(undefined4 *)(&DAT_00579578 + iVar16) = uVar3;
  *(undefined4 *)(&DAT_00579578 + iVar15) = uVar3;
  (&DAT_00579568)[iVar14 * 0x80] = 0xffff;
  (&DAT_00579568)[uVar8 * 0x80] = 0xffff;
  *(undefined2 *)(&DAT_00579566 + iVar16) = 0;
  *(undefined2 *)(&DAT_00579566 + iVar15) = 0;
  uVar2 = DAT_004c2c9c;
  (&DAT_005794c8)[uVar8 * 0x40] = (&DAT_005794c8)[uVar8 * 0x40] & 0xffefffff;
  (&DAT_005794c8)[iVar14 * 0x40] = (&DAT_005794c8)[iVar14 * 0x40] & 0xffefffe3;
  (&DAT_00579572)[iVar16] = 2;
  (&DAT_005794d1)[iVar16] = 0x47;
  *(ushort *)(&DAT_005794ce + iVar16) = uVar2;
  iVar10 = 0;
  do {
    if (((int)*(short *)(&DAT_005794ce + iVar16) & 1 << ((byte)iVar10 & 0x1f)) != 0) {
      (&DAT_005795a8)[iVar16 + iVar10] = *(undefined1 *)((int)&DAT_005a5a04 + iVar10);
    }
    uVar4 = DAT_00585854;
    uVar3 = DAT_00585850;
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0xc);
  DAT_005a59f8 = iVar14;
  (&DAT_005794c8)[iVar14 * 0x40] = (&DAT_005794c8)[iVar14 * 0x40] | 0x200;
  uVar6 = DAT_00585866;
  (&DAT_005794b8)[iVar14 * 0x40] = uVar3;
  (&DAT_005794bc)[iVar14 * 0x40] = uVar4;
  (&DAT_00579556)[iVar14 * 0x80] = 0;
  (&DAT_005794d2)[iVar16] = uVar6;
  return;
}

