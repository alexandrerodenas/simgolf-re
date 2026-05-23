/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100048e0 @ 0x100048E0 */
/* Body size: 198 addresses */


void FUN_100048e0(void *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_a0 [16];
  uint local_60;
  int local_5c;
  undefined4 local_58;
  float afStack_54 [16];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100aec60;
  local_10 = ExceptionList;
  puVar2 = local_a0;
  for (iVar1 = 0x24; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_60 = 0;
  ExceptionList = &local_10;
  thunk_FUN_10004590(&local_58);
  local_8 = 1;
  for (local_5c = 0; local_5c < 0x10; local_5c = local_5c + 1) {
    afStack_54[local_5c] =
         *(float *)(local_14 + 4 + local_5c * 4) + *(float *)(param_2 + 4 + local_5c * 4);
  }
  thunk_FUN_10006720(param_1,&local_58);
  local_60 = local_60 | 1;
  local_8 = local_8 & 0xffffff00;
  thunk_FUN_100032f0(&local_58);
  ExceptionList = local_10;
  local_8 = 0x100049a0;
  __chkesp();
  return;
}

