/* Ghidra decompiled: Terrain.dll */
/* Function: __callnewh @ 0x10019D00 */


/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2003 Debug */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if ((DAT_101107a0 != (code *)0x0) && (iVar1 = (*DAT_101107a0)(_Size), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

