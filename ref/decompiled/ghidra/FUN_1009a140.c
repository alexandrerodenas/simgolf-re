/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009a140 @ 0x1009A140 */
/* Body size: 208 addresses */


uint __cdecl FUN_1009a140(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar8;
  uint uVar9;
  uint uVar7;
  
  iVar2 = DAT_10129bb0;
  if (DAT_1012898c == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1009a18e;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_1009a18e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    DAT_10129bb0 = DAT_10129bb0 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10129ba0;
    if (bVar1) {
      LOCK();
      UNLOCK();
      DAT_10129bb0 = iVar2;
      FUN_100833f0(0x13);
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1009a1ef;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_1008e990(uVar8);
      uVar7 = FUN_1008e990(uVar7);
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1009a1ef:
    if (uVar9 == 0) {
      LOCK();
      DAT_10129bb0 = DAT_10129bb0 + -1;
      UNLOCK();
    }
    else {
      FUN_10083490(0x13);
    }
  }
  return uVar7;
}

