/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084ad6d @ 0x0084AD6D */
/* Body size: 84 addresses */


int FUN_0084ad6d(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar4 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar2 = (**(code **)(*param_2 + 0x2c))(0x40,~uVar4);
  if (iVar2 == 0) {
    uVar3 = (**(code **)(*param_2 + 0x78))();
    FUN_0084b00c(param_2,uVar3);
  }
  else {
    FUN_0084ad10(iVar2,param_1);
  }
  return iVar2;
}

