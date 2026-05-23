/* Ghidra decompiled: golf.exe */
/* Function: FUN_00432620 @ 0x00432620 */
/* Body size: 120 addresses */


void FUN_00432620(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  
  FUN_004762d0(&DAT_00519fd8,0,0,0);
  uVar3 = 0xffffffff;
  pcVar6 = (char *)&DAT_0051a068;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar3 - 1;
  iVar2 = iVar4 * 3;
  if (param_1 < iVar2) {
    param_1 = iVar2;
  }
  iVar5 = iVar4 * -3 + 800;
  if (iVar5 < param_1) {
    param_1 = iVar5;
  }
  FUN_004493d0(param_1 + iVar4 * -3,param_2,iVar2 + param_1,param_2,0x80000000,10,5);
  FUN_00404b70(&DAT_0051a068,param_1,param_2 + -5,0x80007fff);
  return;
}

