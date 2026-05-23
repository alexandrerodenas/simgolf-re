/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10005c70 @ 0x10005C70 */
/* Body size: 121 addresses */


void __thiscall FUN_10005c70(void *this,undefined4 *param_1)

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
  if ((*(uint *)((int)this + 0x20) & 2) == 0) {
    *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) | 2;
    *(undefined4 *)((int)this + 0x14) = *param_1;
    *(undefined4 *)((int)this + 0x18) = param_1[1];
    *(undefined4 *)((int)this + 0x1c) = param_1[2];
  }
  else {
    local_8 = this;
    thunk_FUN_100038b0((void *)((int)this + 0x14),(int)param_1);
  }
  local_8 = (void *)0x10005ce3;
  __chkesp();
  return;
}

