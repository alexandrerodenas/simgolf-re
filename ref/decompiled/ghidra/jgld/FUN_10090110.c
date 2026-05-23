/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10090110 @ 0x10090110 */
/* Body size: 216 addresses */


undefined4 __cdecl FUN_10090110(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  int iVar4;
  
  if (((param_1 < DAT_10129f9c) &&
      (iVar4 = (int)param_1 >> 5,
      (*(byte *)((&DAT_10129e60)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) &&
     (*(int *)((&DAT_10129e60)[iVar4] + (param_1 & 0x1f) * 0x24) != -1)) {
    if (DAT_101287c0 == 1) {
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
    *(undefined4 *)((&DAT_10129e60)[iVar4] + (param_1 & 0x1f) * 0x24) = 0xffffffff;
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_100904d0();
    *puVar2 = 9;
    pDVar3 = FUN_100904e0();
    *pDVar3 = 0;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

