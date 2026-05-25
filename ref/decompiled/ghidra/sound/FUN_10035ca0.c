/* Ghidra decompiled: sound.dll */
/* Function: FUN_10035ca0 @ 0x10035CA0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10035ca0(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  void *this;
  undefined *puVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 0x1390);
  this = *(void **)(iVar2 + 0xb4);
  puVar3 = *(undefined **)(iVar2 + 0x18);
  mmioClose(*(HMMIO *)(iVar2 + 0x44),0);
  FUN_10042c07(puVar3);
  DAT_100b4a08 = DAT_100b4a08 + -1;
  for (piVar4 = DAT_100b49c8; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    if (piVar4[2] == *(int *)(param_1 + 0x1390)) {
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
  if (this != (void *)0x0) {
    if ((*(byte *)(param_1 + 0x58) & 8) != 0) {
      *(byte *)((int)this + 0x9c) =
           (*(byte *)(*(int *)(param_1 + 0x1390) + 0x9c) ^ *(byte *)((int)this + 0x9c)) & 0x10 ^
           *(byte *)((int)this + 0x9c);
      uVar1 = *(undefined8 *)(*(int *)(param_1 + 0x1390) + 0xf0);
      *(undefined8 *)((int)this + 0xf0) = uVar1;
      *(undefined8 *)((int)this + 0xf8) = uVar1;
      uVar1 = *(undefined8 *)(*(int *)(param_1 + 0x1390) + 0x58);
      *(undefined8 *)((int)this + 0x58) = uVar1;
      *(undefined8 *)((int)this + 0x60) = uVar1;
      thunk_FUN_10037f30(this,*(int *)(param_1 + 0x224));
      if ((*(double *)((int)this + 0x58) == _DAT_1005b498) ||
         (*(double *)((int)this + 0xf0) == _DAT_1005b498)) {
        *(byte *)((int)this + 0x9c) = *(byte *)((int)this + 0x9c) | 4;
        *(byte *)((int)this + 0x94) = *(byte *)((int)this + 0x94) & 0xfe;
        *(undefined4 *)((int)this + 0xe4) = 0;
      }
      else {
        *(byte *)((int)this + 0x9c) = *(byte *)((int)this + 0x9c) | 8;
      }
      if ((*(byte *)(param_1 + 0x58) & 8) != 0) goto LAB_10035e9b;
    }
    *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x1e0);
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x1e4);
    *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0x1c8);
    *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_1 + 0x1cc);
    *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x1f0);
    *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 500);
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x200);
    *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x204);
    *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x1e8);
    *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x1f8);
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x224);
    *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(param_1 + 0x1c8);
    *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(param_1 + 0x1cc);
    *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x1d8);
  }
LAB_10035e9b:
  if (*(undefined **)(param_1 + 0x1390) != (undefined *)0x0) {
    FUN_1004249a(*(undefined **)(param_1 + 0x1390));
  }
  *(void **)(param_1 + 0x1390) = this;
  *(int *)(param_1 + 0x1398) = *(int *)(param_1 + 0x1398) + -1;
  return 0;
}

