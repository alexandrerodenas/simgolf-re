/* Ghidra decompiled: Terrain.dll */
/* Function: __heapchk @ 0x1001B1B0 */


/* Library Function - Single Match
    __heapchk
   
   Library: Visual Studio 2003 Debug */

int __cdecl __heapchk(void)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  void *in_ECX;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10060220;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  local_20 = -2;
  if (DAT_101122d0 == 3) {
    ExceptionList = &pvStack_14;
    FUN_10019e10(in_ECX,9);
    local_8 = 0;
    FUN_1001ca80();
    local_8 = 0xffffffff;
    FUN_1001b212();
    iVar1 = thunk_FUN_1001b262();
    return iVar1;
  }
  if (DAT_101122d0 == 2) {
    ExceptionList = &pvStack_14;
    FUN_10019e10(in_ECX,9);
    local_8 = 1;
    FUN_1001dd80();
    local_8 = 0xffffffff;
    FUN_1001b257();
    iVar1 = FUN_1001b262();
    return iVar1;
  }
  ExceptionList = &pvStack_14;
  BVar2 = HeapValidate(DAT_101122c0,0,(LPCVOID)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      pDVar4 = FUN_10024400();
      *pDVar4 = 0x78;
      pDVar4 = FUN_100243f0();
      *pDVar4 = 0x28;
    }
    else {
      local_20 = -4;
    }
  }
  ExceptionList = pvStack_14;
  return local_20;
}

