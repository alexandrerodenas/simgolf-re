/* Ghidra decompiled: sound.dll */
/* Function: FUN_10010eb0 @ 0x10010EB0 */
/* Body size: 82 addresses */


undefined4 __thiscall FUN_10010eb0(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)(*(int *)((int)this + 0xac) * param_1) / 1000;
  iVar3 = *(ushort *)((int)this + 0xb4) * uVar2;
  uVar1 = iVar3 * param_2;
  if (*(uint *)((int)this + 0x78) <= uVar1 && uVar1 - *(uint *)((int)this + 0x78) != 0) {
    return 10;
  }
  *(uint *)((int)this + 0x38) = uVar1;
  *(int *)((int)this + 0x40) = iVar3;
  *(uint *)((int)this + 0x3c) = uVar1 - iVar3 >> 1;
  *(uint *)((int)this + 0x34) = uVar2;
  return 0;
}

