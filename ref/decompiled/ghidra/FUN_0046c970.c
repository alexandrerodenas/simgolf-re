/* Ghidra decompiled: golf.exe */
/* Function: FUN_0046c970 @ 0x0046C970 */
/* Body size: 1729 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c970(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  short sVar7;
  ushort uVar8;
  undefined2 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  short sVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  char *pcVar20;
  undefined4 *puVar21;
  int *piVar22;
  char *pcVar23;
  char *pcVar24;
  int local_84;
  int local_7c;
  undefined1 *local_78;
  int local_70;
  char local_64 [100];
  
  pcVar20 = local_64;
  for (iVar11 = 0x19; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar20[0] = '\0';
    pcVar20[1] = '\0';
    pcVar20[2] = '\0';
    pcVar20[3] = '\0';
    pcVar20 = pcVar20 + 4;
  }
  puVar19 = &DAT_004d6088;
  puVar21 = &DAT_0058f338;
  for (iVar11 = 0x2df0; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar21 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar21 = puVar21 + 1;
  }
  puVar9 = &DAT_0057955a;
  puVar19 = &DAT_00543d10;
  puVar21 = &DAT_00520a28;
  for (iVar11 = 0x668a; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar21 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar21 = puVar21 + 1;
  }
  do {
    *(undefined1 *)((int)puVar9 + -0x81) = 0;
    *puVar9 = 0xffff;
    puVar9 = puVar9 + 0x80;
  } while ((int)puVar9 < 0x582d5a);
  DAT_00572cac = DAT_00572cac & 0xffffff7f;
  DAT_0056a51c = 100;
  sVar15 = 1;
  local_78 = &DAT_00575cb9;
  local_70 = 0;
  do {
    if (local_78[-1] != '\0') {
      local_7c = 0;
      do {
        iVar11 = local_70 + local_7c;
        iVar18 = iVar11 * 0x100;
        piVar22 = &DAT_005794b8 + iVar11 * 0x40;
        for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
          *piVar22 = 0;
          piVar22 = piVar22 + 1;
        }
        iVar12 = (int)DAT_0058bcbc;
        (&DAT_005794b8)[iVar11 * 0x40] = DAT_0058bcba * 0x400 + 0x600;
        uVar4 = *local_78;
        (&DAT_005794bc)[iVar11 * 0x40] = iVar12 * 0x400 + 0x600;
        (&DAT_005794d9)[iVar18] = (char)sVar15;
        (&DAT_005794d2)[iVar18] = uVar4;
        uVar6 = FUN_0045c1e0(0x7fff);
        uVar3 = DAT_005685f0;
        *(undefined2 *)(&DAT_00579570 + iVar18) = uVar6;
        (&DAT_00579572)[iVar18] = 2;
        (&DAT_005794d1)[iVar18] = 7;
        (&DAT_0057956e)[iVar11 * 0x80] = -(ushort)(iVar11 != 1) & 0x4c;
        (&DAT_00579556)[iVar11 * 0x80] = ((short)local_7c + (sVar15 - (short)uVar3) * 2) * 4;
        (&DAT_00579568)[iVar11 * 0x80] = 0xffff;
        sVar7 = FUN_0045c1e0(0x80);
        uVar3 = DAT_00834170;
        *(short *)(&DAT_00579570 + iVar18) =
             (short)(char)(&DAT_004d60a9)[(short)(&DAT_0057956e)[iVar11 * 0x80] * 0x230] +
             sVar7 * 0x100;
        (&DAT_005794d5)[iVar18] = 0xb;
        *(undefined4 *)(&DAT_00579578 + iVar18) = uVar3;
        sVar7 = FUN_0045c1e0(4);
        (&DAT_0057955c)[iVar11 * 0x80] = sVar7 + 3;
        (&DAT_00579576)[iVar11 * 0x80] = (short)DAT_0056a51c;
        DAT_0056a51c = DAT_0056a51c + -1;
        if (DAT_00822c88 == 0) {
          (&DAT_0057955c)[iVar11 * 0x80] = 5;
        }
        if (DAT_00543cc4 != 0) {
          (&DAT_0057955c)[iVar11 * 0x80] = (short)DAT_00543cc4 + 4;
        }
        local_84 = 0;
        (&DAT_0057955a)[iVar11 * 0x80] = (ushort)iVar11 ^ 1;
        do {
          do {
            do {
              uVar8 = FUN_0045c1e0(100);
              uVar16 = (uint)uVar8;
              uVar10 = (((short)(&DAT_0058dd86)[uVar16 * 0x1c] + -10) *
                       ((short)(&DAT_0058dd86)[uVar16 * 0x1c] + -10)) /
                       ((DAT_00822c88 * 5 + 0x14) * 2);
              if (iVar11 == 0) {
                iVar12 = (int)((ulonglong)((longlong)(int)(DAT_00822c88 * uVar10) * -0x2aaaaaab) >>
                              0x20);
                uVar10 = uVar10 + (iVar12 - (iVar12 >> 0x1f));
              }
              if ((_DAT_0059e7b8 & 0x4000000) != 0) {
                uVar10 = FUN_0045c1e0(uVar10);
                uVar10 = uVar10 & 0xffff;
              }
            } while ((((&DAT_0058dd70)[uVar16 * 0x38] == -1) || (uVar16 == 0)) ||
                    ((local_84 = local_84 + 1, local_84 < 800 && (local_64[uVar16] != '\0'))));
          } while (local_84 / (4 - DAT_00822c88) + DAT_00567b04 / 10 + DAT_00571fd4 / 200 <
                   (int)uVar10);
          iVar12 = local_84;
          if (iVar11 == 0) {
            iVar12 = (int)(local_84 + (local_84 >> 0x1f & 3U)) >> 2;
          }
        } while ((int)uVar10 < (DAT_00567b04 / 10 - iVar12) + DAT_00571fd4 / 200);
        if (local_64[uVar16] == '\0') {
          local_64[uVar16] = '\x01';
        }
        else {
          uVar16 = 0;
        }
        (&DAT_005794d0)[iVar18] = (-(iVar11 != 1) & 0xfcU) + 0x24;
        if (iVar11 != 1) {
          (&DAT_00579573)[iVar18] = (char)uVar16;
        }
        (&DAT_005794c8)[iVar11 * 0x40] = (&DAT_005794c8)[iVar11 * 0x40] & 0xffffffe3;
        if (iVar11 == 1) {
          uVar4 = 2;
        }
        else {
          uVar4 = FUN_00467130(DAT_00822c88,0,2);
        }
        (&DAT_00579572)[iVar18] = uVar4;
        if (iVar11 == 1) {
          DAT_004c2c9c = 0;
          DAT_005795d1 = 0x47;
          iVar11 = 0;
          do {
            (&DAT_005796a8)[iVar11] = *(char *)((int)&DAT_005a5a04 + iVar11);
            if (*(char *)((int)&DAT_005a5a04 + iVar11) != '\0') {
              DAT_004c2c9c = DAT_004c2c9c | (ushort)(1 << ((byte)iVar11 & 0x1f));
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < 0xc);
          DAT_005795c8 = DAT_005795c8 | 0x200;
          if ((_DAT_0059e7b8 & 0x4000000) == 0) {
            DAT_005795b8 = DAT_00585850;
            DAT_005795bc = DAT_00585854;
            DAT_005795d2 = DAT_00585866;
          }
          _DAT_00579656 = 0;
          _DAT_005795ce = DAT_004c2c9c;
        }
        else {
          local_84 = iVar11;
          if (iVar11 == 0) {
            local_84 = 1;
          }
          uVar10 = 0xffffffff;
          iVar12 = uVar16 * 0x38;
          pcVar20 = (char *)(&DAT_0058dd50 + uVar16 * 0xe);
          do {
            pcVar24 = pcVar20;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar24 = pcVar20 + 1;
            cVar1 = *pcVar20;
            pcVar20 = pcVar24;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          pcVar20 = pcVar24 + -uVar10;
          pcVar24 = (char *)&DAT_0051a068;
          for (uVar13 = uVar10 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
            pcVar20 = pcVar20 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar24 = *pcVar20;
            pcVar20 = pcVar20 + 1;
            pcVar24 = pcVar24 + 1;
          }
          uVar10 = 0xffffffff;
          pcVar20 = &DAT_004c5948;
          do {
            pcVar24 = pcVar20;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar24 = pcVar20 + 1;
            cVar1 = *pcVar20;
            pcVar20 = pcVar24;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          iVar14 = -1;
          pcVar20 = (char *)&DAT_0051a068;
          do {
            pcVar23 = pcVar20;
            if (iVar14 == 0) break;
            iVar14 = iVar14 + -1;
            pcVar23 = pcVar20 + 1;
            cVar1 = *pcVar20;
            pcVar20 = pcVar23;
          } while (cVar1 != '\0');
          pcVar20 = pcVar24 + -uVar10;
          pcVar24 = pcVar23 + -1;
          for (uVar13 = uVar10 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
            pcVar20 = pcVar20 + 4;
            pcVar24 = pcVar24 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar24 = *pcVar20;
            pcVar20 = pcVar20 + 1;
            pcVar24 = pcVar24 + 1;
          }
          iVar14 = FUN_00437fa0(&DAT_0051a068,local_84,0xffffffff);
          if (iVar14 == 0) {
            iVar17 = local_84 * 0x230;
            uVar4 = (&DAT_0058dd71)[iVar12];
            puVar19 = (undefined4 *)((int)&DAT_00543d10 + local_84 * 0x4e2);
            for (iVar14 = 0x138; iVar14 != 0; iVar14 = iVar14 + -1) {
              *puVar19 = 0;
              puVar19 = puVar19 + 1;
            }
            uVar2 = (&DAT_0058dd73)[iVar12];
            *(undefined2 *)puVar19 = 0;
            (&DAT_004d60ad)[iVar17] = (&DAT_0058dd74)[iVar12];
            bVar5 = (&DAT_0058dd70)[iVar12];
            (&DAT_004d60ac)[iVar17] = uVar2;
            (&DAT_004d60af)[iVar17] = uVar4;
            (&DAT_004d60ab)[iVar17] = (&DAT_0058dd72)[iVar12] | (bVar5 & 3) << 4;
            (&DAT_004d60a9)[iVar17] = 9;
            if ((bVar5 & 4) != 0) {
              (&DAT_004d60a9)[iVar17] = 0x89;
            }
            bVar5 = FUN_0045c1e0(5);
            (&DAT_004d60a8)[iVar17] = '\x01' << (bVar5 & 0x1f);
            sVar7 = FUN_0045c1e0(0x80);
            uVar10 = 0xffffffff;
            *(short *)(&DAT_00579570 + iVar18) =
                 sVar7 * 0x100 + (short)(char)(&DAT_004d60a9)[iVar17];
            pcVar20 = (char *)(&DAT_0058dd50 + uVar16 * 0xe);
            do {
              pcVar24 = pcVar20;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar24 = pcVar20 + 1;
              cVar1 = *pcVar20;
              pcVar20 = pcVar24;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            pcVar20 = pcVar24 + -uVar10;
            pcVar24 = s_Gary_Golf_004d6098 + iVar17;
            for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
              pcVar20 = pcVar20 + 4;
              pcVar24 = pcVar24 + 4;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar24 = *pcVar20;
              pcVar20 = pcVar20 + 1;
              pcVar24 = pcVar24 + 1;
            }
            uVar10 = 0xffffffff;
            pcVar20 = s_Golf_Pro_004c593c;
            do {
              pcVar24 = pcVar20;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar24 = pcVar20 + 1;
              cVar1 = *pcVar20;
              pcVar20 = pcVar24;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            pcVar20 = pcVar24 + -uVar10;
            pcVar24 = (char *)(&DAT_004d6088 + local_84 * 0x8c);
            for (uVar16 = uVar10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pcVar24 = *(undefined4 *)pcVar20;
              pcVar20 = pcVar20 + 4;
              pcVar24 = pcVar24 + 4;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar24 = *pcVar20;
              pcVar20 = pcVar20 + 1;
              pcVar24 = pcVar24 + 1;
            }
            *(undefined4 *)(&DAT_005795a8 + iVar18) = *(undefined4 *)(&DAT_0058dd75 + iVar12);
            uVar3 = *(undefined4 *)(&DAT_0058dd7d + iVar12);
            *(undefined4 *)(&DAT_005795ac + iVar18) = *(undefined4 *)(&DAT_0058dd79 + iVar12);
            *(undefined4 *)(&DAT_005795b0 + iVar18) = uVar3;
          }
          else {
            *(short *)(&DAT_00579570 + iVar18) = (short)(char)(&DAT_004d60a9)[local_84 * 0x230];
          }
          (&DAT_0057956e)[iVar11 * 0x80] = (short)local_84;
          (&DAT_005794d1)[iVar18] = 7;
          *(undefined2 *)(&DAT_005794ce + iVar18) = 0xe0;
          iVar11 = 0;
          do {
            if ((&DAT_005795a8)[iVar18 + iVar11] != '\0') {
              *(ushort *)(&DAT_005794ce + iVar18) =
                   *(ushort *)(&DAT_005794ce + iVar18) | (ushort)(1 << ((byte)iVar11 & 0x1f));
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < 0xc);
        }
        local_7c = local_7c + 1;
      } while (local_7c < 2);
    }
    local_70 = local_70 + 2;
    sVar15 = sVar15 + 1;
    local_78 = local_78 + 0x208;
    if (0x23 < local_70) {
      DAT_0056a51c = 100;
      DAT_005a47e0 = 0xffffffff;
      _DAT_0059e7b8 = _DAT_0059e7b8 | 0x200000;
      return;
    }
  } while( true );
}

