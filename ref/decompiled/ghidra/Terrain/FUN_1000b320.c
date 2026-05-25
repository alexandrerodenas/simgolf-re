/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000b320 @ 0x1000B320 */


void __thiscall FUN_1000b320(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined4 local_c;
  void *local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = *(undefined4 *)this;
  local_8 = this;
  thunk_FUN_1000b7a0(this);
  *param_1 = local_c;
  local_8 = (void *)0x1000b365;
  __chkesp();
  return;
}

