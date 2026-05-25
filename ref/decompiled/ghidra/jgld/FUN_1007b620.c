/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007b620 @ 0x1007B620 */


void __cdecl FUN_1007b620(int *param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_70 [16];
  int local_30;
  uint local_2c;
  void *local_28;
  byte *local_24;
  byte *local_20;
  byte *local_1c;
  uint local_18;
  byte local_14;
  undefined3 uStack_13;
  int local_10;
  int local_c;
  byte *local_8;
  
  puVar4 = local_70;
  for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10078fe0(param_1,"Missing IHDR before pCAL");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_10079040((int)param_1,"Invalid pCAL after IDAT");
      FUN_10079510(param_1,param_3);
      goto LAB_1007b992;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x400) != 0)) {
      FUN_10079040((int)param_1,"Duplicate pCAL chunk");
      FUN_10079510(param_1,param_3);
      goto LAB_1007b992;
    }
  }
  local_8 = (byte *)FUN_10078e60(param_1,param_3 + 1);
  local_2c = param_3;
  FUN_100794b0(param_1,local_8,param_3);
  iVar3 = FUN_10079510(param_1,0);
  if (iVar3 == 0) {
    local_8[local_2c] = 0;
    for (local_1c = local_8; *local_1c != 0; local_1c = local_1c + 1) {
    }
    local_24 = local_8 + local_2c;
    if (local_1c + 0xc < local_24) {
      local_c = FUN_10079410(local_1c + 1);
      local_10 = FUN_10079410(local_1c + 5);
      bVar1 = local_1c[9];
      _local_14 = CONCAT31(uStack_13,bVar1);
      bVar2 = local_1c[10];
      local_18 = CONCAT31(local_18._1_3_,bVar2);
      local_20 = local_1c + 0xb;
      if (((((bVar1 == 0) && (bVar2 != 2)) || ((bVar1 == 1 && (bVar2 != 3)))) ||
          ((bVar1 == 2 && (bVar2 != 3)))) || ((bVar1 == 3 && (bVar2 != 4)))) {
        FUN_10079040((int)param_1,"Invalid pCAL parameters for equation type");
        FUN_10078ed0((int)param_1,local_8);
      }
      else {
        if (3 < bVar1) {
          FUN_10079040((int)param_1,"Unrecognized equation type for pCAL chunk");
        }
        for (local_1c = local_20; *local_1c != 0; local_1c = local_1c + 1) {
        }
        local_28 = (void *)FUN_10078e60(param_1,(local_18 & 0xff) << 2);
        for (local_30 = 0; local_30 < (int)(local_18 & 0xff); local_30 = local_30 + 1) {
          local_1c = local_1c + 1;
          *(byte **)((int)local_28 + local_30 * 4) = local_1c;
          for (; (*local_1c != 0 && (local_1c <= local_24)); local_1c = local_1c + 1) {
          }
          if (local_24 < local_1c) {
            FUN_10079040((int)param_1,"Invalid pCAL data");
            FUN_10078ed0((int)param_1,local_8);
            FUN_10078ed0((int)param_1,local_28);
            goto LAB_1007b992;
          }
        }
        FUN_1007de10(param_1,param_2,(char *)local_8,local_c,local_10,(char)_local_14,
                     local_18 & 0xff,(char *)local_20,(int)local_28);
        FUN_10078ed0((int)param_1,local_8);
        FUN_10078ed0((int)param_1,local_28);
      }
    }
    else {
      FUN_10079040((int)param_1,"Invalid pCAL data");
      FUN_10078ed0((int)param_1,local_8);
    }
  }
  else {
    FUN_10078ed0((int)param_1,local_8);
  }
LAB_1007b992:
  local_8 = (byte *)0x1007b99f;
  __chkesp();
  return;
}

