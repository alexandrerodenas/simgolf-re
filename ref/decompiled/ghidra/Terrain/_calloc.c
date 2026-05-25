/* Ghidra decompiled: Terrain.dll */
/* Function: _calloc @ 0x10015D40 */


/* Library Function - Single Match
    _calloc
   
   Library: Visual Studio 2003 Debug */

void * __cdecl _calloc(size_t _Count,size_t _Size)

{
  undefined1 *puVar1;
  
  puVar1 = __calloc_dbg(_Count,_Size,1,0,0);
  return puVar1;
}

