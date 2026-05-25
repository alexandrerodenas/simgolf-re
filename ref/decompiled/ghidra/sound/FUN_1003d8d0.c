/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003d8d0 @ 0x1003D8D0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1003d8d0(undefined4 *param_1,undefined4 *param_2,int *param_3,float *param_4,float *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  float10 extraout_ST0;
  undefined4 local_84 [16];
  double local_44;
  int local_3c;
  float local_38 [11];
  int local_c;
  int local_8;
  
  puVar2 = local_84;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *param_5 = 1.0;
  local_8 = *param_3;
  for (local_38[0] = 1.4013e-45; (int)local_38[0] <= local_8;
      local_38[0] = (float)((int)local_38[0] + 1)) {
    *param_5 = (_DAT_1005b8a8 -
               (float)param_1[(int)local_38[0] + -1] * (float)param_1[(int)local_38[0] + -1]) *
               *param_5;
  }
  local_44 = (double)*param_4;
  FUN_10043204(param_5,SUB84((double)*param_5,0),(uint)((ulonglong)(double)*param_5 >> 0x20));
  *param_5 = (float)(extraout_ST0 * (float10)local_44);
  *param_2 = *param_1;
  local_8 = *param_3;
  for (local_38[0] = 2.8026e-45; (int)local_38[0] <= local_8;
      local_38[0] = (float)((int)local_38[0] + 1)) {
    local_c = (int)local_38[0] + -1;
    for (local_3c = 1; local_3c <= local_c; local_3c = local_3c + 1) {
      local_38[local_3c] =
           (float)param_2[local_3c + -1] -
           (float)param_1[(int)local_38[0] + -1] *
           (float)param_2[((int)local_38[0] - local_3c) + -1];
    }
    local_c = (int)local_38[0] + -1;
    for (local_3c = 1; local_3c <= (int)local_38[0] + -1; local_3c = local_3c + 1) {
      param_2[local_3c + -1] = local_38[local_3c];
    }
    param_2[(int)local_38[0] + -1] = param_1[(int)local_38[0] + -1];
  }
  FUN_100431ce();
  return;
}

