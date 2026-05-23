/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034b80 @ 0x10034B80 */
/* Body size: 197 addresses */


undefined4 * __thiscall FUN_10034b80(void *this,undefined4 param_1)

{
  LPCRITICAL_SECTION p_Var1;
  int iVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR_FUN_1006131c;
  *(undefined4 *)((int)this + 4) = param_1;
  *(uint *)((int)this + 8) = (-(uint)(*(int *)((int)this + 4) != 0) & 0xfffffffc) + 4;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 6;
  *(undefined1 *)((int)this + 0x2c) = 0x20;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  p_Var1 = (LPCRITICAL_SECTION)thunk_FUN_10003f80((int)this);
  FUN_10034a50(p_Var1);
  iVar2 = DAT_10110b48 + 1;
  bVar3 = DAT_10110b48 == 0;
  DAT_10110b48 = iVar2;
  if (bVar3) {
    FUN_10034a50((LPCRITICAL_SECTION)&DAT_10110b10);
  }
  return this;
}

