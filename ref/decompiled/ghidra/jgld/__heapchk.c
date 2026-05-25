/* Ghidra decompiled: jgld.dll */
/* Function: __heapchk @ 0x100865E0 */


/* Library Function - Single Match
    __heapchk
   
   Library: Visual Studio 2003 Debug */

int __cdecl __heapchk(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  undefined4 *puVar5;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1011f8c0;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  local_20 = -2;
  if (DAT_10129fb0 == 3) {
    ExceptionList = &pvStack_14;
    FUN_100833f0(9);
    local_8 = 0;
    FUN_10087eb0();
    local_8 = 0xffffffff;
    FUN_10086642();
    iVar1 = thunk_FUN_10086692();
    return iVar1;
  }
  if (DAT_10129fb0 == 2) {
    ExceptionList = &pvStack_14;
    FUN_100833f0(9);
    local_8 = 1;
    FUN_100891b0();
    local_8 = 0xffffffff;
    FUN_10086687();
    iVar1 = FUN_10086692();
    return iVar1;
  }
  ExceptionList = &pvStack_14;
  BVar2 = HeapValidate(DAT_10129fa0,0,(LPCVOID)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      pDVar4 = FUN_100904e0();
      *pDVar4 = 0x78;
      puVar5 = (undefined4 *)FUN_100904d0();
      *puVar5 = 0x28;
    }
    else {
      local_20 = -4;
    }
  }
  ExceptionList = pvStack_14;
  return local_20;
}

