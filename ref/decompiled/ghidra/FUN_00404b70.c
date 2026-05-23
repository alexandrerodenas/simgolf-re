/* Ghidra decompiled: golf.exe */
/* Function: FUN_00404b70 @ 0x00404B70 */
/* Body size: 69 addresses */


void FUN_00404b70(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  FUN_00476310(param_4,0xffffffff,2,2);
  if (param_1 != (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar3 = param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00477da0(param_1,param_2,param_3,0,~uVar2 - 1);
  }
  return;
}

