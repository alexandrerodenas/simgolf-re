/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkOpenDirectSound@4 @ 0x300076F0 */


undefined * _BinkOpenDirectSound_4(int param_1)

{
  int iVar1;
  UINT uMode;
  
                    /* 0x76f0  35  _BinkOpenDirectSound@4 */
  if (DAT_3003da40 != -1) {
    if (DAT_3003da40 == param_1) goto LAB_30007718;
    if (DAT_30041ba0 != 0) {
      return (undefined *)0x0;
    }
  }
  DAT_3003da40 = param_1;
LAB_30007718:
  if (DAT_3003da40 == 0) {
    DAT_30041b9c = 1;
    if (DAT_30041ba8 == (FARPROC)0x0) {
      if (DAT_30041ba4 == (HMODULE)0x0) {
        uMode = SetErrorMode(0x8000);
        DAT_30041ba4 = LoadLibraryA("DSOUND.DLL");
        SetErrorMode(uMode);
      }
      if ((HMODULE)0x1f < DAT_30041ba4) {
        DAT_30041ba8 = GetProcAddress(DAT_30041ba4,"DirectSoundCreate");
      }
      if (DAT_30041ba8 == (FARPROC)0x0) {
        return (undefined *)0x0;
      }
    }
  }
  else {
    DAT_30041b9c = 0;
    DAT_30041ba4 = (HMODULE)0x0;
  }
  iVar1 = FUN_300077c0();
  if (iVar1 == 0) {
    return (undefined *)0x0;
  }
  FUN_30007880();
  return FUN_300078b0;
}

