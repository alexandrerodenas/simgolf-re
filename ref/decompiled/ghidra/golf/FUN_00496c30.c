/* Ghidra decompiled: golf.exe */
/* Function: FUN_00496c30 @ 0x00496C30 */


void __thiscall FUN_00496c30(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((int *)param_1[0x9e] == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*(int *)param_1[0x9e] + 0xd8))();
  }
  if ((int *)param_1[0x9e] == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*(int *)param_1[0x9e] + 0xdc))();
  }
  if (iVar2 < iVar1) {
    if (param_2 < param_1[0x16b]) {
      param_1[0x169] = -1;
      param_1[0x166] = 0;
      (**(code **)(*param_1 + 0x6c))(param_2,param_3);
      goto LAB_00496d04;
    }
    if (param_1[0x16d] < param_2) {
      param_1[0x169] = 1;
      param_1[0x166] = 0;
      (**(code **)(*param_1 + 0x6c))(param_2,param_3);
      goto LAB_00496d04;
    }
LAB_00496cfe:
    param_1[0x169] = 0;
  }
  else {
    if (param_3 < param_1[0x16c]) {
      param_1[0x169] = -1;
    }
    else {
      if (param_3 <= param_1[0x16e]) goto LAB_00496cfe;
      param_1[0x169] = 1;
    }
    param_1[0x166] = 0;
    (**(code **)(*param_1 + 0x6c))(param_2,param_3);
  }
LAB_00496d04:
  if (DAT_0083ab30 == (int *)0x0) {
    DAT_0083ab34 = 0;
    DAT_0083ab30 = param_1;
  }
  return;
}

