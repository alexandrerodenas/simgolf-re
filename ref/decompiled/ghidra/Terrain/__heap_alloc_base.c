/* Ghidra decompiled: Terrain.dll */
/* Function: __heap_alloc_base @ 0x1001A0B0 */


/* Library Function - Single Match
    __heap_alloc_base
   
   Library: Visual Studio 2003 Debug */

void __thiscall __heap_alloc_base(void *this,uint param_1)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1005ffd0;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  if (DAT_101122d0 == 3) {
    if (param_1 <= DAT_10112300) {
      ExceptionList = &pvStack_14;
      FUN_10019e10(this,9);
      local_8 = 0;
      FUN_1001bb20(param_1);
      local_8 = 0xffffffff;
      FUN_1001a115();
      FUN_1001a120();
      return;
    }
    ExceptionList = &pvStack_14;
    FUN_1001a1c1();
    return;
  }
  if (DAT_101122d0 == 2) {
    if (param_1 == 0) {
      param_1 = 0x10;
    }
    else {
      param_1 = param_1 + 0xf & 0xfffffff0;
    }
    if (param_1 <= DAT_10066054) {
      ExceptionList = &pvStack_14;
      FUN_10019e10(this,9);
      local_8 = 1;
      FUN_1001d5a0(param_1 >> 4);
      local_8 = 0xffffffff;
      FUN_1001a197();
      FUN_1001a1a2();
      return;
    }
    ExceptionList = &pvStack_14;
    HeapAlloc(DAT_101122c0,0,param_1);
  }
  else {
    if (param_1 == 0) {
      param_1 = 1;
    }
    ExceptionList = &pvStack_14;
    HeapAlloc(DAT_101122c0,0,param_1 + 0xf & 0xfffffff0);
  }
  ExceptionList = pvStack_14;
  return;
}

