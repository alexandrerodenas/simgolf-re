/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000bd40 @ 0x3000BD40 */


uint FUN_3000bd40(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  DWORD local_8;
  
  bVar4 = false;
  local_8 = 0;
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x1c) != 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 100);
  LOCK();
  *(char *)piVar1 = *(char *)piVar1 + '\x01';
  UNLOCK();
  piVar2 = (int *)(param_1 + 0x60);
  LOCK();
  *(char *)piVar2 = *(char *)piVar2 + '\x01';
  UNLOCK();
  if ((*piVar1 == 1) && (*piVar2 == 1)) {
    if ((*(uint *)(param_1 + 0x5c) < 0x1000) ||
       ((uint)(*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x50)) < 0x1000)) {
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x48);
    }
    else {
      uVar6 = _RADTimerRead_0();
      *(undefined4 *)(param_1 + 0x20) = 1;
      ReadFile(*(HANDLE *)(param_1 + 0x4c),*(LPVOID *)(param_1 + 0x70),0x1000,&local_8,
               (LPOVERLAPPED)0x0);
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (local_8 < 0x1000) {
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
      *(DWORD *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + local_8;
      *(DWORD *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + local_8;
      *(DWORD *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + local_8;
      if (*(uint *)(param_1 + 0x6c) <= *(uint *)(param_1 + 0x70)) {
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x68);
      }
      *(DWORD *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - local_8;
      *(DWORD *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + local_8;
      if (*(uint *)(param_1 + 0x40) < *(uint *)(param_1 + 0x48)) {
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x48);
      }
      if (*(int *)(param_1 + 0x80) != 0) {
        FUN_3000bb70(param_1,local_8,(int)uVar6);
      }
      uVar7 = _RADTimerRead_0();
      iVar5 = (int)uVar7 - (int)uVar6;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar5;
      if ((iVar3 == 0) && (*(int *)(param_1 + 0x28) == 0)) {
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar5;
      }
      else {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar5;
      }
    }
  }
  else {
    bVar4 = true;
    local_8 = 0xffffffff;
  }
  LOCK();
  *(char *)piVar2 = *(char *)piVar2 + -1;
  UNLOCK();
  LOCK();
  *(char *)piVar1 = *(char *)piVar1 + -1;
  UNLOCK();
  if (bVar4) {
    Sleep(0);
  }
  return local_8;
}

