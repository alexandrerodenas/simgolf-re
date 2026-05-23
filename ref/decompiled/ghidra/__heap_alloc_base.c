/* Ghidra decompiled: jgld.dll */
/* Function: __heap_alloc_base @ 0x10085C90 */
/* Body size: 101 addresses */


/* Library Function - Single Match
    __heap_alloc_base
   
   Library: Visual Studio 2003 Debug */

void __heap_alloc_base(uint param_1)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1011f860;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  if (DAT_10129fb0 == 3) {
    if (param_1 <= DAT_10129fe0) {
      ExceptionList = &pvStack_14;
      FUN_100833f0(9);
      local_8 = 0;
      FUN_10086f50(param_1);
      local_8 = 0xffffffff;
      FUN_10085cf5();
      FUN_10085d00();
      return;
    }
    ExceptionList = &pvStack_14;
    FUN_10085da1();
    return;
  }
  if (DAT_10129fb0 == 2) {
    if (param_1 == 0) {
      param_1 = 0x10;
    }
    else {
      param_1 = param_1 + 0xf & 0xfffffff0;
    }
    if (param_1 <= DAT_10125784) {
      ExceptionList = &pvStack_14;
      FUN_100833f0(9);
      local_8 = 1;
      FUN_100889d0(param_1 >> 4);
      local_8 = 0xffffffff;
      FUN_10085d77();
      FUN_10085d82();
      return;
    }
    ExceptionList = &pvStack_14;
    HeapAlloc(DAT_10129fa0,0,param_1);
  }
  else {
    if (param_1 == 0) {
      param_1 = 1;
    }
    ExceptionList = &pvStack_14;
    HeapAlloc(DAT_10129fa0,0,param_1 + 0xf & 0xfffffff0);
  }
  ExceptionList = pvStack_14;
  return;
}

