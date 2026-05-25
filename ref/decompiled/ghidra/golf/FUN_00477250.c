/* Ghidra decompiled: golf.exe */
/* Function: FUN_00477250 @ 0x00477250 */


undefined4 FUN_00477250(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = FUN_00477280(param_1,~uVar3 - 1);
  return uVar2;
}

