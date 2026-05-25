/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004bff1 @ 0x1004BFF1 */


undefined4 __cdecl FUN_1004bff1(uint param_1,HANDLE param_2)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_100b5cdc) {
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)((&DAT_100b5ba0)[(int)param_1 >> 5] + iVar2) == -1) {
      if (DAT_100b553c == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1004c04a;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_1004c04a:
      *(HANDLE *)((&DAT_100b5ba0)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  pDVar1 = FUN_1004588f();
  *pDVar1 = 9;
  pDVar1 = FUN_10045898();
  *pDVar1 = 0;
  return 0xffffffff;
}

