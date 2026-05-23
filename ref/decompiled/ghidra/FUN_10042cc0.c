/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10042cc0 @ 0x10042CC0 */
/* Body size: 56 addresses */


void * __cdecl FUN_10042cc0(int *param_1,size_t param_2)

{
  void *pvVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    pvVar1 = _malloc(param_2);
    if (pvVar1 == (void *)0x0) {
      FUN_10042d90(param_1,s_Out_of_Memory_1005590c);
    }
    return pvVar1;
  }
  return (void *)0x0;
}

