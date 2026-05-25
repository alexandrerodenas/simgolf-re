/* Ghidra decompiled: golf.exe */
/* Function: FUN_0046c970 @ 0x0046C970 */


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
  int iVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  char *pcVar19;
  undefined4 *puVar20;
  int *piVar21;
  char *pcVar22;
  char *pcVar23;
  int local_84;
  int local_7c;
  undefined1 *local_78;
  int local_70;
  char local_64 [100];
  
  pcVar19 = local_64;
  for (iVar11 = 0x19; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar19[0] = '\0';
    pcVar19[1] = '\0';
    pcVar19[2] = '\0';
    pcVar19[3] = '\0';
    pcVar19 = pcVar19 + 4;
  }
  puVar18 = &DAT_004d6088;
  puVar20 = &DAT_0058f338;
  for (iVar11 = 0x2df0; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar20 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar20 = puVar20 + 1;
  }
  puVar9 = &DAT_0057955a;
  puVar18 = &DAT_00543d10;
  puVar20 = &DAT_00520a28;
  for (iVar11 = 0x668a; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar20 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar20 = puVar20 + 1;
  }
  do {
    *(undefined1 *)((int)puVar9 + -0x81) = 0;
    *puVar9 = 0xffff;
    puVar9 = puVar9 + 0x80;
  } while ((int)puVar9 < 0x582d5a);
  DAT_00572cac = DAT_00572cac & 0xffffff7f;
  DAT_0056a51c = 100;
  sVar14 = 1;
  local_78 = &DAT_00575cb9;
  local_70 = 0;
  do {
    if (local_78[-1] != '\0') {
      local_7c = 0;
      do {
        iVar11 = local_70 + local_7c;
        iVar17 = iVar11 * 0x100;
        piVar21 = &DAT_005794b8 + iVar11 * 0x40;
        for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
          *piVar21 = 0;
          piVar21 = piVar21 + 1;
        }
        iVar12 = (int)DAT_0058bcbc;
        (&DAT_005794b8)[iVar11 * 0x40] = DAT_0058bcba * 0x400 + 0x600;
        uVar4 = *local_78;
        (&DAT_005794bc)[iVar11 * 0x40] = iVar12 * 0x400 + 0x600;
        (&DAT_005794d9)[iVar17] = (char)sVar14;
        (&DAT_005794d2)[iVar17] = uVar4;
        uVar6 = FUN_0045c1e0(0x7fff);
        uVar3 = DAT_005685f0;
        *(undefined2 *)(&DAT_00579570 + iVar17) = uVar6;
        (&DAT_00579572)[iVar17] = 2;
        (&DAT_005794d1)[iVar17] = 7;
        (&DAT_0057956e)[iVar11 * 0x80] = -(ushort)(iVar11 != 1) & 0x4c;
        (&DAT_00579556)[iVar11 * 0x80] = ((short)local_7c + (sVar14 - (short)uVar3) * 2) * 4;
        (&DAT_00579568)[iVar11 * 0x80] = 0xffff;
        sVar7 = FUN_0045c1e0(0x80);
        uVar3 = DAT_00834170;
        *(short *)(&DAT_00579570 + iVar17) =
             (short)(char)(&DAT_004d60a9)[(short)(&DAT_0057956e)[iVar11 * 0x80] * 0x230] +
             sVar7 * 0x100;
        (&DAT_005794d5)[iVar17] = 0xb;
        *(undefined4 *)(&DAT_00579578 + iVar17) = uVar3;
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
              uVar15 = (uint)uVar8;
              uVar10 = (((short)(&DAT_0058dd86)[uVar15 * 0x1c] + -10) *
                       ((short)(&DAT_0058dd86)[uVar15 * 0x1c] + -10)) /
                       ((DAT_00822c88 * 5 + 0x14) * 2);
              if (iVar11 == 0) {
                iVar12 = (int)((ulonglong)((longlong)(int)(DAT_00822c88 * uVar10) * -0x2aaaaaab) >>
                              0x20);
                uVar10 = uVar10 + (iVar12 - (iVar12 >> 0x1f));
              }
              if ((DAT_0059e7b8 & 0x4000000) != 0) {
                uVar10 = FUN_0045c1e0(uVar10);
                uVar10 = uVar10 & 0xffff;
              }
            } while ((((&DAT_0058dd70)[uVar15 * 0x38] == -1) || (uVar15 == 0)) ||
                    ((local_84 = local_84 + 1, local_84 < 800 && (local_64[uVar15] != '\0'))));
          } while (local_84 / (4 - DAT_00822c88) + DAT_00567b04 / 10 + DAT_00571fd4 / 200 <
                   (int)uVar10);
          iVar12 = local_84;
          if (iVar11 == 0) {
            iVar12 = (int)(local_84 + (local_84 >> 0x1f & 3U)) >> 2;
          }
        } while ((int)uVar10 < (DAT_00567b04 / 10 - iVar12) + DAT_00571fd4 / 200);
        if (local_64[uVar15] == '\0') {
          local_64[uVar15] = '\x01';
        }
        else {
          uVar15 = 0;
        }
        (&DAT_005794d0)[iVar17] = (-(iVar11 != 1) & 0xfcU) + 0x24;
        if (iVar11 != 1) {
          (&DAT_00579573)[iVar17] = (char)uVar15;
        }
        (&DAT_005794c8)[iVar11 * 0x40] = (&DAT_005794c8)[iVar11 * 0x40] & 0xffffffe3;
        if (iVar11 == 1) {
          uVar4 = 2;
        }
        else {
          uVar4 = FUN_00467130(DAT_00822c88,0,2);
        }
        (&DAT_00579572)[iVar17] = uVar4;
        if (iVar11 == 1) {
          DAT_004c2c9c = 0;
          DAT_005795d1 = 0x47;
          iVar11 = 0;
          do {
            (&DAT_005796a8)[iVar11] = (&DAT_005a5a04)[iVar11];
            if ((&DAT_005a5a04)[iVar11] != '\0') {
              DAT_004c2c9c = DAT_004c2c9c | (ushort)(1 << ((byte)iVar11 & 0x1f));
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < 0xc);
          DAT_005795c8 = DAT_005795c8 | 0x200;
          if ((DAT_0059e7b8 & 0x4000000) == 0) {
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
          iVar12 = uVar15 * 0x38;
          pcVar19 = &DAT_0058dd50 + iVar12;
          do {
            pcVar23 = pcVar19;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar23 = pcVar19 + 1;
            cVar1 = *pcVar19;
            pcVar19 = pcVar23;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          pcVar19 = pcVar23 + -uVar10;
          pcVar23 = (char *)&DAT_0051a068;
          for (uVar15 = uVar10 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
            pcVar23 = pcVar23 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar23 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar23 = pcVar23 + 1;
          }
          uVar10 = 0xffffffff;
          pcVar19 = &DAT_004c5948;
          do {
            pcVar23 = pcVar19;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar23 = pcVar19 + 1;
            cVar1 = *pcVar19;
            pcVar19 = pcVar23;
          } while (cVar1 != '\0');
          uVar10 = ~uVar10;
          iVar13 = -1;
          pcVar19 = (char *)&DAT_0051a068;
          do {
            pcVar22 = pcVar19;
            if (iVar13 == 0) break;
            iVar13 = iVar13 + -1;
            pcVar22 = pcVar19 + 1;
            cVar1 = *pcVar19;
            pcVar19 = pcVar22;
          } while (cVar1 != '\0');
          pcVar19 = pcVar23 + -uVar10;
          pcVar23 = pcVar22 + -1;
          for (uVar15 = uVar10 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
            pcVar19 = pcVar19 + 4;
            pcVar23 = pcVar23 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar23 = *pcVar19;
            pcVar19 = pcVar19 + 1;
            pcVar23 = pcVar23 + 1;
          }
          iVar13 = FUN_00437fa0(&DAT_0051a068,local_84,0xffffffff);
          if (iVar13 == 0) {
            iVar16 = local_84 * 0x230;
            uVar4 = (&DAT_0058dd71)[iVar12];
            puVar18 = (undefined4 *)((int)&DAT_00543d10 + local_84 * 0x4e2);
            for (iVar13 = 0x138; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar18 = 0;
              puVar18 = puVar18 + 1;
            }
            uVar2 = (&DAT_0058dd73)[iVar12];
            *(undefined2 *)puVar18 = 0;
            (&DAT_004d60ad)[iVar16] = (&DAT_0058dd74)[iVar12];
            bVar5 = (&DAT_0058dd70)[iVar12];
            (&DAT_004d60ac)[iVar16] = uVar2;
            (&DAT_004d60af)[iVar16] = uVar4;
            (&DAT_004d60ab)[iVar16] = (&DAT_0058dd72)[iVar12] | (bVar5 & 3) << 4;
            (&DAT_004d60a9)[iVar16] = 9;
            if ((bVar5 & 4) != 0) {
              (&DAT_004d60a9)[iVar16] = 0x89;
            }
            bVar5 = FUN_0045c1e0(5);
            (&DAT_004d60a8)[iVar16] = '\x01' << (bVar5 & 0x1f);
            sVar7 = FUN_0045c1e0(0x80);
            uVar10 = 0xffffffff;
            *(short *)(&DAT_00579570 + iVar17) =
                 sVar7 * 0x100 + (short)(char)(&DAT_004d60a9)[iVar16];
            pcVar19 = &DAT_0058dd50 + iVar12;
            do {
              pcVar23 = pcVar19;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar23 = pcVar19 + 1;
              cVar1 = *pcVar19;
              pcVar19 = pcVar23;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            pcVar19 = pcVar23 + -uVar10;
            pcVar23 = s_Gary_Golf_004d6098 + iVar16;
            for (uVar15 = uVar10 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
              pcVar19 = pcVar19 + 4;
              pcVar23 = pcVar23 + 4;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar23 = *pcVar19;
              pcVar19 = pcVar19 + 1;
              pcVar23 = pcVar23 + 1;
            }
            uVar10 = 0xffffffff;
            pcVar19 = s_Golf_Pro_004c593c;
            do {
              pcVar23 = pcVar19;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar23 = pcVar19 + 1;
              cVar1 = *pcVar19;
              pcVar19 = pcVar23;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            pcVar19 = pcVar23 + -uVar10;
            pcVar23 = (char *)(&DAT_004d6088 + local_84 * 0x8c);
            for (uVar15 = uVar10 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcVar23 = *(undefined4 *)pcVar19;
              pcVar19 = pcVar19 + 4;
              pcVar23 = pcVar23 + 4;
            }
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar23 = *pcVar19;
              pcVar19 = pcVar19 + 1;
              pcVar23 = pcVar23 + 1;
            }
            *(undefined4 *)(&DAT_005795a8 + iVar17) = *(undefined4 *)(&DAT_0058dd75 + iVar12);
            uVar3 = *(undefined4 *)(&DAT_0058dd7d + iVar12);
            *(undefined4 *)(&DAT_005795ac + iVar17) = *(undefined4 *)(&DAT_0058dd79 + iVar12);
            *(undefined4 *)(&DAT_005795b0 + iVar17) = uVar3;
          }
          else {
            *(short *)(&DAT_00579570 + iVar17) = (short)(char)(&DAT_004d60a9)[local_84 * 0x230];
          }
          (&DAT_0057956e)[iVar11 * 0x80] = (short)local_84;
          (&DAT_005794d1)[iVar17] = 7;
          *(undefined2 *)(&DAT_005794ce + iVar17) = 0xe0;
          iVar11 = 0;
          do {
            if ((&DAT_005795a8)[iVar17 + iVar11] != '\0') {
              *(ushort *)(&DAT_005794ce + iVar17) =
                   *(ushort *)(&DAT_005794ce + iVar17) | (ushort)(1 << ((byte)iVar11 & 0x1f));
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < 0xc);
        }
        local_7c = local_7c + 1;
      } while (local_7c < 2);
    }
    local_70 = local_70 + 2;
    sVar14 = sVar14 + 1;
    local_78 = local_78 + 0x208;
    if (0x23 < local_70) {
      DAT_0056a51c = 100;
      DAT_005a47e0 = 0xffffffff;
      DAT_0059e7b8 = DAT_0059e7b8 | 0x200000;
      return;
    }
  } while( true );
}

