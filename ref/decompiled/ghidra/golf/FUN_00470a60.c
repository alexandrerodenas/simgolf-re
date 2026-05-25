/* Ghidra decompiled: golf.exe */
/* Function: FUN_00470a60 @ 0x00470A60 */


void FUN_00470a60(uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  byte *pbVar3;
  ushort *puVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  undefined1 uVar10;
  ushort uVar11;
  short sVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined2 *puVar19;
  int iVar20;
  undefined2 uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  int local_30;
  int local_28;
  uint local_24;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  DAT_0059bf90 = param_1;
  iVar14 = param_1 * 0x2e;
  iVar20 = (int)(char)(&DAT_00571ff4)[iVar14];
  cVar8 = (&DAT_00571ff8)[iVar14];
  (&DAT_00571ffa)[iVar14] = (undefined1)DAT_005a6d3c;
  cVar6 = (&DAT_00571ff6)[iVar14];
  if (cVar6 == '\0') {
    DAT_004c2fa0 = 0x30;
  }
  else if (cVar6 == '\x01') {
    DAT_004c2fa0 = 0x20;
  }
  else if (cVar6 == '\x02') {
    DAT_004c2fa0 = 0x10;
  }
  iVar15 = (int)(param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2;
  if (iVar15 == 0) {
    iVar15 = DAT_004c2fa0 / 2;
LAB_00470b1c:
    DAT_004c2fa0 = DAT_004c2fa0 + iVar15;
  }
  else {
    if (iVar15 == 1) {
      iVar15 = (int)(DAT_004c2fa0 + (DAT_004c2fa0 >> 0x1f & 3U)) >> 2;
      goto LAB_00470b1c;
    }
    if (iVar15 == 3) {
      iVar15 = -((int)(DAT_004c2fa0 + (DAT_004c2fa0 >> 0x1f & 3U)) >> 2);
      goto LAB_00470b1c;
    }
  }
  uVar22 = DAT_0059e7b8 & 0x1000000;
  if (uVar22 != 0) {
    DAT_004c2fa0 = DAT_004c2fa0 + 0x10;
  }
  DAT_005a34e0 = cVar8;
  switch(cVar8) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
    local_30 = 4;
    break;
  case '\x04':
    puVar28 = &DAT_005722e8;
    for (iVar15 = 0x271; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar28 = 0xe0e0e0e;
      puVar28 = puVar28 + 1;
    }
  }
  if (uVar22 == 0) {
    if (7 < (int)param_1) {
      local_30 = (-(uint)(cVar8 != '\x01') & 0xfffffff9) + 0xc;
    }
    if (0xb < (int)param_1) {
      local_30 = 0xc - (uint)(cVar8 != '\x01');
    }
  }
  param_1 = 0;
  bVar7 = false;
  uVar22 = 0;
  local_1c = 0;
  puVar28 = &DAT_005722e8;
  for (iVar15 = 0x271; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar28 = CONCAT22(CONCAT11((undefined1)local_30,(undefined1)local_30),
                        CONCAT11((undefined1)local_30,(undefined1)local_30));
    puVar28 = puVar28 + 1;
  }
  local_24 = 5000;
  uVar21 = CONCAT11((&DAT_00578375)[(char)DAT_005722e8 * 0x30],
                    (&DAT_00578375)[(char)DAT_005722e8 * 0x30]);
  puVar28 = &DAT_0053bbac;
  for (iVar15 = 0x271; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar28 = CONCAT22(uVar21,uVar21);
    puVar28 = puVar28 + 1;
  }
  puVar28 = (undefined4 *)&DAT_0053ea24;
  for (iVar15 = 0x271; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar28 = 0;
    puVar28 = puVar28 + 1;
  }
  puVar28 = (undefined4 *)&DAT_005a6378;
  for (iVar15 = 0x271; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar28 = 0;
    puVar28 = puVar28 + 1;
  }
  puVar28 = (undefined4 *)&DAT_0056c7e4;
  for (iVar15 = 0x271; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar28 = 0;
    puVar28 = puVar28 + 1;
  }
  puVar28 = &DAT_0056988c;
  for (iVar15 = 0x271; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar28 = 0;
    puVar28 = puVar28 + 1;
  }
  do {
    local_28 = 0;
    uVar11 = FUN_0045c1e0(0x32);
    uVar25 = (uint)uVar11;
    uVar11 = FUN_0045c1e0(0x32);
    uVar23 = (uint)uVar11;
    switch(DAT_005a34e0) {
    case '\0':
      uVar22 = (0x18 < uVar23) + 0xd;
      if (iVar20 == 9) {
LAB_00470c78:
        uVar22 = 0xe;
      }
      break;
    case '\x01':
      uVar22 = ((byte)~bVar7 | 6) << 1;
      break;
    case '\x02':
      if (!bVar7) goto LAB_00470c78;
      uVar22 = (param_1 & 2 | 0x18) >> 1;
      break;
    case '\x03':
      uVar22 = (-(uint)bVar7 & 6) + 5;
      break;
    case '\x04':
      uVar22 = (uint)bVar7 << 3 | 4;
    }
    do {
      if (((((int)uVar23 < 0) || (0x31 < (int)uVar25)) || (0x31 < (int)uVar23)) ||
         ((int)(local_24 + ((int)local_24 >> 0x1f & 0x7fU)) >> 7 <= local_28)) break;
      iVar15 = uVar23 + uVar25 * 0x32;
      local_28 = local_28 + 1;
      *(char *)((int)&DAT_005722e8 + iVar15) = (char)uVar22;
      if (local_28 == 0x30) {
        pbVar3 = (byte *)((int)&DAT_0053caf0 + iVar15 * 2 + 1);
        *pbVar3 = *pbVar3 | 0x20;
      }
      *(undefined *)((int)&DAT_0053bbac + iVar15) = (&DAT_00578375)[(char)uVar22 * 0x30];
      sVar12 = FUN_0045c1e0(0x40);
      if (sVar12 == 0) {
        pbVar3 = (byte *)((int)&DAT_0053caf0 + iVar15 * 2 + 1);
        *pbVar3 = *pbVar3 | 1;
      }
      else {
        pbVar3 = (byte *)((int)&DAT_0053caf0 + iVar15 * 2 + 1);
        *pbVar3 = *pbVar3 & 0xfe;
      }
      uVar16 = FUN_0045c1e0(3);
      uVar25 = (uVar25 - 1) + (uVar16 & 0xffff);
      uVar16 = FUN_0045c1e0(3);
      uVar23 = ((uVar16 & 0xffff) - 1) + uVar23;
    } while (-1 < (int)uVar25);
    local_1c = local_1c + local_28;
    if (0x4e2 < local_1c) break;
    local_24 = local_24 + 0x9c4;
    param_1 = param_1 + 1;
    bVar7 = (bool)(bVar7 ^ 1);
  } while ((int)local_24 < 45000);
  local_c = (undefined4 *)(uint)((&DAT_00571ff7)[iVar14] != '\x02');
  param_1 = 0;
  if ((&DAT_00571ff7)[iVar14] != '\x02') {
    do {
      uVar11 = FUN_0045c1e0(0x10);
      local_28 = 0x31;
      local_14 = 0;
      iVar15 = (int)((param_1 * 5 + 5) * 10) / 3 + (uint)uVar11;
      while ((-1 < iVar15 && (iVar15 < 0x32))) {
        iVar26 = local_28 + iVar15 * 0x32;
        cVar8 = (-(DAT_005a34e0 != '\x01') & 6U) + 0xb;
        *(char *)((int)&DAT_005722e8 + iVar26) = cVar8;
        (&DAT_0053caf0)[iVar26] = (&DAT_0053caf0)[iVar26] & 0xfeff | 0x1000;
        *(undefined *)((int)&DAT_0053bbac + iVar26) = (&DAT_00578375)[cVar8 * 0x30];
        sVar12 = FUN_0045c1e0(0x40);
        if (sVar12 == 0) {
          pbVar3 = (byte *)((int)&DAT_0053caf0 + iVar26 * 2 + 1);
          *pbVar3 = *pbVar3 | 1;
        }
        local_18 = local_28 + 1;
        local_1c = 999;
        sVar12 = FUN_0045c1e0(2);
        iVar26 = ((-(uint)(sVar12 != 0) & 2) - 1) + iVar15;
        pbVar3 = (byte *)(local_28 + 0x5722e9 + iVar26 * 0x32);
        if ((*(char *)(local_28 + 0x5722e9 + iVar26 * 0x32) != '\x11') &&
           (iVar17 = FUN_0040c170(iVar26,local_18,0), iVar17 == 3)) {
          if (param_1 == 0) {
            bVar9 = ~(((char)iVar26 + (char)local_18) * '\x02') & 4U | 8;
          }
          else {
            bVar9 = 0xc;
          }
          *pbVar3 = bVar9;
          if (DAT_005a34e0 == '\x01') {
            *pbVar3 = 10;
          }
        }
        local_24 = 0xfffffffe;
        do {
          iVar17 = (&DAT_004c2898)[local_24 & 7];
          iVar27 = (&DAT_004c2878)[local_24 & 7] + iVar15;
          if (((param_1 == 0) || (iVar27 < 0x30)) &&
             (iVar18 = FUN_0042dba0(iVar27 * 0x80,(iVar17 + local_28) * 0x80), iVar18 < local_1c)) {
            local_8 = local_24;
            iVar26 = iVar27;
            local_1c = iVar18;
            local_18 = iVar17 + local_28;
          }
          local_24 = local_24 + 2;
        } while ((int)local_24 < 3);
        if (local_8 == -local_14) {
          local_18 = local_28 + -1;
          iVar26 = iVar15;
        }
        local_14 = local_8;
        if ((*(char *)((int)&DAT_005722e8 + iVar26 * 0x32 + local_18) == '\x11') ||
           (iVar15 = iVar26, local_28 = local_18, local_18 < 0)) break;
      }
      param_1 = param_1 + 1;
    } while ((int)param_1 < (int)local_c);
  }
  local_c = (undefined4 *)0x0;
  iVar15 = 5;
  if ((&DAT_00571ff7)[iVar14] == '\x01') {
    param_1 = 0;
    do {
      iVar26 = 0;
      if (0 < iVar15) {
        puVar1 = (undefined1 *)((int)&DAT_005722e8 + param_1);
        do {
          if (puVar1[iVar26] != '\x11') {
            cVar8 = ((DAT_005a34e0 != '\x04') - 1U & 0xfb) + 0x11;
            puVar1[iVar26] = cVar8;
            *(undefined *)((int)&DAT_0053bbac + iVar26 + param_1) = (&DAT_00578375)[cVar8 * 0x30];
            pbVar3 = (byte *)((int)&DAT_0053caf0 + (param_1 + iVar26) * 2 + 1);
            *pbVar3 = *pbVar3 & 0xfe;
            if ((iVar26 == iVar15 + -1) && (sVar12 = FUN_0045c1e0(0x10), sVar12 == 0)) {
              pbVar3 = (byte *)((int)&DAT_0053caf0 + (param_1 + iVar26) * 2 + 1);
              *pbVar3 = *pbVar3 | 1;
            }
          }
          if (iVar26 == 0) {
            *puVar1 = 0x14;
          }
          local_c = (undefined4 *)((int)local_c + 1);
          iVar26 = iVar26 + 1;
        } while (iVar26 < iVar15);
      }
      uVar22 = FUN_0045c1e0(5);
      iVar15 = ((uVar22 & 0xffff) - 2) + iVar15;
      if (iVar15 < 2) {
        iVar15 = 2;
      }
      else if (0xc < iVar15) {
        iVar15 = iVar15 + -1;
      }
      param_1 = param_1 + 0x32;
    } while ((int)param_1 < 0x9c4);
  }
  puVar19 = &DAT_0053caf0;
  do {
    iVar15 = 0x32;
    do {
      *(byte *)((int)puVar19 + 1) = *(byte *)((int)puVar19 + 1) & 0xef;
      puVar19 = puVar19 + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  } while ((int)puVar19 < 0x53de78);
  iVar15 = 0;
  puVar28 = &DAT_005a4998;
  do {
    iVar26 = 0;
    do {
      uVar10 = FUN_0040c170(iVar15,iVar26,0);
      *(undefined1 *)((int)puVar28 + iVar26) = uVar10;
      iVar26 = iVar26 + 1;
    } while (iVar26 < 0x33);
    puVar28 = (undefined4 *)((int)puVar28 + 0x33);
    iVar15 = iVar15 + 1;
  } while ((int)puVar28 < 0x5a538f);
  param_1 = 0;
  iVar15 = 0;
  do {
    uVar11 = FUN_0045c1e0(4);
    uVar22 = param_1 & 0x80000003;
    if ((int)uVar22 < 0) {
      uVar22 = (uVar22 - 1 | 0xfffffffc) + 1;
    }
    iVar26 = uVar11 + 4 + ((int)(uVar22 * 0x32 + ((int)(uVar22 * 0x32) >> 0x1f & 3U)) >> 2);
    uVar11 = FUN_0045c1e0(4);
    iVar17 = ((int)(param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2) * 0x32;
    iVar17 = uVar11 + 4 + ((int)(iVar17 + (iVar17 >> 0x1f & 3U)) >> 2);
    switch(DAT_005a34e0) {
    case '\0':
      bVar9 = 3;
      goto LAB_004711d6;
    case '\x01':
      iVar15 = (-(uint)(3 < *(byte *)(iVar17 + iVar26 * 0x33 + 0x5a4998)) & 0xfffffffd) + 0xf;
      break;
    case '\x02':
      iVar15 = (-(uint)(3 < *(byte *)(iVar17 + iVar26 * 0x33 + 0x5a4998)) & 0xfffffffe) + 0x11;
      break;
    case '\x03':
      iVar15 = (-(uint)(3 < *(byte *)(iVar17 + iVar26 * 0x33 + 0x5a4998)) & 3) + 0xc;
      break;
    case '\x04':
      bVar9 = 4;
LAB_004711d6:
      iVar15 = (-(uint)(bVar9 < *(byte *)(iVar17 + iVar26 * 0x33 + 0x5a4998)) & 0xfffffffb) + 0x11;
    }
    if (((1 < DAT_00822c88) &&
        (sVar12 = FUN_0045c1e0((int)(8 / (longlong)(DAT_00822c88 + -1))), sVar12 == 0)) ||
       (param_1 == 0)) {
      iVar15 = 0x12;
    }
    if ((iVar20 == 2) && ((iVar15 == 8 || (iVar15 == 0x12)))) {
      iVar15 = 0xc;
    }
    local_c = (undefined4 *)0x0;
    do {
      iVar27 = iVar17 + iVar26 * 0x32;
      if (((&DAT_0053caf0)[iVar27] & 0x1000) == 0) {
        *(char *)((int)&DAT_005722e8 + iVar27) = (char)iVar15;
        sVar12 = FUN_0045c1e0(8);
        if ((sVar12 == 0) && (iVar15 == 0x12)) {
          pbVar3 = (byte *)((int)&DAT_0053caf0 + iVar27 * 2 + 1);
          *pbVar3 = *pbVar3 | 1;
        }
        *(undefined *)((int)&DAT_0053bbac + iVar27) =
             (&DAT_00578375)[*(char *)((int)&DAT_005722e8 + iVar27) * 0x30];
        if (iVar15 == 0x11) {
          *(undefined1 *)((int)&DAT_005a4998 + iVar17 + iVar26 * 0x33) = 3;
        }
      }
      sVar12 = FUN_0045c1e0(2);
      if (sVar12 == 0) {
        sVar12 = FUN_0045c1e0(2);
        iVar17 = iVar17 + ((-(uint)(sVar12 != 0) & 2) - 1);
      }
      else {
        sVar12 = FUN_0045c1e0(2);
        iVar26 = iVar26 + ((-(uint)(sVar12 != 0) & 2) - 1);
      }
    } while (((((-1 < iVar26) && (iVar26 < 0x32)) && (-1 < iVar17)) && (iVar17 < 0x32)) &&
            ((local_c = (undefined4 *)((int)local_c + 1), (int)local_c < 5 ||
             (sVar12 = FUN_0045c1e0(0x10), sVar12 != 0))));
    param_1 = param_1 + 1;
  } while ((int)param_1 < 0x18);
  iVar15 = 0x10;
  do {
    uVar11 = FUN_0045c1e0(0x2a);
    uVar22 = FUN_0045c1e0(0x2a);
    *(ushort *)(&DAT_0053cc88 + ((uint)uVar11 + (uVar22 & 0xffff) * 0x32) * 2) =
         *(ushort *)(&DAT_0053cc88 + ((uint)uVar11 + (uVar22 & 0xffff) * 0x32) * 2) | 0x100;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  puVar28 = &DAT_005722e8;
  puVar19 = &DAT_0053caf0;
  do {
    iVar15 = 0;
    do {
      *(byte *)((int)puVar19 + 1) = *(byte *)((int)puVar19 + 1) & 0xfe;
      if (*(char *)((int)puVar28 + iVar15) == '\x10') {
        *(undefined1 *)((int)puVar28 + iVar15) = 0xd;
      }
      iVar15 = iVar15 + 1;
      puVar19 = puVar19 + 1;
    } while (iVar15 < 0x32);
    puVar28 = (undefined4 *)((int)puVar28 + 0x32);
  } while ((int)puVar19 < 0x53de78);
  iVar15 = 0;
  do {
    uVar11 = FUN_0045c1e0(0x2e);
    uVar13 = FUN_0045c1e0(0x2e);
    uVar22 = uVar13 + 2;
    iVar26 = FUN_0040bf60(uVar11 + 2,uVar22);
    if (iVar26 == 0) {
      iVar26 = uVar22 + (uVar11 + 2) * 0x32;
      cVar8 = *(char *)((int)&DAT_005722e8 + iVar26);
      if ((((cVar8 != '\x15') && (cVar8 != '\x16')) &&
          ((cVar8 != '\x04' &&
           ((cVar8 != '\x12' && ((int)cVar8 != 0xb - (uint)(DAT_005a34e0 != '\x01'))))))) &&
         ((cVar8 != '\x11' || (6 < uVar22)))) {
        (&DAT_0053caf0)[iVar26] = (&DAT_0053caf0)[iVar26] | 0x100;
        iVar15 = iVar15 + 1;
      }
    }
  } while (iVar15 < (4 - DAT_00822c88) * 9);
  param_1 = 0;
  local_c = &DAT_005722e8;
  do {
    iVar15 = 0;
    puVar28 = local_c;
    do {
      if ((*(char *)((int)puVar28 + iVar15) == '\x11') ||
         (*(char *)((int)puVar28 + iVar15) == '\x12')) {
        local_8 = 0x10100;
        local_4 = 0;
        local_14 = 0xffff;
        local_10 = 0xff;
        iVar26 = 0;
        do {
          iVar27 = (int)*(char *)((int)&local_8 + iVar26) + param_1;
          iVar17 = *(char *)((int)&local_14 + iVar26) + iVar15;
          if ((((-1 < iVar27) && (iVar27 < 0x32)) && (-1 < iVar17)) &&
             ((iVar17 < 0x32 &&
              (*(char *)((int)&DAT_005722e8 +
                        iVar15 + (&DAT_004c2898)[iVar26 * 2] +
                                 ((&DAT_004c2878)[iVar26 * 2] + param_1) * 0x32) != '\x11')))) {
            iVar17 = (int)*(char *)((int)&local_14 + iVar26) + iVar27 * 0x33;
            bVar9 = *(byte *)((int)&DAT_005a4998 + iVar15 + iVar17);
            pcVar5 = (char *)((int)&DAT_005a4998 + iVar15 + iVar17);
            if ((3 < bVar9) &&
               (bVar9 == *(byte *)((int)&DAT_005a4998 +
                                  (int)*(char *)((int)&local_14 + iVar26 + 1) +
                                  ((int)*(char *)((int)&local_8 + iVar26 + 1) + param_1) * 0x33 +
                                  iVar15))) {
              if (bVar9 == 4) {
                *pcVar5 = '\x03';
              }
              else {
                sVar12 = FUN_0045c1e0(2);
                *pcVar5 = *pcVar5 + ((-(sVar12 != 0) & 2U) - 1);
              }
            }
          }
          iVar26 = iVar26 + 1;
          puVar28 = local_c;
        } while (iVar26 < 4);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 0x33);
    local_c = (undefined4 *)((int)puVar28 + 0x32);
    param_1 = param_1 + 1;
  } while ((int)local_c < 0x572cad);
  do {
    do {
      uVar11 = FUN_0045c1e0(0x11);
      uVar22 = (uint)uVar11;
      iVar15 = uVar22 + 0xf;
      uVar11 = FUN_0045c1e0(0x11);
      uVar25 = (uint)uVar11;
      iVar26 = uVar25 + 0xf;
    } while (*(char *)(uVar25 + 0x5722f7 + iVar15 * 0x32) != local_30);
    iVar17 = FUN_0040db90(iVar15,iVar26,(int)DAT_004c27ec,0xf);
  } while (iVar17 == -1);
  FUN_0040e000(iVar15,iVar26,0xf,0x60);
  DAT_0058bcbf = DAT_0058bcbf | 0x40;
  DAT_004c2ba0 = uVar22 + 0x15;
  iVar17 = iVar26 + iVar15 * 0x32;
  DAT_004c2ba4 = uVar25 + 0xb;
  DAT_00578150 = iVar15;
  DAT_00578158 = iVar15;
  *(byte *)(&DAT_0053caf0 + iVar17) = *(byte *)(&DAT_0053caf0 + iVar17) & 0xdf;
  DAT_00578154 = iVar26;
  DAT_0057815c = iVar26;
  switch(iVar20) {
  case 0:
  case 10:
    iVar15 = 0;
    do {
      uVar11 = FUN_0045c1e0(0x2e);
      uVar13 = FUN_0045c1e0(0x2e);
      iVar26 = FUN_0040bf60(uVar11 + 2,uVar13 + 2);
      if (iVar26 == 0) {
        iVar26 = uVar13 + 2 + (uVar11 + 2) * 0x32;
        cVar8 = *(char *)((int)&DAT_005722e8 + iVar26);
        if (((cVar8 != '\x15') && (cVar8 != '\x16')) &&
           ((cVar8 != '\x11' && (((&DAT_0053caf0)[iVar26] & 0x400) == 0)))) {
          (&DAT_0053caf0)[iVar26] = (&DAT_0053caf0)[iVar26] | 0x100;
          if (iVar20 == 0) {
            *(undefined1 *)((int)&DAT_005722e8 + iVar26) = 0xb;
          }
          else if (iVar20 == 0xd) {
            *(undefined1 *)((int)&DAT_005722e8 + iVar26) = 0xb;
          }
          else if (iVar20 == 0xf) {
            *(undefined1 *)((int)&DAT_005722e8 + iVar26) = 0xf;
          }
          else if (iVar20 == 10) {
            *(undefined1 *)((int)&DAT_005722e8 + iVar26) = 4;
          }
          iVar15 = iVar15 + 1;
        }
      }
    } while (iVar15 < 0x10);
    goto switchD_0047167c_caseD_3;
  case 1:
    iVar20 = 0;
    if (-DAT_00822c88 != -8 && -1 < -DAT_00822c88 + 8) {
      do {
        do {
          uVar11 = FUN_0045c1e0(0x1e);
          uVar22 = FUN_0045c1e0(0x1e);
          iVar26 = DAT_00822c88;
          iVar15 = (uVar22 & 0xffff) + (uVar11 + 10) * 0x32;
        } while (*(char *)((int)&DAT_005722e8 + iVar15) != '\x11');
        (&DAT_0053caf0)[iVar15] = (&DAT_0053caf0)[iVar15] | 0x100;
        iVar20 = iVar20 + 1;
      } while (iVar20 < 8 - iVar26);
    }
    goto switchD_0047167c_caseD_3;
  case 2:
    uVar24 = 0xd;
    break;
  default:
    goto switchD_0047167c_caseD_3;
  case 4:
    uVar24 = 9;
    break;
  case 5:
  case 6:
  case 8:
  case 0xc:
  case 0xd:
  case 0xf:
    do {
      uVar11 = FUN_0045c1e0(0x28);
      uVar22 = FUN_0045c1e0(0x28);
      iVar15 = FUN_0040db90(uVar11 + 3,(uVar22 & 0xffff) + 3,5,0xf);
    } while (iVar15 == -1);
    param_1 = 0;
    if (-DAT_00822c88 != -8 && -1 < -DAT_00822c88 + 8) {
      do {
        FUN_0045c1e0(7);
        FUN_0045c1e0(7);
        uVar11 = FUN_0045c1e0(0x28);
        iVar17 = uVar11 + 5;
        uVar13 = FUN_0045c1e0(0x28);
        uVar22 = (uint)uVar13;
        iVar26 = uVar22 + 5;
        iVar15 = FUN_0040db90(uVar11 + 4,uVar22 + 4,3,7);
        if ((iVar15 != -1) && (*(char *)(uVar22 + 0x5722ed + iVar17 * 0x32) != '\x11')) {
          if (iVar20 == 5) {
            *(undefined1 *)(uVar22 + 0x5722ed + iVar17 * 0x32) = 0x11;
            (&DAT_005a49ca)[iVar26 + iVar17 * 0x33] = 6;
            FUN_0045c1e0(4);
            local_24 = 0;
            do {
              iVar27 = (&DAT_004c2878)[local_24 & 7] + iVar17;
              iVar15 = (&DAT_004c2898)[local_24 & 7] + iVar26;
              switch(local_24) {
              case 0:
                *(undefined1 *)(iVar27 * 0x32 + iVar15 + 0x5722e8) = 0x11;
                break;
              case 1:
              case 7:
                *(undefined1 *)(iVar27 * 0x32 + iVar15 + 0x5722e8) = 5;
                break;
              case 2:
                *(undefined1 *)(iVar27 * 0x32 + iVar15 + 0x5722e8) = 0x11;
                (&DAT_005a49ca)[iVar15 + iVar27 * 0x33] = 3;
                goto LAB_00471a7f;
              default:
                sVar12 = FUN_0045c1e0(2);
                if (sVar12 != 0) {
                  *(undefined1 *)(iVar27 * 0x32 + iVar15 + 0x5722e8) = 0x11;
                }
                (&DAT_005a4997)[iVar15 + iVar27 * 0x33] = 3;
                goto LAB_00471a7f;
              case 6:
                *(undefined1 *)(iVar27 * 0x32 + iVar15 + 0x5722e8) = 0x11;
              }
              (&DAT_005a49ca)[iVar15 + iVar27 * 0x33] = 6;
LAB_00471a7f:
              local_24 = local_24 + 1;
            } while ((int)local_24 < 8);
          }
          else {
            if (((iVar20 == 0xf) || (iVar20 == 0xc)) || (iVar20 == 8)) {
              iVar15 = FUN_0040e000(iVar17,iVar26,4,0);
              (&DAT_0058bcc0)[iVar15 * 4] = 0xb;
              if (iVar20 == 8) {
                sVar12 = FUN_0045c1e0(2);
                (&DAT_0058bcc0)[iVar15 * 4] = (-(uint)(sVar12 != 0) & 4) + 2;
              }
              else if (iVar20 == 0xc) {
                (&DAT_0058bcc0)[iVar15 * 4] = 3;
              }
              uVar10 = FUN_0045c1e0(4);
              (&DAT_0058bcbe)[iVar15 * 0x10] = uVar10;
              uVar22 = 0;
              do {
                iVar15 = (&DAT_004c2898)[uVar22] + ((&DAT_004c2878)[uVar22] + iVar17) * 0x32 +
                         iVar26;
                if ((*(char *)(iVar15 + 0x5722e8) != '\x16') &&
                   (*(char *)(iVar15 + 0x5722e8) != '\x11')) {
                  if ((param_1 & 1) == 0) {
                    *(undefined1 *)(iVar15 + 0x5722e8) = 5;
                    (&DAT_0053caf0)[iVar15] =
                         (&DAT_0053caf0)[iVar15] | (ushort)((uVar22 & 1) << 9) | 0x20;
                  }
                  else {
                    *(byte *)(iVar15 + 0x5722e8) = ((iVar20 != 0xc) - 1U & 8) + 4;
                    if (iVar20 == 0xf) {
                      *(undefined1 *)(iVar15 + 0x5722e8) = 0x11;
                    }
                    else if (uVar22 == 0) {
                      iVar15 = iVar26 + iVar17 * 0x33;
                      *(char *)(iVar15 + 0x5a4998) = *(char *)(iVar15 + 0x5a4998) + '\x02';
                      *(char *)(iVar15 + 0x5a49cb) = *(char *)(iVar15 + 0x5a49cb) + '\x02';
                      (&DAT_005a4997)[iVar15] = (&DAT_005a4997)[iVar15] + '\x02';
                      (&DAT_005a49ca)[iVar15] = (&DAT_005a49ca)[iVar15] + '\x02';
                    }
                  }
                }
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < 8);
            }
            if (iVar20 == 10) {
              iVar15 = FUN_0040e000(iVar17,iVar26,4,0);
              (&DAT_0058bcc0)[iVar15 * 4] = 1;
              uVar10 = FUN_0045c1e0(4);
              (&DAT_0058bcbe)[iVar15 * 0x10] = uVar10;
              iVar15 = 0;
              do {
                iVar27 = *(int *)((int)&DAT_004c2898 + iVar15) +
                         (iVar17 + *(int *)((int)&DAT_004c2878 + iVar15)) * 0x32;
                if ((&DAT_00578376)[*(char *)(iVar26 + iVar27 + 0x5722e8) * 0x30] == '\x04') {
                  *(undefined1 *)(iVar26 + iVar27 + 0x5722e8) = 5;
                  sVar12 = FUN_0045c1e0(6);
                  if (sVar12 == 0) {
                    pbVar3 = (byte *)((int)&DAT_0053caf0 +
                                     (*(int *)((int)&DAT_004c2898 + iVar15) +
                                      (iVar17 + *(int *)((int)&DAT_004c2878 + iVar15)) * 0x32 +
                                     iVar26) * 2 + 1);
                    *pbVar3 = *pbVar3 | 1;
                  }
                }
                iVar15 = iVar15 + 4;
              } while (iVar15 < 0x20);
            }
            else if (iVar20 == 0xd) {
              iVar15 = FUN_0040e000(iVar17,iVar26,4,0);
              (&DAT_0058bcc0)[iVar15 * 4] = 1;
              uVar10 = FUN_0045c1e0(4);
              (&DAT_0058bcbe)[iVar15 * 0x10] = uVar10;
              iVar27 = 0;
              do {
                cVar8 = *(char *)(iVar26 + *(int *)((int)&DAT_004c2898 + iVar27) +
                                           (*(int *)((int)&DAT_004c2878 + iVar27) + iVar17) * 0x32 +
                                 0x5722e8);
                if ((&DAT_00578376)[cVar8 * 0x30] == '\r') {
                  (&DAT_0058bcc0)[iVar15 * 4] = 10;
                }
                if (cVar8 == '\x11') {
                  (&DAT_0058bcc0)[iVar15 * 4] = 9;
                  break;
                }
                iVar27 = iVar27 + 4;
              } while (iVar27 < 0x20);
              iVar27 = 0;
              do {
                iVar18 = (&DAT_0058bcc0)[iVar15 * 4];
                if (iVar18 == 1) {
                  iVar2 = *(int *)((int)&DAT_004c2898 + iVar27) +
                          (*(int *)((int)&DAT_004c2878 + iVar27) + iVar17) * 0x32 + iVar26;
                  pbVar3 = (byte *)((int)&DAT_0053caf0 + iVar2 * 2 + 1);
                  *pbVar3 = *pbVar3 | 1;
                  *(undefined1 *)(iVar2 + 0x5722e8) = 0xb;
                }
                if ((iVar18 == 3) &&
                   (iVar2 = *(int *)((int)&DAT_004c2898 + iVar27) +
                            (*(int *)((int)&DAT_004c2878 + iVar27) + iVar17) * 0x32,
                   *(char *)(iVar26 + iVar2 + 0x5722e8) == '\x04')) {
                  *(undefined1 *)(iVar26 + iVar2 + 0x5722e8) = 10;
                }
                if (((iVar18 == 9) &&
                    (*(char *)(iVar26 + *(int *)((int)&DAT_004c2898 + iVar27) +
                                        (iVar17 + *(int *)((int)&DAT_004c2878 + iVar27)) * 0x32 +
                              0x5722e8) == '\x04')) && (sVar12 = FUN_0045c1e0(3), sVar12 == 0)) {
                  pbVar3 = (byte *)((int)&DAT_0053caf0 +
                                   (*(int *)((int)&DAT_004c2898 + iVar27) +
                                    (iVar17 + *(int *)((int)&DAT_004c2878 + iVar27)) * 0x32 + iVar26
                                   ) * 2 + 1);
                  *pbVar3 = *pbVar3 | 1;
                }
                iVar27 = iVar27 + 4;
              } while (iVar27 < 0x20);
            }
            else if (iVar20 == 6) {
              iVar15 = FUN_0040e000(iVar17,iVar26,4,0);
              (&DAT_0058bcc0)[iVar15 * 4] = (param_1 & 1 | 0x5c) * 4 + -0x168;
              uVar10 = FUN_0045c1e0(4);
              (&DAT_0058bcbe)[iVar15 * 0x10] = uVar10;
              uVar22 = 0;
              do {
                if ((param_1 & 1) == 0) {
                  iVar15 = (&DAT_004c2898)[uVar22] + ((&DAT_004c2878)[uVar22] + iVar17) * 0x32 +
                           iVar26;
                  if (*(char *)(iVar15 + 0x5722e8) != '\x11') {
                    (&DAT_0053caf0)[iVar15] =
                         (&DAT_0053caf0)[iVar15] | (ushort)((uVar22 & 1) << 9) | 0x20;
                  }
                }
                else {
                  pbVar3 = (byte *)((int)&DAT_0053caf0 +
                                   ((&DAT_004c2898)[uVar22] +
                                    ((&DAT_004c2878)[uVar22] + iVar17) * 0x32 + iVar26) * 2 + 1);
                  *pbVar3 = *pbVar3 | 0x10;
                }
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < 8);
            }
          }
        }
        param_1 = param_1 + 1;
      } while ((int)param_1 < 8 - DAT_00822c88);
    }
    goto switchD_0047167c_caseD_3;
  case 7:
    iVar20 = 0;
    do {
      if (iVar20 == 0) {
        uVar22 = FUN_0045c1e0(10);
        uVar22 = -(uVar22 & 0xffff);
      }
      else {
        uVar22 = FUN_0045c1e0(10);
        uVar22 = uVar22 & 0xffff;
      }
      iVar15 = uVar22 + 0x19;
      for (iVar26 = 0;
          ((cVar8 = *(char *)((int)&DAT_005722e8 + iVar15 * 0x32 + iVar26), cVar8 == '\x11' ||
           (cVar8 == '\x14')) && (iVar26 < 0x30)); iVar26 = iVar26 + 1) {
      }
      iVar17 = FUN_0040e000(iVar15,iVar26,4,0);
      sVar12 = FUN_0045c1e0(2);
      (&DAT_0058bcc0)[iVar17 * 4] = (-(uint)(sVar12 != 0) & 0xfffffffa) + 0xd;
      pcVar5 = (char *)((int)&DAT_005a4998 + iVar26 + iVar15 * 0x33);
      iVar20 = iVar20 + 1;
      *pcVar5 = *pcVar5 + '\x02';
    } while (iVar20 < 2);
    goto switchD_0047167c_caseD_3;
  case 9:
    uVar24 = 6;
    break;
  case 0xb:
    uVar24 = 0xe;
    break;
  case 0xe:
    uVar24 = 8;
  }
  iVar15 = FUN_0040bf60(iVar15,uVar25 + 0x14);
  if (iVar15 == 0) {
    FUN_0040e000(uVar22 + 0xe,uVar25 + 0x13,uVar24,0);
    puVar4 = (ushort *)((int)&DAT_0053caf4 + iVar17 * 2);
    *puVar4 = *puVar4 | 0x20;
    puVar4 = (ushort *)((int)&DAT_0053caf4 + iVar17 * 2 + 2);
    *puVar4 = *puVar4 | 0x20;
    *(ushort *)(&DAT_0053caf8 + iVar17 * 2) = *(ushort *)(&DAT_0053caf8 + iVar17 * 2) | 0x20;
  }
  else {
    FUN_0040e000(uVar22 + 0xe,uVar25 + 10,uVar24,0);
    *(ushort *)(&DAT_0053caee + iVar17 * 2) = *(ushort *)(&DAT_0053caee + iVar17 * 2) | 0x20;
    *(ushort *)(&DAT_0053caec + iVar17 * 2) = *(ushort *)(&DAT_0053caec + iVar17 * 2) | 0x20;
    *(ushort *)(&DAT_0053caea + iVar17 * 2) = *(ushort *)(&DAT_0053caea + iVar17 * 2) | 0x20;
  }
  FUN_0042f340();
  if ((iVar20 == 4) || (iVar20 == 3)) {
    do {
      uVar11 = FUN_0045c1e0(0x28);
      uVar13 = FUN_0045c1e0(0x28);
      iVar20 = FUN_0040db90(uVar11 + 5,uVar13 + 5,2,4);
    } while (iVar20 == -1);
    iVar20 = FUN_0040e000(uVar11 + 5,uVar13 + 5,4,0);
    (&DAT_0058bcc0)[iVar20 * 4] = 0xe;
  }
switchD_0047167c_caseD_3:
  param_1 = 0;
  if (0 < DAT_00822c88) {
    do {
      do {
        uVar11 = FUN_0045c1e0(0x27);
        iVar15 = uVar11 + 5;
        uVar11 = FUN_0045c1e0(0x27);
        iVar26 = uVar11 + 5;
        iVar20 = iVar26 + iVar15 * 0x32;
      } while (*(char *)(iVar20 + 0x5722e8) != local_30);
      iVar17 = FUN_0040e000(iVar15,iVar26,4,0);
      switch(DAT_005a34e0) {
      case '\0':
        (&DAT_0058bcc0)[iVar17 * 4] = 0x10;
        break;
      case '\x01':
        (&DAT_0058bcc0)[iVar17 * 4] = 0x12;
        break;
      case '\x02':
        (&DAT_0058bcc0)[iVar17 * 4] = 0x11;
        break;
      case '\x03':
        (&DAT_0058bcc0)[iVar17 * 4] = 0x11;
      }
      uVar10 = FUN_0045c1e0(4);
      (&DAT_0053caf0)[iVar20] = (&DAT_0053caf0)[iVar20] | 0x8000;
      cVar8 = DAT_005a34e0;
      iVar20 = 0;
      (&DAT_0058bcbe)[iVar17 * 0x10] = uVar10;
      do {
        if (cVar8 == '\x01') {
          *(undefined1 *)
           (iVar26 + *(int *)((int)&DAT_004c2898 + iVar20) +
                     (*(int *)((int)&DAT_004c2878 + iVar20) + iVar15) * 0x32 + 0x5722e8) = 0xb;
        }
        iVar20 = iVar20 + 4;
      } while (iVar20 < 0x20);
      param_1 = param_1 + 1;
    } while ((int)param_1 < DAT_00822c88);
  }
  iVar20 = FUN_00402970(0xfffffffa);
  uVar10 = (undefined1)DAT_00578154;
  (&DAT_00585860)[iVar20 * 0x4c] = (undefined1)DAT_00578150;
  (&DAT_00585861)[iVar20 * 0x4c] = uVar10;
  iVar15 = 0x19;
  iVar20 = 0;
  do {
    iVar26 = iVar20;
    iVar20 = iVar26 + 1;
    iVar15 = iVar15 + -1;
  } while ((int)((uint)(byte)(&DAT_00571ff5)[iVar14] * 10) < iVar15 * iVar15 * 4);
  cVar8 = (&DAT_00571ff7)[iVar14];
  puVar28 = &DAT_005722e8;
  puVar29 = &DAT_00542414;
  for (iVar15 = 0x271; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar29 = *puVar28;
    puVar28 = puVar28 + 1;
    puVar29 = puVar29 + 1;
  }
  if (cVar8 != '\x02') {
    iVar15 = 0;
    if (0 < iVar20) {
      iVar26 = 0x31;
      do {
        iVar17 = 0;
        do {
          FUN_00470a10(iVar15,iVar17);
          if ((&DAT_00571ff7)[iVar14] == '\0') {
            FUN_00470a10(iVar17,iVar15);
          }
          FUN_00470a10(iVar17,iVar26);
          FUN_00470a10(iVar26,iVar17);
          iVar17 = iVar17 + 1;
        } while (iVar17 < 0x32);
        iVar15 = iVar15 + 1;
        iVar26 = iVar26 + -1;
      } while (iVar15 < iVar20);
    }
    FUN_0042f2c0();
    FUN_0042f7a0();
    return;
  }
  iVar14 = 0;
  do {
    uVar11 = FUN_0045c1e0(3);
    uVar22 = (int)(iVar14 - 0x19U) >> 0x1f;
    iVar20 = FUN_00467130((iVar14 - 0x19U ^ uVar22) - uVar22,8,0x32);
    iVar15 = iVar20 + iVar26 + -0xb + (uint)uVar11;
    iVar20 = 0;
    if (0 < iVar15) {
      iVar17 = 0x31;
      do {
        FUN_00470a10(iVar20,iVar14);
        FUN_00470a10(iVar14,iVar20);
        FUN_00470a10(iVar14,iVar17);
        FUN_00470a10(iVar17,iVar14);
        iVar20 = iVar20 + 1;
        iVar17 = iVar17 + -1;
      } while (iVar20 < iVar15);
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < 0x32);
  FUN_0042f2c0();
  FUN_0042f7a0();
  return;
}

