/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000bc60 @ 0x3000BC60 */


void FUN_3000bc60(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  
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
  uVar3 = param_3 & 0xfffff000;
  *(int *)(param_1 + 0x68) = param_2;
  *(int *)(param_1 + 0x58) = param_2;
  *(int *)(param_1 + 0x70) = param_2;
  *(uint *)(param_1 + 0x6c) = param_2 + uVar3;
  *(uint *)(param_1 + 0x3c) = uVar3;
  *(uint *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x7c) = param_4;
  *(undefined4 *)(param_1 + 0x80) = param_5;
  LOCK();
  *pcVar1 = *pcVar1 + -1;
  UNLOCK();
  return;
}

