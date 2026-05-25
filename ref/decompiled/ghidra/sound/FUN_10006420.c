/* Ghidra decompiled: sound.dll */
/* Function: FUN_10006420 @ 0x10006420 */


LPMMIOINFO __thiscall FUN_10006420(void *this,int param_1)

{
  HMMIO hmmio;
  int iVar1;
  _MMIOINFO *p_Var2;
  _MMIOINFO local_48;
  
  if (*(int *)((int)this + 0xb0) != 0) {
    return (LPMMIOINFO)0x0;
  }
  p_Var2 = &local_48;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    p_Var2->dwFlags = 0;
    p_Var2 = (_MMIOINFO *)&p_Var2->fccIOProc;
  }
  local_48.fccIOProc = 0x204d454d;
  if (param_1 == 0) {
    param_1 = *(int *)((int)this + 0xb8);
  }
  local_48.adwInfo[0] = 100;
  local_48.cchBuffer = param_1;
  hmmio = mmioOpenA((LPSTR)0x0,&local_48,0x1000);
  if (hmmio == (HMMIO)0x0) {
    return (LPMMIOINFO)0x0;
  }
  DAT_100b4a08 = DAT_100b4a08 + 1;
  mmioGetInfo(hmmio,(LPMMIOINFO)((int)this + 0x6c),0);
  return (LPMMIOINFO)((int)this + 0x6c);
}

