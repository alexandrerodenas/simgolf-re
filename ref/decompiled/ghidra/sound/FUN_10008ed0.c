/* Ghidra decompiled: sound.dll */
/* Function: FUN_10008ed0 @ 0x10008ED0 */


void FUN_10008ed0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  int *piVar4;
  CHAR local_100 [256];
  
  if (DAT_100b49a8 != 0) {
    return;
  }
  if ((param_3 != (int *)0x0) && ((*(byte *)(param_3 + 0xf) & 4) == 0)) {
    return;
  }
  DAT_100b49a8 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
  if ((param_3 != (int *)0x0) && ((*(byte *)(param_3 + 0xf) & 4) == 0)) {
    DAT_100b49a8 = DAT_100b49a8 + 1;
    goto LAB_10008fca;
  }
  DVar3 = timeGetTime();
  uVar1 = param_3[1];
  if (uVar1 == 0) {
    param_3[2] = 0;
LAB_10008f5b:
    if (*param_3 + 0x14U < (uint)param_3[2]) {
      FUN_10042577(local_100,(byte *)s_timer_Late____by__d_ms_10063d98);
      OutputDebugStringA(local_100);
    }
    param_3[1] = DVar3;
    iVar2 = param_3[0x13];
    param_3[0x15] = iVar2;
    if ((iVar2 != 0) && (piVar4 = *(int **)(iVar2 + 8), piVar4 != (int *)0x0)) {
      while( true ) {
        (**(code **)(*piVar4 + 0x44))(param_3[2]);
        (**(code **)(*piVar4 + 0x38))();
        if (param_3[0x15] == 0) break;
        iVar2 = *(int *)(param_3[0x15] + 4);
        param_3[0x15] = iVar2;
        if ((iVar2 == 0) || (piVar4 = *(int **)(iVar2 + 8), piVar4 == (int *)0x0)) break;
      }
    }
  }
  else {
    if (uVar1 < DVar3) {
      param_3[2] = DVar3 - uVar1;
    }
    else {
      param_3[2] = uVar1 - DVar3;
    }
    if (*param_3 - 7U <= (uint)param_3[2]) goto LAB_10008f5b;
  }
  DAT_100b49a8 = DAT_100b49a8 + -1;
LAB_10008fca:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100b4990);
  return;
}

