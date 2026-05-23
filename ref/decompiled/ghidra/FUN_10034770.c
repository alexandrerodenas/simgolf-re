/* Ghidra decompiled: sound.dll */
/* Function: FUN_10034770 @ 0x10034770 */
/* Body size: 290 addresses */


undefined4 __thiscall FUN_10034770(void *this,int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = -1;
  if (((*(uint *)((int)this + 0x58) & 1) == 0) || ((*(uint *)((int)this + 0x58) & 0x10000000) != 0))
  {
    return 0x21;
  }
  uVar2 = 1;
  iVar3 = 0;
  do {
    if ((*(uint *)((int)this + 0x58) >> 0xc & uVar2 & 0xffff) == 0) break;
    uVar2 = uVar2 << 1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  if (iVar3 == 0x10) {
    return 6;
  }
  pbVar1 = (byte *)((int)this + iVar3 * 0x110 + 0x2d4);
  *pbVar1 = *pbVar1 & 0xf1;
  *(undefined4 *)((int)this + iVar3 * 0x110 + 0x254) =
       *(undefined4 *)((int)this + iVar3 * 0x110 + 0x250);
  *(undefined4 *)((int)this + iVar3 * 0x110 + 0x328) =
       *(undefined4 *)((int)this + iVar3 * 0x110 + 0x330);
  *(undefined4 *)((int)this + iVar3 * 0x110 + 0x2c0) = 0;
  *(undefined4 *)((int)this + iVar3 * 0x110 + 0x2c4) = 0;
  *(undefined4 *)((int)this + iVar3 * 0x110 + 0x2f8) = 0;
  *(undefined4 *)((int)this + iVar3 * 0x110 + 0x32c) =
       *(undefined4 *)((int)this + iVar3 * 0x110 + 0x334);
  *(undefined8 *)((int)this + iVar3 * 0x110 + 0x2b8) = *(undefined8 *)((int)this + 0x1f0);
  *(undefined8 *)((int)this + iVar3 * 0x110 + 0x2a8) = *(undefined8 *)((int)this + 0x200);
  *(undefined8 *)((int)this + iVar3 * 0x110 + 0x340) = *(undefined8 *)((int)this + 5000);
  *(undefined8 *)((int)this + iVar3 * 0x110 + 0x290) = *(undefined8 *)((int)this + 0x1e0);
  *(undefined4 *)((int)this + iVar3 * 0x110 + 0x2fc) = *(undefined4 *)((int)this + 0x22c);
  *(undefined4 *)((int)this + iVar3 * 0x110 + 0x2f8) = 0;
  *(int *)((int)this + iVar3 * 0x110 + 0x300) = (int)this + 0x230;
  pbVar1 = (byte *)((int)this + iVar3 * 0x110 + 0x2d4);
  *pbVar1 = *pbVar1 & 0xfb;
  pbVar1 = (byte *)((int)this + iVar3 * 0x110 + 0x2cc);
  *pbVar1 = *pbVar1 | 1;
  *(uint *)((int)this + 0x58) = (uVar2 & 0xffff) << 0xc | *(uint *)((int)this + 0x58) & 0xffffffef;
  *param_1 = iVar3;
  return 0;
}

