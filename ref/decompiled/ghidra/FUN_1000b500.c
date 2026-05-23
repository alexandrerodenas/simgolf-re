/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000b500 @ 0x1000B500 */
/* Body size: 138 addresses */


void FUN_1000b500(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_54 [16];
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  puVar3 = local_54;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_c = thunk_FUN_1000b910(0xc);
  local_10 = local_c;
  if (param_1 != 0) {
    local_10 = param_1;
  }
  piVar1 = (int *)thunk_FUN_1000b600(local_c);
  *piVar1 = local_10;
  if (param_2 == 0) {
    local_14 = local_c;
  }
  else {
    local_14 = param_2;
  }
  piVar1 = (int *)thunk_FUN_1000b630(local_c);
  *piVar1 = local_14;
  local_8 = 0x1000b584;
  __chkesp();
  return;
}

