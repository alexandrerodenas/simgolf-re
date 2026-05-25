/* Ghidra decompiled: sound.dll */
/* Function: FUN_10048268 @ 0x10048268 */


uint __cdecl FUN_10048268(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}

