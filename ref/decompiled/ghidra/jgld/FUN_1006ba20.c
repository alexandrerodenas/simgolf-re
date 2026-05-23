/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006ba20 @ 0x1006BA20 */
/* Body size: 123 addresses */


void FUN_1006ba20(void)

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
  while( true ) {
    PeekMessageA(&local_24,(HWND)0x0,0x401,0x401,1);
    iVar1 = __chkesp();
    if (iVar1 == 0) break;
    TranslateMessage(&local_24);
    __chkesp();
    DispatchMessageA(&local_24);
    __chkesp();
  }
  local_8 = 0x1006ba97;
  __chkesp();
  return;
}

