/* Ghidra decompiled: sound.dll */
/* Function: FUN_10038b40 @ 0x10038B40 */
/* Body size: 171 addresses */


undefined4 __fastcall FUN_10038b40(int param_1)

{
  int iVar1;
  LPWAVEHDR pwh;
  MMRESULT MVar2;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 100) = iVar1;
  if ((iVar1 == 0) || (pwh = *(LPWAVEHDR *)(iVar1 + 8), pwh == (LPWAVEHDR)0x0)) {
    return 0x13;
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    return 0x13;
  }
  do {
    MVar2 = waveInPrepareHeader(*(HWAVEIN *)(param_1 + 0x44),pwh,0x20);
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
    if (*(int *)(param_1 + 100) == 0) {
      return 0;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 100) + 4);
    *(int *)(param_1 + 100) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
    pwh = *(LPWAVEHDR *)(iVar1 + 8);
  } while (pwh != (LPWAVEHDR)0x0);
  return 0;
}

