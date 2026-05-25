/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007610 @ 0x30007610 */


void __cdecl FUN_30007610(int param_1)

{
  if (*(HWAVEOUT *)(param_1 + 100) != (HWAVEOUT)0x0) {
    waveOutRestart(*(HWAVEOUT *)(param_1 + 100));
  }
  return;
}

