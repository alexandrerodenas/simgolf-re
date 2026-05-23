/* Ghidra decompiled: Terrain.dll */
/* Function: `eh_vector_constructor_iterator' @ 0x10018670 */
/* Body size: 113 addresses */


/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *unaff_EDI;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1005fe78;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*param_4)(unaff_EDI);
  }
  local_8 = 0xffffffff;
  FUN_100186e1();
  FUN_100186fd();
  return;
}

