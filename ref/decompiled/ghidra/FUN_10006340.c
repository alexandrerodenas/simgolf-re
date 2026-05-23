/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10006340 @ 0x10006340 */
/* Body size: 178 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006340(float param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_58 [16];
  float local_18 [4];
  int local_8;
  
  puVar2 = local_58;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_10003050(local_18);
  if (param_1 != _DAT_1011d054) {
    if (*(int *)(local_8 + 0x20) == 0) {
      thunk_FUN_10004230((void *)(local_8 + 4),param_1,param_2);
    }
    else {
      thunk_FUN_10004230(local_18,param_1,param_2);
      if ((*(uint *)(local_8 + 0x20) & 2) != 0) {
        thunk_FUN_10004100(local_18);
      }
      thunk_FUN_100042f0(local_18);
    }
    *(uint *)(local_8 + 0x20) = *(uint *)(local_8 + 0x20) | 0x1c;
  }
  local_8 = 0x100063ec;
  __chkesp();
  return;
}

