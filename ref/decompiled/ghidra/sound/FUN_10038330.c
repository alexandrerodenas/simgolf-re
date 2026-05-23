/* Ghidra decompiled: sound.dll */
/* Function: FUN_10038330 @ 0x10038330 */
/* Body size: 82 addresses */


int __thiscall FUN_10038330(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  uVar1 = *(uint *)((int)this + 0x58) >> 0xc & 0xffff;
  iVar2 = 0;
  pbVar3 = (byte *)((int)this + 0x2d4);
  while ((((uVar1 & 1) == 0 || (*(int *)(pbVar3 + 0x48) != param_1)) || ((*pbVar3 & 8) != 0))) {
    uVar1 = uVar1 >> 1;
    iVar2 = iVar2 + 1;
    pbVar3 = pbVar3 + 0x110;
    if (0xf < iVar2) {
      return 0;
    }
  }
  return iVar2 * 0x110 + 0x238 + (int)this;
}

