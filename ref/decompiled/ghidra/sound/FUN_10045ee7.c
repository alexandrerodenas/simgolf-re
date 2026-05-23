/* Ghidra decompiled: sound.dll */
/* Function: FUN_10045ee7 @ 0x10045EE7 */
/* Body size: 72 addresses */


undefined4 __cdecl FUN_10045ee7(undefined4 param_1)

{
  DAT_100b5d08 = HeapAlloc(DAT_100b5d10,0,0x140);
  if (DAT_100b5d08 == (LPVOID)0x0) {
    return 0;
  }
  DAT_100b5d00 = 0;
  DAT_100b5d04 = 0;
  DAT_100b5cf8 = DAT_100b5d08;
  DAT_100b5d0c = param_1;
  DAT_100b5ce0 = 0x10;
  return 1;
}

