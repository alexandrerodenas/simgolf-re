/* Ghidra decompiled: jgld.dll */
/* Function: __free_dbg @ 0x10080710 */
/* Body size: 82 addresses */


/* Library Function - Single Match
    __free_dbg
   
   Library: Visual Studio 2003 Debug */

void __free_dbg(void *param_1,int param_2)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1011efd0;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_100833f0(9);
  local_8 = 0;
  FUN_10080780(param_1,param_2);
  local_8 = 0xffffffff;
  FUN_10080762();
  FUN_1008076d();
  return;
}

