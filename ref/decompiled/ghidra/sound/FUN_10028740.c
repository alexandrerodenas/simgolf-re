/* Ghidra decompiled: sound.dll */
/* Function: FUN_10028740 @ 0x10028740 */


int __fastcall FUN_10028740(int param_1)

{
  HWND pHVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  RegisterClassA((WNDCLASSA *)&DAT_10063e18);
  pHVar1 = CreateWindowExA(0,PTR_s_snd_class_10063e10,PTR_s_snd_window_10063e14,0,0,0,0,0,(HWND)0x0,
                           (HMENU)0x0,DAT_100b5024,(LPVOID)0x0);
  *(HWND *)(param_1 + 8) = pHVar1;
  return (-(uint)(pHVar1 != (HWND)0x0) & 0xffffffe9) + 0x17;
}

