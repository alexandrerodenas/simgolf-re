/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001abd0 @ 0x1001ABD0 */


void __thiscall FUN_1001abd0(void *this,int *param_1,void *param_2)

{
  int iVar1;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *local_4c;
  void *local_48;
  void *local_44;
  void *local_40;
  int local_3c;
  void *local_38;
  byte *local_34;
  uint *local_30;
  uint *local_2c;
  int *local_28;
  void *local_24;
  void *local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100601f0;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  local_20 = param_2;
  if (param_1 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __malloc_base(param_2);
    FUN_1001b040();
    return;
  }
  if (param_2 == (void *)0x0) {
    ExceptionList = &pvStack_14;
    FUN_1001b060((undefined *)param_1);
    FUN_1001b040();
    return;
  }
  ExceptionList = &pvStack_14;
  if (DAT_101122d0 != 3) {
    ExceptionList = &pvStack_14;
    if (DAT_101122d0 != 2) {
      while( true ) {
        local_28 = (LPVOID)0x0;
        if (param_2 < (void *)0xffffffe1) {
          if (param_2 == (void *)0x0) {
            param_2 = (void *)0x1;
          }
          param_2 = (void *)((int)param_2 + 0xfU & 0xfffffff0);
          local_28 = HeapReAlloc(DAT_101122c0,0,param_1,(SIZE_T)param_2);
        }
        if ((local_28 != (LPVOID)0x0) || (DAT_1011079c == 0)) break;
        iVar1 = __callnewh((size_t)param_2);
        if (iVar1 == 0) {
          FUN_1001b040();
          return;
        }
      }
      FUN_1001b040();
      return;
    }
    ExceptionList = &pvStack_14;
    if (param_2 < (void *)0xffffffe1) {
      if (param_2 == (void *)0x0) {
        param_2 = (void *)0x10;
        ExceptionList = &pvStack_14;
      }
      else {
        param_2 = (void *)((int)param_2 + 0xfU & 0xfffffff0);
        ExceptionList = &pvStack_14;
      }
    }
    while( true ) {
      local_28 = (int *)0x0;
      if (param_2 < (void *)0xffffffe1) {
        FUN_10019e10(this,9);
        local_8 = 1;
        local_34 = (byte *)FUN_1001d4a0((undefined *)param_1,&local_3c,(uint *)&local_30);
        if (local_34 == (byte *)0x0) {
          local_28 = HeapReAlloc(DAT_101122c0,0,param_1,(SIZE_T)param_2);
        }
        else {
          if (param_2 < DAT_10066054) {
            iVar1 = FUN_1001dc10(local_3c,local_30,local_34,(uint)param_2 >> 4);
            if (iVar1 == 0) {
              local_28 = FUN_1001d5a0((uint)param_2 >> 4);
              if (local_28 != (int *)0x0) {
                local_38 = (void *)((uint)*local_34 << 4);
                local_48 = local_38;
                if (param_2 <= local_38) {
                  local_48 = param_2;
                }
                FUN_1001f510(local_28,param_1,(uint)local_48);
                FUN_1001d530(local_3c,(int)local_30,local_34);
              }
            }
            else {
              local_28 = param_1;
            }
          }
          if ((local_28 == (int *)0x0) &&
             (local_28 = HeapAlloc(DAT_101122c0,0,(SIZE_T)param_2), local_28 != (int *)0x0)) {
            local_38 = (void *)((uint)*local_34 << 4);
            local_4c = local_38;
            if (param_2 <= local_38) {
              local_4c = param_2;
            }
            FUN_1001f510(local_28,param_1,(uint)local_4c);
            FUN_1001d530(local_3c,(int)local_30,local_34);
          }
        }
        local_8 = 0xffffffff;
        FUN_1001af9b();
        FUN_1001afa6();
        return;
      }
      if (DAT_1011079c == 0) break;
      iVar1 = __callnewh((size_t)param_2);
      this = extraout_ECX_00;
      if (iVar1 == 0) {
        FUN_1001b040();
        return;
      }
    }
    FUN_1001b040();
    return;
  }
  while( true ) {
    local_28 = (int *)0x0;
    if (param_2 < (void *)0xffffffe1) {
      FUN_10019e10(this,9);
      local_8 = 0;
      local_2c = (uint *)FUN_1001b480((int)param_1);
      if (local_2c != (uint *)0x0) {
        if (param_2 <= DAT_10112300) {
          iVar1 = FUN_1001c360(local_2c,(int)param_1,(int)param_2);
          if (iVar1 == 0) {
            local_28 = FUN_1001bb20((int)param_2);
            if (local_28 != (int *)0x0) {
              local_24 = (void *)(param_1[-1] - 1);
              local_40 = local_24;
              if (param_2 <= local_24) {
                local_40 = param_2;
              }
              FUN_1001f510(local_28,param_1,(uint)local_40);
              FUN_1001b540(local_2c,(int)param_1);
            }
          }
          else {
            local_28 = param_1;
          }
        }
        if (local_28 == (int *)0x0) {
          if (param_2 == (void *)0x0) {
            param_2 = (void *)0x1;
          }
          local_44 = (void *)((int)param_2 + 0xfU & 0xfffffff0);
          local_28 = HeapAlloc(DAT_101122c0,0,(SIZE_T)local_44);
          if (local_28 != (int *)0x0) {
            local_24 = (void *)(param_1[-1] - 1);
            if (local_24 < local_44) {
              local_44 = local_24;
            }
            FUN_1001f510(local_28,param_1,(uint)local_44);
            FUN_1001b540(local_2c,(int)param_1);
          }
        }
      }
      local_8 = 0xffffffff;
      FUN_1001ad86();
      FUN_1001ad91();
      return;
    }
    if (DAT_1011079c == 0) break;
    iVar1 = __callnewh((size_t)param_2);
    this = extraout_ECX;
    if (iVar1 == 0) {
      FUN_1001b040();
      return;
    }
  }
  FUN_1001b040();
  return;
}

