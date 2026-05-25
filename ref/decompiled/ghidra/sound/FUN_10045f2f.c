/* Ghidra decompiled: sound.dll */
/* Function: FUN_10045f2f @ 0x10045F2F */


uint __cdecl FUN_10045f2f(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_100b5d08;
  while( true ) {
    if (DAT_100b5d08 + DAT_100b5d04 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}

