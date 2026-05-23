/* Ghidra decompiled: jgld.dll */
/* Function: __heapset @ 0x100866F0 */
/* Body size: 10 addresses */


/* Library Function - Single Match
    __heapset
   
   Library: Visual Studio 2003 Debug */

int __cdecl __heapset(uint _Fill)

{
  int iVar1;
  
  iVar1 = __heapchk();
  return iVar1;
}

