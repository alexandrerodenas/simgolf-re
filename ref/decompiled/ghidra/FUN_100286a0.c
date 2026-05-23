/* Ghidra decompiled: sound.dll */
/* Function: FUN_100286a0 @ 0x100286A0 */
/* Body size: 59 addresses */


void __fastcall FUN_100286a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1005b8ac;
  if (((HWND)param_1[2] != (HWND)0x0) && ((*(byte *)(param_1 + 1) & 4) != 0)) {
    SetWindowLongA((HWND)param_1[2],-4,param_1[3]);
    param_1[3] = 0;
    param_1[2] = 0;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfb;
  }
  return;
}

