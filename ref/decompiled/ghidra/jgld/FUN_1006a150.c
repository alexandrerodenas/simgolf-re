/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006a150 @ 0x1006A150 */


void __thiscall FUN_1006a150(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  thunk_FUN_1006a260(this);
  *local_8 = &PTR_LAB_1011db10;
  local_8[0x203] = param_1;
  local_8[2] = 0;
  local_8[0x204] = 0;
  local_8[0x205] = 0;
  local_8 = (undefined4 *)0x1006a1be;
  __chkesp();
  return;
}

