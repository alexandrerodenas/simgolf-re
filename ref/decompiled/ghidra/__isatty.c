/* Ghidra decompiled: jgld.dll */
/* Function: __isatty @ 0x10093480 */
/* Body size: 50 addresses */


/* Library Function - Single Match
    __isatty
   
   Library: Visual Studio 2003 Debug */

int __cdecl __isatty(int _FileHandle)

{
  uint uVar1;
  
  if ((uint)_FileHandle < DAT_10129f9c) {
    uVar1 = (int)*(char *)((&DAT_10129e60)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) &
            0x40;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

