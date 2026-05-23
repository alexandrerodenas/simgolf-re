/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000b030 @ 0x1000B030 */
/* Body size: 10 addresses */


int __fastcall FUN_1000b030(int param_1)

{
  return (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) + 1;
}

