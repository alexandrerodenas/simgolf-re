/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10006270 @ 0x10006270 */


void __thiscall FUN_10006270(void *this,float param_1)

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
  if ((*(uint *)((int)this + 0x20) & 2) != 0) {
    local_8 = this;
    thunk_FUN_10003f10((void *)((int)this + 0x14),param_1);
  }
  local_8 = (void *)0x100062b9;
  __chkesp();
  return;
}

