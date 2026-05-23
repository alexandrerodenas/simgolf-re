/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004928a @ 0x1004928A */
/* Body size: 101 addresses */


int __cdecl FUN_1004928a(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_100b5cdc) &&
     ((*(byte *)((&DAT_100b5ba0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1004c1d5(param_1);
    iVar1 = FUN_100492ef(param_1,param_2,param_3);
    FUN_1004c234(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1004588f();
  *pDVar2 = 9;
  pDVar2 = FUN_10045898();
  *pDVar2 = 0;
  return -1;
}

