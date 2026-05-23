/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10085080 @ 0x10085080 */
/* Body size: 29 addresses */


void FUN_10085080(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_10084e20();
  if (pDVar1[0x19] != 0) {
    pDVar1 = FUN_10084e20();
    (*(code *)pDVar1[0x19])();
  }
  FUN_10084ff0();
  return;
}

