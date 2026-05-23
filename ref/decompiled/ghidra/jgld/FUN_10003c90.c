/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10003c90 @ 0x10003C90 */
/* Body size: 76 addresses */


float10 __thiscall FUN_10003c90(float *param_1,float *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return (float10)param_1[2] * (float10)param_2[2] +
         (float10)param_1[1] * (float10)param_2[1] + (float10)*param_1 * (float10)*param_2;
}

