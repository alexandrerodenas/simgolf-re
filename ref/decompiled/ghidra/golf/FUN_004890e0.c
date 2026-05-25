/* Ghidra decompiled: golf.exe */
/* Function: FUN_004890e0 @ 0x004890E0 */


void __thiscall FUN_004890e0(int *param_1,int param_2)

{
  if (param_2 != param_1[0x15e]) {
    param_1[0x15e] = param_2;
    (**(code **)(*param_1 + 0x120))();
    if ((int *)param_1[0x4c] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x4c] + 0xd8))(param_1[0x17a],param_2);
    }
  }
  return;
}

