/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10086692 @ 0x10086692 */


undefined4 FUN_10086692(void)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  BVar1 = HeapValidate(DAT_10129fa0,0,(LPCVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 0x78) {
      pDVar3 = FUN_100904e0();
      *pDVar3 = 0x78;
      puVar4 = (undefined4 *)FUN_100904d0();
      *puVar4 = 0x28;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0xfffffffc;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}

