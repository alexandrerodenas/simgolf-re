/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10009e40 @ 0x10009E40 */


void __thiscall FUN_10009e40(void *this,int *param_1,uint param_2,int param_3)

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
  if (local_c == 0x10) {
    thunk_FUN_1000e8b0(local_8,param_1,param_2,param_3);
  }
  local_8 = (void *)0x10009ea9;
  __chkesp();
  return;
}

