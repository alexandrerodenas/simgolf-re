/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10003230 @ 0x10003230 */


void __thiscall FUN_10003230(void *this,float *param_1)

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
  thunk_FUN_10004750(this,param_1);
  local_8 = (void *)0x10003272;
  __chkesp();
  return;
}

