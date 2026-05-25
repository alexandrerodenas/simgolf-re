/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000b960 @ 0x1000B960 */


void __thiscall FUN_1000b960(void *this,void *param_1)

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
  FUN_10018be0(this,param_1);
  local_8 = (void *)0x1000b996;
  __chkesp();
  return;
}

