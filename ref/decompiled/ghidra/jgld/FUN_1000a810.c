/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1000a810 @ 0x1000A810 */
/* Body size: 76 addresses */


void __thiscall FUN_1000a810(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [14];
  undefined4 uStack_10;
  void *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 0xc))(param_1,param_2);
  __chkesp();
  uStack_10 = 0x1000a856;
  __chkesp();
  return;
}

