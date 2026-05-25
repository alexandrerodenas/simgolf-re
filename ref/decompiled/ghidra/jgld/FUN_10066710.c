/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10066710 @ 0x10066710 */


void __thiscall FUN_10066710(void *this,RECT *param_1)

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
  InvalidateRect(*(HWND *)((int)this + 0x144),param_1,0);
  __chkesp();
  local_8 = (void *)0x10066759;
  __chkesp();
  return;
}

