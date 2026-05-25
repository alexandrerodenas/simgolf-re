/* Ghidra decompiled: sound.dll */
/* Function: FUN_10008bf0 @ 0x10008BF0 */


void __fastcall FUN_10008bf0(int param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  DAT_100b49a8 = DAT_100b49a8 + 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    DAT_100b49a8 = DAT_100b49a8 + 1;
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffb;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    timeKillEvent(*(UINT *)(param_1 + 0x40));
    timeEndPeriod(*(UINT *)(param_1 + 0x18));
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
  }
  while( true ) {
    puVar1 = *(undefined **)(param_1 + 0x4c);
    if (puVar1 == (undefined *)0x0) {
      return;
    }
    puVar2 = *(undefined4 **)(puVar1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      *puVar2 = 0;
      *(undefined4 **)(param_1 + 0x4c) = puVar2;
    }
    piVar3 = *(int **)(puVar1 + 8);
    FUN_1004249a(puVar1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
    if (piVar3 == (int *)0x0) break;
    (**(code **)(*piVar3 + 0xc))();
  }
  return;
}

