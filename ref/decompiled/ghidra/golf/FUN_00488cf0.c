/* Ghidra decompiled: golf.exe */
/* Function: FUN_00488cf0 @ 0x00488CF0 */


void __thiscall FUN_00488cf0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if ((int *)param_1[0x9e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x9e] + 0xd0))(&local_10);
  }
  iVar2 = local_c;
  local_c = 0;
  local_4 = local_4 - iVar2;
  local_8 = local_8 - local_10;
  local_10 = 0;
  piVar1 = DAT_0083ab40;
  if (DAT_0083ab40 == (int *)0x0) {
    piVar1 = DAT_0083ab44;
  }
  if ((piVar1 == param_1) && (DAT_0083ab48 != 0)) {
    iVar2 = FUN_00492610(param_2,param_3,&local_10);
    if ((iVar2 == 0) && (param_1[0x185] == 1)) {
      FUN_00486ec0();
      param_1[0x185] = 0;
      if (*(int **)(param_1[0x4c] + 0x78) != (int *)0x0) {
        (**(code **)(**(int **)(param_1[0x4c] + 0x78) + 0x1c))();
      }
      (**(code **)(*(int *)param_1[0x4c] + 0xcc))(param_1[0x17a]);
      (**(code **)(*param_1 + 0x120))();
      return;
    }
    iVar2 = FUN_00492610(param_2,param_3,&local_10);
    if (iVar2 != 0) {
      if (param_1[0x185] == 0) {
        if (param_1[0x16b] != -1) {
          FUN_00486d60(&LAB_00488fb0,1,param_1,param_1[0x16b],5);
        }
        param_1[0x185] = 1;
        if (*(int **)(param_1[0x4c] + 0x7c) != (int *)0x0) {
          (**(code **)(**(int **)(param_1[0x4c] + 0x7c) + 0x1c))();
        }
        (**(code **)(*(int *)param_1[0x4c] + 0xd0))(param_1[0x17a]);
        (**(code **)(*param_1 + 0x120))();
      }
      else {
        iVar2 = FUN_0047abc0();
        if (iVar2 != 0) {
          (**(code **)(*param_1 + 0x78))(param_2,param_3);
          return;
        }
      }
    }
  }
  return;
}

