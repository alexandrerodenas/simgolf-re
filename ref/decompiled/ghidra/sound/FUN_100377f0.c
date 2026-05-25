/* Ghidra decompiled: sound.dll */
/* Function: FUN_100377f0 @ 0x100377F0 */


void __thiscall FUN_100377f0(void *this,byte param_1)

{
  byte *pbVar1;
  int iVar2;
  
  if ((*(uint *)((int)this + 0x58) & 1) != 0) {
    iVar2 = 0x10;
    pbVar1 = (byte *)((int)this + 0x2d4);
    do {
      iVar2 = iVar2 + -1;
      *pbVar1 = *pbVar1 & 0xfd | (param_1 & 1) << 1;
      pbVar1 = pbVar1 + 0x110;
    } while (iVar2 != 0);
    return;
  }
  *(uint *)((int)this + 0x58) = (param_1 & 1) << 7 | *(uint *)((int)this + 0x58) & 0xffffff7f;
  return;
}

