/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ad4b0 @ 0x004AD4B0 */
/* Body size: 208 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_004ad4b0(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  
  iVar2 = _DAT_0084100c;
  if (DAT_00840b44 == 0) {
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) {
          return '\0';
        }
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
  }
  else {
    LOCK();
    _DAT_0084100c = _DAT_0084100c + 1;
    UNLOCK();
    bVar1 = 0 < DAT_00841008;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_0084100c = iVar2;
      FUN_004a79b2(0x13);
    }
    uVar7 = (uint)bVar1;
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_004ad55f;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      bVar4 = FUN_004a7241(bVar4,bVar5);
      bVar5 = FUN_004a7241();
    } while (bVar4 == bVar5);
    cVar6 = (bVar4 < bVar5) * -2 + '\x01';
LAB_004ad55f:
    if (uVar7 == 0) {
      LOCK();
      _DAT_0084100c = _DAT_0084100c + -1;
      UNLOCK();
    }
    else {
      FUN_004a7a13(0x13);
    }
  }
  return cVar6;
}

