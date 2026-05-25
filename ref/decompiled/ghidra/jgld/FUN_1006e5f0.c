/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006e5f0 @ 0x1006E5F0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1006e5f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 local_54 [20];
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (((param_1 == 0) || (param_2 == 0)) || ((*(uint *)(param_2 + 8) & 0x80) == 0)) {
    fVar3 = (float10)_DAT_1011d054;
  }
  else if (*(int *)(param_2 + 0x70) == 0) {
    fVar3 = (float10)_DAT_1011d054;
  }
  else {
    fVar3 = (float10)*(uint *)(param_2 + 0x74) / (float10)*(int *)(param_2 + 0x70);
  }
  return fVar3;
}

