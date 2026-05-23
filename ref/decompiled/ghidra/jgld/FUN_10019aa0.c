/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10019aa0 @ 0x10019AA0 */
/* Body size: 181 addresses */


void FUN_10019aa0(int *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  int local_c;
  int *local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  (**(code **)(*param_2 + 0xe4))();
  piVar1 = (int *)__chkesp();
  if (*piVar1 == 0x10) {
    (**(code **)(*local_8 + 0x28))();
    iVar2 = __chkesp();
    if (iVar2 == 8) {
      (**(code **)(*param_1 + 0x28))();
      iVar2 = __chkesp();
      if (iVar2 == 8) {
        local_c = local_8[4];
        if (param_5 != 0) {
          local_8[4] = param_5;
        }
        thunk_FUN_10025dd0(local_8,(int)param_1,param_2,param_3,param_4);
      }
    }
  }
  local_8 = (int *)0x10019b4f;
  __chkesp();
  return;
}

