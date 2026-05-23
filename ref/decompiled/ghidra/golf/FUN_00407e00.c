/* Ghidra decompiled: golf.exe */
/* Function: FUN_00407e00 @ 0x00407E00 */
/* Body size: 4998 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407e00(int param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  char *pcVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  char *pcVar25;
  char *pcVar26;
  int iVar27;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar14 = param_3;
  iVar13 = param_1;
  bVar3 = true;
  iVar16 = param_1 * 0x388;
  uVar20 = (uint)(short)(&DAT_0059fc60)[param_1 * 0x1c4];
  iVar17 = uVar20 * 0x100;
  local_48 = (&DAT_005794c4)[uVar20 * 0x40];
  local_40 = (&DAT_005794c0)[uVar20 * 0x40];
  iVar11 = (&DAT_005794c0)[(short)(&DAT_0057955a)[uVar20 * 0x80] * 0x40];
  local_4c = local_40;
  if (iVar11 < local_40) {
    local_4c = iVar11;
  }
  if (local_40 < iVar11) {
    local_40 = iVar11;
  }
  iVar11 = (&DAT_005794c4)[(short)(&DAT_0057955a)[uVar20 * 0x80] * 0x40];
  param_1 = local_48;
  if (iVar11 < local_48) {
    param_1 = iVar11;
  }
  if (local_48 < iVar11) {
    local_48 = iVar11;
  }
  if ((param_4 == 0) && (uVar20 != DAT_005a59f8)) {
    if (((&DAT_004d60a8)[(short)(&DAT_0057956e)[uVar20 * 0x80] * 0x230] & 8) != 0) {
      FUN_004a0890(uVar20);
    }
    if (((&DAT_004d60a8)
         [(short)(&DAT_0057956e)[(short)(&DAT_0057955a)[uVar20 * 0x80] * 0x80] * 0x230] & 0x10) != 0
       ) {
      FUN_004a0890(uVar20 ^ 1);
    }
  }
  if ((local_4c < 1) || (param_1 < 1)) {
    if (uVar20 != DAT_005a59f8) {
      pbVar9 = (byte *)((char)(&DAT_005794d9)[iVar17] + 0x5849e3 +
                       (short)(&DAT_0057956e)[uVar20 * 0x80] * 0x2c);
      *pbVar9 = *pbVar9 | 1;
      return;
    }
    bVar3 = false;
    local_44 = uVar20;
  }
  else {
    local_44 = 0x98;
    puVar18 = (undefined4 *)(&DAT_0059fde8 + iVar16);
    puVar21 = &DAT_00582cb8;
    for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar21 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar21 = puVar21 + 1;
    }
    puVar18 = (undefined4 *)(&DAT_0059fee8 + iVar16);
    puVar21 = &DAT_00582db8;
    for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar21 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar21 = puVar21 + 1;
    }
    iVar11 = 0;
    DAT_00582d5a = 0x99;
    if (0 < *(short *)(&DAT_0059fc64 + iVar16)) {
      do {
        iVar7 = (iVar13 * 0xe2 + iVar11) * 4;
        iVar7 = FUN_0042fb90(*(undefined4 *)(&DAT_0059fc68 + iVar7),
                             *(undefined4 *)(&DAT_0059fce8 + iVar7),&local_2c,&local_28,0);
        if (iVar7 != 0) {
          if (iVar11 == 0) {
            FUN_0040bf00(local_2c,local_28 + 1);
          }
          else {
            FUN_0040bf20(local_2c,local_28 + 1,0x80000000,2,7);
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(short *)(&DAT_0059fc64 + iVar16));
    }
    iVar11 = 0;
    if (0 < *(short *)(&DAT_0059fc64 + iVar16)) {
      local_1c = iVar13 * 0xe2;
      do {
        iVar19 = (local_1c + iVar11) * 4;
        iVar7 = FUN_0042fb90(*(undefined4 *)(&DAT_0059fc68 + iVar19),
                             *(undefined4 *)(&DAT_0059fce8 + iVar19),&local_2c,&local_28,0);
        if (iVar7 != 0) {
          iVar7 = *(int *)(&DAT_0059fd68 + iVar19) * DAT_004c2e00 * DAT_004c2844;
          iVar7 = -((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2);
          local_28 = local_28 + ((int)(iVar7 + (iVar7 >> 0x1f & 0xfU)) >> 4);
          if (iVar11 == 0) {
            FUN_0040bf00(local_2c,local_28);
          }
          else {
            FUN_0040bf20(local_2c,local_28,0x80007fff,2,7);
          }
          if (local_2c < local_4c) {
            local_4c = local_2c;
          }
          if (local_40 < local_2c) {
            local_40 = local_2c;
          }
          if (local_28 < param_1) {
            param_1 = local_28;
          }
          if (local_48 < local_28) {
            local_48 = local_28;
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(short *)(&DAT_0059fc64 + iVar16));
    }
  }
  DAT_0051a068._0_1_ = 0;
  FUN_004676e0(uVar20,0);
  local_1c = FUN_0040bfa0((&DAT_0057958c)[uVar20 * 0x40],(&DAT_00579590)[uVar20 * 0x40]);
  if (param_4 == 0) {
    iVar11 = local_44 * 0x100;
    cVar4 = (&DAT_005794d4)[iVar11];
    if (cVar4 == '\0') {
      pcVar22 = s_launches_a_004c508c;
    }
    else if (cVar4 < '\a') {
      pcVar22 = s_knocks_a_004c5080;
    }
    else {
      pcVar22 = s_lofts_a_004c5074;
      if (cVar4 == '\r') {
        pcVar22 = s_snakes_a_004c5068;
      }
    }
    uVar8 = 0xffffffff;
    do {
      pcVar26 = pcVar22;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar26 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar26;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    iVar16 = -1;
    pcVar22 = (char *)&DAT_0051a068;
    do {
      pcVar25 = pcVar22;
      if (iVar16 == 0) break;
      iVar16 = iVar16 + -1;
      pcVar25 = pcVar22 + 1;
      cVar1 = *pcVar22;
      pcVar22 = pcVar25;
    } while (cVar1 != '\0');
    pcVar22 = pcVar26 + -uVar8;
    pcVar26 = pcVar25 + -1;
    for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
      pcVar22 = pcVar22 + 4;
      pcVar26 = pcVar26 + 4;
    }
    cVar1 = (&DAT_005794d3)[iVar11];
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar26 = *pcVar22;
      pcVar22 = pcVar22 + 1;
      pcVar26 = pcVar26 + 1;
    }
    if ('\n' < cVar1) {
      uVar8 = 0xffffffff;
      pcVar22 = s_tricky_004c5060;
      do {
        pcVar26 = pcVar22;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar26 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar26;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar16 = -1;
      pcVar22 = (char *)&DAT_0051a068;
      do {
        pcVar25 = pcVar22;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar25 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar25;
      } while (cVar1 != '\0');
      pcVar22 = pcVar26 + -uVar8;
      pcVar26 = pcVar25 + -1;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar26 = pcVar26 + 4;
      }
      cVar1 = (&DAT_005794d3)[iVar11];
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar26 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      }
    }
    if (cVar1 == '\n') {
      uVar8 = 0xffffffff;
      pcVar22 = s_tough_004c5058;
      do {
        pcVar26 = pcVar22;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar26 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar26;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      iVar11 = -1;
      pcVar22 = (char *)&DAT_0051a068;
      do {
        pcVar25 = pcVar22;
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        pcVar25 = pcVar22 + 1;
        cVar1 = *pcVar22;
        pcVar22 = pcVar25;
      } while (cVar1 != '\0');
      pcVar22 = pcVar26 + -uVar8;
      pcVar26 = pcVar25 + -1;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar26 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      }
    }
    if (cVar4 == '\0') {
      pcVar22 = s_drive_004c5040;
    }
    else if (cVar4 == '\r') {
      pcVar22 = &DAT_004c5050;
    }
    else {
      FUN_0040a9a0((int)cVar4);
      pcVar22 = s_shot_004c5048;
    }
    uVar8 = 0xffffffff;
    do {
      pcVar26 = pcVar22;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar26 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar26;
    } while (cVar4 != '\0');
    uVar8 = ~uVar8;
    iVar11 = -1;
    pcVar22 = (char *)&DAT_0051a068;
    do {
      pcVar25 = pcVar22;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar25 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar25;
    } while (cVar4 != '\0');
    pcVar22 = pcVar26 + -uVar8;
    pcVar26 = pcVar25 + -1;
    for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
      pcVar22 = pcVar22 + 4;
      pcVar26 = pcVar26 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar26 = *pcVar22;
      pcVar22 = pcVar22 + 1;
      pcVar26 = pcVar26 + 1;
    }
    pcVar22 = (char *)FUN_004ad425(param_3,&DAT_0058a528,10);
    uVar8 = 0xffffffff;
    do {
      pcVar26 = pcVar22;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar26 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar26;
    } while (cVar4 != '\0');
    uVar8 = ~uVar8;
    iVar11 = -1;
    pcVar22 = (char *)&DAT_0051a068;
    do {
      pcVar25 = pcVar22;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar25 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar25;
    } while (cVar4 != '\0');
    pcVar22 = pcVar26 + -uVar8;
    pcVar26 = pcVar25 + -1;
    for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
      pcVar22 = pcVar22 + 4;
      pcVar26 = pcVar26 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar26 = *pcVar22;
      pcVar22 = pcVar22 + 1;
      pcVar26 = pcVar26 + 1;
    }
    uVar8 = 0xffffffff;
    pcVar22 = &DAT_004c5038;
    do {
      pcVar26 = pcVar22;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar26 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar26;
    } while (cVar4 != '\0');
    uVar8 = ~uVar8;
    iVar11 = -1;
    pcVar22 = (char *)&DAT_0051a068;
    do {
      pcVar25 = pcVar22;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar25 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar25;
    } while (cVar4 != '\0');
    pcVar22 = pcVar26 + -uVar8;
    pcVar26 = pcVar25 + -1;
    for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
      pcVar22 = pcVar22 + 4;
      pcVar26 = pcVar26 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar26 = *pcVar22;
      pcVar22 = pcVar22 + 1;
      pcVar26 = pcVar26 + 1;
    }
    if (param_2 == 0) {
      if (((&DAT_0057958c)[uVar20 * 0x40] !=
           (&DAT_00575ac8)[(char)(&DAT_005794d9)[iVar17] * 0x82] * 0x400 + 0x200) ||
         (pcVar22 = s_into_the_hole_004c4fe8,
         (&DAT_00579590)[uVar20 * 0x40] !=
         (&DAT_00575acc)[(char)(&DAT_005794d9)[iVar17] * 0x82] * 0x400 + 0x200)) {
        pcVar22 = s_inches_from_the_hole_004c4fd0;
      }
    }
    else {
      iVar11 = FUN_0040bfa0((&DAT_0057958c)[uVar20 * 0x40],(&DAT_00579590)[uVar20 * 0x40]);
      if (iVar11 == 1) {
        uVar8 = 0xffffffff;
        pcVar22 = s_to_within_004c502c;
        do {
          pcVar26 = pcVar22;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar26 = pcVar22 + 1;
          cVar4 = *pcVar22;
          pcVar22 = pcVar26;
        } while (cVar4 != '\0');
        uVar8 = ~uVar8;
        iVar11 = -1;
        pcVar22 = (char *)&DAT_0051a068;
        do {
          pcVar25 = pcVar22;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pcVar25 = pcVar22 + 1;
          cVar4 = *pcVar22;
          pcVar22 = pcVar25;
        } while (cVar4 != '\0');
        pcVar22 = pcVar26 + -uVar8;
        pcVar26 = pcVar25 + -1;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
          pcVar22 = pcVar22 + 4;
          pcVar26 = pcVar26 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar26 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          pcVar26 = pcVar26 + 1;
        }
        if (param_2 < 8) {
          pcVar22 = (char *)FUN_004ad425(param_2 * 2,&DAT_0058a528,10);
          uVar8 = 0xffffffff;
          do {
            pcVar26 = pcVar22;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar26 = pcVar22 + 1;
            cVar4 = *pcVar22;
            pcVar22 = pcVar26;
          } while (cVar4 != '\0');
          uVar8 = ~uVar8;
          iVar11 = -1;
          pcVar22 = (char *)&DAT_0051a068;
          do {
            pcVar25 = pcVar22;
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            pcVar25 = pcVar22 + 1;
            cVar4 = *pcVar22;
            pcVar22 = pcVar25;
          } while (cVar4 != '\0');
          pcVar22 = pcVar26 + -uVar8;
          pcVar26 = pcVar25 + -1;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
            pcVar22 = pcVar22 + 4;
            pcVar26 = pcVar26 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar26 = *pcVar22;
            pcVar22 = pcVar22 + 1;
            pcVar26 = pcVar26 + 1;
          }
          pcVar22 = &DAT_004c5024;
        }
        else {
          pcVar22 = (char *)FUN_004ad425(param_2,&DAT_0058a528,10);
          uVar8 = 0xffffffff;
          do {
            pcVar26 = pcVar22;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar26 = pcVar22 + 1;
            cVar4 = *pcVar22;
            pcVar22 = pcVar26;
          } while (cVar4 != '\0');
          uVar8 = ~uVar8;
          iVar11 = -1;
          pcVar22 = (char *)&DAT_0051a068;
          do {
            pcVar25 = pcVar22;
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            pcVar25 = pcVar22 + 1;
            cVar4 = *pcVar22;
            pcVar22 = pcVar25;
          } while (cVar4 != '\0');
          pcVar22 = pcVar26 + -uVar8;
          pcVar26 = pcVar25 + -1;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
            pcVar22 = pcVar22 + 4;
            pcVar26 = pcVar26 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar26 = *pcVar22;
            pcVar22 = pcVar22 + 1;
            pcVar26 = pcVar26 + 1;
          }
          pcVar22 = &DAT_004c501c;
        }
        uVar8 = 0xffffffff;
        do {
          pcVar26 = pcVar22;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar26 = pcVar22 + 1;
          cVar4 = *pcVar22;
          pcVar22 = pcVar26;
        } while (cVar4 != '\0');
        uVar8 = ~uVar8;
        iVar11 = -1;
        pcVar22 = (char *)&DAT_0051a068;
        do {
          pcVar25 = pcVar22;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pcVar25 = pcVar22 + 1;
          cVar4 = *pcVar22;
          pcVar22 = pcVar25;
        } while (cVar4 != '\0');
        pcVar22 = pcVar26 + -uVar8;
        pcVar26 = pcVar25 + -1;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
          pcVar22 = pcVar22 + 4;
          pcVar26 = pcVar26 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar26 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          pcVar26 = pcVar26 + 1;
        }
        pcVar22 = s_of_the_pin_004c5010;
      }
      else {
        pcVar22 = s_safely_onto_the_fairway_004c4ff8;
      }
    }
    uVar8 = 0xffffffff;
    do {
      pcVar26 = pcVar22;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar26 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar26;
    } while (cVar4 != '\0');
    uVar8 = ~uVar8;
    iVar11 = -1;
    pcVar22 = (char *)&DAT_0051a068;
    do {
      pcVar25 = pcVar22;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar25 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar25;
    } while (cVar4 != '\0');
    pcVar22 = pcVar26 + -uVar8;
    pcVar26 = pcVar25 + -1;
    for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
      pcVar22 = pcVar22 + 4;
      pcVar26 = pcVar26 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar26 = *pcVar22;
      pcVar22 = pcVar22 + 1;
      pcVar26 = pcVar26 + 1;
    }
  }
  else {
    iVar11 = local_44 * 0x100;
    if ((char)(&DAT_005794d4)[iVar11] < '\x05') {
      uVar8 = (int)(char)(&DAT_005794d9)[iVar11] & 0x80000001;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
      }
      if (uVar8 == 0) {
        pcVar22 = s_yanks_a_004c50a8;
      }
      else {
        if (uVar8 != 1) goto LAB_004081c9;
        pcVar22 = s_flubs_a_004c50b4;
      }
LAB_004081a1:
      uVar8 = 0xffffffff;
      do {
        pcVar26 = pcVar22;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar26 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar26;
      } while (cVar4 != '\0');
      uVar8 = ~uVar8;
      iVar16 = -1;
      pcVar22 = (char *)&DAT_0051a068;
      do {
        pcVar25 = pcVar22;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar25 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar25;
      } while (cVar4 != '\0');
      pcVar22 = pcVar26 + -uVar8;
      pcVar26 = pcVar25 + -1;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar26 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      }
    }
    else {
      uVar8 = (int)(char)(&DAT_005794d9)[iVar11] & 0x80000001;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
      }
      if (uVar8 == 0) {
        pcVar22 = s_scuffs_a_004c50c0;
        goto LAB_004081a1;
      }
      if (uVar8 == 1) {
        pcVar22 = s_fluffs_a_004c50cc;
        goto LAB_004081a1;
      }
    }
LAB_004081c9:
    FUN_0040a9a0((int)(char)(&DAT_005794d4)[iVar11]);
    uVar8 = 0xffffffff;
    pcVar22 = s_into_the_004c509c;
    do {
      pcVar26 = pcVar22;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar26 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar26;
    } while (cVar4 != '\0');
    uVar8 = ~uVar8;
    iVar11 = -1;
    pcVar22 = (char *)&DAT_0051a068;
    do {
      pcVar25 = pcVar22;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar25 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar25;
    } while (cVar4 != '\0');
    pcVar22 = pcVar26 + -uVar8;
    pcVar26 = pcVar25 + -1;
    for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
      pcVar22 = pcVar22 + 4;
      pcVar26 = pcVar26 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar26 = *pcVar22;
      pcVar22 = pcVar22 + 1;
      pcVar26 = pcVar26 + 1;
    }
    uVar8 = 0xffffffff;
    pcVar22 = (char *)(&DAT_00578350 + local_1c * 0xc);
    do {
      pcVar26 = pcVar22;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar26 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar26;
    } while (cVar4 != '\0');
    uVar8 = ~uVar8;
    iVar11 = -1;
    pcVar22 = (char *)&DAT_0051a068;
    do {
      pcVar25 = pcVar22;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar25 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar25;
    } while (cVar4 != '\0');
    pcVar22 = pcVar26 + -uVar8;
    pcVar26 = pcVar25 + -1;
    for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
      pcVar22 = pcVar22 + 4;
      pcVar26 = pcVar26 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar26 = *pcVar22;
      pcVar22 = pcVar22 + 1;
      pcVar26 = pcVar26 + 1;
    }
  }
  iVar11 = local_44 * 0x100;
  uVar8 = 0xffffffff;
  pcVar22 = &DAT_004c4fc8;
  do {
    pcVar26 = pcVar22;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar26 = pcVar22 + 1;
    cVar4 = *pcVar22;
    pcVar22 = pcVar26;
  } while (cVar4 != '\0');
  uVar8 = ~uVar8;
  iVar16 = -1;
  pcVar22 = (char *)&DAT_0051a068;
  do {
    pcVar25 = pcVar22;
    if (iVar16 == 0) break;
    iVar16 = iVar16 + -1;
    pcVar25 = pcVar22 + 1;
    cVar4 = *pcVar22;
    pcVar22 = pcVar25;
  } while (cVar4 != '\0');
  pcVar22 = pcVar26 + -uVar8;
  pcVar26 = pcVar25 + -1;
  for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
    pcVar22 = pcVar22 + 4;
    pcVar26 = pcVar26 + 4;
  }
  cVar4 = (&DAT_005794d9)[iVar11];
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar26 = *pcVar22;
    pcVar22 = pcVar22 + 1;
    pcVar26 = pcVar26 + 1;
  }
  FUN_00407280((int)cVar4);
  uVar8 = 0xffffffff;
  pcVar22 = &DAT_004c4fc4;
  do {
    pcVar26 = pcVar22;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar26 = pcVar22 + 1;
    cVar4 = *pcVar22;
    pcVar22 = pcVar26;
  } while (cVar4 != '\0');
  uVar8 = ~uVar8;
  iVar16 = -1;
  pcVar22 = (char *)&DAT_0051a068;
  do {
    pcVar25 = pcVar22;
    if (iVar16 == 0) break;
    iVar16 = iVar16 + -1;
    pcVar25 = pcVar22 + 1;
    cVar4 = *pcVar22;
    pcVar22 = pcVar25;
  } while (cVar4 != '\0');
  pcVar22 = pcVar26 + -uVar8;
  pcVar26 = pcVar25 + -1;
  for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
    pcVar22 = pcVar22 + 4;
    pcVar26 = pcVar26 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar26 = *pcVar22;
    pcVar22 = pcVar22 + 1;
    pcVar26 = pcVar26 + 1;
  }
  if ((param_4 == 0) &&
     (iVar16 = (int)(short)(&DAT_0057955a)[local_44 * 0x80],
     '\0' < (char)(&DAT_005794d9)[iVar16 * 0x100])) {
    switch(*(undefined2 *)(&DAT_00579566 + iVar11)) {
    case 0:
      FUN_004676e0(iVar16,0);
      uVar8 = 0xffffffff;
      pcVar22 = s_looks_on_in_amazement__004c4fac;
      do {
        pcVar26 = pcVar22;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar26 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar26;
      } while (cVar4 != '\0');
      uVar8 = ~uVar8;
      iVar16 = -1;
      pcVar22 = (char *)&DAT_0051a068;
      do {
        pcVar25 = pcVar22;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar25 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar25;
      } while (cVar4 != '\0');
      pcVar22 = pcVar26 + -uVar8;
      pcVar26 = pcVar25 + -1;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar26 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      }
      break;
    case 1:
      FUN_004676e0(iVar16,0);
      uVar8 = 0xffffffff;
      pcVar22 = s_is_equally_delighted__004c4f54;
      do {
        pcVar26 = pcVar22;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar26 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar26;
      } while (cVar4 != '\0');
      uVar8 = ~uVar8;
      iVar16 = -1;
      pcVar22 = (char *)&DAT_0051a068;
      do {
        pcVar25 = pcVar22;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar25 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar25;
      } while (cVar4 != '\0');
      pcVar22 = pcVar26 + -uVar8;
      pcVar26 = pcVar25 + -1;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar26 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      }
      break;
    case 2:
      uVar8 = 0xffffffff;
      pcVar22 = &DAT_004c4f48;
      do {
        pcVar26 = pcVar22;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar26 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar26;
      } while (cVar4 != '\0');
      uVar8 = ~uVar8;
      iVar7 = -1;
      pcVar22 = (char *)&DAT_0051a068;
      do {
        pcVar25 = pcVar22;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        pcVar25 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar25;
      } while (cVar4 != '\0');
      pcVar22 = pcVar26 + -uVar8;
      pcVar26 = pcVar25 + -1;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar26 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      }
      FUN_004676e0(iVar16,0);
      uVar8 = 0xffffffff;
      pcVar22 = s_mutters_to_004c4f38;
      do {
        pcVar26 = pcVar22;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar26 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar26;
      } while (cVar4 != '\0');
      uVar8 = ~uVar8;
      iVar16 = -1;
      pcVar22 = (char *)&DAT_0051a068;
      do {
        pcVar25 = pcVar22;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar25 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar25;
      } while (cVar4 != '\0');
      pcVar22 = pcVar26 + -uVar8;
      pcVar26 = pcVar25 + -1;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar26 = pcVar26 + 4;
      }
      sVar2 = (&DAT_0057955a)[local_44 * 0x80];
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar26 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      }
      iVar16 = FUN_0046c940((int)sVar2);
      pcVar22 = s_himself_004c4f30;
      if (iVar16 == 0) {
        pcVar22 = s_herself_004c4f28;
      }
      uVar8 = 0xffffffff;
      do {
        pcVar26 = pcVar22;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar26 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar26;
      } while (cVar4 != '\0');
      uVar8 = ~uVar8;
      iVar16 = -1;
      pcVar22 = (char *)&DAT_0051a068;
      do {
        pcVar25 = pcVar22;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar25 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar25;
      } while (cVar4 != '\0');
      pcVar22 = pcVar26 + -uVar8;
      pcVar26 = pcVar25 + -1;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar26 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar22 = &DAT_004c4944;
      do {
        pcVar26 = pcVar22;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar26 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar26;
      } while (cVar4 != '\0');
      uVar8 = ~uVar8;
      iVar16 = -1;
      pcVar22 = (char *)&DAT_0051a068;
      do {
        pcVar25 = pcVar22;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar25 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar25;
      } while (cVar4 != '\0');
      pcVar22 = pcVar26 + -uVar8;
      pcVar26 = pcVar25 + -1;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar26 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      }
      break;
    case 3:
    case 5:
      FUN_004676e0(iVar16,0);
      uVar8 = 0xffffffff;
      pcVar22 = s_congratulates_004c4f78;
      do {
        pcVar26 = pcVar22;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar26 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar26;
      } while (cVar4 != '\0');
      uVar8 = ~uVar8;
      iVar16 = -1;
      pcVar22 = (char *)&DAT_0051a068;
      do {
        pcVar25 = pcVar22;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar25 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar25;
      } while (cVar4 != '\0');
      pcVar22 = pcVar26 + -uVar8;
      pcVar26 = pcVar25 + -1;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar26 = pcVar26 + 4;
      }
      sVar2 = (&DAT_0057955a)[local_44 * 0x80];
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar26 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      }
      iVar16 = FUN_0046c940((int)sVar2);
      ppuVar23 = &PTR_DAT_004c4f94;
      if (iVar16 == 0) {
        ppuVar23 = (undefined **)&DAT_004c4f90;
      }
      uVar8 = 0xffffffff;
      do {
        ppuVar24 = ppuVar23;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        ppuVar24 = (undefined **)((int)ppuVar23 + 1);
        cVar4 = *(char *)ppuVar23;
        ppuVar23 = ppuVar24;
      } while (cVar4 != '\0');
      uVar8 = ~uVar8;
      iVar16 = -1;
      pcVar22 = (char *)&DAT_0051a068;
      do {
        pcVar26 = pcVar22;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar26 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar26;
      } while (cVar4 != '\0');
      pcVar22 = (char *)((int)ppuVar24 - uVar8);
      pcVar26 = pcVar26 + -1;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar26 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar22 = s_partner__004c4f6c;
      do {
        pcVar26 = pcVar22;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar26 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar26;
      } while (cVar4 != '\0');
      uVar8 = ~uVar8;
      iVar16 = -1;
      pcVar22 = (char *)&DAT_0051a068;
      do {
        pcVar25 = pcVar22;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar25 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar25;
      } while (cVar4 != '\0');
      pcVar22 = pcVar26 + -uVar8;
      pcVar26 = pcVar25 + -1;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar26 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      }
      break;
    case 4:
      FUN_004676e0(iVar16,0);
      uVar8 = 0xffffffff;
      pcVar22 = s_can_not_believe_004c4f98;
      do {
        pcVar26 = pcVar22;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar26 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar26;
      } while (cVar4 != '\0');
      uVar8 = ~uVar8;
      iVar16 = -1;
      pcVar22 = (char *)&DAT_0051a068;
      do {
        pcVar25 = pcVar22;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar25 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar25;
      } while (cVar4 != '\0');
      pcVar22 = pcVar26 + -uVar8;
      pcVar26 = pcVar25 + -1;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar26 = pcVar26 + 4;
      }
      sVar2 = (&DAT_0057955a)[local_44 * 0x80];
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar26 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      }
      iVar16 = FUN_0046c940((int)sVar2);
      ppuVar23 = &PTR_DAT_004c4f94;
      if (iVar16 == 0) {
        ppuVar23 = (undefined **)&DAT_004c4f90;
      }
      uVar8 = 0xffffffff;
      do {
        ppuVar24 = ppuVar23;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        ppuVar24 = (undefined **)((int)ppuVar23 + 1);
        cVar4 = *(char *)ppuVar23;
        ppuVar23 = ppuVar24;
      } while (cVar4 != '\0');
      uVar8 = ~uVar8;
      iVar16 = -1;
      pcVar22 = (char *)&DAT_0051a068;
      do {
        pcVar26 = pcVar22;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar26 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar26;
      } while (cVar4 != '\0');
      pcVar22 = (char *)((int)ppuVar24 - uVar8);
      pcVar26 = pcVar26 + -1;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar26 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      }
      uVar8 = 0xffffffff;
      pcVar22 = &DAT_004c4f88;
      do {
        pcVar26 = pcVar22;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar26 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar26;
      } while (cVar4 != '\0');
      uVar8 = ~uVar8;
      iVar16 = -1;
      pcVar22 = (char *)&DAT_0051a068;
      do {
        pcVar25 = pcVar22;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar25 = pcVar22 + 1;
        cVar4 = *pcVar22;
        pcVar22 = pcVar25;
      } while (cVar4 != '\0');
      pcVar22 = pcVar26 + -uVar8;
      pcVar26 = pcVar25 + -1;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
        pcVar22 = pcVar22 + 4;
        pcVar26 = pcVar26 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar26 = *pcVar22;
        pcVar22 = pcVar22 + 1;
        pcVar26 = pcVar26 + 1;
      }
    }
  }
  uVar8 = DAT_005a59f8;
  if (local_4c < 0x38) {
    if (local_4c < 0) {
      bVar3 = false;
    }
    else {
      local_4c = 0x38;
    }
  }
  if (param_1 < 0x38) {
    if (param_1 < 0) {
      bVar3 = false;
    }
    else {
      param_1 = 0x38;
    }
  }
  if (0x2f8 < local_40) {
    bVar3 = false;
  }
  if (local_48 < 0x231) {
    if (!bVar3) goto LAB_00408900;
  }
  else {
    bVar3 = false;
LAB_00408900:
    if (uVar20 != DAT_005a59f8) {
      return;
    }
  }
  local_20 = (uint)*(short *)(&DAT_005794ce + iVar11);
  *(undefined2 *)(&DAT_005794ce + iVar11) = 0xffff;
  uVar12 = (uint)(short)(&DAT_0059fc60)[iVar13 * 0x1c4];
  if ((uVar12 == uVar8) || (((_DAT_0059e7b8 & 0x200000) == 0 && (uVar12 == (uVar8 ^ 1))))) {
    local_14 = FUN_0044faf0(DAT_005685f0 + -1);
    local_1c = local_14 * 2 + 6;
    if (local_14 == 3) {
      local_1c = 99;
    }
    iVar13 = 0;
    iVar16 = (uint)(uVar12 != uVar8) * 0x10;
    do {
      if (local_1c <= *(char *)((int)&DAT_005a5a04 + iVar13 + iVar16)) {
        *(ushort *)(&DAT_005794ce + iVar11) =
             *(ushort *)(&DAT_005794ce + iVar11) & ~(ushort)(1 << ((byte)iVar13 & 0x1f));
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 0xc);
    if (param_4 != 0) {
      *(undefined2 *)(&DAT_005794ce + iVar11) = 0;
      iVar13 = 0;
      do {
        if ('\x03' < *(char *)((int)&DAT_005a5a04 + iVar13 + iVar16)) {
          *(ushort *)(&DAT_005794ce + iVar11) =
               *(ushort *)(&DAT_005794ce + iVar11) | (ushort)(1 << ((byte)iVar13 & 0x1f));
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < 0xc);
    }
    local_24 = 0;
    local_18 = FUN_0040bfa0((&DAT_0057957c)[local_44 * 0x40],(&DAT_00579580)[local_44 * 0x40]);
    if ((local_18 == 1) && (((&DAT_005794ce)[iVar11] & 0x10) != 0)) {
      param_3 = 0x10;
    }
    else {
      do {
        param_3 = 0;
        uVar6 = FUN_0045c1e0(0xc);
        switch(uVar6) {
        case 0:
          if (('\0' < (char)(&DAT_00578372)[local_18 * 0x30]) &&
             ((*(ushort *)(&DAT_005794ce + iVar11) & 0x100) != 0)) {
            param_3 = 0x100;
          }
          break;
        case 1:
          if ((((*(byte *)(&DAT_005794c8 + local_44 * 0x40) & 2) != 0) || (param_2 == 0)) &&
             ((*(ushort *)(&DAT_005794ce + iVar11) & 0x200) != 0)) {
LAB_00408be9:
            param_3 = 0x200;
          }
          break;
        case 2:
          if ((((&DAT_005794da)[iVar11] == '\0') && ((char)(&DAT_005794d4)[iVar11] < '\x02')) &&
             (((&DAT_005794ce)[iVar11] & 2) != 0)) {
            param_3 = 2;
          }
          break;
        case 3:
          if ((((&DAT_005794da)[iVar11] == '\0') && ((char)(&DAT_005794d4)[iVar11] < '\x04')) &&
             (((&DAT_005794ce)[iVar11] & 4) != 0)) {
            param_3 = 4;
          }
          break;
        case 4:
          if (((&DAT_00579564)[local_44 * 0x80] == 1) && (((&DAT_005794ce)[iVar11] & 0x20) != 0)) {
            param_3 = 0x20;
          }
          break;
        case 5:
          if (((&DAT_00579564)[local_44 * 0x80] == -1) && (((&DAT_005794ce)[iVar11] & 0x40) != 0)) {
            param_3 = 0x40;
          }
          break;
        case 6:
          if (((&DAT_00579564)[local_44 * 0x80] == 3) && (((&DAT_005794ce)[iVar11] & 0x80) != 0)) {
            param_3 = 0x80;
          }
          break;
        case 7:
          iVar13 = FUN_00422530(local_44);
          if ((iVar13 < iVar14) && (((&DAT_005794ce)[iVar11] & 1) != 0)) {
            param_3 = 1;
          }
          break;
        case 8:
          if (('\x02' < (char)(&DAT_005794d4)[iVar11]) && ((char)(&DAT_005794d4)[iVar11] < '\v')) {
            param_3 = 8;
          }
          break;
        case 9:
          if (((0x32 < local_24) || (param_2 == 0)) &&
             ((iVar13 = FUN_0040bfa0((&DAT_0057958c)[local_44 * 0x40],
                                     (&DAT_00579590)[local_44 * 0x40]), iVar13 != 1 ||
              (param_3 = 0x10, param_2 == 0)))) goto LAB_00408be9;
        }
        local_24 = local_24 + 1;
      } while ((local_24 < 100) &&
              ((param_3 == 0 || ((param_3 & (int)*(short *)(&DAT_005794ce + iVar11)) == 0))));
    }
    uVar8 = DAT_005a59f8;
    if (param_4 == 0) {
      if (param_3 == 0) goto LAB_00408fa3;
    }
    else if (param_3 == 0) {
      return;
    }
    if ((&DAT_005794d0)[iVar11] != '\0') {
      iVar13 = 0;
      uVar12 = param_3 & 1;
      while (uVar12 == 0) {
        iVar13 = iVar13 + 1;
        uVar12 = param_3 & 1 << ((byte)iVar13 & 0x1f);
      }
      if (param_4 == 0) {
        if (*(char *)((int)&DAT_005a5a04 + iVar13 + iVar16) < '\n') {
          uVar8 = 0xffffffff;
          pcVar22 = &DAT_004c3f70;
          do {
            pcVar26 = pcVar22;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar26 = pcVar22 + 1;
            cVar4 = *pcVar22;
            pcVar22 = pcVar26;
          } while (cVar4 != '\0');
          uVar8 = ~uVar8;
          iVar14 = -1;
          pcVar22 = (char *)&DAT_0051a068;
          do {
            pcVar25 = pcVar22;
            if (iVar14 == 0) break;
            iVar14 = iVar14 + -1;
            pcVar25 = pcVar22 + 1;
            cVar4 = *pcVar22;
            pcVar22 = pcVar25;
          } while (cVar4 != '\0');
          pcVar22 = pcVar26 + -uVar8;
          pcVar26 = pcVar25 + -1;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
            pcVar22 = pcVar22 + 4;
            pcVar26 = pcVar26 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar26 = *pcVar22;
            pcVar22 = pcVar22 + 1;
            pcVar26 = pcVar26 + 1;
          }
          FUN_004676e0(local_44,0);
          cVar4 = *(char *)((int)&DAT_005a5a04 + iVar13 + iVar16);
          if (cVar4 == '\0') {
            uVar5 = FUN_00467130(3 - DAT_00822c88,1,3);
            *(undefined1 *)((int)&DAT_005a5a04 + iVar13 + iVar16) = uVar5;
            uVar8 = 0xffffffff;
            pcVar22 = s_acquires_a_new_skill__004c4e64;
            do {
              pcVar26 = pcVar22;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar26 = pcVar22 + 1;
              cVar4 = *pcVar22;
              pcVar22 = pcVar26;
            } while (cVar4 != '\0');
            uVar8 = ~uVar8;
            iVar14 = -1;
            pcVar22 = (char *)&DAT_0051a068;
            do {
              pcVar25 = pcVar22;
              if (iVar14 == 0) break;
              iVar14 = iVar14 + -1;
              pcVar25 = pcVar22 + 1;
              cVar4 = *pcVar22;
              pcVar22 = pcVar25;
            } while (cVar4 != '\0');
            pcVar22 = pcVar26 + -uVar8;
            pcVar26 = pcVar25 + -1;
            for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
              pcVar22 = pcVar22 + 4;
              pcVar26 = pcVar26 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar26 = *pcVar22;
              pcVar22 = pcVar22 + 1;
              pcVar26 = pcVar26 + 1;
            }
            uVar8 = 0xffffffff;
            pcVar22 = (&PTR_s_Power_Hitter_004c2c3c)[iVar13];
            do {
              pcVar26 = pcVar22;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar26 = pcVar22 + 1;
              cVar4 = *pcVar22;
              pcVar22 = pcVar26;
            } while (cVar4 != '\0');
            uVar8 = ~uVar8;
            iVar14 = -1;
            pcVar22 = (char *)&DAT_0051a068;
            do {
              pcVar25 = pcVar22;
              if (iVar14 == 0) break;
              iVar14 = iVar14 + -1;
              pcVar25 = pcVar22 + 1;
              cVar4 = *pcVar22;
              pcVar22 = pcVar25;
            } while (cVar4 != '\0');
            pcVar22 = pcVar26 + -uVar8;
            pcVar26 = pcVar25 + -1;
            for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
              pcVar22 = pcVar22 + 4;
              pcVar26 = pcVar26 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar26 = *pcVar22;
              pcVar22 = pcVar22 + 1;
              pcVar26 = pcVar26 + 1;
            }
            uVar12 = 0xffffffff;
            pcVar22 = &DAT_004c4e60;
            do {
              pcVar26 = pcVar22;
              if (uVar12 == 0) break;
              uVar12 = uVar12 - 1;
              pcVar26 = pcVar22 + 1;
              cVar4 = *pcVar22;
              pcVar22 = pcVar26;
            } while (cVar4 != '\0');
            uVar12 = ~uVar12;
            iVar14 = -1;
            pcVar22 = (char *)&DAT_0051a068;
            do {
              pcVar25 = pcVar22;
              if (iVar14 == 0) break;
              iVar14 = iVar14 + -1;
              pcVar25 = pcVar22 + 1;
              cVar4 = *pcVar22;
              pcVar22 = pcVar25;
            } while (cVar4 != '\0');
            pcVar22 = pcVar26 + -uVar12;
            pcVar26 = pcVar25 + -1;
            for (uVar8 = uVar12 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
              pcVar22 = pcVar22 + 4;
              pcVar26 = pcVar26 + 4;
            }
            for (uVar12 = uVar12 & 3; uVar8 = DAT_005a59f8, uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar26 = *pcVar22;
              pcVar22 = pcVar22 + 1;
              pcVar26 = pcVar26 + 1;
            }
            bVar10 = (byte)iVar13;
            local_20 = local_20 | 1 << (bVar10 & 0x1f);
            if (uVar20 == DAT_005a59f8) {
              DAT_004c2c9c = DAT_004c2c9c | (ushort)(1 << (bVar10 & 0x1f));
            }
            *(ushort *)(&DAT_005794ce + iVar17) =
                 *(ushort *)(&DAT_005794ce + iVar17) | (ushort)(1 << (bVar10 & 0x1f));
          }
          else {
            cVar4 = cVar4 + '\x01';
            uVar8 = 0xffffffff;
            *(char *)((int)&DAT_005a5a04 + iVar13 + iVar16) = cVar4;
            pcVar22 = &DAT_004c4ef0;
            do {
              pcVar26 = pcVar22;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar26 = pcVar22 + 1;
              cVar1 = *pcVar22;
              pcVar22 = pcVar26;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            iVar14 = -1;
            pcVar22 = (char *)&DAT_0051a068;
            do {
              pcVar25 = pcVar22;
              if (iVar14 == 0) break;
              iVar14 = iVar14 + -1;
              pcVar25 = pcVar22 + 1;
              cVar1 = *pcVar22;
              pcVar22 = pcVar25;
            } while (cVar1 != '\0');
            pcVar22 = pcVar26 + -uVar8;
            pcVar26 = pcVar25 + -1;
            for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
              pcVar22 = pcVar22 + 4;
              pcVar26 = pcVar26 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar26 = *pcVar22;
              pcVar22 = pcVar22 + 1;
              pcVar26 = pcVar26 + 1;
            }
            uVar8 = 0xffffffff;
            pcVar22 = (&PTR_s_Power_Hitter_004c2c3c)[iVar13];
            do {
              pcVar26 = pcVar22;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar26 = pcVar22 + 1;
              cVar1 = *pcVar22;
              pcVar22 = pcVar26;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            iVar14 = -1;
            pcVar22 = (char *)&DAT_0051a068;
            do {
              pcVar25 = pcVar22;
              if (iVar14 == 0) break;
              iVar14 = iVar14 + -1;
              pcVar25 = pcVar22 + 1;
              cVar1 = *pcVar22;
              pcVar22 = pcVar25;
            } while (cVar1 != '\0');
            pcVar22 = pcVar26 + -uVar8;
            pcVar26 = pcVar25 + -1;
            for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
              pcVar22 = pcVar22 + 4;
              pcVar26 = pcVar26 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar26 = *pcVar22;
              pcVar22 = pcVar22 + 1;
              pcVar26 = pcVar26 + 1;
            }
            uVar8 = 0xffffffff;
            pcVar22 = s___skill_improves_to_004c4ed8;
            do {
              pcVar26 = pcVar22;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar26 = pcVar22 + 1;
              cVar1 = *pcVar22;
              pcVar22 = pcVar26;
            } while (cVar1 != '\0');
            uVar8 = ~uVar8;
            iVar14 = -1;
            pcVar22 = (char *)&DAT_0051a068;
            do {
              pcVar25 = pcVar22;
              if (iVar14 == 0) break;
              iVar14 = iVar14 + -1;
              pcVar25 = pcVar22 + 1;
              cVar1 = *pcVar22;
              pcVar22 = pcVar25;
            } while (cVar1 != '\0');
            pcVar22 = pcVar26 + -uVar8;
            pcVar26 = pcVar25 + -1;
            for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
              pcVar22 = pcVar22 + 4;
              pcVar26 = pcVar26 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar26 = *pcVar22;
              pcVar22 = pcVar22 + 1;
              pcVar26 = pcVar26 + 1;
            }
            pcVar22 = (char *)FUN_004ad425((int)cVar4,&DAT_0058a528,10);
            uVar8 = 0xffffffff;
            do {
              pcVar26 = pcVar22;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar26 = pcVar22 + 1;
              cVar4 = *pcVar22;
              pcVar22 = pcVar26;
            } while (cVar4 != '\0');
            uVar8 = ~uVar8;
            iVar14 = -1;
            pcVar22 = (char *)&DAT_0051a068;
            do {
              pcVar25 = pcVar22;
              if (iVar14 == 0) break;
              iVar14 = iVar14 + -1;
              pcVar25 = pcVar22 + 1;
              cVar4 = *pcVar22;
              pcVar22 = pcVar25;
            } while (cVar4 != '\0');
            pcVar22 = pcVar26 + -uVar8;
            pcVar26 = pcVar25 + -1;
            for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
              pcVar22 = pcVar22 + 4;
              pcVar26 = pcVar26 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar26 = *pcVar22;
              pcVar22 = pcVar22 + 1;
              pcVar26 = pcVar26 + 1;
            }
            uVar8 = 0xffffffff;
            pcVar22 = &DAT_004c4ed0;
            do {
              pcVar26 = pcVar22;
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              pcVar26 = pcVar22 + 1;
              cVar4 = *pcVar22;
              pcVar22 = pcVar26;
            } while (cVar4 != '\0');
            uVar8 = ~uVar8;
            iVar14 = -1;
            pcVar22 = (char *)&DAT_0051a068;
            do {
              pcVar25 = pcVar22;
              if (iVar14 == 0) break;
              iVar14 = iVar14 + -1;
              pcVar25 = pcVar22 + 1;
              cVar4 = *pcVar22;
              pcVar22 = pcVar25;
            } while (cVar4 != '\0');
            pcVar22 = pcVar26 + -uVar8;
            pcVar26 = pcVar25 + -1;
            for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
              pcVar22 = pcVar22 + 4;
              pcVar26 = pcVar26 + 4;
            }
            for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar26 = *pcVar22;
              pcVar22 = pcVar22 + 1;
              pcVar26 = pcVar26 + 1;
            }
            uVar8 = DAT_005a59f8;
            if (*(char *)((int)&DAT_005a5a04 + iVar13 + iVar16) == local_1c) {
              uVar8 = 0xffffffff;
              pcVar22 = s_To_further_improve_this_skill_yo_004c4e88;
              do {
                pcVar26 = pcVar22;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar26 = pcVar22 + 1;
                cVar4 = *pcVar22;
                pcVar22 = pcVar26;
              } while (cVar4 != '\0');
              uVar8 = ~uVar8;
              iVar14 = -1;
              pcVar22 = (char *)&DAT_0051a068;
              do {
                pcVar25 = pcVar22;
                if (iVar14 == 0) break;
                iVar14 = iVar14 + -1;
                pcVar25 = pcVar22 + 1;
                cVar4 = *pcVar22;
                pcVar22 = pcVar25;
              } while (cVar4 != '\0');
              pcVar22 = pcVar26 + -uVar8;
              pcVar26 = pcVar25 + -1;
              for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
                pcVar22 = pcVar22 + 4;
                pcVar26 = pcVar26 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar26 = *pcVar22;
                pcVar22 = pcVar22 + 1;
                pcVar26 = pcVar26 + 1;
              }
              uVar8 = 0xffffffff;
              pcVar22 = (&PTR_s_Daily_Fee_004c2a1c)[local_14];
              do {
                pcVar26 = pcVar22;
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                pcVar26 = pcVar22 + 1;
                cVar4 = *pcVar22;
                pcVar22 = pcVar26;
              } while (cVar4 != '\0');
              uVar8 = ~uVar8;
              iVar14 = -1;
              pcVar22 = (char *)&DAT_0051a068;
              do {
                pcVar25 = pcVar22;
                if (iVar14 == 0) break;
                iVar14 = iVar14 + -1;
                pcVar25 = pcVar22 + 1;
                cVar4 = *pcVar22;
                pcVar22 = pcVar25;
              } while (cVar4 != '\0');
              pcVar22 = pcVar26 + -uVar8;
              pcVar26 = pcVar25 + -1;
              for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
                pcVar22 = pcVar22 + 4;
                pcVar26 = pcVar26 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar26 = *pcVar22;
                pcVar22 = pcVar22 + 1;
                pcVar26 = pcVar26 + 1;
              }
              uVar12 = 0xffffffff;
              pcVar22 = s_course__004c4e7c;
              do {
                pcVar26 = pcVar22;
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                pcVar26 = pcVar22 + 1;
                cVar4 = *pcVar22;
                pcVar22 = pcVar26;
              } while (cVar4 != '\0');
              uVar12 = ~uVar12;
              iVar14 = -1;
              pcVar22 = (char *)&DAT_0051a068;
              do {
                pcVar25 = pcVar22;
                if (iVar14 == 0) break;
                iVar14 = iVar14 + -1;
                pcVar25 = pcVar22 + 1;
                cVar4 = *pcVar22;
                pcVar22 = pcVar25;
              } while (cVar4 != '\0');
              pcVar22 = pcVar26 + -uVar12;
              pcVar26 = pcVar25 + -1;
              for (uVar8 = uVar12 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
                pcVar22 = pcVar22 + 4;
                pcVar26 = pcVar26 + 4;
              }
              for (uVar12 = uVar12 & 3; uVar8 = DAT_005a59f8, uVar12 != 0; uVar12 = uVar12 - 1) {
                *pcVar26 = *pcVar22;
                pcVar22 = pcVar22 + 1;
                pcVar26 = pcVar26 + 1;
              }
            }
          }
          if (uVar20 == uVar8) {
            (&DAT_005795a8)[iVar13 + uVar8 * 0x100] =
                 *(undefined1 *)((int)&DAT_005a5a04 + iVar13 + iVar16);
            FUN_0046e7b0(2,(&DAT_005794b8)[local_44 * 0x40],(&DAT_005794bc)[local_44 * 0x40]);
            FUN_004481b0(0x2f,100,0,0,0);
            uVar8 = DAT_005a59f8;
          }
        }
      }
      else {
        cVar4 = *(char *)((int)&DAT_005a5a04 + iVar13 + iVar16);
        if (cVar4 < '\x03') {
          return;
        }
        *(char *)((int)&DAT_005a5a04 + iVar13 + iVar16) = cVar4 + -1;
        uVar8 = 0xffffffff;
        pcVar22 = &DAT_004c3f70;
        do {
          pcVar26 = pcVar22;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar26 = pcVar22 + 1;
          cVar4 = *pcVar22;
          pcVar22 = pcVar26;
        } while (cVar4 != '\0');
        uVar8 = ~uVar8;
        iVar14 = -1;
        pcVar22 = (char *)&DAT_0051a068;
        do {
          pcVar25 = pcVar22;
          if (iVar14 == 0) break;
          iVar14 = iVar14 + -1;
          pcVar25 = pcVar22 + 1;
          cVar4 = *pcVar22;
          pcVar22 = pcVar25;
        } while (cVar4 != '\0');
        pcVar22 = pcVar26 + -uVar8;
        pcVar26 = pcVar25 + -1;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
          pcVar22 = pcVar22 + 4;
          pcVar26 = pcVar26 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar26 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          pcVar26 = pcVar26 + 1;
        }
        FUN_004676e0(local_44,0);
        iVar14 = FUN_0046c940(local_44);
        pcVar22 = s_loses_10__of_his_004c4f14;
        if (iVar14 == 0) {
          pcVar22 = s_loses_10__of_her_004c4f00;
        }
        uVar8 = 0xffffffff;
        do {
          pcVar26 = pcVar22;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar26 = pcVar22 + 1;
          cVar4 = *pcVar22;
          pcVar22 = pcVar26;
        } while (cVar4 != '\0');
        uVar8 = ~uVar8;
        iVar14 = -1;
        pcVar22 = (char *)&DAT_0051a068;
        do {
          pcVar25 = pcVar22;
          if (iVar14 == 0) break;
          iVar14 = iVar14 + -1;
          pcVar25 = pcVar22 + 1;
          cVar4 = *pcVar22;
          pcVar22 = pcVar25;
        } while (cVar4 != '\0');
        pcVar22 = pcVar26 + -uVar8;
        pcVar26 = pcVar25 + -1;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
          pcVar22 = pcVar22 + 4;
          pcVar26 = pcVar26 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar26 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          pcVar26 = pcVar26 + 1;
        }
        uVar8 = 0xffffffff;
        pcVar22 = (&PTR_s_Power_Hitter_004c2c3c)[iVar13];
        do {
          pcVar26 = pcVar22;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar26 = pcVar22 + 1;
          cVar4 = *pcVar22;
          pcVar22 = pcVar26;
        } while (cVar4 != '\0');
        uVar8 = ~uVar8;
        iVar13 = -1;
        pcVar22 = (char *)&DAT_0051a068;
        do {
          pcVar25 = pcVar22;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar22 + 1;
          cVar4 = *pcVar22;
          pcVar22 = pcVar25;
        } while (cVar4 != '\0');
        pcVar22 = pcVar26 + -uVar8;
        pcVar26 = pcVar25 + -1;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
          pcVar22 = pcVar22 + 4;
          pcVar26 = pcVar26 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar26 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          pcVar26 = pcVar26 + 1;
        }
        uVar12 = 0xffffffff;
        pcVar22 = s_skill__004c4ef8;
        do {
          pcVar26 = pcVar22;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar26 = pcVar22 + 1;
          cVar4 = *pcVar22;
          pcVar22 = pcVar26;
        } while (cVar4 != '\0');
        uVar12 = ~uVar12;
        iVar13 = -1;
        pcVar22 = (char *)&DAT_0051a068;
        do {
          pcVar25 = pcVar22;
          if (iVar13 == 0) break;
          iVar13 = iVar13 + -1;
          pcVar25 = pcVar22 + 1;
          cVar4 = *pcVar22;
          pcVar22 = pcVar25;
        } while (cVar4 != '\0');
        pcVar22 = pcVar26 + -uVar12;
        pcVar26 = pcVar25 + -1;
        for (uVar8 = uVar12 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
          pcVar22 = pcVar22 + 4;
          pcVar26 = pcVar26 + 4;
        }
        for (uVar12 = uVar12 & 3; uVar8 = DAT_005a59f8, uVar12 != 0; uVar12 = uVar12 - 1) {
          *pcVar26 = *pcVar22;
          pcVar22 = pcVar22 + 1;
          pcVar26 = pcVar26 + 1;
        }
      }
    }
  }
LAB_00408fa3:
  *(undefined2 *)(&DAT_005794ce + iVar11) = (undefined2)local_20;
  if (!bVar3) {
    FUN_0040cb00(0x800023e8,1,uVar20);
    FUN_004481b0(0x95,100,0,0,0);
    return;
  }
  bVar3 = true;
  iVar11 = 0x4c;
  pbVar9 = (byte *)((int)&DAT_005849e0 + (char)(&DAT_005794d9)[iVar17] + 3);
  do {
    if ((*pbVar9 & 1) != 0) {
      bVar3 = false;
    }
    pbVar9 = pbVar9 + 0x2c;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  if ((DAT_005a5a00 & 2) == 0) {
    bVar3 = false;
LAB_00409128:
    if (uVar20 != uVar8) goto LAB_00409180;
  }
  else if ((!bVar3) || (uVar8 != 0xffffffff)) goto LAB_00409128;
  if (param_1 < 0xc0) {
    DAT_004c2e08 = uVar20;
    iVar11 = FUN_00467130(local_48 + 0x28,0,0x1c2,0x80002108,0xfffffffe);
  }
  else {
    iVar11 = param_1 + -0xc0;
    DAT_004c2e08 = uVar20;
  }
  FUN_0040d320(0x96,iVar11);
  DAT_004c2e08 = 0xffffffff;
LAB_00409180:
  iVar13 = local_40 + 0x28;
  iVar27 = local_48 + 0x28;
  iVar16 = local_4c + -0x28;
  iVar14 = param_1 + -0x28;
  iVar11 = (iVar13 - iVar16) + 0x20;
  iVar19 = (-(uint)(param_4 != 0) & 0xfffffd09) + 0x80007fff;
  iVar7 = local_4c + -0x38;
  FUN_00480b00(iVar7,param_1 + -0x38,iVar11,0x10,iVar19);
  FUN_00480b00(iVar7,iVar14,0x10,iVar27 - iVar14,iVar19);
  FUN_00480b00(iVar13,iVar14,0x10,iVar27 - iVar14,iVar19);
  FUN_00480b00(iVar7,iVar27,iVar11,0x10,iVar19);
  FUN_00478b80(iVar16,iVar14,iVar13,iVar14,0x80000000);
  FUN_00478b80(iVar16,iVar14,iVar16,iVar27,0x80000000);
  FUN_00478b80(iVar16,iVar27,iVar13,iVar27,0x80000000);
  FUN_00478b80(iVar13,iVar14,iVar13,iVar27,0x80000000);
  FUN_00404b70(s_SimFoto_004c4e58,(iVar13 + iVar16) / 2,local_48 + 0x2c,0x80006318);
  uVar8 = DAT_00834170 & 0x80001fff;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xffffe000) + 1;
  }
  DAT_0051a068._0_1_ = 0;
  pcVar22 = (char *)FUN_004ad425(((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x3ffU)) >> 10) + 3,
                                 &DAT_0058a528,10);
  uVar12 = 0xffffffff;
  do {
    pcVar26 = pcVar22;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar26 = pcVar22 + 1;
    cVar4 = *pcVar22;
    pcVar22 = pcVar26;
  } while (cVar4 != '\0');
  uVar12 = ~uVar12;
  iVar11 = -1;
  pcVar22 = (char *)&DAT_0051a068;
  do {
    pcVar25 = pcVar22;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar25 = pcVar22 + 1;
    cVar4 = *pcVar22;
    pcVar22 = pcVar25;
  } while (cVar4 != '\0');
  pcVar22 = pcVar26 + -uVar12;
  pcVar26 = pcVar25 + -1;
  for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
    pcVar22 = pcVar22 + 4;
    pcVar26 = pcVar26 + 4;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pcVar26 = *pcVar22;
    pcVar22 = pcVar22 + 1;
    pcVar26 = pcVar26 + 1;
  }
  uVar12 = 0xffffffff;
  pcVar22 = &DAT_004c4e54;
  do {
    pcVar26 = pcVar22;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar26 = pcVar22 + 1;
    cVar4 = *pcVar22;
    pcVar22 = pcVar26;
  } while (cVar4 != '\0');
  uVar12 = ~uVar12;
  iVar11 = -1;
  pcVar22 = (char *)&DAT_0051a068;
  do {
    pcVar25 = pcVar22;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar25 = pcVar22 + 1;
    cVar4 = *pcVar22;
    pcVar22 = pcVar25;
  } while (cVar4 != '\0');
  pcVar22 = pcVar26 + -uVar12;
  pcVar26 = pcVar25 + -1;
  for (uVar15 = uVar12 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
    pcVar22 = pcVar22 + 4;
    pcVar26 = pcVar26 + 4;
  }
  uVar8 = uVar8 & 0x800003ff;
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pcVar26 = *pcVar22;
    pcVar22 = pcVar22 + 1;
    pcVar26 = pcVar26 + 1;
  }
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffc00) + 1;
  }
  pcVar22 = (char *)FUN_004ad425(((int)(uVar8 * 0x1e + ((int)(uVar8 * 0x1e) >> 0x1f & 0x3ffU)) >> 10
                                 ) + 1,&DAT_0058a528,10);
  uVar8 = 0xffffffff;
  do {
    pcVar26 = pcVar22;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar26 = pcVar22 + 1;
    cVar4 = *pcVar22;
    pcVar22 = pcVar26;
  } while (cVar4 != '\0');
  uVar8 = ~uVar8;
  iVar11 = -1;
  pcVar22 = (char *)&DAT_0051a068;
  do {
    pcVar25 = pcVar22;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar25 = pcVar22 + 1;
    cVar4 = *pcVar22;
    pcVar22 = pcVar25;
  } while (cVar4 != '\0');
  pcVar22 = pcVar26 + -uVar8;
  pcVar26 = pcVar25 + -1;
  for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
    pcVar22 = pcVar22 + 4;
    pcVar26 = pcVar26 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar26 = *pcVar22;
    pcVar22 = pcVar22 + 1;
    pcVar26 = pcVar26 + 1;
  }
  uVar8 = 0xffffffff;
  pcVar22 = &DAT_004c4e54;
  do {
    pcVar26 = pcVar22;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar26 = pcVar22 + 1;
    cVar4 = *pcVar22;
    pcVar22 = pcVar26;
  } while (cVar4 != '\0');
  uVar8 = ~uVar8;
  iVar11 = -1;
  pcVar22 = (char *)&DAT_0051a068;
  do {
    pcVar25 = pcVar22;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar25 = pcVar22 + 1;
    cVar4 = *pcVar22;
    pcVar22 = pcVar25;
  } while (cVar4 != '\0');
  pcVar22 = pcVar26 + -uVar8;
  pcVar26 = pcVar25 + -1;
  for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
    pcVar22 = pcVar22 + 4;
    pcVar26 = pcVar26 + 4;
  }
  iVar11 = (int)DAT_005a6d3c;
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar26 = *pcVar22;
    pcVar22 = pcVar22 + 1;
    pcVar26 = pcVar26 + 1;
  }
  pcVar22 = (char *)FUN_004ad425(iVar11 + 0x7d1,&DAT_0058a528,10);
  uVar8 = 0xffffffff;
  do {
    pcVar26 = pcVar22;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar26 = pcVar22 + 1;
    cVar4 = *pcVar22;
    pcVar22 = pcVar26;
  } while (cVar4 != '\0');
  uVar8 = ~uVar8;
  iVar11 = -1;
  pcVar22 = (char *)&DAT_0051a068;
  do {
    pcVar25 = pcVar22;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar25 = pcVar22 + 1;
    cVar4 = *pcVar22;
    pcVar22 = pcVar25;
  } while (cVar4 != '\0');
  pcVar22 = pcVar26 + -uVar8;
  pcVar26 = pcVar25 + -1;
  for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
    pcVar22 = pcVar22 + 4;
    pcVar26 = pcVar26 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar26 = *pcVar22;
    pcVar22 = pcVar22 + 1;
    pcVar26 = pcVar26 + 1;
  }
  FUN_00404ad0(&DAT_0051a068,local_40 + -0x28,local_48 + 0x18,0x80007ff0);
  FUN_004481b0(0x95,100,0,0,0);
  *(byte *)((char)(&DAT_005794d9)[iVar17] + 0x5849e3 + (short)(&DAT_0057956e)[uVar20 * 0x80] * 0x2c)
       = *(byte *)((char)(&DAT_005794d9)[iVar17] + 0x5849e3 +
                  (short)(&DAT_0057956e)[uVar20 * 0x80] * 0x2c) | 1;
  FUN_00480c80(0);
  if ((((bVar3) && (DAT_005a59f8 == 0xffffffff)) || (uVar20 == DAT_005a59f8)) &&
     (FUN_0045c0c0(0), DAT_00822d94 == 0x79)) {
    uVar8 = 0xffffffff;
    pcVar22 = s_snapshots__004c4e48;
    do {
      pcVar26 = pcVar22;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar26 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar26;
    } while (cVar4 != '\0');
    uVar8 = ~uVar8;
    pcVar22 = pcVar26 + -uVar8;
    pcVar26 = (char *)&DAT_0051a068;
    for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
      pcVar22 = pcVar22 + 4;
      pcVar26 = pcVar26 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar26 = *pcVar22;
      pcVar22 = pcVar22 + 1;
      pcVar26 = pcVar26 + 1;
    }
    FUN_004676e0(local_44,0);
    pcVar22 = (char *)FUN_004ad425(DAT_00834170,&DAT_0058a528,10);
    uVar8 = 0xffffffff;
    do {
      pcVar26 = pcVar22;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar26 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar26;
    } while (cVar4 != '\0');
    uVar8 = ~uVar8;
    iVar11 = -1;
    pcVar22 = (char *)&DAT_0051a068;
    do {
      pcVar25 = pcVar22;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar25 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar25;
    } while (cVar4 != '\0');
    pcVar22 = pcVar26 + -uVar8;
    pcVar26 = pcVar25 + -1;
    for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
      pcVar22 = pcVar22 + 4;
      pcVar26 = pcVar26 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar26 = *pcVar22;
      pcVar22 = pcVar22 + 1;
      pcVar26 = pcVar26 + 1;
    }
    uVar8 = 0xffffffff;
    pcVar22 = &DAT_004c4e40;
    do {
      pcVar26 = pcVar22;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar26 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar26;
    } while (cVar4 != '\0');
    uVar8 = ~uVar8;
    iVar11 = -1;
    pcVar22 = (char *)&DAT_0051a068;
    do {
      pcVar25 = pcVar22;
      if (iVar11 == 0) break;
      iVar11 = iVar11 + -1;
      pcVar25 = pcVar22 + 1;
      cVar4 = *pcVar22;
      pcVar22 = pcVar25;
    } while (cVar4 != '\0');
    pcVar22 = pcVar26 + -uVar8;
    pcVar26 = pcVar25 + -1;
    for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar26 = *(undefined4 *)pcVar22;
      pcVar22 = pcVar22 + 4;
      pcVar26 = pcVar26 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar26 = *pcVar22;
      pcVar22 = pcVar22 + 1;
      pcVar26 = pcVar26 + 1;
    }
    local_10 = local_4c + -0x2a;
    local_8 = local_40 + 0x2a;
    local_c = param_1 + -0x2a;
    local_4 = local_48 + 0x2a;
    FUN_00475580(&DAT_0051a068,&local_10);
  }
  (&DAT_005794c8)[uVar20 * 0x40] = (&DAT_005794c8)[uVar20 * 0x40] | 0x20000;
  if (param_4 == 0) {
    if (((&DAT_00579528)[iVar17] & 0x7f) != 1) {
      FUN_00467a00(uVar20,1,1);
      (&DAT_005794d5)[iVar17] = 0xc;
      (&DAT_00579556)[uVar20 * 0x80] = 0xff9d;
      (&DAT_005794d2)[iVar17] = (&DAT_005794d2)[iVar17] - 2 & 7;
      return;
    }
  }
  else if (-1 < (char)(&DAT_005794ee)[iVar17]) {
    (&DAT_005794ee)[iVar17] = 0xff;
  }
  return;
}

