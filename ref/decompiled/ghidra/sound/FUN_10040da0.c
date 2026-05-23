/* Ghidra decompiled: sound.dll */
/* Function: FUN_10040da0 @ 0x10040DA0 */
/* Body size: 135 addresses */


undefined4 __cdecl FUN_10040da0(int param_1,int param_2,int *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_50 [16];
  int local_10;
  
  puVar5 = local_50;
  for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  iVar4 = *param_3;
  for (local_10 = 1; local_10 <= iVar4; local_10 = local_10 + 1) {
    fVar1 = *param_4;
    fVar2 = *param_5;
    fVar3 = *(float *)(param_1 + -4 + local_10 * 4);
    *param_5 = *(float *)(param_1 + -4 + local_10 * 4);
    *(float *)(param_2 + -4 + local_10 * 4) = fVar3 - fVar1 * fVar2;
  }
  return 0;
}

