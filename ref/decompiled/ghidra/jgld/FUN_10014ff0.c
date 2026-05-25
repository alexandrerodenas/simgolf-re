/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10014ff0 @ 0x10014FF0 */


void __thiscall
FUN_10014ff0(void *this,undefined4 *param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  int local_10;
  int local_c;
  int *local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_10 = param_4;
  local_8 = this;
  if (param_4 == 8) {
    local_c = thunk_FUN_1001b690(this,param_1,param_2,param_3);
  }
  else if (param_4 == 0x10) {
    local_c = thunk_FUN_1001a250(this,param_1,param_2,param_3);
  }
  if (local_c == 0) {
    (**(code **)(*local_8 + 0x10))(param_6);
    __chkesp();
  }
  local_8 = (int *)0x10015093;
  __chkesp();
  return;
}

