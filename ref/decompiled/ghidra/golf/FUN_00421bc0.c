/* Ghidra decompiled: golf.exe */
/* Function: FUN_00421bc0 @ 0x00421BC0 */


uint FUN_00421bc0(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined2 uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  int *piVar17;
  int iVar18;
  char *pcVar19;
  uint local_c;
  int local_8;
  
  uVar13 = DAT_0059ae7c % 0x98;
  DAT_0059ae7c = DAT_0059ae7c + 1;
  iVar15 = uVar13 * 0x100;
  piVar17 = &DAT_005794b8 + uVar13 * 0x40;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar17 = 0;
    piVar17 = piVar17 + 1;
  }
  iVar10 = DAT_00578154 * 0x400;
  (&DAT_005794b8)[uVar13 * 0x40] = DAT_00578150 * 0x400 + 0x600;
  uVar4 = DAT_00575cb9;
  (&DAT_005794bc)[uVar13 * 0x40] = iVar10 + 0x600;
  (&DAT_005794d2)[iVar15] = uVar4;
  uVar7 = FUN_0045c1e0(0x7fff);
  uVar9 = DAT_0059e7b8;
  iVar11 = 0;
  *(undefined2 *)(&DAT_00579570 + iVar15) = uVar7;
  iVar18 = 9999;
  iVar10 = param_1;
  do {
    if (((uVar9 & 0x40) != 0) || ((2 < iVar11 && (iVar11 != 4)))) {
      iVar2 = (&DAT_0059dea0)[iVar11 + (uVar13 & 3) * 8];
      if (iVar2 < iVar18) {
        iVar10 = 1;
        iVar18 = iVar2;
      }
      else if (iVar2 == iVar18) {
        iVar10 = iVar10 + 1;
      }
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 8);
  uVar9 = FUN_0045c1e0(iVar10);
  uVar9 = uVar9 & 0xffff;
  iVar10 = 0;
  uVar14 = DAT_0059e7b8 & 0x40;
  do {
    if ((((uVar14 != 0) || ((2 < iVar10 && (iVar10 != 4)))) &&
        ((&DAT_0059dea0)[iVar10 + (uVar13 & 3) * 8] == iVar18)) &&
       (uVar9 = uVar9 - 1, (int)uVar9 < 0)) {
      (&DAT_005794d1)[iVar15] = (char)iVar10;
      uVar9 = 99;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 8);
  local_8 = 0;
  (&DAT_0059dea0)[(uint)(byte)(&DAT_005794d1)[iVar15] + (char)(&DAT_00579572)[iVar15] * 8] =
       (&DAT_0059dea0)[(uint)(byte)(&DAT_005794d1)[iVar15] + (char)(&DAT_00579572)[iVar15] * 8] + 1;
  do {
    sVar8 = FUN_0045c1e0(0x4b);
    (&DAT_0057956e)[uVar13 * 0x80] = sVar8 + 1;
    iVar10 = FUN_0046c940(uVar13);
    if (iVar10 == 0) {
      bVar6 = 6;
    }
    else {
      bVar6 = 1;
      if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[uVar13 * 0x80] * 0x230] & 0x11) != 0) {
        bVar6 = 3;
      }
      if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[uVar13 * 0x80] * 0x230] & 0xc) != 0) {
        bVar6 = bVar6 | 4;
      }
      if (bVar6 == 1) {
        bVar6 = (-((uVar13 & 1) != 0) & 0xfeU) + 4 | 1;
      }
    }
    (&DAT_005794d1)[iVar15] = bVar6;
    if ((&DAT_004d60b4)[(short)(&DAT_0057956e)[uVar13 * 0x80] * 0x8c] != 0) {
      (&DAT_005794d1)[iVar15] =
           (byte)(&DAT_004d60b4)[(short)(&DAT_0057956e)[uVar13 * 0x80] * 0x8c] & 7;
    }
    bVar3 = true;
    local_c = 0;
    psVar12 = &DAT_0057956e;
    do {
      if (local_c != uVar13) {
        if (*(char *)((int)psVar12 + -0x95) == -1) {
          if ((int)*psVar12 % 0x13 == (int)(short)(&DAT_0057956e)[uVar13 * 0x80] % 0x13) {
            bVar3 = false;
          }
          if (*psVar12 == (&DAT_0057956e)[uVar13 * 0x80]) {
            bVar3 = false;
          }
        }
        if (('\0' < *(char *)((int)psVar12 + -0x95)) && (*psVar12 == (&DAT_0057956e)[uVar13 * 0x80])
           ) {
          bVar3 = false;
        }
      }
      psVar12 = psVar12 + 0x80;
      local_c = local_c + 1;
    } while ((int)psVar12 < 0x582d6e);
    if ((&DAT_00584a09)[(short)(&DAT_0057956e)[uVar13 * 0x80] * 0x2c] == -1) {
      bVar3 = false;
    }
    if (((param_1 == 0) ||
        (*(char *)((int)&DAT_005849e0 + (short)(&DAT_0057956e)[uVar13 * 0x80] * 0x2c + 2) != '\0'))
       && (bVar3)) {
      if (local_8 < 999) {
        sVar8 = FUN_0045c1e0(0x80);
        *(short *)(&DAT_00579570 + iVar15) =
             (short)(char)(&DAT_004d60a9)[(short)(&DAT_0057956e)[uVar13 * 0x80] * 0x230] +
             sVar8 * 0x100;
        (&DAT_00579572)[iVar15] = (char)((int)(short)(&DAT_0057956e)[uVar13 * 0x80] % 3);
        uVar5 = DAT_00834170;
        (&DAT_005794d9)[iVar15] = 0xff;
        (&DAT_005794d5)[iVar15] = 0xb;
        *(undefined4 *)(&DAT_00579578 + iVar15) = uVar5;
        sVar8 = FUN_0045c1e0(3);
        (&DAT_0057955c)[uVar13 * 0x80] = sVar8 + 3;
        if (DAT_00822c88 == 0) {
          (&DAT_0057955c)[uVar13 * 0x80] = 4;
        }
        if (DAT_00543cc4 != 0) {
          (&DAT_0057955c)[uVar13 * 0x80] = (short)DAT_00543cc4 + 4;
        }
        if (DAT_00543ccc != 0) {
          (&DAT_005794c8)[uVar13 * 0x40] = (&DAT_005794c8)[uVar13 * 0x40] | 0x10000;
        }
        return uVar13;
      }
      break;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 999);
  uVar13 = 0xffffffff;
  pcVar16 = s_Your_membership_is_declining__004c6cac;
  do {
    pcVar19 = pcVar16;
    if (uVar13 == 0) break;
    uVar13 = uVar13 - 1;
    pcVar19 = pcVar16 + 1;
    cVar1 = *pcVar16;
    pcVar16 = pcVar19;
  } while (cVar1 != '\0');
  uVar13 = ~uVar13;
  pcVar16 = pcVar19 + -uVar13;
  pcVar19 = (char *)&DAT_0051a068;
  for (uVar9 = uVar13 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar19 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar19 = pcVar19 + 4;
  }
  for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *pcVar19 = *pcVar16;
    pcVar16 = pcVar16 + 1;
    pcVar19 = pcVar19 + 1;
  }
  DAT_0059ae7c = (DAT_0059ae7c + -1) % 0x98;
  return 0xffffffff;
}

