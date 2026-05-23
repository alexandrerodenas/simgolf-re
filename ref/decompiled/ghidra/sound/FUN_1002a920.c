/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002a920 @ 0x1002A920 */
/* Body size: 54 addresses */


void __fastcall FUN_1002a920(byte *param_1)

{
  HANDLE hThread;
  
  ResetEvent(*(HANDLE *)(param_1 + 0x24));
  if ((*param_1 & 1) == 0) {
    *param_1 = *param_1 | 1;
    hThread = FUN_10042984(0x10001366,0,0);
    *(HANDLE *)(param_1 + 0x20) = hThread;
    SetThreadPriority(hThread,0);
  }
  return;
}

