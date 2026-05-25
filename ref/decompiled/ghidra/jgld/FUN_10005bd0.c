/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10005bd0 @ 0x10005BD0 */


void __thiscall FUN_10005bd0(void *this,float param_1,float param_2,float param_3)

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
  if ((*(uint *)((int)this + 0x20) & 2) == 0) {
    *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 2;
    thunk_FUN_100036e0((void *)((int)this + 0x14),param_1,param_2,param_3);
  }
  else {
    thunk_FUN_10004020((void *)((int)this + 0x14),param_1,param_2,param_3);
  }
  local_8 = (void *)0x10005c48;
  __chkesp();
  return;
}

