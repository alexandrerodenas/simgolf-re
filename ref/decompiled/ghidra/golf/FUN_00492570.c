/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492570 @ 0x00492570 */


void FUN_00492570(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if ((~uVar3 != 1) && (pcVar4 = param_1 + (~uVar3 - 2), param_1 <= pcVar4)) {
    while (iVar2 = FUN_004a6598(*pcVar4), iVar2 != 0) {
      *pcVar4 = '\0';
      if (pcVar4 == param_1) {
        return;
      }
      pcVar4 = pcVar4 + -1;
      if (pcVar4 < param_1) {
        return;
      }
    }
  }
  return;
}

