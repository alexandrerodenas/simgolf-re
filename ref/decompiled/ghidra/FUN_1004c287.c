/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004c287 @ 0x1004C287 */
/* Body size: 119 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1004c287(uint param_1,HANDLE param_2)

{
  int iVar1;
  DWORD nStdHandle;
  
  if (param_1 < DAT_100593c0) {
    iVar1 = (param_1 & 0x1f) * 8;
    if (*(int *)((&DAT_100592c0)[(int)param_1 >> 5] + iVar1) == -1) {
      if (DAT_10057e0c == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1004c2dd;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,param_2);
      }
LAB_1004c2dd:
      *(HANDLE *)((&DAT_100592c0)[(int)param_1 >> 5] + iVar1) = param_2;
      return 0;
    }
  }
  DAT_10057db4 = 0;
  _DAT_10057db0 = 9;
  return 0xffffffff;
}

