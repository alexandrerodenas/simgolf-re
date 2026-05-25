/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000bce0 @ 0x3000BCE0 */


void FUN_3000bce0(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(param_1 + 0x60);
  LOCK();
  *pcVar1 = *pcVar1 + '\x01';
  UNLOCK();
  iVar2 = *(int *)(param_1 + 100);
  while (iVar2 != 0) {
    Sleep(0);
    _BinkService_4(*(int **)(param_1 + 0x18));
    iVar2 = *(int *)(param_1 + 100);
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x4c));
  }
  LOCK();
  *pcVar1 = *pcVar1 + -1;
  UNLOCK();
  return;
}

