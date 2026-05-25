/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001b060 @ 0x1001B060 */


void __cdecl FUN_1001b060(undefined *param_1)

{
  void *in_ECX;
  int iStack_2c;
  byte *pbStack_28;
  uint uStack_24;
  uint *local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10060208;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  if (param_1 != (undefined *)0x0) {
    if (DAT_101122d0 == 3) {
      ExceptionList = &pvStack_14;
      FUN_10019e10(in_ECX,9);
      local_8 = 0;
      local_20 = (uint *)FUN_1001b480((int)param_1);
      if (local_20 != (uint *)0x0) {
        FUN_1001b540(local_20,(int)param_1);
      }
      local_8 = 0xffffffff;
      FUN_1001b0db();
      FUN_1001b0e6();
      return;
    }
    if (DAT_101122d0 == 2) {
      ExceptionList = &pvStack_14;
      FUN_10019e10(in_ECX,9);
      local_8 = 1;
      pbStack_28 = (byte *)FUN_1001d4a0(param_1,&iStack_2c,&uStack_24);
      if (pbStack_28 != (byte *)0x0) {
        FUN_1001d530(iStack_2c,uStack_24,pbStack_28);
      }
      local_8 = 0xffffffff;
      FUN_1001b15d();
      FUN_1001b168();
      return;
    }
    ExceptionList = &pvStack_14;
    HeapFree(DAT_101122c0,0,param_1);
  }
  ExceptionList = pvStack_14;
  return;
}

