/* Ghidra decompiled: sound.dll */
/* Function: FUN_10033f90 @ 0x10033F90 */
/* Body size: 224 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10033f90(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined *puVar3;
  
  puVar3 = *(undefined **)(param_1 + 0x1390);
  if (puVar3 == (undefined *)0x0) {
    return 0;
  }
  do {
    *(undefined4 *)(param_1 + 0x1390) = *(undefined4 *)(puVar3 + 0xb4);
    puVar1 = *(undefined **)(puVar3 + 0x18);
    mmioClose(*(HMMIO *)(puVar3 + 0x44),0);
    for (piVar2 = DAT_100b49c8; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      if ((undefined *)piVar2[2] == puVar3) {
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
    FUN_10042c07(puVar1);
    if (puVar3 != (undefined *)0x0) {
      FUN_1004249a(puVar3);
    }
    puVar3 = *(undefined **)(param_1 + 0x1390);
    *(int *)(param_1 + 0x1398) = *(int *)(param_1 + 0x1398) + -1;
    if (puVar3 == (undefined *)0x0) {
      return 0;
    }
  } while( true );
}

