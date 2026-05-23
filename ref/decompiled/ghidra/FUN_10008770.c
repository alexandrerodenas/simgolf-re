/* Ghidra decompiled: sound.dll */
/* Function: FUN_10008770 @ 0x10008770 */
/* Body size: 30 addresses */


undefined4 __fastcall FUN_10008770(int param_1)

{
  if (*(HMMIO *)(param_1 + 0x30) != (HMMIO)0x0) {
    mmioClose(*(HMMIO *)(param_1 + 0x30),0);
  }
  DAT_100b4a08 = DAT_100b4a08 + -1;
  return 0;
}

