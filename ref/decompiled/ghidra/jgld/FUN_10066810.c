/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10066810 @ 0x10066810 */
/* Body size: 93 addresses */


void __thiscall FUN_10066810(void *this,int param_1,int param_2,int param_3,int param_4)

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
  SetWindowPos(*(HWND *)((int)this + 0x144),(HWND)0x0,param_1,param_2,param_3,param_4,0);
  __chkesp();
  local_8 = (void *)0x10066867;
  __chkesp();
  return;
}

