/* Ghidra decompiled: Terrain.dll */
/* Function: _set_new_handler @ 0x10019CC0 */


/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2003 Debug */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  void *in_ECX;
  
  FUN_10019e10(in_ECX,9);
  p_Var1 = DAT_101107a0;
  DAT_101107a0 = param_1;
  FUN_10019eb0(9);
  return p_Var1;
}

