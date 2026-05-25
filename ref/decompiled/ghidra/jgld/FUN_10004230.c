/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10004230 @ 0x10004230 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10004230(void *this,float param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 local_54 [16];
  float local_14;
  float local_10;
  float local_c;
  undefined4 *local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = _DAT_1011d04c * param_1 * _DAT_1011d020;
  local_8 = this;
  fVar3 = (float10)FUN_1007ea54(this);
  local_10 = (float)fVar3;
  fVar3 = (float10)FUN_1007e9a4(extraout_ECX);
  local_14 = (float)fVar3;
  local_8[3] = local_10;
  *local_8 = *param_2;
  local_8[1] = param_2[1];
  local_8[2] = param_2[2];
  thunk_FUN_10003a40(local_8,local_14);
  local_8 = (undefined4 *)0x100042bc;
  __chkesp();
  return;
}

