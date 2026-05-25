/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10005d10 @ 0x10005D10 */


void __thiscall FUN_10005d10(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  void *local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_14 = *param_2;
  local_10 = param_2[1];
  local_c = param_2[2];
  local_8 = this;
  if ((*(uint *)((int)this + 0x20) & 0x1c) != 0) {
    thunk_FUN_10004100((float *)((int)this + 4));
  }
  if ((*(uint *)((int)local_8 + 0x20) & 2) != 0) {
    thunk_FUN_100038b0(&local_14,(int)local_8 + 0x14);
  }
  *param_1 = local_14;
  param_1[1] = local_10;
  param_1[2] = local_c;
  local_8 = (void *)0x10005d9d;
  __chkesp();
  return;
}

