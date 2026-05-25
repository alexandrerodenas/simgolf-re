/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3000bc00 @ 0x3000BC00 */


uint FUN_3000bc00(int param_1,int param_2)

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
  LOCK();
  *pcVar1 = *pcVar1 + -1;
  UNLOCK();
  return param_2 + 0xfffU & 0xfffff000;
}

