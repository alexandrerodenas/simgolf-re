/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044ac00 @ 0x0044AC00 */


void __thiscall FUN_0044ac00(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  while (param_3 != param_4) {
    piVar1 = (int *)*param_3;
    *(int *)param_3[1] = *param_3;
    *(int *)(*param_3 + 4) = param_3[1];
    FUN_004a4ffc(param_3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    param_3 = piVar1;
  }
  *param_2 = param_3;
  return;
}

