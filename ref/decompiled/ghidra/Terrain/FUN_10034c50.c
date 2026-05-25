/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034c50 @ 0x10034C50 */


void * __thiscall FUN_10034c50(void *this,int param_1)

{
  LPCRITICAL_SECTION p_Var1;
  int iVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR_FUN_1006131c;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  FUN_10034e30(this,param_1);
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

