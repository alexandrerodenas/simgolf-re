/* Ghidra decompiled: Terrain.dll */
/* Function: __free_dbg @ 0x100164B0 */


/* Library Function - Single Match
    __free_dbg
   
   Library: Visual Studio 2003 Debug */

void __cdecl __free_dbg(void *param_1,int param_2)

{
  void *in_ECX;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1005f7f0;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_10019e10(in_ECX,9);
  local_8 = 0;
  FUN_10016520(param_1,param_2);
  local_8 = 0xffffffff;
  FUN_10016502();
  FUN_1001650d();
  return;
}

