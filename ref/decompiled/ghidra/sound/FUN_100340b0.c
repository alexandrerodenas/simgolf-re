/* Ghidra decompiled: sound.dll */
/* Function: FUN_100340b0 @ 0x100340B0 */
/* Body size: 688 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100340b0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  void *this;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  this = DAT_100b49f0;
  if ((*(byte *)(param_1 + 0x16) & 2) != 0) {
    if ((*(byte *)(param_1 + 0x17) & 4) != 0) {
      return 0xb;
    }
    if (param_1[0x15] != 0) {
      while (puVar1 = (undefined *)param_1[0x4ce], puVar1 != (undefined *)0x0) {
        puVar5 = *(undefined4 **)(puVar1 + 4);
        if (puVar5 == (undefined4 *)0x0) {
          param_1[0x4cf] = 0;
          param_1[0x4ce] = 0;
        }
        else {
          *puVar5 = 0;
          param_1[0x4ce] = puVar5;
        }
        puVar2 = *(undefined **)(puVar1 + 8);
        FUN_1004249a(puVar1);
        param_1[0x4d1] = param_1[0x4d1] + -1;
        if (puVar2 == (undefined *)0x0) break;
        thunk_FUN_100132e0(this,puVar2);
      }
      thunk_FUN_100132e0(this,(undefined *)param_1[0x15]);
      param_1[0x15] = 0;
      param_1[0x16] = param_1[0x16] & 0xfffffffd;
      return 0;
    }
    mmioClose((HMMIO)*param_1,0);
    if (DAT_100b49c8 != (int *)0x0) {
      piVar3 = DAT_100b49c8;
      do {
        if ((undefined4 *)piVar3[2] == param_1 + 3) {
          if (piVar3 != (int *)0x0) {
            if (*piVar3 == 0) {
              DAT_100b49c8 = (int *)piVar3[1];
            }
            else {
              *(int *)(*piVar3 + 4) = piVar3[1];
            }
            _DAT_100b49d0 = (int *)piVar3[1];
            if (_DAT_100b49d0 == (int *)0x0) {
              _DAT_100b49cc = *piVar3;
              _DAT_100b49d0 = (int *)0x0;
            }
            else {
              *_DAT_100b49d0 = *piVar3;
            }
            FUN_1004249a((undefined *)piVar3);
            DAT_100b49d4 = DAT_100b49d4 + -1;
          }
          break;
        }
        piVar3 = (int *)piVar3[1];
      } while (piVar3 != (int *)0x0);
    }
    DAT_100b4a08 = DAT_100b4a08 + -1;
    puVar5 = param_1 + 3;
    for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    if ((*(byte *)(param_1 + 0x16) & 1) == 0) {
      puVar1 = *(undefined **)(param_1[2] + 0x18);
      mmioClose((HMMIO)param_1[1],0);
      for (piVar3 = DAT_100b49c8; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        if ((undefined4 *)piVar3[2] == param_1 + 3) {
          if (piVar3 != (int *)0x0) {
            if (*piVar3 == 0) {
              DAT_100b49c8 = (int *)piVar3[1];
            }
            else {
              *(int *)(*piVar3 + 4) = piVar3[1];
            }
            _DAT_100b49d0 = (int *)piVar3[1];
            if (_DAT_100b49d0 == (int *)0x0) {
              _DAT_100b49cc = *piVar3;
              _DAT_100b49d0 = (int *)0x0;
            }
            else {
              *_DAT_100b49d0 = *piVar3;
            }
            FUN_1004249a((undefined *)piVar3);
            DAT_100b49d4 = DAT_100b49d4 + -1;
          }
          break;
        }
      }
      DAT_100b4a08 = DAT_100b4a08 + -1;
      FUN_10042c07(puVar1);
      FUN_1004249a((undefined *)param_1[2]);
      param_1[2] = 0;
    }
    if ((undefined *)param_1[0x6e] != (undefined *)0x0) {
      FUN_1004249a((undefined *)param_1[0x6e]);
      param_1[0x6e] = 0;
    }
    puVar1 = (undefined *)param_1[0x4d2];
    if (puVar1 != (undefined *)0x0) {
      puVar5 = *(undefined4 **)(puVar1 + 4);
      if (puVar5 == (undefined4 *)0x0) {
        param_1[0x4d3] = 0;
        param_1[0x4d2] = 0;
      }
      else {
        *puVar5 = 0;
        param_1[0x4d2] = puVar5;
      }
      puVar2 = *(undefined **)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x4d5] = param_1[0x4d5] + -1;
      while (puVar2 != (undefined *)0x0) {
        FUN_1004249a(puVar2);
        puVar1 = (undefined *)param_1[0x4d2];
        if (puVar1 == (undefined *)0x0) break;
        puVar5 = *(undefined4 **)(puVar1 + 4);
        if (puVar5 == (undefined4 *)0x0) {
          param_1[0x4d3] = 0;
          param_1[0x4d2] = 0;
        }
        else {
          *puVar5 = 0;
          param_1[0x4d2] = puVar5;
        }
        puVar2 = *(undefined **)(puVar1 + 8);
        FUN_1004249a(puVar1);
        param_1[0x4d5] = param_1[0x4d5] + -1;
      }
    }
    thunk_FUN_10033ba0(param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  puVar5 = param_1 + 0x8e;
  for (iVar4 = 0x440; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  param_1[2] = 0;
  return 0;
}

