/* Ghidra decompiled: jgld.dll */
/* Function: __callnewh @ 0x10085B00 */
/* Body size: 45 addresses */


/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 2003 Debug */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  if ((DAT_1012882c != (code *)0x0) && (iVar1 = (*DAT_1012882c)(_Size), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

