/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047ab50 @ 0x0047AB50 */
/* Body size: 103 addresses */


void __thiscall FUN_0047ab50(int param_1,int *param_2,int *param_3)

{
  int iStack_10;
  int iStack_c;
  
  if ((param_2 != (int *)0x0) && (param_3 != (int *)0x0)) {
    if (DAT_0083ad50 != (int *)0x0) {
      (**(code **)(*DAT_0083ad50 + 0x2c))(param_2,param_3);
    }
    FUN_0047b200(param_2,param_3);
    if (param_1 == DAT_0083aa9c) {
      if (DAT_0083ad50 != (int *)0x0) {
        (**(code **)(*DAT_0083ad50 + 0x38))(&iStack_10);
      }
      *param_2 = *param_2 - iStack_10;
      *param_3 = *param_3 - iStack_c;
    }
  }
  return;
}

