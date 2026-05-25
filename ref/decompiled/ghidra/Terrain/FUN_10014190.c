/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10014190 @ 0x10014190 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10014190(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_88 [16];
  float *local_48;
  float *local_44;
  float *local_40;
  float *local_3c;
  float *local_38;
  float *local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  float *local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  float *local_10;
  float *local_c;
  int local_8;
  
  puVar2 = local_88;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *(float *)(&DAT_100b28cc + *(int *)(param_1 + 0x50) * 0xc) =
       *(float *)(&DAT_100b28cc + *(int *)(param_1 + 0x50) * 0xc) - _DAT_1005f51c;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar1 = thunk_FUN_10001f60(*(int *)(param_1 + 0x34));
    if (iVar1 == 6) {
      *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0x88) * 0xc) =
           *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0x88) * 0xc) - _DAT_1005f51c;
      iVar1 = thunk_FUN_100153c0(*(int *)(local_8 + 0x34));
      local_c = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 0x120) * 0xc);
      *local_c = *local_c - _DAT_1005f51c;
      if (*(int *)(local_8 + 0x3c) != 0) {
        iVar1 = thunk_FUN_10001f60(*(int *)(local_8 + 0x3c));
        if (iVar1 == 6) {
          iVar1 = thunk_FUN_10001f60(*(int *)(*(int *)(local_8 + 0x34) + 0x3c));
          if (iVar1 == 6) {
            *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0x48) * 0xc) =
                 *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0x48) * 0xc) + _DAT_1005f51c;
            iVar1 = thunk_FUN_100153c0(*(int *)(local_8 + 0x34));
            local_10 = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 0xe8) * 0xc);
            *local_10 = *local_10 - _DAT_1005f51c;
            iVar1 = thunk_FUN_100153c0(*(int *)(local_8 + 0x3c));
            local_14 = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 0xb4) * 0xc);
            *local_14 = *local_14 - _DAT_1005f51c;
            iVar1 = thunk_FUN_100153c0(*(int *)(*(int *)(local_8 + 0x34) + 0x3c));
            local_18 = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 400) * 0xc);
            *local_18 = *local_18 - _DAT_1005f51c;
          }
        }
      }
      if (*(int *)(local_8 + 0x40) != 0) {
        iVar1 = thunk_FUN_10001f60(*(int *)(local_8 + 0x40));
        if (iVar1 == 6) {
          iVar1 = thunk_FUN_10001f60(*(int *)(*(int *)(local_8 + 0x34) + 0x40));
          if (iVar1 == 6) {
            *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0xf8) * 0xc) =
                 *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0xf8) * 0xc) - _DAT_1005f51c;
            iVar1 = thunk_FUN_100153c0(*(int *)(local_8 + 0x34));
            local_1c = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 400) * 0xc);
            *local_1c = *local_1c - _DAT_1005f51c;
            iVar1 = thunk_FUN_100153c0(*(int *)(local_8 + 0x40));
            local_20 = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 4) * 0xc);
            *local_20 = *local_20 - _DAT_1005f51c;
            iVar1 = thunk_FUN_100153c0(*(int *)(*(int *)(local_8 + 0x34) + 0x40));
            local_24 = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 0xe8) * 0xc);
            *local_24 = *local_24 - _DAT_1005f51c;
          }
        }
      }
    }
  }
  if (*(int *)(local_8 + 0x38) != 0) {
    iVar1 = thunk_FUN_10001f60(*(int *)(local_8 + 0x38));
    if (iVar1 == 6) {
      *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0x164) * 0xc) =
           *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0x164) * 0xc) - _DAT_1005f51c;
      iVar1 = thunk_FUN_100153c0(*(int *)(local_8 + 0x38));
      local_28 = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 0x44) * 0xc);
      *local_28 = *local_28 - _DAT_1005f51c;
      if (*(int *)(local_8 + 0x3c) != 0) {
        iVar1 = thunk_FUN_10001f60(*(int *)(local_8 + 0x3c));
        if (iVar1 == 6) {
          iVar1 = thunk_FUN_10001f60(*(int *)(*(int *)(local_8 + 0x38) + 0x3c));
          if (iVar1 == 6) {
            *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0x160) * 0xc) =
                 *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0x160) * 0xc) - _DAT_1005f51c;
            iVar1 = thunk_FUN_100153c0(*(int *)(local_8 + 0x38));
            local_2c = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 4) * 0xc);
            *local_2c = *local_2c - _DAT_1005f51c;
            iVar1 = thunk_FUN_100153c0(*(int *)(local_8 + 0x3c));
            local_30 = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 400) * 0xc);
            *local_30 = *local_30 - _DAT_1005f51c;
            iVar1 = thunk_FUN_100153c0(*(int *)(*(int *)(local_8 + 0x38) + 0x3c));
            local_34 = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 0xb4) * 0xc);
            *local_34 = *local_34 - _DAT_1005f51c;
          }
        }
      }
      if (*(int *)(local_8 + 0x40) != 0) {
        iVar1 = thunk_FUN_10001f60(*(int *)(local_8 + 0x40));
        if (iVar1 == 6) {
          iVar1 = thunk_FUN_10001f60(*(int *)(*(int *)(local_8 + 0x38) + 0x40));
          if (iVar1 == 6) {
            *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0x1d4) * 0xc) =
                 *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0x1d4) * 0xc) - _DAT_1005f51c;
            iVar1 = thunk_FUN_100153c0(*(int *)(local_8 + 0x38));
            local_38 = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 0xb4) * 0xc);
            *local_38 = *local_38 - _DAT_1005f51c;
            iVar1 = thunk_FUN_100153c0(*(int *)(local_8 + 0x40));
            local_3c = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 0xe8) * 0xc);
            *local_3c = *local_3c - _DAT_1005f51c;
            iVar1 = thunk_FUN_100153c0(*(int *)(*(int *)(local_8 + 0x38) + 0x40));
            local_40 = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 4) * 0xc);
            *local_40 = *local_40 - _DAT_1005f51c;
          }
        }
      }
    }
  }
  if (*(int *)(local_8 + 0x3c) != 0) {
    iVar1 = thunk_FUN_10001f60(*(int *)(local_8 + 0x3c));
    if (iVar1 == 6) {
      *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0x4c) * 0xc) =
           *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0x4c) * 0xc) - _DAT_1005f51c;
      iVar1 = thunk_FUN_100153c0(*(int *)(local_8 + 0x3c));
      local_44 = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 0xb0) * 0xc);
      *local_44 = *local_44 - _DAT_1005f51c;
    }
  }
  if (*(int *)(local_8 + 0x40) != 0) {
    iVar1 = thunk_FUN_10001f60(*(int *)(local_8 + 0x40));
    if (iVar1 == 6) {
      *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0xf4) * 0xc) =
           *(float *)(&DAT_100b28cc + *(int *)(local_8 + 0xf4) * 0xc) - _DAT_1005f51c;
      iVar1 = thunk_FUN_100153c0(*(int *)(local_8 + 0x40));
      local_48 = (float *)(&DAT_100b28cc + *(int *)(iVar1 + 8) * 0xc);
      *local_48 = *local_48 - _DAT_1005f51c;
    }
  }
  *(undefined1 *)(local_8 + 0x244) = 1;
  if (*(int *)(local_8 + 0x34) != 0) {
    *(undefined1 *)(*(int *)(local_8 + 0x34) + 0x244) = 1;
  }
  if ((*(int *)(local_8 + 0x34) != 0) && (*(int *)(local_8 + 0x3c) != 0)) {
    *(undefined1 *)(*(int *)(*(int *)(local_8 + 0x34) + 0x3c) + 0x244) = 1;
  }
  if ((*(int *)(local_8 + 0x34) != 0) && (*(int *)(local_8 + 0x40) != 0)) {
    *(undefined1 *)(*(int *)(*(int *)(local_8 + 0x34) + 0x40) + 0x244) = 1;
  }
  if (*(int *)(local_8 + 0x3c) != 0) {
    *(undefined1 *)(*(int *)(local_8 + 0x3c) + 0x244) = 1;
  }
  if (*(int *)(local_8 + 0x40) != 0) {
    *(undefined1 *)(*(int *)(local_8 + 0x40) + 0x244) = 1;
  }
  if (*(int *)(local_8 + 0x38) != 0) {
    *(undefined1 *)(*(int *)(local_8 + 0x38) + 0x244) = 1;
  }
  if ((*(int *)(local_8 + 0x38) != 0) && (*(int *)(local_8 + 0x3c) != 0)) {
    *(undefined1 *)(*(int *)(*(int *)(local_8 + 0x38) + 0x3c) + 0x244) = 1;
  }
  if ((*(int *)(local_8 + 0x38) != 0) && (*(int *)(local_8 + 0x40) != 0)) {
    *(undefined1 *)(*(int *)(*(int *)(local_8 + 0x38) + 0x40) + 0x244) = 1;
  }
  local_8 = 0x1001482f;
  __chkesp();
  return;
}

