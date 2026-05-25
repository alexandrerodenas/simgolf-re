/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004c0ec @ 0x1004C0EC */


undefined4 __cdecl FUN_1004c0ec(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_100b5cdc) &&
     ((*(byte *)((&DAT_100b5ba0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_100b5ba0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1004588f();
  *pDVar1 = 9;
  pDVar1 = FUN_10045898();
  *pDVar1 = 0;
  return 0xffffffff;
}

