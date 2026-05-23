/* Ghidra decompiled: sound.dll */
/* Function: FUN_10037760 @ 0x10037760 */
/* Body size: 51 addresses */


void __thiscall FUN_10037760(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x110;
  bVar1 = *(byte *)(iVar2 + 0x2d4 + (int)this);
  *(byte *)((int)this + iVar2 + 0x2d4) = bVar1 | 4;
  *(byte *)((int)this + iVar2 + 0x2d4) = bVar1 & 0xfd | 4;
  return;
}

