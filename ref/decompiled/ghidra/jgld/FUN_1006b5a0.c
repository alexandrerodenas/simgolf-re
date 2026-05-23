/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006b5a0 @ 0x1006B5A0 */
/* Body size: 319 addresses */


void FUN_1006b5a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_64 [16];
  tagMSG local_24;
  undefined4 local_8;
  
  puVar2 = local_64;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  PeekMessageA(&local_24,(HWND)0x0,0x200,0x20a,1);
  iVar1 = __chkesp();
  if (iVar1 != 0) {
    TranslateMessage(&local_24);
    __chkesp();
    DispatchMessageA(&local_24);
    __chkesp();
    if (local_24.message == 0x201) {
      PeekMessageA(&local_24,local_24.hwnd,0x202,0x202,1);
      iVar1 = __chkesp();
      if (iVar1 != 0) {
        TranslateMessage(&local_24);
        __chkesp();
        DispatchMessageA(&local_24);
        __chkesp();
        goto LAB_1006b6ce;
      }
    }
    if (local_24.message == 0x204) {
      PeekMessageA(&local_24,local_24.hwnd,0x205,0x205,1);
      iVar1 = __chkesp();
      if (iVar1 != 0) {
        TranslateMessage(&local_24);
        __chkesp();
        DispatchMessageA(&local_24);
        __chkesp();
      }
    }
  }
LAB_1006b6ce:
  local_8 = 0x1006b6db;
  __chkesp();
  return;
}

