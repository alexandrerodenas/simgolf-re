/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10004f40 @ 0x10004F40 */
/* Body size: 192 addresses */


void FUN_10004f40(void *param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_a0 [16];
  uint local_60;
  undefined4 local_5c;
  float afStack_58 [16];
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100aecc0;
  local_10 = ExceptionList;
  puVar2 = local_a0;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_60 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10004590(&local_5c);
  local_8 = 1;
  for (local_18 = 0; local_18 < 0xf; local_18 = local_18 + 5) {
    afStack_58[local_18] = param_2 * *(float *)(local_14 + 4 + local_18 * 4);
  }
  thunk_FUN_10006720(param_1,&local_5c);
  local_60 = local_60 | 1;
  local_8 = local_8 & 0xffffff00;
  thunk_FUN_100032f0(&local_5c);
  ExceptionList = local_10;
  local_8 = 0x10004ffa;
  __chkesp();
  return;
}

