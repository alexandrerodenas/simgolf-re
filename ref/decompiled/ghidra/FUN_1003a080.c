/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003a080 @ 0x1003A080 */
/* Body size: 28 addresses */


undefined4 __fastcall FUN_1003a080(int param_1)

{
  if ((*(byte *)(param_1 + 200) & 2) == 0) {
    return 0x14;
  }
  thunk_FUN_100377f0((void *)(param_1 + 0x70),1);
  return 0;
}

