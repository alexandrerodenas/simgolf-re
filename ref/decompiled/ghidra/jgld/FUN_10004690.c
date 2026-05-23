/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10004690 @ 0x10004690 */
/* Body size: 72 addresses */


void __thiscall FUN_10004690(void *this,float *param_1,undefined4 *param_2)

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
  thunk_FUN_10004750(this,param_1);
  thunk_FUN_100046f0(local_8,param_2);
  local_8 = (void *)0x100046d2;
  __chkesp();
  return;
}

