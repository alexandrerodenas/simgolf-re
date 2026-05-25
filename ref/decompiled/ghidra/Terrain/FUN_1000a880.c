/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000a880 @ 0x1000A880 */


void __thiscall FUN_1000a880(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_58 [16];
  void *local_18;
  void *local_14;
  void *local_10;
  int local_c;
  void *local_8;
  
  puVar2 = local_58;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  if (DAT_10106b48 == (void *)0x0) {
    DAT_10106b48 = operator_new(param_2 << 2);
    local_10 = DAT_10106b48;
  }
  else {
    local_14 = DAT_10106b48;
    FUN_10018be0(this,DAT_10106b48);
    DAT_10106b48 = operator_new(param_2 << 2);
    local_18 = DAT_10106b48;
  }
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    *(undefined4 *)((int)DAT_10106b48 + local_c * 4) = *(undefined4 *)(param_1 + local_c * 4);
  }
  local_8 = (void *)0x1000a930;
  __chkesp();
  return;
}

