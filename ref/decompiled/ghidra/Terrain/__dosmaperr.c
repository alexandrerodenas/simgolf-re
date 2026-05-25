/* Ghidra decompiled: Terrain.dll */
/* Function: __dosmaperr @ 0x10024350 */


/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2003 Debug */

void __cdecl __dosmaperr(ulong param_1)

{
  DWORD *pDVar1;
  uint local_8;
  
  pDVar1 = FUN_10024400();
  *pDVar1 = param_1;
  local_8 = 0;
  while( true ) {
    if (0x2c < local_8) {
      if ((param_1 < 0x13) || (0x24 < param_1)) {
        if ((param_1 < 0xbc) || (0xca < param_1)) {
          pDVar1 = FUN_100243f0();
          *pDVar1 = 0x16;
        }
        else {
          pDVar1 = FUN_100243f0();
          *pDVar1 = 8;
        }
      }
      else {
        pDVar1 = FUN_100243f0();
        *pDVar1 = 0xd;
      }
      return;
    }
    if (param_1 == *(ulong *)(&DAT_10066680 + local_8 * 8)) break;
    local_8 = local_8 + 1;
  }
  pDVar1 = FUN_100243f0();
  *pDVar1 = *(DWORD *)(&DAT_10066684 + local_8 * 8);
  return;
}

