/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300194a0 @ 0x300194A0 */


void __cdecl FUN_300194a0(int param_1,float *param_2,int param_3,int param_4)

{
  FUN_30019e90(param_1,param_2,param_4 + (param_3 - param_1) * 4);
  while (0x200 < param_1) {
    param_1 = param_1 >> 2;
    FUN_30019400(param_1,param_2,param_3,param_4);
    FUN_300194a0(param_1,param_2 + param_1,param_3,param_4);
    FUN_30019400(param_1,param_2 + param_1 * 2,param_3,param_4);
    param_2 = param_2 + param_1 * 3;
    FUN_30019e90(param_1,param_2,param_4 + (param_3 - param_1) * 4);
  }
  FUN_300197b0(param_1,(int)param_2,param_3,param_4);
  return;
}

