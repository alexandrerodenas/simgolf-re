/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100083c0 @ 0x100083C0 */
/* Body size: 365 addresses */


void __thiscall FUN_100083c0(void *this,LONG *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_5c [16];
  HDC local_1c;
  RECT local_18;
  int *local_8;
  
  puVar2 = local_5c;
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 != (LONG *)0x0) {
    local_18.left = *param_1;
    local_18.top = param_1[1];
    local_18.right = param_1[2];
    local_18.bottom = param_1[3];
    local_8 = this;
    iVar1 = thunk_FUN_10008590((LPRECT)((int)this + 0x44),(RECT *)((int)this + 0x54),&local_18);
    if (iVar1 != 0) {
      (**(code **)(*local_8 + 0x28))();
      local_1c = (HDC)__chkesp();
      if (local_1c != (HDC)0x0) {
        if (local_8[299] != 0) {
          DeleteObject((HGDIOBJ)local_8[299]);
          __chkesp();
          local_8[299] = 0;
        }
        iVar1 = thunk_FUN_100085f0((RECT *)(local_8 + 0x11),(RECT *)(local_8 + 0x15));
        if (iVar1 == 0) {
          CreateRectRgnIndirect((RECT *)(local_8 + 0x11));
          iVar1 = __chkesp();
          local_8[299] = iVar1;
          if (local_8[299] == 0) goto LAB_1000851a;
          SelectClipRgn(local_1c,(HRGN)local_8[299]);
          __chkesp();
        }
        else {
          SelectClipRgn(local_1c,(HRGN)0x0);
          __chkesp();
        }
      }
      (**(code **)(*local_8 + 0x2c))(1);
      __chkesp();
    }
  }
LAB_1000851a:
  local_8 = (int *)0x10008527;
  __chkesp();
  return;
}

