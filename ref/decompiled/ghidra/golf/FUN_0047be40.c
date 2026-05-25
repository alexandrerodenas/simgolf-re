/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047be40 @ 0x0047BE40 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047be40(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_10 [16];
  
  uVar2 = param_3;
  uVar1 = param_2;
  if ((param_1[0x27] & 0x200000U) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x28) & 8) != 0) {
    return;
  }
  if (param_4 != 0) {
    (**(code **)(*param_1 + 0xa0))(param_2,param_3);
    if ((int *)param_1[0x14] == (int *)0x0) {
      return;
    }
    (**(code **)(*(int *)param_1[0x14] + 0x1c))();
    return;
  }
  _DAT_0083ab2c = param_1;
  if ((code *)param_1[0x8e] != (code *)0x0) {
    (*(code *)param_1[0x8e])(param_2,param_3);
  }
  iVar3 = FUN_00492b10(uVar1,uVar2,&param_2,&param_3,local_10);
  if (iVar3 < 0) {
    FUN_00492d40();
  }
  else {
    param_4 = (**(code **)(*param_1 + 0x50))(param_2,param_3,local_10);
    FUN_00492cc0(param_2,param_3,param_1);
    if (param_4 != 0) goto LAB_0047bef0;
  }
  (**(code **)(*param_1 + 0x6c))(uVar1,uVar2);
LAB_0047bef0:
  if ((int *)param_1[7] == (int *)0x0) {
    return;
  }
  (**(code **)(*(int *)param_1[7] + 0x1c))();
  return;
}

