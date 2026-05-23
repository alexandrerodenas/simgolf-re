/* Ghidra decompiled: golf.exe */
/* Function: FUN_00402a40 @ 0x00402A40 */
/* Body size: 3162 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402a40(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  undefined1 uVar5;
  short sVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined4 uVar20;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_4;
  
  local_24 = 0;
  do {
    iVar16 = local_24 * 0x4c;
    if ((-1 < (char)(&DAT_00585863)[iVar16]) && (DAT_005a59f8 == -1)) {
      (&DAT_00585862)[iVar16] = 0;
    }
    if ((&DAT_00585862)[iVar16] == '\0') goto LAB_004038b7;
    if (((&DAT_00585865)[iVar16] != '\0') && ((DAT_00834170 & 3) == 0)) {
      cVar4 = (&DAT_00585865)[iVar16] + -1;
      (&DAT_00585865)[iVar16] = cVar4;
      if ((cVar4 == '\x04') && ((&DAT_00585864)[iVar16] == -2)) {
        if (((&DAT_00585862)[iVar16] & 8) == 0) {
          iVar11 = (int)(short)(&DAT_00585870)[local_24 * 0x26];
          if ((((short)(&DAT_00579560)[iVar11 * 0x80] < 0x11) &&
              (*(short *)(&DAT_0057955e + iVar11 * 0x100) < 0x11)) &&
             ((short)(&DAT_00579562)[iVar11 * 0x80] < 0xa1)) goto LAB_00402afe;
          uVar8 = FUN_004675d0(iVar11);
          sVar6 = (&DAT_00585870)[local_24 * 0x26];
          uVar20 = 0x3a;
        }
        else {
LAB_00402afe:
          uVar8 = FUN_004675d0((int)(short)(&DAT_00585870)[local_24 * 0x26]);
          uVar20 = 0x22;
          sVar6 = (&DAT_00585870)[local_24 * 0x26];
        }
        FUN_00467a00((int)sVar6,uVar20,uVar8);
      }
      if (((&DAT_00585865)[iVar16] == '\x04') && ((&DAT_00585864)[iVar16] == -5)) {
        if (((&DAT_00585862)[iVar16] & 8) != 0) {
          (&DAT_00579560)[(short)(&DAT_00585870)[local_24 * 0x26] * 0x80] = 99;
        }
        FUN_00467a00((int)(short)(&DAT_00585870)[local_24 * 0x26],0x19,0x14);
        uVar8 = (&DAT_00585854)[local_24 * 0x13];
        DAT_00571fd4 = DAT_00571fd4 + 2;
        uVar20 = (&DAT_00585850)[local_24 * 0x13];
        (&DAT_00579560)[(short)(&DAT_00585870)[local_24 * 0x26] * 0x80] = 0;
        FUN_0040c890(2,uVar20,uVar8,0xffffffff);
        *(short *)(&DAT_00584214 + ((int)DAT_005a6d3c % 100) * 5) =
             *(short *)(&DAT_00584214 + ((int)DAT_005a6d3c % 100) * 5) + 2;
      }
    }
    if (*(short *)(&DAT_0058586a + iVar16) != 0) {
      *(short *)(&DAT_0058586a + iVar16) = *(short *)(&DAT_0058586a + iVar16) + -1;
      goto LAB_004038b7;
    }
    cVar4 = (&DAT_00585863)[iVar16];
    if ('\0' < cVar4) {
      if ((&DAT_0057958c)[DAT_005a59f8 * 0x40] == 0) {
        local_30 = (&DAT_005794b8)[DAT_005a59f8 * 0x40];
        local_2c = (&DAT_005794bc)[DAT_005a59f8 * 0x40];
      }
      else {
        local_30 = (&DAT_0057958c)[DAT_005a59f8 * 0x40] + (&DAT_004c2878)[local_24 & 7] * 0x400;
        local_2c = (&DAT_00579590)[DAT_005a59f8 * 0x40] + (&DAT_004c2898)[local_24 & 7] * 0x400;
      }
      local_10 = local_30 - (&DAT_00585850)[local_24 * 0x13];
      local_18 = local_2c - (&DAT_00585854)[local_24 * 0x13];
      iVar11 = FUN_00467170(local_10,local_18);
      if (((0x7ff < iVar11) && ((short)(&DAT_00579556)[DAT_005a59f8 * 0x80] < 1)) &&
         (((&DAT_005794da)[DAT_005a59f8 * 0x100] != '\0' ||
          ((&DAT_005794d9)[DAT_005a59f8 * 0x100] != '\x01')))) goto LAB_00403503;
      iVar11 = FUN_004672d0(local_10,local_18);
      (&DAT_00585866)[iVar16] = (byte)((int)((iVar11 >> 0x1c & 0xfU) + 1) >> 1) & 7;
      (&DAT_0058586e)[local_24 * 0x26] = 0xb;
      sVar6 = FUN_0045c1e0(0x10);
      *(short *)(&DAT_0058586a + iVar16) = sVar6 + 1;
      *(undefined2 *)(&DAT_00585868 + iVar16) = 0;
      goto LAB_004038b7;
    }
    if ((cVar4 == -6) &&
       ((DAT_005a59f8 != -1 || (((_DAT_0059e7b8 & 0x200000) != 0 && (DAT_005795d9 != '\0'))))))
    goto LAB_004038b7;
    if ((*(short *)(&DAT_00585868 + iVar16) != 0) || (((&DAT_00585862)[iVar16] & 0x10) != 0)) {
LAB_00403503:
      if (((&DAT_00585862)[iVar16] & 0x10) != 0) {
        local_30 = _DAT_00578150 * 0x400 + 0x200;
        local_2c = _DAT_00578154 * 0x400 + 0x200;
        if ((int)(local_24 * 0x23 + DAT_00834170) % 100 == 0) {
          (&DAT_00585865)[iVar16] = 7;
          (&DAT_00585864)[iVar16] = 0x23;
        }
        iVar11 = FUN_00467170(local_30 - (&DAT_00585850)[local_24 * 0x13],
                              local_2c - (&DAT_00585854)[local_24 * 0x13]);
        if (iVar11 < 0x600) {
          (&DAT_00585862)[iVar16] = 0;
        }
      }
      if (*(short *)(&DAT_00585868 + iVar16) == 0) {
        _DAT_0059e7b8 = _DAT_0059e7b8 | 0x100;
        cVar4 = FUN_0042e7e0(local_30,local_2c,(&DAT_00585850)[local_24 * 0x13],
                             (&DAT_00585854)[local_24 * 0x13],local_24);
        _DAT_0059e7b8 = _DAT_0059e7b8 & 0xfffffeff;
        (&DAT_00585866)[iVar16] = cVar4;
        if (cVar4 == -1) {
          iVar11 = FUN_004672d0(local_10,local_18);
          (&DAT_00585866)[iVar16] = (byte)((int)((iVar11 >> 0x1c & 0xfU) + 1) >> 1) & 7;
          (&DAT_0058586e)[local_24 * 0x26] = 0xb;
          sVar6 = FUN_0045c1e0(0x10);
          *(short *)(&DAT_0058586a + iVar16) = sVar6 + 1;
        }
        else {
          uVar2 = (ushort)((int)(&DAT_00585850)[local_24 * 0x13] >> 6) & 0xf;
          uVar3 = (ushort)((int)(&DAT_00585854)[local_24 * 0x13] >> 6) & 0xf;
          if ((&DAT_004c2878)[cVar4] == 0) {
            if ((&DAT_004c2898)[cVar4] == 1) {
              sVar6 = 0x18 - uVar3;
            }
            else {
              sVar6 = uVar3 + 8;
            }
          }
          else if ((&DAT_004c2878)[cVar4] == 1) {
            sVar6 = 0x18 - uVar2;
          }
          else {
            sVar6 = uVar2 + 8;
          }
          *(short *)(&DAT_00585868 + iVar16) = sVar6;
          if ((((&DAT_00585866)[iVar16] & 1) != 0) && (0x10 < *(short *)(&DAT_00585868 + iVar16))) {
            *(undefined2 *)(&DAT_00585868 + iVar16) = 0x10;
          }
        }
        if (*(short *)(&DAT_00585868 + iVar16) == 0) goto LAB_004038b7;
      }
      local_14 = 0;
      if (0 < (int)local_24) {
        piVar15 = &DAT_00585850;
        do {
          if ((*(char *)((int)piVar15 + 0x12) != '\0') && (local_14 != local_24)) {
            iVar19 = *piVar15 - (&DAT_00585850)[local_24 * 0x13];
            iVar13 = piVar15[1] - (&DAT_00585854)[local_24 * 0x13];
            iVar11 = FUN_00467170(iVar19,iVar13);
            if (iVar11 < 0x155) {
              uVar10 = FUN_004671a0(iVar19,iVar13);
              uVar12 = (uint)(char)(&DAT_00585866)[iVar16];
              if (((uVar12 == uVar10) || (uVar12 == (uVar10 + 1 & 7))) ||
                 (uVar12 == (uVar10 - 1 & 7))) {
                sVar6 = FUN_0045c1e0(4);
                *(short *)(&DAT_0058586a + iVar16) = sVar6 + 4;
                (&DAT_0058586e)[local_24 * 0x26] = 0xb;
              }
            }
            if (*(short *)(&DAT_0058586a + iVar16) != 0) {
              iVar11 = FUN_004672d0(iVar19,iVar13);
              (&DAT_00585866)[iVar16] = (byte)((int)((iVar11 >> 0x1c & 0xfU) + 1) >> 1) & 7;
            }
          }
          local_14 = local_14 + 1;
          piVar15 = piVar15 + 0x13;
        } while ((int)local_14 < (int)local_24);
      }
      iVar11 = ((int)(&DAT_00585854)[local_24 * 0x13] >> 10) +
               ((int)(&DAT_00585850)[local_24 * 0x13] >> 10) * 0x32;
      iVar13 = FUN_00467130(6 - (char)(&DAT_00578375)[*(char *)((int)&DAT_005722e8 + iVar11) * 0x30]
                            ,2,5);
      if ((*(byte *)(&DAT_0053caf0 + iVar11) & 0x20) != 0) {
        iVar13 = 6;
      }
      if (((&DAT_00585862)[iVar16] & 8) != 0) {
        iVar13 = iVar13 + 2;
      }
      if ((&DAT_00585863)[iVar16] == -6) {
        iVar13 = iVar13 + 2;
      }
      if (((&DAT_00585862)[iVar16] & 0x10) != 0) {
        iVar13 = 3;
      }
      (&DAT_00585850)[local_24 * 0x13] =
           (&DAT_00585850)[local_24 * 0x13] +
           (((&DAT_004c2878)[(char)(&DAT_00585866)[iVar16]] * iVar13 * 0x40) / 2) /
           (int)((((&DAT_00585866)[iVar16] & 1) != 0) + 3);
      (&DAT_00585854)[local_24 * 0x13] =
           (&DAT_00585854)[local_24 * 0x13] +
           (((&DAT_004c2898)[(char)(&DAT_00585866)[iVar16]] * iVar13 * 0x40) / 2) /
           (int)((((&DAT_00585866)[iVar16] & 1) != 0) + 3);
      *(short *)(&DAT_00585868 + iVar16) = *(short *)(&DAT_00585868 + iVar16) + -1;
      if ((*(short *)(&DAT_00585868 + iVar16) != 0) && (sVar6 = FUN_0045c1e0(4), sVar6 == 0)) {
        *(short *)(&DAT_00585868 + iVar16) = *(short *)(&DAT_00585868 + iVar16) + -1;
      }
      if (((short)(&DAT_0058586e)[local_24 * 0x26] < 7) ||
         (sVar6 = (&DAT_0058586e)[local_24 * 0x26] + 1, (&DAT_0058586e)[local_24 * 0x26] = sVar6,
         10 < sVar6)) {
        (&DAT_0058586e)[local_24 * 0x26] = 7;
      }
      goto LAB_004038b7;
    }
    iVar11 = (&DAT_00585850)[local_24 * 0x13];
    iVar13 = (&DAT_00585854)[local_24 * 0x13];
    local_10 = 0xfffff;
    local_28 = -1;
    local_30 = iVar11;
    local_2c = iVar13;
    if ((&DAT_00585860)[iVar16] != -1) {
      local_30 = (char)(&DAT_00585860)[iVar16] * 0x400 + 0x200;
      local_2c = (char)(&DAT_00585861)[iVar16] * 0x400 + 0x200;
    }
    local_20 = -1;
    local_1c = -1;
    if ((cVar4 == -4) || (cVar4 == -6)) {
      iVar19 = 0x18;
      if (((&DAT_00585862)[iVar16] & 8) != 0) {
        iVar19 = 0x20;
      }
      local_14 = -0x10;
      do {
        local_18 = -0x10;
        do {
          iVar17 = (int)(char)(&DAT_00585860)[iVar16] + local_14;
          iVar14 = (char)(&DAT_00585861)[iVar16] + local_18;
          iVar9 = FUN_0040bf60(iVar17,iVar14);
          if (((iVar9 == 0) && (((&DAT_0053caf0)[iVar14 + iVar17 * 0x32] & 0x800) != 0)) &&
             (iVar9 = FUN_00467170((iVar17 * 2 - (int)(char)(&DAT_00585860)[iVar16]) -
                                   (iVar11 >> 10),
                                   (iVar14 * 2 - (int)(char)(&DAT_00585861)[iVar16]) -
                                   (iVar13 >> 10)), iVar9 < iVar19)) {
            local_30 = iVar17 * 0x400 + 0x200;
            local_2c = iVar14 * 0x400 + 0x200;
            local_28 = 1;
            local_20 = -4;
            iVar19 = iVar9;
            local_1c = iVar17;
            local_4 = iVar14;
          }
          local_18 = local_18 + 1;
        } while (local_18 < 0x11);
        local_14 = local_14 + 1;
      } while ((int)local_14 < 0x11);
      if ((local_28 == -1) && (((&DAT_00585862)[iVar16] & 8) != 0)) {
        iVar11 = 0x1400;
        iVar13 = 0;
        piVar15 = &DAT_005736b0;
        do {
          if ((piVar15[2] != -1) &&
             (iVar19 = FUN_00467170((*piVar15 * 2 + -0x200 + (char)(&DAT_00585860)[iVar16] * -0x400)
                                    - (&DAT_00585850)[local_24 * 0x13],
                                    (piVar15[1] * 2 + -0x200 +
                                    (char)(&DAT_00585861)[iVar16] * -0x400) -
                                    (&DAT_00585850)[local_24 * 0x13]), iVar19 < iVar11)) {
            local_2c = piVar15[1];
            local_30 = *piVar15;
            local_28 = 2;
            local_20 = -4;
            iVar11 = iVar19;
            local_1c = iVar13;
          }
          piVar15 = piVar15 + 9;
          iVar13 = iVar13 + 1;
        } while ((int)piVar15 < 0x575ab0);
      }
    }
    cVar4 = (&DAT_00585863)[iVar16];
    if (((cVar4 != -4) && (cVar4 != -6)) || ((local_1c == -1 && (cVar4 == -6)))) {
      local_30 = (char)(&DAT_00585860)[iVar16] * 0x400 + 0x200;
      local_18 = 0;
      puVar18 = &DAT_005794bc;
      local_2c = (char)(&DAT_00585861)[iVar16] * 0x400 + 0x200;
      do {
        iVar13 = -1;
        iVar11 = FUN_0040c4b0(puVar18[-1],*puVar18,(int)(char)(&DAT_00585860)[iVar16],
                              (int)(char)(&DAT_00585861)[iVar16]);
        if (((('\0' < *(char *)((int)puVar18 + 0x1d)) && ('\x06' < *(char *)((int)puVar18 + 0x19)))
            && (local_18 != (short)(&DAT_00585870)[local_24 * 0x26])) &&
           ((iVar19 = FUN_0040bfa0(puVar18[-1],*puVar18), iVar19 != 0 &&
            (iVar19 = FUN_0040bfa0(puVar18[-1],*puVar18), iVar19 != 0x16)))) {
          cVar4 = (&DAT_00585863)[iVar16];
          if ((cVar4 == -3) || (cVar4 == -6)) {
            if (((puVar18[3] & 0x20000000) == 0) || (((&DAT_00585862)[iVar16] & 8) == 0)) {
              if (((puVar18[3] & 0x4000) != 0) || ('\x01' < *(char *)((int)puVar18 + 0x1e)))
              goto LAB_00403039;
            }
            else {
              iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 7U)) >> 3;
            }
            iVar13 = -3;
          }
LAB_00403039:
          if ((((cVar4 == -2) || (cVar4 == -6)) && (*(char *)(puVar18 + 0x1b) != '\"')) &&
             (*(char *)(puVar18 + 0x1b) != ':')) {
            iVar13 = -2;
          }
          if (((cVar4 == -5) || (cVar4 == -6)) &&
             ((short)(((byte)~(&DAT_00585862)[iVar16] & 8) >> 1) < *(short *)(puVar18 + 0x29))) {
            iVar13 = -5;
          }
          if (((iVar13 == cVar4) || (cVar4 == -6)) && (iVar11 < local_10)) {
            local_28 = local_18;
            local_20 = iVar13;
            local_10 = iVar11;
          }
        }
        puVar18 = puVar18 + 0x40;
        local_18 = local_18 + 1;
      } while ((int)puVar18 < 0x582cbc);
      if (local_10 < 100) {
        local_30 = (&DAT_005794b8)[local_28 * 0x40];
        local_2c = (&DAT_005794bc)[local_28 * 0x40];
      }
      else {
        if (local_28 != -1) {
          uVar5 = FUN_004671a0((&DAT_005794b8)[local_28 * 0x40] - (&DAT_00585850)[local_24 * 0x13],
                               (&DAT_005794bc)[local_28 * 0x40] - (&DAT_00585854)[local_24 * 0x13]);
          (&DAT_00585866)[iVar16] = uVar5;
        }
        local_28 = -1;
      }
    }
    if (((&DAT_00585863)[iVar16] == -6) && (DAT_00575cb8 == '\0')) {
      if (((DAT_00834170 & 0x200) == 0) &&
         (*(char *)((int)&DAT_005722e8 + DAT_00543d08 * 0x32 + DAT_00543d0c) != '\x11')) {
        local_30 = DAT_00543d08 * 0x400 + 0x200;
        local_2c = DAT_00543d0c * 0x400 + 0x200;
      }
      else {
        local_30 = (&DAT_00585850)[local_24 * 0x13];
        local_2c = (&DAT_00585854)[local_24 * 0x13];
      }
    }
    local_18 = local_2c - (&DAT_00585854)[local_24 * 0x13];
    local_10 = local_30 - (&DAT_00585850)[local_24 * 0x13];
    iVar11 = FUN_00467170(local_10,local_18);
    if (0x400 < iVar11) goto LAB_00403503;
    (&DAT_0058586e)[local_24 * 0x26] = 0xb;
    sVar6 = FUN_0045c1e0(0x10);
    *(short *)(&DAT_0058586a + iVar16) = sVar6 + 1;
    iVar11 = FUN_00467170(local_10,local_18);
    iVar13 = 0;
    *(ushort *)(&DAT_00585868 + iVar16) = ((0x800 < iVar11) - 1 & 0xfe00) + 0x200;
    if (((&DAT_00585862)[iVar16] & 8) != 0) {
      iVar13 = 4;
    }
    if (((&DAT_00585863)[iVar16] == -6) && (local_20 != -2)) {
      iVar13 = 8;
    }
    if (local_28 == -1) {
      uVar7 = FUN_0045c1e0(8);
      *(undefined2 *)(&DAT_0058586a + iVar16) = uVar7;
      goto LAB_004038b7;
    }
    iVar11 = FUN_004672d0(local_10,local_18);
    (&DAT_00585866)[iVar16] = (byte)((int)((iVar11 >> 0x1c & 0xfU) + 1) >> 1) & 7;
    *(short *)(&DAT_0058586a + iVar16) = *(short *)(&DAT_0058586a + iVar16) + 0x40;
    (&DAT_00585865)[iVar16] = 7;
    (&DAT_00585870)[local_24 * 0x26] = (short)local_28;
    switch(local_20) {
    case -5:
      (&DAT_00585864)[iVar16] = 0xfb;
      (&DAT_0058586e)[local_24 * 0x26] = 0xc;
      (&DAT_0058586c)[local_24 * 0x26] = 0;
      FUN_0040c500(iVar13 + 0x5f,(&DAT_00585850)[local_24 * 0x13],(&DAT_00585854)[local_24 * 0x13],0
                  );
      *(short *)(&DAT_0058586a + iVar16) = *(short *)(&DAT_0058586a + iVar16) + -0x20;
      bVar1 = (&DAT_00585866)[iVar16];
      (&DAT_00579556)[local_28 * 0x80] = 0xffe0;
      (&DAT_005794d5)[local_28 * 0x100] = 0xb;
      (&DAT_005794d2)[local_28 * 0x100] = bVar1 ^ 4;
      break;
    case -4:
      if (local_28 == 2) {
        (&DAT_00585864)[iVar16] = 0xfa;
        (&DAT_0058586e)[local_24 * 0x26] = 0xc;
        *(undefined2 *)(&DAT_0058586a + iVar16) = 0xc;
        (&DAT_005736b8)[local_1c * 9] = 0xffffffff;
      }
      else {
        (&DAT_00585864)[iVar16] = 0xfc;
        (&DAT_0058586e)[local_24 * 0x26] = 0xc;
        *(ushort *)(&DAT_0058586a + iVar16) =
             (ushort)(short)(char)(~(&DAT_00585862)[iVar16] & 8) >> 3;
        iVar11 = local_4 + local_1c * 0x32;
        uVar2 = (&DAT_0053caf0)[iVar11];
        if ((uVar2 & 0x4000) == 0) {
          uVar8 = (&DAT_00585850)[local_24 * 0x13];
          (&DAT_0053caf0)[iVar11] = uVar2 | 0x4000;
          (&DAT_00578804)[iVar11] = (char)DAT_0053fa28 + -3;
          FUN_0040c500(iVar13 + 0x5e,uVar8,(&DAT_00585854)[local_24 * 0x13],0);
          FUN_00402930(local_1c,local_4);
        }
        else {
          cVar4 = (&DAT_00578804)[iVar11];
          (&DAT_00578804)[iVar11] = cVar4 - 1U;
          if ((byte)(cVar4 - 1U) < 2) {
            *(undefined2 *)(&DAT_0058586a + iVar16) = 8;
            (&DAT_0053caf0)[iVar11] = uVar2 & 0xb7ff;
            break;
          }
        }
      }
      goto LAB_004034b1;
    case -3:
      uVar10 = (&DAT_005794c8)[local_28 * 0x40];
      if (((uVar10 & 0x20000000) == 0) || (((&DAT_00585862)[iVar16] & 8) == 0)) {
        (&DAT_00585864)[iVar16] = 0xfd;
        (&DAT_005794c8)[local_28 * 0x40] = uVar10 | 0x4000;
      }
      else {
        (&DAT_0057955c)[local_28 * 0x80] = 0xfff5;
        (&DAT_00585864)[iVar16] = 0xf9;
        (&DAT_00579556)[local_28 * 0x80] = 0;
      }
      (&DAT_0058586e)[local_24 * 0x26] = 0xc;
      (&DAT_0058586c)[local_24 * 0x26] = 0;
      FUN_0040c500(iVar13 + 0x5d,(&DAT_00585850)[local_24 * 0x13],(&DAT_00585854)[local_24 * 0x13],
                   500);
      break;
    case -2:
      (&DAT_00585864)[iVar16] = 0xfe;
      *(short *)(&DAT_0058586a + iVar16) = *(short *)(&DAT_0058586a + iVar16) + 0x40;
      FUN_0040c500(iVar13 + 0x5c,(&DAT_00585850)[local_24 * 0x13],(&DAT_00585854)[local_24 * 0x13],0
                  );
      bVar1 = (&DAT_00585866)[iVar16];
      (&DAT_0058586e)[local_24 * 0x26] = 0xc;
      (&DAT_0058586c)[local_24 * 0x26] = 0;
      (&DAT_00579556)[local_28 * 0x80] = (&DAT_00579556)[local_28 * 0x80] + -0x10;
      (&DAT_005794d2)[local_28 * 0x100] = bVar1 ^ 4;
      (&DAT_005794d5)[local_28 * 0x100] = 0xb;
      break;
    default:
      goto LAB_004034b1;
    }
    (&DAT_00585876)[local_24 * 0x26] = (&DAT_00585876)[local_24 * 0x26] + 1;
LAB_004034b1:
    if ((1 < *(short *)(&DAT_0058586a + iVar16)) && (((&DAT_00585862)[iVar16] & 8) != 0)) {
      *(short *)(&DAT_0058586a + iVar16) = *(short *)(&DAT_0058586a + iVar16) / 2;
    }
LAB_004038b7:
    local_24 = local_24 + 1;
    if (0x3f < (int)local_24) {
      return;
    }
  } while( true );
}

