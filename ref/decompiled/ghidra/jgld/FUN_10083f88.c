/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10083f88 @ 0x10083F88 */
/* Body size: 22 addresses */


uint __cdecl FUN_10083f88(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}

