/* Ghidra decompiled: jgld.dll */
/* Function: setSBCS @ 0x10091A70 */
/* Body size: 116 addresses */


/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Debug */

void __cdecl setSBCS(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x101; local_8 = local_8 + 1) {
    (&DAT_10129d40)[local_8] = 0;
  }
  DAT_10129bb4 = 0;
  DAT_10129c3c = 0;
  DAT_10129e44 = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    *(undefined2 *)(&DAT_10129c30 + local_8 * 2) = 0;
  }
  return;
}

