/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007f220 @ 0x1007F220 */
/* Body size: 227 addresses */


void __cdecl FUN_1007f220(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  uint uVar1;
  UINT uExitCode;
  int *local_8;
  
  FUN_1007f310();
  if (DAT_10128790 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1012878c = 1;
  DAT_10128788 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_1012b394 != (int *)0x0) {
      local_8 = DAT_1012b390;
      while (local_8 = local_8 + -1, DAT_1012b394 <= local_8) {
        if (*local_8 != 0) {
          (*(code *)*local_8)();
        }
      }
    }
    __initterm((int *)&DAT_1012273c,(int *)&DAT_10122944);
  }
  __initterm((int *)&DAT_10122a48,(int *)&DAT_10122c50);
  if ((DAT_10128794 == 0) && (uVar1 = FUN_10081280(-1), (uVar1 & 0x20) != 0)) {
    DAT_10128794 = 1;
    FUN_10081d30();
  }
  if (param_3 == 0) {
    DAT_10128790 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1007f320();
  return;
}

