/* Ghidra decompiled: sound.dll */
/* Function: FUN_10042a8e @ 0x10042A8E */
/* Body size: 61 addresses */


void FUN_10042a8e(void)

{
  DWORD *pDVar1;
  
  if (PTR_FUN_10064ed0 != (undefined *)0x0) {
    (*(code *)PTR_FUN_10064ed0)();
  }
  pDVar1 = FUN_10044171();
  if (pDVar1 == (DWORD *)0x0) {
    __amsg_exit(0x10);
  }
  if ((HANDLE)pDVar1[1] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)pDVar1[1]);
  }
  FUN_100441d8((undefined *)pDVar1);
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}

