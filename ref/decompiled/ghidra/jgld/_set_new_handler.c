/* Ghidra decompiled: jgld.dll */
/* Function: _set_new_handler @ 0x10085AC0 */


/* Library Function - Single Match
    int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)
   
   Library: Visual Studio 2003 Debug */

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)

{
  _func_int_uint *p_Var1;
  
  FUN_100833f0(9);
  p_Var1 = DAT_1012882c;
  DAT_1012882c = param_1;
  FUN_10083490(9);
  return p_Var1;
}

