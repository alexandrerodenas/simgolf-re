/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006b1d0 @ 0x1006B1D0 */


void FUN_1006b1d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_a4 [16];
  int local_64;
  int local_60;
  tagMSG local_5c;
  tagMSG local_40;
  tagMSG local_24;
  undefined4 local_8;
  
  puVar2 = local_a4;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  for (local_60 = 0; local_60 < 3; local_60 = local_60 + 1) {
    (&local_5c)[local_60].time = 0xffffffff;
  }
  PeekMessageA(&local_5c,(HWND)0x0,0,0xff,0);
  iVar1 = __chkesp();
  if (iVar1 == 0) {
    PeekMessageA(&local_40,(HWND)0x0,0x109,0x1ff,0);
    iVar1 = __chkesp();
    if (iVar1 == 0) {
      PeekMessageA(&local_24,(HWND)0x0,0x20b,0xffff,0);
      iVar1 = __chkesp();
      if (iVar1 == 0) goto LAB_1006b32c;
    }
  }
  local_64 = 0;
  for (local_60 = 1; local_60 < 3; local_60 = local_60 + 1) {
    if ((&local_5c)[local_60].time < (&local_5c)[local_64].time) {
      local_64 = local_60;
    }
  }
  PeekMessageA(&local_5c,(&local_5c)[local_64].hwnd,(&local_5c)[local_64].message,
               (&local_5c)[local_64].message,1);
  __chkesp();
  TranslateMessage(&local_5c);
  __chkesp();
  DispatchMessageA(&local_5c);
  __chkesp();
LAB_1006b32c:
  local_8 = 0x1006b33c;
  __chkesp();
  return;
}

