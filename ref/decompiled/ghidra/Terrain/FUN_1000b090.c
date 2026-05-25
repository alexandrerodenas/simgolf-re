/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000b090 @ 0x1000B090 */


void __thiscall FUN_1000b090(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_50 [16];
  undefined4 local_10;
  undefined4 local_c;
  void *local_8;
  
  puVar1 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  local_8 = this;
  puVar1 = (undefined4 *)thunk_FUN_1000afe0(this,&local_c);
  thunk_FUN_1000b100(&local_10,*puVar1,param_1);
  local_8 = (void *)0x1000b0d9;
  __chkesp();
  return;
}

