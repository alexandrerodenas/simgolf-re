/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10003c90 @ 0x10003C90 */


float10 __thiscall FUN_10003c90(void *param_1,float *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return (float10)*(float *)((int)param_1 + 8) * (float10)param_2[2] +
         (float10)*(float *)((int)param_1 + 4) * (float10)param_2[1] +
         (float10)*(float *)param_1 * (float10)*param_2;
}

