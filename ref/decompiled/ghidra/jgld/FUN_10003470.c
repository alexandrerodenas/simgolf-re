/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10003470 @ 0x10003470 */
/* Body size: 83 addresses */


void __thiscall FUN_10003470(void *this,undefined4 *param_1)

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
  thunk_FUN_10003050((void *)((int)this + 4));
  *local_8 = &PTR_LAB_1011d028;
  thunk_FUN_100054b0(local_8,param_1);
  local_8 = (undefined4 *)0x100034bd;
  __chkesp();
  return;
}

