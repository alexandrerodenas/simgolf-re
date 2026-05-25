/* Ghidra decompiled: golf.exe */
/* Function: FUN_004925f0 @ 0x004925F0 */


void FUN_004925f0(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  param_1[~uVar2 - 1] = '\n';
  (param_1 + (~uVar2 - 1))[1] = '\0';
  return;
}

