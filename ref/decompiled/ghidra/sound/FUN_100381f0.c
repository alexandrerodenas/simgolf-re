/* Ghidra decompiled: sound.dll */
/* Function: FUN_100381f0 @ 0x100381F0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100381f0(int param_1)

{
  if ((*(double *)(param_1 + 0x58) != _DAT_1005b498) &&
     (*(double *)(param_1 + 0xf0) != _DAT_1005b498)) {
    *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 8;
    return;
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 4;
  *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) & 0xfe;
  return;
}

