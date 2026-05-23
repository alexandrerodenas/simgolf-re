/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10079510 @ 0x10079510 */
/* Body size: 272 addresses */


void __cdecl FUN_10079510(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  uint local_c;
  uint local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = param_1[0x2c];
  for (local_8 = param_2; local_c < local_8; local_8 = local_8 - local_c) {
    FUN_100794b0(param_1,(byte *)param_1[0x2b],param_1[0x2c]);
  }
  if (local_8 != 0) {
    FUN_100794b0(param_1,(byte *)param_1[0x2b],local_8);
  }
  iVar1 = FUN_10079620(param_1);
  if (iVar1 != 0) {
    if ((((*(byte *)(param_1 + 0x47) & 0x20) == 0) || ((param_1[0x1b] & 0x200U) != 0)) &&
       (((*(byte *)(param_1 + 0x47) & 0x20) != 0 || ((param_1[0x1b] & 0x400U) == 0)))) {
      FUN_100790a0(param_1,(undefined4 *)"CRC error");
    }
    else {
      FUN_10079250((int)param_1,(undefined4 *)"CRC error");
    }
  }
  local_8 = 0x1007961c;
  __chkesp();
  return;
}

