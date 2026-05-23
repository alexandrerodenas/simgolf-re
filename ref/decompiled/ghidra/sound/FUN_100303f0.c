/* Ghidra decompiled: sound.dll */
/* Function: FUN_100303f0 @ 0x100303F0 */
/* Body size: 303 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100303f0(int *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int *piVar4;
  
  if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
    (**(code **)(*param_1 + 0x20))();
    param_1[0x16] = param_1[0x16] | 8;
    return 0;
  }
  puVar1 = (undefined *)param_1[0x17];
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[0x18] = 0;
      param_1[0x17] = 0;
    }
    else {
      *puVar2 = 0;
      param_1[0x17] = (int)puVar2;
    }
    puVar3 = *(undefined **)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x1a] = param_1[0x1a] + -1;
    while (puVar3 != (undefined *)0x0) {
      if (*(HMMIO *)(puVar3 + 0x44) != (HMMIO)0x0) {
        mmioClose(*(HMMIO *)(puVar3 + 0x44),0);
        for (piVar4 = DAT_100b49c8; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
          if ((undefined *)piVar4[2] == puVar3) {
            if (piVar4 != (int *)0x0) {
              if (*piVar4 == 0) {
                DAT_100b49c8 = (int *)piVar4[1];
              }
              else {
                *(int *)(*piVar4 + 4) = piVar4[1];
              }
              _DAT_100b49d0 = (int *)piVar4[1];
              if (_DAT_100b49d0 == (int *)0x0) {
                _DAT_100b49cc = *piVar4;
                _DAT_100b49d0 = (int *)0x0;
              }
              else {
                *_DAT_100b49d0 = *piVar4;
              }
              FUN_1004249a((undefined *)piVar4);
              DAT_100b49d4 = DAT_100b49d4 + -1;
            }
            break;
          }
        }
      }
      DAT_100b4a08 = DAT_100b4a08 + -1;
      if (puVar3 != (undefined *)0x0) {
        thunk_FUN_10037df0();
        FUN_1004249a(puVar3);
      }
      puVar1 = (undefined *)param_1[0x17];
      if (puVar1 == (undefined *)0x0) {
        return 0;
      }
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[0x18] = 0;
        param_1[0x17] = 0;
      }
      else {
        *puVar2 = 0;
        param_1[0x17] = (int)puVar2;
      }
      puVar3 = *(undefined **)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x1a] = param_1[0x1a] + -1;
    }
  }
  return 0;
}

