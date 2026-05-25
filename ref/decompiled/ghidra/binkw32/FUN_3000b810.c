/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000b810 @ 0x3000B810 */


DWORD FUN_3000b810(DWORD param_1,int param_2,LPVOID param_3,DWORD param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  
  DVar4 = param_1;
  pcVar1 = (char *)(param_1 + 0x60);
  LOCK();
  *pcVar1 = *pcVar1 + '\x01';
  UNLOCK();
  iVar2 = *(int *)(param_1 + 100);
  iVar3 = param_2;
  while (param_2 = iVar3, iVar2 != 0) {
    Sleep(0);
    _BinkService_4(*(int **)(DVar4 + 0x18));
    iVar3 = param_2;
    iVar2 = *(int *)(DVar4 + 100);
  }
  if ((iVar3 != -1) && (*(int *)(DVar4 + 0x50) != iVar3)) {
    SetFilePointer(*(HANDLE *)(DVar4 + 0x4c),*(int *)(DVar4 + 0x78) + iVar3,(PLONG)0x0,0);
    *(int *)(DVar4 + 0x50) = iVar3;
  }
  ReadFile(*(HANDLE *)(DVar4 + 0x4c),param_3,param_4,&param_1,(LPOVERLAPPED)0x0);
  *(DWORD *)(DVar4 + 0x50) = *(int *)(DVar4 + 0x50) + param_1;
  *(undefined4 *)(DVar4 + 0x54) = *(undefined4 *)(DVar4 + 0x50);
  uVar5 = *(int *)(DVar4 + 0x7c) - *(int *)(DVar4 + 0x54);
  if (*(uint *)(DVar4 + 0x3c) <= uVar5) {
    uVar5 = *(uint *)(DVar4 + 0x3c);
  }
  *(uint *)(DVar4 + 0x44) = uVar5;
  LOCK();
  *pcVar1 = *pcVar1 + -1;
  UNLOCK();
  return param_1;
}

