/* Ghidra decompiled: golf.exe */
/* Function: FUN_004aaff3 @ 0x004AAFF3 */
/* Body size: 153 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aaff3(void)

{
  void *pvVar1;
  char *pcVar2;
  int local_c;
  int local_8;
  
  if (DAT_00842168 == 0) {
    FUN_004ac8bc();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_00840b60,0x104);
  _DAT_00840a98 = &DAT_00840b60;
  pcVar2 = &DAT_00840b60;
  if (*DAT_00842160 != '\0') {
    pcVar2 = DAT_00842160;
  }
  FUN_004ab08c(pcVar2,0,0,&local_8,&local_c);
  pvVar1 = _malloc(local_c + local_8 * 4);
  if (pvVar1 == (void *)0x0) {
    FUN_004a6937(8);
  }
  FUN_004ab08c(pcVar2,pvVar1,(void *)((int)pvVar1 + local_8 * 4),&local_8,&local_c);
  _DAT_00840a80 = pvVar1;
  _DAT_00840a7c = local_8 + -1;
  return;
}

