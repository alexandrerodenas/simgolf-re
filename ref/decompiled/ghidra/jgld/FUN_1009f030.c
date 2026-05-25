/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009f030 @ 0x1009F030 */


void __cdecl
FUN_1009f030(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_504 [16];
  undefined4 local_4c4;
  undefined1 local_4c0 [32];
  code *local_4a0;
  undefined4 local_49c;
  undefined4 *local_498;
  uint local_488 [144];
  uint auStack_248 [112];
  uint auStack_88 [24];
  uint auStack_28 [8];
  int local_8;
  
  puVar2 = local_504;
  for (iVar1 = 0x140; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (DAT_10129b88 == 0) {
    local_4c4 = 0x212;
    local_4a0 = FUN_1009f210;
    local_49c = 0;
    local_498 = &local_4c4;
    for (local_8 = 0; local_8 < 0x90; local_8 = local_8 + 1) {
      local_488[local_8] = 8;
    }
    for (; local_8 < 0x100; local_8 = local_8 + 1) {
      local_488[local_8] = 9;
    }
    for (; local_8 < 0x118; local_8 = local_8 + 1) {
      local_488[local_8] = 7;
    }
    for (; local_8 < 0x120; local_8 = local_8 + 1) {
      local_488[local_8] = 8;
    }
    DAT_10129b84 = 7;
    FUN_1009e7a0(local_488,0x120,0x101,0x101272bc,0x10127338,&DAT_10128aec,&DAT_10129b84,
                 (int)local_4c0);
    for (local_8 = 0; local_8 < 0x1e; local_8 = local_8 + 1) {
      local_488[local_8] = 5;
    }
    DAT_10129b80 = 5;
    FUN_1009e7a0(local_488,0x1e,0,0x101273b4,0x1012742c,&DAT_10128ae8,&DAT_10129b80,(int)local_4c0);
    DAT_10129b88 = 1;
  }
  *param_1 = DAT_10129b84;
  *param_2 = DAT_10129b80;
  *param_3 = DAT_10128aec;
  *param_4 = DAT_10128ae8;
  local_8 = 0x1009f201;
  __chkesp();
  return;
}

