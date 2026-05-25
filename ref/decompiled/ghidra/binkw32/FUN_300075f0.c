/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300075f0 @ 0x300075F0 */


void __cdecl FUN_300075f0(int param_1)

{
  if (*(HWAVEOUT *)(param_1 + 100) != (HWAVEOUT)0x0) {
    waveOutPause(*(HWAVEOUT *)(param_1 + 100));
  }
  return;
}

