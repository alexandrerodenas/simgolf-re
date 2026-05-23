/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007bc40 @ 0x1007BC40 */
/* Body size: 1296 addresses */


void __cdecl FUN_1007bc40(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_a8 [16];
  uint local_68;
  uint local_64;
  undefined1 local_60 [52];
  uint local_2c;
  byte *local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  byte *local_10;
  byte *local_c;
  int *local_8;
  
  puVar2 = local_a8;
  for (iVar1 = 0x29; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_14 = -1;
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10078fe0(param_1,"Missing IHDR before zTXt");
  }
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  local_c = (byte *)FUN_10078e60(param_1,param_3 + 1);
  local_18 = param_3;
  FUN_100794b0(param_1,local_c,param_3);
  iVar1 = FUN_10079510(param_1,0);
  if (iVar1 == 0) {
    local_c[local_18] = 0;
    for (local_10 = local_c; *local_10 != 0; local_10 = local_10 + 1) {
    }
    if (local_10 == local_c + local_18) {
      FUN_10079040((int)param_1,"Zero length zTXt chunk");
    }
    else {
      local_14 = (int)(char)local_10[1];
      if (local_14 == 0) {
        local_10 = local_10 + 2;
        param_1[0x1d] = (int)local_10;
        param_1[0x1e] = param_3 - ((int)local_10 - (int)local_c);
        param_1[0x20] = param_1[0x2b];
        param_1[0x21] = param_1[0x2c];
        local_20 = (int)local_10 - (int)local_c;
        local_1c = 0;
        local_10 = (byte *)0x0;
        while (param_1[0x1e] != 0) {
          local_24 = FUN_1009c0f0(param_1 + 0x1d,1);
          if ((local_24 != 0) && (local_24 != 1)) {
            if (param_1[0x23] == 0) {
              FUN_10079040((int)param_1,s_Error_decoding_zTXt_chunk_101232d0);
            }
            else {
              FUN_10079040((int)param_1,param_1[0x23]);
            }
            FUN_1009bdd0((int)(param_1 + 0x1d));
            param_1[0x1e] = 0;
            if (local_10 == (byte *)0x0) {
              local_1c = local_20 + 0x1b;
              local_10 = (byte *)FUN_10078e60(param_1,local_1c);
              FUN_1007f3a0((undefined4 *)local_10,(undefined4 *)local_c,local_20);
            }
            local_10[local_1c - 1] = 0;
            local_64 = (local_18 - ((int)local_10 - (int)local_c)) - 1;
            if (0x19 < local_64) {
              local_64 = 0x1a;
            }
            local_1c = local_64;
            FUN_1007f3a0((undefined4 *)(local_10 + local_20),
                         (undefined4 *)s_Error_decoding_zTXt_chunk_101232d0,local_64 + 1);
            break;
          }
          if ((param_1[0x21] == 0) || (local_24 == 1)) {
            if (local_10 == (byte *)0x0) {
              local_10 = (byte *)FUN_10078e60(param_1,(param_1[0x2c] - param_1[0x21]) + 1 + local_20
                                             );
              FUN_1007f3a0((undefined4 *)(local_10 + local_20),(undefined4 *)param_1[0x2b],
                           param_1[0x2c] - param_1[0x21]);
              FUN_1007f3a0((undefined4 *)local_10,(undefined4 *)local_c,local_20);
              local_1c = (local_20 + param_1[0x2c]) - param_1[0x21];
              local_10[local_1c] = 0;
            }
            else {
              local_28 = local_10;
              local_10 = (byte *)FUN_10078e60(param_1,((local_1c + param_1[0x2c]) - param_1[0x21]) +
                                                      1);
              FUN_1007f3a0((undefined4 *)local_10,(undefined4 *)local_28,local_1c);
              FUN_10078ed0((int)param_1,local_28);
              FUN_1007f3a0((undefined4 *)(local_10 + local_1c),(undefined4 *)param_1[0x2b],
                           param_1[0x2c] - param_1[0x21]);
              local_1c = local_1c + (param_1[0x2c] - param_1[0x21]);
              local_10[local_1c] = 0;
            }
            if (local_24 == 1) break;
            param_1[0x20] = param_1[0x2b];
            param_1[0x21] = param_1[0x2c];
          }
        }
        FUN_1009bdd0((int)(param_1 + 0x1d));
        param_1[0x1e] = 0;
        FUN_10078ed0((int)param_1,local_c);
        local_c = local_10;
        local_10 = local_10 + local_20;
      }
      else {
        local_10 = local_10 + 1;
        FUN_10082c80(local_60,(byte *)"Unknown zTXt compression type %d");
        FUN_10079040((int)param_1,local_60);
        local_68 = (local_18 - ((int)local_10 - (int)local_c)) - 1;
        if (0x19 < local_68) {
          local_68 = 0x1a;
        }
        local_2c = local_68;
        FUN_1007f3a0((undefined4 *)local_10,(undefined4 *)s_Error_decoding_zTXt_chunk_101232d0,
                     local_68 + 1);
      }
    }
    local_8 = (int *)FUN_10078e60(param_1,0x10);
    *local_8 = local_14;
    local_8[1] = (int)local_c;
    local_8[2] = (int)local_10;
    FUN_1007e220(param_1,param_2,(int)local_8,1);
    FUN_10078ed0((int)param_1,local_8);
  }
  else {
    FUN_10078ed0((int)param_1,local_c);
  }
  local_8 = (int *)0x1007c14c;
  __chkesp();
  return;
}

