/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a4db0 @ 0x004A4DB0 */
/* Body size: 225 addresses */


undefined4 __thiscall
FUN_004a4db0(int param_1,undefined4 *param_2,size_t param_3,undefined4 param_4,undefined4 param_5)

{
  void *pvVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return 3;
  }
  *param_2 = 0;
  if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 0x10)) {
    return 0x12;
  }
  if (*(int *)(param_1 + 4) == 0) {
    pvVar1 = _malloc(0x14);
    *(void **)(param_1 + 4) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 4;
    }
  }
  else {
    pvVar1 = _malloc(0x14);
    *(void **)(*(int *)(param_1 + 8) + 0x10) = pvVar1;
    pvVar1 = *(void **)(*(int *)(param_1 + 8) + 0x10);
    if (pvVar1 == (void *)0x0) {
      return 4;
    }
  }
  *(void **)(param_1 + 8) = pvVar1;
  *(undefined4 *)((int)pvVar1 + 0x10) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = param_5;
  **(undefined4 **)(param_1 + 8) = param_4;
  if (param_3 != 0) {
    pvVar1 = _malloc(param_3);
    *(void **)(*(int *)(param_1 + 8) + 8) = pvVar1;
    if (*(int *)(*(int *)(param_1 + 8) + 8) == 0) {
      FUN_004a4ed0();
      return 4;
    }
    *(size_t *)(*(int *)(param_1 + 8) + 0xc) = param_3;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  return 0;
}

