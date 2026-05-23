/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040a4e0 @ 0x0040A4E0 */
/* Body size: 1213 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a4e0(int param_1,int param_2)

{
  byte *pbVar1;
  short *psVar2;
  char cVar3;
  ushort uVar4;
  short sVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  
  iVar7 = FUN_0040bf60(param_1,param_2);
  if (iVar7 != 0) {
    return;
  }
  iVar11 = param_1 * 0x32;
  iVar7 = iVar11 + param_2;
  pbVar1 = (byte *)((int)&DAT_0053caf0 + iVar7 * 2 + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  if (((&DAT_0053caf0)[iVar7] & 0x8000) != 0) {
LAB_0040a6da:
    FUN_004481b0(0x18,100,0,0,0);
    return;
  }
  if ((((&DAT_0053caf0)[iVar7] & 0x400) != 0) &&
     (iVar8 = FUN_0040df80(param_1,param_2), iVar8 != -1)) {
    uVar9 = 0xffffffff;
    pcVar12 = s_Do_you_really_want_to_demolish_y_004c5188;
    do {
      pcVar14 = pcVar12;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar14 = pcVar12 + 1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar14;
    } while (cVar3 != '\0');
    uVar9 = ~uVar9;
    pcVar12 = pcVar14 + -uVar9;
    pcVar14 = (char *)&DAT_0051a068;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar14 = pcVar14 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar12 = s_Pathway_004c26b0 + (short)(&DAT_0058bcb8)[iVar8 * 8] * 0x14;
    do {
      pcVar14 = pcVar12;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar14 = pcVar12 + 1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar14;
    } while (cVar3 != '\0');
    uVar9 = ~uVar9;
    iVar7 = -1;
    pcVar12 = (char *)&DAT_0051a068;
    do {
      pcVar13 = pcVar12;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar13 = pcVar12 + 1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar3 != '\0');
    pcVar12 = pcVar14 + -uVar9;
    pcVar14 = pcVar13 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar14 = pcVar14 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar12 = s___Yes_I_do__Ooops__no__004c516c;
    do {
      pcVar14 = pcVar12;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar14 = pcVar12 + 1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar14;
    } while (cVar3 != '\0');
    uVar9 = ~uVar9;
    iVar7 = -1;
    pcVar12 = (char *)&DAT_0051a068;
    do {
      pcVar13 = pcVar12;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar13 = pcVar12 + 1;
      cVar3 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar3 != '\0');
    pcVar12 = pcVar14 + -uVar9;
    pcVar14 = pcVar13 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
      pcVar12 = pcVar12 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar14 = *pcVar12;
      pcVar12 = pcVar12 + 1;
      pcVar14 = pcVar14 + 1;
    }
    iVar7 = FUN_0046d6e0(400,100,1,1,0);
    if (iVar7 != 0) {
      return;
    }
    FUN_0040e400(iVar8);
    return;
  }
  bVar6 = *(byte *)((int)&DAT_005830b8 + param_2 + iVar11);
  if (bVar6 == 0xff) {
    uVar4 = (&DAT_0053caf0)[iVar7];
    if ((uVar4 & 0x200) != 0) {
      (&DAT_0053caf0)[iVar7] = uVar4 & 0xfdff;
      return;
    }
    if (((uVar4 & 0x400) != 0) && (iVar8 = FUN_0040df80(param_1,param_2), iVar8 != -1)) {
      uVar9 = 0xffffffff;
      pcVar12 = s_Do_you_really_want_to_demolish_y_004c5188;
      do {
        pcVar14 = pcVar12;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar12 + 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar14;
      } while (cVar3 != '\0');
      uVar9 = ~uVar9;
      pcVar12 = pcVar14 + -uVar9;
      pcVar14 = (char *)&DAT_0051a068;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar14 = pcVar14 + 4;
      }
      sVar5 = (&DAT_0058bcb8)[iVar8 * 8];
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar14 = pcVar14 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar12 = s_Pathway_004c26b0 + sVar5 * 0x14;
      do {
        pcVar14 = pcVar12;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar12 + 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar14;
      } while (cVar3 != '\0');
      uVar9 = ~uVar9;
      iVar7 = -1;
      pcVar12 = (char *)&DAT_0051a068;
      do {
        pcVar13 = pcVar12;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar13 = pcVar12 + 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar3 != '\0');
      pcVar12 = pcVar14 + -uVar9;
      pcVar14 = pcVar13 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar14 = pcVar14 + 1;
      }
      uVar9 = 0xffffffff;
      pcVar12 = s___Yes_I_do__Ooops__no__004c516c;
      do {
        pcVar14 = pcVar12;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar14 = pcVar12 + 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar14;
      } while (cVar3 != '\0');
      uVar9 = ~uVar9;
      iVar7 = -1;
      pcVar12 = (char *)&DAT_0051a068;
      do {
        pcVar13 = pcVar12;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar13 = pcVar12 + 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar13;
      } while (cVar3 != '\0');
      pcVar12 = pcVar14 + -uVar9;
      pcVar14 = pcVar13 + -1;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar14 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar14 = pcVar14 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar14 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar14 = pcVar14 + 1;
      }
      iVar7 = FUN_0046d6e0(400,100,1,1,0);
      if (iVar7 != 0) {
        return;
      }
      FUN_0040e400(iVar8);
      return;
    }
    uVar4 = (&DAT_0053caf0)[iVar7];
    uVar9 = (uint)uVar4;
    if ((uVar4 & 0x20) != 0) {
      (&DAT_0053caf0)[iVar7] = uVar4 & 0xffdf;
      return;
    }
    if ((uVar4 & 0x1000) != 0) {
      (&DAT_0053caf0)[iVar7] = uVar4 & 0xefff;
      return;
    }
    cVar3 = *(char *)((int)&DAT_005722e8 + param_2 + iVar11);
    if (cVar3 == '\0') {
      uVar10 = uVar9 & 0x1f;
      *(undefined1 *)(&DAT_00575ab0 + uVar10 * 0x82) = 0;
      (&DAT_00575ab8)[uVar10 * 0x82] = 0;
      if ((int)DAT_005685f0 <= (int)uVar10) goto LAB_0040a982;
    }
    else {
      if ((cVar3 != '\x01') || ((uVar4 & 0x80) == 0)) goto LAB_0040a982;
      uVar10 = uVar9 & 0x1f;
      *(undefined1 *)(&DAT_00575ab0 + uVar10 * 0x82) = 0;
      (&DAT_00575ac8)[uVar10 * 0x82] = 0;
      if ((int)DAT_005685f0 <= (int)uVar10) goto LAB_0040a982;
    }
    DAT_005685f0 = uVar9 & 0x1f;
    goto LAB_0040a982;
  }
  if ((bVar6 & 0x80) == 0) {
    if ((char)bVar6 < '}') {
      uVar4 = (&DAT_0053caf0)[iVar7];
      uVar9 = uVar4 & 0x1f;
      if (((_DAT_0059e7b8 & 0x200000) != 0) &&
         ((cVar3 = *(char *)((int)&DAT_005722e8 + param_2 + iVar11), cVar3 == '\0' ||
          ((cVar3 == '\x01' && ((uVar4 & 0x80) != 0)))))) goto LAB_0040a6da;
      cVar3 = *(char *)((int)&DAT_005722e8 + param_2 + iVar11);
      if (cVar3 == '\0') {
        if ((uVar4 & 0x1f) != 0) {
          (&DAT_0053caf0)[iVar7] = uVar4 & 0xffe0;
          (&DAT_00575ab8)[uVar9 * 0x82] = 0;
          *(undefined1 *)(&DAT_00575ab0 + uVar9 * 0x82) = 0;
          goto joined_r0x0040a765;
        }
      }
      else if ((cVar3 == '\x01') && ((uVar4 & 0x1f) != 0)) {
        (&DAT_0053caf0)[iVar7] = uVar4 & 0xffe0;
        *(undefined1 *)(&DAT_00575ab0 + uVar9 * 0x82) = 0;
        (&DAT_00575ac8)[uVar9 * 0x82] = 0;
joined_r0x0040a765:
        if ((int)uVar9 < (int)DAT_005685f0) {
          DAT_005685f0 = uVar9;
        }
      }
      FUN_00405e30(param_1,param_2,(int)(char)bVar6);
    }
  }
  else {
    if ((bVar6 & 0x7f) == 0x10) {
      FUN_00405e30(param_1,param_2,4);
    }
    bVar6 = *(byte *)((int)&DAT_005830b8 + param_2 + iVar11) & 0x7f;
    if (bVar6 == 0x13) {
      (&DAT_0053caf0)[iVar7] = (&DAT_0053caf0)[iVar7] & 0xffdf;
    }
    if (bVar6 == 1) {
      pbVar1 = (byte *)((int)&DAT_0053caf0 + iVar7 * 2 + 1);
      *pbVar1 = *pbVar1 & 0xfd;
    }
    else if (bVar6 == 0) {
      (&DAT_0053caf0)[iVar7] = (&DAT_0053caf0)[iVar7] & 0xffdf;
    }
    else {
      uVar4 = (&DAT_0053caf0)[iVar7];
      if ((uVar4 & 0x1000) == 0) {
        (&DAT_0053caf0)[iVar7] = uVar4 & 0xeddf;
      }
      else {
        (&DAT_0053caf0)[iVar7] = uVar4 & 0xefff;
      }
    }
  }
  DAT_00571fd4 = DAT_00571fd4 + (char)(&DAT_0059c090)[param_2 + iVar11];
  FUN_0040c890((int)(char)(&DAT_0059c090)[param_2 + iVar11],param_1 * 0x400 + 0x200,
               param_2 * 0x400 + 0x200,0xffffffff);
  iVar7 = (int)DAT_005a6d3c;
  *(undefined1 *)((int)&DAT_005830b8 + param_2 + iVar11) = 0xff;
  psVar2 = (short *)((int)&DAT_00584214 + (iVar7 % 100) * 0x14 + 2);
  *psVar2 = *psVar2 + (short)(char)(&DAT_0059c090)[param_2 + iVar11];
LAB_0040a982:
  _DAT_004c2e04 = param_1;
  _DAT_005a47e4 = param_2;
  FUN_0042f7a0();
  FUN_0042f2c0();
  return;
}

