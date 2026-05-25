/* Ghidra decompiled: sound.dll */
/* Function: FUN_100350e0 @ 0x100350E0 */


undefined4 __fastcall FUN_100350e0(undefined4 *param_1)

{
  param_1[0x16] = param_1[0x16] & 0xfffffffd;
  mmioSeek((HMMIO)*param_1,(uint)*(ushort *)(param_1 + 99) * param_1[0x59] + param_1[0x5d],0);
  mmioAdvance((HMMIO)*param_1,(LPMMIOINFO)(param_1 + 3),0);
  return 0;
}

