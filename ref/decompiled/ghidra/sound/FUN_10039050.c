/* Ghidra decompiled: sound.dll */
/* Function: FUN_10039050 @ 0x10039050 */


undefined4 __fastcall FUN_10039050(DWORD_PTR param_1)

{
  MMRESULT MVar1;
  
  if (*(int *)(param_1 + 0x44) != 0) {
switchD_10039090_caseD_4:
    return 0xc;
  }
  MVar1 = waveInOpen((LPHWAVEIN)(param_1 + 0x44),0xffffffff,(LPCWAVEFORMATEX)(param_1 + 0x48),
                     0x1000179e,param_1,0x30000);
  if (MVar1 != 0) {
    switch(MVar1) {
    case 2:
    case 5:
      return 10;
    default:
      return 0xb;
    case 4:
      goto switchD_10039090_caseD_4;
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
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  return 0;
}

