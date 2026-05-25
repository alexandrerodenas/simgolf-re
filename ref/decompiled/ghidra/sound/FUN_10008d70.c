/* Ghidra decompiled: sound.dll */
/* Function: FUN_10008d70 @ 0x10008D70 */


undefined4 __fastcall FUN_10008d70(int param_1)

{
  if ((*(byte *)(param_1 + 0x3c) & 1) == 0) {
    return 0x15;
  }
  DAT_100b49a8 = DAT_100b49a8 + 1;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffb;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  timeKillEvent(*(UINT *)(param_1 + 0x40));
  timeEndPeriod(*(UINT *)(param_1 + 0x18));
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
  return 0;
}

