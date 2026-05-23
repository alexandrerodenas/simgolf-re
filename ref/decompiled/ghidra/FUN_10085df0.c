/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10085df0 @ 0x10085DF0 */
/* Body size: 161 addresses */


undefined * FUN_10085df0(undefined *param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
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
  puStack_c = &DAT_1011f878;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  if (param_2 < 0xffffffe1) {
    if (DAT_10129fb0 == 3) {
      ExceptionList = &pvStack_14;
      FUN_100833f0(9);
      local_8 = 0;
      local_24 = (uint *)FUN_100868b0((int)param_1);
      if ((local_24 != (uint *)0x0) && (local_20 = (undefined *)0x0, param_2 <= DAT_10129fe0)) {
        iVar2 = FUN_10087790(local_24,(int)param_1,param_2);
        if (iVar2 != 0) {
          local_20 = param_1;
        }
      }
      local_8 = 0xffffffff;
      FUN_10085e91();
      puVar1 = (undefined *)FUN_10085e9c();
      return puVar1;
    }
    if (DAT_10129fb0 == 2) {
      if (param_2 == 0) {
        param_2 = 1;
      }
      ExceptionList = &pvStack_14;
      FUN_100833f0(9);
      local_8 = 1;
      pbStack_2c = (byte *)FUN_100888d0(param_1,&iStack_30,(uint *)&puStack_28);
      if (pbStack_2c == (byte *)0x0) {
        local_8 = 0xffffffff;
        FUN_10085f8a();
        puVar1 = (undefined *)FUN_10085f95();
        return puVar1;
      }
      local_20 = (undefined *)0x0;
      if ((param_2 + 0xf & 0xfffffff0) <= DAT_10125784) {
        iVar2 = FUN_10089040(iStack_30,puStack_28,pbStack_2c,param_2 + 0xf >> 4);
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
      puVar1 = HeapReAlloc(DAT_10129fa0,0x10,param_1,param_2 + 0xf & 0xfffffff0);
    }
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  ExceptionList = pvStack_14;
  return puVar1;
}

