/* Ghidra decompiled: sound.dll */
/* Function: FUN_100404d0 @ 0x100404D0 */
/* Body size: 613 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100404d0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [17];
  int local_c;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  iVar1 = *param_3;
  for (local_c = (*param_3 + 1) - *param_4; local_c <= iVar1; local_c = local_c + 1) {
    *(float *)(param_2 + -4 + local_c * 4) =
         *(float *)(param_1 + -0x40 + local_c * 4) * _DAT_1005ec6c +
         (*(float *)(param_1 + -0x3c + local_c * 4) + *(float *)(param_1 + -0x44 + local_c * 4)) *
         _DAT_1005ec70 +
         (*(float *)(param_1 + -0x38 + local_c * 4) + *(float *)(param_1 + -0x48 + local_c * 4)) *
         _DAT_1005ec74 +
         (*(float *)(param_1 + -0x34 + local_c * 4) + *(float *)(param_1 + -0x4c + local_c * 4)) *
         _DAT_1005ec78 +
         (*(float *)(param_1 + -0x30 + local_c * 4) + *(float *)(param_1 + -0x50 + local_c * 4)) *
         _DAT_1005ec7c +
         (*(float *)(param_1 + -0x2c + local_c * 4) + *(float *)(param_1 + -0x54 + local_c * 4)) *
         _DAT_1005ec80 +
         (*(float *)(param_1 + -0x28 + local_c * 4) + *(float *)(param_1 + -0x58 + local_c * 4)) *
         _DAT_1005ec84 +
         (*(float *)(param_1 + -0x24 + local_c * 4) + *(float *)(param_1 + -0x5c + local_c * 4)) *
         _DAT_1005ec88 +
         (*(float *)(param_1 + -0x20 + local_c * 4) + *(float *)(param_1 + -0x60 + local_c * 4)) *
         _DAT_1005ec8c +
         (*(float *)(param_1 + -0x1c + local_c * 4) + *(float *)(param_1 + -100 + local_c * 4)) *
         _DAT_1005ec90 +
         (*(float *)(param_1 + -0x18 + local_c * 4) + *(float *)(param_1 + -0x68 + local_c * 4)) *
         _DAT_1005ec94 +
         (*(float *)(param_1 + -0x14 + local_c * 4) + *(float *)(param_1 + -0x6c + local_c * 4)) *
         _DAT_1005ec98 +
         (*(float *)(param_1 + -0x10 + local_c * 4) + *(float *)(param_1 + -0x70 + local_c * 4)) *
         _DAT_1005ec9c +
         (*(float *)(param_1 + -0xc + local_c * 4) + *(float *)(param_1 + -0x74 + local_c * 4)) *
         _DAT_1005eca0 +
         (*(float *)(param_1 + -8 + local_c * 4) + *(float *)(param_1 + -0x78 + local_c * 4)) *
         _DAT_1005eca4 +
         (*(float *)(param_1 + -4 + local_c * 4) + *(float *)(param_1 + -0x7c + local_c * 4)) *
         _DAT_1005eca8;
  }
  return 0;
}

