/* Ghidra decompiled: jgld.dll */
/* Function: __dosmaperr @ 0x10090430 */
/* Body size: 145 addresses */


/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 2003 Debug */

void __cdecl __dosmaperr(ulong param_1)

{
  DWORD *pDVar1;
  undefined4 *puVar2;
  uint local_8;
  
  pDVar1 = FUN_100904e0();
  *pDVar1 = param_1;
  local_8 = 0;
  while( true ) {
    if (0x2c < local_8) {
      if ((param_1 < 0x13) || (0x24 < param_1)) {
        if ((param_1 < 0xbc) || (0xca < param_1)) {
          puVar2 = (undefined4 *)FUN_100904d0();
          *puVar2 = 0x16;
        }
        else {
          puVar2 = (undefined4 *)FUN_100904d0();
          *puVar2 = 8;
        }
      }
      else {
        puVar2 = (undefined4 *)FUN_100904d0();
        *puVar2 = 0xd;
      }
      return;
    }
    if (param_1 == *(ulong *)(&DAT_10125ca8 + local_8 * 8)) break;
    local_8 = local_8 + 1;
  }
  puVar2 = (undefined4 *)FUN_100904d0();
  *puVar2 = *(undefined4 *)(&DAT_10125cac + local_8 * 8);
  return;
}

