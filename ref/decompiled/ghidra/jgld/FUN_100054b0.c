/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100054b0 @ 0x100054B0 */
/* Body size: 94 addresses */


void __thiscall FUN_100054b0(void *this,undefined4 *param_1)

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
  *(undefined4 *)((int)this + 0x20) = 2;
  local_8 = this;
  thunk_FUN_10003170((void *)((int)this + 4));
  *(undefined4 *)((int)local_8 + 0x14) = *param_1;
  *(undefined4 *)((int)local_8 + 0x18) = param_1[1];
  *(undefined4 *)((int)local_8 + 0x1c) = param_1[2];
  local_8 = (void *)0x10005508;
  __chkesp();
  return;
}

