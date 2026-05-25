/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034540 @ 0x10034540 */


DWORD __thiscall FUN_10034540(void *this,LONG param_1,int param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD local_c;
  
  if (param_2 == 0) {
    local_c = 0;
  }
  else if (param_2 == 1) {
    local_c = 1;
  }
  else {
    if (param_2 != 2) {
      return 0xffffffff;
    }
    local_c = 2;
  }
  iVar1 = FUN_100345d0(this);
  if (iVar1 == -1) {
    DVar2 = 0xffffffff;
  }
  else {
    DVar2 = FUN_10026520(*(uint *)((int)this + 0x4c),param_1,local_c);
    if (DVar2 == 0xffffffff) {
      DVar2 = 0xffffffff;
    }
  }
  return DVar2;
}

