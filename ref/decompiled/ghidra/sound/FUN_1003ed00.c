/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003ed00 @ 0x1003ED00 */


undefined4 __cdecl FUN_1003ed00(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_50 [16];
  int local_10;
  float local_c;
  
  puVar3 = local_50;
  for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_c = 0.0;
  for (local_10 = 1; local_10 <= *param_1; local_10 = local_10 + 1) {
    local_c = local_c + *(float *)(param_2 + -4 + local_10 * 4);
  }
  iVar2 = *param_1;
  iVar1 = *param_1;
  for (local_10 = 1; local_10 <= iVar1; local_10 = local_10 + 1) {
    *(float *)(param_3 + -4 + local_10 * 4) =
         *(float *)(param_2 + -4 + local_10 * 4) - local_c / (float)iVar2;
  }
  return 0;
}

