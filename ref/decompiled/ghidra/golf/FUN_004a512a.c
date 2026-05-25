/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a512a @ 0x004A512A */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a512a(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_004a51cf();
  if (DAT_00840aa8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_00840aa4 = 1;
  DAT_00840aa0 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_00842170 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_0084216c - 4), DAT_00842170 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_00842170 <= puVar1);
    }
    FUN_004a51e1(&DAT_004c11a4,&DAT_004c11ac);
  }
  FUN_004a51e1(&LAB_004c11b0,&DAT_004c11b8);
  if (param_3 == 0) {
    DAT_00840aa8 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_004a51d8();
  return;
}

