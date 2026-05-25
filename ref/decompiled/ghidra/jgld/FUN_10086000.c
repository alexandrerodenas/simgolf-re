/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10086000 @ 0x10086000 */


void __cdecl FUN_10086000(int *param_1,uint param_2)

{
  int iVar1;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  byte *local_34;
  uint *local_30;
  uint *local_2c;
  int *local_28;
  uint local_24;
  uint local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1011f890;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  local_20 = param_2;
  if (param_1 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __malloc_base(param_2);
    FUN_10086470();
    return;
  }
  if (param_2 == 0) {
    ExceptionList = &pvStack_14;
    FUN_10086490((undefined *)param_1);
    FUN_10086470();
    return;
  }
  ExceptionList = &pvStack_14;
  if (DAT_10129fb0 != 3) {
    ExceptionList = &pvStack_14;
    if (DAT_10129fb0 != 2) {
      while( true ) {
        local_28 = (LPVOID)0x0;
        if (param_2 < 0xffffffe1) {
          if (param_2 == 0) {
            param_2 = 1;
          }
          param_2 = param_2 + 0xf & 0xfffffff0;
          local_28 = HeapReAlloc(DAT_10129fa0,0,param_1,param_2);
        }
        if ((local_28 != (LPVOID)0x0) || (DAT_10128828 == 0)) break;
        iVar1 = __callnewh(param_2);
        if (iVar1 == 0) {
          FUN_10086470();
          return;
        }
      }
      FUN_10086470();
      return;
    }
    ExceptionList = &pvStack_14;
    if (param_2 < 0xffffffe1) {
      if (param_2 == 0) {
        param_2 = 0x10;
        ExceptionList = &pvStack_14;
      }
      else {
        param_2 = param_2 + 0xf & 0xfffffff0;
        ExceptionList = &pvStack_14;
      }
    }
    while( true ) {
      local_28 = (int *)0x0;
      if (param_2 < 0xffffffe1) {
        FUN_100833f0(9);
        local_8 = 1;
        local_34 = (byte *)FUN_100888d0((undefined *)param_1,&local_3c,(uint *)&local_30);
        if (local_34 == (byte *)0x0) {
          local_28 = HeapReAlloc(DAT_10129fa0,0,param_1,param_2);
        }
        else {
          if (param_2 < DAT_10125784) {
            iVar1 = FUN_10089040(local_3c,local_30,local_34,param_2 >> 4);
            if (iVar1 == 0) {
              local_28 = FUN_100889d0(param_2 >> 4);
              if (local_28 != (int *)0x0) {
                local_38 = (uint)*local_34 << 4;
                local_48 = local_38;
                if (param_2 <= local_38) {
                  local_48 = param_2;
                }
                FUN_1007f3a0(local_28,param_1,local_48);
                FUN_10088960(local_3c,(int)local_30,local_34);
              }
            }
            else {
              local_28 = param_1;
            }
          }
          if ((local_28 == (int *)0x0) &&
             (local_28 = HeapAlloc(DAT_10129fa0,0,param_2), local_28 != (int *)0x0)) {
            local_38 = (uint)*local_34 << 4;
            local_4c = local_38;
            if (param_2 <= local_38) {
              local_4c = param_2;
            }
            FUN_1007f3a0(local_28,param_1,local_4c);
            FUN_10088960(local_3c,(int)local_30,local_34);
          }
        }
        local_8 = 0xffffffff;
        FUN_100863cb();
        FUN_100863d6();
        return;
      }
      if (DAT_10128828 == 0) break;
      iVar1 = __callnewh(param_2);
      if (iVar1 == 0) {
        FUN_10086470();
        return;
      }
    }
    FUN_10086470();
    return;
  }
  while( true ) {
    local_28 = (int *)0x0;
    if (param_2 < 0xffffffe1) {
      FUN_100833f0(9);
      local_8 = 0;
      local_2c = (uint *)FUN_100868b0((int)param_1);
      if (local_2c != (uint *)0x0) {
        if (param_2 <= DAT_10129fe0) {
          iVar1 = FUN_10087790(local_2c,(int)param_1,param_2);
          if (iVar1 == 0) {
            local_28 = FUN_10086f50(param_2);
            if (local_28 != (int *)0x0) {
              local_24 = param_1[-1] - 1;
              local_40 = local_24;
              if (param_2 <= local_24) {
                local_40 = param_2;
              }
              FUN_1007f3a0(local_28,param_1,local_40);
              FUN_10086970(local_2c,(int)param_1);
            }
          }
          else {
            local_28 = param_1;
          }
        }
        if (local_28 == (int *)0x0) {
          if (param_2 == 0) {
            param_2 = 1;
          }
          local_44 = param_2 + 0xf & 0xfffffff0;
          local_28 = HeapAlloc(DAT_10129fa0,0,local_44);
          if (local_28 != (int *)0x0) {
            local_24 = param_1[-1] - 1;
            if (local_24 < local_44) {
              local_44 = local_24;
            }
            FUN_1007f3a0(local_28,param_1,local_44);
            FUN_10086970(local_2c,(int)param_1);
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_100861b6();
      FUN_100861c1();
      return;
    }
    if (DAT_10128828 == 0) break;
    iVar1 = __callnewh(param_2);
    if (iVar1 == 0) {
      FUN_10086470();
      return;
    }
  }
  FUN_10086470();
  return;
}

