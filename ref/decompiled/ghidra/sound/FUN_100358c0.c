/* Ghidra decompiled: sound.dll */
/* Function: FUN_100358c0 @ 0x100358C0 */


uint __thiscall FUN_100358c0(void *this,int param_1)

{
  ushort *puVar1;
  uint uVar2;
  
  if ((*(byte *)((int)this + 0x58) & 2) == 0) {
    return 0x14;
  }
  puVar1 = *(ushort **)(*(int *)((int)this + 8) + 0x1c);
  if (*(short *)((int)this + 0x18e) == 8) {
    if ((*(short *)((int)this + 0x182) == 1) || (param_1 == 1)) {
      uVar2 = (uint)(byte)*puVar1 << 4;
    }
    else {
      uVar2 = (uint)*(byte *)((int)puVar1 + 1) * 0x100 - 0x8000;
    }
  }
  else if ((*(short *)((int)this + 0x182) == 1) || (param_1 == 1)) {
    uVar2 = (uint)*puVar1;
  }
  else {
    uVar2 = (uint)puVar1[1];
  }
  return uVar2;
}

