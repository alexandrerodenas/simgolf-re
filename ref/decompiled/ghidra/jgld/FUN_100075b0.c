/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100075b0 @ 0x100075B0 */


void __thiscall FUN_100075b0(void *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  double local_14;
  uint local_c;
  void *local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = param_1 & 0xffff;
  local_14 = (double)local_c;
  local_8 = this;
  thunk_FUN_10007530(this);
  __ftol();
  local_8 = (void *)0x100075fb;
  __chkesp();
  return;
}

