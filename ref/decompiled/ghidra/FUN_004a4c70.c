/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a4c70 @ 0x004A4C70 */
/* Body size: 192 addresses */


undefined4 __thiscall
FUN_004a4c70(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  EnterCriticalSection(lpCriticalSection);
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = puVar1[4];
  }
  if (((undefined4 *)puVar1[3] != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    uVar4 = puVar1[4];
    puVar5 = (undefined4 *)puVar1[3];
    for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_2 = *puVar5;
      puVar5 = puVar5 + 1;
      param_2 = param_2 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)param_2 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    if (puVar1[3] != 0) {
      FUN_004a5007(puVar1[3]);
    }
    puVar1[3] = 0;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x14);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = puVar1[1];
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *puVar1;
  }
  uVar2 = puVar1[2];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004a5007(puVar1);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}

