/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007baf0 @ 0x1007BAF0 */
/* Body size: 334 addresses */


void __cdecl FUN_1007baf0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_58 [16];
  uint local_18;
  uint local_14;
  byte *local_10;
  byte *local_c;
  undefined4 *local_8;
  
  puVar2 = local_58;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_14 = 0;
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10078fe0(param_1,"Missing IHDR before tEXt");
  }
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  local_c = (byte *)FUN_10078e60(param_1,param_3 + 1);
  local_18 = param_3;
  FUN_100794b0(param_1,local_c,param_3);
  iVar1 = FUN_10079510(param_1,local_14);
  if (iVar1 == 0) {
    local_c[local_18] = 0;
    for (local_10 = local_c; *local_10 != 0; local_10 = local_10 + 1) {
    }
    if (local_10 != local_c + local_18) {
      local_10 = local_10 + 1;
    }
    local_8 = (undefined4 *)FUN_10078e60(param_1,0x10);
    *local_8 = 0xffffffff;
    local_8[1] = local_c;
    local_8[2] = local_10;
    FUN_1007e220(param_1,param_2,(int)local_8,1);
    FUN_10078ed0((int)param_1,local_8);
  }
  else {
    FUN_10078ed0((int)param_1,local_c);
  }
  local_8 = (undefined4 *)0x1007bc3a;
  __chkesp();
  return;
}

