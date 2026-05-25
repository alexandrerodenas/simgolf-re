/* Ghidra decompiled: sound.dll */
/* Function: FUN_10032020 @ 0x10032020 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10032020(undefined4 *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((undefined *)param_1[2] != (undefined *)0x0) {
    FUN_1004249a((undefined *)param_1[2]);
    param_1[2] = 0;
  }
  puVar4 = param_1 + 3;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar1 = param_1 + 0x16;
  *puVar1 = 0;
  param_1[0x17] = 0;
  *puVar1 = *puVar1 & 0xfffffffc;
  if ((HMMIO)*param_1 != (HMMIO)0x0) {
    mmioClose((HMMIO)*param_1,0);
    for (piVar2 = DAT_100b49c8; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      if ((undefined4 *)piVar2[2] == param_1 + 3) {
        if (piVar2 != (int *)0x0) {
          if (*piVar2 == 0) {
            DAT_100b49c8 = (int *)piVar2[1];
          }
          else {
            *(int *)(*piVar2 + 4) = piVar2[1];
          }
          _DAT_100b49d0 = (int *)piVar2[1];
          if (_DAT_100b49d0 == (int *)0x0) {
            _DAT_100b49cc = *piVar2;
            _DAT_100b49d0 = (int *)0x0;
          }
          else {
            *_DAT_100b49d0 = *piVar2;
          }
          FUN_1004249a((undefined *)piVar2);
          DAT_100b49d4 = DAT_100b49d4 + -1;
        }
        break;
      }
    }
    DAT_100b4a08 = DAT_100b4a08 + -1;
  }
  *param_1 = 0;
  return;
}

