/* Ghidra decompiled: golf.exe */
/* Function: FUN_00474820 @ 0x00474820 */
/* Body size: 62 addresses */


undefined4 __thiscall FUN_00474820(int param_1,size_t param_2)

{
  void *pvVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_004747e0();
  }
  pvVar1 = _malloc(param_2);
  *(void **)(param_1 + 8) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 1;
  }
  *(size_t *)(param_1 + 0x14) = param_2;
  *(size_t *)(param_1 + 0x10) = param_2;
  *(void **)(param_1 + 0xc) = pvVar1;
  return 0;
}

