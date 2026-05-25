/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100221a0 @ 0x100221A0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_100221a0(int param_1,int param_2,int param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_10;
  
  local_10 = 0;
  if (_DAT_1005f368 <= (double)CONCAT44(param_2,param_1)) {
    local_1c = (double)CONCAT44(param_2,param_1);
  }
  else {
    local_1c = -(double)CONCAT44(param_2,param_1);
  }
  if ((param_4 == 0x7ff00000) && (param_3 == 0)) {
    if (local_1c <= _DAT_10060328) {
      if (_DAT_10060328 <= local_1c) {
        *param_5 = DAT_10066a18;
        param_5[1] = DAT_10066a1c;
        local_10 = 1;
      }
      else {
        *param_5 = 0;
        param_5[1] = 0;
      }
    }
    else {
      *param_5 = DAT_10066a10;
      param_5[1] = DAT_10066a14;
    }
  }
  else if ((param_4 == 0xfff00000) && (param_3 == 0)) {
    if (local_1c <= _DAT_10060328) {
      if (_DAT_10060328 <= local_1c) {
        *param_5 = DAT_10066a18;
        param_5[1] = DAT_10066a1c;
        local_10 = 1;
      }
      else {
        *param_5 = DAT_10066a10;
        param_5[1] = DAT_10066a14;
      }
    }
    else {
      *param_5 = 0;
      param_5[1] = 0;
    }
  }
  else if ((param_2 == 0x7ff00000) && (param_1 == 0)) {
    if ((double)CONCAT44(param_4,param_3) <= _DAT_1005f368) {
      if (_DAT_1005f368 <= (double)CONCAT44(param_4,param_3)) {
        *param_5 = 0;
        param_5[1] = 0x3ff00000;
      }
      else {
        *param_5 = 0;
        param_5[1] = 0;
      }
    }
    else {
      *param_5 = DAT_10066a10;
      param_5[1] = DAT_10066a14;
    }
  }
  else if ((param_2 == -0x100000) && (param_1 == 0)) {
    iVar1 = FUN_10022410(param_3,param_4);
    if ((double)CONCAT44(param_4,param_3) <= _DAT_1005f368) {
      if (_DAT_1005f368 <= (double)CONCAT44(param_4,param_3)) {
        *param_5 = 0;
        param_5[1] = 0x3ff00000;
      }
      else {
        if (iVar1 == 1) {
          local_2c = DAT_10066a30;
          local_28 = DAT_10066a34;
        }
        else {
          local_2c = 0;
          local_28 = 0;
        }
        *param_5 = local_2c;
        param_5[1] = local_28;
      }
    }
    else {
      if (iVar1 == 1) {
        local_24 = -(double)CONCAT44(DAT_10066a14,DAT_10066a10);
      }
      else {
        local_24 = (double)CONCAT44(DAT_10066a14,DAT_10066a10);
      }
      *param_5 = (undefined4)local_24;
      param_5[1] = local_24._4_4_;
    }
  }
  return local_10;
}

