/* Ghidra decompiled: Terrain.dll */
/* Function: __calloc_dbg @ 0x10015D70 */


/* Library Function - Single Match
    __calloc_dbg
   
   Library: Visual Studio 2003 Debug */

undefined1 * __cdecl
__calloc_dbg(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  void *this;
  undefined1 *puVar1;
  undefined1 *local_10;
  
  this = (void *)(param_2 * param_1);
  puVar1 = (undefined1 *)__malloc_dbg(this,this,param_3,param_4,param_5);
  if (puVar1 != (undefined1 *)0x0) {
    for (local_10 = puVar1; local_10 < puVar1 + (int)this; local_10 = local_10 + 1) {
      *local_10 = 0;
    }
  }
  return puVar1;
}

