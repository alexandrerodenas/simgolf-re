/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10086490 @ 0x10086490 */


void __cdecl FUN_10086490(undefined *param_1)

{
  int iStack_2c;
  byte *pbStack_28;
  uint uStack_24;
  uint *local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1011f8a8;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  if (param_1 != (undefined *)0x0) {
    if (DAT_10129fb0 == 3) {
      ExceptionList = &pvStack_14;
      FUN_100833f0(9);
      local_8 = 0;
      local_20 = (uint *)FUN_100868b0((int)param_1);
      if (local_20 != (uint *)0x0) {
        FUN_10086970(local_20,(int)param_1);
      }
      local_8 = 0xffffffff;
      FUN_1008650b();
      FUN_10086516();
      return;
    }
    if (DAT_10129fb0 == 2) {
      ExceptionList = &pvStack_14;
      FUN_100833f0(9);
      local_8 = 1;
      pbStack_28 = (byte *)FUN_100888d0(param_1,&iStack_2c,&uStack_24);
      if (pbStack_28 != (byte *)0x0) {
        FUN_10088960(iStack_2c,uStack_24,pbStack_28);
      }
      local_8 = 0xffffffff;
      FUN_1008658d();
      FUN_10086598();
      return;
    }
    ExceptionList = &pvStack_14;
    HeapFree(DAT_10129fa0,0,param_1);
  }
  ExceptionList = pvStack_14;
  return;
}

