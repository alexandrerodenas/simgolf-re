/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003e9f0 @ 0x1003E9F0 */


undefined4 __cdecl
FUN_1003e9f0(int *param_1,int *param_2,int *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_64 [17];
  int local_20;
  int local_1c;
  int local_18;
  
  puVar8 = local_64;
  for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = 0xcccccccc;
    puVar8 = puVar8 + 1;
  }
  iVar3 = param_6 + -4;
  iVar5 = *param_1;
  iVar6 = param_5 + (iVar5 + 1) * -4;
  iVar4 = param_4 + -4;
  iVar7 = *param_2 + *param_1;
  iVar1 = *param_1;
  for (local_20 = 1; local_1c = iVar7, local_20 <= iVar1; local_20 = local_20 + 1) {
    *(undefined4 *)(iVar6 + (local_20 + iVar5) * 4) = 0;
    iVar2 = *param_3;
    for (; local_1c <= iVar2; local_1c = local_1c + 1) {
      *(float *)(iVar6 + (local_20 + iVar5) * 4) =
           *(float *)(param_4 + -8 + local_1c * 4) * *(float *)(iVar4 + (local_1c - local_20) * 4) +
           *(float *)(iVar6 + (local_20 + iVar5) * 4);
    }
  }
  *(undefined4 *)(iVar3 + *param_1 * 4) = 0;
  iVar1 = *param_3;
  for (; local_1c <= iVar1; local_1c = local_1c + 1) {
    *(float *)(iVar3 + *param_1 * 4) =
         *(float *)(iVar4 + local_1c * 4) * *(float *)(iVar4 + (local_1c - *param_1) * 4) +
         *(float *)(iVar3 + *param_1 * 4);
  }
  iVar1 = *param_1;
  for (local_20 = 2; local_20 <= iVar1; local_20 = local_20 + 1) {
    for (local_18 = 2; local_18 <= local_20; local_18 = local_18 + 1) {
      *(float *)(iVar6 + (local_20 + local_18 * iVar5) * 4) =
           *(float *)(iVar4 + (iVar7 - local_20) * 4) * *(float *)(iVar4 + (iVar7 - local_18) * 4) +
           (*(float *)(iVar6 + (local_20 + -1 + (local_18 + -1) * iVar5) * 4) -
           *(float *)(iVar4 + ((*param_3 + 1) - local_20) * 4) *
           *(float *)(iVar4 + ((*param_3 + 1) - local_18) * 4));
    }
  }
  iVar1 = *param_1;
  for (local_18 = 1; local_18 <= iVar1 + -1; local_18 = local_18 + 1) {
    *(float *)(iVar3 + local_18 * 4) =
         *(float *)(iVar4 + *param_3 * 4) * *(float *)(iVar4 + (*param_3 - local_18) * 4) +
         (*(float *)(iVar6 + (local_18 + 1 + iVar5) * 4) -
         *(float *)(param_4 + -8 + iVar7 * 4) * *(float *)(iVar4 + ((iVar7 + -1) - local_18) * 4));
  }
  return 0;
}

