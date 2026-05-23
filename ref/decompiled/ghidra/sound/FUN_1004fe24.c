/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004fe24 @ 0x1004FE24 */
/* Body size: 250 addresses */


int __cdecl FUN_1004fe24(byte *param_1,uint param_2,byte *param_3,int *param_4,undefined *param_5)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  uint local_8;
  
  local_8 = param_2;
  InterlockedIncrement(&DAT_100b58dc);
  bVar4 = DAT_100b58cc == 0;
  if (!bVar4) {
    InterlockedDecrement(&DAT_100b58dc);
    FUN_10047710(0x13);
  }
  pbVar2 = param_3;
  if (param_5 == (undefined *)0x0) {
    param_5 = PTR_PTR_100684b8;
  }
  while ((local_8 != 0 && (bVar1 = *pbVar2, bVar1 != 0))) {
    if (bVar1 == 0x25) {
      pbVar3 = pbVar2 + 1;
      bVar1 = *pbVar3;
      if (bVar1 == 0x23) {
        pbVar3 = pbVar2 + 2;
      }
      DAT_100b58b8 = (uint)(bVar1 == 0x23);
      FUN_1004ff1e(*pbVar3,param_4,(byte *)&param_1,&local_8,(int)param_5);
    }
    else {
      if (((PTR_DAT_1006773c[(uint)bVar1 * 2 + 1] & 0x80) != 0) && (1 < local_8)) {
        *param_1 = bVar1;
        param_1 = param_1 + 1;
        pbVar2 = pbVar2 + 1;
        local_8 = local_8 - 1;
      }
      *param_1 = *pbVar2;
      param_1 = param_1 + 1;
      local_8 = local_8 - 1;
      pbVar3 = pbVar2;
    }
    pbVar2 = pbVar3 + 1;
  }
  if (bVar4) {
    InterlockedDecrement(&DAT_100b58dc);
  }
  else {
    FUN_10047771(0x13);
  }
  if (local_8 == 0) {
    return 0;
  }
  *param_1 = 0;
  return param_2 - local_8;
}

