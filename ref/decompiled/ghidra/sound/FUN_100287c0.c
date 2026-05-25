/* Ghidra decompiled: sound.dll */
/* Function: FUN_100287c0 @ 0x100287C0 */


undefined4 __fastcall FUN_100287c0(int param_1)

{
  if ((*(HWND *)(param_1 + 8) != (HWND)0x0) && ((*(byte *)(param_1 + 4) & 4) != 0)) {
    SetWindowLongA(*(HWND *)(param_1 + 8),-4,*(LONG *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfb;
  }
  return 0;
}

