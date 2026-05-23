/* Ghidra decompiled: sound.dll */
/* Function: FUN_10037c40 @ 0x10037C40 */
/* Body size: 321 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_10037c40(int param_1)

{
  uint uVar1;
  float10 extraout_ST0;
  float10 fVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x10000;
  *(undefined4 *)(param_1 + 0x5c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 100) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x78) = 0x10000;
  *(undefined4 *)(param_1 + 0x84) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x68) = 0x10000;
  *(undefined4 *)(param_1 + 0x74) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x10000;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (DAT_100b4a20 != (int *)0x0) {
    uVar1 = (**(code **)(*DAT_100b4a20 + 0x40))();
    if (_DAT_1005b280 <= (double)uVar1) {
      fVar2 = (float10)*(double *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x50);
    }
    else {
      lVar3 = __ftol();
      fVar2 = (float10)*(double *)(param_1 + 0x58) / extraout_ST0;
      *(int *)(param_1 + 0xec) = (int)lVar3;
    }
    *(double *)(param_1 + 0xf0) = (double)fVar2;
    *(double *)(param_1 + 0xf8) = (double)fVar2;
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xe8) = 0x80;
  return param_1;
}

