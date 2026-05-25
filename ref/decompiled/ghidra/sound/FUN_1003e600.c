/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003e600 @ 0x1003E600 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1003e600(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  float local_14;
  int local_10;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_10 = 1;
  while( true ) {
    if (*param_1 < local_10) {
      return 0;
    }
    local_14 = *(float *)(param_3 + -4 + local_10 * 4);
    if (local_14 < _DAT_1005ec00) {
      local_14 = -local_14;
    }
    if (_DAT_1005ebd4 < local_14) break;
    local_10 = local_10 + 1;
  }
  iVar1 = *param_1;
  for (local_10 = 1; local_10 <= iVar1; local_10 = local_10 + 1) {
    *(undefined4 *)(param_3 + -4 + local_10 * 4) = *(undefined4 *)(param_2 + -4 + local_10 * 4);
  }
  return 0;
}

