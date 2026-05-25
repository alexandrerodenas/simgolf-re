/* Ghidra decompiled: sound.dll */
/* Function: FUN_10039140 @ 0x10039140 */


undefined4 __fastcall FUN_10039140(int param_1)

{
  int iVar1;
  LPWAVEHDR pwh;
  MMRESULT MVar2;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    return 0x13;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_100b503c);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffd;
  waveInStop(*(HWAVEIN *)(param_1 + 0x44));
  waveInReset(*(HWAVEIN *)(param_1 + 0x44));
  iVar1 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 100) = iVar1;
  if (((iVar1 != 0) && (pwh = *(LPWAVEHDR *)(iVar1 + 8), pwh != (LPWAVEHDR)0x0)) &&
     (*(int *)(param_1 + 0x44) != 0)) {
    while ((MVar2 = waveInUnprepareHeader(*(HWAVEIN *)(param_1 + 0x44),pwh,0x20), MVar2 == 0 &&
           (*(int *)(param_1 + 100) != 0))) {
      iVar1 = *(int *)(*(int *)(param_1 + 100) + 4);
      *(int *)(param_1 + 100) = iVar1;
      if ((iVar1 == 0) || (pwh = *(LPWAVEHDR *)(iVar1 + 8), pwh == (LPWAVEHDR)0x0)) break;
    }
  }
  MVar2 = waveInClose(*(HWAVEIN *)(param_1 + 0x44));
  if (MVar2 != 0) {
    switch(MVar2) {
    case 2:
    case 5:
      return 10;
    default:
      return 0xb;
    case 4:
      return 0xc;
    case 6:
      return 1;
    case 7:
      return 0x11;
    case 0x20:
      return 0x12;
    case 0x21:
      return 0xe;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100b503c);
  *(undefined4 *)(param_1 + 0x44) = 0;
  return 0;
}

