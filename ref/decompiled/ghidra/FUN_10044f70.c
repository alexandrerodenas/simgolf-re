/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10044f70 @ 0x10044F70 */
/* Body size: 98 addresses */


void __cdecl FUN_10044f70(int *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_2;
  if (((((((bVar1 < 0x29) || (0x7a < bVar1)) || ((0x5a < bVar1 && (bVar1 < 0x61)))) ||
        ((bVar1 = param_2[1], bVar1 < 0x29 || (0x7a < bVar1)))) ||
       ((0x5a < bVar1 && (bVar1 < 0x61)))) ||
      ((((bVar1 = param_2[2], bVar1 < 0x29 || (0x7a < bVar1)) || ((0x5a < bVar1 && (bVar1 < 0x61))))
       || ((bVar1 = param_2[3], bVar1 < 0x29 || (0x7a < bVar1)))))) ||
     ((0x5a < bVar1 && (bVar1 < 0x61)))) {
    FUN_10042df0(param_1,(undefined4 *)s_invalid_chunk_type_100562bc);
  }
  return;
}

