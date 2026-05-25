/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047b4e0 @ 0x0047B4E0 */


undefined4 __thiscall FUN_0047b4e0(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*param_1 + 0x11c))();
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 0x54))(&param_2,&param_3,&param_4);
  }
  if (param_4 != 0) {
    if ((*(byte *)(param_1 + 0x28) & 2) == 0) {
      iVar3 = param_1[0x6b];
      iVar2 = param_1[0x6c];
      param_1[0x6b] = iVar3;
      param_1[0x6d] = iVar3 + param_2;
      param_1[0x6c] = iVar2;
      param_1[0x6e] = iVar2 + param_3;
      goto LAB_0047b5eb;
    }
    FUN_0047ca10(&param_2,&param_3);
    param_4 = 0;
  }
  iVar3 = param_1[0x6f];
  iVar2 = param_1[0x70];
  param_1[0x6f] = iVar3;
  param_1[0x70] = iVar2;
  param_1[0x71] = iVar3 + param_2;
  piVar1 = param_1 + 0x6b;
  param_1[0x72] = iVar2 + param_3;
  *piVar1 = param_1[0x6f];
  param_1[0x6c] = param_1[0x70];
  param_1[0x6d] = param_1[0x71];
  param_1[0x6e] = param_1[0x72];
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -iVar3;
  param_1[0x6d] = param_1[0x6d] + -iVar3;
  param_1[0x6e] = param_1[0x6e] + -param_1[0x6c];
  param_1[0x6c] = param_1[0x6c] + -param_1[0x6c];
  FUN_0047cce0(piVar1);
LAB_0047b5eb:
  (**(code **)(*param_1 + 0x130))();
  FUN_0047b9a0();
  FUN_0047e140(param_1,param_1 + 0x77);
  if ((int *)param_1[0x2c] != param_1) {
    (**(code **)(*(int *)param_1[0x2c] + 0xc))(param_2,param_3,0,0);
  }
  FUN_0047bc60(param_1[0x6d] - param_1[0x6b],param_1[0x6e] - param_1[0x6c]);
  if (DAT_0083ad50 != (int *)0x0) {
    (**(code **)(*DAT_0083ad50 + 0x30))(0);
  }
  (**(code **)(*param_1 + 0x58))();
  return 0;
}

