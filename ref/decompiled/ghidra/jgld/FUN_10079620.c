/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10079620 @ 0x10079620 */
/* Body size: 178 addresses */


void __cdecl FUN_10079620(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  uint local_10;
  int local_c;
  byte local_8 [4];
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_10 = 1;
  if ((*(byte *)(param_1 + 0x47) & 0x20) == 0) {
    if ((param_1[0x1b] & 0x800U) != 0) {
      local_10 = 0;
    }
  }
  else {
    local_10 = (uint)((param_1[0x1b] & 0x300U) != 0x300);
  }
  FUN_10078c40(param_1,local_8,4);
  if (local_10 != 0) {
    local_c = FUN_100793b0(local_8);
  }
  local_8[0] = 0xce;
  local_8[1] = 0x96;
  local_8[2] = 7;
  local_8[3] = 0x10;
  __chkesp();
  return;
}

