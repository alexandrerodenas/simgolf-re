/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004e818 @ 0x1004E818 */
/* Body size: 55 addresses */


void __cdecl FUN_1004e818(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) {
      pcVar3 = param_1;
      if (cVar2 != ';') goto LAB_1004e82f;
      do {
        pcVar1 = pcVar3 + 1;
        *pcVar3 = pcVar3[1];
        pcVar3 = pcVar1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_1004e82f:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}

