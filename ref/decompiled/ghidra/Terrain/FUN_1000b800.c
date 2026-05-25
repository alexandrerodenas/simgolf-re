/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000b800 @ 0x1000B800 */


void FUN_1000b800(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_50 [16];
  undefined4 local_10;
  void *local_c;
  void *local_8;
  
  puVar1 = local_50;
  for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = 0xcccccccc;
    puVar1 = puVar1 + 1;
  }
  puVar1 = (undefined4 *)thunk_FUN_1000b320(&param_2,&local_10);
  local_c = (void *)thunk_FUN_1000b710(puVar1);
  puVar1 = (undefined4 *)thunk_FUN_1000b600(local_c);
  puVar2 = (undefined4 *)thunk_FUN_1000b630((int)local_c);
  puVar2 = (undefined4 *)thunk_FUN_1000b600(*puVar2);
  *puVar2 = *puVar1;
  puVar1 = (undefined4 *)thunk_FUN_1000b630((int)local_c);
  piVar3 = (int *)thunk_FUN_1000b600(local_c);
  puVar2 = (undefined4 *)thunk_FUN_1000b630(*piVar3);
  *puVar2 = *puVar1;
  thunk_FUN_1000b660((int)local_c);
  thunk_FUN_1000b9f0();
  thunk_FUN_1000b5b0(local_8,local_c);
  *(int *)((int)local_8 + 8) = *(int *)((int)local_8 + 8) + -1;
  *param_1 = param_2;
  local_8 = (void *)0x1000b8cf;
  __chkesp();
  return;
}

