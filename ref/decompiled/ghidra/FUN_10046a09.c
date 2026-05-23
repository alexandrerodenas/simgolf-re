/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10046a09 @ 0x10046A09 */
/* Body size: 153 addresses */


void __cdecl FUN_10046a09(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  if (DAT_10057df8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10057df4 = 1;
  DAT_10057df0 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1005a418 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1005a414 - 4), DAT_1005a418 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1005a418 <= puVar1);
    }
    FUN_10046aa2((undefined4 *)&DAT_10055034,(undefined4 *)&DAT_1005503c);
  }
  FUN_10046aa2((undefined4 *)&DAT_10055040,(undefined4 *)&DAT_10055048);
  if (param_3 != 0) {
    return;
  }
  DAT_10057df8 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

