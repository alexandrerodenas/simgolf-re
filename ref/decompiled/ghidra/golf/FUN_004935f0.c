/* Ghidra decompiled: golf.exe */
/* Function: FUN_004935f0 @ 0x004935F0 */


char * FUN_004935f0(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == 0) {
LAB_0049361c:
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = (char *)(param_1 + -1);
    do {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
      if (cVar1 == '\0') goto LAB_0049361c;
    } while ((cVar1 < DAT_004bba88) || (DAT_004bba89 < cVar1));
  }
  return pcVar2;
}

