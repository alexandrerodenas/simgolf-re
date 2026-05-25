/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042e7e0 @ 0x0042E7E0 */


uint FUN_0042e7e0(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar19;
  uint uVar20;
  undefined4 *puVar21;
  int iVar22;
  int iVar23;
  char *pcVar24;
  char *pcVar25;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  undefined1 *local_28;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  int local_4;
  uint uVar18;
  
  puVar21 = (undefined4 *)&DAT_0058d370;
  for (iVar15 = 0x271; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
  }
  uVar6 = FUN_004671a0(param_1 - param_3,param_2 - param_4);
  iVar15 = FUN_00467130(param_1 >> 10,0,0x31);
  iVar7 = FUN_00467130(param_2 >> 10,0,0x31);
  iVar8 = FUN_00467130(param_3 >> 10,0,0x31);
  iVar9 = FUN_00467130(param_4 >> 10,0,0x31);
  local_30 = FUN_00467130((int)(&DAT_005794b8)[(param_5 ^ 1) * 0x40] >> 10,0,0x31);
  iVar10 = FUN_00467130((int)(&DAT_005794bc)[(param_5 ^ 1) * 0x40] >> 10,0,0x31);
  if ((local_30 == iVar15) && (iVar10 == iVar7)) {
    local_30 = -1;
  }
  if ((iVar15 == iVar8) && (iVar7 == iVar9)) {
    return uVar6;
  }
  iVar22 = iVar7 - iVar9;
  iVar19 = iVar15 - iVar8;
  local_8 = iVar22;
  local_4 = iVar19;
  iVar11 = FUN_0040acd0(iVar19,iVar22);
  iVar19 = FUN_004672d0(iVar19,iVar22);
  bVar5 = (byte)((int)((iVar19 >> 0x1c) + 1U ^ 0xfffffff9) >> 1);
  DAT_005a7404 = (undefined2)iVar15;
  DAT_005a8028 = (undefined2)iVar7;
  local_34 = 1;
  (&DAT_0058d370)[iVar15 * 0x32 + iVar7] = 1;
  local_c = 1 << ((bVar5 & 7) + 1 & 6) | 1 << (bVar5 & 6);
  uVar6 = 0;
  iVar19 = (-(uint)((DAT_0059e7b8 & 0x100) != 0) & 0x5a) + 0xa0;
  local_38 = iVar19;
  do {
    sVar3 = (&DAT_005a7404)[uVar6];
    sVar4 = (&DAT_005a8028)[uVar6];
    uVar6 = uVar6 + 1 & 0x3ff;
    local_14 = (int)sVar4 + sVar3 * 0x32;
    uVar16 = (uint)(byte)(&DAT_0058d370)[local_14];
    if ((int)uVar16 <= iVar19) {
      uVar20 = 0;
      do {
        iVar22 = (&DAT_004c2878)[uVar20] + (int)sVar3;
        iVar23 = (&DAT_004c2898)[uVar20] + (int)sVar4;
        if ((((-1 < iVar22) && (-1 < iVar23)) && (iVar22 < 0x32)) && (iVar23 < 0x32)) {
          iVar1 = iVar23 + iVar22 * 0x32;
          local_10 = (uint)(byte)(&DAT_0058d370)[iVar1];
          uVar12 = (int)*(char *)((int)&DAT_0053bbac + iVar1) + (uVar20 & 1);
          if ((iVar22 == local_30) && (iVar23 == iVar10)) {
            uVar12 = uVar12 + 2;
          }
          if ((((uVar20 & 1) == 0) &&
              ((int)(uint)(byte)((~(byte)DAT_00834170 & 0x40 | 0x80) >> 6) < iVar11)) &&
             ((((&DAT_0053caf0)[iVar1] & 0x420) == 0x20 &&
              ((*(byte *)(&DAT_0053caf0 + local_14) & 0x20) != 0)))) {
            uVar12 = FUN_0042e7a0(iVar22 - iVar15,iVar23 - iVar7);
            uVar12 = (uint)(uVar20 != uVar12);
          }
          if (((DAT_0059e7b8 & 0x100) != 0) || ((&DAT_005794d9)[param_5 * 0x100] == '\x13')) {
            iVar19 = (int)*(char *)((int)&DAT_005722e8 + iVar1);
            if ((iVar19 == 1) ||
               (((iVar19 == 2 || (iVar19 == 0)) || ((&DAT_00578376)[iVar19 * 0x30] == '\a')))) {
              uVar12 = uVar12 + 1;
            }
            else {
              uVar12 = (int)(uVar12 + 1) >> 1;
            }
          }
          if (((*(char *)((int)&DAT_005722e8 + iVar1) == '\x11') ||
              (*(char *)((int)&DAT_005722e8 + iVar1) == '\x14')) &&
             (((*(byte *)(&DAT_0053caf0 + iVar1) & 0x20) == 0 && (uVar16 < 0x40)))) {
            uVar12 = uVar12 + 0x10;
          }
          iVar13 = uVar12 + uVar16;
          iVar19 = local_38;
          if (((local_10 == 0) || (iVar13 < (int)local_10)) && (iVar13 < 0x100)) {
            (&DAT_0058d370)[iVar1] = (char)iVar13;
            (&DAT_005a7404)[local_34] = (short)iVar22;
            (&DAT_005a8028)[local_34] = (short)iVar23;
            local_34 = local_34 + 1 & 0x3ff;
            if ((iVar22 == iVar8) && (iVar23 == iVar9)) {
              iVar19 = iVar13;
              local_38 = iVar13;
            }
          }
        }
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < 8);
    }
  } while ((uVar6 != local_34) && (DAT_0083afcc == 0));
  if ((DAT_0059e7b8 & 0x1000) != 0) {
    iVar10 = 0;
    local_28 = &DAT_0058d370;
    do {
      iVar19 = 0;
      do {
        if (local_28[iVar19] != '\0') {
          DAT_0051a068._0_1_ = 0;
          pcVar14 = (char *)FUN_004ad425(local_28[iVar19],&DAT_0058a528,10);
          uVar6 = 0xffffffff;
          do {
            pcVar25 = pcVar14;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar25 = pcVar14 + 1;
            cVar2 = *pcVar14;
            pcVar14 = pcVar25;
          } while (cVar2 != '\0');
          uVar6 = ~uVar6;
          iVar11 = -1;
          pcVar14 = (char *)&DAT_0051a068;
          do {
            pcVar24 = pcVar14;
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            pcVar24 = pcVar14 + 1;
            cVar2 = *pcVar14;
            pcVar14 = pcVar24;
          } while (cVar2 != '\0');
          pcVar14 = pcVar25 + -uVar6;
          pcVar25 = pcVar24 + -1;
          for (uVar16 = uVar6 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined4 *)pcVar25 = *(undefined4 *)pcVar14;
            pcVar14 = pcVar14 + 4;
            pcVar25 = pcVar25 + 4;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar25 = *pcVar14;
            pcVar14 = pcVar14 + 1;
            pcVar25 = pcVar25 + 1;
          }
          FUN_0042f940(iVar10,iVar19,&local_14,&local_10);
          FUN_00404b70(&DAT_0051a068,local_14,local_10 - 3,0x80007fff);
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < 0x32);
      local_28 = local_28 + 0x32;
      iVar10 = iVar10 + 1;
    } while ((int)local_28 < 0x58dd34);
    FUN_00480c80(0);
    FUN_0045c0c0(0);
  }
  uVar6 = 0xffffffff;
  iVar10 = iVar9 + iVar8 * 0x32;
  local_28 = (undefined1 *)((uint)(byte)(&DAT_0058d370)[iVar10] * 2 + 1);
  local_10 = FUN_0045c1e0(8);
  local_10 = local_10 & 0xffff;
  local_2c = 0;
  do {
    uVar16 = local_2c + local_10;
    uVar20 = uVar16 & 7;
    iVar11 = (&DAT_004c2878)[uVar20] + iVar8;
    iVar19 = (&DAT_004c2898)[uVar20] + iVar9;
    if (((((-1 < iVar11) && (-1 < iVar19)) && (iVar11 < 0x32)) &&
        ((iVar19 < 0x32 && (iVar22 = FUN_0040bf60(iVar11,iVar19), iVar22 == 0)))) &&
       ((byte)(&DAT_0058d370)[iVar11 * 0x32 + iVar19] != 0)) {
      uVar16 = uVar16 & 1;
      iVar19 = uVar16 + (uint)(byte)(&DAT_0058d370)[iVar11 * 0x32 + iVar19] * 2;
      if (((*(char *)((int)&DAT_005722e8 + iVar10) != '\x11') ||
          ((*(byte *)(&DAT_0053caf0 + iVar10) & 0x20) == 0)) || (uVar16 == 0)) {
        if ((local_c & 1 << ((byte)uVar20 ^ 4)) != 0) {
          iVar19 = iVar19 + -1;
        }
        if (iVar19 < (int)local_28) {
          uVar6 = uVar20;
          local_28 = (undefined1 *)iVar19;
        }
      }
    }
    local_2c = local_2c + 1;
  } while (local_2c < 8);
  uVar16 = uVar6;
  if ((((DAT_0059e7b8 & 0x100) == 0) && (*(char *)((int)&DAT_005722e8 + iVar10) == '\x11')) &&
     ((*(byte *)(&DAT_0053caf0 + iVar10) & 0x20) != 0)) {
    uVar20 = ((&DAT_005794b8)[param_5 * 0x40] + iVar8 * -0x400) - 0x200;
    uVar12 = ((&DAT_005794bc)[param_5 * 0x40] + iVar9 * -0x400) - 0x200;
    if (uVar6 < 7) {
      uVar17 = (int)uVar20 >> 0x1f;
      uVar18 = (int)uVar12 >> 0x1f;
      switch(uVar6) {
      case 0:
        if ((int)((uVar20 ^ uVar17) - uVar17) < 0x101) {
          return uVar6;
        }
        uVar16 = (((int)uVar20 < 1) - 1 & 0xfffffffe) + 1;
        break;
      default:
        goto switchD_0042ed92_caseD_1;
      case 2:
        if ((int)((uVar12 ^ uVar18) - uVar18) < 0x101) {
          return uVar6;
        }
        uVar16 = (((int)uVar12 < 1) - 1 & 0xfffffffe) + 3;
        break;
      case 4:
        if ((int)((uVar20 ^ uVar17) - uVar17) < 0x101) {
          return uVar6;
        }
        uVar16 = (((int)uVar20 < 1) - 1 & 2) - 5;
        break;
      case 6:
        if ((int)((uVar12 ^ uVar18) - uVar18) < 0x101) {
          return uVar6;
        }
        uVar16 = (((int)uVar12 < 1) - 1 & 2) - 3;
      }
      uVar16 = uVar16 & 7;
      if (uVar16 != uVar6) {
        DAT_0059e7b8 = DAT_0059e7b8 | 0x80000;
      }
    }
  }
switchD_0042ed92_caseD_1:
  if ((uVar16 == 0xffffffff) && ((iVar15 != iVar8 || (iVar7 != iVar9)))) {
    uVar16 = FUN_004671a0(local_4,local_8);
  }
  return uVar16;
}

