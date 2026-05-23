/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10009440 @ 0x10009440 */
/* Body size: 127 addresses */


void __thiscall FUN_10009440(void *this,undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  int local_c;
  void *local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 0xe4))();
  piVar1 = (int *)__chkesp();
  local_c = *piVar1;
  if (local_c == 8) {
    thunk_FUN_1000f9e0(*param_1,param_1[1],param_1[2],param_1[3],param_2);
  }
  local_8 = (void *)0x100094b9;
  __chkesp();
  return;
}

