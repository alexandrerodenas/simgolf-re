/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10005530 @ 0x10005530 */


void __thiscall FUN_10005530(void *this,undefined4 *param_1)

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
  *(undefined4 *)((int)this + 0x20) = 0x1c;
  *(undefined4 *)((int)this + 4) = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[1];
  *(undefined4 *)((int)this + 0xc) = param_1[2];
  *(undefined4 *)((int)this + 0x10) = param_1[3];
  local_8 = this;
  thunk_FUN_100036e0((void *)((int)this + 0x14),0,0,0);
  local_8 = (void *)0x10005594;
  __chkesp();
  return;
}

