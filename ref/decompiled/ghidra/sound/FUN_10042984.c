/* Ghidra decompiled: sound.dll */
/* Function: FUN_10042984 @ 0x10042984 */


HANDLE __cdecl FUN_10042984(int param_1,SIZE_T param_2,int param_3)

{
  int *lpThreadId;
  HANDLE hThread;
  DWORD DVar1;
  
  DVar1 = 0;
  lpThreadId = FUN_100458a1(1,0x74);
  if (lpThreadId != (int *)0x0) {
    FUN_1004415e((int)lpThreadId);
    lpThreadId[0x12] = param_1;
    lpThreadId[0x13] = param_3;
    hThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,param_2,FUN_100429fb,lpThreadId,4,
                           (LPDWORD)lpThreadId);
    lpThreadId[1] = (int)hThread;
    if ((hThread != (HANDLE)0x0) && (DVar1 = ResumeThread(hThread), DVar1 != 0xffffffff)) {
      return hThread;
    }
    DVar1 = GetLastError();
  }
  FUN_10042c07((undefined *)lpThreadId);
  if (DVar1 != 0) {
    FUN_1004581c(DVar1);
  }
  return (HANDLE)0xffffffff;
}

