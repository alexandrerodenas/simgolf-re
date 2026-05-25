/* Ghidra decompiled: sound.dll */
/* Function: FUN_10035fc0 @ 0x10035FC0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10035fc0(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (((uVar1 & 8) != 0) || ((*(byte *)(param_1 + 0x5c) & 0x10) != 0)) {
    uVar2 = *(uint *)(param_1 + 0x5c);
    if ((uVar2 & 2) == 0) {
      if ((uVar2 & 8) == 0) {
        if ((uVar2 & 0x10) == 0) {
          if (*(double *)(param_1 + 0x1e0) == _DAT_1005b498) {
            *(uint *)(param_1 + 0x58) = uVar1 | 0x10;
            thunk_FUN_1000f760(*(int *)(param_1 + 0x54));
            if (*(int *)(param_1 + 0x13a4) == 0) {
              return 0;
            }
            *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x480;
            return 0;
          }
          if (*(double *)(param_1 + 0x1e0) <= *(double *)(param_1 + 0x1c8)) {
            *(uint *)(param_1 + 0x5c) = uVar2 | 2;
            *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1e0);
            *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x1e4);
          }
          *(double *)(param_1 + 0x1e0) = *(double *)(param_1 + 0x1e0) - *(double *)(param_1 + 0x1c8)
          ;
        }
        else if (*(double *)(param_1 + 0x1c8) <= _DAT_1005b498) {
          if (*(double *)(param_1 + 0x1d0) <= *(double *)(param_1 + 0x1e0)) goto LAB_1003612a;
          if (*(double *)(param_1 + 0x1d0) - *(double *)(param_1 + 0x1e0) <=
              ABS(*(double *)(param_1 + 0x1c8))) {
            *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1d0);
            *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x1d4);
          }
          else {
            *(double *)(param_1 + 0x1e0) =
                 *(double *)(param_1 + 0x1e0) - *(double *)(param_1 + 0x1c8);
          }
        }
        else {
          if (*(double *)(param_1 + 0x1e0) <= *(double *)(param_1 + 0x1d0)) {
LAB_1003612a:
            *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_1 + 0x1d0);
            lVar3 = __ftol();
            thunk_FUN_1000f1c0(*(void **)(param_1 + 0x54),(uint)lVar3);
            *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) & 0xffffffef;
            return 0;
          }
          if (*(double *)(param_1 + 0x1c8) <= *(double *)(param_1 + 0x1e0)) {
            *(double *)(param_1 + 0x1e0) =
                 *(double *)(param_1 + 0x1e0) - *(double *)(param_1 + 0x1c8);
          }
          else {
            *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1d0);
            *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_1 + 0x1d4);
          }
        }
        lVar3 = __ftol();
        thunk_FUN_1000f1c0(*(void **)(param_1 + 0x54),(uint)lVar3);
      }
      else if (*(double *)(param_1 + 0x210) <= *(double *)(param_1 + 0x1e0)) {
        *(uint *)(param_1 + 0x58) = uVar1 & 0xfffffff7;
        *(uint *)(param_1 + 0x5c) = uVar2 & 0xfffffff7;
        return 0;
      }
    }
    else {
      *(uint *)(param_1 + 0x58) = uVar1 | 0x10;
      thunk_FUN_1000f760(*(int *)(param_1 + 0x54));
      if (*(int *)(param_1 + 0x13a4) != 0) {
        *(uint *)(param_1 + 0x5c) = *(uint *)(param_1 + 0x5c) | 0x480;
        return 0;
      }
    }
  }
  return 0;
}

