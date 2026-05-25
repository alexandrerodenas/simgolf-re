/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001b860 @ 0x3001B860 */


void __cdecl FUN_3001b860(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  *param_1 = *param_1 + param_1[2];
  fVar2 = param_1[3];
  param_1[3] = param_1[1] - param_1[3];
  param_1[1] = fVar2 + param_1[1];
  param_1[2] = fVar1 - param_1[2];
  return;
}

