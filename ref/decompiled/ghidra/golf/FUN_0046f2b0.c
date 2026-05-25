/* Ghidra decompiled: golf.exe */
/* Function: FUN_0046f2b0 @ 0x0046F2B0 */


void FUN_0046f2b0(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  ushort uVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  int local_4;
  
  puVar16 = &DAT_00571fd8;
  for (iVar9 = 0xc3; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  *(undefined2 *)puVar16 = 0;
  puVar8 = &DAT_00571ff4;
  do {
    puVar8[4] = 0xff;
    *puVar8 = 0xff;
    puVar8 = puVar8 + 0x2e;
  } while ((int)puVar8 < 0x5722d4);
  iVar9 = 0xc;
  pcVar12 = &DAT_0057221d;
  local_4 = 0xc;
LAB_0046f2e9:
  do {
    uVar7 = FUN_0045c1e0(0x10);
    uVar10 = (uint)uVar7;
    bVar4 = true;
    if (0x57221d < (int)pcVar12) {
      pcVar13 = &DAT_00572220;
      iVar17 = iVar9 + -0xc;
      do {
        if (*pcVar13 == (&DAT_004c1ece)[uVar10 * 0x82]) {
          bVar4 = false;
        }
        pcVar13 = pcVar13 + 0x2e;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      if (!bVar4) goto LAB_0046f2e9;
    }
    pcVar12[-1] = (char)uVar7;
    cVar5 = ((char)iVar9 + '\x04') * '\n';
    *pcVar12 = cVar5;
    iVar17 = uVar10 * 0x82;
    cVar6 = (&DAT_004c1ecf)[iVar17];
    if (cVar6 == '\0') {
      *pcVar12 = ((3 < iVar9) - 1U & 0xf6) + 0x14 + cVar5;
      iVar9 = local_4;
    }
    if (cVar6 == '\x02') {
      *pcVar12 = *pcVar12 - (((3 < iVar9) - 1U & 0xf6) + 0x14);
    }
    if ((DAT_0059e7b8 & 0x1000000) != 0) {
      *pcVar12 = -6;
    }
    cVar5 = (&DAT_004c1ece)[iVar17];
    pcVar12[2] = cVar6;
    pcVar12[1] = (&DAT_004c1ed0)[iVar17];
    uVar2 = (&DAT_004c1eca)[uVar10 * 0x41];
    pcVar12[3] = cVar5;
    uVar3 = (&DAT_004c1ecc)[uVar10 * 0x41];
    *(undefined2 *)(pcVar12 + -5) = uVar2;
    *(undefined2 *)(pcVar12 + -3) = uVar3;
    uVar10 = 0xffffffff;
    pcVar13 = s_Monterey_004c1e90 + iVar17;
    do {
      pcVar14 = pcVar13;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar14 = pcVar13 + 1;
      cVar6 = *pcVar13;
      pcVar13 = pcVar14;
    } while (cVar6 != '\0');
    uVar10 = ~uVar10;
    pcVar13 = pcVar12 + -0x1d;
    pcVar12[6] = -1;
    pcVar12[5] = -1;
    pcVar12 = pcVar12 + 0x2e;
    pcVar14 = pcVar14 + -uVar10;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar13 = pcVar13 + 4;
    }
    iVar9 = iVar9 + 1;
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar13 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar13 = pcVar13 + 1;
    }
    local_4 = iVar9;
    if (0x5722d4 < (int)pcVar12) {
      iVar9 = 0;
      local_4 = 0;
      do {
        do {
          uVar7 = FUN_0045c1e0(0x10);
          uVar10 = (uint)uVar7;
          bVar4 = true;
          pcVar12 = &DAT_00571ff4;
          do {
            if ((int)*pcVar12 == uVar10) {
              bVar4 = false;
            }
            pcVar12 = pcVar12 + 0x2e;
          } while ((int)pcVar12 < 0x5722d4);
        } while ((((iVar9 < 4) && (iVar9 == 0)) && ((&DAT_004c1ece)[uVar10 * 0x82] != '\0')) ||
                (!bVar4));
        cVar6 = ((char)iVar9 + '\x04') * '\n';
        iVar17 = iVar9 * 0x2e;
        iVar15 = uVar10 * 0x82;
        (&DAT_00571ff4)[iVar17] = (char)uVar7;
        (&DAT_00571ff5)[iVar17] = cVar6;
        if ((&DAT_004c1ecf)[iVar15] == '\0') {
          (&DAT_00571ff5)[iVar17] = ((3 < local_4) - 1U & 0xf6) + 0x14 + cVar6;
        }
        cVar6 = (&DAT_004c1ecf)[iVar15];
        if (cVar6 == '\x02') {
          (&DAT_00571ff5)[iVar17] = (&DAT_00571ff5)[iVar17] - (((3 < local_4) - 1U & 0xf6) + 0x14);
        }
        if ((DAT_0059e7b8 & 0x1000000) != 0) {
          (&DAT_00571ff5)[iVar17] = 0xfa;
        }
        uVar1 = (&DAT_004c1ece)[iVar15];
        (&DAT_00571ff7)[iVar17] = cVar6;
        (&DAT_00571ff6)[iVar17] = (&DAT_004c1ed0)[iVar15];
        uVar2 = (&DAT_004c1eca)[uVar10 * 0x41];
        (&DAT_00571ff8)[iVar17] = uVar1;
        uVar3 = (&DAT_004c1ecc)[uVar10 * 0x41];
        (&DAT_00571ff0)[iVar9 * 0x17] = uVar2;
        (&DAT_00571ff2)[iVar9 * 0x17] = uVar3;
        (&DAT_00571ffb)[iVar17] = 0xff;
        (&DAT_00571ffa)[iVar17] = 0xff;
        uVar10 = 0xffffffff;
        pcVar12 = s_Monterey_004c1e90 + iVar15;
        do {
          pcVar13 = pcVar12;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar13 = pcVar12 + 1;
          cVar6 = *pcVar12;
          pcVar12 = pcVar13;
        } while (cVar6 != '\0');
        uVar10 = ~uVar10;
        pcVar12 = pcVar13 + -uVar10;
        pcVar13 = (char *)((int)&DAT_00571fd8 + iVar17);
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
          pcVar12 = pcVar12 + 4;
          pcVar13 = pcVar13 + 4;
        }
        iVar9 = local_4 + 1;
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar13 = *pcVar12;
          pcVar12 = pcVar12 + 1;
          pcVar13 = pcVar13 + 1;
        }
        local_4 = iVar9;
        if (0xb < iVar9) {
          return;
        }
      } while( true );
    }
  } while( true );
}

