/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487ee0 @ 0x00487EE0 */


int __thiscall FUN_00487ee0(int param_1,size_t param_2)

{
  void *pvVar1;
  
  FUN_00487f30();
  pvVar1 = _malloc(param_2);
  *(void **)(param_1 + 0x15c) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 4;
  }
  pvVar1 = _malloc(param_2);
  *(void **)(param_1 + 0x160) = pvVar1;
  return (-(uint)(pvVar1 != (void *)0x0) & 0xfffffffc) + 4;
}

