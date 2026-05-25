/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10021e28 @ 0x10021E28 */


uint __cdecl FUN_10021e28(undefined4 param_1,uint param_2)

{
  if ((param_2 & 0x7ff00000) != 0x7ff00000) {
    return param_2 & 0x7ff00000;
  }
  return param_2;
}

