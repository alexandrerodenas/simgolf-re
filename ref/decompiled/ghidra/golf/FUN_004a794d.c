/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a794d @ 0x004A794D */


undefined4 FUN_004a794d(int param_1)

{
  int iVar1;
  
  DAT_0084215c = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_0084215c != (HANDLE)0x0) {
    iVar1 = FUN_004a7a28();
    if (iVar1 != 0) {
      return 1;
    }
    HeapDestroy(DAT_0084215c);
  }
  return 0;
}

