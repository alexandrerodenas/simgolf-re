/* Ghidra decompiled: golf.exe */
/* Function: FUN_00486200 @ 0x00486200 */
/* Body size: 80 addresses */


void __thiscall FUN_00486200(int *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)param_1[0x15d];
  if (pcVar3 != (char *)0x0) {
    if (param_2 == (char *)0x0) {
      *pcVar3 = '\0';
    }
    else {
      _strncpy(pcVar3,param_2,param_1[0x15e]);
    }
    uVar2 = 0xffffffff;
    pcVar3 = (char *)param_1[0x15d];
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    param_1[0x169] = ~uVar2 - 1;
    (**(code **)(*param_1 + 0x120))();
  }
  return;
}

