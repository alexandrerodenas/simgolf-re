/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10003290 @ 0x10003290 */
/* Body size: 72 addresses */


void __thiscall FUN_10003290(void *this,undefined4 *param_1)

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
  thunk_FUN_100046f0(this,param_1);
  local_8 = (void *)0x100032d2;
  __chkesp();
  return;
}

