/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000b100 @ 0x1000B100 */


void FUN_1000b100(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_50 [16];
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  puVar3 = local_50;
  for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_c = thunk_FUN_1000b710(&param_2);
  piVar1 = (int *)thunk_FUN_1000b630(local_c);
  uVar2 = thunk_FUN_1000b500(local_c,*piVar1);
  puVar3 = (undefined4 *)thunk_FUN_1000b630(local_c);
  *puVar3 = uVar2;
  piVar1 = (int *)thunk_FUN_1000b630(local_c);
  local_c = *piVar1;
  puVar3 = (undefined4 *)thunk_FUN_1000b630(local_c);
  piVar1 = (int *)thunk_FUN_1000b600(*puVar3);
  *piVar1 = local_c;
  puVar3 = param_3;
  iVar4 = thunk_FUN_1000b660(local_c);
  thunk_FUN_1000b690(iVar4,puVar3);
  *(int *)(local_8 + 8) = *(int *)(local_8 + 8) + 1;
  puVar3 = (undefined4 *)thunk_FUN_1000b750(local_10,local_c);
  *param_1 = *puVar3;
  local_8 = 0x1000b1cb;
  __chkesp();
  return;
}

