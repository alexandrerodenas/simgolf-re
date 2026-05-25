/* Ghidra decompiled: Terrain.dll */
/* Function: FID_conflict:__realloc_dbg @ 0x100163E0 */


/* Library Function - Multiple Matches With Different Base Names
    __expand_dbg
    __realloc_dbg
   
   Library: Visual Studio 2003 Debug */

void __thiscall
FID_conflict___realloc_dbg
          (void *this,void *param_1,uint param_2,uint param_3,void *param_4,int param_5)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1005f7e0;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_10019e10(this,9);
  local_8 = 0;
  FUN_10015e90(param_1,param_2,param_3,param_4,param_5,0);
  local_8 = 0xffffffff;
  FUN_10016443();
  FUN_1001644e();
  return;
}

