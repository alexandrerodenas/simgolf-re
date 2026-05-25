/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10079cc0 @ 0x10079CC0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10079cc0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 local_60 [16];
  uint local_20;
  undefined4 uStack_1c;
  uint local_18;
  undefined4 uStack_14;
  byte local_10 [4];
  float local_c;
  uint local_8;
  
  puVar2 = local_60;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10078fe0(param_1,"Missing IHDR before gAMA");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_10079040((int)param_1,"Invalid gAMA after IDAT");
      FUN_10079510(param_1,param_3);
      goto LAB_10079eae;
    }
    if ((param_1[0x1a] & 2U) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 1) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        FUN_10079040((int)param_1,"Duplicate gAMA chunk");
        FUN_10079510(param_1,param_3);
        goto LAB_10079eae;
      }
    }
    else {
      FUN_10079040((int)param_1,"Out of place gAMA chunk");
    }
  }
  if (param_3 == 4) {
    FUN_100794b0(param_1,local_10,4);
    iVar1 = FUN_10079510(param_1,0);
    if ((iVar1 == 0) && (local_8 = FUN_100793b0(local_10), local_8 != 0)) {
      if ((*(uint *)(param_2 + 8) & 0x800) != 0) {
        uStack_14 = 0;
        local_18 = local_8;
        fVar3 = FUN_10082960(SUB84((double)local_8 - _DAT_1011e328,0),
                             (uint)((ulonglong)((double)local_8 - _DAT_1011e328) >> 0x20));
        if ((float10)_DAT_1011e320 < fVar3) {
          FUN_10079040((int)param_1,"Ignoring incorrect gAMA value when sRGB is also present");
          FUN_10083010((undefined **)&DAT_101233f0,(byte *)0x1011e2d8);
          goto LAB_10079eae;
        }
      }
      local_20 = local_8;
      uStack_1c = 0;
      local_c = (float)local_8 / _DAT_1011e2d4;
      param_1[0x57] = (int)local_c;
      FUN_1007dbd0((int)param_1,param_2,(double)local_c);
    }
  }
  else {
    FUN_10079040((int)param_1,"Incorrect gAMA chunk length");
    FUN_10079510(param_1,param_3);
  }
LAB_10079eae:
  local_8 = 0x10079ebb;
  __chkesp();
  return;
}

