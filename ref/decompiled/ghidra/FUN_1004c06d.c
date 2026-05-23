/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004c06d @ 0x1004C06D */
/* Body size: 127 addresses */


undefined4 __cdecl FUN_1004c06d(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_100b5cdc) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_100b5ba0)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_100b553c == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1004c0c9;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1004c0c9:
      *(undefined4 *)((&DAT_100b5ba0)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1004588f();
  *pDVar2 = 9;
  pDVar2 = FUN_10045898();
  *pDVar2 = 0;
  return 0xffffffff;
}

