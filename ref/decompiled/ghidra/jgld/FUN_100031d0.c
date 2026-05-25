/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100031d0 @ 0x100031D0 */


void __thiscall FUN_100031d0(void *this,float *param_1,undefined4 *param_2)

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
  *(undefined ***)this = &PTR_LAB_1011d024;
  local_8 = this;
  thunk_FUN_10004690(this,param_1,param_2);
  local_8 = (void *)0x10003216;
  __chkesp();
  return;
}

