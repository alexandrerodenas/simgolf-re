/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10037c80 @ 0x10037C80 */
/* Body size: 139 addresses */


void __cdecl FUN_10037c80(float *param_1)

{
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 extraout_ST0;
  undefined4 local_48 [16];
  float local_8;
  
  puVar3 = local_48;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  dVar1 = (double)(param_1[2] * param_1[2] + param_1[1] * param_1[1] + *param_1 * *param_1);
  FUN_100192c4(param_1,SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  local_8 = (float)extraout_ST0;
  *param_1 = *param_1 / local_8;
  param_1[1] = param_1[1] / local_8;
  param_1[2] = param_1[2] / local_8;
  __chkesp();
  return;
}

