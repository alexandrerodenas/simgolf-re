/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10006d80 @ 0x10006D80 */


void __thiscall FUN_10006d80(void *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  thunk_FUN_10006cf0(this);
  if ((param_1 & 1) != 0) {
    FUN_1007e6d0(local_8);
  }
  local_8 = (void *)0x10006dcb;
  __chkesp();
  return;
}

