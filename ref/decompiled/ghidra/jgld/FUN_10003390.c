/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10003390 @ 0x10003390 */


void __thiscall FUN_10003390(void *this,undefined4 *param_1,undefined4 *param_2)

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
  thunk_FUN_100055c0(local_8,param_1,param_2);
  local_8 = (undefined4 *)0x100033e1;
  __chkesp();
  return;
}

