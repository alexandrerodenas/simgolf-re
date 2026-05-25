/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002eb8f @ 0x3002EB8F */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3002eb8f(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_3004f728 == 0) {
    FUN_30031351();
  }
  iVar5 = 0;
  for (puVar6 = DAT_3004f1f4; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_3004f268 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_3004f1f4;
  puVar6 = DAT_3004f1f4;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_3002fd80((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_3002b909((undefined *)DAT_3004f1f4);
  DAT_3004f1f4 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_3004f724 = 1;
  return;
}

