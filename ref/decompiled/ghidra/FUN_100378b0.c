/* Ghidra decompiled: sound.dll */
/* Function: FUN_100378b0 @ 0x100378B0 */
/* Body size: 65 addresses */


void __thiscall FUN_100378b0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0x10;
  *(uint *)((int)this + 0x58) = (param_1 & 1) << 2 | *(uint *)((int)this + 0x58) & 0xfffffffb;
  uVar2 = *(uint *)((int)this + 0x2d0);
  do {
    uVar2 = (uVar2 ^ param_1) & 1 ^ uVar2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(uint *)((int)this + 0x2d0) = uVar2;
  return;
}

