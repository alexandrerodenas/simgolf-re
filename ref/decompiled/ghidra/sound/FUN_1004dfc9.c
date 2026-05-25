/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004dfc9 @ 0x1004DFC9 */


undefined4 __cdecl FUN_1004dfc9(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_100b5cdc) &&
     ((*(byte *)((&DAT_100b5ba0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1004c1d5(param_1);
    uVar1 = FUN_1004e026(param_1);
    FUN_1004c234(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1004588f();
  *pDVar2 = 9;
  pDVar2 = FUN_10045898();
  *pDVar2 = 0;
  return 0xffffffff;
}

