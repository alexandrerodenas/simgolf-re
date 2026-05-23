/* Ghidra decompiled: sound.dll */
/* Function: FUN_10038f10 @ 0x10038F10 */
/* Body size: 27 addresses */


undefined4 __fastcall FUN_10038f10(int param_1)

{
  waveInStop(*(HWAVEIN *)(param_1 + 0x44));
  waveInReset(*(HWAVEIN *)(param_1 + 0x44));
  return 0;
}

