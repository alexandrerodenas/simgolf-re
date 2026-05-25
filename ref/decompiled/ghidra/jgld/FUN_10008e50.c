/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10008e50 @ 0x10008E50 */


void __thiscall
FUN_10008e50(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,byte param_8)

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
  if (local_c == 8) {
    (**(code **)(*param_1 + 0xe4))();
    piVar1 = (int *)__chkesp();
    local_10 = *piVar1;
    if (local_10 == 8) {
      thunk_FUN_10013800(local_8,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else if (local_10 == 0x10) {
      thunk_FUN_10012900(local_8,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  local_8 = (void *)0x10008f2b;
  __chkesp();
  return;
}

