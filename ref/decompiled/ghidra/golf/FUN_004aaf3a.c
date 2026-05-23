/* Ghidra decompiled: golf.exe */
/* Function: FUN_004aaf3a @ 0x004AAF3A */
/* Body size: 185 addresses */


void FUN_004aaf3a(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  
  if (DAT_00842168 == 0) {
    FUN_004ac8bc();
  }
  iVar5 = 0;
  for (pcVar6 = DAT_00840aac; *pcVar6 != '\0'; pcVar6 = pcVar6 + sVar2 + 1) {
    if (*pcVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen(pcVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_00840a88 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    FUN_004a6937(9);
  }
  cVar1 = *DAT_00840aac;
  pcVar6 = DAT_00840aac;
  while (cVar1 != '\0') {
    sVar2 = _strlen(pcVar6);
    if (*pcVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        FUN_004a6937(9);
      }
      FUN_004abca0(*puVar3,pcVar6);
      puVar3 = puVar3 + 1;
    }
    pcVar6 = pcVar6 + sVar2 + 1;
    cVar1 = *pcVar6;
  }
  FUN_004a5007(DAT_00840aac);
  DAT_00840aac = (char *)0x0;
  *puVar3 = 0;
  DAT_00842164 = 1;
  return;
}

