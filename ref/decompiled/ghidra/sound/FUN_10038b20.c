/* Ghidra decompiled: sound.dll */
/* Function: FUN_10038b20 @ 0x10038B20 */


undefined4 __fastcall FUN_10038b20(int param_1)

{
  waveInStart(*(HWAVEIN *)(param_1 + 0x44));
  return 0;
}

