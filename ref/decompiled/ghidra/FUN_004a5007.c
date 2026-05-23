/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a5007 @ 0x004A5007 */
/* Body size: 72 addresses */


void FUN_004a5007(LPVOID param_1)

{
  int iVar1;
  
  if (param_1 != (LPVOID)0x0) {
    FUN_004a79b2(9);
    iVar1 = FUN_004a7a66(param_1);
    if (iVar1 != 0) {
      FUN_004a7a91(iVar1,param_1);
      FUN_004a7a13(9);
      return;
    }
    FUN_004a7a13(9);
    HeapFree(DAT_0084215c,0,param_1);
  }
  return;
}

