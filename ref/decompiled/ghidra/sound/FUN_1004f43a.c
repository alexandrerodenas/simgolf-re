/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004f43a @ 0x1004F43A */


undefined4 __cdecl FUN_1004f43a(short param_1)

{
  short *psVar1;
  
  psVar1 = &DAT_100681e4;
  do {
    if (param_1 == *psVar1) {
      return 0;
    }
    psVar1 = psVar1 + 1;
  } while ((int)psVar1 < 0x100681f8);
  return 1;
}

