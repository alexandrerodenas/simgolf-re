/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a92bd @ 0x004A92BD */
/* Body size: 127 addresses */


undefined4 FUN_004a92bd(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00842140) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_00842040)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_004e4ae4 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_004a9319;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_004a9319:
      *(undefined4 *)((&DAT_00842040)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_004a910c();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_004a9115();
  *puVar2 = 0;
  return 0xffffffff;
}

