/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006a1f0 @ 0x1006A1F0 */
/* Body size: 81 addresses */


void __thiscall FUN_1006a1f0(void *this,uint param_1)

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
  thunk_FUN_1006a2c0(this);
  if ((param_1 & 1) != 0) {
    FUN_1007e6d0(local_8);
  }
  local_8 = (void *)0x1006a23b;
  __chkesp();
  return;
}

