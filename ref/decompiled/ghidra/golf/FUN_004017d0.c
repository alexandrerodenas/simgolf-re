/* Ghidra decompiled: golf.exe */
/* Function: FUN_004017d0 @ 0x004017D0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004017d0(int param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  char *pcVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 local_8;
  int local_4;
  
  iVar1 = param_1;
  iVar12 = param_1 * 0x3c;
  iVar11 = (short)(&DAT_0056d1de)[param_1 * 0x1e] * 0x400 + *(int *)(&DAT_0056d1e8 + iVar12);
  local_4 = (short)(&DAT_0056d1e0)[param_1 * 0x1e] * 0x400 + *(int *)(&DAT_0056d1ec + iVar12);
  iVar13 = (int)(short)(&DAT_0056d1d8)[param_1 * 0x1e] + (int)*(short *)(&DAT_0056d1e4 + iVar12);
  iVar4 = FUN_0042fb90(iVar11,local_4,&local_8,&param_1,0);
  if (iVar4 == 0) {
    if (((DAT_0059e7b8 & 4) == 0) && (sVar3 = FUN_0045c1e0(500), sVar3 == 0)) {
      *(undefined2 *)(&DAT_0056d1e2 + iVar12) = 500;
    }
  }
  else if (*(short *)(&DAT_0056d1e2 + iVar12) < 0x80) {
    iVar4 = 0;
    psVar5 = &DAT_0058bcba;
    do {
      if ((((psVar5[-1] == 5) && (0 < *(int *)(psVar5 + 3))) &&
          (*psVar5 == (&DAT_0056d1de)[iVar1 * 0x1e])) &&
         (psVar5[1] == (&DAT_0056d1e0)[iVar1 * 0x1e])) {
        iVar4 = *(int *)(psVar5 + 3) + -1;
      }
      psVar5 = psVar5 + 8;
    } while ((int)psVar5 < 0x58ccba);
    iVar8 = DAT_005685f4 - (uint)(byte)(&DAT_0056d1f0)[iVar12];
    cVar2 = (char)((int)(char)(&DAT_0056d1f2)[iVar12] % (int)(&DAT_0053f3e8)[iVar13]);
    (&DAT_0056d1f2)[iVar12] = cVar2;
    _DAT_004e9a80 = FUN_0043d6f0(iVar13,(int)cVar2,iVar8 - 2U & 7);
    FUN_00462a30(local_8,param_1,param_1,0x1e,0x28,_DAT_004e9a80,4,iVar4 + 0x9cU | 0x100);
    if (((DAT_0059e7b8 & 4) == 0) &&
       (cVar2 = (&DAT_0056d1f2)[iVar12], iVar4 = (&DAT_0053f3e8)[iVar13],
       (&DAT_0056d1f2)[iVar12] = cVar2 + '\x01', iVar4 <= (char)(cVar2 + '\x01'))) {
      (&DAT_0056d1f2)[iVar12] = 0;
    }
    DAT_0051a068._0_1_ = 0;
    pcVar6 = (char *)FUN_004ad425((*(int *)(&DAT_0056d1e8 + iVar12) << 1) >> 10,&DAT_004e9a70,10);
    uVar9 = 0xffffffff;
    do {
      pcVar15 = pcVar6;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar15 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar15;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar14 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar14;
    } while (cVar2 != '\0');
    pcVar6 = pcVar15 + -uVar9;
    pcVar15 = pcVar14 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar15 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar15 = pcVar15 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar6 = &DAT_004c1430;
    do {
      pcVar15 = pcVar6;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar15 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar15;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar14 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar14;
    } while (cVar2 != '\0');
    pcVar6 = pcVar15 + -uVar9;
    pcVar15 = pcVar14 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar15 = pcVar15 + 4;
    }
    iVar4 = *(int *)(&DAT_0056d1ec + iVar12);
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar15 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar15 = pcVar15 + 1;
    }
    pcVar6 = (char *)FUN_004ad425((iVar4 << 1) >> 10,&DAT_004e9a70,10);
    uVar9 = 0xffffffff;
    do {
      pcVar15 = pcVar6;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar15 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar15;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    iVar4 = -1;
    pcVar6 = (char *)&DAT_0051a068;
    do {
      pcVar14 = pcVar6;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar14 = pcVar6 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar14;
    } while (cVar2 != '\0');
    pcVar6 = pcVar15 + -uVar9;
    pcVar15 = pcVar14 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar15 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar15 = pcVar15 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar15 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar15 = pcVar15 + 1;
    }
  }
  uVar9 = DAT_0059e7b8;
  if (*(short *)(&DAT_0056d1e2 + iVar12) == 0) {
    if ((((&DAT_0056d1f2)[iVar12] == '\0') && (*(short *)(&DAT_0056d1e4 + iVar12) != 0x15a)) &&
       (*(short *)(&DAT_0056d1e4 + iVar12) != 0x140)) {
      *(undefined2 *)(&DAT_0056d1e4 + iVar12) = 0x140;
      sVar3 = FUN_0045c1e0(0x40);
      *(short *)(&DAT_0056d1e2 + iVar12) = sVar3 + 0x40;
    }
    if ((&DAT_0056d1f1)[iVar12] == '\0') {
      if ((*(short *)(&DAT_0056d1e4 + iVar12) == 0x140) && (sVar3 = FUN_0045c1e0(8), sVar3 == 0)) {
        iVar4 = *(int *)(&DAT_0056d1e8 + iVar12);
        iVar13 = *(int *)(&DAT_0056d1ec + iVar12);
        cVar2 = FUN_0045c1e0(3);
        bVar7 = ((&DAT_0056d1f0)[iVar12] + cVar2) - 1U & 7;
        (&DAT_0056d1f0)[iVar12] = bVar7;
        iVar4 = ((iVar4 << 1) >> 10) + (&DAT_004c2878)[(char)bVar7];
        iVar13 = ((iVar13 << 1) >> 10) + (&DAT_004c2898)[(char)bVar7];
        if ((iVar4 < 0) || (((iVar13 < 0 || (3 < iVar4)) || (3 < iVar13)))) {
          sVar3 = FUN_0045c1e0((-((DAT_0059e7b8 & 0x200000) != 0) & 0x28U) + 0x18);
          if (sVar3 == 0) {
            FUN_0040c500((short)(&DAT_0056d1d8)[iVar1 * 0x1e] + 0x82,iVar11,local_4,0);
            *(undefined2 *)(&DAT_0056d1e4 + iVar12) = 0x14d;
            (&DAT_0056d1f2)[iVar12] = 0;
          }
        }
        else if ((&DAT_004e6d70)[*(short *)(&DAT_0056d1da + iVar12) * 0x74 + iVar13 + iVar4 * 6] ==
                 -1) {
          (&DAT_0056d1f1)[iVar12] = 0x10;
        }
      }
      if ((&DAT_0056d1f1)[iVar12] == '\0') {
        return;
      }
    }
    *(undefined2 *)(&DAT_0056d1e4 + iVar12) = 0x15a;
    *(int *)(&DAT_0056d1e8 + iVar12) =
         *(int *)(&DAT_0056d1e8 + iVar12) +
         ((int)((&DAT_004c2878)[(char)(&DAT_0056d1f0)[iVar12]] * 0x400 +
               ((&DAT_004c2878)[(char)(&DAT_0056d1f0)[iVar12]] * 0x400 >> 0x1f & 0x1fU)) >> 5);
    *(int *)(&DAT_0056d1ec + iVar12) =
         *(int *)(&DAT_0056d1ec + iVar12) +
         ((int)((&DAT_004c2898)[(char)(&DAT_0056d1f0)[iVar12]] * 0x400 +
               ((&DAT_004c2898)[(char)(&DAT_0056d1f0)[iVar12]] * 0x400 >> 0x1f & 0x1fU)) >> 5);
    cVar2 = (&DAT_0056d1f1)[iVar12];
    (&DAT_0056d1f1)[iVar12] = cVar2 + -1;
    if ((char)(cVar2 + -1) < '\x01') {
      *(undefined2 *)(&DAT_0056d1e4 + iVar12) = 0x140;
    }
  }
  else {
    *(undefined2 *)(&DAT_0056d1e4 + iVar12) = 0x140;
    if ((uVar9 & 4) == 0) {
      *(short *)(&DAT_0056d1e2 + iVar12) = *(short *)(&DAT_0056d1e2 + iVar12) + -1;
      return;
    }
  }
  return;
}

