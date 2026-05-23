/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10003bf0 @ 0x10003BF0 */
/* Body size: 118 addresses */


float10 __thiscall FUN_10003bf0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  int local_10;
  float local_c;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0.0;
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    local_c = (*(float *)(param_1 + local_10 * 4) - *(float *)(param_2 + local_10 * 4)) *
              (*(float *)(param_1 + local_10 * 4) - *(float *)(param_2 + local_10 * 4)) + local_c;
  }
  return (float10)local_c;
}

