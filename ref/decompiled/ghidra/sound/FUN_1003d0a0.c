/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003d0a0 @ 0x1003D0A0 */
/* Body size: 291 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1003d0a0(int param_1,int *param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 local_68 [17];
  int local_24;
  
  puVar6 = local_68;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  if (param_1 != 0) {
    param_1 = param_1 + -4;
  }
  pfVar4 = (float *)(param_3 + 0xbec);
  pfVar2 = (float *)(param_3 + 0xbf4);
  pfVar5 = (float *)(param_3 + 0xbf8);
  iVar3 = *param_2;
  for (local_24 = 1; local_24 <= iVar3; local_24 = local_24 + 1) {
    fVar1 = *(float *)(param_1 + local_24 * 4);
    *(float *)(param_1 + local_24 * 4) =
         *(float *)(param_3 + 0xbfc) * _DAT_1005ebe4 +
         ((*pfVar2 * _DAT_1005ebec +
          (*(float *)(param_1 + local_24 * 4) - *pfVar4 * _DAT_1005ebf0) +
          *(float *)(param_3 + 0xbf0)) - *pfVar5 * _DAT_1005ebe8);
    *(float *)(param_3 + 0xbf0) = *pfVar4;
    *pfVar4 = fVar1;
    *(float *)(param_3 + 0xbfc) = *pfVar5;
    *pfVar5 = *pfVar2;
    *pfVar2 = *(float *)(param_1 + local_24 * 4);
  }
  return 0;
}

