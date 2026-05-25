/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10026050 @ 0x10026050 */


undefined4 __cdecl FUN_10026050(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if (((param_1 < DAT_10110f5c) &&
      (iVar3 = (int)param_1 >> 5,
      (*(byte *)((&DAT_10110e20)[iVar3] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) &&
     (*(int *)((&DAT_10110e20)[iVar3] + (param_1 & 0x1f) * 0x24) != -1)) {
    if (DAT_10110798 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)0x0);
      }
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)0x0);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)0x0);
      }
    }
    *(undefined4 *)((&DAT_10110e20)[iVar3] + (param_1 & 0x1f) * 0x24) = 0xffffffff;
    uVar1 = 0;
  }
  else {
    pDVar2 = FUN_100243f0();
    *pDVar2 = 9;
    pDVar2 = FUN_10024400();
    *pDVar2 = 0;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

