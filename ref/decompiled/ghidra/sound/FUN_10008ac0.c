/* Ghidra decompiled: sound.dll */
/* Function: FUN_10008ac0 @ 0x10008AC0 */
/* Body size: 234 addresses */


void __fastcall FUN_10008ac0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = DAT_100b49a8 + 1;
  if (((*(uint *)(param_1 + 0x3c) & 1) != 0) && ((*(uint *)(param_1 + 0x3c) & 2) != 0)) {
    DAT_100b49a8 = DAT_100b49a8 + 2;
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffb;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    timeKillEvent(*(UINT *)(param_1 + 0x40));
    timeEndPeriod(*(UINT *)(param_1 + 0x18));
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
    iVar2 = DAT_100b49a8;
  }
  DAT_100b49a8 = iVar2;
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
  puVar3 = &DAT_100b4990;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar1 = *(undefined **)(param_1 + 0x4c);
  if (puVar1 != (undefined *)0x0) {
    puVar3 = *(undefined4 **)(puVar1 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      *puVar3 = 0;
      *(undefined4 **)(param_1 + 0x4c) = puVar3;
    }
    iVar2 = *(int *)(puVar1 + 8);
    FUN_1004249a(puVar1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
    while ((iVar2 != 0 && (puVar1 = *(undefined **)(param_1 + 0x4c), puVar1 != (undefined *)0x0))) {
      puVar3 = *(undefined4 **)(puVar1 + 4);
      if (puVar3 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      else {
        *puVar3 = 0;
        *(undefined4 **)(param_1 + 0x4c) = puVar3;
      }
      iVar2 = *(int *)(puVar1 + 8);
      FUN_1004249a(puVar1);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
    }
  }
  return;
}

