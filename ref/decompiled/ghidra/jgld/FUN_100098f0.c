/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100098f0 @ 0x100098F0 */


void __thiscall FUN_100098f0(void *this,LPRECT param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_50 [16];
  int local_10;
  int local_c;
  void *local_8;
  
  puVar3 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = this;
  (**(code **)(*(int *)this + 0xe4))();
  piVar1 = (int *)__chkesp();
  local_c = *piVar1;
  if (local_c == 0x10) {
    (**(code **)(*param_2 + 0xe4))();
    piVar1 = (int *)__chkesp();
    local_10 = *piVar1;
    if (local_10 == 0x10) {
      thunk_FUN_1000f6a0(param_1,param_2,param_3,param_4);
    }
  }
  local_8 = (void *)0x10009988;
  __chkesp();
  return;
}

