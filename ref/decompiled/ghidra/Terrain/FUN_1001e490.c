/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001e490 @ 0x1001E490 */


void __cdecl FUN_1001e490(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  uint uVar1;
  UINT uExitCode;
  int *local_8;
  
  FUN_1001e580();
  if (DAT_10110850 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1011084c = 1;
  DAT_10110848 = (undefined1)param_3;
  if (param_2 == 0) {
    if (DAT_101122bc != (int *)0x0) {
      local_8 = DAT_101122b8;
      while (local_8 = local_8 + -1, DAT_101122bc <= local_8) {
        if (*local_8 != 0) {
          (*(code *)*local_8)();
        }
      }
    }
    __initterm((int *)&DAT_10063620,(int *)&DAT_10063828);
  }
  __initterm((int *)&DAT_1006392c,(int *)&DAT_10063b34);
  if ((DAT_10110854 == 0) && (uVar1 = FUN_10017020(-1), (uVar1 & 0x20) != 0)) {
    DAT_10110854 = 1;
    FUN_10017ad0();
  }
  if (param_3 == 0) {
    DAT_10110850 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1001e590();
  return;
}

