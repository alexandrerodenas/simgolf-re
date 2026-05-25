/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10009320 @ 0x10009320 */


void __thiscall FUN_10009320(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  char cVar6;
  undefined4 local_4c [16];
  int local_c;
  void *local_8;
  
  puVar4 = local_4c;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if (param_1 != (int *)0x0) {
    local_8 = this;
    (**(code **)(*(int *)this + 0xe4))();
    piVar1 = (int *)__chkesp();
    local_c = *piVar1;
    if (local_c == 8) {
      iVar3 = thunk_FUN_10009160((int)param_1);
      cVar6 = (char)param_3;
      cVar5 = (char)param_2;
      iVar2 = thunk_FUN_10009120(param_1);
      thunk_FUN_1000f880(*param_1,param_1[1],iVar2,iVar3,cVar5,cVar6);
    }
    else if (local_c == 0x10) {
      iVar3 = thunk_FUN_10009160((int)param_1);
      iVar2 = thunk_FUN_10009120(param_1);
      thunk_FUN_1000afe0(*param_1,param_1[1],iVar2,iVar3,(short)param_2,(short)param_3);
    }
  }
  local_8 = (void *)0x100093fb;
  __chkesp();
  return;
}

