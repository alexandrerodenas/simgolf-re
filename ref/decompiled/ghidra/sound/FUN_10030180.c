/* Ghidra decompiled: sound.dll */
/* Function: FUN_10030180 @ 0x10030180 */
/* Body size: 451 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10030180(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10059133;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1005c450;
  puVar1 = (undefined *)param_1[0x17];
  local_4 = 1;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[0x18] = 0;
      param_1[0x17] = 0;
    }
    else {
      *puVar2 = 0;
      param_1[0x17] = puVar2;
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
      if (puVar1 == (undefined *)0x0) break;
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[0x18] = 0;
        param_1[0x17] = 0;
      }
      else {
        *puVar2 = 0;
        param_1[0x17] = puVar2;
      }
      puVar3 = *(undefined **)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x1a] = param_1[0x1a] + -1;
    }
  }
  puVar1 = (undefined *)param_1[0x17];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      param_1[0x18] = 0;
      param_1[0x17] = 0;
    }
    else {
      *puVar2 = 0;
      param_1[0x17] = puVar2;
    }
    iVar5 = *(int *)(puVar1 + 8);
    FUN_1004249a(puVar1);
    param_1[0x1a] = param_1[0x1a] + -1;
    while ((iVar5 != 0 && (puVar1 = (undefined *)param_1[0x17], puVar1 != (undefined *)0x0))) {
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 == (undefined4 *)0x0) {
        param_1[0x18] = 0;
        param_1[0x17] = 0;
      }
      else {
        *puVar2 = 0;
        param_1[0x17] = puVar2;
      }
      iVar5 = *(int *)(puVar1 + 8);
      FUN_1004249a(puVar1);
      param_1[0x1a] = param_1[0x1a] + -1;
    }
  }
  local_4 = 0xffffffff;
  thunk_FUN_1002ef40(param_1);
  ExceptionList = local_c;
  return;
}

