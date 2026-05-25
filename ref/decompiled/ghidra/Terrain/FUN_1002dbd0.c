/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002dbd0 @ 0x1002DBD0 */


int __cdecl FUN_1002dbd0(uint param_1,int param_2)

{
  char cVar1;
  int iVar2;
  DWORD *pDVar3;
  
  iVar2 = (int)param_1 >> 5;
  cVar1 = *(char *)((&DAT_10110e20)[iVar2] + 4 + (param_1 & 0x1f) * 0x24);
  if (param_2 == 0x8000) {
    *(byte *)((&DAT_10110e20)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) =
         *(byte *)((&DAT_10110e20)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) & 0x7f;
  }
  else {
    if (param_2 != 0x4000) {
      pDVar3 = FUN_100243f0();
      *pDVar3 = 0x16;
      return -1;
    }
    *(byte *)((&DAT_10110e20)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) =
         *(byte *)((&DAT_10110e20)[iVar2] + 4 + (param_1 & 0x1f) * 0x24) | 0x80;
  }
  return (-(uint)(((int)cVar1 & 0x80U) != 0) & 0xffffc000) + 0x8000;
}

