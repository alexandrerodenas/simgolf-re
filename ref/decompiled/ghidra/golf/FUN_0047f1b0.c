/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047f1b0 @ 0x0047F1B0 */
/* Body size: 126 addresses */


void __thiscall
FUN_0047f1b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  FUN_0047e120();
  if (*(int **)(param_1 + 0x130) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x130) + 300))(param_1);
  }
  if (param_5 == 0) {
    DAT_0083ab44 = 0;
    DAT_0083ab40 = param_1;
  }
  else {
    DAT_0083ab40 = 0;
    DAT_0083ab44 = param_1;
  }
  DAT_0083ab48 = 0;
  if ((param_2 != 0) && ((*(uint *)(param_1 + 0x9c) & 0x200) == 0)) {
    FUN_0047c010(param_3,param_4,param_5);
  }
  FUN_0047c430(param_3,param_4,param_5);
  return;
}

