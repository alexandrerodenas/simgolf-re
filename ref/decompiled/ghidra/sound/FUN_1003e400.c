/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003e400 @ 0x1003E400 */
/* Body size: 127 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1003e400(float *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 local_4c [16];
  undefined8 local_c;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*param_1 < _DAT_1005ec00) {
    fVar3 = FUN_1004339c((double)((float)_DAT_1005b820 - *param_1));
    fVar3 = -fVar3;
  }
  else {
    fVar3 = FUN_1004339c((double)(*param_1 + (float)_DAT_1005b820));
  }
  local_c = (double)fVar3;
  __ftol();
  local_c = (double)CONCAT44(0x1003e47b,(undefined4)local_c);
  FUN_100431ce();
  return;
}

