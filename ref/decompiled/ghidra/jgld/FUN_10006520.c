/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10006520 @ 0x10006520 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006520(float param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_64 [16];
  float local_24 [4];
  undefined4 local_14 [3];
  int local_8;
  
  puVar2 = local_64;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_10003050(local_24);
  if (param_1 != _DAT_1011d054) {
    thunk_FUN_100036e0(local_14,0,0x3f800000,0);
    if (*(int *)(local_8 + 0x20) == 0) {
      thunk_FUN_10004230((void *)(local_8 + 4),param_1,local_14);
    }
    else {
      thunk_FUN_10004230(local_24,param_1,local_14);
      if ((*(uint *)(local_8 + 0x20) & 2) != 0) {
        thunk_FUN_10004100(local_24);
      }
      thunk_FUN_100042f0(local_24);
    }
    *(uint *)(local_8 + 0x20) = *(uint *)(local_8 + 0x20) | 8;
  }
  local_8 = 0x100065dd;
  __chkesp();
  return;
}

