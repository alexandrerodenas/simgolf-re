/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002a7c0 @ 0x1002A7C0 */
/* Body size: 51 addresses */


undefined1 * __fastcall FUN_1002a7c0(undefined1 *param_1)

{
  HANDLE pvVar1;
  
  *param_1 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 0x24) = pvVar1;
  return param_1;
}

