/* Ghidra decompiled: golf.exe */
/* Function: FUN_004925d0 @ 0x004925D0 */


void FUN_004925d0(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = _strrchr(param_1,10);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  return;
}

