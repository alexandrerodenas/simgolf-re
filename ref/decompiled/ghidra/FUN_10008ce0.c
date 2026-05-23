/* Ghidra decompiled: sound.dll */
/* Function: FUN_10008ce0 @ 0x10008CE0 */
/* Body size: 98 addresses */


undefined4 __fastcall FUN_10008ce0(UINT *param_1)

{
  MMRESULT MVar1;
  
  if ((param_1[0xf] & 4) != 0) {
    return 0xd;
  }
  DAT_100b49a8 = 0;
  MVar1 = timeBeginPeriod(param_1[6]);
  if (MVar1 == 0x61) {
    return 0xb;
  }
  MVar1 = timeSetEvent(*param_1,param_1[6],&LAB_1000128a,(DWORD_PTR)param_1,param_1[7]);
  param_1[0x10] = MVar1;
  if (MVar1 == 0x61) {
    return 0xb;
  }
  param_1[0xf] = param_1[0xf] | 7;
  return 0;
}

