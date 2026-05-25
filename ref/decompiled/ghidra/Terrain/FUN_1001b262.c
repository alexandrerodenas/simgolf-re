/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001b262 @ 0x1001B262 */


undefined4 FUN_1001b262(void)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int unaff_EBP;
  
  BVar1 = HeapValidate(DAT_101122c0,0,(LPCVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x78) {
      pDVar3 = FUN_10024400();
      *pDVar3 = 0x78;
      pDVar3 = FUN_100243f0();
      *pDVar3 = 0x28;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0xfffffffc;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}

