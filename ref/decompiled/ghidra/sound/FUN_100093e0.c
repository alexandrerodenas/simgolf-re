/* Ghidra decompiled: sound.dll */
/* Function: FUN_100093e0 @ 0x100093E0 */


undefined4 __cdecl FUN_100093e0(undefined4 *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1005869d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_3 == 0) {
    if (param_2 == (uint *)0x0) {
      param_3 = 1;
      ExceptionList = &local_c;
    }
    else {
      ExceptionList = &local_c;
      puVar1 = FUN_10042690(param_2,&DAT_10063dc0);
      if (puVar1 == (uint *)0x0) {
        puVar1 = FUN_10042690(param_2,&DAT_10063dbc);
        if (puVar1 == (uint *)0x0) {
          puVar1 = FUN_10042690(param_2,&DAT_10063db8);
          if (puVar1 == (uint *)0x0) {
            puVar1 = FUN_10042690(param_2,&DAT_10063db4);
            param_3 = -(uint)(puVar1 != (uint *)0x0) & 2;
          }
          else {
            param_3 = 3;
          }
        }
        else {
          param_3 = 2;
        }
      }
      else {
        param_3 = 1;
      }
    }
  }
  switch(param_3) {
  case 1:
    pvVar2 = operator_new(0x1450);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = thunk_FUN_10039790(pvVar2,DAT_100b49c0);
    }
    local_4 = 0xffffffff;
    *param_1 = pvVar2;
    thunk_FUN_1002bb10(pvVar2,(char *)param_2);
    ExceptionList = local_c;
    return 0;
  case 2:
    if (DAT_100b4a1c == 0) {
      ExceptionList = local_c;
      return 3;
    }
    puVar3 = operator_new(0x948);
    local_4 = 1;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = thunk_FUN_1001f4a0(puVar3);
    }
    local_4 = 0xffffffff;
    *param_1 = puVar3;
    thunk_FUN_1002ddf0(puVar3,(char *)param_2);
    ExceptionList = local_c;
    return 0;
  default:
    ExceptionList = local_c;
    return 0xb;
  case 4:
    puVar3 = operator_new(0xec);
    local_4 = 2;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3 = thunk_FUN_10006020(puVar3);
      *param_1 = puVar3;
      ExceptionList = local_c;
      return 0;
    }
    break;
  case 5:
    if (DAT_100b4a1c == 0) {
      ExceptionList = local_c;
      return 3;
    }
    puVar3 = operator_new(0xa60);
    local_4 = 3;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3 = thunk_FUN_10003f30(puVar3);
      *param_1 = puVar3;
      ExceptionList = local_c;
      return 0;
    }
    goto LAB_1000965d;
  case 6:
    puVar3 = operator_new(0xe8);
    local_4 = 4;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3 = thunk_FUN_10030080(puVar3);
      *param_1 = puVar3;
      ExceptionList = local_c;
      return 0;
    }
    break;
  case 7:
    puVar3 = operator_new(0x94);
    local_4 = 5;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3 = thunk_FUN_10031200(puVar3);
      *param_1 = puVar3;
      ExceptionList = local_c;
      return 0;
    }
LAB_1000965d:
    *param_1 = 0;
    ExceptionList = local_c;
    return 0;
  case 8:
    puVar3 = operator_new(0x10c);
    local_4 = 6;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3 = thunk_FUN_1002f740(puVar3);
      *param_1 = puVar3;
      ExceptionList = local_c;
      return 0;
    }
  }
  *param_1 = 0;
  ExceptionList = local_c;
  return 0;
}

