/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100699c0 @ 0x100699C0 */
/* Body size: 138 addresses */


void __cdecl FUN_100699c0(HWND param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  HDC local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  GetDC(param_1);
  local_8 = (HDC)__chkesp();
  SelectPalette(local_8,DAT_10128738,0);
  __chkesp();
  RealizePalette(local_8);
  __chkesp();
  ReleaseDC(param_1,local_8);
  __chkesp();
  local_8 = (HDC)0x10069a46;
  __chkesp();
  return;
}

