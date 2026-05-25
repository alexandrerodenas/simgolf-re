/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004c2fe @ 0x1004C2FE */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1004c2fe(uint param_1)

{
  int *piVar1;
  int iVar2;
  DWORD nStdHandle;
  
  if (param_1 < DAT_100593c0) {
    iVar2 = (param_1 & 0x1f) * 8;
    piVar1 = (int *)((&DAT_100592c0)[(int)param_1 >> 5] + iVar2);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_10057e0c == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1004c357;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1004c357:
      *(undefined4 *)((&DAT_100592c0)[(int)param_1 >> 5] + iVar2) = 0xffffffff;
      return 0;
    }
  }
  DAT_10057db4 = 0;
  _DAT_10057db0 = 9;
  return 0xffffffff;
}

