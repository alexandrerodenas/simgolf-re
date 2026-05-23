/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10020b80 @ 0x10020B80 */
/* Body size: 29 addresses */


void FUN_10020b80(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_100219c0();
  if (pDVar1[0x19] != 0) {
    pDVar1 = FUN_100219c0();
    (*(code *)pDVar1[0x19])();
  }
  FUN_10020af0();
  return;
}

