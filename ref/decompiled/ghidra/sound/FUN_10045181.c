/* Ghidra decompiled: sound.dll */
/* Function: FUN_10045181 @ 0x10045181 */


void __cdecl FUN_10045181(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10045226();
  if (DAT_100b5584 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100b5580 = 1;
  DAT_100b557c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_100b5d3c != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_100b5d38 - 4), DAT_100b5d3c <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_100b5d3c <= puVar1);
    }
    FUN_10045238((undefined4 *)&DAT_10063770,(undefined4 *)&DAT_10063978);
  }
  FUN_10045238((undefined4 *)&DAT_10063a7c,(undefined4 *)&DAT_10063c84);
  if (param_3 == 0) {
    DAT_100b5584 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1004522f();
  return;
}

