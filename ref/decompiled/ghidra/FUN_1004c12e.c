/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004c12e @ 0x1004C12E */
/* Body size: 167 addresses */


uint __cdecl FUN_1004c12e(HANDLE param_1,uint param_2)

{
  DWORD DVar1;
  uint uVar2;
  DWORD *pDVar3;
  byte bVar4;
  
  bVar4 = 0;
  if ((param_2 & 8) != 0) {
    bVar4 = 0x20;
  }
  if ((param_2 & 0x4000) != 0) {
    bVar4 = bVar4 | 0x80;
  }
  if ((param_2 & 0x80) != 0) {
    bVar4 = bVar4 | 0x10;
  }
  DVar1 = GetFileType(param_1);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    FUN_1004581c(DVar1);
  }
  else {
    if (DVar1 == 2) {
      bVar4 = bVar4 | 0x40;
    }
    else if (DVar1 == 3) {
      bVar4 = bVar4 | 8;
    }
    uVar2 = FUN_1004bece();
    if (uVar2 != 0xffffffff) {
      FUN_1004bff1(uVar2,param_1);
      *(byte *)((&DAT_100b5ba0)[(int)uVar2 >> 5] + 4 + (uVar2 & 0x1f) * 0x24) = bVar4 | 1;
      FUN_1004c234(uVar2);
      return uVar2;
    }
    pDVar3 = FUN_1004588f();
    *pDVar3 = 0x18;
    pDVar3 = FUN_10045898();
    *pDVar3 = 0;
  }
  return 0xffffffff;
}

