/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e90e @ 0x3002E90E */


void __cdecl FUN_3002e90e(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  if (DAT_3004f288 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_3004f284 = 1;
  DAT_3004f280 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_3004f730 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_3004f72c - 4), DAT_3004f730 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_3004f730 <= puVar1);
    }
    FUN_3002e9a7((undefined4 *)&DAT_3003a014,(undefined4 *)&DAT_3003a018);
  }
  FUN_3002e9a7((undefined4 *)&DAT_3003a01c,(undefined4 *)&DAT_3003a020);
  if (param_3 != 0) {
    return;
  }
  DAT_3004f288 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

