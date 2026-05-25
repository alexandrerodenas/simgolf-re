/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10037c80 @ 0x10037C80 */


void __cdecl FUN_10037c80(float *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 extraout_ST0;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  FUN_100192c4(param_1);
  fVar1 = (float)extraout_ST0;
  *param_1 = *param_1 / fVar1;
  param_1[1] = param_1[1] / fVar1;
  param_1[2] = param_1[2] / fVar1;
  local_8 = 0x10037d07;
  __chkesp();
  return;
}

