/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006b0f0 @ 0x1006B0F0 */
/* Body size: 170 addresses */


void FUN_1006b0f0(void)

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
  PeekMessageA(&local_24,(HWND)0x0,0,0,1);
  iVar1 = __chkesp();
  if (iVar1 != 0) {
    if (local_24.message == 0x402) {
      if (DAT_1012872c != (int *)0x0) {
        (**(code **)(*DAT_1012872c + 0x34))();
        __chkesp();
      }
    }
    else {
      TranslateMessage(&local_24);
      __chkesp();
      DispatchMessageA(&local_24);
      __chkesp();
    }
  }
  local_8 = 0x1006b196;
  __chkesp();
  return;
}

