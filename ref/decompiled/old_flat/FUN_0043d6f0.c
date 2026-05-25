/* Ghidra decompiled: golf.exe */
/* Function: FUN_0043d6f0 @ 0x0043D6F0 */


undefined * FUN_0043d6f0(int param_1,int param_2,int param_3)

{
  if ((&DAT_005a9370)[param_1] == -1) {
    return &DAT_0053ba48;
  }
  if ((int)(&DAT_0053f3e8)[param_1] <= param_2) {
    return &DAT_0053ba48;
  }
  return &DAT_005aaa30 +
         ((&DAT_0053f3e8)[param_1] * param_3 + (&DAT_005a9370)[param_1] + param_2) * 0x2c;
}

