/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10066650 @ 0x10066650 */


void __thiscall FUN_10066650(void *this,LPRECT param_1)

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
  GetWindowRect(*(HWND *)((int)this + 0x144),param_1);
  __chkesp();
  local_8 = (void *)0x10066697;
  __chkesp();
  return;
}

