/* Ghidra decompiled: golf.exe */
/* Function: FUN_00470a60 @ 0x00470A60 */
/* Body size: 3430 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00470a60(uint param_1)

{
  int iVar1;
  byte *pbVar2;
  ushort *puVar3;
  char *pcVar4;
  char cVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  ushort uVar10;
  short sVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined2 *puVar18;
  int iVar19;
  undefined2 uVar20;
  uint uVar21;
  undefined4 *puVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  undefined1 *puVar28;
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
  iVar13 = param_1 * 0x2e;
  iVar19 = (int)(char)(&DAT_00571ff4)[iVar13];
  cVar7 = (&DAT_00571ff8)[iVar13];
  (&DAT_00571ffa)[iVar13] = (undefined1)DAT_005a6d3c;
  cVar5 = (&DAT_00571ff6)[iVar13];
  if (cVar5 == '\0') {
    DAT_004c2fa0 = 0x30;
  }
  else if (cVar5 == '\x01') {
    DAT_004c2fa0 = 0x20;
  }
  else if (cVar5 == '\x02') {
    DAT_004c2fa0 = 0x10;
  }
  iVar14 = (int)(param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2;
  if (iVar14 == 0) {
    iVar14 = DAT_004c2fa0 / 2;
LAB_00470b1c:
    DAT_004c2fa0 = DAT_004c2fa0 + iVar14;
  }
  else {
    if (iVar14 == 1) {
      iVar14 = (int)(DAT_004c2fa0 + (DAT_004c2fa0 >> 0x1f & 3U)) >> 2;
      goto LAB_00470b1c;
    }
    if (iVar14 == 3) {
      iVar14 = -((int)(DAT_004c2fa0 + (DAT_004c2fa0 >> 0x1f & 3U)) >> 2);
      goto LAB_00470b1c;
    }
  }
  uVar21 = _DAT_0059e7b8 & 0x1000000;
  if (uVar21 != 0) {
    DAT_004c2fa0 = DAT_004c2fa0 + 0x10;
  }
  DAT_005a34e0 = cVar7;
  switch(cVar7) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
    local_30 = 4;
    break;
  case '\x04':
    puVar22 = &DAT_005722e8;
    for (iVar14 = 0x271; iVar14 != 0; iVar14 = iVar14 + -1) {
      *puVar22 = 0xe0e0e0e;
      puVar22 = puVar22 + 1;
    }
  }
  if (uVar21 == 0) {
    if (7 < (int)param_1) {
      local_30 = (-(uint)(cVar7 != '\x01') & 0xfffffff9) + 0xc;
    }
    if (0xb < (int)param_1) {
      local_30 = 0xc - (uint)(cVar7 != '\x01');
    }
  }
  param_1 = 0;
  bVar6 = false;
  uVar21 = 0;
  local_1c = 0;
  puVar22 = &DAT_005722e8;
  for (iVar14 = 0x271; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar22 = CONCAT22(CONCAT11((undefined1)local_30,(undefined1)local_30),
                        CONCAT11((undefined1)local_30,(undefined1)local_30));
    puVar22 = puVar22 + 1;
  }
  local_24 = 5000;
  uVar20 = CONCAT11((&DAT_00578375)[(char)DAT_005722e8 * 0x30],
                    (&DAT_00578375)[(char)DAT_005722e8 * 0x30]);
  puVar22 = &DAT_0053bbac;
  for (iVar14 = 0x271; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar22 = CONCAT22(uVar20,uVar20);
    puVar22 = puVar22 + 1;
  }
  puVar22 = &DAT_0053ea24;
  for (iVar14 = 0x271; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar22 = 0;
    puVar22 = puVar22 + 1;
  }
  puVar22 = &DAT_005a6378;
  for (iVar14 = 0x271; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar22 = 0;
    puVar22 = puVar22 + 1;
  }
  puVar22 = &DAT_0056c7e4;
  for (iVar14 = 0x271; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar22 = 0;
    puVar22 = puVar22 + 1;
  }
  puVar22 = &DAT_0056988c;
  for (iVar14 = 0x271; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar22 = 0;
    puVar22 = puVar22 + 1;
  }
  do {
    local_28 = 0;
    uVar10 = FUN_0045c1e0(0x32);
    uVar25 = (uint)uVar10;
    uVar10 = FUN_0045c1e0(0x32);
    uVar23 = (uint)uVar10;
    switch(DAT_005a34e0) {
    case '\0':
      uVar21 = (0x18 < uVar23) + 0xd;
      if (iVar19 == 9) {
LAB_00470c78:
        uVar21 = 0xe;
      }
      break;
    case '\x01':
      uVar21 = ((byte)~bVar6 | 6) << 1;
      break;
    case '\x02':
      if (!bVar6) goto LAB_00470c78;
      uVar21 = (param_1 & 2 | 0x18) >> 1;
      break;
    case '\x03':
      uVar21 = (-(uint)bVar6 & 6) + 5;
      break;
    case '\x04':
      uVar21 = (uint)bVar6 << 3 | 4;
    }
    do {
      if (((((int)uVar23 < 0) || (0x31 < (int)uVar25)) || (0x31 < (int)uVar23)) ||
         ((int)(local_24 + ((int)local_24 >> 0x1f & 0x7fU)) >> 7 <= local_28)) break;
      iVar14 = uVar23 + uVar25 * 0x32;
      local_28 = local_28 + 1;
      *(char *)((int)&DAT_005722e8 + iVar14) = (char)uVar21;
      if (local_28 == 0x30) {
        pbVar2 = (byte *)((int)&DAT_0053caf0 + iVar14 * 2 + 1);
        *pbVar2 = *pbVar2 | 0x20;
      }
      *(undefined *)((int)&DAT_0053bbac + iVar14) = (&DAT_00578375)[(char)uVar21 * 0x30];
      sVar11 = FUN_0045c1e0(0x40);
      if (sVar11 == 0) {
        pbVar2 = (byte *)((int)&DAT_0053caf0 + iVar14 * 2 + 1);
        *pbVar2 = *pbVar2 | 1;
      }
      else {
        pbVar2 = (byte *)((int)&DAT_0053caf0 + iVar14 * 2 + 1);
        *pbVar2 = *pbVar2 & 0xfe;
      }
      uVar15 = FUN_0045c1e0(3);
      uVar25 = (uVar25 - 1) + (uVar15 & 0xffff);
      uVar15 = FUN_0045c1e0(3);
      uVar23 = ((uVar15 & 0xffff) - 1) + uVar23;
    } while (-1 < (int)uVar25);
    local_1c = local_1c + local_28;
    if (0x4e2 < local_1c) break;
    local_24 = local_24 + 0x9c4;
    param_1 = param_1 + 1;
    bVar6 = (bool)(bVar6 ^ 1);
  } while ((int)local_24 < 45000);
  local_c = (undefined4 *)(uint)((&DAT_00571ff7)[iVar13] != '\x02');
  param_1 = 0;
  if ((&DAT_00571ff7)[iVar13] != '\x02') {
    do {
      uVar10 = FUN_0045c1e0(0x10);
      local_28 = 0x31;
      local_14 = 0;
      iVar14 = (int)((param_1 * 5 + 5) * 10) / 3 + (uint)uVar10;
      while ((-1 < iVar14 && (iVar14 < 0x32))) {
        iVar26 = local_28 + iVar14 * 0x32;
        cVar7 = (-(DAT_005a34e0 != '\x01') & 6U) + 0xb;
        *(char *)((int)&DAT_005722e8 + iVar26) = cVar7;
        (&DAT_0053caf0)[iVar26] = (&DAT_0053caf0)[iVar26] & 0xfeff | 0x1000;
        *(undefined *)((int)&DAT_0053bbac + iVar26) = (&DAT_00578375)[cVar7 * 0x30];
        sVar11 = FUN_0045c1e0(0x40);
        if (sVar11 == 0) {
          pbVar2 = (byte *)((int)&DAT_0053caf0 + iVar26 * 2 + 1);
          *pbVar2 = *pbVar2 | 1;
        }
        local_18 = local_28 + 1;
        local_1c = 999;
        sVar11 = FUN_0045c1e0(2);
        iVar26 = ((-(uint)(sVar11 != 0) & 2) - 1) + iVar14;
        pbVar2 = (byte *)(local_28 + 0x5722e9 + iVar26 * 0x32);
        if ((*(char *)(local_28 + 0x5722e9 + iVar26 * 0x32) != '\x11') &&
           (iVar16 = FUN_0040c170(iVar26,local_18,0), iVar16 == 3)) {
          if (param_1 == 0) {
            bVar8 = ~(((char)iVar26 + (char)local_18) * '\x02') & 4U | 8;
          }
          else {
            bVar8 = 0xc;
          }
          *pbVar2 = bVar8;
          if (DAT_005a34e0 == '\x01') {
            *pbVar2 = 10;
          }
        }
        local_24 = 0xfffffffe;
        do {
          iVar16 = (&DAT_004c2898)[local_24 & 7];
          iVar27 = (&DAT_004c2878)[local_24 & 7] + iVar14;
          if (((param_1 == 0) || (iVar27 < 0x30)) &&
             (iVar17 = FUN_0042dba0(iVar27 * 0x80,(iVar16 + local_28) * 0x80), iVar17 < local_1c)) {
            local_8 = local_24;
            iVar26 = iVar27;
            local_1c = iVar17;
            local_18 = iVar16 + local_28;
          }
          local_24 = local_24 + 2;
        } while ((int)local_24 < 3);
        if (local_8 == -local_14) {
          local_18 = local_28 + -1;
          iVar26 = iVar14;
        }
        local_14 = local_8;
        if ((*(char *)((int)&DAT_005722e8 + iVar26 * 0x32 + local_18) == '\x11') ||
           (iVar14 = iVar26, local_28 = local_18, local_18 < 0)) break;
      }
      param_1 = param_1 + 1;
    } while ((int)param_1 < (int)local_c);
  }
  local_c = (undefined4 *)0x0;
  iVar14 = 5;
  if ((&DAT_00571ff7)[iVar13] == '\x01') {
    param_1 = 0;
    do {
      iVar26 = 0;
      if (0 < iVar14) {
        puVar28 = (undefined1 *)((int)&DAT_005722e8 + param_1);
        do {
          if (puVar28[iVar26] != '\x11') {
            cVar7 = ((DAT_005a34e0 != '\x04') - 1U & 0xfb) + 0x11;
            puVar28[iVar26] = cVar7;
            *(undefined *)((int)&DAT_0053bbac + iVar26 + param_1) = (&DAT_00578375)[cVar7 * 0x30];
            pbVar2 = (byte *)((int)&DAT_0053caf0 + (param_1 + iVar26) * 2 + 1);
            *pbVar2 = *pbVar2 & 0xfe;
            if ((iVar26 == iVar14 + -1) && (sVar11 = FUN_0045c1e0(0x10), sVar11 == 0)) {
              pbVar2 = (byte *)((int)&DAT_0053caf0 + (param_1 + iVar26) * 2 + 1);
              *pbVar2 = *pbVar2 | 1;
            }
          }
          if (iVar26 == 0) {
            *puVar28 = 0x14;
          }
          local_c = (undefined4 *)((int)local_c + 1);
          iVar26 = iVar26 + 1;
        } while (iVar26 < iVar14);
      }
      uVar21 = FUN_0045c1e0(5);
      iVar14 = ((uVar21 & 0xffff) - 2) + iVar14;
      if (iVar14 < 2) {
        iVar14 = 2;
      }
      else if (0xc < iVar14) {
        iVar14 = iVar14 + -1;
      }
      param_1 = param_1 + 0x32;
    } while ((int)param_1 < 0x9c4);
  }
  puVar18 = &DAT_0053caf0;
  do {
    iVar14 = 0x32;
    do {
      *(byte *)((int)puVar18 + 1) = *(byte *)((int)puVar18 + 1) & 0xef;
      puVar18 = puVar18 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  } while ((int)puVar18 < 0x53de78);
  iVar14 = 0;
  puVar28 = &DAT_005a4998;
  do {
    iVar26 = 0;
    do {
      uVar9 = FUN_0040c170(iVar14,iVar26,0);
      puVar28[iVar26] = uVar9;
      iVar26 = iVar26 + 1;
    } while (iVar26 < 0x33);
    puVar28 = puVar28 + 0x33;
    iVar14 = iVar14 + 1;
  } while ((int)puVar28 < 0x5a538f);
  param_1 = 0;
  iVar14 = 0;
  do {
    uVar10 = FUN_0045c1e0(4);
    uVar21 = param_1 & 0x80000003;
    if ((int)uVar21 < 0) {
      uVar21 = (uVar21 - 1 | 0xfffffffc) + 1;
    }
    iVar26 = uVar10 + 4 + ((int)(uVar21 * 0x32 + ((int)(uVar21 * 0x32) >> 0x1f & 3U)) >> 2);
    uVar10 = FUN_0045c1e0(4);
    iVar16 = ((int)(param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2) * 0x32;
    iVar16 = uVar10 + 4 + ((int)(iVar16 + (iVar16 >> 0x1f & 3U)) >> 2);
    switch(DAT_005a34e0) {
    case '\0':
      bVar8 = 3;
      goto LAB_004711d6;
    case '\x01':
      iVar14 = (-(uint)(3 < (byte)(&DAT_005a4998)[iVar16 + iVar26 * 0x33]) & 0xfffffffd) + 0xf;
      break;
    case '\x02':
      iVar14 = (-(uint)(3 < (byte)(&DAT_005a4998)[iVar16 + iVar26 * 0x33]) & 0xfffffffe) + 0x11;
      break;
    case '\x03':
      iVar14 = (-(uint)(3 < (byte)(&DAT_005a4998)[iVar16 + iVar26 * 0x33]) & 3) + 0xc;
      break;
    case '\x04':
      bVar8 = 4;
LAB_004711d6:
      iVar14 = (-(uint)(bVar8 < (byte)(&DAT_005a4998)[iVar16 + iVar26 * 0x33]) & 0xfffffffb) + 0x11;
    }
    if (((1 < DAT_00822c88) &&
        (sVar11 = FUN_0045c1e0((int)(8 / (longlong)(DAT_00822c88 + -1))), sVar11 == 0)) ||
       (param_1 == 0)) {
      iVar14 = 0x12;
    }
    if ((iVar19 == 2) && ((iVar14 == 8 || (iVar14 == 0x12)))) {
      iVar14 = 0xc;
    }
    local_c = (undefined4 *)0x0;
    do {
      iVar27 = iVar16 + iVar26 * 0x32;
      if (((&DAT_0053caf0)[iVar27] & 0x1000) == 0) {
        *(char *)((int)&DAT_005722e8 + iVar27) = (char)iVar14;
        sVar11 = FUN_0045c1e0(8);
        if ((sVar11 == 0) && (iVar14 == 0x12)) {
          pbVar2 = (byte *)((int)&DAT_0053caf0 + iVar27 * 2 + 1);
          *pbVar2 = *pbVar2 | 1;
        }
        *(undefined *)((int)&DAT_0053bbac + iVar27) =
             (&DAT_00578375)[*(char *)((int)&DAT_005722e8 + iVar27) * 0x30];
        if (iVar14 == 0x11) {
          (&DAT_005a4998)[iVar16 + iVar26 * 0x33] = 3;
        }
      }
      sVar11 = FUN_0045c1e0(2);
      if (sVar11 == 0) {
        sVar11 = FUN_0045c1e0(2);
        iVar16 = iVar16 + ((-(uint)(sVar11 != 0) & 2) - 1);
      }
      else {
        sVar11 = FUN_0045c1e0(2);
        iVar26 = iVar26 + ((-(uint)(sVar11 != 0) & 2) - 1);
      }
    } while (((((-1 < iVar26) && (iVar26 < 0x32)) && (-1 < iVar16)) && (iVar16 < 0x32)) &&
            ((local_c = (undefined4 *)((int)local_c + 1), (int)local_c < 5 ||
             (sVar11 = FUN_0045c1e0(0x10), sVar11 != 0))));
    param_1 = param_1 + 1;
  } while ((int)param_1 < 0x18);
  iVar14 = 0x10;
  do {
    uVar10 = FUN_0045c1e0(0x2a);
    uVar21 = FUN_0045c1e0(0x2a);
    *(ushort *)(&DAT_0053cc88 + ((uint)uVar10 + (uVar21 & 0xffff) * 0x32) * 2) =
         *(ushort *)(&DAT_0053cc88 + ((uint)uVar10 + (uVar21 & 0xffff) * 0x32) * 2) | 0x100;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  puVar22 = &DAT_005722e8;
  puVar18 = &DAT_0053caf0;
  do {
    iVar14 = 0;
    do {
      *(byte *)((int)puVar18 + 1) = *(byte *)((int)puVar18 + 1) & 0xfe;
      if (*(char *)((int)puVar22 + iVar14) == '\x10') {
        *(undefined1 *)((int)puVar22 + iVar14) = 0xd;
      }
      iVar14 = iVar14 + 1;
      puVar18 = puVar18 + 1;
    } while (iVar14 < 0x32);
    puVar22 = (undefined4 *)((int)puVar22 + 0x32);
  } while ((int)puVar18 < 0x53de78);
  iVar14 = 0;
  do {
    uVar10 = FUN_0045c1e0(0x2e);
    uVar12 = FUN_0045c1e0(0x2e);
    uVar21 = uVar12 + 2;
    iVar26 = FUN_0040bf60(uVar10 + 2,uVar21);
    if (iVar26 == 0) {
      iVar26 = uVar21 + (uVar10 + 2) * 0x32;
      cVar7 = *(char *)((int)&DAT_005722e8 + iVar26);
      if ((((cVar7 != '\x15') && (cVar7 != '\x16')) &&
          ((cVar7 != '\x04' &&
           ((cVar7 != '\x12' && ((int)cVar7 != 0xb - (uint)(DAT_005a34e0 != '\x01'))))))) &&
         ((cVar7 != '\x11' || (6 < uVar21)))) {
        (&DAT_0053caf0)[iVar26] = (&DAT_0053caf0)[iVar26] | 0x100;
        iVar14 = iVar14 + 1;
      }
    }
  } while (iVar14 < (4 - DAT_00822c88) * 9);
  param_1 = 0;
  local_c = &DAT_005722e8;
  do {
    iVar14 = 0;
    puVar22 = local_c;
    do {
      if ((*(char *)((int)puVar22 + iVar14) == '\x11') ||
         (*(char *)((int)puVar22 + iVar14) == '\x12')) {
        local_8 = 0x10100;
        local_4 = 0;
        local_14 = 0xffff;
        local_10 = 0xff;
        iVar26 = 0;
        do {
          iVar27 = (int)*(char *)((int)&local_8 + iVar26) + param_1;
          iVar16 = *(char *)((int)&local_14 + iVar26) + iVar14;
          if ((((-1 < iVar27) && (iVar27 < 0x32)) && (-1 < iVar16)) &&
             ((iVar16 < 0x32 &&
              (*(char *)((int)&DAT_005722e8 +
                        iVar14 + (&DAT_004c2898)[iVar26 * 2] +
                                 ((&DAT_004c2878)[iVar26 * 2] + param_1) * 0x32) != '\x11')))) {
            iVar16 = (int)*(char *)((int)&local_14 + iVar26) + iVar27 * 0x33;
            bVar8 = (&DAT_005a4998)[iVar14 + iVar16];
            pcVar4 = &DAT_005a4998 + iVar14 + iVar16;
            if ((3 < bVar8) &&
               (bVar8 == (&DAT_005a4998)
                         [(int)*(char *)((int)&local_14 + iVar26 + 1) +
                          ((int)*(char *)((int)&local_8 + iVar26 + 1) + param_1) * 0x33 + iVar14]))
            {
              if (bVar8 == 4) {
                *pcVar4 = '\x03';
              }
              else {
                sVar11 = FUN_0045c1e0(2);
                *pcVar4 = *pcVar4 + ((-(sVar11 != 0) & 2U) - 1);
              }
            }
          }
          iVar26 = iVar26 + 1;
          puVar22 = local_c;
        } while (iVar26 < 4);
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < 0x33);
    local_c = (undefined4 *)((int)puVar22 + 0x32);
    param_1 = param_1 + 1;
  } while ((int)local_c < 0x572cad);
  do {
    do {
      uVar10 = FUN_0045c1e0(0x11);
      uVar21 = (uint)uVar10;
      iVar14 = uVar21 + 0xf;
      uVar10 = FUN_0045c1e0(0x11);
      uVar25 = (uint)uVar10;
      iVar26 = uVar25 + 0xf;
    } while (*(char *)(uVar25 + 0x5722f7 + iVar14 * 0x32) != local_30);
    iVar16 = FUN_0040db90(iVar14,iVar26,(int)DAT_004c27ec,0xf);
  } while (iVar16 == -1);
  FUN_0040e000(iVar14,iVar26,0xf,0x60);
  DAT_0058bcbf = DAT_0058bcbf | 0x40;
  DAT_004c2ba0 = uVar21 + 0x15;
  iVar16 = iVar26 + iVar14 * 0x32;
  DAT_004c2ba4 = uVar25 + 0xb;
  _DAT_00578150 = iVar14;
  DAT_00578158 = iVar14;
  *(byte *)(&DAT_0053caf0 + iVar16) = *(byte *)(&DAT_0053caf0 + iVar16) & 0xdf;
  _DAT_00578154 = iVar26;
  DAT_0057815c = iVar26;
  switch(iVar19) {
  case 0:
  case 10:
    iVar14 = 0;
    do {
      uVar10 = FUN_0045c1e0(0x2e);
      uVar12 = FUN_0045c1e0(0x2e);
      iVar26 = FUN_0040bf60(uVar10 + 2,uVar12 + 2);
      if (iVar26 == 0) {
        iVar26 = uVar12 + 2 + (uVar10 + 2) * 0x32;
        cVar7 = *(char *)((int)&DAT_005722e8 + iVar26);
        if (((cVar7 != '\x15') && (cVar7 != '\x16')) &&
           ((cVar7 != '\x11' && (((&DAT_0053caf0)[iVar26] & 0x400) == 0)))) {
          (&DAT_0053caf0)[iVar26] = (&DAT_0053caf0)[iVar26] | 0x100;
          if (iVar19 == 0) {
            *(undefined1 *)((int)&DAT_005722e8 + iVar26) = 0xb;
          }
          else if (iVar19 == 0xd) {
            *(undefined1 *)((int)&DAT_005722e8 + iVar26) = 0xb;
          }
          else if (iVar19 == 0xf) {
            *(undefined1 *)((int)&DAT_005722e8 + iVar26) = 0xf;
          }
          else if (iVar19 == 10) {
            *(undefined1 *)((int)&DAT_005722e8 + iVar26) = 4;
          }
          iVar14 = iVar14 + 1;
        }
      }
    } while (iVar14 < 0x10);
    goto LAB_00471f89;
  case 1:
    iVar19 = 0;
    if (-DAT_00822c88 != -8 && -1 < -DAT_00822c88 + 8) {
      do {
        do {
          uVar10 = FUN_0045c1e0(0x1e);
          uVar21 = FUN_0045c1e0(0x1e);
          iVar26 = DAT_00822c88;
          iVar14 = (uVar21 & 0xffff) + (uVar10 + 10) * 0x32;
        } while (*(char *)((int)&DAT_005722e8 + iVar14) != '\x11');
        (&DAT_0053caf0)[iVar14] = (&DAT_0053caf0)[iVar14] | 0x100;
        iVar19 = iVar19 + 1;
      } while (iVar19 < 8 - iVar26);
    }
    goto LAB_00471f89;
  case 2:
    uVar24 = 0xd;
    break;
  default:
    goto LAB_00471f89;
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
      uVar10 = FUN_0045c1e0(0x28);
      uVar21 = FUN_0045c1e0(0x28);
      iVar14 = FUN_0040db90(uVar10 + 3,(uVar21 & 0xffff) + 3,5,0xf);
    } while (iVar14 == -1);
    param_1 = 0;
    if (-DAT_00822c88 != -8 && -1 < -DAT_00822c88 + 8) {
      do {
        FUN_0045c1e0(7);
        FUN_0045c1e0(7);
        uVar10 = FUN_0045c1e0(0x28);
        iVar16 = uVar10 + 5;
        uVar12 = FUN_0045c1e0(0x28);
        uVar21 = (uint)uVar12;
        iVar26 = uVar21 + 5;
        iVar14 = FUN_0040db90(uVar10 + 4,uVar21 + 4,3,7);
        if ((iVar14 != -1) && (*(char *)(uVar21 + 0x5722ed + iVar16 * 0x32) != '\x11')) {
          if (iVar19 == 5) {
            *(undefined1 *)(uVar21 + 0x5722ed + iVar16 * 0x32) = 0x11;
            (&DAT_005a49ca)[iVar26 + iVar16 * 0x33] = 6;
            FUN_0045c1e0(4);
            local_24 = 0;
            do {
              iVar27 = (&DAT_004c2878)[local_24 & 7] + iVar16;
              iVar14 = (&DAT_004c2898)[local_24 & 7] + iVar26;
              switch(local_24) {
              case 0:
                *(undefined1 *)(iVar27 * 0x32 + iVar14 + 0x5722e8) = 0x11;
                break;
              case 1:
              case 7:
                *(undefined1 *)(iVar27 * 0x32 + iVar14 + 0x5722e8) = 5;
                break;
              case 2:
                *(undefined1 *)(iVar27 * 0x32 + iVar14 + 0x5722e8) = 0x11;
                (&DAT_005a49ca)[iVar14 + iVar27 * 0x33] = 3;
                goto LAB_00471a7f;
              default:
                sVar11 = FUN_0045c1e0(2);
                if (sVar11 != 0) {
                  *(undefined1 *)(iVar27 * 0x32 + iVar14 + 0x5722e8) = 0x11;
                }
                (&DAT_005a4997)[iVar14 + iVar27 * 0x33] = 3;
                goto LAB_00471a7f;
              case 6:
                *(undefined1 *)(iVar27 * 0x32 + iVar14 + 0x5722e8) = 0x11;
              }
              (&DAT_005a49ca)[iVar14 + iVar27 * 0x33] = 6;
LAB_00471a7f:
              local_24 = local_24 + 1;
            } while ((int)local_24 < 8);
          }
          else {
            if (((iVar19 == 0xf) || (iVar19 == 0xc)) || (iVar19 == 8)) {
              iVar14 = FUN_0040e000(iVar16,iVar26,4,0);
              (&DAT_0058bcc0)[iVar14 * 4] = 0xb;
              if (iVar19 == 8) {
                sVar11 = FUN_0045c1e0(2);
                (&DAT_0058bcc0)[iVar14 * 4] = (-(uint)(sVar11 != 0) & 4) + 2;
              }
              else if (iVar19 == 0xc) {
                (&DAT_0058bcc0)[iVar14 * 4] = 3;
              }
              uVar9 = FUN_0045c1e0(4);
              (&DAT_0058bcbe)[iVar14 * 0x10] = uVar9;
              uVar21 = 0;
              do {
                iVar14 = (&DAT_004c2898)[uVar21] + ((&DAT_004c2878)[uVar21] + iVar16) * 0x32 +
                         iVar26;
                if ((*(char *)(iVar14 + 0x5722e8) != '\x16') &&
                   (*(char *)(iVar14 + 0x5722e8) != '\x11')) {
                  if ((param_1 & 1) == 0) {
                    *(undefined1 *)(iVar14 + 0x5722e8) = 5;
                    (&DAT_0053caf0)[iVar14] =
                         (&DAT_0053caf0)[iVar14] | (ushort)((uVar21 & 1) << 9) | 0x20;
                  }
                  else {
                    *(byte *)(iVar14 + 0x5722e8) = ((iVar19 != 0xc) - 1U & 8) + 4;
                    if (iVar19 == 0xf) {
                      *(undefined1 *)(iVar14 + 0x5722e8) = 0x11;
                    }
                    else if (uVar21 == 0) {
                      iVar14 = iVar26 + iVar16 * 0x33;
                      (&DAT_005a4998)[iVar14] = (&DAT_005a4998)[iVar14] + '\x02';
                      (&DAT_005a49cb)[iVar14] = (&DAT_005a49cb)[iVar14] + '\x02';
                      (&DAT_005a4997)[iVar14] = (&DAT_005a4997)[iVar14] + '\x02';
                      (&DAT_005a49ca)[iVar14] = (&DAT_005a49ca)[iVar14] + '\x02';
                    }
                  }
                }
                uVar21 = uVar21 + 1;
              } while ((int)uVar21 < 8);
            }
            if (iVar19 == 10) {
              iVar14 = FUN_0040e000(iVar16,iVar26,4,0);
              (&DAT_0058bcc0)[iVar14 * 4] = 1;
              uVar9 = FUN_0045c1e0(4);
              (&DAT_0058bcbe)[iVar14 * 0x10] = uVar9;
              iVar14 = 0;
              do {
                iVar27 = *(int *)((int)&DAT_004c2898 + iVar14) +
                         (iVar16 + *(int *)((int)&DAT_004c2878 + iVar14)) * 0x32;
                if ((&DAT_00578376)[*(char *)(iVar26 + iVar27 + 0x5722e8) * 0x30] == '\x04') {
                  *(undefined1 *)(iVar26 + iVar27 + 0x5722e8) = 5;
                  sVar11 = FUN_0045c1e0(6);
                  if (sVar11 == 0) {
                    pbVar2 = (byte *)((int)&DAT_0053caf0 +
                                     (*(int *)((int)&DAT_004c2898 + iVar14) +
                                      (iVar16 + *(int *)((int)&DAT_004c2878 + iVar14)) * 0x32 +
                                     iVar26) * 2 + 1);
                    *pbVar2 = *pbVar2 | 1;
                  }
                }
                iVar14 = iVar14 + 4;
              } while (iVar14 < 0x20);
            }
            else if (iVar19 == 0xd) {
              iVar14 = FUN_0040e000(iVar16,iVar26,4,0);
              (&DAT_0058bcc0)[iVar14 * 4] = 1;
              uVar9 = FUN_0045c1e0(4);
              (&DAT_0058bcbe)[iVar14 * 0x10] = uVar9;
              iVar27 = 0;
              do {
                cVar7 = *(char *)(iVar26 + *(int *)((int)&DAT_004c2898 + iVar27) +
                                           (*(int *)((int)&DAT_004c2878 + iVar27) + iVar16) * 0x32 +
                                 0x5722e8);
                if ((&DAT_00578376)[cVar7 * 0x30] == '\r') {
                  (&DAT_0058bcc0)[iVar14 * 4] = 10;
                }
                if (cVar7 == '\x11') {
                  (&DAT_0058bcc0)[iVar14 * 4] = 9;
                  break;
                }
                iVar27 = iVar27 + 4;
              } while (iVar27 < 0x20);
              iVar27 = 0;
              do {
                iVar17 = (&DAT_0058bcc0)[iVar14 * 4];
                if (iVar17 == 1) {
                  iVar1 = *(int *)((int)&DAT_004c2898 + iVar27) +
                          (*(int *)((int)&DAT_004c2878 + iVar27) + iVar16) * 0x32 + iVar26;
                  pbVar2 = (byte *)((int)&DAT_0053caf0 + iVar1 * 2 + 1);
                  *pbVar2 = *pbVar2 | 1;
                  *(undefined1 *)(iVar1 + 0x5722e8) = 0xb;
                }
                if ((iVar17 == 3) &&
                   (iVar1 = *(int *)((int)&DAT_004c2898 + iVar27) +
                            (*(int *)((int)&DAT_004c2878 + iVar27) + iVar16) * 0x32,
                   *(char *)(iVar26 + iVar1 + 0x5722e8) == '\x04')) {
                  *(undefined1 *)(iVar26 + iVar1 + 0x5722e8) = 10;
                }
                if (((iVar17 == 9) &&
                    (*(char *)(iVar26 + *(int *)((int)&DAT_004c2898 + iVar27) +
                                        (iVar16 + *(int *)((int)&DAT_004c2878 + iVar27)) * 0x32 +
                              0x5722e8) == '\x04')) && (sVar11 = FUN_0045c1e0(3), sVar11 == 0)) {
                  pbVar2 = (byte *)((int)&DAT_0053caf0 +
                                   (*(int *)((int)&DAT_004c2898 + iVar27) +
                                    (iVar16 + *(int *)((int)&DAT_004c2878 + iVar27)) * 0x32 + iVar26
                                   ) * 2 + 1);
                  *pbVar2 = *pbVar2 | 1;
                }
                iVar27 = iVar27 + 4;
              } while (iVar27 < 0x20);
            }
            else if (iVar19 == 6) {
              iVar14 = FUN_0040e000(iVar16,iVar26,4,0);
              (&DAT_0058bcc0)[iVar14 * 4] = (param_1 & 1 | 0x5c) * 4 + -0x168;
              uVar9 = FUN_0045c1e0(4);
              (&DAT_0058bcbe)[iVar14 * 0x10] = uVar9;
              uVar21 = 0;
              do {
                if ((param_1 & 1) == 0) {
                  iVar14 = (&DAT_004c2898)[uVar21] + ((&DAT_004c2878)[uVar21] + iVar16) * 0x32 +
                           iVar26;
                  if (*(char *)(iVar14 + 0x5722e8) != '\x11') {
                    (&DAT_0053caf0)[iVar14] =
                         (&DAT_0053caf0)[iVar14] | (ushort)((uVar21 & 1) << 9) | 0x20;
                  }
                }
                else {
                  pbVar2 = (byte *)((int)&DAT_0053caf0 +
                                   ((&DAT_004c2898)[uVar21] +
                                    ((&DAT_004c2878)[uVar21] + iVar16) * 0x32 + iVar26) * 2 + 1);
                  *pbVar2 = *pbVar2 | 0x10;
                }
                uVar21 = uVar21 + 1;
              } while ((int)uVar21 < 8);
            }
          }
        }
        param_1 = param_1 + 1;
      } while ((int)param_1 < 8 - DAT_00822c88);
    }
    goto LAB_00471f89;
  case 7:
    iVar19 = 0;
    do {
      if (iVar19 == 0) {
        uVar21 = FUN_0045c1e0(10);
        uVar21 = -(uVar21 & 0xffff);
      }
      else {
        uVar21 = FUN_0045c1e0(10);
        uVar21 = uVar21 & 0xffff;
      }
      iVar14 = uVar21 + 0x19;
      for (iVar26 = 0;
          ((cVar7 = *(char *)((int)&DAT_005722e8 + iVar14 * 0x32 + iVar26), cVar7 == '\x11' ||
           (cVar7 == '\x14')) && (iVar26 < 0x30)); iVar26 = iVar26 + 1) {
      }
      iVar16 = FUN_0040e000(iVar14,iVar26,4,0);
      sVar11 = FUN_0045c1e0(2);
      (&DAT_0058bcc0)[iVar16 * 4] = (-(uint)(sVar11 != 0) & 0xfffffffa) + 0xd;
      iVar19 = iVar19 + 1;
      (&DAT_005a4998)[iVar26 + iVar14 * 0x33] = (&DAT_005a4998)[iVar26 + iVar14 * 0x33] + '\x02';
    } while (iVar19 < 2);
    goto LAB_00471f89;
  case 9:
    uVar24 = 6;
    break;
  case 0xb:
    uVar24 = 0xe;
    break;
  case 0xe:
    uVar24 = 8;
  }
  iVar14 = FUN_0040bf60(iVar14,uVar25 + 0x14);
  if (iVar14 == 0) {
    FUN_0040e000(uVar21 + 0xe,uVar25 + 0x13,uVar24,0);
    puVar3 = (ushort *)((int)&DAT_0053caf4 + iVar16 * 2);
    *puVar3 = *puVar3 | 0x20;
    puVar3 = (ushort *)((int)&DAT_0053caf4 + iVar16 * 2 + 2);
    *puVar3 = *puVar3 | 0x20;
    *(ushort *)(&DAT_0053caf8 + iVar16 * 2) = *(ushort *)(&DAT_0053caf8 + iVar16 * 2) | 0x20;
  }
  else {
    FUN_0040e000(uVar21 + 0xe,uVar25 + 10,uVar24,0);
    *(ushort *)(&DAT_0053caee + iVar16 * 2) = *(ushort *)(&DAT_0053caee + iVar16 * 2) | 0x20;
    *(ushort *)(&DAT_0053caec + iVar16 * 2) = *(ushort *)(&DAT_0053caec + iVar16 * 2) | 0x20;
    *(ushort *)(&DAT_0053caea + iVar16 * 2) = *(ushort *)(&DAT_0053caea + iVar16 * 2) | 0x20;
  }
  FUN_0042f340();
  if ((iVar19 == 4) || (iVar19 == 3)) {
    do {
      uVar10 = FUN_0045c1e0(0x28);
      uVar12 = FUN_0045c1e0(0x28);
      iVar19 = FUN_0040db90(uVar10 + 5,uVar12 + 5,2,4);
    } while (iVar19 == -1);
    iVar19 = FUN_0040e000(uVar10 + 5,uVar12 + 5,4,0);
    (&DAT_0058bcc0)[iVar19 * 4] = 0xe;
  }
LAB_00471f89:
  param_1 = 0;
  if (0 < DAT_00822c88) {
    do {
      do {
        uVar10 = FUN_0045c1e0(0x27);
        iVar14 = uVar10 + 5;
        uVar10 = FUN_0045c1e0(0x27);
        iVar26 = uVar10 + 5;
        iVar19 = iVar26 + iVar14 * 0x32;
      } while (*(char *)(iVar19 + 0x5722e8) != local_30);
      iVar16 = FUN_0040e000(iVar14,iVar26,4,0);
      switch(DAT_005a34e0) {
      case '\0':
        (&DAT_0058bcc0)[iVar16 * 4] = 0x10;
        break;
      case '\x01':
        (&DAT_0058bcc0)[iVar16 * 4] = 0x12;
        break;
      case '\x02':
        (&DAT_0058bcc0)[iVar16 * 4] = 0x11;
        break;
      case '\x03':
        (&DAT_0058bcc0)[iVar16 * 4] = 0x11;
      }
      uVar9 = FUN_0045c1e0(4);
      (&DAT_0053caf0)[iVar19] = (&DAT_0053caf0)[iVar19] | 0x8000;
      cVar7 = DAT_005a34e0;
      iVar19 = 0;
      (&DAT_0058bcbe)[iVar16 * 0x10] = uVar9;
      do {
        if (cVar7 == '\x01') {
          *(undefined1 *)
           (iVar26 + *(int *)((int)&DAT_004c2898 + iVar19) +
                     (*(int *)((int)&DAT_004c2878 + iVar19) + iVar14) * 0x32 + 0x5722e8) = 0xb;
        }
        iVar19 = iVar19 + 4;
      } while (iVar19 < 0x20);
      param_1 = param_1 + 1;
    } while ((int)param_1 < DAT_00822c88);
  }
  iVar19 = FUN_00402970(0xfffffffa);
  uVar9 = DAT_00578154;
  (&DAT_00585860)[iVar19 * 0x4c] = DAT_00578150;
  (&DAT_00585861)[iVar19 * 0x4c] = uVar9;
  iVar14 = 0x19;
  iVar19 = 0;
  do {
    iVar26 = iVar19;
    iVar19 = iVar26 + 1;
    iVar14 = iVar14 + -1;
  } while ((int)((uint)(byte)(&DAT_00571ff5)[iVar13] * 10) < iVar14 * iVar14 * 4);
  cVar7 = (&DAT_00571ff7)[iVar13];
  puVar22 = &DAT_005722e8;
  puVar29 = &DAT_00542414;
  for (iVar14 = 0x271; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar29 = *puVar22;
    puVar22 = puVar22 + 1;
    puVar29 = puVar29 + 1;
  }
  if (cVar7 != '\x02') {
    iVar14 = 0;
    if (0 < iVar19) {
      iVar26 = 0x31;
      do {
        iVar16 = 0;
        do {
          FUN_00470a10(iVar14,iVar16);
          if ((&DAT_00571ff7)[iVar13] == '\0') {
            FUN_00470a10(iVar16,iVar14);
          }
          FUN_00470a10(iVar16,iVar26);
          FUN_00470a10(iVar26,iVar16);
          iVar16 = iVar16 + 1;
        } while (iVar16 < 0x32);
        iVar14 = iVar14 + 1;
        iVar26 = iVar26 + -1;
      } while (iVar14 < iVar19);
    }
    FUN_0042f2c0();
    FUN_0042f7a0();
    return;
  }
  iVar13 = 0;
  do {
    uVar10 = FUN_0045c1e0(3);
    uVar21 = (int)(iVar13 - 0x19U) >> 0x1f;
    iVar19 = FUN_00467130((iVar13 - 0x19U ^ uVar21) - uVar21,8,0x32);
    iVar14 = iVar19 + iVar26 + -0xb + (uint)uVar10;
    iVar19 = 0;
    if (0 < iVar14) {
      iVar16 = 0x31;
      do {
        FUN_00470a10(iVar19,iVar13);
        FUN_00470a10(iVar13,iVar19);
        FUN_00470a10(iVar13,iVar16);
        FUN_00470a10(iVar16,iVar13);
        iVar19 = iVar19 + 1;
        iVar16 = iVar16 + -1;
      } while (iVar19 < iVar14);
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 0x32);
  FUN_0042f2c0();
  FUN_0042f7a0();
  return;
}

