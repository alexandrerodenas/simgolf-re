/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001a9c0 @ 0x1001A9C0 */


undefined * __thiscall FUN_1001a9c0(void *this,undefined *param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  void *this_00;
  int iStack_30;
  byte *pbStack_2c;
  uint *puStack_28;
  uint *local_24;
  undefined *local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100601d8;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  if (param_2 < 0xffffffe1) {
    if (DAT_101122d0 == 3) {
      ExceptionList = &pvStack_14;
      FUN_10019e10(this,9);
      local_8 = 0;
      local_24 = (uint *)FUN_1001b480((int)param_1);
      if ((local_24 != (uint *)0x0) && (local_20 = (undefined *)0x0, param_2 <= DAT_10112300)) {
        iVar2 = FUN_1001c360(local_24,(int)param_1,param_2);
        if (iVar2 != 0) {
          local_20 = param_1;
        }
      }
      local_8 = 0xffffffff;
      FUN_1001aa61();
      puVar1 = (undefined *)FUN_1001aa6c();
      return puVar1;
    }
    if (DAT_101122d0 == 2) {
      if (param_2 == 0) {
        param_2 = 1;
      }
      this_00 = (void *)(param_2 + 0xf & 0xfffffff0);
      ExceptionList = &pvStack_14;
      FUN_10019e10(this_00,9);
      local_8 = 1;
      pbStack_2c = (byte *)FUN_1001d4a0(param_1,&iStack_30,(uint *)&puStack_28);
      if (pbStack_2c == (byte *)0x0) {
        local_8 = 0xffffffff;
        FUN_1001ab5a();
        puVar1 = (undefined *)FUN_1001ab65();
        return puVar1;
      }
      local_20 = (undefined *)0x0;
      if (this_00 <= DAT_10066054) {
        iVar2 = FUN_1001dc10(iStack_30,puStack_28,pbStack_2c,param_2 + 0xf >> 4);
        if (iVar2 != 0) {
          local_20 = param_1;
        }
      }
      puVar1 = local_20;
      __local_unwind2((int)&pvStack_14,-1);
    }
    else {
      if (param_2 == 0) {
        param_2 = 1;
      }
      ExceptionList = &pvStack_14;
      puVar1 = HeapReAlloc(DAT_101122c0,0x10,param_1,param_2 + 0xf & 0xfffffff0);
    }
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  ExceptionList = pvStack_14;
  return puVar1;
}

