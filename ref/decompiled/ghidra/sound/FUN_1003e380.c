/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003e380 @ 0x1003E380 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1003e380(float *param_1,float *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_58 [18];
  float local_10;
  
  puVar2 = local_58;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*param_1 < _DAT_1005ec00) {
    local_10 = -*param_1;
  }
  else {
    local_10 = *param_1;
  }
  if (*param_2 < _DAT_1005ec00) {
    local_10 = -local_10;
  }
  return (float10)local_10;
}

