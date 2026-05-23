/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100493b4 @ 0x100493B4 */
/* Body size: 185 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100493b4(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1005a410 == 0) {
    FUN_1004cc36();
  }
  iVar5 = 0;
  for (puVar6 = DAT_10057e00; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_10057dd8 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_10057e00;
  puVar6 = DAT_10057e00;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_1004b8a0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10046abc(DAT_10057e00);
  DAT_10057e00 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_1005a40c = 1;
  return;
}

