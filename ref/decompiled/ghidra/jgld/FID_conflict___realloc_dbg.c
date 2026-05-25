/* Ghidra decompiled: jgld.dll */
/* Function: FID_conflict:__realloc_dbg @ 0x10080640 */


/* Library Function - Multiple Matches With Different Base Names
    __expand_dbg
    __realloc_dbg
   
   Library: Visual Studio 2003 Debug */

void __cdecl
FID_conflict___realloc_dbg(void *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1011efc0;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_100833f0(9);
  local_8 = 0;
  FUN_100800f0(param_1,param_2,param_3,param_4,param_5,0);
  local_8 = 0xffffffff;
  FUN_100806a3();
  FUN_100806ae();
  return;
}

