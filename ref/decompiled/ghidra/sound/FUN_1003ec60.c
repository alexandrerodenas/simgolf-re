/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003ec60 @ 0x1003EC60 */


void __cdecl FUN_1003ec60(int *param_1,int param_2,float *param_3)

{
  int iVar1;
  float *this;
  undefined4 *puVar2;
  float10 extraout_ST0;
  undefined4 local_4c [16];
  float *local_c;
  int local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  *param_3 = 0.0;
  local_8 = *param_1;
  local_c = (float *)0x1;
  this = param_3;
  while ((int)local_c <= local_8) {
    *param_3 = *(float *)(param_2 + -4 + (int)local_c * 4) *
               *(float *)(param_2 + -4 + (int)local_c * 4) + *param_3;
    this = (float *)((int)local_c + 1);
    local_c = this;
  }
  FUN_10043204(this,SUB84((double)(*param_3 / (float)*param_1),0),
               (uint)((ulonglong)(double)(*param_3 / (float)*param_1) >> 0x20));
  *param_3 = (float)extraout_ST0;
  FUN_100431ce();
  return;
}

