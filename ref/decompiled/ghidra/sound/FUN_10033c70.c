/* Ghidra decompiled: sound.dll */
/* Function: FUN_10033c70 @ 0x10033C70 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10033c70(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10059297;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  if (param_1[0x4e9] != 0) {
    ExceptionList = &local_c;
    param_1[0x4e9] = 0;
  }
  if (((*(byte *)(param_1 + 0x16) & 2) != 0) && ((HMMIO)*param_1 != (HMMIO)0x0)) {
    mmioClose((HMMIO)*param_1,0);
    if (DAT_100b49c8 != (int *)0x0) {
      piVar4 = DAT_100b49c8;
      do {
        if ((undefined4 *)piVar4[2] == param_1 + 3) {
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
        piVar4 = (int *)piVar4[1];
      } while (piVar4 != (int *)0x0);
    }
    DAT_100b4a08 = DAT_100b4a08 + -1;
    param_1[0x16] = param_1[0x16] & 0xfffffffd;
  }
  puVar1 = (undefined4 *)param_1[2];
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != param_1 + 3)) {
    puVar2 = (undefined *)puVar1[6];
    mmioClose((HMMIO)puVar1[0x11],0);
    FUN_1004249a((undefined *)param_1[2]);
    FUN_10042c07(puVar2);
    param_1[2] = 0;
  }
  puVar2 = (undefined *)param_1[0x4d2];
  local_4._0_1_ = 1;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = *(undefined4 **)(puVar2 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      param_1[0x4d3] = 0;
      param_1[0x4d2] = 0;
    }
    else {
      *puVar1 = 0;
      param_1[0x4d2] = puVar1;
    }
    iVar3 = *(int *)(puVar2 + 8);
    FUN_1004249a(puVar2);
    param_1[0x4d5] = param_1[0x4d5] + -1;
    while ((iVar3 != 0 && (puVar2 = (undefined *)param_1[0x4d2], puVar2 != (undefined *)0x0))) {
      puVar1 = *(undefined4 **)(puVar2 + 4);
      if (puVar1 == (undefined4 *)0x0) {
        param_1[0x4d3] = 0;
        param_1[0x4d2] = 0;
      }
      else {
        *puVar1 = 0;
        param_1[0x4d2] = puVar1;
      }
      iVar3 = *(int *)(puVar2 + 8);
      FUN_1004249a(puVar2);
      param_1[0x4d5] = param_1[0x4d5] + -1;
    }
  }
  puVar2 = (undefined *)param_1[0x4ce];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = *(undefined4 **)(puVar2 + 4);
    if (puVar1 == (undefined4 *)0x0) {
      param_1[0x4cf] = 0;
      param_1[0x4ce] = 0;
    }
    else {
      *puVar1 = 0;
      param_1[0x4ce] = puVar1;
    }
    iVar3 = *(int *)(puVar2 + 8);
    FUN_1004249a(puVar2);
    param_1[0x4d1] = param_1[0x4d1] + -1;
    while ((iVar3 != 0 && (puVar2 = (undefined *)param_1[0x4ce], puVar2 != (undefined *)0x0))) {
      puVar1 = *(undefined4 **)(puVar2 + 4);
      if (puVar1 == (undefined4 *)0x0) {
        param_1[0x4cf] = 0;
        param_1[0x4ce] = 0;
      }
      else {
        *puVar1 = 0;
        param_1[0x4ce] = puVar1;
      }
      iVar3 = *(int *)(puVar2 + 8);
      FUN_1004249a(puVar2);
      param_1[0x4d1] = param_1[0x4d1] + -1;
    }
  }
  local_4 = 0xffffffff;
  FUN_1004280e(param_1 + 0x8e,0x110,0x10,thunk_FUN_10037df0);
  ExceptionList = local_c;
  return;
}

