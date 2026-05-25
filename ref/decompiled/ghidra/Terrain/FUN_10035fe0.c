/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10035fe0 @ 0x10035FE0 */


void * __thiscall FUN_10035fe0(void *this,int param_1,int param_2)

{
  LPCRITICAL_SECTION p_Var1;
  
  *(undefined ***)this = &PTR_FUN_10061354;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(int *)((int)this + 0x10) = param_1;
  *(int *)((int)this + 0x14) = param_1 + param_2;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  if ((param_1 == 0) || (param_2 == 0)) {
    *(undefined4 *)((int)this + 8) = 1;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  p_Var1 = (LPCRITICAL_SECTION)FUN_100340c0((int)this);
  FUN_10034a50(p_Var1);
  return this;
}

