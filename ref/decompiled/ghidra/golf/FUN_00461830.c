/* Ghidra decompiled: golf.exe */
/* Function: FUN_00461830 @ 0x00461830 */
/* Body size: 2020 addresses */


undefined4 FUN_00461830(void)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_8;
  
  local_18 = 0;
  local_10 = 0;
  do {
    uVar10 = 0;
    uVar13 = 0;
    bVar3 = (byte)(local_10 >> 8);
    local_14 = 0;
    local_8 = 0;
    uVar11 = 0;
    while( true ) {
      do {
        iVar6 = (**(code **)(*DAT_0083ad50 + 0xb4))();
        if (iVar6 == 1) {
          uVar12 = (((local_18 & 0xff) >> 3) << 6 | (uVar10 & 0xff) >> 2) << 5 |
                   (uVar13 & 0xff) >> 3;
        }
        else {
          uVar12 = (((local_18 & 0xff) >> 3) << 5 | (uVar10 & 0xff) >> 3) << 5 |
                   (uVar13 & 0xff) >> 3;
        }
        uVar1 = uVar11 >> 8;
        iVar6 = (**(code **)(*DAT_0083ad50 + 0xb4))();
        if (iVar6 == 1) {
          uVar7 = (uint)(bVar3 >> 3) << 6;
          uVar9 = local_8 >> 2;
        }
        else {
          uVar7 = (uint)(bVar3 >> 3) << 5;
          uVar9 = local_8 >> 3;
        }
        uVar13 = uVar13 + 8;
        uVar11 = uVar11 + 0x400;
        *(ushort *)(DAT_00824148 + uVar12 * 2) =
             (ushort)((uVar7 | uVar9) << 5) | (ushort)((uVar1 & 0xff) >> 3);
      } while ((ushort)uVar13 < 0x100);
      uVar10 = uVar10 + 8;
      local_14 = local_14 + 0x400;
      if (0xff < (ushort)uVar10) break;
      uVar13 = 0;
      local_8 = local_14 >> 8 & 0xff;
      uVar11 = 0;
    }
    local_18 = local_18 + 8;
    local_10 = local_10 + 0x400;
  } while ((ushort)local_18 < 0x100);
  local_18 = 0;
  local_14 = 0;
  do {
    uVar10 = 0;
    uVar13 = 0;
    bVar3 = (byte)(local_14 >> 8);
    local_10 = 0;
    local_8 = 0;
    uVar11 = 0;
    while( true ) {
      do {
        iVar6 = (**(code **)(*DAT_0083ad50 + 0xb4))();
        if (iVar6 == 1) {
          uVar12 = (((local_18 & 0xff) >> 3) << 6 | (uVar10 & 0xff) >> 2) << 5 |
                   (uVar13 & 0xff) >> 3;
        }
        else {
          uVar12 = (((local_18 & 0xff) >> 3) << 5 | (uVar10 & 0xff) >> 3) << 5 |
                   (uVar13 & 0xff) >> 3;
        }
        uVar1 = uVar11 >> 8;
        iVar6 = (**(code **)(*DAT_0083ad50 + 0xb4))();
        if (iVar6 == 1) {
          uVar7 = (uint)(bVar3 >> 3) << 6;
          uVar9 = local_8 >> 2;
        }
        else {
          uVar7 = (uint)(bVar3 >> 3) << 5;
          uVar9 = local_8 >> 3;
        }
        uVar13 = uVar13 + 8;
        uVar11 = uVar11 + 0x500;
        *(ushort *)(DAT_00824148 + 0x10000 + uVar12 * 2) =
             (ushort)((uVar7 | uVar9) << 5) | (ushort)((uVar1 & 0xff) >> 3);
      } while ((ushort)uVar13 < 0x100);
      uVar10 = uVar10 + 8;
      local_10 = local_10 + 0x500;
      if (0xff < (ushort)uVar10) break;
      uVar13 = 0;
      local_8 = local_10 >> 8 & 0xff;
      uVar11 = 0;
    }
    local_18 = local_18 + 8;
    local_14 = local_14 + 0x500;
  } while ((ushort)local_18 < 0x100);
  local_18 = 0;
  local_14 = 0;
  do {
    uVar10 = 0;
    uVar13 = 0;
    bVar3 = (byte)(local_14 >> 8);
    local_10 = 0;
    local_8 = 0;
    uVar11 = 0;
    while( true ) {
      do {
        iVar6 = (**(code **)(*DAT_0083ad50 + 0xb4))();
        if (iVar6 == 1) {
          uVar12 = (((local_18 & 0xff) >> 3) << 6 | (uVar10 & 0xff) >> 2) << 5 |
                   (uVar13 & 0xff) >> 3;
        }
        else {
          uVar12 = (((local_18 & 0xff) >> 3) << 5 | (uVar10 & 0xff) >> 3) << 5 |
                   (uVar13 & 0xff) >> 3;
        }
        uVar1 = uVar11 >> 8;
        iVar6 = (**(code **)(*DAT_0083ad50 + 0xb4))();
        if (iVar6 == 1) {
          uVar7 = (uint)(bVar3 >> 3) << 6;
          uVar9 = local_8 >> 2;
        }
        else {
          uVar7 = (uint)(bVar3 >> 3) << 5;
          uVar9 = local_8 >> 3;
        }
        uVar13 = uVar13 + 8;
        uVar11 = uVar11 + 0x600;
        *(ushort *)(DAT_00824148 + 0x20000 + uVar12 * 2) =
             (ushort)((uVar7 | uVar9) << 5) | (ushort)((uVar1 & 0xff) >> 3);
      } while ((ushort)uVar13 < 0x100);
      uVar10 = uVar10 + 8;
      local_10 = local_10 + 0x600;
      if (0xff < (ushort)uVar10) break;
      uVar13 = 0;
      local_8 = local_10 >> 8 & 0xff;
      uVar11 = 0;
    }
    local_18 = local_18 + 8;
    local_14 = local_14 + 0x600;
  } while ((ushort)local_18 < 0x100);
  local_18 = 0;
  local_14 = 0;
  do {
    uVar10 = 0;
    uVar13 = 0;
    bVar3 = (byte)(local_14 >> 8);
    local_10 = 0;
    local_8 = 0;
    uVar11 = 0;
    while( true ) {
      do {
        iVar6 = (**(code **)(*DAT_0083ad50 + 0xb4))();
        if (iVar6 == 1) {
          uVar12 = (((local_18 & 0xff) >> 3) << 6 | (uVar10 & 0xff) >> 2) << 5 |
                   (uVar13 & 0xff) >> 3;
        }
        else {
          uVar12 = (((local_18 & 0xff) >> 3) << 5 | (uVar10 & 0xff) >> 3) << 5 |
                   (uVar13 & 0xff) >> 3;
        }
        uVar1 = uVar11 >> 8;
        iVar6 = (**(code **)(*DAT_0083ad50 + 0xb4))();
        if (iVar6 == 1) {
          uVar7 = (uint)(bVar3 >> 3) << 6;
          uVar9 = local_8 >> 2;
        }
        else {
          uVar7 = (uint)(bVar3 >> 3) << 5;
          uVar9 = local_8 >> 3;
        }
        uVar13 = uVar13 + 8;
        uVar11 = uVar11 + 0x700;
        *(ushort *)(DAT_00824148 + 0x30000 + uVar12 * 2) =
             (ushort)((uVar7 | uVar9) << 5) | (ushort)((uVar1 & 0xff) >> 3);
      } while ((ushort)uVar13 < 0x100);
      uVar10 = uVar10 + 8;
      local_10 = local_10 + 0x700;
      if (0xff < (ushort)uVar10) break;
      uVar13 = 0;
      local_8 = local_10 >> 8 & 0xff;
      uVar11 = 0;
    }
    local_18 = local_18 + 8;
    local_14 = local_14 + 0x700;
  } while ((ushort)local_18 < 0x100);
  uVar10 = 0;
  uVar11 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  iVar6 = 0;
  while( true ) {
    while( true ) {
      do {
        iVar8 = (**(code **)(*DAT_0083ad50 + 0xb4))();
        if (iVar8 == 1) {
          uVar13 = (((local_18 & 0xff) >> 3) << 6 | (uVar10 & 0xff) >> 2) << 5 |
                   (uVar11 & 0xff) >> 3;
        }
        else {
          uVar13 = (((local_18 & 0xff) >> 3) << 5 | (uVar10 & 0xff) >> 3) << 5 |
                   (uVar11 & 0xff) >> 3;
        }
        bVar2 = FUN_00461810(iVar6);
        bVar3 = FUN_00461810(local_10);
        bVar4 = FUN_00461810(local_14);
        iVar8 = (**(code **)(*DAT_0083ad50 + 0xb4))();
        if (iVar8 == 1) {
          uVar5 = (ushort)(bVar4 >> 3) << 6;
          bVar3 = bVar3 >> 2;
        }
        else {
          uVar5 = (ushort)(bVar4 >> 3) << 5;
          bVar3 = bVar3 >> 3;
        }
        uVar11 = uVar11 + 8;
        iVar6 = iVar6 + 8;
        *(ushort *)(DAT_00824148 + 0x40000 + uVar13 * 2) =
             (uVar5 | bVar3) << 5 | (ushort)(bVar2 >> 3);
      } while ((ushort)uVar11 < 0x100);
      uVar10 = uVar10 + 8;
      local_10 = local_10 + 8;
      if (0xff < (ushort)uVar10) break;
      uVar11 = 0;
      iVar6 = 0;
    }
    local_18 = local_18 + 8;
    local_14 = local_14 + 8;
    if (0xff < (ushort)local_18) break;
    uVar10 = 0;
    uVar11 = 0;
    local_10 = 0;
    iVar6 = 0;
  }
  return 0;
}

