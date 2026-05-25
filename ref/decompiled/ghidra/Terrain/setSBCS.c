/* Ghidra decompiled: Terrain.dll */
/* Function: setSBCS @ 0x1002A050 */


/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 2003 Debug */

void __cdecl setSBCS(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 0x101; local_8 = local_8 + 1) {
    (&DAT_10110d00)[local_8] = 0;
  }
  DAT_10110b74 = 0;
  DAT_10110bfc = 0;
  DAT_10110e04 = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    *(undefined2 *)(&DAT_10110bf0 + local_8 * 2) = 0;
  }
  return;
}

