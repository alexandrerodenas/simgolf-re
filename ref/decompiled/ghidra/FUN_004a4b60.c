/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a4b60 @ 0x004A4B60 */
/* Body size: 261 addresses */


undefined4 __thiscall
FUN_004a4b60(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  LPCRITICAL_SECTION lpCriticalSection;
  void *pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 4) == 0) {
    pvVar1 = _malloc(0x18);
    *(void **)(param_1 + 4) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      LeaveCriticalSection(lpCriticalSection);
      return 4;
    }
  }
  else {
    pvVar1 = _malloc(0x18);
    *(void **)(*(int *)(param_1 + 8) + 0x14) = pvVar1;
    pvVar1 = *(void **)(*(int *)(param_1 + 8) + 0x14);
    if (pvVar1 == (void *)0x0) {
      LeaveCriticalSection(lpCriticalSection);
      return 4;
    }
  }
  *(void **)(param_1 + 8) = pvVar1;
  *(undefined4 *)((int)pvVar1 + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = param_4;
  **(undefined4 **)(param_1 + 8) = param_5;
  *(undefined4 *)(*(int *)(param_1 + 8) + 8) = param_6;
  if (param_3 != 0) {
    pvVar1 = _malloc(param_3);
    *(void **)(*(int *)(param_1 + 8) + 0xc) = pvVar1;
    puVar3 = *(undefined4 **)(*(int *)(param_1 + 8) + 0xc);
    if (puVar3 == (undefined4 *)0x0) {
      LeaveCriticalSection(lpCriticalSection);
      return 4;
    }
    if (param_2 != (undefined4 *)0x0) {
      for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    *(uint *)(*(int *)(param_1 + 8) + 0x10) = param_3;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

