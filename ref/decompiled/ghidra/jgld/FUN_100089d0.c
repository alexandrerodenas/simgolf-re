/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100089d0 @ 0x100089D0 */


void __thiscall FUN_100089d0(void *this,void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44c [16];
  RGBQUAD local_40c [256];
  void *local_c;
  int *local_8;
  
  puVar2 = local_44c;
  for (iVar1 = 0x112; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = param_1;
  if (param_1 != (void *)0x0) {
    *(void **)((int)this + 0x7c) = param_1;
    local_8 = this;
    iVar1 = thunk_FUN_1000aef0((int)param_1);
    if (local_8[0x1e] != iVar1) {
      iVar1 = thunk_FUN_1000aef0((int)local_c);
      local_8[0x1e] = iVar1;
      thunk_FUN_1006ae50(local_c,(int)local_40c);
      (**(code **)(*local_8 + 0x28))();
      iVar1 = __chkesp();
      if (iVar1 != 0) {
        SetDIBColorTable((HDC)local_8[0x12e],0,0x100,local_40c);
        __chkesp();
        (**(code **)(*local_8 + 0x2c))(1);
        __chkesp();
      }
    }
  }
  local_8 = (int *)0x10008a9f;
  __chkesp();
  return;
}

