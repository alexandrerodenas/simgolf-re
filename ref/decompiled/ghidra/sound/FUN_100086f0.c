/* Ghidra decompiled: sound.dll */
/* Function: FUN_100086f0 @ 0x100086F0 */


undefined4 __thiscall FUN_100086f0(void *this,LPSTR param_1)

{
  HMMIO pHVar1;
  int iVar2;
  _MMIOINFO *p_Var3;
  _MMIOINFO local_48;
  
  p_Var3 = &local_48;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    p_Var3->dwFlags = 0;
    p_Var3 = (_MMIOINFO *)&p_Var3->fccIOProc;
  }
  local_48.cchBuffer = 0x1000;
  local_48.fccIOProc = 0x204d454d;
  pHVar1 = mmioOpenA(param_1,&local_48,0x11001);
  *(HMMIO *)((int)this + 0x30) = pHVar1;
  if (pHVar1 == (HMMIO)0x0) {
    return 8;
  }
  DAT_100b4a08 = DAT_100b4a08 + 1;
  return 0;
}

