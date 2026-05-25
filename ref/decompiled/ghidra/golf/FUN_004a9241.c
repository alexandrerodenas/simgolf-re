/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a9241 @ 0x004A9241 */


undefined4 FUN_004a9241(uint param_1,HANDLE param_2)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00842140) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_00842040)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_004e4ae4 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_004a929a;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_004a929a:
      *(HANDLE *)((&DAT_00842040)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)FUN_004a910c();
  *puVar1 = 9;
  puVar1 = (undefined4 *)FUN_004a9115();
  *puVar1 = 0;
  return 0xffffffff;
}

