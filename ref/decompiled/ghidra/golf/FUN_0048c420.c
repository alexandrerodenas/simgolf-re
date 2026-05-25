/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048c420 @ 0x0048C420 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0048c420(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  _DAT_0083ab2c = *(undefined4 *)(*(int *)(*(int *)(param_1 + -0x58) + 4) + 0xd8 + param_1);
  iVar1 = *(int *)(param_1 + -0x34);
  iVar2 = *(int *)(*(int *)(param_1 + -0x58) + 8);
  iVar3 = *(int *)(iVar2 + 0x98 + param_1);
  if (param_2 == -2) {
    *(int *)(param_1 + -0x34) = *(int *)(iVar2 + param_1 + 4) * param_3;
  }
  else if (param_2 == -1) {
    *(int *)(param_1 + -0x34) = param_3;
  }
  if (DAT_0083ff18 != 0) {
    FUN_00489f50(*(undefined4 *)(param_1 + -0x34),1);
  }
  if (*(int *)(param_1 + -0x34) != iVar1) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + -0x58) + 4) + -0x58 + param_1) + 0x120))();
    return;
  }
  if (iVar3 != *(int *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + 0x98 + param_1)) {
    (*(code *)**(undefined4 **)(param_1 + -0x5c))(iVar3);
    (*(code *)**(undefined4 **)(param_1 + -0x5c))
              (*(undefined4 *)(*(int *)(*(int *)(param_1 + -0x58) + 8) + 0x98 + param_1));
  }
  FUN_00480ce0();
  return;
}

