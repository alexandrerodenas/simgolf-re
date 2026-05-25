/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10066890 @ 0x10066890 */


void __thiscall FUN_10066890(void *this,DWORD param_1,DWORD param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_dc [16];
  undefined4 local_9c [10];
  DWORD local_74;
  DWORD local_30;
  DWORD local_2c;
  void *local_8;
  
  puVar2 = local_dc;
  for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  EnumDisplaySettingsA((LPCSTR)0x0,0xffffffff,(DEVMODEA *)((int)this + 0x98));
  __chkesp();
  FUN_1007f3a0(local_9c,(undefined4 *)((int)local_8 + 0x98),0x94);
  local_30 = param_1;
  local_2c = param_2;
  local_74 = 0x1c0000;
  ChangeDisplaySettingsA((DEVMODEA *)local_9c,4);
  __chkesp();
  local_8 = (void *)0x10066935;
  __chkesp();
  return;
}

