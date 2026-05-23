/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040e720 @ 0x0040E720 */
/* Body size: 2454 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e720(void)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  short sVar4;
  undefined2 *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined4 *puVar16;
  char *pcVar17;
  char *pcVar18;
  char local_10 [16];
  
  uVar9 = DAT_005685f0;
  if ((((&DAT_00575ab8)[DAT_005685f0 * 0x82] == 0) || ((&DAT_00575ac8)[DAT_005685f0 * 0x82] == 0))
     || (((DAT_0059e7b8 & 0x40) != 0 && (*(int *)(&DAT_00575ac0 + DAT_005685f0 * 0x208) == 0)))) {
    FUN_004481b0(0x18,100,0,0,0);
    return;
  }
  puVar16 = &DAT_0056a524;
  for (iVar8 = 10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  FUN_0040c6f0(0x20,uVar9);
  uVar9 = 0xffffffff;
  pcVar6 = s_scenic_004c5934;
  do {
    pcVar18 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar18 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar18;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  pcVar6 = pcVar18 + -uVar9;
  pcVar18 = local_10;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar18 = pcVar18 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar18 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar18 = pcVar18 + 1;
  }
  if (DAT_00834170 != 0) {
    FUN_004481b0(0x2a,100,0,0,0);
  }
  uVar9 = DAT_005685f0;
  if (*(short *)(&DAT_00575ab4 + DAT_005685f0 * 0x82) == 0) {
    sVar4 = __ftol();
    *(short *)(&DAT_00575ab4 + uVar9 * 0x82) = sVar4;
    if (0xfa < sVar4) {
      *(short *)(&DAT_00575ab4 + uVar9 * 0x82) =
           (short)((int)(sVar4 + -0xfa + (sVar4 + -0xfa >> 0x1f & 3U)) >> 2) + sVar4;
    }
  }
  iVar8 = (int)*(short *)(&DAT_00575ab4 + uVar9 * 0x82);
  if (((*(byte *)(&DAT_00575cb0 + uVar9 * 0x82) & 0x60) != 0) && (0xfa < iVar8)) {
    iVar8 = iVar8 + 0x19;
  }
  if (300 < iVar8) {
    iVar8 = DAT_005a8c60 * -0x19 + iVar8;
  }
  *(undefined1 *)(&DAT_00575ab0 + uVar9 * 0x82) = 3;
  if (iVar8 < 0x33) {
    *(undefined1 *)(&DAT_00575ab0 + uVar9 * 0x82) = 2;
  }
  if (0xf9 < iVar8) {
    *(undefined1 *)(&DAT_00575ab0 + uVar9 * 0x82) = 4;
  }
  if (0x1da < iVar8) {
    *(undefined1 *)(&DAT_00575ab0 + uVar9 * 0x82) = 5;
  }
  if (0x271 < iVar8) {
    *(undefined1 *)(&DAT_00575ab0 + uVar9 * 0x82) = 6;
  }
  if (DAT_00822c88 < 2) {
    if ((*(byte *)(&DAT_00575cb0 + uVar9 * 0x82) & 0x40) != 0) {
      FUN_0046e7b0(0,(&DAT_00575ac8)[uVar9 * 0x82] * 0x400 + 0x200,
                   (&DAT_00575acc)[uVar9 * 0x82] * 0x400 + 0x200);
      uVar9 = DAT_005685f0;
    }
    if ((*(byte *)(&DAT_00575cb0 + uVar9 * 0x82) & 0x20) != 0) {
      FUN_0046e7b0(1,(&DAT_00575ac8)[uVar9 * 0x82] * 0x400 + 0x200,
                   (&DAT_00575acc)[uVar9 * 0x82] * 0x400 + 0x200);
      uVar9 = DAT_005685f0;
    }
    if (*(char *)(&DAT_00575ab0 + uVar9 * 0x82) == '\x05') {
      FUN_0046e7b0(4,(&DAT_00575ac8)[uVar9 * 0x82] * 0x400 + 0x200,
                   (&DAT_00575acc)[uVar9 * 0x82] * 0x400 + 0x200);
      uVar9 = DAT_005685f0;
    }
  }
  iVar14 = uVar9 * 0x208;
  cVar2 = *(char *)(&DAT_00575ab0 + uVar9 * 0x82);
  if (cVar2 == '\x03') {
    if (iVar8 < 0x7d) {
      uVar10 = 0xffffffff;
      pcVar6 = s_short_004c592c;
      do {
        pcVar18 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar18 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar18;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar6 = pcVar18 + -uVar10;
      pcVar18 = local_10;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar18 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar18 = pcVar18 + 1;
      }
    }
    if (200 < iVar8) {
LAB_0040ea77:
      uVar10 = 0xffffffff;
      pcVar6 = s_long_004c5924;
      do {
        pcVar18 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar18 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar18;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar6 = pcVar18 + -uVar10;
      pcVar18 = local_10;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar18 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar18 = pcVar18 + 1;
      }
    }
  }
  else if (cVar2 == '\x04') {
    if (iVar8 < 0x15e) {
      uVar10 = 0xffffffff;
      pcVar6 = s_short_004c592c;
      do {
        pcVar18 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar18 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar18;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar6 = pcVar18 + -uVar10;
      pcVar18 = local_10;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar18 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar18 = pcVar18 + 1;
      }
    }
    if (0x1a9 < iVar8) goto LAB_0040ea77;
  }
  else if (cVar2 == '\x05') {
    if (iVar8 < 500) {
      uVar10 = 0xffffffff;
      pcVar6 = s_short_004c592c;
      do {
        pcVar18 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar18 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar18;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      pcVar6 = pcVar18 + -uVar10;
      pcVar18 = local_10;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar18 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar18 = pcVar18 + 1;
      }
    }
    if (0x23f < iVar8) goto LAB_0040ea77;
  }
  puVar15 = (undefined2 *)(&DAT_00575ad8 + iVar14);
  *(undefined4 *)(&DAT_00575ca4 + iVar14) = 0;
  *(undefined4 *)(&DAT_00575ad4 + iVar14) = 0;
  *(undefined4 *)(&DAT_00575ad0 + iVar14) = 0;
  *(undefined4 *)(&DAT_00575c9c + iVar14) = 0;
  *(undefined2 *)(&DAT_00575c0a + iVar14) = 0;
  *(undefined2 *)(&DAT_00575c08 + iVar14) = 0;
  iVar8 = 10;
  do {
    iVar12 = 8;
    puVar5 = puVar15;
    do {
      *puVar5 = 0;
      puVar5 = puVar5 + 0xb;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    puVar15 = puVar15 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar12 = uVar9 * 0x208;
  puVar16 = (undefined4 *)(&DAT_00575b88 + iVar14);
  for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  iVar8 = FUN_004672d0((&DAT_00575ac8)[uVar9 * 0x82] - *(int *)(&DAT_00575ac0 + iVar12),
                       (&DAT_00575acc)[uVar9 * 0x82] - *(int *)(&DAT_00575ac4 + iVar12));
  *(byte *)((int)&DAT_00575ab0 + iVar12 + 2) = (byte)((int)((iVar8 >> 0x1c & 0xfU) + 1) >> 1) & 7;
  iVar8 = (&DAT_00575abc)[uVar9 * 0x82] + (&DAT_00575ab8)[uVar9 * 0x82] * 0x32;
  uVar10 = 0xffffffff;
  pbVar1 = (byte *)((int)&DAT_0053caf0 + iVar8 * 2 + 1);
  *pbVar1 = *pbVar1 | 0x40;
  (&DAT_00578804)[iVar8] = 0;
  uVar9 = DAT_005685f0;
  pcVar6 = s_Hole___004c591c;
  do {
    pcVar18 = pcVar6;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar18 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar18;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  pcVar6 = pcVar18 + -uVar10;
  pcVar18 = (char *)&DAT_0051a068;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar18 = pcVar18 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar18 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar18 = pcVar18 + 1;
  }
  pcVar6 = (char *)FUN_004ad425(uVar9,&DAT_0058a528,10);
  uVar9 = 0xffffffff;
  do {
    pcVar18 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar18 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar18;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar17 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar17 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar17;
  } while (cVar2 != '\0');
  pcVar6 = pcVar18 + -uVar9;
  pcVar18 = pcVar17 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar18 = pcVar18 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar18 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar18 = pcVar18 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar6 = &DAT_004c5914;
  do {
    pcVar18 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar18 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar18;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar17 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar17 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar17;
  } while (cVar2 != '\0');
  pcVar6 = pcVar18 + -uVar9;
  pcVar18 = pcVar17 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar18 = pcVar18 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar18 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar18 = pcVar18 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar6 = local_10;
  do {
    pcVar18 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar18 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar18;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar17 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar17 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar17;
  } while (cVar2 != '\0');
  pcVar6 = pcVar18 + -uVar9;
  pcVar18 = pcVar17 + -1;
  for (uVar10 = uVar9 >> 2; uVar11 = DAT_005685f0, uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar18 = pcVar18 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar18 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar18 = pcVar18 + 1;
  }
  pcVar6 = (char *)FUN_004ad425((int)*(short *)(&DAT_00575ab4 + uVar11 * 0x82),&DAT_0058a528,10);
  uVar9 = 0xffffffff;
  do {
    pcVar18 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar18 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar18;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar17 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar17 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar17;
  } while (cVar2 != '\0');
  pcVar6 = pcVar18 + -uVar9;
  pcVar18 = pcVar17 + -1;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar18 = pcVar18 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar10 = DAT_005685f0, uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar18 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar18 = pcVar18 + 1;
  }
  uVar9 = 0xffffffff;
  pcVar6 = &DAT_004c590c;
  do {
    pcVar18 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar18 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar18;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar17 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar17 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar17;
  } while (cVar2 != '\0');
  pcVar6 = pcVar18 + -uVar9;
  pcVar18 = pcVar17 + -1;
  for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar18 = pcVar18 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar18 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar18 = pcVar18 + 1;
  }
  uVar9 = (&DAT_00575cb0)[uVar10 * 0x82];
  if ((uVar9 & 0x1000) != 0) {
    uVar11 = 0xffffffff;
    pcVar6 = s_uphill_004c5904;
    do {
      pcVar18 = pcVar6;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar18 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar18;
    } while (cVar2 != '\0');
    uVar11 = ~uVar11;
    iVar8 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar17 = pcVar6;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    pcVar6 = pcVar18 + -uVar11;
    pcVar18 = pcVar17 + -1;
    for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar18 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar18 = pcVar18 + 1;
    }
  }
  if ((uVar9 & 0x2000) != 0) {
    uVar9 = 0xffffffff;
    pcVar6 = s_downhill_004c58f8;
    do {
      pcVar18 = pcVar6;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar18 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar18;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    iVar8 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar17 = pcVar6;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    pcVar6 = pcVar18 + -uVar9;
    pcVar18 = pcVar17 + -1;
    for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar18 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar18 = pcVar18 + 1;
    }
  }
  uVar9 = 0xffffffff;
  pcVar6 = &DAT_004c58f0;
  do {
    pcVar18 = pcVar6;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar18 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar18;
  } while (cVar2 != '\0');
  uVar9 = ~uVar9;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar17 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar17 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar17;
  } while (cVar2 != '\0');
  pcVar6 = pcVar18 + -uVar9;
  pcVar18 = pcVar17 + -1;
  for (uVar11 = uVar9 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar18 = pcVar18 + 4;
  }
  cVar2 = *(char *)(&DAT_00575ab0 + uVar10 * 0x82);
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pcVar18 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar18 = pcVar18 + 1;
  }
  pcVar6 = (char *)FUN_004ad425((int)cVar2,&DAT_0058a528,10);
  uVar9 = DAT_005685f0;
  uVar10 = 0xffffffff;
  do {
    pcVar18 = pcVar6;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar18 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar18;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar17 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar17 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar17;
  } while (cVar2 != '\0');
  pcVar6 = pcVar18 + -uVar10;
  pcVar18 = pcVar17 + -1;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar18 = pcVar18 + 4;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar18 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar18 = pcVar18 + 1;
  }
  uVar10 = (&DAT_00575cb0)[uVar9 * 0x82];
  if ((uVar10 & 0x20) != 0) {
    uVar11 = 0xffffffff;
    pcVar6 = s_with_a_dogleg_to_the_left_004c58d4;
    do {
      pcVar18 = pcVar6;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar18 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar18;
    } while (cVar2 != '\0');
    uVar11 = ~uVar11;
    iVar8 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar17 = pcVar6;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    pcVar6 = pcVar18 + -uVar11;
    pcVar18 = pcVar17 + -1;
    for (uVar13 = uVar11 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar18 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar18 = pcVar18 + 1;
    }
  }
  if ((uVar10 & 0x40) != 0) {
    uVar10 = 0xffffffff;
    pcVar6 = s_with_a_dogleg_to_the_right_004c58b8;
    do {
      pcVar18 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar18 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar18;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar8 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar17 = pcVar6;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    pcVar6 = pcVar18 + -uVar10;
    pcVar18 = pcVar17 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar18 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar18 = pcVar18 + 1;
    }
  }
  uVar10 = 0xffffffff;
  pcVar6 = s___is_now_open_for_play__004c58a0;
  do {
    pcVar18 = pcVar6;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar18 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar18;
  } while (cVar2 != '\0');
  uVar10 = ~uVar10;
  iVar8 = -1;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    pcVar17 = pcVar6;
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    pcVar17 = pcVar6 + 1;
    cVar2 = *pcVar6;
    pcVar6 = pcVar17;
  } while (cVar2 != '\0');
  pcVar6 = pcVar18 + -uVar10;
  pcVar18 = pcVar17 + -1;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar18 = pcVar18 + 4;
  }
  for (uVar10 = uVar10 & 3; iVar8 = DAT_005a6364, uVar10 != 0; uVar10 = uVar10 - 1) {
    *pcVar18 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar18 = pcVar18 + 1;
  }
  iVar14 = -1;
  if (uVar9 == 6) {
    FUN_0040e5f0(0);
    uVar9 = DAT_005685f0;
LAB_0040f008:
    if (uVar9 != 10) goto LAB_0040f01d;
  }
  else if (uVar9 != 10) {
    if (((int)uVar9 <= DAT_005a6364 + -5) || (0xe < DAT_005a6364)) goto LAB_0040f008;
    pcVar6 = s_New_players_are_flocking_to_your_004c5870;
    if ((uVar9 & 1) == 0) {
      pcVar6 = s_As_your_course_grows_you_can_add_004c583c;
    }
    uVar10 = 0xffffffff;
    do {
      pcVar18 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar18 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar18;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar14 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar17 = pcVar6;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    pcVar6 = pcVar18 + -uVar10;
    pcVar18 = pcVar17 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar18 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar18 = pcVar18 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = s_You_may_now_build_a_004c5824;
    do {
      pcVar18 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar18 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar18;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar14 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar17 = pcVar6;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    pcVar6 = pcVar18 + -uVar10;
    pcVar18 = pcVar17 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar18 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar18 = pcVar18 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = s_Pathway_004c26b0 + iVar8 * 0x14;
    do {
      pcVar18 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar18 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar18;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar14 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar17 = pcVar6;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    pcVar6 = pcVar18 + -uVar10;
    pcVar18 = pcVar17 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar18 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar18 = pcVar18 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = &DAT_004c581c;
    do {
      pcVar18 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar18 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar18;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar14 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar17 = pcVar6;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    pcVar6 = pcVar18 + -uVar10;
    pcVar18 = pcVar17 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar18 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar18 = pcVar18 + 1;
    }
    uVar10 = 0xffffffff;
    pcVar6 = s_Pathway_004c26b0 + iVar8 * 0x14;
    do {
      pcVar18 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar18 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar18;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar8 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar17 = pcVar6;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    pcVar6 = pcVar18 + -uVar10;
    pcVar18 = pcVar17 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar18 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar18 = pcVar18 + 1;
    }
    switch(DAT_005a6364) {
    case 3:
      pcVar6 = s_a_ball_washer_near_the_tee_will_i_004c57ac;
      break;
    default:
      goto LAB_0040efeb;
    case 5:
      uVar10 = 0xffffffff;
      pcVar6 = s_is_a_quick_way_to_raise_some_cas_004c5750;
      do {
        pcVar18 = pcVar6;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar18 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar18;
      } while (cVar2 != '\0');
      uVar10 = ~uVar10;
      iVar8 = -1;
      pcVar6 = (char *)&DAT_0051a068;
      do {
        pcVar17 = pcVar6;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar17 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar2 != '\0');
      pcVar6 = pcVar18 + -uVar10;
      pcVar18 = pcVar17 + -1;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar18 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar18 = pcVar18 + 1;
      }
      pcVar6 = s_may_build_luxurious_villas_or_un_004c5720;
      break;
    case 6:
      pcVar6 = s_allows_your_golfers_with_imagina_004c5694;
      break;
    case 7:
      pcVar6 = s_will_feed_golfers_who_get_hungry_004c56dc;
      break;
    case 8:
      pcVar6 = s_allows_your_accurate_golfers_to_i_004c5618;
      break;
    case 9:
      pcVar6 = s_helps_your_players_to_begin_play_004c55dc;
      break;
    case 10:
      pcVar6 = s_allows_your_long_hitters_to_impr_004c5654;
      break;
    case 0xb:
      pcVar6 = s_increases_your_players_speed_of_p_004c54f4;
      break;
    case 0xc:
      pcVar6 = s_increases_the_value_of_all_homes_004c5558;
      break;
    case 0xd:
      pcVar6 = s_keeps_your_players_from_getting_t_004c5594;
      break;
    case 0xe:
      pcVar6 = s_allows_you_to_charge_higher_gree_004c551c;
    }
    uVar10 = 0xffffffff;
    do {
      pcVar18 = pcVar6;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar18 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar18;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    iVar8 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar17 = pcVar6;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar17 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar17;
    } while (cVar2 != '\0');
    pcVar6 = pcVar18 + -uVar10;
    pcVar18 = pcVar17 + -1;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar18 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar18 = pcVar18 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar18 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar18 = pcVar18 + 1;
    }
LAB_0040efeb:
    iVar14 = -DAT_005a6364;
    DAT_005a6364 = DAT_005a6364 + 1;
    goto LAB_0040f008;
  }
  FUN_0040e5f0(1);
  uVar9 = DAT_005685f0;
LAB_0040f01d:
  if (uVar9 == 0x12) {
    FUN_0040e5f0(2);
    uVar9 = DAT_005685f0;
  }
  if (DAT_00834170 != 0) {
    FUN_0040cb00(0x80004210,1,iVar14);
    uVar9 = DAT_005685f0;
  }
  if (uVar9 == 1) {
    lVar3 = (longlong)(_DAT_00578150 + DAT_00575cc0 * 2) * 0x55555556;
    DAT_00585860 = (char)((ulonglong)lVar3 >> 0x20) - (char)(lVar3 >> 0x3f);
    lVar3 = (longlong)(_DAT_00578154 + DAT_00575cc4 * 2) * 0x55555556;
    DAT_00585861 = (char)((ulonglong)lVar3 >> 0x20) - (char)(lVar3 >> 0x3f);
  }
  else {
    if (uVar9 == 9) {
      FUN_0046e7b0(6,DAT_00576d10 * 0x400 + 0x200,DAT_00576d14 * 0x400 + 0x200);
      uVar9 = DAT_005685f0;
    }
    if (uVar9 == 0x12) {
      FUN_0046e7b0(0xe,DAT_00577f58 * 0x400 + 0x200,DAT_00577f5c * 0x400 + 0x200);
    }
  }
  iVar8 = 1;
  DAT_005685f0 = 1;
  if (DAT_00575cb8 != '\0') {
    puVar7 = &DAT_00575cb8;
    do {
      pcVar6 = puVar7 + 0x208;
      puVar7 = puVar7 + 0x208;
      iVar8 = iVar8 + 1;
      DAT_005685f0 = iVar8;
    } while (*pcVar6 != '\0');
  }
  DAT_004c2848 = 0xffffffff;
  return;
}

