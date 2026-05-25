/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10005750 @ 0x10005750 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005750(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 local_60 [16];
  int local_20;
  float local_1c;
  int local_18;
  float local_14;
  int local_10;
  float local_c;
  undefined4 local_8;
  
  puVar2 = local_60;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_10 = thunk_FUN_100058a0(2);
  local_14 = (float)local_10;
  iVar1 = thunk_FUN_100058a0(param_2);
  local_18 = thunk_FUN_100058a0(2 - param_2);
  local_18 = iVar1 * local_18;
  local_c = local_14 / (float)local_18;
  fVar3 = (float10)thunk_FUN_10005840();
  local_1c = (float)(fVar3 * (float10)local_c);
  local_20 = 2 - param_2;
  thunk_FUN_10005840();
  local_8 = 0x100057fe;
  __chkesp();
  return;
}

