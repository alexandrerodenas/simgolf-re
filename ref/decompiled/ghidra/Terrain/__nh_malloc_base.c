/* Ghidra decompiled: Terrain.dll */
/* Function: __nh_malloc_base @ 0x1001A050 */


/* Library Function - Single Match
    __nh_malloc_base
   
   Library: Visual Studio 2003 Debug */

int __thiscall __nh_malloc_base(void *this,uint param_1,int param_2)

{
  int iVar1;
  void *extraout_ECX;
  int local_8;
  
  if (param_1 < 0xffffffe1) {
    do {
      if (param_1 < 0xffffffe1) {
        local_8 = __heap_alloc_base(this,param_1);
      }
      else {
        local_8 = 0;
      }
      if (local_8 != 0) {
        return local_8;
      }
      if (param_2 == 0) {
        return 0;
      }
      iVar1 = __callnewh(param_1);
      this = extraout_ECX;
    } while (iVar1 != 0);
  }
  return 0;
}

